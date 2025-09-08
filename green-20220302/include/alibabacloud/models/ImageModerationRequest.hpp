// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_PTR_TO_JSON(ServiceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_PTR_FROM_JSON(ServiceParameters, serviceParameters_);
    };
    ImageModerationRequest() = default ;
    ImageModerationRequest(const ImageModerationRequest &) = default ;
    ImageModerationRequest(ImageModerationRequest &&) = default ;
    ImageModerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationRequest() = default ;
    ImageModerationRequest& operator=(const ImageModerationRequest &) = default ;
    ImageModerationRequest& operator=(ImageModerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->service_ != nullptr
        && this->serviceParameters_ != nullptr; };
    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ImageModerationRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string serviceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline ImageModerationRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The moderation services supported by Image Moderation 2.0. Valid values:
    // 
    // *   baselineCheck: common baseline moderation
    // *   baselineCheck_pro: common baseline moderation_Professional
    // *   baselineCheck_cb: common baseline moderation_For regions outside the Chinese mainland
    // *   tonalityImprove: content governance moderation
    // *   aigcCheck: AI-generated image identification
    // *   profilePhotoCheck: avatar image moderation
    // *   advertisingCheck: marketing material identification
    // *   liveStreamCheck: moderation of screenshots of videos and live streams
    // 
    // Valid values:
    // 
    // *   liveStreamCheck: moderation of screenshots of videos and live streams
    // *   baselineCheck: common baseline moderation
    // *   aigcCheck: AI-generated image identification
    // *   baselineCheck_pro: common baseline moderation_Professional
    // *   advertisingCheck: marketing material identification
    // *   baselineCheck_cb: common baseline moderation_For regions outside the Chinese mainland
    // *   tonalityImprove: content governance moderation
    // *   profilePhotoCheck: avatar image moderation
    std::shared_ptr<string> service_ = nullptr;
    // The parameters required by the moderation service. The value is a JSON string.
    // 
    // *   imageUrl: the URL of the object that you want to moderate. This parameter is required.
    // *   dataId: the ID of the object that you want to moderate. This parameter is optional.
    std::shared_ptr<string> serviceParameters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
