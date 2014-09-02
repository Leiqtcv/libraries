#ifndef _ROS_fovis_ros_FovisInfo_h
#define _ROS_fovis_ros_FovisInfo_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace fovis_ros
{

  class FovisInfo : public ros::Msg
  {
    public:
      std_msgs::Header header;
      bool change_reference_frame;
      int32_t fast_threshold;
      int32_t num_total_detected_keypoints;
      uint8_t num_detected_keypoints_length;
      int32_t st_num_detected_keypoints;
      int32_t * num_detected_keypoints;
      int32_t num_total_keypoints;
      uint8_t num_keypoints_length;
      int32_t st_num_keypoints;
      int32_t * num_keypoints;
      int32_t motion_estimate_status_code;
      const char* motion_estimate_status;
      bool motion_estimate_valid;
      int32_t num_matches;
      int32_t num_inliers;
      int32_t num_reprojection_failures;
      float runtime;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_change_reference_frame;
      u_change_reference_frame.real = this->change_reference_frame;
      *(outbuffer + offset + 0) = (u_change_reference_frame.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->change_reference_frame);
      union {
        int32_t real;
        uint32_t base;
      } u_fast_threshold;
      u_fast_threshold.real = this->fast_threshold;
      *(outbuffer + offset + 0) = (u_fast_threshold.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_fast_threshold.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_fast_threshold.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_fast_threshold.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->fast_threshold);
      union {
        int32_t real;
        uint32_t base;
      } u_num_total_detected_keypoints;
      u_num_total_detected_keypoints.real = this->num_total_detected_keypoints;
      *(outbuffer + offset + 0) = (u_num_total_detected_keypoints.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_num_total_detected_keypoints.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_num_total_detected_keypoints.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_num_total_detected_keypoints.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->num_total_detected_keypoints);
      *(outbuffer + offset++) = num_detected_keypoints_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < num_detected_keypoints_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_num_detected_keypointsi;
      u_num_detected_keypointsi.real = this->num_detected_keypoints[i];
      *(outbuffer + offset + 0) = (u_num_detected_keypointsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_num_detected_keypointsi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_num_detected_keypointsi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_num_detected_keypointsi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->num_detected_keypoints[i]);
      }
      union {
        int32_t real;
        uint32_t base;
      } u_num_total_keypoints;
      u_num_total_keypoints.real = this->num_total_keypoints;
      *(outbuffer + offset + 0) = (u_num_total_keypoints.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_num_total_keypoints.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_num_total_keypoints.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_num_total_keypoints.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->num_total_keypoints);
      *(outbuffer + offset++) = num_keypoints_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < num_keypoints_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_num_keypointsi;
      u_num_keypointsi.real = this->num_keypoints[i];
      *(outbuffer + offset + 0) = (u_num_keypointsi.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_num_keypointsi.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_num_keypointsi.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_num_keypointsi.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->num_keypoints[i]);
      }
      union {
        int32_t real;
        uint32_t base;
      } u_motion_estimate_status_code;
      u_motion_estimate_status_code.real = this->motion_estimate_status_code;
      *(outbuffer + offset + 0) = (u_motion_estimate_status_code.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_motion_estimate_status_code.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_motion_estimate_status_code.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_motion_estimate_status_code.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->motion_estimate_status_code);
      uint32_t length_motion_estimate_status = strlen(this->motion_estimate_status);
      memcpy(outbuffer + offset, &length_motion_estimate_status, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->motion_estimate_status, length_motion_estimate_status);
      offset += length_motion_estimate_status;
      union {
        bool real;
        uint8_t base;
      } u_motion_estimate_valid;
      u_motion_estimate_valid.real = this->motion_estimate_valid;
      *(outbuffer + offset + 0) = (u_motion_estimate_valid.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->motion_estimate_valid);
      union {
        int32_t real;
        uint32_t base;
      } u_num_matches;
      u_num_matches.real = this->num_matches;
      *(outbuffer + offset + 0) = (u_num_matches.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_num_matches.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_num_matches.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_num_matches.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->num_matches);
      union {
        int32_t real;
        uint32_t base;
      } u_num_inliers;
      u_num_inliers.real = this->num_inliers;
      *(outbuffer + offset + 0) = (u_num_inliers.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_num_inliers.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_num_inliers.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_num_inliers.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->num_inliers);
      union {
        int32_t real;
        uint32_t base;
      } u_num_reprojection_failures;
      u_num_reprojection_failures.real = this->num_reprojection_failures;
      *(outbuffer + offset + 0) = (u_num_reprojection_failures.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_num_reprojection_failures.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_num_reprojection_failures.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_num_reprojection_failures.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->num_reprojection_failures);
      int32_t * val_runtime = (int32_t *) &(this->runtime);
      int32_t exp_runtime = (((*val_runtime)>>23)&255);
      if(exp_runtime != 0)
        exp_runtime += 1023-127;
      int32_t sig_runtime = *val_runtime;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_runtime<<5) & 0xff;
      *(outbuffer + offset++) = (sig_runtime>>3) & 0xff;
      *(outbuffer + offset++) = (sig_runtime>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_runtime<<4) & 0xF0) | ((sig_runtime>>19)&0x0F);
      *(outbuffer + offset++) = (exp_runtime>>4) & 0x7F;
      if(this->runtime < 0) *(outbuffer + offset -1) |= 0x80;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      union {
        bool real;
        uint8_t base;
      } u_change_reference_frame;
      u_change_reference_frame.base = 0;
      u_change_reference_frame.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->change_reference_frame = u_change_reference_frame.real;
      offset += sizeof(this->change_reference_frame);
      union {
        int32_t real;
        uint32_t base;
      } u_fast_threshold;
      u_fast_threshold.base = 0;
      u_fast_threshold.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_fast_threshold.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_fast_threshold.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_fast_threshold.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->fast_threshold = u_fast_threshold.real;
      offset += sizeof(this->fast_threshold);
      union {
        int32_t real;
        uint32_t base;
      } u_num_total_detected_keypoints;
      u_num_total_detected_keypoints.base = 0;
      u_num_total_detected_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_num_total_detected_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_num_total_detected_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_num_total_detected_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->num_total_detected_keypoints = u_num_total_detected_keypoints.real;
      offset += sizeof(this->num_total_detected_keypoints);
      uint8_t num_detected_keypoints_lengthT = *(inbuffer + offset++);
      if(num_detected_keypoints_lengthT > num_detected_keypoints_length)
        this->num_detected_keypoints = (int32_t*)realloc(this->num_detected_keypoints, num_detected_keypoints_lengthT * sizeof(int32_t));
      offset += 3;
      num_detected_keypoints_length = num_detected_keypoints_lengthT;
      for( uint8_t i = 0; i < num_detected_keypoints_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_num_detected_keypoints;
      u_st_num_detected_keypoints.base = 0;
      u_st_num_detected_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_num_detected_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_num_detected_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_num_detected_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_num_detected_keypoints = u_st_num_detected_keypoints.real;
      offset += sizeof(this->st_num_detected_keypoints);
        memcpy( &(this->num_detected_keypoints[i]), &(this->st_num_detected_keypoints), sizeof(int32_t));
      }
      union {
        int32_t real;
        uint32_t base;
      } u_num_total_keypoints;
      u_num_total_keypoints.base = 0;
      u_num_total_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_num_total_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_num_total_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_num_total_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->num_total_keypoints = u_num_total_keypoints.real;
      offset += sizeof(this->num_total_keypoints);
      uint8_t num_keypoints_lengthT = *(inbuffer + offset++);
      if(num_keypoints_lengthT > num_keypoints_length)
        this->num_keypoints = (int32_t*)realloc(this->num_keypoints, num_keypoints_lengthT * sizeof(int32_t));
      offset += 3;
      num_keypoints_length = num_keypoints_lengthT;
      for( uint8_t i = 0; i < num_keypoints_length; i++){
      union {
        int32_t real;
        uint32_t base;
      } u_st_num_keypoints;
      u_st_num_keypoints.base = 0;
      u_st_num_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_num_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_num_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_num_keypoints.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_num_keypoints = u_st_num_keypoints.real;
      offset += sizeof(this->st_num_keypoints);
        memcpy( &(this->num_keypoints[i]), &(this->st_num_keypoints), sizeof(int32_t));
      }
      union {
        int32_t real;
        uint32_t base;
      } u_motion_estimate_status_code;
      u_motion_estimate_status_code.base = 0;
      u_motion_estimate_status_code.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_motion_estimate_status_code.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_motion_estimate_status_code.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_motion_estimate_status_code.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->motion_estimate_status_code = u_motion_estimate_status_code.real;
      offset += sizeof(this->motion_estimate_status_code);
      uint32_t length_motion_estimate_status;
      memcpy(&length_motion_estimate_status, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_motion_estimate_status; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_motion_estimate_status-1]=0;
      this->motion_estimate_status = (char *)(inbuffer + offset-1);
      offset += length_motion_estimate_status;
      union {
        bool real;
        uint8_t base;
      } u_motion_estimate_valid;
      u_motion_estimate_valid.base = 0;
      u_motion_estimate_valid.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->motion_estimate_valid = u_motion_estimate_valid.real;
      offset += sizeof(this->motion_estimate_valid);
      union {
        int32_t real;
        uint32_t base;
      } u_num_matches;
      u_num_matches.base = 0;
      u_num_matches.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_num_matches.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_num_matches.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_num_matches.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->num_matches = u_num_matches.real;
      offset += sizeof(this->num_matches);
      union {
        int32_t real;
        uint32_t base;
      } u_num_inliers;
      u_num_inliers.base = 0;
      u_num_inliers.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_num_inliers.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_num_inliers.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_num_inliers.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->num_inliers = u_num_inliers.real;
      offset += sizeof(this->num_inliers);
      union {
        int32_t real;
        uint32_t base;
      } u_num_reprojection_failures;
      u_num_reprojection_failures.base = 0;
      u_num_reprojection_failures.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_num_reprojection_failures.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_num_reprojection_failures.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_num_reprojection_failures.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->num_reprojection_failures = u_num_reprojection_failures.real;
      offset += sizeof(this->num_reprojection_failures);
      uint32_t * val_runtime = (uint32_t*) &(this->runtime);
      offset += 3;
      *val_runtime = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_runtime |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_runtime |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_runtime |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_runtime = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_runtime |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_runtime !=0)
        *val_runtime |= ((exp_runtime)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->runtime = -this->runtime;
     return offset;
    }

    const char * getType(){ return "fovis_ros/FovisInfo"; };
    const char * getMD5(){ return "2e964f4d41f3876e14c50795334bf34c"; };

  };

}
#endif