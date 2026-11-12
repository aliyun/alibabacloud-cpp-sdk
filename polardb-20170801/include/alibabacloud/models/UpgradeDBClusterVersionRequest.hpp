// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPGRADEDBCLUSTERVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPGRADEDBCLUSTERVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpgradeDBClusterVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpgradeDBClusterVersionRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpgradeDBClusterVersionRequest& obj) { 
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
    UpgradeDBClusterVersionRequest() = default ;
    UpgradeDBClusterVersionRequest(const UpgradeDBClusterVersionRequest &) = default ;
    UpgradeDBClusterVersionRequest(UpgradeDBClusterVersionRequest &&) = default ;
    UpgradeDBClusterVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpgradeDBClusterVersionRequest() = default ;
    UpgradeDBClusterVersionRequest& operator=(const UpgradeDBClusterVersionRequest &) = default ;
    UpgradeDBClusterVersionRequest& operator=(UpgradeDBClusterVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->fromTimeService_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->plannedEndTime_ == nullptr && this->plannedStartTime_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->targetDBRevisionVersionCode_ == nullptr && this->targetProxyRevisionVersionCode_ == nullptr && this->upgradeLabel_ == nullptr
        && this->upgradePolicy_ == nullptr && this->upgradeType_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpgradeDBClusterVersionRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fromTimeService Field Functions 
    bool hasFromTimeService() const { return this->fromTimeService_ != nullptr;};
    void deleteFromTimeService() { this->fromTimeService_ = nullptr;};
    inline bool getFromTimeService() const { DARABONBA_PTR_GET_DEFAULT(fromTimeService_, false) };
    inline UpgradeDBClusterVersionRequest& setFromTimeService(bool fromTimeService) { DARABONBA_PTR_SET_VALUE(fromTimeService_, fromTimeService) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpgradeDBClusterVersionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpgradeDBClusterVersionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline UpgradeDBClusterVersionRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline UpgradeDBClusterVersionRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpgradeDBClusterVersionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpgradeDBClusterVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // targetDBRevisionVersionCode Field Functions 
    bool hasTargetDBRevisionVersionCode() const { return this->targetDBRevisionVersionCode_ != nullptr;};
    void deleteTargetDBRevisionVersionCode() { this->targetDBRevisionVersionCode_ = nullptr;};
    inline string getTargetDBRevisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(targetDBRevisionVersionCode_, "") };
    inline UpgradeDBClusterVersionRequest& setTargetDBRevisionVersionCode(string targetDBRevisionVersionCode) { DARABONBA_PTR_SET_VALUE(targetDBRevisionVersionCode_, targetDBRevisionVersionCode) };


    // targetProxyRevisionVersionCode Field Functions 
    bool hasTargetProxyRevisionVersionCode() const { return this->targetProxyRevisionVersionCode_ != nullptr;};
    void deleteTargetProxyRevisionVersionCode() { this->targetProxyRevisionVersionCode_ = nullptr;};
    inline string getTargetProxyRevisionVersionCode() const { DARABONBA_PTR_GET_DEFAULT(targetProxyRevisionVersionCode_, "") };
    inline UpgradeDBClusterVersionRequest& setTargetProxyRevisionVersionCode(string targetProxyRevisionVersionCode) { DARABONBA_PTR_SET_VALUE(targetProxyRevisionVersionCode_, targetProxyRevisionVersionCode) };


    // upgradeLabel Field Functions 
    bool hasUpgradeLabel() const { return this->upgradeLabel_ != nullptr;};
    void deleteUpgradeLabel() { this->upgradeLabel_ = nullptr;};
    inline string getUpgradeLabel() const { DARABONBA_PTR_GET_DEFAULT(upgradeLabel_, "") };
    inline UpgradeDBClusterVersionRequest& setUpgradeLabel(string upgradeLabel) { DARABONBA_PTR_SET_VALUE(upgradeLabel_, upgradeLabel) };


    // upgradePolicy Field Functions 
    bool hasUpgradePolicy() const { return this->upgradePolicy_ != nullptr;};
    void deleteUpgradePolicy() { this->upgradePolicy_ = nullptr;};
    inline string getUpgradePolicy() const { DARABONBA_PTR_GET_DEFAULT(upgradePolicy_, "") };
    inline UpgradeDBClusterVersionRequest& setUpgradePolicy(string upgradePolicy) { DARABONBA_PTR_SET_VALUE(upgradePolicy_, upgradePolicy) };


    // upgradeType Field Functions 
    bool hasUpgradeType() const { return this->upgradeType_ != nullptr;};
    void deleteUpgradeType() { this->upgradeType_ = nullptr;};
    inline string getUpgradeType() const { DARABONBA_PTR_GET_DEFAULT(upgradeType_, "") };
    inline UpgradeDBClusterVersionRequest& setUpgradeType(string upgradeType) { DARABONBA_PTR_SET_VALUE(upgradeType_, upgradeType) };


  protected:
    // The cluster ID.
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query the details of all clusters under your account, such as the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to execute the kernel version upgrade immediately or on a schedule. Valid values:
    // 
    // - **false** (default): The upgrade is executed on a schedule.
    // 
    // - **true**: The upgrade is executed immediately.
    // 
    // > You do not need to specify this parameter when you invoke this operation.
    shared_ptr<bool> fromTimeService_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The latest time to start the scheduled task. The time is in the `YYYY-MM-DDThh:mm:ssZ` format and displayed in UTC.
    // > * The latest time must be at least 30 minutes later than the start time.
    // > * If you specify PlannedStartTime but do not specify this parameter, the latest time to start the task defaults to the start time plus 30 minutes. For example, if PlannedStartTime is set to `2021-01-14T09:00:00Z` and this parameter is left empty, the task starts at `2021-01-14T09:30:00Z` at the latest.
    shared_ptr<string> plannedEndTime_ {};
    // The earliest time to start the scheduled Milvus version upgrade task. The time is in the `YYYY-MM-DDThh:mm:ssZ` format and displayed in UTC.
    // > * The start time must be within the next 72 hours. For example, if the current time is `2021-01-14T09:00:00Z`, the allowed start time ranges from `2021-01-14T09:00:00Z` to `2021-01-17T09:00:00Z`.
    // > * If you leave this parameter empty, the Milvus version upgrade task is executed immediately by default.
    shared_ptr<string> plannedStartTime_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The VersionCode of the target database version. You can obtain the value from the [DescribeDBClusterVersion](https://help.aliyun.com/document_detail/2319145.html) operation.
    shared_ptr<string> targetDBRevisionVersionCode_ {};
    // The VersionCode of the target PolarProxy version. You can obtain the value from the [DescribeDBClusterVersion](https://help.aliyun.com/document_detail/2319145.html) operation.
    shared_ptr<string> targetProxyRevisionVersionCode_ {};
    // The kernel version upgrade label. Set the value to **INNOVATE**.
    // 
    // > - This parameter applies only to upgrades from PolarDB for MySQL 8.0.1 to PolarDB for MySQL 8.0.2.
    // > - When you specify this parameter, you must set UpgradePolicy to **COLD**.
    shared_ptr<string> upgradeLabel_ {};
    // The kernel version upgrade policy. Valid values:
    // 
    // - **HOT**: Hot upgrade.
    // 
    // - **COLD**: Cold upgrade. Currently, only PolarDB for MySQL 8.0 Cluster Edition supports this upgrade method.
    shared_ptr<string> upgradePolicy_ {};
    // The upgrade type. Valid values:
    // 
    // - **PROXY**: Upgrades only PolarProxy.
    // 
    // - **DB**: Upgrades only the database engine.
    // 
    // - **ALL** (default): Upgrades both PolarProxy and the database engine.
    shared_ptr<string> upgradeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
