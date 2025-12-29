// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEBATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEBATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class CreateNodeBatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeBatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(FromApp, fromApp_);
      DARABONBA_PTR_TO_JSON(NodesInfo, nodesInfo_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ShardDirect, shardDirect_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeBatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(FromApp, fromApp_);
      DARABONBA_PTR_FROM_JSON(NodesInfo, nodesInfo_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ShardDirect, shardDirect_);
    };
    CreateNodeBatchRequest() = default ;
    CreateNodeBatchRequest(const CreateNodeBatchRequest &) = default ;
    CreateNodeBatchRequest(CreateNodeBatchRequest &&) = default ;
    CreateNodeBatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeBatchRequest() = default ;
    CreateNodeBatchRequest& operator=(const CreateNodeBatchRequest &) = default ;
    CreateNodeBatchRequest& operator=(CreateNodeBatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPassword_ == nullptr && this->autoPay_ == nullptr && this->businessInfo_ == nullptr && this->clientToken_ == nullptr && this->couponNo_ == nullptr
        && this->DBInstanceId_ == nullptr && this->fromApp_ == nullptr && this->nodesInfo_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->shardDirect_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateNodeBatchRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateNodeBatchRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateNodeBatchRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline CreateNodeBatchRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateNodeBatchRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline CreateNodeBatchRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateNodeBatchRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // fromApp Field Functions 
    bool hasFromApp() const { return this->fromApp_ != nullptr;};
    void deleteFromApp() { this->fromApp_ = nullptr;};
    inline string getFromApp() const { DARABONBA_PTR_GET_DEFAULT(fromApp_, "") };
    inline CreateNodeBatchRequest& setFromApp(string fromApp) { DARABONBA_PTR_SET_VALUE(fromApp_, fromApp) };


    // nodesInfo Field Functions 
    bool hasNodesInfo() const { return this->nodesInfo_ != nullptr;};
    void deleteNodesInfo() { this->nodesInfo_ = nullptr;};
    inline string getNodesInfo() const { DARABONBA_PTR_GET_DEFAULT(nodesInfo_, "") };
    inline CreateNodeBatchRequest& setNodesInfo(string nodesInfo) { DARABONBA_PTR_SET_VALUE(nodesInfo_, nodesInfo) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateNodeBatchRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateNodeBatchRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateNodeBatchRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateNodeBatchRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // shardDirect Field Functions 
    bool hasShardDirect() const { return this->shardDirect_ != nullptr;};
    void deleteShardDirect() { this->shardDirect_ = nullptr;};
    inline bool getShardDirect() const { DARABONBA_PTR_GET_DEFAULT(shardDirect_, false) };
    inline CreateNodeBatchRequest& setShardDirect(bool shardDirect) { DARABONBA_PTR_SET_VALUE(shardDirect_, shardDirect) };


  protected:
    // The username of the account. The username must meet the following requirements:
    // - The username starts with a lowercase letter. 
    // - The username contains lowercase letters, digits, and underscores (_). 
    // - The username is 4 to 16 characters in length. 
    // 
    // > - Keywords cannot be used as account usernames. 
    // > - The permissions of this account are fixed at read-only. 
    // > - The username and password are required to be set only when you apply for an endpoint for the shard node for the first time.
    shared_ptr<string> accountName_ {};
    // The password of the account. The password must meet the following requirements:
    // - The password contains at least three of the following character types: uppercase letters, lowercase letters, digits, and specific special characters. 
    // - These special characters include ! @ # $ % ^ & * ( ) _ + - = 
    // - The password is 8 to 32 characters in length. 
    // > The account password of the shard node cannot be reset.
    shared_ptr<string> accountPassword_ {};
    // Specifies whether to enable automatic payment. Default value: true. Valid values:
    // - **true**: enables automatic payment. Make sure that you have sufficient balance within your account. 
    // - **false**: disables automatic payment. In this case, you must manually pay for the instance. You can perform the following operations to pay for the instance: Log on to the ApsaraDB for MongoDB console. In the upper-right corner of the page, choose **Expenses** > **Orders**. On the Orders page, find the order and complete the payment.
    shared_ptr<bool> autoPay_ {};
    // The business information.
    shared_ptr<string> businessInfo_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can only contain ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to use coupons. Default value: null. Valid values:
    // 
    // *   **default** or **null**: uses coupons.
    // *   **youhuiquan_promotion_option_id_for_blank**: does not use coupons.
    shared_ptr<string> couponNo_ {};
    // The ID of the instance for which you want to add nodes.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The source of the request. Valid values:
    // - **OpenApi**: ApsaraDB for MongoDB API 
    // - **mongo_buy**: ApsaraDB for MongoDB console
    shared_ptr<string> fromApp_ {};
    // The specifications of the mongos or shard node that you want to add. For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html). 
    // 
    // > Up to 32 mongos or shard nodes are supported for each sharded cluster instance.
    // 
    // This parameter is required.
    shared_ptr<string> nodesInfo_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to apply for an endpoint for the shard node. Default value: false. Valid values:
    // - **true**: applies for an endpoint for the shard node. 
    // - **false**: does not apply for an endpoint for the shard node.
    shared_ptr<bool> shardDirect_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
