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
    // The ID of the backup file for the instance. You can call the [DescribeBackups](https://help.aliyun.com/document_detail/473823.html) operation to query the ID.
    shared_ptr<string> backupId_ {};
    // The keys to restore. Regular expressions are supported. Separate multiple values with commas (,).
    // - If you do not specify this parameter, the entire instance is restored.
    // - If you specify this parameter, only the specified keys are restored. This feature is supported only by classic architecture instances.
    // > For example, in a regular expression, an asterisk (`*`) matches the preceding subexpression zero or more times. If you set this parameter to `h.*llo`, the system matches strings such as `hllo` and `heeeello`.
    shared_ptr<string> filterKey_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The point in time to which you want to restore data. Specify the time in the <i>yyyy-MM-dd</i>T<i>HH:mm</i>Z format. The time must be in UTC.
    // > The point in time cannot be earlier than the time when the data flashback feature is enabled.
    shared_ptr<string> restoreTime_ {};
    // The restoration type. Valid values:
    // * **0** (default): This value is deprecated.
    // * **1**: Restores data to a specified point in time. You can specify this value only when the [data flashback](https://help.aliyun.com/document_detail/148479.html) feature is enabled for the instance. If you specify this value, you must also specify the **RestoreTime** parameter.
    shared_ptr<string> restoreType_ {};
    shared_ptr<string> securityToken_ {};
    // When you restore a classic architecture instance, you can apply an offset to the expiration time of keys regardless of whether you choose to restore full data or specified keys. Specify the time in the yyyy-MM-ddTHH:mmZ format. The time must be in UTC. The instance calculates the remaining expiration duration of the keys at the specified flashback point in time, starting from the specified expiration offset point in time.
    // > * This feature supports offsetting the expiration time only at the key level. It does not support offsetting the internal expiration time of keys in Tair-developed data structures, such as the fields in exHash and the skeys in TS.
    // > * The point in time cannot be earlier than the specified flashback point in time or later than the time when the restoration task is submitted.
    shared_ptr<string> timeShift_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
