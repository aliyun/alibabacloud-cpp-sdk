// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOAPPREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIDEOAPPREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VideoAppReportRequestDeviceInfo.hpp>
#include <alibabacloud/models/VideoAppReportRequestPayload.hpp>
#include <alibabacloud/models/VideoAppReportRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class VideoAppReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoAppReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, VideoAppReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    VideoAppReportRequest() = default ;
    VideoAppReportRequest(const VideoAppReportRequest &) = default ;
    VideoAppReportRequest(VideoAppReportRequest &&) = default ;
    VideoAppReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoAppReportRequest() = default ;
    VideoAppReportRequest& operator=(const VideoAppReportRequest &) = default ;
    VideoAppReportRequest& operator=(VideoAppReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->payload_ != nullptr && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const VideoAppReportRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, VideoAppReportRequestDeviceInfo) };
    inline VideoAppReportRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, VideoAppReportRequestDeviceInfo) };
    inline VideoAppReportRequest& setDeviceInfo(const VideoAppReportRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline VideoAppReportRequest& setDeviceInfo(VideoAppReportRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const VideoAppReportRequestPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, VideoAppReportRequestPayload) };
    inline VideoAppReportRequestPayload payload() { DARABONBA_PTR_GET(payload_, VideoAppReportRequestPayload) };
    inline VideoAppReportRequest& setPayload(const VideoAppReportRequestPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline VideoAppReportRequest& setPayload(VideoAppReportRequestPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const VideoAppReportRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, VideoAppReportRequestUserInfo) };
    inline VideoAppReportRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, VideoAppReportRequestUserInfo) };
    inline VideoAppReportRequest& setUserInfo(const VideoAppReportRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline VideoAppReportRequest& setUserInfo(VideoAppReportRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    std::shared_ptr<VideoAppReportRequestDeviceInfo> deviceInfo_ = nullptr;
    std::shared_ptr<VideoAppReportRequestPayload> payload_ = nullptr;
    // This parameter is required.
    std::shared_ptr<VideoAppReportRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
