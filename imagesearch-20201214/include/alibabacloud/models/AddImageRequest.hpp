// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class AddImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(CustomContent, customContent_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IntAttr, intAttr_);
      DARABONBA_PTR_TO_JSON(IntAttr2, intAttr2_);
      DARABONBA_PTR_TO_JSON(IntAttr3, intAttr3_);
      DARABONBA_PTR_TO_JSON(IntAttr4, intAttr4_);
      DARABONBA_PTR_TO_JSON(PicContent, picContent_);
      DARABONBA_PTR_TO_JSON(PicName, picName_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StrAttr, strAttr_);
      DARABONBA_PTR_TO_JSON(StrAttr2, strAttr2_);
      DARABONBA_PTR_TO_JSON(StrAttr3, strAttr3_);
      DARABONBA_PTR_TO_JSON(StrAttr4, strAttr4_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(CustomContent, customContent_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IntAttr, intAttr_);
      DARABONBA_PTR_FROM_JSON(IntAttr2, intAttr2_);
      DARABONBA_PTR_FROM_JSON(IntAttr3, intAttr3_);
      DARABONBA_PTR_FROM_JSON(IntAttr4, intAttr4_);
      DARABONBA_PTR_FROM_JSON(PicContent, picContent_);
      DARABONBA_PTR_FROM_JSON(PicName, picName_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StrAttr, strAttr_);
      DARABONBA_PTR_FROM_JSON(StrAttr2, strAttr2_);
      DARABONBA_PTR_FROM_JSON(StrAttr3, strAttr3_);
      DARABONBA_PTR_FROM_JSON(StrAttr4, strAttr4_);
    };
    AddImageRequest() = default ;
    AddImageRequest(const AddImageRequest &) = default ;
    AddImageRequest(AddImageRequest &&) = default ;
    AddImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageRequest() = default ;
    AddImageRequest& operator=(const AddImageRequest &) = default ;
    AddImageRequest& operator=(AddImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->crop_ == nullptr && this->customContent_ == nullptr && this->instanceName_ == nullptr && this->intAttr_ == nullptr && this->intAttr2_ == nullptr
        && this->intAttr3_ == nullptr && this->intAttr4_ == nullptr && this->picContent_ == nullptr && this->picName_ == nullptr && this->productId_ == nullptr
        && this->region_ == nullptr && this->strAttr_ == nullptr && this->strAttr2_ == nullptr && this->strAttr3_ == nullptr && this->strAttr4_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
    inline AddImageRequest& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline bool getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, false) };
    inline AddImageRequest& setCrop(bool crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline AddImageRequest& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline AddImageRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // intAttr Field Functions 
    bool hasIntAttr() const { return this->intAttr_ != nullptr;};
    void deleteIntAttr() { this->intAttr_ = nullptr;};
    inline int32_t getIntAttr() const { DARABONBA_PTR_GET_DEFAULT(intAttr_, 0) };
    inline AddImageRequest& setIntAttr(int32_t intAttr) { DARABONBA_PTR_SET_VALUE(intAttr_, intAttr) };


    // intAttr2 Field Functions 
    bool hasIntAttr2() const { return this->intAttr2_ != nullptr;};
    void deleteIntAttr2() { this->intAttr2_ = nullptr;};
    inline int32_t getIntAttr2() const { DARABONBA_PTR_GET_DEFAULT(intAttr2_, 0) };
    inline AddImageRequest& setIntAttr2(int32_t intAttr2) { DARABONBA_PTR_SET_VALUE(intAttr2_, intAttr2) };


    // intAttr3 Field Functions 
    bool hasIntAttr3() const { return this->intAttr3_ != nullptr;};
    void deleteIntAttr3() { this->intAttr3_ = nullptr;};
    inline int32_t getIntAttr3() const { DARABONBA_PTR_GET_DEFAULT(intAttr3_, 0) };
    inline AddImageRequest& setIntAttr3(int32_t intAttr3) { DARABONBA_PTR_SET_VALUE(intAttr3_, intAttr3) };


    // intAttr4 Field Functions 
    bool hasIntAttr4() const { return this->intAttr4_ != nullptr;};
    void deleteIntAttr4() { this->intAttr4_ = nullptr;};
    inline int32_t getIntAttr4() const { DARABONBA_PTR_GET_DEFAULT(intAttr4_, 0) };
    inline AddImageRequest& setIntAttr4(int32_t intAttr4) { DARABONBA_PTR_SET_VALUE(intAttr4_, intAttr4) };


    // picContent Field Functions 
    bool hasPicContent() const { return this->picContent_ != nullptr;};
    void deletePicContent() { this->picContent_ = nullptr;};
    inline string getPicContent() const { DARABONBA_PTR_GET_DEFAULT(picContent_, "") };
    inline AddImageRequest& setPicContent(string picContent) { DARABONBA_PTR_SET_VALUE(picContent_, picContent) };


    // picName Field Functions 
    bool hasPicName() const { return this->picName_ != nullptr;};
    void deletePicName() { this->picName_ = nullptr;};
    inline string getPicName() const { DARABONBA_PTR_GET_DEFAULT(picName_, "") };
    inline AddImageRequest& setPicName(string picName) { DARABONBA_PTR_SET_VALUE(picName_, picName) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline AddImageRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline AddImageRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // strAttr Field Functions 
    bool hasStrAttr() const { return this->strAttr_ != nullptr;};
    void deleteStrAttr() { this->strAttr_ = nullptr;};
    inline string getStrAttr() const { DARABONBA_PTR_GET_DEFAULT(strAttr_, "") };
    inline AddImageRequest& setStrAttr(string strAttr) { DARABONBA_PTR_SET_VALUE(strAttr_, strAttr) };


    // strAttr2 Field Functions 
    bool hasStrAttr2() const { return this->strAttr2_ != nullptr;};
    void deleteStrAttr2() { this->strAttr2_ = nullptr;};
    inline string getStrAttr2() const { DARABONBA_PTR_GET_DEFAULT(strAttr2_, "") };
    inline AddImageRequest& setStrAttr2(string strAttr2) { DARABONBA_PTR_SET_VALUE(strAttr2_, strAttr2) };


    // strAttr3 Field Functions 
    bool hasStrAttr3() const { return this->strAttr3_ != nullptr;};
    void deleteStrAttr3() { this->strAttr3_ = nullptr;};
    inline string getStrAttr3() const { DARABONBA_PTR_GET_DEFAULT(strAttr3_, "") };
    inline AddImageRequest& setStrAttr3(string strAttr3) { DARABONBA_PTR_SET_VALUE(strAttr3_, strAttr3) };


    // strAttr4 Field Functions 
    bool hasStrAttr4() const { return this->strAttr4_ != nullptr;};
    void deleteStrAttr4() { this->strAttr4_ = nullptr;};
    inline string getStrAttr4() const { DARABONBA_PTR_GET_DEFAULT(strAttr4_, "") };
    inline AddImageRequest& setStrAttr4(string strAttr4) { DARABONBA_PTR_SET_VALUE(strAttr4_, strAttr4) };


  protected:
    // The category of the image. For more information, see [Category reference](https://help.aliyun.com/document_detail/179184.html).
    // 
    // > *   For product image search, if you specify a category for an image, the specified category prevails. If you do not specify a category for an image, the system predicts the category, and returns the prediction result in the response.
    // >*   For generic image search, only 88888888 may be returned for this parameter in the response regardless of whether a category is specified.
    shared_ptr<int32_t> categoryId_ {};
    // Specifies whether to identify the subject in the image and search for images based on the subject identification result. Default value: true. Valid values:
    // 
    // *   true: The system identifies the subject in the image, and searches for images based on the subject identification result. The subject identification result is included in the response.
    // *   false: The system does not identify the subject in the image, and searches for images based on the entire image.
    shared_ptr<bool> crop_ {};
    // The user-defined content. The value can be up to 4,096 characters in length.
    // 
    // > If you specify this parameter, the response includes this parameter and its value. You can add text such as an image description.
    shared_ptr<string> customContent_ {};
    // The name of the Image Search instance. The name can be up to 20 characters in length. If an Image Search instance is purchased, you can log on to the [Image Search console](https://imagesearch.console.aliyun.com/) to view the instance. If no Image Search instance is purchased, you must purchase an instance. For more information, see [Activate Image Search](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).
    // 
    // > The instance name is not the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The attribute, which is an integer. The attribute can be used to filter images when you search for images. If you specify this parameter, the response includes this parameter and its value.
    shared_ptr<int32_t> intAttr_ {};
    // The attribute, which is an integer. The attribute can be used to filter images when you search for images. If you specify this parameter, the response includes this parameter and its value.
    shared_ptr<int32_t> intAttr2_ {};
    shared_ptr<int32_t> intAttr3_ {};
    shared_ptr<int32_t> intAttr4_ {};
    // The image file. The image file is encoded in Base64.
    // 
    // *   The file size of the image cannot exceed 4 MB.
    // *   The following image formats are supported: PNG, JPG, JPEG, BMP, GIF, WebP, TIFF, and PPM.
    // *   The transmission timeout period cannot exceed 5 seconds.
    // *   For product and generic image searches, the length and width of the image must range from 100 pixels to 4,096 pixels.
    // *   The image cannot contain rotation settings.
    // 
    // > *   If you use SDKs to call this operation, you do not need to specify **PicContent**. The SDKs encapsulate this parameter and automatically encode its value in Base64. For more information about how to use Image Search SDK for Java, see [Java SDK](https://help.aliyun.com/document_detail/179188.html).
    // >*   If you use OpenAPI Explorer to call this operation, you can select only the **2019-03-25** version. If you call this operation of other versions, the value of **PicContent** cannot be encoded in Base64.
    // 
    // This parameter is required.
    shared_ptr<string> picContent_ {};
    // The name of the image. The name can be up to 512 characters in length.
    // 
    // > *   An image is uniquely identified by the values of ProductId and PicName.
    // >*   If you add an image whose product ID (ProductId) and image name (PicName) are the same as those of an existing image, the newly added image overwrites the existing image.
    // 
    // This parameter is required.
    shared_ptr<string> picName_ {};
    // The ID of the product. The ID can be up to 512 characters in length.
    // 
    // > A product may have multiple images.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // The subject area of the image, in the format of `x1,x2,y1,y2`. `x1 and y1` represent the position in the upper-left corner, in pixels. `x2 and y2` represent the position in the lower-right corner, in pixels.
    // 
    // > *   If you specify Region, the system searches for images based on the value of Region regardless of the value of Crop.
    // >*   The value of Region does not have a unit. The value is generated based on the length and width of the image. If the length and width of the image are scaled, the value of Region must be proportionally adjusted.
    shared_ptr<string> region_ {};
    // The attribute, which is a string. The value can be up to 128 characters in length. The attribute can be used to filter images when you search for images. If you specify this parameter, the response includes this parameter and its value.
    // 
    // > The value cannot contain the following special characters: \\ ¥ $ & %
    shared_ptr<string> strAttr_ {};
    // The attribute, which is a string. The value can be up to 128 characters in length. The attribute can be used to filter images when you search for images. If you specify this parameter, the response includes this parameter and its value.
    // 
    // > The value cannot contain the following special characters: \\ ¥ $ & %
    shared_ptr<string> strAttr2_ {};
    shared_ptr<string> strAttr3_ {};
    shared_ptr<string> strAttr4_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
