//
//  gyroflow.h
//  Gyroflow Toolbox
//
//  Created by Chris Hocking on 11/12/2022.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//
// This is the "interface" to the Rust code:
//
const char* processFrame(
    const char*                 unique_identifier,
    uint32_t                    width,
    uint32_t                    height,
    const char*                 pixel_format,
    int                         number_of_bytes,
    const char*                 path,
    const char*                 data,
    int64_t                     timestamp,
    double                      fov,
    double                      smoothness,
    double                      lens_correction,
    double                      horizon_lock,
    double                      horizon_roll,
    double                      position_offset_x,
    double                      position_offset_y,
    double                      input_rotation,
    double                      video_rotation,
    uint8_t                     fov_overview,
    void                        *in_mtl_texture,
    void                        *out_mtl_texture,
    void                        *command_queue
);

uint32_t trashCache(
    void
);

const char* importMediaFile(
    const char*                 media_file_path
);

const char* doesGyroflowProjectContainStabilisationData(
    const char*                 gyroflow_project_data
);

const char* loadLensProfile(
    const char*                 gyroflow_project_data,
    const char*                 lens_profile_path
);
