// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBCLUSTERVERSIONZONALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBCLUSTERVERSIONZONALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpgradeDBClusterVersionZonalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBClusterVersionZonalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TargetDBRevisionVersionCode, targetDBRevisionVersionCode_);
      DARABONBA_PTR_TO_JSON(TargetProxyRevisionVersionCode, targetProxyRevisionVersionCode_);
      DARABONBA_PTR_TO_JSON(UpgradeLabel, upgradeLabel_);
      DARABONBA_PTR_TO_JSON(UpgradePolicy, upgradePolicy_);
      DARABONBA_PTR_TO_JSON(UpgradeType, upgradeType_);
    };
    friend void from_json(const Darabonba::Json& j, UpgradeDBClusterVersionZonalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TargetDBRevisionVersionCode, targetDBRevisionVersionCode_);
      DARABONBA_PTR_FROM_JSON(TargetProxyRevisionVersionCode, targetProxyRevisionVersionCode_);
      DARABONBA_PTR_FROM_JSON(UpgradeLabel, upgradeLabel_);
      DARABONBA_PTR_FROM_JSON(UpgradePolicy, upgradePolicy_);
      DARABONBA_PTR_FROM_JSON(UpgradeType, upgradeType_);
    };
    UpgradeDBClusterVersionZonalRequest() = default ;
    UpgradeDBClusterVersionZonalRequest(const UpgradeDBClusterVersionZonalRequest &) = default ;
    UpgradeDBClusterVersionZonalRequest(UpgradeDBClusterVersionZonalRequest &&) = default ;
    UpgradeDBClusterVersionZonalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBClusterVersionZonalRequest() = default ;
    UpgradeDBClusterVersionZonalRequest& operator=(const UpgradeDBClusterVersionZonalRequest &) = default ;
    UpgradeDBClusterVersionZonalRequest& operator=(UpgradeDBClusterVersionZonalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->DBClusterId_ == nullptr && this->fromTimeService_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->plannedEndTime_ == nullptr
        && this->plannedStartTime_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->targetDBRevisionVersionCode_ == nullptr && this->targetProxyRevisionVersionCode_ == nullptr
        && this->upgradeLabel_ == nullptr && this->upgradePolicy_ == nullptr && this->upgradeType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fromTimeService Field Functions 
    bool hasFromTimeService() const { return this->fromTimeService_ != nullptr;};
    void deleteFromTimeService() { this->fromTimeService_ = nullptr;};
    inline bool getFromTimeService() const { DARABONBA_PTR_GET_DEFAULT(fromTimeService_, false) };
    inline UpgradeDBClusterVersionZonalRequest& setFromTimeService(bool fromTimeService) { DARABONBA_PTR_SET_VALUE(fromTimeService_, fromTimeService) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeDBClusterVersionZonalRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeDBClusterVersionZonalRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetDBRevisionVersionCode Field Functions 
    bool hasTargetDBRevisionVersionCode() const { return this->targetDBRevisionVersionCode_ != nullptr;};
    void deleteTargetDBRevisionVersionCode() { this->targetDBRevisionVersionCode_ = nullptr;};
    inline string getTargetDBRevisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(targetDBRevisionVersionCode_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setTargetDBRevisionVersionCode(string targetDBRevisionVersionCode) { DARABONBA_PTR_SET_VALUE(targetDBRevisionVersionCode_, targetDBRevisionVersionCode) };


    // targetProxyRevisionVersionCode Field Functions 
    bool hasTargetProxyRevisionVersionCode() const { return this->targetProxyRevisionVersionCode_ != nullptr;};
    void deleteTargetProxyRevisionVersionCode() { this->targetProxyRevisionVersionCode_ = nullptr;};
    inline string getTargetProxyRevisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(targetProxyRevisionVersionCode_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setTargetProxyRevisionVersionCode(string targetProxyRevisionVersionCode) { DARABONBA_PTR_SET_VALUE(targetProxyRevisionVersionCode_, targetProxyRevisionVersionCode) };


    // upgradeLabel Field Functions 
    bool hasUpgradeLabel() const { return this->upgradeLabel_ != nullptr;};
    void deleteUpgradeLabel() { this->upgradeLabel_ = nullptr;};
    inline string getUpgradeLabel() const { DARABONBA_PTR_GET_DEFAULT(upgradeLabel_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setUpgradeLabel(string upgradeLabel) { DARABONBA_PTR_SET_VALUE(upgradeLabel_, upgradeLabel) };


    // upgradePolicy Field Functions 
    bool hasUpgradePolicy() const { return this->upgradePolicy_ != nullptr;};
    void deleteUpgradePolicy() { this->upgradePolicy_ = nullptr;};
    inline string getUpgradePolicy() const { DARABONBA_PTR_GET_DEFAULT(upgradePolicy_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setUpgradePolicy(string upgradePolicy) { DARABONBA_PTR_SET_VALUE(upgradePolicy_, upgradePolicy) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline string getUpgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, "") };
    inline UpgradeDBClusterVersionZonalRequest& setUpgradeType(string upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


  protected:
    // A unique, case-sensitive token that you provide to ensure the idempotence of the request. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to immediately perform or schedule the kernel upgrade. Valid values:
    // 
    // - **false** (default): Schedules the upgrade.
    // 
    // - **true**: Immediately performs the upgrade.
    // 
    // > You do not need to specify this parameter when you call this operation.
    shared_ptr<bool> fromTimeService_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The latest time to start the scheduled task. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format. The time is in UTC.
    // 
    // > - The latest start time must be at least 30 minutes later than the earliest start time.
    // >
    // > - If you specify `PlannedStartTime` but not this parameter, the latest start time is 30 minutes after the value of `PlannedStartTime` by default. For example, if you set `PlannedStartTime` to `2021-01-14T09:00:00Z` and leave this parameter empty, the task starts no later than `2021-01-14T09:30:00Z`.
    shared_ptr<string> plannedEndTime_ {};
    // The earliest time to start the scheduled kernel upgrade. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format. The time is in UTC.
    // 
    // > - The start time can be any point in time within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can specify a time in the range of `2021-01-14T09:00:00Z` to `2021-01-15T09:00:00Z`.
    // 
    // - If you do not specify this parameter, the upgrade task is executed immediately.
    shared_ptr<string> plannedStartTime_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The version code of the target DB version. You can obtain this value by calling the [DescribeDBClusterVersion](https://help.aliyun.com/document_detail/2319145.html) operation.
    shared_ptr<string> targetDBRevisionVersionCode_ {};
    // The version code of the target proxy version. You can obtain this value by calling the [DescribeDBClusterVersion](https://help.aliyun.com/document_detail/2319145.html) operation.
    shared_ptr<string> targetProxyRevisionVersionCode_ {};
    // The label for the kernel version upgrade. Set the value to **INNOVATE**.
    // 
    // > - This parameter is applicable only when you upgrade a PolarDB for MySQL 8.0.1 cluster to PolarDB for MySQL 8.0.2.
    // >
    // > - If you specify this parameter, you must set `UpgradePolicy` to **COLD**.
    shared_ptr<string> upgradeLabel_ {};
    // The upgrade policy for the kernel version. Valid values:
    // 
    // - **HOT**: hot upgrade
    // 
    // - **COLD**: cold upgrade. This upgrade method is supported only for PolarDB for MySQL 8.0 clusters.
    shared_ptr<string> upgradePolicy_ {};
    // The upgrade type. Valid values:
    // 
    // - **PROXY**: Upgrades only the database proxy (PolarProxy).
    // 
    // - **DB**: Upgrades only the kernel.
    // 
    // - **ALL** (default): Upgrades both the database proxy (PolarProxy) and the kernel.
    shared_ptr<string> upgradeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
