// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    VideoModerationRequest() = default ;
    VideoModerationRequest(const VideoModerationRequest &) = default ;
    VideoModerationRequest(VideoModerationRequest &&) = default ;
    VideoModerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationRequest() = default ;
    VideoModerationRequest& operator=(const VideoModerationRequest &) = default ;
    VideoModerationRequest& operator=(VideoModerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->service_ == nullptr
        && this->serviceParameters_ == nullptr; };
    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline VideoModerationRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline VideoModerationRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The service code for video moderation.
    shared_ptr<string> service_ {};
    // The parameters that are required for the moderation service. The value must be a JSON string.
    // 
    // - url: Required. The URL of the object to be moderated. Make sure that the URL can be accessed over the Internet.
    // - dataId: Optional. The data ID of the object to be moderated.
    // 
    // For more information, see [ServiceParameter](https://help.aliyun.com/document_detail/2505810.html).
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
