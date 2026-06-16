// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMATTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMATTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageMattingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageMattingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackGroundType, backGroundType_);
      DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(TargetHeight, targetHeight_);
      DARABONBA_PTR_TO_JSON(TargetWidth, targetWidth_);
    };
    friend void from_json(const Darabonba::Json& j, ImageMattingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackGroundType, backGroundType_);
      DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(TargetHeight, targetHeight_);
      DARABONBA_PTR_FROM_JSON(TargetWidth, targetWidth_);
    };
    ImageMattingRequest() = default ;
    ImageMattingRequest(const ImageMattingRequest &) = default ;
    ImageMattingRequest(ImageMattingRequest &&) = default ;
    ImageMattingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageMattingRequest() = default ;
    ImageMattingRequest& operator=(const ImageMattingRequest &) = default ;
    ImageMattingRequest& operator=(ImageMattingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backGroundType_ == nullptr
        && this->bgColor_ == nullptr && this->imageUrl_ == nullptr && this->targetHeight_ == nullptr && this->targetWidth_ == nullptr; };
    // backGroundType Field Functions 
    bool hasBackGroundType() const { return this->backGroundType_ != nullptr;};
    void deleteBackGroundType() { this->backGroundType_ = nullptr;};
    inline string getBackGroundType() const { DARABONBA_PTR_GET_DEFAULT(backGroundType_, "") };
    inline ImageMattingRequest& setBackGroundType(string backGroundType) { DARABONBA_PTR_SET_VALUE(backGroundType_, backGroundType) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline string getBgColor() const { DARABONBA_PTR_GET_DEFAULT(bgColor_, "") };
    inline ImageMattingRequest& setBgColor(string bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageMattingRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // targetHeight Field Functions 
    bool hasTargetHeight() const { return this->targetHeight_ != nullptr;};
    void deleteTargetHeight() { this->targetHeight_ = nullptr;};
    inline int32_t getTargetHeight() const { DARABONBA_PTR_GET_DEFAULT(targetHeight_, 0) };
    inline ImageMattingRequest& setTargetHeight(int32_t targetHeight) { DARABONBA_PTR_SET_VALUE(targetHeight_, targetHeight) };


    // targetWidth Field Functions 
    bool hasTargetWidth() const { return this->targetWidth_ != nullptr;};
    void deleteTargetWidth() { this->targetWidth_ = nullptr;};
    inline int32_t getTargetWidth() const { DARABONBA_PTR_GET_DEFAULT(targetWidth_, 0) };
    inline ImageMattingRequest& setTargetWidth(int32_t targetWidth) { DARABONBA_PTR_SET_VALUE(targetWidth_, targetWidth) };


  protected:
    // The URL of the image to process.
    // 
    // This parameter is required.
    shared_ptr<string> backGroundType_ {};
    // The target image height in pixels.
    shared_ptr<string> bgColor_ {};
    // The URL of the original image. The image must be in JPG, JPEG, PNG, BMP, or WEBP format. The resolution must be between 256 × 256 and 3000 × 3000 pixels. The file size cannot exceed 10 MB.<br>**Example**: `"https://ae01.alicdn.com/kf/S342f0070dc9f4be09a6cbed34e90dc8fs.jpg"`.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The target image width in pixels.
    shared_ptr<int32_t> targetHeight_ {};
    // The background type of the returned image. Valid values:
    // - WHITE_BACKGROUND: white background.
    // - TRANSPARENT: transparent background.
    shared_ptr<int32_t> targetWidth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
