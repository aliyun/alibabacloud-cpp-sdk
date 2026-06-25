// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class DeleteImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsDeleteByFilter, isDeleteByFilter_);
      DARABONBA_PTR_TO_JSON(PicName, picName_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsDeleteByFilter, isDeleteByFilter_);
      DARABONBA_PTR_FROM_JSON(PicName, picName_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    DeleteImageRequest() = default ;
    DeleteImageRequest(const DeleteImageRequest &) = default ;
    DeleteImageRequest(DeleteImageRequest &&) = default ;
    DeleteImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImageRequest() = default ;
    DeleteImageRequest& operator=(const DeleteImageRequest &) = default ;
    DeleteImageRequest& operator=(DeleteImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->instanceName_ == nullptr && this->isDeleteByFilter_ == nullptr && this->picName_ == nullptr && this->productId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline DeleteImageRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DeleteImageRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isDeleteByFilter Field Functions 
    bool hasIsDeleteByFilter() const { return this->isDeleteByFilter_ != nullptr;};
    void deleteIsDeleteByFilter() { this->isDeleteByFilter_ = nullptr;};
    inline bool getIsDeleteByFilter() const { DARABONBA_PTR_GET_DEFAULT(isDeleteByFilter_, false) };
    inline DeleteImageRequest& setIsDeleteByFilter(bool isDeleteByFilter) { DARABONBA_PTR_SET_VALUE(isDeleteByFilter_, isDeleteByFilter) };


    // picName Field Functions 
    bool hasPicName() const { return this->picName_ != nullptr;};
    void deletePicName() { this->picName_ = nullptr;};
    inline string getPicName() const { DARABONBA_PTR_GET_DEFAULT(picName_, "") };
    inline DeleteImageRequest& setPicName(string picName) { DARABONBA_PTR_SET_VALUE(picName_, picName) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DeleteImageRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    // The filter condition. The operators supported for int_attr include greater than (>), greater than or equal to (>=), less than (<), less than or equal to (<=), and equal to (=). The operators supported for str_attr include equal to (=) and not equal to (!=). Multiple conditions can be connected by using AND and OR.
    // Examples:
    // - int_attr >= 100.
    // - str_attr != "value1".
    // - int_attr = 1000 AND str_attr = "value1".
    // >A maximum of 4096 characters are supported.
    shared_ptr<string> filter_ {};
    // The name of the Image Search instance. The name can be up to 20 characters in length.
    // If you have purchased an Image Search instance, log on to the [Image Search console](https://imagesearch.console.aliyun.com/) to view the instance name.
    // If you have not purchased an Image Search instance, refer to [Activate the service](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).
    // >The instance name is not the instance ID. The instance name must be unique within the same region. Make sure that you use the correct value.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // Specifies whether to delete images based on the Filter parameter.
    // > 1. If this parameter is set to true, images are deleted based on the Filter parameter, and Filter is required.   
    //  2. If this parameter is set to false, images are deleted based on ProductId or the combination of ProductId and PicName. ProductId is required.
    shared_ptr<bool> isDeleteByFilter_ {};
    // The image name.
    //  - If you do not specify this parameter, all images under the specified ProductId are deleted.
    //  - If you specify this parameter, the image specified by the combination of ProductId and PicName is deleted.
    shared_ptr<string> picName_ {};
    // The product ID.
    // 
    // > 1. A product can have multiple images. 2. If IsDeleteByFilter is set to false, this parameter is required.
    shared_ptr<string> productId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
