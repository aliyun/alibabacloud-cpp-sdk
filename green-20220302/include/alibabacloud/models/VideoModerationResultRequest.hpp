// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    VideoModerationResultRequest() = default ;
    VideoModerationResultRequest(const VideoModerationResultRequest &) = default ;
    VideoModerationResultRequest(VideoModerationResultRequest &&) = default ;
    VideoModerationResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultRequest() = default ;
    VideoModerationResultRequest& operator=(const VideoModerationResultRequest &) = default ;
    VideoModerationResultRequest& operator=(VideoModerationResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->service_ == nullptr
        && return this->serviceParameters_ == nullptr; };
    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline VideoModerationResultRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string serviceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline VideoModerationResultRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The type of the moderation service.
    // 
    // Valid values:
    // 
    // *   liveStreamDetection: live stream moderation
    // *   videoDetection: video file moderation
    // *   liveStreamDetection_cb: live stream moderation_For regions outside the Chinese mainland
    // *   videoDetection_cb: video file moderation_For regions outside the Chinese mainland.
    std::shared_ptr<string> service_ = nullptr;
    // The parameters required by the moderation service. The ID of the task that you want to query. You can specify one task ID at a time.
    std::shared_ptr<string> serviceParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
