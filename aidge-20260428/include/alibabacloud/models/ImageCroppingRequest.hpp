// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGECROPPINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGECROPPINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageCroppingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageCroppingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(TargetHeight, targetHeight_);
      DARABONBA_PTR_TO_JSON(TargetWidth, targetWidth_);
    };
    friend void from_json(const Darabonba::Json& j, ImageCroppingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(TargetHeight, targetHeight_);
      DARABONBA_PTR_FROM_JSON(TargetWidth, targetWidth_);
    };
    ImageCroppingRequest() = default ;
    ImageCroppingRequest(const ImageCroppingRequest &) = default ;
    ImageCroppingRequest(ImageCroppingRequest &&) = default ;
    ImageCroppingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageCroppingRequest() = default ;
    ImageCroppingRequest& operator=(const ImageCroppingRequest &) = default ;
    ImageCroppingRequest& operator=(ImageCroppingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->targetHeight_ == nullptr && this->targetWidth_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageCroppingRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // targetHeight Field Functions 
    bool hasTargetHeight() const { return this->targetHeight_ != nullptr;};
    void deleteTargetHeight() { this->targetHeight_ = nullptr;};
    inline int32_t getTargetHeight() const { DARABONBA_PTR_GET_DEFAULT(targetHeight_, 0) };
    inline ImageCroppingRequest& setTargetHeight(int32_t targetHeight) { DARABONBA_PTR_SET_VALUE(targetHeight_, targetHeight) };


    // targetWidth Field Functions 
    bool hasTargetWidth() const { return this->targetWidth_ != nullptr;};
    void deleteTargetWidth() { this->targetWidth_ = nullptr;};
    inline int32_t getTargetWidth() const { DARABONBA_PTR_GET_DEFAULT(targetWidth_, 0) };
    inline ImageCroppingRequest& setTargetWidth(int32_t targetWidth) { DARABONBA_PTR_SET_VALUE(targetWidth_, targetWidth) };


  protected:
    // URL of the image to be processed
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // Target height
    // 
    // This parameter is required.
    shared_ptr<int32_t> targetHeight_ {};
    // Target width
    // 
    // This parameter is required.
    shared_ptr<int32_t> targetWidth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
