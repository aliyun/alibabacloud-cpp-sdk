// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTOREINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTOREINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class RestoreInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestoreInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(FilterKey, filterKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(TimeShift, timeShift_);
    };
    friend void from_json(const Darabonba::Json& j, RestoreInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(FilterKey, filterKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTime, restoreTime_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(TimeShift, timeShift_);
    };
    RestoreInstanceRequest() = default ;
    RestoreInstanceRequest(const RestoreInstanceRequest &) = default ;
    RestoreInstanceRequest(RestoreInstanceRequest &&) = default ;
    RestoreInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestoreInstanceRequest() = default ;
    RestoreInstanceRequest& operator=(const RestoreInstanceRequest &) = default ;
    RestoreInstanceRequest& operator=(RestoreInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupId_ == nullptr
        && this->filterKey_ == nullptr && this->instanceId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->restoreTime_ == nullptr && this->restoreType_ == nullptr && this->securityToken_ == nullptr && this->timeShift_ == nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline RestoreInstanceRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // filterKey Field Functions 
    bool hasFilterKey() const { return this->filterKey_ != nullptr;};
    void deleteFilterKey() { this->filterKey_ = nullptr;};
    inline string getFilterKey() const { DARABONBA_PTR_GET_DEFAULT(filterKey_, "") };
    inline RestoreInstanceRequest& setFilterKey(string filterKey) { DARABONBA_PTR_SET_VALUE(filterKey_, filterKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RestoreInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RestoreInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RestoreInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RestoreInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RestoreInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // restoreTime Field Functions 
    bool hasRestoreTime() const { return this->restoreTime_ != nullptr;};
    void deleteRestoreTime() { this->restoreTime_ = nullptr;};
    inline string getRestoreTime() const { DARABONBA_PTR_GET_DEFAULT(restoreTime_, "") };
    inline RestoreInstanceRequest& setRestoreTime(string restoreTime) { DARABONBA_PTR_SET_VALUE(restoreTime_, restoreTime) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline RestoreInstanceRequest& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RestoreInstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // timeShift Field Functions 
    bool hasTimeShift() const { return this->timeShift_ != nullptr;};
    void deleteTimeShift() { this->timeShift_ = nullptr;};
    inline string getTimeShift() const { DARABONBA_PTR_GET_DEFAULT(timeShift_, "") };
    inline RestoreInstanceRequest& setTimeShift(string timeShift) { DARABONBA_PTR_SET_VALUE(timeShift_, timeShift) };


  protected:
    // The ID of the backup file. You can find backup file IDs by calling the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation.
    shared_ptr<string> backupId_ {};
    // The keys to restore, which can be specified as a regular expression. To specify multiple keys, separate them with commas (,).
    // 
    // - If you do not specify this parameter, the entire instance is restored.
    // 
    // - If you specify this parameter, only the specified keys are restored. This feature is available only for instances that use the classic architecture.
    // 
    // > In a regular expression, the asterisk (`*`) matches the preceding element zero or more times. For example, if you set this parameter to `h.*llo`, strings such as `hllo` and `heeeello` are matched.
    shared_ptr<string> filterKey_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The restore point in time. Specify the time in the *yyyy-MM-dd*T*HH:mm:ss*Z format (UTC).
    // 
    // > This point in time cannot be earlier than the time when the Data Flashback feature was enabled.
    shared_ptr<string> restoreTime_ {};
    // The restore method. Valid values:
    // 
    // - **0** (default): This value is deprecated.
    // 
    // - **1**: Restores data to a specific point in time. You can set this parameter to 1 only if the [Data Flashback](https://help.aliyun.com/document_detail/148479.html) feature is enabled for the instance. If you set this parameter to 1, you must also specify the **RestoreTime** parameter.
    shared_ptr<string> restoreType_ {};
    shared_ptr<string> securityToken_ {};
    // For instances that use the classic architecture, you can apply an offset to the expiration time of restored keys. This applies whether you restore the entire instance or only specific keys. The system calculates a key\\"s remaining time-to-live (TTL) at the specified flashback point in time and then adds this TTL to the `TimeShift` value to set the key\\"s new expiration time. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format (UTC).
    // 
    // > - This feature adjusts the expiration time for top-level keys only. It does not apply to the expiration times of elements within Tair-specific data structures, such as fields in an exHash or secondary keys (Skeys) in a Time Series (TS) data structure.
    // >
    // > - The specified time must be later than `RestoreTime` and earlier than the task submission time.
    shared_ptr<string> timeShift_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
