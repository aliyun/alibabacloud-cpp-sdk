// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMATTINGASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMATTINGASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageMattingAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageMattingAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackGroundType, backGroundType_);
      DARABONBA_PTR_TO_JSON(BgColor, bgColor_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(TargetHeight, targetHeight_);
      DARABONBA_PTR_TO_JSON(TargetWidth, targetWidth_);
    };
    friend void from_json(const Darabonba::Json& j, ImageMattingAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackGroundType, backGroundType_);
      DARABONBA_PTR_FROM_JSON(BgColor, bgColor_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(TargetHeight, targetHeight_);
      DARABONBA_PTR_FROM_JSON(TargetWidth, targetWidth_);
    };
    ImageMattingAsyncRequest() = default ;
    ImageMattingAsyncRequest(const ImageMattingAsyncRequest &) = default ;
    ImageMattingAsyncRequest(ImageMattingAsyncRequest &&) = default ;
    ImageMattingAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageMattingAsyncRequest() = default ;
    ImageMattingAsyncRequest& operator=(const ImageMattingAsyncRequest &) = default ;
    ImageMattingAsyncRequest& operator=(ImageMattingAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backGroundType_ == nullptr
        && this->bgColor_ == nullptr && this->bizId_ == nullptr && this->imageUrl_ == nullptr && this->targetHeight_ == nullptr && this->targetWidth_ == nullptr; };
    // backGroundType Field Functions 
    bool hasBackGroundType() const { return this->backGroundType_ != nullptr;};
    void deleteBackGroundType() { this->backGroundType_ = nullptr;};
    inline string getBackGroundType() const { DARABONBA_PTR_GET_DEFAULT(backGroundType_, "") };
    inline ImageMattingAsyncRequest& setBackGroundType(string backGroundType) { DARABONBA_PTR_SET_VALUE(backGroundType_, backGroundType) };


    // bgColor Field Functions 
    bool hasBgColor() const { return this->bgColor_ != nullptr;};
    void deleteBgColor() { this->bgColor_ = nullptr;};
    inline string getBgColor() const { DARABONBA_PTR_GET_DEFAULT(bgColor_, "") };
    inline ImageMattingAsyncRequest& setBgColor(string bgColor) { DARABONBA_PTR_SET_VALUE(bgColor_, bgColor) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ImageMattingAsyncRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageMattingAsyncRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // targetHeight Field Functions 
    bool hasTargetHeight() const { return this->targetHeight_ != nullptr;};
    void deleteTargetHeight() { this->targetHeight_ = nullptr;};
    inline int32_t getTargetHeight() const { DARABONBA_PTR_GET_DEFAULT(targetHeight_, 0) };
    inline ImageMattingAsyncRequest& setTargetHeight(int32_t targetHeight) { DARABONBA_PTR_SET_VALUE(targetHeight_, targetHeight) };


    // targetWidth Field Functions 
    bool hasTargetWidth() const { return this->targetWidth_ != nullptr;};
    void deleteTargetWidth() { this->targetWidth_ = nullptr;};
    inline int32_t getTargetWidth() const { DARABONBA_PTR_GET_DEFAULT(targetWidth_, 0) };
    inline ImageMattingAsyncRequest& setTargetWidth(int32_t targetWidth) { DARABONBA_PTR_SET_VALUE(targetWidth_, targetWidth) };


  protected:
    // Specifies the background format of the returned image. Valid values:
    // - WHITE_BACKGROUND: Returns an image with a white background.
    // - TRANSPARENT: Returns an image with a transparent background.
    // 
    // This parameter is required.
    shared_ptr<string> backGroundType_ {};
    // The BGR color value of the background. Default value: white.
    shared_ptr<string> bgColor_ {};
    // The business order ID of the caller. It is recorded upon acceptance and returned as is when you query the result of the asynchronous task.
    shared_ptr<string> bizId_ {};
    // The URL of the original image. The image must be in JPG, JPEG, PNG, BMP, or WEBP format. The resolution must be between 100 × 100 and 3000 × 3000 pixels, and the file size must not exceed 10 MB.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The expected height of the cropped image. If you do not specify this parameter, the original height of the image is used. Unit: pixels. Valid values: 100 to 5000.
    shared_ptr<int32_t> targetHeight_ {};
    // The expected width of the cropped image. If you do not specify this parameter, the original width of the image is used. Unit: pixels. Valid values: 100 to 5000.
    shared_ptr<int32_t> targetWidth_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
