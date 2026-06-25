// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class UpdateImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomContent, customContent_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IntAttr, intAttr_);
      DARABONBA_PTR_TO_JSON(IntAttr2, intAttr2_);
      DARABONBA_PTR_TO_JSON(IntAttr3, intAttr3_);
      DARABONBA_PTR_TO_JSON(IntAttr4, intAttr4_);
      DARABONBA_PTR_TO_JSON(PicName, picName_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(StrAttr, strAttr_);
      DARABONBA_PTR_TO_JSON(StrAttr2, strAttr2_);
      DARABONBA_PTR_TO_JSON(StrAttr3, strAttr3_);
      DARABONBA_PTR_TO_JSON(StrAttr4, strAttr4_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomContent, customContent_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IntAttr, intAttr_);
      DARABONBA_PTR_FROM_JSON(IntAttr2, intAttr2_);
      DARABONBA_PTR_FROM_JSON(IntAttr3, intAttr3_);
      DARABONBA_PTR_FROM_JSON(IntAttr4, intAttr4_);
      DARABONBA_PTR_FROM_JSON(PicName, picName_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(StrAttr, strAttr_);
      DARABONBA_PTR_FROM_JSON(StrAttr2, strAttr2_);
      DARABONBA_PTR_FROM_JSON(StrAttr3, strAttr3_);
      DARABONBA_PTR_FROM_JSON(StrAttr4, strAttr4_);
    };
    UpdateImageRequest() = default ;
    UpdateImageRequest(const UpdateImageRequest &) = default ;
    UpdateImageRequest(UpdateImageRequest &&) = default ;
    UpdateImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateImageRequest() = default ;
    UpdateImageRequest& operator=(const UpdateImageRequest &) = default ;
    UpdateImageRequest& operator=(UpdateImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customContent_ == nullptr
        && this->instanceName_ == nullptr && this->intAttr_ == nullptr && this->intAttr2_ == nullptr && this->intAttr3_ == nullptr && this->intAttr4_ == nullptr
        && this->picName_ == nullptr && this->productId_ == nullptr && this->strAttr_ == nullptr && this->strAttr2_ == nullptr && this->strAttr3_ == nullptr
        && this->strAttr4_ == nullptr; };
    // customContent Field Functions 
    bool hasCustomContent() const { return this->customContent_ != nullptr;};
    void deleteCustomContent() { this->customContent_ = nullptr;};
    inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
    inline UpdateImageRequest& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateImageRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // intAttr Field Functions 
    bool hasIntAttr() const { return this->intAttr_ != nullptr;};
    void deleteIntAttr() { this->intAttr_ = nullptr;};
    inline int32_t getIntAttr() const { DARABONBA_PTR_GET_DEFAULT(intAttr_, 0) };
    inline UpdateImageRequest& setIntAttr(int32_t intAttr) { DARABONBA_PTR_SET_VALUE(intAttr_, intAttr) };


    // intAttr2 Field Functions 
    bool hasIntAttr2() const { return this->intAttr2_ != nullptr;};
    void deleteIntAttr2() { this->intAttr2_ = nullptr;};
    inline int32_t getIntAttr2() const { DARABONBA_PTR_GET_DEFAULT(intAttr2_, 0) };
    inline UpdateImageRequest& setIntAttr2(int32_t intAttr2) { DARABONBA_PTR_SET_VALUE(intAttr2_, intAttr2) };


    // intAttr3 Field Functions 
    bool hasIntAttr3() const { return this->intAttr3_ != nullptr;};
    void deleteIntAttr3() { this->intAttr3_ = nullptr;};
    inline int32_t getIntAttr3() const { DARABONBA_PTR_GET_DEFAULT(intAttr3_, 0) };
    inline UpdateImageRequest& setIntAttr3(int32_t intAttr3) { DARABONBA_PTR_SET_VALUE(intAttr3_, intAttr3) };


    // intAttr4 Field Functions 
    bool hasIntAttr4() const { return this->intAttr4_ != nullptr;};
    void deleteIntAttr4() { this->intAttr4_ = nullptr;};
    inline int32_t getIntAttr4() const { DARABONBA_PTR_GET_DEFAULT(intAttr4_, 0) };
    inline UpdateImageRequest& setIntAttr4(int32_t intAttr4) { DARABONBA_PTR_SET_VALUE(intAttr4_, intAttr4) };


    // picName Field Functions 
    bool hasPicName() const { return this->picName_ != nullptr;};
    void deletePicName() { this->picName_ = nullptr;};
    inline string getPicName() const { DARABONBA_PTR_GET_DEFAULT(picName_, "") };
    inline UpdateImageRequest& setPicName(string picName) { DARABONBA_PTR_SET_VALUE(picName_, picName) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline UpdateImageRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // strAttr Field Functions 
    bool hasStrAttr() const { return this->strAttr_ != nullptr;};
    void deleteStrAttr() { this->strAttr_ = nullptr;};
    inline string getStrAttr() const { DARABONBA_PTR_GET_DEFAULT(strAttr_, "") };
    inline UpdateImageRequest& setStrAttr(string strAttr) { DARABONBA_PTR_SET_VALUE(strAttr_, strAttr) };


    // strAttr2 Field Functions 
    bool hasStrAttr2() const { return this->strAttr2_ != nullptr;};
    void deleteStrAttr2() { this->strAttr2_ = nullptr;};
    inline string getStrAttr2() const { DARABONBA_PTR_GET_DEFAULT(strAttr2_, "") };
    inline UpdateImageRequest& setStrAttr2(string strAttr2) { DARABONBA_PTR_SET_VALUE(strAttr2_, strAttr2) };


    // strAttr3 Field Functions 
    bool hasStrAttr3() const { return this->strAttr3_ != nullptr;};
    void deleteStrAttr3() { this->strAttr3_ = nullptr;};
    inline string getStrAttr3() const { DARABONBA_PTR_GET_DEFAULT(strAttr3_, "") };
    inline UpdateImageRequest& setStrAttr3(string strAttr3) { DARABONBA_PTR_SET_VALUE(strAttr3_, strAttr3) };


    // strAttr4 Field Functions 
    bool hasStrAttr4() const { return this->strAttr4_ != nullptr;};
    void deleteStrAttr4() { this->strAttr4_ = nullptr;};
    inline string getStrAttr4() const { DARABONBA_PTR_GET_DEFAULT(strAttr4_, "") };
    inline UpdateImageRequest& setStrAttr4(string strAttr4) { DARABONBA_PTR_SET_VALUE(strAttr4_, strAttr4) };


  protected:
    // The custom content. The content can be up to 4,096 characters in length.
    // >This field is returned when you call the "<props="china">[SearchImageByPic](https://help.aliyun.com/document_detail/202282.html)<props="intl">[SearchImageByPic](https://www.alibabacloud.com/help/zh/image-search/latest/updateimage)" operation. For example, you can add text such as image descriptions.
    shared_ptr<string> customContent_ {};
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // If you have purchased an Image Search instance, go to the [Image Search console](https://imagesearch.console.aliyun.com/) to view the instance name.
    // If you have not purchased an Image Search instance, see [Activate the service](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).
    // >The instance name is not the instance ID. Make sure to distinguish between them.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // The integer attribute. This attribute can be used to filter query results. This field is returned in query results.
    shared_ptr<int32_t> intAttr_ {};
    // The integer attribute. This attribute can be used to filter query results. This field is returned in query results.
    shared_ptr<int32_t> intAttr2_ {};
    // The integer attribute. This attribute can be used to filter query results. This field is returned in query results.
    shared_ptr<int32_t> intAttr3_ {};
    // The integer attribute. This attribute can be used to filter query results. This field is returned in query results.
    shared_ptr<int32_t> intAttr4_ {};
    // The image name. The name can be up to 256 characters in length.
    // > - The combination of ProductId and PicName uniquely identifies an image.
    // - If you add an image multiple times with the same ProductId and PicName, the most recently added image takes effect and the previously added images are replaced.
    shared_ptr<string> picName_ {};
    // The product ID. The ID can be up to 256 characters in length.
    // 
    // >A product can have multiple images. You can customize the value of this parameter based on your business requirements. For example: top001, pants002.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // The string attribute. The attribute can be up to 128 characters in length. It can be used to filter query results. This field is returned in query results.
    shared_ptr<string> strAttr_ {};
    // The string attribute. The attribute can be up to 128 characters in length. It can be used to filter query results. This field is returned in query results.
    shared_ptr<string> strAttr2_ {};
    // The string attribute. The attribute can be up to 128 characters in length. It can be used to filter query results. This field is returned in query results.
    shared_ptr<string> strAttr3_ {};
    // The string attribute. The attribute can be up to 128 characters in length. It can be used to filter query results. This field is returned in query results.
    shared_ptr<string> strAttr4_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
