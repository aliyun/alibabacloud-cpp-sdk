// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class AddImageAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(CustomContent, customContent_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IntAttr, intAttr_);
      DARABONBA_PTR_TO_JSON(IntAttr2, intAttr2_);
      DARABONBA_PTR_TO_JSON(IntAttr3, intAttr3_);
      DARABONBA_PTR_TO_JSON(IntAttr4, intAttr4_);
      // picContentObject_ is stream
      DARABONBA_PTR_TO_JSON(PicName, picName_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StrAttr, strAttr_);
      DARABONBA_PTR_TO_JSON(StrAttr2, strAttr2_);
      DARABONBA_PTR_TO_JSON(StrAttr3, strAttr3_);
      DARABONBA_PTR_TO_JSON(StrAttr4, strAttr4_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(CustomContent, customContent_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IntAttr, intAttr_);
      DARABONBA_PTR_FROM_JSON(IntAttr2, intAttr2_);
      DARABONBA_PTR_FROM_JSON(IntAttr3, intAttr3_);
      DARABONBA_PTR_FROM_JSON(IntAttr4, intAttr4_);
      // picContentObject_ is stream
      DARABONBA_PTR_FROM_JSON(PicName, picName_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StrAttr, strAttr_);
      DARABONBA_PTR_FROM_JSON(StrAttr2, strAttr2_);
      DARABONBA_PTR_FROM_JSON(StrAttr3, strAttr3_);
      DARABONBA_PTR_FROM_JSON(StrAttr4, strAttr4_);
    };
    AddImageAdvanceRequest() = default ;
    AddImageAdvanceRequest(const AddImageAdvanceRequest &) = default ;
    AddImageAdvanceRequest(AddImageAdvanceRequest &&) = default ;
    AddImageAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageAdvanceRequest() = default ;
    AddImageAdvanceRequest& operator=(const AddImageAdvanceRequest &) = default ;
    AddImageAdvanceRequest& operator=(AddImageAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->crop_ == nullptr && this->customContent_ == nullptr && this->instanceName_ == nullptr && this->intAttr_ == nullptr && this->intAttr2_ == nullptr
        && this->intAttr3_ == nullptr && this->intAttr4_ == nullptr && this->picContentObject_ == nullptr && this->picName_ == nullptr && this->productId_ == nullptr
        && this->region_ == nullptr && this->strAttr_ == nullptr && this->strAttr2_ == nullptr && this->strAttr3_ == nullptr && this->strAttr4_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
    inline AddImageAdvanceRequest& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline bool getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, false) };
    inline AddImageAdvanceRequest& setCrop(bool crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline AddImageAdvanceRequest& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline AddImageAdvanceRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // intAttr Field Functions 
    bool hasIntAttr() const { return this->intAttr_ != nullptr;};
    void deleteIntAttr() { this->intAttr_ = nullptr;};
    inline int32_t getIntAttr() const { DARABONBA_PTR_GET_DEFAULT(intAttr_, 0) };
    inline AddImageAdvanceRequest& setIntAttr(int32_t intAttr) { DARABONBA_PTR_SET_VALUE(intAttr_, intAttr) };


    // intAttr2 Field Functions 
    bool hasIntAttr2() const { return this->intAttr2_ != nullptr;};
    void deleteIntAttr2() { this->intAttr2_ = nullptr;};
    inline int32_t getIntAttr2() const { DARABONBA_PTR_GET_DEFAULT(intAttr2_, 0) };
    inline AddImageAdvanceRequest& setIntAttr2(int32_t intAttr2) { DARABONBA_PTR_SET_VALUE(intAttr2_, intAttr2) };


    // intAttr3 Field Functions 
    bool hasIntAttr3() const { return this->intAttr3_ != nullptr;};
    void deleteIntAttr3() { this->intAttr3_ = nullptr;};
    inline int32_t getIntAttr3() const { DARABONBA_PTR_GET_DEFAULT(intAttr3_, 0) };
    inline AddImageAdvanceRequest& setIntAttr3(int32_t intAttr3) { DARABONBA_PTR_SET_VALUE(intAttr3_, intAttr3) };


    // intAttr4 Field Functions 
    bool hasIntAttr4() const { return this->intAttr4_ != nullptr;};
    void deleteIntAttr4() { this->intAttr4_ = nullptr;};
    inline int32_t getIntAttr4() const { DARABONBA_PTR_GET_DEFAULT(intAttr4_, 0) };
    inline AddImageAdvanceRequest& setIntAttr4(int32_t intAttr4) { DARABONBA_PTR_SET_VALUE(intAttr4_, intAttr4) };


    // picContentObject Field Functions 
    bool hasPicContentObject() const { return this->picContentObject_ != nullptr;};
    void deletePicContentObject() { this->picContentObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getPicContentObject() const { DARABONBA_GET(picContentObject_) };
    inline AddImageAdvanceRequest& setPicContentObject(shared_ptr<Darabonba::IStream> picContentObject) { DARABONBA_SET_VALUE(picContentObject_, picContentObject) };


    // picName Field Functions 
    bool hasPicName() const { return this->picName_ != nullptr;};
    void deletePicName() { this->picName_ = nullptr;};
    inline string getPicName() const { DARABONBA_PTR_GET_DEFAULT(picName_, "") };
    inline AddImageAdvanceRequest& setPicName(string picName) { DARABONBA_PTR_SET_VALUE(picName_, picName) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline AddImageAdvanceRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline AddImageAdvanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // strAttr Field Functions 
    bool hasStrAttr() const { return this->strAttr_ != nullptr;};
    void deleteStrAttr() { this->strAttr_ = nullptr;};
    inline string getStrAttr() const { DARABONBA_PTR_GET_DEFAULT(strAttr_, "") };
    inline AddImageAdvanceRequest& setStrAttr(string strAttr) { DARABONBA_PTR_SET_VALUE(strAttr_, strAttr) };


    // strAttr2 Field Functions 
    bool hasStrAttr2() const { return this->strAttr2_ != nullptr;};
    void deleteStrAttr2() { this->strAttr2_ = nullptr;};
    inline string getStrAttr2() const { DARABONBA_PTR_GET_DEFAULT(strAttr2_, "") };
    inline AddImageAdvanceRequest& setStrAttr2(string strAttr2) { DARABONBA_PTR_SET_VALUE(strAttr2_, strAttr2) };


    // strAttr3 Field Functions 
    bool hasStrAttr3() const { return this->strAttr3_ != nullptr;};
    void deleteStrAttr3() { this->strAttr3_ = nullptr;};
    inline string getStrAttr3() const { DARABONBA_PTR_GET_DEFAULT(strAttr3_, "") };
    inline AddImageAdvanceRequest& setStrAttr3(string strAttr3) { DARABONBA_PTR_SET_VALUE(strAttr3_, strAttr3) };


    // strAttr4 Field Functions 
    bool hasStrAttr4() const { return this->strAttr4_ != nullptr;};
    void deleteStrAttr4() { this->strAttr4_ = nullptr;};
    inline string getStrAttr4() const { DARABONBA_PTR_GET_DEFAULT(strAttr4_, "") };
    inline AddImageAdvanceRequest& setStrAttr4(string strAttr4) { DARABONBA_PTR_SET_VALUE(strAttr4_, strAttr4) };


  protected:
    // The image category. For more information, refer to [Category reference](https://help.aliyun.com/document_detail/179184.html).
    // > - For product image search, if you specify a category, the specified category is used. If you do not specify a category, the system predicts the category. The predicted category result can be obtained from the response.
    // <props="china">
    // - For fabric, trademark, generic, furniture, and industrial hardware image search, the system sets the category to 88888888 regardless of whether you specify a category.
    // 
    // - For generic image search, the system sets the category to 88888888 regardless of whether you specify a category.
    shared_ptr<int32_t> categoryId_ {};
    // Specifies whether to perform subject identification. Default value: true.
    //  - true: The system performs subject identification and searches based on the identified subject. The subject identification result can be obtained from the response.
    // - false: The system does not perform subject identification and searches based on the entire image.
    // 
    // <props="china">For fabric image search, this parameter is ignored. The system searches based on the entire image..
    shared_ptr<bool> crop_ {};
    // The custom content defined by the user. The content can be up to 4,096 characters in length.
    // >This field is returned in query results. For example, you can add a text description of the image.
    shared_ptr<string> customContent_ {};
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // If you have purchased an Image Search instance, log on to the [Image Search console](https://imagesearch.console.aliyun.com/) to view the instance name.
    // If you have not purchased an Image Search instance, refer to [Activate the service](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).
    // >The instance name is not the instance ID. Do not confuse the two.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The integer attribute. This attribute can be used to filter query results and is returned in query results.
    shared_ptr<int32_t> intAttr_ {};
    // The integer attribute. This attribute can be used to filter query results and is returned in query results.
    shared_ptr<int32_t> intAttr2_ {};
    // The integer attribute. This attribute can be used to filter query results and is returned in query results.
    shared_ptr<int32_t> intAttr3_ {};
    // The integer attribute. This attribute can be used to filter query results and is returned in query results.
    shared_ptr<int32_t> intAttr4_ {};
    // The image content.
    //  - The image size cannot exceed 4 MB.
    //  - Image formats: PNG, JPG, JPEG, BMP, GIF, WEBP, TIFF, and PPM.
    //  - The transmission wait time cannot exceed 5 seconds.
    // <props="china">
    //  - For product image search, generic image search, furniture image search, and industrial hardware image search, the image width and height must be at least 100 pixels and at most 4,096 pixels.
    //   For trademark image search, the image width and height must be at least 200 pixels and less than 4,096 pixels.
    //  For fabric image search, the image width and height must be at least 448 pixels and at most 4,096 pixels.
    // 
    // <props="intl">
    //  - For product image search and generic image search, the image width and height must be at least 100 pixels and at most 4,096 pixels.
    // 
    // - The image must not contain rotation information.
    // 
    // > - **When calling by using an SDK:**
    //   - If you use a V3 SDK, you do not need to set the PicContent field. The SDK encapsulates this field as PicContentObject and automatically converts it to Base64 encoding. For specific examples, refer to [Java SDK](https://help.aliyun.com/document_detail/179188.html).
    //   - The SDK does not support passing image URLs directly. The V3 SDK provides an alternative method to upload images by URL. For specific examples, refer to [Java SDK](https://help.aliyun.com/document_detail/179188.html).
    // - **When calling by using the Alibaba Cloud OpenAPI platform:**
    //   - If you use the **2019-03-25** version, set the **PicContent** field to the **Base64** encoding of the image.
    //   - If you use the **2020-12-14** version, click to upload the image directly in the **PicContent** field.
    // 
    // This parameter is required.
    shared_ptr<Darabonba::IStream> picContentObject_ {};
    // The image name. The name can be up to 256 characters in length.
    // > - ProductId and PicName uniquely identify an image.
    // - If you add multiple images with the same ProductId and PicName, only the last added image is retained. Previously added images are overwritten.
    // 
    // This parameter is required.
    shared_ptr<string> picName_ {};
    // The product ID. The ID can be up to 256 characters in length.
    // 
    // >A product can have multiple images.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // The subject region of the image, in the format of `x1,x2,y1,y2`, where `x1,y1` is the upper-left point and `x2,y2` is the lower-right point.
    // > - If you specify Region, the system searches based on the specified Region regardless of the Crop parameter value.
    // <props="china">
    // - For fabric image search, this parameter is ignored. The system searches based on the entire image.
    // 
    // - The Region parameter has no unit. The values are based on the pixel dimensions of the image. If the image is scaled, the Region parameter values must be scaled proportionally.
    shared_ptr<string> region_ {};
    // The string attribute. The attribute can be up to 128 characters in length. This attribute can be used to filter query results and is returned in query results.
    // > Special characters such as \\¥$&% are not supported.
    shared_ptr<string> strAttr_ {};
    // The string attribute. The attribute can be up to 128 characters in length. This attribute can be used to filter query results and is returned in query results.
    // > Special characters such as \\¥$&% are not supported.
    shared_ptr<string> strAttr2_ {};
    // The string attribute. The attribute can be up to 128 characters in length. This attribute can be used to filter query results and is returned in query results.
    // > Special characters such as \\¥$&% are not supported.
    shared_ptr<string> strAttr3_ {};
    // The string attribute. The attribute can be up to 128 characters in length. This attribute can be used to filter query results and is returned in query results.
    // > Special characters such as \\¥$&% are not supported.
    shared_ptr<string> strAttr4_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
