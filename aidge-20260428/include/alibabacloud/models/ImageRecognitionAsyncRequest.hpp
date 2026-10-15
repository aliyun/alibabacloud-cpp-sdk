// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGERECOGNITIONASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGERECOGNITIONASYNCREQUEST_HPP_
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
  class ImageRecognitionAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRecognitionAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(NonObjectDetectElements, nonObjectDetectElements_);
      DARABONBA_PTR_TO_JSON(ObjectDetectElements, objectDetectElements_);
      DARABONBA_PTR_TO_JSON(ReturnBorderPixel, returnBorderPixel_);
      DARABONBA_PTR_TO_JSON(ReturnCharacter, returnCharacter_);
      DARABONBA_PTR_TO_JSON(ReturnCharacterProp, returnCharacterProp_);
      DARABONBA_PTR_TO_JSON(ReturnProductNum, returnProductNum_);
      DARABONBA_PTR_TO_JSON(ReturnProductProp, returnProductProp_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRecognitionAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(NonObjectDetectElements, nonObjectDetectElements_);
      DARABONBA_PTR_FROM_JSON(ObjectDetectElements, objectDetectElements_);
      DARABONBA_PTR_FROM_JSON(ReturnBorderPixel, returnBorderPixel_);
      DARABONBA_PTR_FROM_JSON(ReturnCharacter, returnCharacter_);
      DARABONBA_PTR_FROM_JSON(ReturnCharacterProp, returnCharacterProp_);
      DARABONBA_PTR_FROM_JSON(ReturnProductNum, returnProductNum_);
      DARABONBA_PTR_FROM_JSON(ReturnProductProp, returnProductProp_);
    };
    ImageRecognitionAsyncRequest() = default ;
    ImageRecognitionAsyncRequest(const ImageRecognitionAsyncRequest &) = default ;
    ImageRecognitionAsyncRequest(ImageRecognitionAsyncRequest &&) = default ;
    ImageRecognitionAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRecognitionAsyncRequest() = default ;
    ImageRecognitionAsyncRequest& operator=(const ImageRecognitionAsyncRequest &) = default ;
    ImageRecognitionAsyncRequest& operator=(ImageRecognitionAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageUrl_ == nullptr
        && this->nonObjectDetectElements_ == nullptr && this->objectDetectElements_ == nullptr && this->returnBorderPixel_ == nullptr && this->returnCharacter_ == nullptr && this->returnCharacterProp_ == nullptr
        && this->returnProductNum_ == nullptr && this->returnProductProp_ == nullptr; };
    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline ImageRecognitionAsyncRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // nonObjectDetectElements Field Functions 
    bool hasNonObjectDetectElements() const { return this->nonObjectDetectElements_ != nullptr;};
    void deleteNonObjectDetectElements() { this->nonObjectDetectElements_ = nullptr;};
    inline const vector<int32_t> & getNonObjectDetectElements() const { DARABONBA_PTR_GET_CONST(nonObjectDetectElements_, vector<int32_t>) };
    inline vector<int32_t> getNonObjectDetectElements() { DARABONBA_PTR_GET(nonObjectDetectElements_, vector<int32_t>) };
    inline ImageRecognitionAsyncRequest& setNonObjectDetectElements(const vector<int32_t> & nonObjectDetectElements) { DARABONBA_PTR_SET_VALUE(nonObjectDetectElements_, nonObjectDetectElements) };
    inline ImageRecognitionAsyncRequest& setNonObjectDetectElements(vector<int32_t> && nonObjectDetectElements) { DARABONBA_PTR_SET_RVALUE(nonObjectDetectElements_, nonObjectDetectElements) };


    // objectDetectElements Field Functions 
    bool hasObjectDetectElements() const { return this->objectDetectElements_ != nullptr;};
    void deleteObjectDetectElements() { this->objectDetectElements_ = nullptr;};
    inline const vector<int32_t> & getObjectDetectElements() const { DARABONBA_PTR_GET_CONST(objectDetectElements_, vector<int32_t>) };
    inline vector<int32_t> getObjectDetectElements() { DARABONBA_PTR_GET(objectDetectElements_, vector<int32_t>) };
    inline ImageRecognitionAsyncRequest& setObjectDetectElements(const vector<int32_t> & objectDetectElements) { DARABONBA_PTR_SET_VALUE(objectDetectElements_, objectDetectElements) };
    inline ImageRecognitionAsyncRequest& setObjectDetectElements(vector<int32_t> && objectDetectElements) { DARABONBA_PTR_SET_RVALUE(objectDetectElements_, objectDetectElements) };


    // returnBorderPixel Field Functions 
    bool hasReturnBorderPixel() const { return this->returnBorderPixel_ != nullptr;};
    void deleteReturnBorderPixel() { this->returnBorderPixel_ = nullptr;};
    inline int32_t getReturnBorderPixel() const { DARABONBA_PTR_GET_DEFAULT(returnBorderPixel_, 0) };
    inline ImageRecognitionAsyncRequest& setReturnBorderPixel(int32_t returnBorderPixel) { DARABONBA_PTR_SET_VALUE(returnBorderPixel_, returnBorderPixel) };


    // returnCharacter Field Functions 
    bool hasReturnCharacter() const { return this->returnCharacter_ != nullptr;};
    void deleteReturnCharacter() { this->returnCharacter_ = nullptr;};
    inline int32_t getReturnCharacter() const { DARABONBA_PTR_GET_DEFAULT(returnCharacter_, 0) };
    inline ImageRecognitionAsyncRequest& setReturnCharacter(int32_t returnCharacter) { DARABONBA_PTR_SET_VALUE(returnCharacter_, returnCharacter) };


    // returnCharacterProp Field Functions 
    bool hasReturnCharacterProp() const { return this->returnCharacterProp_ != nullptr;};
    void deleteReturnCharacterProp() { this->returnCharacterProp_ = nullptr;};
    inline int32_t getReturnCharacterProp() const { DARABONBA_PTR_GET_DEFAULT(returnCharacterProp_, 0) };
    inline ImageRecognitionAsyncRequest& setReturnCharacterProp(int32_t returnCharacterProp) { DARABONBA_PTR_SET_VALUE(returnCharacterProp_, returnCharacterProp) };


    // returnProductNum Field Functions 
    bool hasReturnProductNum() const { return this->returnProductNum_ != nullptr;};
    void deleteReturnProductNum() { this->returnProductNum_ = nullptr;};
    inline int32_t getReturnProductNum() const { DARABONBA_PTR_GET_DEFAULT(returnProductNum_, 0) };
    inline ImageRecognitionAsyncRequest& setReturnProductNum(int32_t returnProductNum) { DARABONBA_PTR_SET_VALUE(returnProductNum_, returnProductNum) };


    // returnProductProp Field Functions 
    bool hasReturnProductProp() const { return this->returnProductProp_ != nullptr;};
    void deleteReturnProductProp() { this->returnProductProp_ = nullptr;};
    inline int32_t getReturnProductProp() const { DARABONBA_PTR_GET_DEFAULT(returnProductProp_, 0) };
    inline ImageRecognitionAsyncRequest& setReturnProductProp(int32_t returnProductProp) { DARABONBA_PTR_SET_VALUE(returnProductProp_, returnProductProp) };


  protected:
    // The URL of the image. The image must be in JPG, JPEG, PNG, BMP, or WEBP format. The resolution must be between 256 × 256 and 3000 × 3000 pixels, and the file size cannot exceed 10 MB.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // Specifies the types of elements to be detected outside the image subject. Valid values:
    // - 1: Watermark.
    // - 2: Logo.
    // - 3: Text.
    // - 4: Text-containing color block.
    // You can specify multiple element types. This parameter and ObjectDetectElements cannot be empty at the same time.
    shared_ptr<vector<int32_t>> nonObjectDetectElements_ {};
    // Specifies the types of elements to be detected on the image subject. Valid values:
    // - 1: Watermark.
    // - 2: Logo.
    // - 3: Text.
    // - 4: Text-containing color block.
    // You can specify multiple element types.
    shared_ptr<vector<int32_t>> objectDetectElements_ {};
    // Specifies whether to return the marginalization distance of the subject. Valid values:
    // - 1: Yes.
    // - 0: No.
    // Default value: 0.
    shared_ptr<int32_t> returnBorderPixel_ {};
    // Specifies whether to return the OCR results of the text in the recognized area. Valid values:
    // - 1: Yes.
    // - 0: No.
    // Default value: 0.
    shared_ptr<int32_t> returnCharacter_ {};
    // Specifies whether to return the text proportion. Valid values:
    // - 1: Yes.
    // - 0: No.
    // Default value: 0.
    // This parameter takes effect only when the following two conditions are met:
    // 1. ReturnCharacter is set to 1.
    // 2. ObjectDetectElements or NonObjectDetectElements is set to 3, which means text recognition is required.
    shared_ptr<int32_t> returnCharacterProp_ {};
    // Specifies whether to return the number of subjects. Valid values:
    // - 1: Yes.
    // - 0: No.
    // Default value: 0.
    shared_ptr<int32_t> returnProductNum_ {};
    // Specifies whether to return the area proportion of the subject. Valid values:
    // - 1: Yes.
    // - 0: No.
    // Default value: 0.
    shared_ptr<int32_t> returnProductProp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
