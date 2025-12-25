// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesHaResourceSpec.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesHostAliases.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesResourceSpec.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesStorage.hpp>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DescribeInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_TO_JSON(AskClusterId, askClusterId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_TO_JSON(HaVSwitchIds, haVSwitchIds_);
      DARABONBA_PTR_TO_JSON(HaZoneId, haZoneId_);
      DARABONBA_PTR_TO_JSON(HostAliases, hostAliases_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_TO_JSON(OrderState, orderState_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceCreateTime, resourceCreateTime_);
      DARABONBA_PTR_TO_JSON(ResourceExpiredTime, resourceExpiredTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(Storage, storage_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_FROM_JSON(AskClusterId, askClusterId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(HaResourceSpec, haResourceSpec_);
      DARABONBA_PTR_FROM_JSON(HaVSwitchIds, haVSwitchIds_);
      DARABONBA_PTR_FROM_JSON(HaZoneId, haZoneId_);
      DARABONBA_PTR_FROM_JSON(HostAliases, hostAliases_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
      DARABONBA_PTR_FROM_JSON(OrderState, orderState_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceCreateTime, resourceCreateTime_);
      DARABONBA_PTR_FROM_JSON(ResourceExpiredTime, resourceExpiredTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(Storage, storage_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeInstancesResponseBodyInstances() = default ;
    DescribeInstancesResponseBodyInstances(const DescribeInstancesResponseBodyInstances &) = default ;
    DescribeInstancesResponseBodyInstances(DescribeInstancesResponseBodyInstances &&) = default ;
    DescribeInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstances() = default ;
    DescribeInstancesResponseBodyInstances& operator=(const DescribeInstancesResponseBodyInstances &) = default ;
    DescribeInstancesResponseBodyInstances& operator=(DescribeInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architectureType_ == nullptr
        && return this->askClusterId_ == nullptr && return this->chargeType_ == nullptr && return this->clusterStatus_ == nullptr && return this->ha_ == nullptr && return this->haResourceSpec_ == nullptr
        && return this->haVSwitchIds_ == nullptr && return this->haZoneId_ == nullptr && return this->hostAliases_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->monitorType_ == nullptr && return this->orderState_ == nullptr && return this->region_ == nullptr && return this->resourceCreateTime_ == nullptr && return this->resourceExpiredTime_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->resourceId_ == nullptr && return this->resourceSpec_ == nullptr && return this->storage_ == nullptr && return this->tags_ == nullptr
        && return this->uid_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // architectureType Field Functions 
    bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
    void deleteArchitectureType() { this->architectureType_ = nullptr;};
    inline string architectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
    inline DescribeInstancesResponseBodyInstances& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


    // askClusterId Field Functions 
    bool hasAskClusterId() const { return this->askClusterId_ != nullptr;};
    void deleteAskClusterId() { this->askClusterId_ = nullptr;};
    inline string askClusterId() const { DARABONBA_PTR_GET_DEFAULT(askClusterId_, "") };
    inline DescribeInstancesResponseBodyInstances& setAskClusterId(string askClusterId) { DARABONBA_PTR_SET_VALUE(askClusterId_, askClusterId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeInstancesResponseBodyInstances& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterStatus Field Functions 
    bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
    void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
    inline string clusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
    inline DescribeInstancesResponseBodyInstances& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool ha() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline DescribeInstancesResponseBodyInstances& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // haResourceSpec Field Functions 
    bool hasHaResourceSpec() const { return this->haResourceSpec_ != nullptr;};
    void deleteHaResourceSpec() { this->haResourceSpec_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesHaResourceSpec & haResourceSpec() const { DARABONBA_PTR_GET_CONST(haResourceSpec_, Models::DescribeInstancesResponseBodyInstancesHaResourceSpec) };
    inline Models::DescribeInstancesResponseBodyInstancesHaResourceSpec haResourceSpec() { DARABONBA_PTR_GET(haResourceSpec_, Models::DescribeInstancesResponseBodyInstancesHaResourceSpec) };
    inline DescribeInstancesResponseBodyInstances& setHaResourceSpec(const Models::DescribeInstancesResponseBodyInstancesHaResourceSpec & haResourceSpec) { DARABONBA_PTR_SET_VALUE(haResourceSpec_, haResourceSpec) };
    inline DescribeInstancesResponseBodyInstances& setHaResourceSpec(Models::DescribeInstancesResponseBodyInstancesHaResourceSpec && haResourceSpec) { DARABONBA_PTR_SET_RVALUE(haResourceSpec_, haResourceSpec) };


    // haVSwitchIds Field Functions 
    bool hasHaVSwitchIds() const { return this->haVSwitchIds_ != nullptr;};
    void deleteHaVSwitchIds() { this->haVSwitchIds_ = nullptr;};
    inline const vector<string> & haVSwitchIds() const { DARABONBA_PTR_GET_CONST(haVSwitchIds_, vector<string>) };
    inline vector<string> haVSwitchIds() { DARABONBA_PTR_GET(haVSwitchIds_, vector<string>) };
    inline DescribeInstancesResponseBodyInstances& setHaVSwitchIds(const vector<string> & haVSwitchIds) { DARABONBA_PTR_SET_VALUE(haVSwitchIds_, haVSwitchIds) };
    inline DescribeInstancesResponseBodyInstances& setHaVSwitchIds(vector<string> && haVSwitchIds) { DARABONBA_PTR_SET_RVALUE(haVSwitchIds_, haVSwitchIds) };


    // haZoneId Field Functions 
    bool hasHaZoneId() const { return this->haZoneId_ != nullptr;};
    void deleteHaZoneId() { this->haZoneId_ = nullptr;};
    inline string haZoneId() const { DARABONBA_PTR_GET_DEFAULT(haZoneId_, "") };
    inline DescribeInstancesResponseBodyInstances& setHaZoneId(string haZoneId) { DARABONBA_PTR_SET_VALUE(haZoneId_, haZoneId) };


    // hostAliases Field Functions 
    bool hasHostAliases() const { return this->hostAliases_ != nullptr;};
    void deleteHostAliases() { this->hostAliases_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesHostAliases> & hostAliases() const { DARABONBA_PTR_GET_CONST(hostAliases_, vector<Models::DescribeInstancesResponseBodyInstancesHostAliases>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesHostAliases> hostAliases() { DARABONBA_PTR_GET(hostAliases_, vector<Models::DescribeInstancesResponseBodyInstancesHostAliases>) };
    inline DescribeInstancesResponseBodyInstances& setHostAliases(const vector<Models::DescribeInstancesResponseBodyInstancesHostAliases> & hostAliases) { DARABONBA_PTR_SET_VALUE(hostAliases_, hostAliases) };
    inline DescribeInstancesResponseBodyInstances& setHostAliases(vector<Models::DescribeInstancesResponseBodyInstancesHostAliases> && hostAliases) { DARABONBA_PTR_SET_RVALUE(hostAliases_, hostAliases) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesResponseBodyInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeInstancesResponseBodyInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // monitorType Field Functions 
    bool hasMonitorType() const { return this->monitorType_ != nullptr;};
    void deleteMonitorType() { this->monitorType_ = nullptr;};
    inline string monitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, "") };
    inline DescribeInstancesResponseBodyInstances& setMonitorType(string monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


    // orderState Field Functions 
    bool hasOrderState() const { return this->orderState_ != nullptr;};
    void deleteOrderState() { this->orderState_ = nullptr;};
    inline string orderState() const { DARABONBA_PTR_GET_DEFAULT(orderState_, "") };
    inline DescribeInstancesResponseBodyInstances& setOrderState(string orderState) { DARABONBA_PTR_SET_VALUE(orderState_, orderState) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeInstancesResponseBodyInstances& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceCreateTime Field Functions 
    bool hasResourceCreateTime() const { return this->resourceCreateTime_ != nullptr;};
    void deleteResourceCreateTime() { this->resourceCreateTime_ = nullptr;};
    inline int64_t resourceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreateTime_, 0L) };
    inline DescribeInstancesResponseBodyInstances& setResourceCreateTime(int64_t resourceCreateTime) { DARABONBA_PTR_SET_VALUE(resourceCreateTime_, resourceCreateTime) };


    // resourceExpiredTime Field Functions 
    bool hasResourceExpiredTime() const { return this->resourceExpiredTime_ != nullptr;};
    void deleteResourceExpiredTime() { this->resourceExpiredTime_ = nullptr;};
    inline int64_t resourceExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(resourceExpiredTime_, 0L) };
    inline DescribeInstancesResponseBodyInstances& setResourceExpiredTime(int64_t resourceExpiredTime) { DARABONBA_PTR_SET_VALUE(resourceExpiredTime_, resourceExpiredTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstancesResponseBodyInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeInstancesResponseBodyInstances& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesResourceSpec & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, Models::DescribeInstancesResponseBodyInstancesResourceSpec) };
    inline Models::DescribeInstancesResponseBodyInstancesResourceSpec resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, Models::DescribeInstancesResponseBodyInstancesResourceSpec) };
    inline DescribeInstancesResponseBodyInstances& setResourceSpec(const Models::DescribeInstancesResponseBodyInstancesResourceSpec & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline DescribeInstancesResponseBodyInstances& setResourceSpec(Models::DescribeInstancesResponseBodyInstancesResourceSpec && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // storage Field Functions 
    bool hasStorage() const { return this->storage_ != nullptr;};
    void deleteStorage() { this->storage_ = nullptr;};
    inline const Models::DescribeInstancesResponseBodyInstancesStorage & storage() const { DARABONBA_PTR_GET_CONST(storage_, Models::DescribeInstancesResponseBodyInstancesStorage) };
    inline Models::DescribeInstancesResponseBodyInstancesStorage storage() { DARABONBA_PTR_GET(storage_, Models::DescribeInstancesResponseBodyInstancesStorage) };
    inline DescribeInstancesResponseBodyInstances& setStorage(const Models::DescribeInstancesResponseBodyInstancesStorage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
    inline DescribeInstancesResponseBodyInstances& setStorage(Models::DescribeInstancesResponseBodyInstancesStorage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeInstancesResponseBodyInstancesTags>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeInstancesResponseBodyInstancesTags>) };
    inline DescribeInstancesResponseBodyInstances& setTags(const vector<Models::DescribeInstancesResponseBodyInstancesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeInstancesResponseBodyInstances& setTags(vector<Models::DescribeInstancesResponseBodyInstancesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string uid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline DescribeInstancesResponseBodyInstances& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeInstancesResponseBodyInstances& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeInstancesResponseBodyInstances& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeInstancesResponseBodyInstances& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeInstancesResponseBodyInstances& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> architectureType_ = nullptr;
    std::shared_ptr<string> askClusterId_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> clusterStatus_ = nullptr;
    std::shared_ptr<bool> ha_ = nullptr;
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesHaResourceSpec> haResourceSpec_ = nullptr;
    std::shared_ptr<vector<string>> haVSwitchIds_ = nullptr;
    std::shared_ptr<string> haZoneId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesHostAliases>> hostAliases_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> monitorType_ = nullptr;
    std::shared_ptr<string> orderState_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<int64_t> resourceCreateTime_ = nullptr;
    std::shared_ptr<int64_t> resourceExpiredTime_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesResourceSpec> resourceSpec_ = nullptr;
    std::shared_ptr<Models::DescribeInstancesResponseBodyInstancesStorage> storage_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesTags>> tags_ = nullptr;
    std::shared_ptr<string> uid_ = nullptr;
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
