// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEREMOVEASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGEREMOVEASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageRemoveAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRemoveAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(Mask, mask_);
      DARABONBA_PTR_TO_JSON(NonObjectRemoveElements, nonObjectRemoveElements_);
      DARABONBA_PTR_TO_JSON(ObjectRemoveElements, objectRemoveElements_);
      DARABONBA_PTR_TO_JSON(Position, position_);
      DARABONBA_PTR_TO_JSON(UserImage, userImage_);
      DARABONBA_PTR_TO_JSON(UserText, userText_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRemoveAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(Mask, mask_);
      DARABONBA_PTR_FROM_JSON(NonObjectRemoveElements, nonObjectRemoveElements_);
      DARABONBA_PTR_FROM_JSON(ObjectRemoveElements, objectRemoveElements_);
      DARABONBA_PTR_FROM_JSON(Position, position_);
      DARABONBA_PTR_FROM_JSON(UserImage, userImage_);
      DARABONBA_PTR_FROM_JSON(UserText, userText_);
    };
    ImageRemoveAsyncRequest() = default ;
    ImageRemoveAsyncRequest(const ImageRemoveAsyncRequest &) = default ;
    ImageRemoveAsyncRequest(ImageRemoveAsyncRequest &&) = default ;
    ImageRemoveAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRemoveAsyncRequest() = default ;
    ImageRemoveAsyncRequest& operator=(const ImageRemoveAsyncRequest &) = default ;
    ImageRemoveAsyncRequest& operator=(ImageRemoveAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->mask_ == nullptr && this->nonObjectRemoveElements_ == nullptr && this->objectRemoveElements_ == nullptr && this->position_ == nullptr && this->userImage_ == nullptr
        && this->userText_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageRemoveAsyncRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // mask Field Functions 
    bool hasMask() const { return this->mask_ != nullptr;};
    void deleteMask() { this->mask_ = nullptr;};
    inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
    inline ImageRemoveAsyncRequest& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


    // nonObjectRemoveElements Field Functions 
    bool hasNonObjectRemoveElements() const { return this->nonObjectRemoveElements_ != nullptr;};
    void deleteNonObjectRemoveElements() { this->nonObjectRemoveElements_ = nullptr;};
    inline const vector<int32_t> & getNonObjectRemoveElements() const { DARABONBA_PTR_GET_CONST(nonObjectRemoveElements_, vector<int32_t>) };
    inline vector<int32_t> getNonObjectRemoveElements() { DARABONBA_PTR_GET(nonObjectRemoveElements_, vector<int32_t>) };
    inline ImageRemoveAsyncRequest& setNonObjectRemoveElements(const vector<int32_t> & nonObjectRemoveElements) { DARABONBA_PTR_SET_VALUE(nonObjectRemoveElements_, nonObjectRemoveElements) };
    inline ImageRemoveAsyncRequest& setNonObjectRemoveElements(vector<int32_t> && nonObjectRemoveElements) { DARABONBA_PTR_SET_RVALUE(nonObjectRemoveElements_, nonObjectRemoveElements) };


    // objectRemoveElements Field Functions 
    bool hasObjectRemoveElements() const { return this->objectRemoveElements_ != nullptr;};
    void deleteObjectRemoveElements() { this->objectRemoveElements_ = nullptr;};
    inline const vector<int32_t> & getObjectRemoveElements() const { DARABONBA_PTR_GET_CONST(objectRemoveElements_, vector<int32_t>) };
    inline vector<int32_t> getObjectRemoveElements() { DARABONBA_PTR_GET(objectRemoveElements_, vector<int32_t>) };
    inline ImageRemoveAsyncRequest& setObjectRemoveElements(const vector<int32_t> & objectRemoveElements) { DARABONBA_PTR_SET_VALUE(objectRemoveElements_, objectRemoveElements) };
    inline ImageRemoveAsyncRequest& setObjectRemoveElements(vector<int32_t> && objectRemoveElements) { DARABONBA_PTR_SET_RVALUE(objectRemoveElements_, objectRemoveElements) };


    // position Field Functions 
    bool hasPosition() const { return this->position_ != nullptr;};
    void deletePosition() { this->position_ = nullptr;};
    inline string getPosition() const { DARABONBA_PTR_GET_DEFAULT(position_, "") };
    inline ImageRemoveAsyncRequest& setPosition(string position) { DARABONBA_PTR_SET_VALUE(position_, position) };


    // userImage Field Functions 
    bool hasUserImage() const { return this->userImage_ != nullptr;};
    void deleteUserImage() { this->userImage_ = nullptr;};
    inline const vector<string> & getUserImage() const { DARABONBA_PTR_GET_CONST(userImage_, vector<string>) };
    inline vector<string> getUserImage() { DARABONBA_PTR_GET(userImage_, vector<string>) };
    inline ImageRemoveAsyncRequest& setUserImage(const vector<string> & userImage) { DARABONBA_PTR_SET_VALUE(userImage_, userImage) };
    inline ImageRemoveAsyncRequest& setUserImage(vector<string> && userImage) { DARABONBA_PTR_SET_RVALUE(userImage_, userImage) };


    // userText Field Functions 
    bool hasUserText() const { return this->userText_ != nullptr;};
    void deleteUserText() { this->userText_ = nullptr;};
    inline const vector<string> & getUserText() const { DARABONBA_PTR_GET_CONST(userText_, vector<string>) };
    inline vector<string> getUserText() { DARABONBA_PTR_GET(userText_, vector<string>) };
    inline ImageRemoveAsyncRequest& setUserText(const vector<string> & userText) { DARABONBA_PTR_SET_VALUE(userText_, userText) };
    inline ImageRemoveAsyncRequest& setUserText(vector<string> && userText) { DARABONBA_PTR_SET_RVALUE(userText_, userText) };


  protected:
    // The URL of the original image. The image must be in JPG, JPEG, PNG, BMP, or WEBP format. The resolution must be between 256 × 256 and 3000 × 3000 pixels, and the file size must not exceed 10 MB.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The specific area to erase. This parameter must be used in conjunction with the editor, and the input format is RLE. If this parameter is specified, it takes precedence and the remove_non_product_area_elements and remove_product_area_elements parameters are ignored. This parameter is not required, but you must specify at least one of the following parameters: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, and UserImage. If multiple parameters are specified, the priority is as follows: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    shared_ptr<string> mask_ {};
    // The list of element types to remove from the non-subject area of the image.
    shared_ptr<vector<int32_t>> nonObjectRemoveElements_ {};
    // The types of elements to remove from the image subject. Valid values: 1 (transparent text blocks), 2 (specific names), 3 (text), and 4 (watermarks). You can select multiple element types. This parameter is not required, but you must specify at least one of the following parameters: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, and UserImage. If multiple parameters are specified, the priority is as follows: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements. For more information about each type, see the product documentation. Image subject: the core product area in the image.
    shared_ptr<vector<int32_t>> objectRemoveElements_ {};
    // The specific area to erase. This parameter must be used in conjunction with the editor, and the input format is four-point coordinates [xx,yy,zz,dd]. This parameter is not required, but you must specify at least one of the following parameters: ObjectRemoveElements, NonObjectRemoveElements, Mask, Position, UserText, and UserImage. If multiple parameters are specified, the priority is as follows: UserImage > UserText > Position > Mask > ObjectRemoveElements = NonObjectRemoveElements.
    shared_ptr<string> position_ {};
    // The list of URLs for user-specified image elements to erase.
    shared_ptr<vector<string>> userImage_ {};
    // The list of user-specified texts to erase.
    shared_ptr<vector<string>> userText_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
