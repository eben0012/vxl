#include <iostream>
#include <vidl/vidl_v4l_ulong_fix.h> // include first to fix linux/videodev.h ulong problem
#include <vidl/vidl_v4l_istream.h>
#include <vidl/vidl_image_list_ostream.h>

#include <vul/vul_timer.h>
#include <vcl_compiler.h>

int main()
{
    vidl_v4l_istream test("/dev/video1");
    vidl_image_list_ostream test_out("./dump","%05d","ppm");

    vul_timer timer;
    int i = 10;
    while ( test.advance()
            && --i)
    {
        std::cout << "Grabbing: " << i << std::endl;
        if (!test_out.write_frame(test.current_frame()))
            std::cout << "Couldn't write frame\n";
    }
    timer.print(std::cout);

    return 0;
}
