// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERPRIMARYZONEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERPRIMARYZONEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterPrimaryZoneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterPrimaryZoneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_TO_JSON(IsSwitchOverForDisaster, isSwitchOverForDisaster_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterPrimaryZoneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(FromTimeService, fromTimeService_);
      DARABONBA_PTR_FROM_JSON(IsSwitchOverForDisaster, isSwitchOverForDisaster_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
    };
    ModifyDBClusterPrimaryZoneRequest() = default ;
    ModifyDBClusterPrimaryZoneRequest(const ModifyDBClusterPrimaryZoneRequest &) = default ;
    ModifyDBClusterPrimaryZoneRequest(ModifyDBClusterPrimaryZoneRequest &&) = default ;
    ModifyDBClusterPrimaryZoneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterPrimaryZoneRequest() = default ;
    ModifyDBClusterPrimaryZoneRequest& operator=(const ModifyDBClusterPrimaryZoneRequest &) = default ;
    ModifyDBClusterPrimaryZoneRequest& operator=(ModifyDBClusterPrimaryZoneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->fromTimeService_ == nullptr && this->isSwitchOverForDisaster_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->plannedEndTime_ == nullptr
        && this->plannedStartTime_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr && this->zoneType_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterPrimaryZoneRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // fromTimeService Field Functions 
    bool hasFromTimeService() const { return this->fromTimeService_ != nullptr;};
    void deleteFromTimeService() { this->fromTimeService_ = nullptr;};
    inline bool getFromTimeService() const { DARABONBA_PTR_GET_DEFAULT(fromTimeService_, false) };
    inline ModifyDBClusterPrimaryZoneRequest& setFromTimeService(bool fromTimeService) { DARABONBA_PTR_SET_VALUE(fromTimeService_, fromTimeService) };


    // isSwitchOverForDisaster Field Functions 
    bool hasIsSwitchOverForDisaster() const { return this->isSwitchOverForDisaster_ != nullptr;};
    void deleteIsSwitchOverForDisaster() { this->isSwitchOverForDisaster_ = nullptr;};
    inline string getIsSwitchOverForDisaster() const { DARABONBA_PTR_GET_DEFAULT(isSwitchOverForDisaster_, "") };
    inline ModifyDBClusterPrimaryZoneRequest& setIsSwitchOverForDisaster(string isSwitchOverForDisaster) { DARABONBA_PTR_SET_VALUE(isSwitchOverForDisaster_, isSwitchOverForDisaster) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterPrimaryZoneRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterPrimaryZoneRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline ModifyDBClusterPrimaryZoneRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline ModifyDBClusterPrimaryZoneRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterPrimaryZoneRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterPrimaryZoneRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline ModifyDBClusterPrimaryZoneRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyDBClusterPrimaryZoneRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ModifyDBClusterPrimaryZoneRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneType Field Functions 
    bool hasZoneType() const { return this->zoneType_ != nullptr;};
    void deleteZoneType() { this->zoneType_ = nullptr;};
    inline string getZoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
    inline ModifyDBClusterPrimaryZoneRequest& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


  protected:
    // The ID of the cluster.
    // 
    // > You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/173433.html) operation to query information about all clusters that are deployed in a specified region, such as the cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Specifies whether to change the primary zone immediately. Valid values:
    // 
    // *   false (default): changes the primary zone as scheduled.
    // *   true: changes the primary zone immediately.
    shared_ptr<bool> fromTimeService_ {};
    // Specifies whether to switch back to the original primary zone.
    // 
    // *   true: switches back to the original primary zone.
    // *   false: does not switch back to the original primary zone.
    shared_ptr<string> isSwitchOverForDisaster_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The latest start time to switch the primary zone within the scheduled time period. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // > *   The latest start time must be at least 30 minutes later than the earliest start time.
    // >*   If you specify the `PlannedStartTime` parameter but do not specify the PlannedEndTime parameter, the latest start time of the task is set to a value that is calculated by `the value of the PlannedEndTime parameter + 30 minutes` by default. For example, if you set the `PlannedStartTime` parameter to `2021-01-14T09:00:00Z` and you do not specify the PlannedEndTime parameter, the latest start time of the task is set to `2021-01-14T09:30:00Z`.
    shared_ptr<string> plannedEndTime_ {};
    // The start time to change the primary zone within the scheduled time period. Specify the time in the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // > *   The start time of the task can be a point in time within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can specify a point in time from `2021-01-14T09:00:00Z` to `2021-01-15T09:00:00Z`.
    // >*   If you leave this parameter empty, the primary zone is immediately changed.
    shared_ptr<string> plannedStartTime_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The virtual private cloud (VPC) ID of the destination primary zone.
    shared_ptr<string> VPCId_ {};
    // The ID of the vSwitch in the destination primary zone.
    // 
    // > *   For a PolarDB for PostgreSQL (Compatible with Oracle) cluster or a PolarDB for PostgreSQL cluster, this parameter is required.
    // >*   For a PolarDB for MySQL cluster, the default vSwitch is used if no vSwitches are created in the destination zone. If a vSwitch is in the destination zone, this parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the destination primary zone.
    // 
    // >  You can call the DescribeRegions operation to query available zones.[](~~98041~~)
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
    // The zone type. Valid values:
    // 
    // *   **Primary**: primary zone
    // *   **Standby**: secondary zone
    shared_ptr<string> zoneType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
