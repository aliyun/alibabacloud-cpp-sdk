// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGERECOGNITIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGERECOGNITIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class ImageRecognitionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRecognitionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(NonObjectDetectElements, nonObjectDetectElementsShrink_);
      DARABONBA_PTR_TO_JSON(ObjectDetectElements, objectDetectElementsShrink_);
      DARABONBA_PTR_TO_JSON(ReturnBorderPixel, returnBorderPixel_);
      DARABONBA_PTR_TO_JSON(ReturnCharacter, returnCharacter_);
      DARABONBA_PTR_TO_JSON(ReturnCharacterProp, returnCharacterProp_);
      DARABONBA_PTR_TO_JSON(ReturnProductNum, returnProductNum_);
      DARABONBA_PTR_TO_JSON(ReturnProductProp, returnProductProp_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRecognitionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(NonObjectDetectElements, nonObjectDetectElementsShrink_);
      DARABONBA_PTR_FROM_JSON(ObjectDetectElements, objectDetectElementsShrink_);
      DARABONBA_PTR_FROM_JSON(ReturnBorderPixel, returnBorderPixel_);
      DARABONBA_PTR_FROM_JSON(ReturnCharacter, returnCharacter_);
      DARABONBA_PTR_FROM_JSON(ReturnCharacterProp, returnCharacterProp_);
      DARABONBA_PTR_FROM_JSON(ReturnProductNum, returnProductNum_);
      DARABONBA_PTR_FROM_JSON(ReturnProductProp, returnProductProp_);
    };
    ImageRecognitionShrinkRequest() = default ;
    ImageRecognitionShrinkRequest(const ImageRecognitionShrinkRequest &) = default ;
    ImageRecognitionShrinkRequest(ImageRecognitionShrinkRequest &&) = default ;
    ImageRecognitionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRecognitionShrinkRequest() = default ;
    ImageRecognitionShrinkRequest& operator=(const ImageRecognitionShrinkRequest &) = default ;
    ImageRecognitionShrinkRequest& operator=(ImageRecognitionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->nonObjectDetectElementsShrink_ == nullptr && this->objectDetectElementsShrink_ == nullptr && this->returnBorderPixel_ == nullptr && this->returnCharacter_ == nullptr && this->returnCharacterProp_ == nullptr
        && this->returnProductNum_ == nullptr && this->returnProductProp_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageRecognitionShrinkRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // nonObjectDetectElementsShrink Field Functions 
    bool hasNonObjectDetectElementsShrink() const { return this->nonObjectDetectElementsShrink_ != nullptr;};
    void deleteNonObjectDetectElementsShrink() { this->nonObjectDetectElementsShrink_ = nullptr;};
    inline string getNonObjectDetectElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(nonObjectDetectElementsShrink_, "") };
    inline ImageRecognitionShrinkRequest& setNonObjectDetectElementsShrink(string nonObjectDetectElementsShrink) { DARABONBA_PTR_SET_VALUE(nonObjectDetectElementsShrink_, nonObjectDetectElementsShrink) };


    // objectDetectElementsShrink Field Functions 
    bool hasObjectDetectElementsShrink() const { return this->objectDetectElementsShrink_ != nullptr;};
    void deleteObjectDetectElementsShrink() { this->objectDetectElementsShrink_ = nullptr;};
    inline string getObjectDetectElementsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectDetectElementsShrink_, "") };
    inline ImageRecognitionShrinkRequest& setObjectDetectElementsShrink(string objectDetectElementsShrink) { DARABONBA_PTR_SET_VALUE(objectDetectElementsShrink_, objectDetectElementsShrink) };


    // returnBorderPixel Field Functions 
    bool hasReturnBorderPixel() const { return this->returnBorderPixel_ != nullptr;};
    void deleteReturnBorderPixel() { this->returnBorderPixel_ = nullptr;};
    inline int32_t getReturnBorderPixel() const { DARABONBA_PTR_GET_DEFAULT(returnBorderPixel_, 0) };
    inline ImageRecognitionShrinkRequest& setReturnBorderPixel(int32_t returnBorderPixel) { DARABONBA_PTR_SET_VALUE(returnBorderPixel_, returnBorderPixel) };


    // returnCharacter Field Functions 
    bool hasReturnCharacter() const { return this->returnCharacter_ != nullptr;};
    void deleteReturnCharacter() { this->returnCharacter_ = nullptr;};
    inline int32_t getReturnCharacter() const { DARABONBA_PTR_GET_DEFAULT(returnCharacter_, 0) };
    inline ImageRecognitionShrinkRequest& setReturnCharacter(int32_t returnCharacter) { DARABONBA_PTR_SET_VALUE(returnCharacter_, returnCharacter) };


    // returnCharacterProp Field Functions 
    bool hasReturnCharacterProp() const { return this->returnCharacterProp_ != nullptr;};
    void deleteReturnCharacterProp() { this->returnCharacterProp_ = nullptr;};
    inline int32_t getReturnCharacterProp() const { DARABONBA_PTR_GET_DEFAULT(returnCharacterProp_, 0) };
    inline ImageRecognitionShrinkRequest& setReturnCharacterProp(int32_t returnCharacterProp) { DARABONBA_PTR_SET_VALUE(returnCharacterProp_, returnCharacterProp) };


    // returnProductNum Field Functions 
    bool hasReturnProductNum() const { return this->returnProductNum_ != nullptr;};
    void deleteReturnProductNum() { this->returnProductNum_ = nullptr;};
    inline int32_t getReturnProductNum() const { DARABONBA_PTR_GET_DEFAULT(returnProductNum_, 0) };
    inline ImageRecognitionShrinkRequest& setReturnProductNum(int32_t returnProductNum) { DARABONBA_PTR_SET_VALUE(returnProductNum_, returnProductNum) };


    // returnProductProp Field Functions 
    bool hasReturnProductProp() const { return this->returnProductProp_ != nullptr;};
    void deleteReturnProductProp() { this->returnProductProp_ = nullptr;};
    inline int32_t getReturnProductProp() const { DARABONBA_PTR_GET_DEFAULT(returnProductProp_, 0) };
    inline ImageRecognitionShrinkRequest& setReturnProductProp(int32_t returnProductProp) { DARABONBA_PTR_SET_VALUE(returnProductProp_, returnProductProp) };


  protected:
    // The URL of the image to recognize.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The list of non-subject element types to detect. Valid values: 1 (background), 2 (border), 3 (watermark), and 4 (collage).
    shared_ptr<string> nonObjectDetectElementsShrink_ {};
    // The list of subject element types to detect. Valid values: 1 (product subject), 2 (model), 3 (text), and 4 (logo).
    shared_ptr<string> objectDetectElementsShrink_ {};
    // Specifies whether to return border pixel information. Valid values: 1 (return) and 0 (do not return).
    shared_ptr<int32_t> returnBorderPixel_ {};
    // Specifies whether to return text information. Valid values: 1 (return) and 0 (do not return).
    shared_ptr<int32_t> returnCharacter_ {};
    // Specifies whether to return text property information. Valid values: 1 (return) and 0 (do not return).
    shared_ptr<int32_t> returnCharacterProp_ {};
    // Specifies whether to return the product count. Valid values: 1 (return) and 0 (do not return).
    shared_ptr<int32_t> returnProductNum_ {};
    // Specifies whether to return product property information. Valid values: 1 (return) and 0 (do not return).
    shared_ptr<int32_t> returnProductProp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
