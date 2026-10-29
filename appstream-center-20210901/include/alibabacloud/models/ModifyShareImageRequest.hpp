// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSHAREIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSHAREIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ModifyShareImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyShareImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddAccount, addAccount_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RemoveAccount, removeAccount_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyShareImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddAccount, addAccount_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RemoveAccount, removeAccount_);
    };
    ModifyShareImageRequest() = default ;
    ModifyShareImageRequest(const ModifyShareImageRequest &) = default ;
    ModifyShareImageRequest(ModifyShareImageRequest &&) = default ;
    ModifyShareImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyShareImageRequest() = default ;
    ModifyShareImageRequest& operator=(const ModifyShareImageRequest &) = default ;
    ModifyShareImageRequest& operator=(ModifyShareImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addAccount_ == nullptr
        && this->bizType_ == nullptr && this->imageId_ == nullptr && this->productType_ == nullptr && this->removeAccount_ == nullptr; };
    // addAccount Field Functions 
    bool hasAddAccount() const { return this->addAccount_ != nullptr;};
    void deleteAddAccount() { this->addAccount_ = nullptr;};
    inline const vector<int64_t> & getAddAccount() const { DARABONBA_PTR_GET_CONST(addAccount_, vector<int64_t>) };
    inline vector<int64_t> getAddAccount() { DARABONBA_PTR_GET(addAccount_, vector<int64_t>) };
    inline ModifyShareImageRequest& setAddAccount(const vector<int64_t> & addAccount) { DARABONBA_PTR_SET_VALUE(addAccount_, addAccount) };
    inline ModifyShareImageRequest& setAddAccount(vector<int64_t> && addAccount) { DARABONBA_PTR_SET_RVALUE(addAccount_, addAccount) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline ModifyShareImageRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyShareImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ModifyShareImageRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // removeAccount Field Functions 
    bool hasRemoveAccount() const { return this->removeAccount_ != nullptr;};
    void deleteRemoveAccount() { this->removeAccount_ = nullptr;};
    inline const vector<int64_t> & getRemoveAccount() const { DARABONBA_PTR_GET_CONST(removeAccount_, vector<int64_t>) };
    inline vector<int64_t> getRemoveAccount() { DARABONBA_PTR_GET(removeAccount_, vector<int64_t>) };
    inline ModifyShareImageRequest& setRemoveAccount(const vector<int64_t> & removeAccount) { DARABONBA_PTR_SET_VALUE(removeAccount_, removeAccount) };
    inline ModifyShareImageRequest& setRemoveAccount(vector<int64_t> && removeAccount) { DARABONBA_PTR_SET_RVALUE(removeAccount_, removeAccount) };


  protected:
    // The IDs of the Alibaba Cloud accounts to share the image with.
    shared_ptr<vector<int64_t>> addAccount_ {};
    // The business line. Only the Enterprise Edition scenario is supported. Default value: 1.
    shared_ptr<int32_t> bizType_ {};
    // The ID of the source image.
    shared_ptr<string> imageId_ {};
    // The product type, such as Cloud Desktop, cloud application, or workstation.
    shared_ptr<string> productType_ {};
    // The IDs of the Alibaba Cloud accounts to remove from the image sharing list.
    shared_ptr<vector<int64_t>> removeAccount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
