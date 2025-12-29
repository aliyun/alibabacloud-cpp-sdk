// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUDITPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUDITPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyAuditPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAuditPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditLogSwitchSource, auditLogSwitchSource_);
      DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(StoragePeriod, storagePeriod_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAuditPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditLogSwitchSource, auditLogSwitchSource_);
      DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(StoragePeriod, storagePeriod_);
    };
    ModifyAuditPolicyRequest() = default ;
    ModifyAuditPolicyRequest(const ModifyAuditPolicyRequest &) = default ;
    ModifyAuditPolicyRequest(ModifyAuditPolicyRequest &&) = default ;
    ModifyAuditPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAuditPolicyRequest() = default ;
    ModifyAuditPolicyRequest& operator=(const ModifyAuditPolicyRequest &) = default ;
    ModifyAuditPolicyRequest& operator=(ModifyAuditPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditLogSwitchSource_ == nullptr
        && this->auditStatus_ == nullptr && this->DBInstanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->serviceType_ == nullptr && this->storagePeriod_ == nullptr; };
    // auditLogSwitchSource Field Functions 
    bool hasAuditLogSwitchSource() const { return this->auditLogSwitchSource_ != nullptr;};
    void deleteAuditLogSwitchSource() { this->auditLogSwitchSource_ = nullptr;};
    inline string getAuditLogSwitchSource() const { DARABONBA_PTR_GET_DEFAULT(auditLogSwitchSource_, "") };
    inline ModifyAuditPolicyRequest& setAuditLogSwitchSource(string auditLogSwitchSource) { DARABONBA_PTR_SET_VALUE(auditLogSwitchSource_, auditLogSwitchSource) };


    // auditStatus Field Functions 
    bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
    void deleteAuditStatus() { this->auditStatus_ = nullptr;};
    inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
    inline ModifyAuditPolicyRequest& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyAuditPolicyRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyAuditPolicyRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyAuditPolicyRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyAuditPolicyRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAuditPolicyRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ModifyAuditPolicyRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // storagePeriod Field Functions 
    bool hasStoragePeriod() const { return this->storagePeriod_ != nullptr;};
    void deleteStoragePeriod() { this->storagePeriod_ = nullptr;};
    inline int32_t getStoragePeriod() const { DARABONBA_PTR_GET_DEFAULT(storagePeriod_, 0) };
    inline ModifyAuditPolicyRequest& setStoragePeriod(int32_t storagePeriod) { DARABONBA_PTR_SET_VALUE(storagePeriod_, storagePeriod) };


  protected:
    // The request source for the audit log feature. Set the value to **Console**.
    shared_ptr<string> auditLogSwitchSource_ {};
    // Specifies whether to enable the audit log feature. Valid values:
    // 
    // *   **enable**
    // *   **disabled**
    // 
    // This parameter is required.
    shared_ptr<string> auditStatus_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The type of the audit log feature. Valid values:
    // 
    // *   **Trail**: free trial edition.
    // *   **Standard**: official edition.
    // 
    // > The default value is **Trail**. Starting from January 6, 2022, the official edition of the audit log feature has been launched in all regions, and the free trial edition of the feature can no longer be applied for. We recommend that you set this parameter to **Standard**.
    shared_ptr<string> serviceType_ {};
    // The log retention period. Valid values: 1 to 365 days. Default value: 30 days.
    shared_ptr<int32_t> storagePeriod_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
