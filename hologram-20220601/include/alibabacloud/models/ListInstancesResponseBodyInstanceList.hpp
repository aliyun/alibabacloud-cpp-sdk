// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYINSTANCELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesResponseBodyInstanceListEndpoints.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyInstanceListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220601
{
namespace Models
{
  class ListInstancesResponseBodyInstanceList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EnableHiveAccess, enableHiveAccess_);
      DARABONBA_PTR_TO_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_TO_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(LeaderInstanceId, leaderInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(SuspendReason, suspendReason_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyInstanceList& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EnableHiveAccess, enableHiveAccess_);
      DARABONBA_PTR_FROM_JSON(Endpoints, endpoints_);
      DARABONBA_PTR_FROM_JSON(ExpirationTime, expirationTime_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(LeaderInstanceId, leaderInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(SuspendReason, suspendReason_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListInstancesResponseBodyInstanceList() = default ;
    ListInstancesResponseBodyInstanceList(const ListInstancesResponseBodyInstanceList &) = default ;
    ListInstancesResponseBodyInstanceList(ListInstancesResponseBodyInstanceList &&) = default ;
    ListInstancesResponseBodyInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyInstanceList() = default ;
    ListInstancesResponseBodyInstanceList& operator=(const ListInstancesResponseBodyInstanceList &) = default ;
    ListInstancesResponseBodyInstanceList& operator=(ListInstancesResponseBodyInstanceList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && return this->creationTime_ == nullptr && return this->enableHiveAccess_ == nullptr && return this->endpoints_ == nullptr && return this->expirationTime_ == nullptr && return this->instanceChargeType_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceStatus_ == nullptr && return this->instanceType_ == nullptr && return this->leaderInstanceId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->storageType_ == nullptr && return this->suspendReason_ == nullptr && return this->tags_ == nullptr
        && return this->version_ == nullptr && return this->zoneId_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListInstancesResponseBodyInstanceList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline ListInstancesResponseBodyInstanceList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // enableHiveAccess Field Functions 
    bool hasEnableHiveAccess() const { return this->enableHiveAccess_ != nullptr;};
    void deleteEnableHiveAccess() { this->enableHiveAccess_ = nullptr;};
    inline string enableHiveAccess() const { DARABONBA_PTR_GET_DEFAULT(enableHiveAccess_, "") };
    inline ListInstancesResponseBodyInstanceList& setEnableHiveAccess(string enableHiveAccess) { DARABONBA_PTR_SET_VALUE(enableHiveAccess_, enableHiveAccess) };


    // endpoints Field Functions 
    bool hasEndpoints() const { return this->endpoints_ != nullptr;};
    void deleteEndpoints() { this->endpoints_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstanceListEndpoints> & endpoints() const { DARABONBA_PTR_GET_CONST(endpoints_, vector<Models::ListInstancesResponseBodyInstanceListEndpoints>) };
    inline vector<Models::ListInstancesResponseBodyInstanceListEndpoints> endpoints() { DARABONBA_PTR_GET(endpoints_, vector<Models::ListInstancesResponseBodyInstanceListEndpoints>) };
    inline ListInstancesResponseBodyInstanceList& setEndpoints(const vector<Models::ListInstancesResponseBodyInstanceListEndpoints> & endpoints) { DARABONBA_PTR_SET_VALUE(endpoints_, endpoints) };
    inline ListInstancesResponseBodyInstanceList& setEndpoints(vector<Models::ListInstancesResponseBodyInstanceListEndpoints> && endpoints) { DARABONBA_PTR_SET_RVALUE(endpoints_, endpoints) };


    // expirationTime Field Functions 
    bool hasExpirationTime() const { return this->expirationTime_ != nullptr;};
    void deleteExpirationTime() { this->expirationTime_ = nullptr;};
    inline string expirationTime() const { DARABONBA_PTR_GET_DEFAULT(expirationTime_, "") };
    inline ListInstancesResponseBodyInstanceList& setExpirationTime(string expirationTime) { DARABONBA_PTR_SET_VALUE(expirationTime_, expirationTime) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline ListInstancesResponseBodyInstanceList& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyInstanceList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListInstancesResponseBodyInstanceList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline ListInstancesResponseBodyInstanceList& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ListInstancesResponseBodyInstanceList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // leaderInstanceId Field Functions 
    bool hasLeaderInstanceId() const { return this->leaderInstanceId_ != nullptr;};
    void deleteLeaderInstanceId() { this->leaderInstanceId_ = nullptr;};
    inline string leaderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(leaderInstanceId_, "") };
    inline ListInstancesResponseBodyInstanceList& setLeaderInstanceId(string leaderInstanceId) { DARABONBA_PTR_SET_VALUE(leaderInstanceId_, leaderInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInstancesResponseBodyInstanceList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstancesResponseBodyInstanceList& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListInstancesResponseBodyInstanceList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // suspendReason Field Functions 
    bool hasSuspendReason() const { return this->suspendReason_ != nullptr;};
    void deleteSuspendReason() { this->suspendReason_ = nullptr;};
    inline string suspendReason() const { DARABONBA_PTR_GET_DEFAULT(suspendReason_, "") };
    inline ListInstancesResponseBodyInstanceList& setSuspendReason(string suspendReason) { DARABONBA_PTR_SET_VALUE(suspendReason_, suspendReason) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyInstanceListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListInstancesResponseBodyInstanceListTags>) };
    inline vector<Models::ListInstancesResponseBodyInstanceListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListInstancesResponseBodyInstanceListTags>) };
    inline ListInstancesResponseBodyInstanceList& setTags(const vector<Models::ListInstancesResponseBodyInstanceListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListInstancesResponseBodyInstanceList& setTags(vector<Models::ListInstancesResponseBodyInstanceListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListInstancesResponseBodyInstanceList& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListInstancesResponseBodyInstanceList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The commodity code, which is the same as that on the Billing Management page.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether lakehouse acceleration is enabled.
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> enableHiveAccess_ = nullptr;
    // The list of endpoints.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstanceListEndpoints>> endpoints_ = nullptr;
    // The time when the cluster expires.
    std::shared_ptr<string> expirationTime_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // Valid values:
    // 
    // *   PostPaid
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     pay-as-you-go
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   PrePaid
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     subscription
    // 
    //     <!-- -->
    // 
    //     .
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The status of the instance.
    // 
    // Valid values:
    // 
    // *   Creating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Running
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Suspended
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Allocating
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> instanceStatus_ = nullptr;
    // The type of the instance.
    // 
    // Valid values:
    // 
    // *   Follower
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     read-only secondary instance
    // 
    //     <!-- -->
    // 
    //     .
    // 
    // *   Standard
    // 
    //     <!-- -->
    // 
    //     :
    // 
    //     <!-- -->
    // 
    //     normal instance
    // 
    //     <!-- -->
    // 
    //     .
    std::shared_ptr<string> instanceType_ = nullptr;
    // The ID of the primary instance.
    std::shared_ptr<string> leaderInstanceId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    // The reason for the suspension.
    std::shared_ptr<string> suspendReason_ = nullptr;
    // The tags that are added to the resource.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyInstanceListTags>> tags_ = nullptr;
    // The version of the cluster.
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hologram20220601
#endif
