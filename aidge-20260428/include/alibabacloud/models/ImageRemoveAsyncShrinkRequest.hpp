// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEREMOVEASYNCSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEREMOVEASYNCSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageRemoveAsyncShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRemoveAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(NonObjectRemoveElements, nonObjectRemoveElementsShrink_);
      DARABONBA_PTR_TO_JSON(ObjectRemoveElements, objectRemoveElementsShrink_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(UserImage, userImageShrink_);
      DARABONBA_PTR_TO_JSON(UserText, userTextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRemoveAsyncShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(NonObjectRemoveElements, nonObjectRemoveElementsShrink_);
      DARABONBA_PTR_FROM_JSON(ObjectRemoveElements, objectRemoveElementsShrink_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(UserImage, userImageShrink_);
      DARABONBA_PTR_FROM_JSON(UserText, userTextShrink_);
    };
    ImageRemoveAsyncShrinkRequest() = default ;
    ImageRemoveAsyncShrinkRequest(const ImageRemoveAsyncShrinkRequest &) = default ;
    ImageRemoveAsyncShrinkRequest(ImageRemoveAsyncShrinkRequest &&) = default ;
    ImageRemoveAsyncShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRemoveAsyncShrinkRequest() = default ;
    ImageRemoveAsyncShrinkRequest& operator=(const ImageRemoveAsyncShrinkRequest &) = default ;
    ImageRemoveAsyncShrinkRequest& operator=(ImageRemoveAsyncShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->imageUrl_ == nullptr && this->mask_ == nullptr && this->nonObjectRemoveElementsShrink_ == nullptr && this->objectRemoveElementsShrink_ == nullptr && this->position_ == nullptr
        && this->userImageShrink_ == nullptr && this->userTextShrink_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ImageRemoveAsyncShrinkRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageRemoveAsyncShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline ImageRemoveAsyncShrinkRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // nonObjectRemoveElementsShrink Field Functions 
    bool hasNonObjectRemoveElementsShrink() const { return this->nonObjectRemoveElementsShrink_ != nullptr;};
    void deleteNonObjectRemoveElementsShrink() { this->nonObjectRemoveElementsShrink_ = nullptr;};
    inline string getNonObjectRemoveElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(nonObjectRemoveElementsShrink_, "") };
    inline ImageRemoveAsyncShrinkRequest& setNonObjectRemoveElementsShrink(string nonObjectRemoveElementsShrink) { DARABONBA_PTR_SET_VALUE(nonObjectRemoveElementsShrink_, nonObjectRemoveElementsShrink) };


    // objectRemoveElementsShrink Field Functions 
    bool hasObjectRemoveElementsShrink() const { return this->objectRemoveElementsShrink_ != nullptr;};
    void deleteObjectRemoveElementsShrink() { this->objectRemoveElementsShrink_ = nullptr;};
    inline string getObjectRemoveElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectRemoveElementsShrink_, "") };
    inline ImageRemoveAsyncShrinkRequest& setObjectRemoveElementsShrink(string objectRemoveElementsShrink) { DARABONBA_PTR_SET_VALUE(objectRemoveElementsShrink_, objectRemoveElementsShrink) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline ImageRemoveAsyncShrinkRequest& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // userImageShrink Field Functions 
    bool hasUserImageShrink() const { return this->userImageShrink_ != nullptr;};
    void deleteUserImageShrink() { this->userImageShrink_ = nullptr;};
    inline string getUserImageShrink() const { DARABONBA_PTR_GET_DEFAULT(userImageShrink_, "") };
    inline ImageRemoveAsyncShrinkRequest& setUserImageShrink(string userImageShrink) { DARABONBA_PTR_SET_VALUE(userImageShrink_, userImageShrink) };


    // userTextShrink Field Functions 
    bool hasUserTextShrink() const { return this->userTextShrink_ != nullptr;};
    void deleteUserTextShrink() { this->userTextShrink_ = nullptr;};
    inline string getUserTextShrink() const { DARABONBA_PTR_GET_DEFAULT(userTextShrink_, "") };
    inline ImageRemoveAsyncShrinkRequest& setUserTextShrink(string userTextShrink) { DARABONBA_PTR_SET_VALUE(userTextShrink_, userTextShrink) };


  protected:
    // The business order ID of the caller. This ID is recorded when the request is accepted and returned as-is when you query the result of the asynchronous task.
    shared_ptr<string> bizId_ {};
    // The URL of the original image. The image must be in JPG, JPEG, PNG, BMP, or WEBP format. The resolution must be between 256 × 256 and 3000 × 3000 pixels, and the file size cannot exceed 10 MB.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The specific area to erase. This parameter must be used in conjunction with the editor. The input format is Run-Length Encoding (RLE).
    // If this parameter is specified, it takes precedence and the remove_non_product_area_elements and remove_product_area_elements parameters are ignored. This parameter is optional, but you must specify at least one of the following parameters: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, and UserImage.
    // If multiple parameters are specified, the priority is as follows: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    shared_ptr<string> mask_ {};
    // The list of element types to remove from the image background.
    shared_ptr<string> nonObjectRemoveElementsShrink_ {};
    // The types of elements to remove from the image subject. Valid values:
    // - 1: Transparent text blocks.
    // - 2: Specific names.
    // - 3: Text.
    // - 4: Promotional stickers.
    // You can select multiple element types. This parameter is optional, but you must specify at least one of the following parameters: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, and UserImage.
    // If multiple parameters are specified, the priority is as follows: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    // For more information about each type, see the product documentation.
    // Image subject: the core product area in the image.
    shared_ptr<string> objectRemoveElementsShrink_ {};
    // The specific area to erase. This parameter must be used in conjunction with the editor. The input format is a four-point coordinate array, such as [xx,yy,zz,dd]. This parameter is optional, but you must specify at least one of the following parameters: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, and UserImage.
    // If multiple parameters are specified, the priority is as follows: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    shared_ptr<string> position_ {};
    // The list of URLs for user-specified image elements to erase.
    shared_ptr<string> userImageShrink_ {};
    // The list of user-specified text strings to erase.
    shared_ptr<string> userTextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
