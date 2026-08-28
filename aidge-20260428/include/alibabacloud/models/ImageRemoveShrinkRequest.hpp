// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEREMOVESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEREMOVESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageRemoveShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRemoveShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(NonObjectRemoveElements, nonObjectRemoveElementsShrink_);
      DARABONBA_PTR_TO_JSON(ObjectRemoveElements, objectRemoveElementsShrink_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(UserImage, userImageShrink_);
      DARABONBA_PTR_TO_JSON(UserText, userTextShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRemoveShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(NonObjectRemoveElements, nonObjectRemoveElementsShrink_);
      DARABONBA_PTR_FROM_JSON(ObjectRemoveElements, objectRemoveElementsShrink_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(UserImage, userImageShrink_);
      DARABONBA_PTR_FROM_JSON(UserText, userTextShrink_);
    };
    ImageRemoveShrinkRequest() = default ;
    ImageRemoveShrinkRequest(const ImageRemoveShrinkRequest &) = default ;
    ImageRemoveShrinkRequest(ImageRemoveShrinkRequest &&) = default ;
    ImageRemoveShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRemoveShrinkRequest() = default ;
    ImageRemoveShrinkRequest& operator=(const ImageRemoveShrinkRequest &) = default ;
    ImageRemoveShrinkRequest& operator=(ImageRemoveShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->mask_ == nullptr && this->nonObjectRemoveElementsShrink_ == nullptr && this->objectRemoveElementsShrink_ == nullptr && this->position_ == nullptr && this->userImageShrink_ == nullptr
        && this->userTextShrink_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageRemoveShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline ImageRemoveShrinkRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // nonObjectRemoveElementsShrink Field Functions 
    bool hasNonObjectRemoveElementsShrink() const { return this->nonObjectRemoveElementsShrink_ != nullptr;};
    void deleteNonObjectRemoveElementsShrink() { this->nonObjectRemoveElementsShrink_ = nullptr;};
    inline string getNonObjectRemoveElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(nonObjectRemoveElementsShrink_, "") };
    inline ImageRemoveShrinkRequest& setNonObjectRemoveElementsShrink(string nonObjectRemoveElementsShrink) { DARABONBA_PTR_SET_VALUE(nonObjectRemoveElementsShrink_, nonObjectRemoveElementsShrink) };


    // objectRemoveElementsShrink Field Functions 
    bool hasObjectRemoveElementsShrink() const { return this->objectRemoveElementsShrink_ != nullptr;};
    void deleteObjectRemoveElementsShrink() { this->objectRemoveElementsShrink_ = nullptr;};
    inline string getObjectRemoveElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectRemoveElementsShrink_, "") };
    inline ImageRemoveShrinkRequest& setObjectRemoveElementsShrink(string objectRemoveElementsShrink) { DARABONBA_PTR_SET_VALUE(objectRemoveElementsShrink_, objectRemoveElementsShrink) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline ImageRemoveShrinkRequest& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // userImageShrink Field Functions 
    bool hasUserImageShrink() const { return this->userImageShrink_ != nullptr;};
    void deleteUserImageShrink() { this->userImageShrink_ = nullptr;};
    inline string getUserImageShrink() const { DARABONBA_PTR_GET_DEFAULT(userImageShrink_, "") };
    inline ImageRemoveShrinkRequest& setUserImageShrink(string userImageShrink) { DARABONBA_PTR_SET_VALUE(userImageShrink_, userImageShrink) };


    // userTextShrink Field Functions 
    bool hasUserTextShrink() const { return this->userTextShrink_ != nullptr;};
    void deleteUserTextShrink() { this->userTextShrink_ = nullptr;};
    inline string getUserTextShrink() const { DARABONBA_PTR_GET_DEFAULT(userTextShrink_, "") };
    inline ImageRemoveShrinkRequest& setUserTextShrink(string userTextShrink) { DARABONBA_PTR_SET_VALUE(userTextShrink_, userTextShrink) };


  protected:
    // The URL of the original image. The image must be in JPG, JPEG, PNG, BMP, or WEBP format, with a resolution between 256 × 256 and 3000 × 3000 pixels, and a file size no larger than 10 MB.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The specific removal area. This parameter must be used with the editor. The input format is RLE.
    // If provided, this takes priority and the remove_non_product_area_elements and remove_product_area_elements parameters are ignored. This parameter is not required, but at least one of the following parameters must be specified: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, or UserImage.
    // When multiple parameters are specified, the priority order is: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    shared_ptr<string> mask_ {};
    // The elements to remove from the non-subject area of the image (1=transparent text blocks, 2=specific names, 3=text, 4=visual clutter). Multiple element types can be selected. This parameter is not required, but at least one of the following parameters must be specified: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, or UserImage.
    // When multiple parameters are specified, the priority order is: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    // Refer to the product description for details on each type.
    shared_ptr<string> nonObjectRemoveElementsShrink_ {};
    // The elements to remove from the image subject (1=transparent text blocks, 2=specific names, 3=text, 4=visual clutter). Multiple element types can be selected. This parameter is not required, but at least one of the following parameters must be specified: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, or UserImage.
    // When multiple parameters are specified, the priority order is: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    // Refer to the product description for details on each type.
    // Image subject: The core product area in the image.
    shared_ptr<string> objectRemoveElementsShrink_ {};
    // The specific removal area. This parameter must be used with the editor. The input format is four-point coordinates [xx,yy,zz,dd]. This parameter is not required, but at least one of the following parameters must be specified: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, or UserImage.
    // When multiple parameters are specified, the priority order is: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    shared_ptr<string> position_ {};
    // The user-specified image element links to remove. Multiple image links are supported. The input format is ["https://ae01.alicdn.com/kf/S342f0070dc9f4be09a6cbed34e90dc8fs.jpg","https://ae01.alicdn.com/kf/S342f0070dc9f4be09a6cbed34e90dc8fs.jpg"]. This parameter is not required, but at least one of the following parameters must be specified: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, or UserImage.
    // When multiple parameters are specified, the priority order is: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    shared_ptr<string> userImageShrink_ {};
    // The user-specified text to remove. Multiple text inputs are supported. The input format is ["xx","yy"]. This parameter is not required, but at least one of the following parameters must be specified: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, or UserImage.
    // When multiple parameters are specified, the priority order is: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    shared_ptr<string> userTextShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
