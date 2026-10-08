// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBNODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBNODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBNodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBNodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_TO_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_TO_JSON(DBNode, DBNodeShrink_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProduceAsync, produceAsync_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBNodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorage, DBInstanceStorage_);
      DARABONBA_PTR_FROM_JSON(DBInstanceStorageType, DBInstanceStorageType_);
      DARABONBA_PTR_FROM_JSON(DBNode, DBNodeShrink_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProduceAsync, produceAsync_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyDBNodeShrinkRequest() = default ;
    ModifyDBNodeShrinkRequest(const ModifyDBNodeShrinkRequest &) = default ;
    ModifyDBNodeShrinkRequest(ModifyDBNodeShrinkRequest &&) = default ;
    ModifyDBNodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBNodeShrinkRequest() = default ;
    ModifyDBNodeShrinkRequest& operator=(const ModifyDBNodeShrinkRequest &) = default ;
    ModifyDBNodeShrinkRequest& operator=(ModifyDBNodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->clientToken_ == nullptr && this->DBInstanceId_ == nullptr && this->DBInstanceStorage_ == nullptr && this->DBInstanceStorageType_ == nullptr && this->DBNodeShrink_ == nullptr
        && this->dryRun_ == nullptr && this->effectiveTime_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->produceAsync_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyDBNodeShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDBNodeShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBNodeShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBInstanceStorage Field Functions 
    bool hasDBInstanceStorage() const { return this->DBInstanceStorage_ != nullptr;};
    void deleteDBInstanceStorage() { this->DBInstanceStorage_ = nullptr;};
    inline string getDBInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorage_, "") };
    inline ModifyDBNodeShrinkRequest& setDBInstanceStorage(string DBInstanceStorage) { DARABONBA_PTR_SET_VALUE(DBInstanceStorage_, DBInstanceStorage) };


    // DBInstanceStorageType Field Functions 
    bool hasDBInstanceStorageType() const { return this->DBInstanceStorageType_ != nullptr;};
    void deleteDBInstanceStorageType() { this->DBInstanceStorageType_ = nullptr;};
    inline string getDBInstanceStorageType() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceStorageType_, "") };
    inline ModifyDBNodeShrinkRequest& setDBInstanceStorageType(string DBInstanceStorageType) { DARABONBA_PTR_SET_VALUE(DBInstanceStorageType_, DBInstanceStorageType) };


    // DBNodeShrink Field Functions 
    bool hasDBNodeShrink() const { return this->DBNodeShrink_ != nullptr;};
    void deleteDBNodeShrink() { this->DBNodeShrink_ = nullptr;};
    inline string getDBNodeShrink() const { DARABONBA_PTR_GET_DEFAULT(DBNodeShrink_, "") };
    inline ModifyDBNodeShrinkRequest& setDBNodeShrink(string DBNodeShrink) { DARABONBA_PTR_SET_VALUE(DBNodeShrink_, DBNodeShrink) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyDBNodeShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // effectiveTime Field Functions 
    bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
    void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
    inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
    inline ModifyDBNodeShrinkRequest& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBNodeShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBNodeShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // produceAsync Field Functions 
    bool hasProduceAsync() const { return this->produceAsync_ != nullptr;};
    void deleteProduceAsync() { this->produceAsync_ = nullptr;};
    inline bool getProduceAsync() const { DARABONBA_PTR_GET_DEFAULT(produceAsync_, false) };
    inline ModifyDBNodeShrinkRequest& setProduceAsync(bool produceAsync) { DARABONBA_PTR_SET_VALUE(produceAsync_, produceAsync) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBNodeShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBNodeShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to automatically complete automatic payment. Valid values:
    // 
    // 1. **true**: Automatic payment is automatically completed. Make sure that your account balance is sufficient.
    // 
    // 1. **false**: An order is generated but no payment is made.
    // 
    // 
    // 
    // 
    // > Default value: true. If your payment method has insufficient balance, set AutoPay to false. In this case, an unpaid order is generated. You can log on to the ApsaraDB RDS console to complete automatic payment.
    // >
    shared_ptr<bool> autoPay_ {};
    // The client token that is used to ensure the idempotence of the request.
    shared_ptr<string> clientToken_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The new instance storage capacity. Unit: GB. For details, see [Instance types](https://help.aliyun.com/document_detail/26312.html).
    shared_ptr<string> DBInstanceStorage_ {};
    // The storage type of the instance. Valid values:
    // * **cloud_essd**: PL1 ESSD
    // * **cloud_essd2**: PL2 ESSD
    // * **cloud_essd3**: PL3 ESSD
    shared_ptr<string> DBInstanceStorageType_ {};
    // The node information.
    // > This parameter is used for MySQL Cluster Edition instances.
    shared_ptr<string> DBNodeShrink_ {};
    // Specifies whether to perform a dry run for this node modification. Valid values:
    // * **true**: A dry run is performed without executing the modification. The system checks items such as request parameters, request format, business limits, and inventory.
    // * **false**: A request is sent. After the request passes the check, the modification is directly executed. This is the default value.
    shared_ptr<bool> dryRun_ {};
    // The effective period. Valid values:
    // * **Immediate** (default): The modification takes effect immediately.
    // * **MaintainTime**: The modification takes effect during the maintenance window. For more information, see ModifyDBInstanceMaintainTime.
    shared_ptr<string> effectiveTime_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to asynchronously execute the provisioning. Valid values:
    // * **true**: The request only submits an order, and the modification is asynchronously executed. This is the default value.
    // * **false**: After the request passes the check, the modification is directly executed.
    // 
    // > Default value: true. The modification is asynchronously executed. If you set this parameter to false, the modification is synchronously executed, and the response time is relatively longer.
    shared_ptr<bool> produceAsync_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
