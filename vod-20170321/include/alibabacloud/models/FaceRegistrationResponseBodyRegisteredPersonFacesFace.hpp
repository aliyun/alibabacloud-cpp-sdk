// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEREGISTRATIONRESPONSEBODYREGISTEREDPERSONFACESFACE_HPP_
#define ALIBABACLOUD_MODELS_FACEREGISTRATIONRESPONSEBODYREGISTEREDPERSONFACESFACE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class FaceRegistrationResponseBodyRegisteredPersonFacesFace : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceRegistrationResponseBodyRegisteredPersonFacesFace& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(Quality, quality_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, FaceRegistrationResponseBodyRegisteredPersonFacesFace& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    FaceRegistrationResponseBodyRegisteredPersonFacesFace() = default ;
    FaceRegistrationResponseBodyRegisteredPersonFacesFace(const FaceRegistrationResponseBodyRegisteredPersonFacesFace &) = default ;
    FaceRegistrationResponseBodyRegisteredPersonFacesFace(FaceRegistrationResponseBodyRegisteredPersonFacesFace &&) = default ;
    FaceRegistrationResponseBodyRegisteredPersonFacesFace(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceRegistrationResponseBodyRegisteredPersonFacesFace() = default ;
    FaceRegistrationResponseBodyRegisteredPersonFacesFace& operator=(const FaceRegistrationResponseBodyRegisteredPersonFacesFace &) = default ;
    FaceRegistrationResponseBodyRegisteredPersonFacesFace& operator=(FaceRegistrationResponseBodyRegisteredPersonFacesFace &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageId_ != nullptr
        && this->quality_ != nullptr && this->target_ != nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline FaceRegistrationResponseBodyRegisteredPersonFacesFace& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline string quality() const { DARABONBA_PTR_GET_DEFAULT(quality_, "") };
    inline FaceRegistrationResponseBodyRegisteredPersonFacesFace& setQuality(string quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline FaceRegistrationResponseBodyRegisteredPersonFacesFace& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> quality_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
