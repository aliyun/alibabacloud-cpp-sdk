// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLUSSINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_FLUSSINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ClusterState.hpp>
#include <vector>
#include <alibabacloud/models/FlussVswitch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20211028
{
namespace Models
{
  class FlussInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlussInstance& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterState, clusterState_);
      DARABONBA_PTR_TO_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_TO_JSON(ConsoleUrl, consoleUrl_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(Ha, ha_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(OrderState, orderState_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceCreateTime, resourceCreateTime_);
      DARABONBA_PTR_TO_JSON(ResourceExpiredTime, resourceExpiredTime_);
      DARABONBA_PTR_TO_JSON(TabletServerModel, tabletServerModel_);
      DARABONBA_PTR_TO_JSON(TabletServerNum, tabletServerNum_);
      DARABONBA_PTR_TO_JSON(TabletServerType, tabletServerType_);
      DARABONBA_PTR_TO_JSON(TieringPostCu, tieringPostCu_);
      DARABONBA_PTR_TO_JSON(TieringPreCu, tieringPreCu_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, FlussInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterState, clusterState_);
      DARABONBA_PTR_FROM_JSON(ClusterStatus, clusterStatus_);
      DARABONBA_PTR_FROM_JSON(ConsoleUrl, consoleUrl_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(Ha, ha_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(OrderState, orderState_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceCreateTime, resourceCreateTime_);
      DARABONBA_PTR_FROM_JSON(ResourceExpiredTime, resourceExpiredTime_);
      DARABONBA_PTR_FROM_JSON(TabletServerModel, tabletServerModel_);
      DARABONBA_PTR_FROM_JSON(TabletServerNum, tabletServerNum_);
      DARABONBA_PTR_FROM_JSON(TabletServerType, tabletServerType_);
      DARABONBA_PTR_FROM_JSON(TieringPostCu, tieringPostCu_);
      DARABONBA_PTR_FROM_JSON(TieringPreCu, tieringPreCu_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    FlussInstance() = default ;
    FlussInstance(const FlussInstance &) = default ;
    FlussInstance(FlussInstance &&) = default ;
    FlussInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlussInstance() = default ;
    FlussInstance& operator=(const FlussInstance &) = default ;
    FlussInstance& operator=(FlussInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterState_ == nullptr
        && this->clusterStatus_ == nullptr && this->consoleUrl_ == nullptr && this->diskSize_ == nullptr && this->ha_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->orderState_ == nullptr && this->regionId_ == nullptr && this->resourceCreateTime_ == nullptr && this->resourceExpiredTime_ == nullptr
        && this->tabletServerModel_ == nullptr && this->tabletServerNum_ == nullptr && this->tabletServerType_ == nullptr && this->tieringPostCu_ == nullptr && this->tieringPreCu_ == nullptr
        && this->uid_ == nullptr && this->vSwitches_ == nullptr && this->vpcId_ == nullptr; };
    // clusterState Field Functions 
    bool hasClusterState() const { return this->clusterState_ != nullptr;};
    void deleteClusterState() { this->clusterState_ = nullptr;};
    inline const ClusterState & getClusterState() const { DARABONBA_PTR_GET_CONST(clusterState_, ClusterState) };
    inline ClusterState getClusterState() { DARABONBA_PTR_GET(clusterState_, ClusterState) };
    inline FlussInstance& setClusterState(const ClusterState & clusterState) { DARABONBA_PTR_SET_VALUE(clusterState_, clusterState) };
    inline FlussInstance& setClusterState(ClusterState && clusterState) { DARABONBA_PTR_SET_RVALUE(clusterState_, clusterState) };


    // clusterStatus Field Functions 
    bool hasClusterStatus() const { return this->clusterStatus_ != nullptr;};
    void deleteClusterStatus() { this->clusterStatus_ = nullptr;};
    inline string getClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(clusterStatus_, "") };
    inline FlussInstance& setClusterStatus(string clusterStatus) { DARABONBA_PTR_SET_VALUE(clusterStatus_, clusterStatus) };


    // consoleUrl Field Functions 
    bool hasConsoleUrl() const { return this->consoleUrl_ != nullptr;};
    void deleteConsoleUrl() { this->consoleUrl_ = nullptr;};
    inline string getConsoleUrl() const { DARABONBA_PTR_GET_DEFAULT(consoleUrl_, "") };
    inline FlussInstance& setConsoleUrl(string consoleUrl) { DARABONBA_PTR_SET_VALUE(consoleUrl_, consoleUrl) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int64_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0L) };
    inline FlussInstance& setDiskSize(int64_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // ha Field Functions 
    bool hasHa() const { return this->ha_ != nullptr;};
    void deleteHa() { this->ha_ = nullptr;};
    inline bool getHa() const { DARABONBA_PTR_GET_DEFAULT(ha_, false) };
    inline FlussInstance& setHa(bool ha) { DARABONBA_PTR_SET_VALUE(ha_, ha) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline FlussInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline FlussInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // orderState Field Functions 
    bool hasOrderState() const { return this->orderState_ != nullptr;};
    void deleteOrderState() { this->orderState_ = nullptr;};
    inline string getOrderState() const { DARABONBA_PTR_GET_DEFAULT(orderState_, "") };
    inline FlussInstance& setOrderState(string orderState) { DARABONBA_PTR_SET_VALUE(orderState_, orderState) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline FlussInstance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceCreateTime Field Functions 
    bool hasResourceCreateTime() const { return this->resourceCreateTime_ != nullptr;};
    void deleteResourceCreateTime() { this->resourceCreateTime_ = nullptr;};
    inline int64_t getResourceCreateTime() const { DARABONBA_PTR_GET_DEFAULT(resourceCreateTime_, 0L) };
    inline FlussInstance& setResourceCreateTime(int64_t resourceCreateTime) { DARABONBA_PTR_SET_VALUE(resourceCreateTime_, resourceCreateTime) };


    // resourceExpiredTime Field Functions 
    bool hasResourceExpiredTime() const { return this->resourceExpiredTime_ != nullptr;};
    void deleteResourceExpiredTime() { this->resourceExpiredTime_ = nullptr;};
    inline int64_t getResourceExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(resourceExpiredTime_, 0L) };
    inline FlussInstance& setResourceExpiredTime(int64_t resourceExpiredTime) { DARABONBA_PTR_SET_VALUE(resourceExpiredTime_, resourceExpiredTime) };


    // tabletServerModel Field Functions 
    bool hasTabletServerModel() const { return this->tabletServerModel_ != nullptr;};
    void deleteTabletServerModel() { this->tabletServerModel_ = nullptr;};
    inline string getTabletServerModel() const { DARABONBA_PTR_GET_DEFAULT(tabletServerModel_, "") };
    inline FlussInstance& setTabletServerModel(string tabletServerModel) { DARABONBA_PTR_SET_VALUE(tabletServerModel_, tabletServerModel) };


    // tabletServerNum Field Functions 
    bool hasTabletServerNum() const { return this->tabletServerNum_ != nullptr;};
    void deleteTabletServerNum() { this->tabletServerNum_ = nullptr;};
    inline int64_t getTabletServerNum() const { DARABONBA_PTR_GET_DEFAULT(tabletServerNum_, 0L) };
    inline FlussInstance& setTabletServerNum(int64_t tabletServerNum) { DARABONBA_PTR_SET_VALUE(tabletServerNum_, tabletServerNum) };


    // tabletServerType Field Functions 
    bool hasTabletServerType() const { return this->tabletServerType_ != nullptr;};
    void deleteTabletServerType() { this->tabletServerType_ = nullptr;};
    inline string getTabletServerType() const { DARABONBA_PTR_GET_DEFAULT(tabletServerType_, "") };
    inline FlussInstance& setTabletServerType(string tabletServerType) { DARABONBA_PTR_SET_VALUE(tabletServerType_, tabletServerType) };


    // tieringPostCu Field Functions 
    bool hasTieringPostCu() const { return this->tieringPostCu_ != nullptr;};
    void deleteTieringPostCu() { this->tieringPostCu_ = nullptr;};
    inline int64_t getTieringPostCu() const { DARABONBA_PTR_GET_DEFAULT(tieringPostCu_, 0L) };
    inline FlussInstance& setTieringPostCu(int64_t tieringPostCu) { DARABONBA_PTR_SET_VALUE(tieringPostCu_, tieringPostCu) };


    // tieringPreCu Field Functions 
    bool hasTieringPreCu() const { return this->tieringPreCu_ != nullptr;};
    void deleteTieringPreCu() { this->tieringPreCu_ = nullptr;};
    inline int64_t getTieringPreCu() const { DARABONBA_PTR_GET_DEFAULT(tieringPreCu_, 0L) };
    inline FlussInstance& setTieringPreCu(int64_t tieringPreCu) { DARABONBA_PTR_SET_VALUE(tieringPreCu_, tieringPreCu) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
    inline FlussInstance& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<FlussVswitch> & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<FlussVswitch>) };
    inline vector<FlussVswitch> getVSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<FlussVswitch>) };
    inline FlussInstance& setVSwitches(const vector<FlussVswitch> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline FlussInstance& setVSwitches(vector<FlussVswitch> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline FlussInstance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    shared_ptr<ClusterState> clusterState_ {};
    // The cluster status.
    shared_ptr<string> clusterStatus_ {};
    // The URL of the instance management console.
    shared_ptr<string> consoleUrl_ {};
    // The disk size, in GB.
    shared_ptr<int64_t> diskSize_ {};
    // Specifies whether high availability (HA) is enabled.
    shared_ptr<bool> ha_ {};
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // The instance name.
    shared_ptr<string> instanceName_ {};
    // The order state.
    shared_ptr<string> orderState_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The creation time of the resource, as a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> resourceCreateTime_ {};
    // The expiration time of the resource, as a UNIX timestamp in milliseconds.
    shared_ptr<int64_t> resourceExpiredTime_ {};
    // The tablet server model.
    shared_ptr<string> tabletServerModel_ {};
    // The number of tablet servers.
    shared_ptr<int64_t> tabletServerNum_ {};
    // The tablet server type.
    shared_ptr<string> tabletServerType_ {};
    // The number of compute units (CUs) for post-tiering.
    shared_ptr<int64_t> tieringPostCu_ {};
    // The number of compute units (CUs) for pre-tiering.
    shared_ptr<int64_t> tieringPreCu_ {};
    // The Alibaba Cloud account ID (UID).
    shared_ptr<string> uid_ {};
    // The VSwitch details.
    shared_ptr<vector<FlussVswitch>> vSwitches_ {};
    // The VPC ID.
    shared_ptr<string> vpcId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20211028
#endif
