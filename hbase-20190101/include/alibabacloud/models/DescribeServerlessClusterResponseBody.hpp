// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERLESSCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERLESSCLUSTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeServerlessClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerlessClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CuSize, cuSize_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HaType, haType_);
      DARABONBA_PTR_TO_JSON(HasUser, hasUser_);
      DARABONBA_PTR_TO_JSON(InnerEndpoint, innerEndpoint_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IsDeletionProtection, isDeletionProtection_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MainVersion, mainVersion_);
      DARABONBA_PTR_TO_JSON(OuterEndpoint, outerEndpoint_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReserverMaxQpsNum, reserverMaxQpsNum_);
      DARABONBA_PTR_TO_JSON(ReserverMinQpsNum, reserverMinQpsNum_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerlessClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CuSize, cuSize_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HaType, haType_);
      DARABONBA_PTR_FROM_JSON(HasUser, hasUser_);
      DARABONBA_PTR_FROM_JSON(InnerEndpoint, innerEndpoint_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IsDeletionProtection, isDeletionProtection_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MainVersion, mainVersion_);
      DARABONBA_PTR_FROM_JSON(OuterEndpoint, outerEndpoint_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReserverMaxQpsNum, reserverMaxQpsNum_);
      DARABONBA_PTR_FROM_JSON(ReserverMinQpsNum, reserverMinQpsNum_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeServerlessClusterResponseBody() = default ;
    DescribeServerlessClusterResponseBody(const DescribeServerlessClusterResponseBody &) = default ;
    DescribeServerlessClusterResponseBody(DescribeServerlessClusterResponseBody &&) = default ;
    DescribeServerlessClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerlessClusterResponseBody() = default ;
    DescribeServerlessClusterResponseBody& operator=(const DescribeServerlessClusterResponseBody &) = default ;
    DescribeServerlessClusterResponseBody& operator=(DescribeServerlessClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->clusterType_ == nullptr && this->createTime_ == nullptr && this->cuSize_ == nullptr && this->diskSize_ == nullptr && this->expireTime_ == nullptr
        && this->haType_ == nullptr && this->hasUser_ == nullptr && this->innerEndpoint_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->isDeletionProtection_ == nullptr && this->lockMode_ == nullptr && this->mainVersion_ == nullptr && this->outerEndpoint_ == nullptr && this->payType_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->reserverMaxQpsNum_ == nullptr && this->reserverMinQpsNum_ == nullptr && this->resourceGroupId_ == nullptr
        && this->status_ == nullptr && this->updateStatus_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline DescribeServerlessClusterResponseBody& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeServerlessClusterResponseBody& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeServerlessClusterResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // cuSize Field Functions 
    bool hasCuSize() const { return this->cuSize_ != nullptr;};
    void deleteCuSize() { this->cuSize_ = nullptr;};
    inline string getCuSize() const { DARABONBA_PTR_GET_DEFAULT(cuSize_, "") };
    inline DescribeServerlessClusterResponseBody& setCuSize(string cuSize) { DARABONBA_PTR_SET_VALUE(cuSize_, cuSize) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline string getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, "") };
    inline DescribeServerlessClusterResponseBody& setDiskSize(string diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeServerlessClusterResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // haType Field Functions 
    bool hasHaType() const { return this->haType_ != nullptr;};
    void deleteHaType() { this->haType_ = nullptr;};
    inline string getHaType() const { DARABONBA_PTR_GET_DEFAULT(haType_, "") };
    inline DescribeServerlessClusterResponseBody& setHaType(string haType) { DARABONBA_PTR_SET_VALUE(haType_, haType) };


    // hasUser Field Functions 
    bool hasHasUser() const { return this->hasUser_ != nullptr;};
    void deleteHasUser() { this->hasUser_ = nullptr;};
    inline string getHasUser() const { DARABONBA_PTR_GET_DEFAULT(hasUser_, "") };
    inline DescribeServerlessClusterResponseBody& setHasUser(string hasUser) { DARABONBA_PTR_SET_VALUE(hasUser_, hasUser) };


    // innerEndpoint Field Functions 
    bool hasInnerEndpoint() const { return this->innerEndpoint_ != nullptr;};
    void deleteInnerEndpoint() { this->innerEndpoint_ = nullptr;};
    inline string getInnerEndpoint() const { DARABONBA_PTR_GET_DEFAULT(innerEndpoint_, "") };
    inline DescribeServerlessClusterResponseBody& setInnerEndpoint(string innerEndpoint) { DARABONBA_PTR_SET_VALUE(innerEndpoint_, innerEndpoint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeServerlessClusterResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeServerlessClusterResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isDeletionProtection Field Functions 
    bool hasIsDeletionProtection() const { return this->isDeletionProtection_ != nullptr;};
    void deleteIsDeletionProtection() { this->isDeletionProtection_ = nullptr;};
    inline string getIsDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(isDeletionProtection_, "") };
    inline DescribeServerlessClusterResponseBody& setIsDeletionProtection(string isDeletionProtection) { DARABONBA_PTR_SET_VALUE(isDeletionProtection_, isDeletionProtection) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeServerlessClusterResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // mainVersion Field Functions 
    bool hasMainVersion() const { return this->mainVersion_ != nullptr;};
    void deleteMainVersion() { this->mainVersion_ = nullptr;};
    inline string getMainVersion() const { DARABONBA_PTR_GET_DEFAULT(mainVersion_, "") };
    inline DescribeServerlessClusterResponseBody& setMainVersion(string mainVersion) { DARABONBA_PTR_SET_VALUE(mainVersion_, mainVersion) };


    // outerEndpoint Field Functions 
    bool hasOuterEndpoint() const { return this->outerEndpoint_ != nullptr;};
    void deleteOuterEndpoint() { this->outerEndpoint_ = nullptr;};
    inline string getOuterEndpoint() const { DARABONBA_PTR_GET_DEFAULT(outerEndpoint_, "") };
    inline DescribeServerlessClusterResponseBody& setOuterEndpoint(string outerEndpoint) { DARABONBA_PTR_SET_VALUE(outerEndpoint_, outerEndpoint) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeServerlessClusterResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeServerlessClusterResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServerlessClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserverMaxQpsNum Field Functions 
    bool hasReserverMaxQpsNum() const { return this->reserverMaxQpsNum_ != nullptr;};
    void deleteReserverMaxQpsNum() { this->reserverMaxQpsNum_ = nullptr;};
    inline string getReserverMaxQpsNum() const { DARABONBA_PTR_GET_DEFAULT(reserverMaxQpsNum_, "") };
    inline DescribeServerlessClusterResponseBody& setReserverMaxQpsNum(string reserverMaxQpsNum) { DARABONBA_PTR_SET_VALUE(reserverMaxQpsNum_, reserverMaxQpsNum) };


    // reserverMinQpsNum Field Functions 
    bool hasReserverMinQpsNum() const { return this->reserverMinQpsNum_ != nullptr;};
    void deleteReserverMinQpsNum() { this->reserverMinQpsNum_ = nullptr;};
    inline string getReserverMinQpsNum() const { DARABONBA_PTR_GET_DEFAULT(reserverMinQpsNum_, "") };
    inline DescribeServerlessClusterResponseBody& setReserverMinQpsNum(string reserverMinQpsNum) { DARABONBA_PTR_SET_VALUE(reserverMinQpsNum_, reserverMinQpsNum) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeServerlessClusterResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeServerlessClusterResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateStatus Field Functions 
    bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
    void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
    inline string getUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
    inline DescribeServerlessClusterResponseBody& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeServerlessClusterResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeServerlessClusterResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeServerlessClusterResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Indicates whether auto-renewal is enabled. Valid values:
    // - **true**: Auto-renewal is enabled.
    // - **false**: Auto-renewal is not enabled.
    shared_ptr<string> autoRenew_ {};
    // The cluster type. Valid values:
    // - **Cluster**: Cluster Edition.
    // - **Single**: single-node.
    shared_ptr<string> clusterType_ {};
    // The time when the cluster was created.
    shared_ptr<string> createTime_ {};
    // The compute unit (CU) size.
    shared_ptr<string> cuSize_ {};
    // The disk size of the node. Unit: GB.
    shared_ptr<string> diskSize_ {};
    // The expiration time.
    shared_ptr<string> expireTime_ {};
    // Indicates whether high availability (HA) is enabled. Valid values:
    // - **true**: HA is enabled.
    // - **false**: HA is not enabled.
    shared_ptr<string> haType_ {};
    // Indicates whether the cluster has users. Valid values:
    // - **true**: The cluster has users.
    // - **false**: The cluster does not have users.
    shared_ptr<string> hasUser_ {};
    // The internal endpoint.
    shared_ptr<string> innerEndpoint_ {};
    // The cluster ID.
    shared_ptr<string> instanceId_ {};
    // The cluster name.
    shared_ptr<string> instanceName_ {};
    // Indicates whether deletion protection is enabled.
    shared_ptr<string> isDeletionProtection_ {};
    // The lock type of the cluster.
    // > This parameter does not return a value.
    shared_ptr<string> lockMode_ {};
    // The major version.
    shared_ptr<string> mainVersion_ {};
    // The public endpoint.
    shared_ptr<string> outerEndpoint_ {};
    // The billing method. Valid values:
    // - **Prepaid**: subscription.
    // - **Postpaid**: pay-as-you-go.
    shared_ptr<string> payType_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The maximum reserved QPS.
    shared_ptr<string> reserverMaxQpsNum_ {};
    // The minimum reserved QPS.
    shared_ptr<string> reserverMinQpsNum_ {};
    // The ID of the resource group to which the resource belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The current status. Valid values:
    // - **CREATING**: being created.
    // - **ACTIVATION**: running.
    // - **DELETING**: being deleted.
    // - **RESTARTING**: being restarted.
    shared_ptr<string> status_ {};
    // The minor version upgrade status. Valid values:
    // - **YES**: An upgrade is available.
    // - **NO**: No upgrade is available.
    // - **PENDING**: An upgrade is in progress.
    shared_ptr<string> updateStatus_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the virtual private cloud (VPC) to which the instance belongs.
    shared_ptr<string> vpcId_ {};
    // The zone ID of the instance.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
