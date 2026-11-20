// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSUBSCRIPTIONDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSUBSCRIPTIONDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySubscriptionDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySubscriptionDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhoneNoX, phoneNoX_);
      DARABONBA_PTR_TO_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SubsId, subsId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySubscriptionDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhoneNoX, phoneNoX_);
      DARABONBA_PTR_FROM_JSON(PoolKey, poolKey_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SubsId, subsId_);
    };
    QuerySubscriptionDetailRequest() = default ;
    QuerySubscriptionDetailRequest(const QuerySubscriptionDetailRequest &) = default ;
    QuerySubscriptionDetailRequest(QuerySubscriptionDetailRequest &&) = default ;
    QuerySubscriptionDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySubscriptionDetailRequest() = default ;
    QuerySubscriptionDetailRequest& operator=(const QuerySubscriptionDetailRequest &) = default ;
    QuerySubscriptionDetailRequest& operator=(QuerySubscriptionDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ownerId_ == nullptr
        && this->phoneNoX_ == nullptr && this->poolKey_ == nullptr && this->productType_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->subsId_ == nullptr; };
    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySubscriptionDetailRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phoneNoX Field Functions 
    bool hasPhoneNoX() const { return this->phoneNoX_ != nullptr;};
    void deletePhoneNoX() { this->phoneNoX_ = nullptr;};
    inline string getPhoneNoX() const { DARABONBA_PTR_GET_DEFAULT(phoneNoX_, "") };
    inline QuerySubscriptionDetailRequest& setPhoneNoX(string phoneNoX) { DARABONBA_PTR_SET_VALUE(phoneNoX_, phoneNoX) };


    // poolKey Field Functions 
    bool hasPoolKey() const { return this->poolKey_ != nullptr;};
    void deletePoolKey() { this->poolKey_ = nullptr;};
    inline string getPoolKey() const { DARABONBA_PTR_GET_DEFAULT(poolKey_, "") };
    inline QuerySubscriptionDetailRequest& setPoolKey(string poolKey) { DARABONBA_PTR_SET_VALUE(poolKey_, poolKey) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QuerySubscriptionDetailRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySubscriptionDetailRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySubscriptionDetailRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // subsId Field Functions 
    bool hasSubsId() const { return this->subsId_ != nullptr;};
    void deleteSubsId() { this->subsId_ = nullptr;};
    inline string getSubsId() const { DARABONBA_PTR_GET_DEFAULT(subsId_, "") };
    inline QuerySubscriptionDetailRequest& setSubsId(string subsId) { DARABONBA_PTR_SET_VALUE(subsId_, subsId) };


  protected:
    shared_ptr<int64_t> ownerId_ {};
    // The privacy number in the binding relationship, which is the X number.
    // 
    // Logon to the privacy protection console and go to the [Number Management](https://dyplsnext.console.aliyun.com/number/list) page to obtain the X number. Alternatively, check the **SecretNo** in the response parameters when you invoke number binding API operations such as [BindAxb](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-bindaxb).
    // 
    // > When specifying the X number, make sure it is associated with the **SubsId** parameter.
    // 
    // This parameter is required.
    shared_ptr<string> phoneNoX_ {};
    // The key of the number pool.
    // 
    // Log on to the privacy protection console and go to the [Number Pool Management](https://dyplsnext.console.aliyun.com/number-pool?spm=a2c4g.11186623.0.0.7e6449bbtiHP8m) page to obtain the **Number Pool Key**.
    // 
    // > This parameter is required when **ProductType** is left empty.
    shared_ptr<string> poolKey_ {};
    // The product type. Valid values:
    // - **AXB_170**
    // - **AXN_170**
    // - **AXN_95**
    // - **AXN_EXTENSION_REUSE**
    // 
    // > - This parameter is applicable to former Alibaba Dayu users. Alibaba Cloud users can ignore this parameter.
    // > - This parameter is required when **PoolKey** is left empty.
    shared_ptr<string> productType_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The binding relationship ID.
    // 
    // Logon to the privacy protection console, go to the [Number Management](https://dyplsnext.console.aliyun.com/number/list) page, filter the numbers, and click **Details** to view the binding relationship ID. Alternatively, check the **SubsId** in the response parameters when you invoke number binding API operations such as [BindAxb](https://www.alibabacloud.com/help/en/pnp/developer-reference/api-dyplsapi-2017-05-25-bindaxb).
    // 
    // > When specifying the binding relationship ID, make sure it is associated with the **PhoneNoX** parameter.
    // 
    // This parameter is required.
    shared_ptr<string> subsId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
