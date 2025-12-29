// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class CreateNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_TO_JSON(NodeStorage, nodeStorage_);
      DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReadonlyReplicas, readonlyReplicas_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ShardDirect, shardDirect_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(AccountPassword, accountPassword_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(BusinessInfo, businessInfo_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CouponNo, couponNo_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(NodeClass, nodeClass_);
      DARABONBA_PTR_FROM_JSON(NodeStorage, nodeStorage_);
      DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReadonlyReplicas, readonlyReplicas_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ShardDirect, shardDirect_);
    };
    CreateNodeRequest() = default ;
    CreateNodeRequest(const CreateNodeRequest &) = default ;
    CreateNodeRequest(CreateNodeRequest &&) = default ;
    CreateNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeRequest() = default ;
    CreateNodeRequest& operator=(const CreateNodeRequest &) = default ;
    CreateNodeRequest& operator=(CreateNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && this->accountPassword_ == nullptr && this->autoPay_ == nullptr && this->businessInfo_ == nullptr && this->clientToken_ == nullptr && this->couponNo_ == nullptr
        && this->DBInstanceId_ == nullptr && this->nodeClass_ == nullptr && this->nodeStorage_ == nullptr && this->nodeType_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->readonlyReplicas_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->shardDirect_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline CreateNodeRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // accountPassword Field Functions 
    bool hasAccountPassword() const { return this->accountPassword_ != nullptr;};
    void deleteAccountPassword() { this->accountPassword_ = nullptr;};
    inline string getAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(accountPassword_, "") };
    inline CreateNodeRequest& setAccountPassword(string accountPassword) { DARABONBA_PTR_SET_VALUE(accountPassword_, accountPassword) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateNodeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline string getBusinessInfo() const { DARABONBA_PTR_GET_DEFAULT(businessInfo_, "") };
    inline CreateNodeRequest& setBusinessInfo(string businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateNodeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // couponNo Field Functions 
    bool hasCouponNo() const { return this->couponNo_ != nullptr;};
    void deleteCouponNo() { this->couponNo_ = nullptr;};
    inline string getCouponNo() const { DARABONBA_PTR_GET_DEFAULT(couponNo_, "") };
    inline CreateNodeRequest& setCouponNo(string couponNo) { DARABONBA_PTR_SET_VALUE(couponNo_, couponNo) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateNodeRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // nodeClass Field Functions 
    bool hasNodeClass() const { return this->nodeClass_ != nullptr;};
    void deleteNodeClass() { this->nodeClass_ = nullptr;};
    inline string getNodeClass() const { DARABONBA_PTR_GET_DEFAULT(nodeClass_, "") };
    inline CreateNodeRequest& setNodeClass(string nodeClass) { DARABONBA_PTR_SET_VALUE(nodeClass_, nodeClass) };


    // nodeStorage Field Functions 
    bool hasNodeStorage() const { return this->nodeStorage_ != nullptr;};
    void deleteNodeStorage() { this->nodeStorage_ = nullptr;};
    inline int32_t getNodeStorage() const { DARABONBA_PTR_GET_DEFAULT(nodeStorage_, 0) };
    inline CreateNodeRequest& setNodeStorage(int32_t nodeStorage) { DARABONBA_PTR_SET_VALUE(nodeStorage_, nodeStorage) };


    // nodeType Field Functions 
    bool hasNodeType() const { return this->nodeType_ != nullptr;};
    void deleteNodeType() { this->nodeType_ = nullptr;};
    inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
    inline CreateNodeRequest& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateNodeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateNodeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // readonlyReplicas Field Functions 
    bool hasReadonlyReplicas() const { return this->readonlyReplicas_ != nullptr;};
    void deleteReadonlyReplicas() { this->readonlyReplicas_ = nullptr;};
    inline int32_t getReadonlyReplicas() const { DARABONBA_PTR_GET_DEFAULT(readonlyReplicas_, 0) };
    inline CreateNodeRequest& setReadonlyReplicas(int32_t readonlyReplicas) { DARABONBA_PTR_SET_VALUE(readonlyReplicas_, readonlyReplicas) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateNodeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateNodeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // shardDirect Field Functions 
    bool hasShardDirect() const { return this->shardDirect_ != nullptr;};
    void deleteShardDirect() { this->shardDirect_ = nullptr;};
    inline bool getShardDirect() const { DARABONBA_PTR_GET_DEFAULT(shardDirect_, false) };
    inline CreateNodeRequest& setShardDirect(bool shardDirect) { DARABONBA_PTR_SET_VALUE(shardDirect_, shardDirect) };


  protected:
    // The username of the account. The username must meet the following requirements:
    // 
    // *   The username starts with a lowercase letter.
    // *   The username can contain lowercase letters, digits, and underscores (_).
    // *   The username must be 4 to 16 characters in length.
    // 
    // > 
    // 
    // *   Keywords cannot be used as accounts.
    // 
    // *   This account is granted the read-only permissions.
    // *   The username and password need to be set if you apply for an endpoint for the shard node for the first time.
    shared_ptr<string> accountName_ {};
    // The password of the account. The password must meet the following requirements:
    // 
    // *   The password contains at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters.
    // *   These special characters include ! @ # $ % ^ & \\* ( ) _ + - =
    // *   The password is 8 to 32 characters in length.
    // 
    // >  ApsaraDB for MongoDB does not allow you to reset the password of an account.
    shared_ptr<string> accountPassword_ {};
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // *   **true** (default): enables automatic payment. Make sure that you have sufficient balance within your account.
    // *   **false**: disables automatic payment. You can perform the following operations to pay for the instance: Log on to the ApsaraDB for MongoDB console. In the upper-right corner of the page, choose **Expenses** > Orders. On the **Orders** page, find the order that you want to pay for and complete the payment.
    // 
    // >  This parameter is required only when the billing method of the instance is subscription.
    shared_ptr<bool> autoPay_ {};
    // The business information. This is an additional parameter.
    shared_ptr<string> businessInfo_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the generated token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The coupon code. Default value: **youhuiquan_promotion_option_id_for_blank**.
    shared_ptr<string> couponNo_ {};
    // The ID of the sharded cluster instance.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The instance type of the shard or mongos node. For more information, see [Instance types](https://help.aliyun.com/document_detail/57141.html).
    // 
    // This parameter is required.
    shared_ptr<string> nodeClass_ {};
    // The disk capacity of the node. Unit: GB.
    // 
    // Valid values: **10** to **2000**. The value must be a multiple of 10.
    // 
    // >  This parameter is required only when the NodeType parameter is set to **shard**.
    shared_ptr<int32_t> nodeStorage_ {};
    // The type of the node. Valid values:
    // 
    // *   **shard**: shard node
    // *   **mongos**: mongos node
    // 
    // This parameter is required.
    shared_ptr<string> nodeType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of read-only nodes in the shard node.
    // 
    // Valid values: **0**, 1, 2, 3, 4, and **5**. Default value: **0**.
    // 
    // >  This parameter is available only for ApsaraDB for MongoDB instances that are purchased on the China site (aliyun.com).
    shared_ptr<int32_t> readonlyReplicas_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to apply for an endpoint for the shard node. Valid values:
    // 
    // *   **true**: applies for an endpoint for the shard node.
    // *   **false** (default): does not apply for an endpoint for the shard node.
    shared_ptr<bool> shardDirect_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
