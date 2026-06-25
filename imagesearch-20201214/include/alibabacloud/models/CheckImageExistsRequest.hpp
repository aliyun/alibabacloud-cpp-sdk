// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKIMAGEEXISTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKIMAGEEXISTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class CheckImageExistsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckImageExistsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(PicName, picName_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckImageExistsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(PicName, picName_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    CheckImageExistsRequest() = default ;
    CheckImageExistsRequest(const CheckImageExistsRequest &) = default ;
    CheckImageExistsRequest(CheckImageExistsRequest &&) = default ;
    CheckImageExistsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckImageExistsRequest() = default ;
    CheckImageExistsRequest& operator=(const CheckImageExistsRequest &) = default ;
    CheckImageExistsRequest& operator=(CheckImageExistsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->picName_ == nullptr && this->productId_ == nullptr; };
    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CheckImageExistsRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // picName Field Functions 
    bool hasPicName() const { return this->picName_ != nullptr;};
    void deletePicName() { this->picName_ = nullptr;};
    inline string getPicName() const { DARABONBA_PTR_GET_DEFAULT(picName_, "") };
    inline CheckImageExistsRequest& setPicName(string picName) { DARABONBA_PTR_SET_VALUE(picName_, picName) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline CheckImageExistsRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    // Image Search instance name. Supports up to 20 characters.  
    // If you have already purchased an Image Search instance, you can logon to the [Image Search console](https://imagesearch.console.aliyun.com/) to view it.  
    // If you have not purchased an Image Search instance, see [Activate the service](https://help.aliyun.com/document_detail/179178.html) and [Create an instance](https://help.aliyun.com/document_detail/66569.html).  
    // > The instance name here is not the instance ID. Please distinguish between them when using.
    // 
    // This parameter is required.
    shared_ptr<string> instanceName_ {};
    // Image name.
    // 
    // This parameter is required.
    shared_ptr<string> picName_ {};
    // Product ID.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
