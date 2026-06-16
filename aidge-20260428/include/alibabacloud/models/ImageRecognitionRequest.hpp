// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGERECOGNITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMAGERECOGNITIONREQUEST_HPP_
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
  class ImageRecognitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageRecognitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_TO_JSON(NonObjectDetectElements, nonObjectDetectElements_);
      DARABONBA_PTR_TO_JSON(ObjectDetectElements, objectDetectElements_);
      DARABONBA_PTR_TO_JSON(ReturnBorderPixel, returnBorderPixel_);
      DARABONBA_PTR_TO_JSON(ReturnCharacter, returnCharacter_);
      DARABONBA_PTR_TO_JSON(ReturnCharacterProp, returnCharacterProp_);
      DARABONBA_PTR_TO_JSON(ReturnProductNum, returnProductNum_);
      DARABONBA_PTR_TO_JSON(ReturnProductProp, returnProductProp_);
    };
    friend void from_json(const Darabonba::Json& j, ImageRecognitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
      DARABONBA_PTR_FROM_JSON(NonObjectDetectElements, nonObjectDetectElements_);
      DARABONBA_PTR_FROM_JSON(ObjectDetectElements, objectDetectElements_);
      DARABONBA_PTR_FROM_JSON(ReturnBorderPixel, returnBorderPixel_);
      DARABONBA_PTR_FROM_JSON(ReturnCharacter, returnCharacter_);
      DARABONBA_PTR_FROM_JSON(ReturnCharacterProp, returnCharacterProp_);
      DARABONBA_PTR_FROM_JSON(ReturnProductNum, returnProductNum_);
      DARABONBA_PTR_FROM_JSON(ReturnProductProp, returnProductProp_);
    };
    ImageRecognitionRequest() = default ;
    ImageRecognitionRequest(const ImageRecognitionRequest &) = default ;
    ImageRecognitionRequest(ImageRecognitionRequest &&) = default ;
    ImageRecognitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageRecognitionRequest() = default ;
    ImageRecognitionRequest& operator=(const ImageRecognitionRequest &) = default ;
    ImageRecognitionRequest& operator=(ImageRecognitionRequest &&) = default ;
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
    inline ImageRecognitionRequest& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // nonObjectDetectElements Field Functions 
    bool hasNonObjectDetectElements() const { return this->nonObjectDetectElements_ != nullptr;};
    void deleteNonObjectDetectElements() { this->nonObjectDetectElements_ = nullptr;};
    inline const vector<int32_t> & getNonObjectDetectElements() const { DARABONBA_PTR_GET_CONST(nonObjectDetectElements_, vector<int32_t>) };
    inline vector<int32_t> getNonObjectDetectElements() { DARABONBA_PTR_GET(nonObjectDetectElements_, vector<int32_t>) };
    inline ImageRecognitionRequest& setNonObjectDetectElements(const vector<int32_t> & nonObjectDetectElements) { DARABONBA_PTR_SET_VALUE(nonObjectDetectElements_, nonObjectDetectElements) };
    inline ImageRecognitionRequest& setNonObjectDetectElements(vector<int32_t> && nonObjectDetectElements) { DARABONBA_PTR_SET_RVALUE(nonObjectDetectElements_, nonObjectDetectElements) };


    // objectDetectElements Field Functions 
    bool hasObjectDetectElements() const { return this->objectDetectElements_ != nullptr;};
    void deleteObjectDetectElements() { this->objectDetectElements_ = nullptr;};
    inline const vector<int32_t> & getObjectDetectElements() const { DARABONBA_PTR_GET_CONST(objectDetectElements_, vector<int32_t>) };
    inline vector<int32_t> getObjectDetectElements() { DARABONBA_PTR_GET(objectDetectElements_, vector<int32_t>) };
    inline ImageRecognitionRequest& setObjectDetectElements(const vector<int32_t> & objectDetectElements) { DARABONBA_PTR_SET_VALUE(objectDetectElements_, objectDetectElements) };
    inline ImageRecognitionRequest& setObjectDetectElements(vector<int32_t> && objectDetectElements) { DARABONBA_PTR_SET_RVALUE(objectDetectElements_, objectDetectElements) };


    // returnBorderPixel Field Functions 
    bool hasReturnBorderPixel() const { return this->returnBorderPixel_ != nullptr;};
    void deleteReturnBorderPixel() { this->returnBorderPixel_ = nullptr;};
    inline int32_t getReturnBorderPixel() const { DARABONBA_PTR_GET_DEFAULT(returnBorderPixel_, 0) };
    inline ImageRecognitionRequest& setReturnBorderPixel(int32_t returnBorderPixel) { DARABONBA_PTR_SET_VALUE(returnBorderPixel_, returnBorderPixel) };


    // returnCharacter Field Functions 
    bool hasReturnCharacter() const { return this->returnCharacter_ != nullptr;};
    void deleteReturnCharacter() { this->returnCharacter_ = nullptr;};
    inline int32_t getReturnCharacter() const { DARABONBA_PTR_GET_DEFAULT(returnCharacter_, 0) };
    inline ImageRecognitionRequest& setReturnCharacter(int32_t returnCharacter) { DARABONBA_PTR_SET_VALUE(returnCharacter_, returnCharacter) };


    // returnCharacterProp Field Functions 
    bool hasReturnCharacterProp() const { return this->returnCharacterProp_ != nullptr;};
    void deleteReturnCharacterProp() { this->returnCharacterProp_ = nullptr;};
    inline int32_t getReturnCharacterProp() const { DARABONBA_PTR_GET_DEFAULT(returnCharacterProp_, 0) };
    inline ImageRecognitionRequest& setReturnCharacterProp(int32_t returnCharacterProp) { DARABONBA_PTR_SET_VALUE(returnCharacterProp_, returnCharacterProp) };


    // returnProductNum Field Functions 
    bool hasReturnProductNum() const { return this->returnProductNum_ != nullptr;};
    void deleteReturnProductNum() { this->returnProductNum_ = nullptr;};
    inline int32_t getReturnProductNum() const { DARABONBA_PTR_GET_DEFAULT(returnProductNum_, 0) };
    inline ImageRecognitionRequest& setReturnProductNum(int32_t returnProductNum) { DARABONBA_PTR_SET_VALUE(returnProductNum_, returnProductNum) };


    // returnProductProp Field Functions 
    bool hasReturnProductProp() const { return this->returnProductProp_ != nullptr;};
    void deleteReturnProductProp() { this->returnProductProp_ = nullptr;};
    inline int32_t getReturnProductProp() const { DARABONBA_PTR_GET_DEFAULT(returnProductProp_, 0) };
    inline ImageRecognitionRequest& setReturnProductProp(int32_t returnProductProp) { DARABONBA_PTR_SET_VALUE(returnProductProp_, returnProductProp) };


  protected:
    // The URL of the image to recognize.
    // 
    // This parameter is required.
    shared_ptr<string> imageUrl_ {};
    // The list of non-subject element types to detect. Valid values: 1 (background), 2 (border), 3 (watermark), and 4 (collage).
    shared_ptr<vector<int32_t>> nonObjectDetectElements_ {};
    // The list of subject element types to detect. Valid values: 1 (product subject), 2 (model), 3 (text), and 4 (logo).
    shared_ptr<vector<int32_t>> objectDetectElements_ {};
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
