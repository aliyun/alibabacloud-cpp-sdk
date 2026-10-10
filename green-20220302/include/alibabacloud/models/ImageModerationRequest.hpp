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
    virtual bool empty() const override { return this->service_ == nullptr
        && this->serviceParameters_ == nullptr; };
    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string getService() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline ImageModerationRequest& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline ImageModerationRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The detection types supported by Image Moderation Enhanced Edition. Valid values:
    // - baselineCheck: general baseline check
    // - baselineCheck_pro: general baseline check (Professional Edition)
    // - baselineCheck_cb: general baseline check (Overseas Edition)
    // - tonalityImprove: content governance detection
    // - aigcCheck: AIGC image detection
    // - aigcViolationDetection: AIGC image infringement detection
    // - aigcDetector: AIGC image generation determination
    // - profilePhotoCheck: profile picture detection
    // - postImageCheck: post and comment image detection
    // - advertisingCheck: marketing material detection
    // - liveStreamCheck: video or live stream screenshot detection
    // - generalOcr: general image and text OCR
    // - generalRecognition: universal image recognition
    // - postImageCheckByVL: image moderation service with large and small model fusion
    // - postImageCheckByVL_cb: image moderation service with large and small model fusion (Overseas Edition)
    // - baselineCheckByVL: general image moderation large model service
    shared_ptr<string> service_ {};
    // The parameter set for the content moderation object. The value is a JSON string.
    // - imageUrl: the URL of the object to be moderated. Required.
    // - dataId: the data ID corresponding to the moderation object. Optional.
    // - referer: the Referer request header, used for scenarios such as hotlink protection. Optional.
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
