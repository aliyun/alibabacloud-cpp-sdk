// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERLESSINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERLESSINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class DescribeServerlessInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerlessInstanceResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateStatus, updateStatus_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerlessInstanceResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateStatus, updateStatus_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeServerlessInstanceResponseBody() = default ;
    DescribeServerlessInstanceResponseBody(const DescribeServerlessInstanceResponseBody &) = default ;
    DescribeServerlessInstanceResponseBody(DescribeServerlessInstanceResponseBody &&) = default ;
    DescribeServerlessInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerlessInstanceResponseBody() = default ;
    DescribeServerlessInstanceResponseBody& operator=(const DescribeServerlessInstanceResponseBody &) = default ;
    DescribeServerlessInstanceResponseBody& operator=(DescribeServerlessInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && return this->clusterType_ == nullptr && return this->createTime_ == nullptr && return this->cuSize_ == nullptr && return this->diskSize_ == nullptr && return this->expireTime_ == nullptr
        && return this->haType_ == nullptr && return this->hasUser_ == nullptr && return this->innerEndpoint_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->isDeletionProtection_ == nullptr && return this->lockMode_ == nullptr && return this->mainVersion_ == nullptr && return this->outerEndpoint_ == nullptr && return this->payType_ == nullptr
        && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->reserverMaxQpsNum_ == nullptr && return this->reserverMinQpsNum_ == nullptr && return this->status_ == nullptr
        && return this->updateStatus_ == nullptr && return this->vSwitchId_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline string autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, "") };
    inline DescribeServerlessInstanceResponseBody& setAutoRenew(string autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeServerlessInstanceResponseBody& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeServerlessInstanceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // cuSize Field Functions 
    bool hasCuSize() const { return this->cuSize_ != nullptr;};
    void deleteCuSize() { this->cuSize_ = nullptr;};
    inline string cuSize() const { DARABONBA_PTR_GET_DEFAULT(cuSize_, "") };
    inline DescribeServerlessInstanceResponseBody& setCuSize(string cuSize) { DARABONBA_PTR_SET_VALUE(cuSize_, cuSize) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline string diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, "") };
    inline DescribeServerlessInstanceResponseBody& setDiskSize(string diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeServerlessInstanceResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // haType Field Functions 
    bool hasHaType() const { return this->haType_ != nullptr;};
    void deleteHaType() { this->haType_ = nullptr;};
    inline string haType() const { DARABONBA_PTR_GET_DEFAULT(haType_, "") };
    inline DescribeServerlessInstanceResponseBody& setHaType(string haType) { DARABONBA_PTR_SET_VALUE(haType_, haType) };


    // hasUser Field Functions 
    bool hasHasUser() const { return this->hasUser_ != nullptr;};
    void deleteHasUser() { this->hasUser_ = nullptr;};
    inline string hasUser() const { DARABONBA_PTR_GET_DEFAULT(hasUser_, "") };
    inline DescribeServerlessInstanceResponseBody& setHasUser(string hasUser) { DARABONBA_PTR_SET_VALUE(hasUser_, hasUser) };


    // innerEndpoint Field Functions 
    bool hasInnerEndpoint() const { return this->innerEndpoint_ != nullptr;};
    void deleteInnerEndpoint() { this->innerEndpoint_ = nullptr;};
    inline string innerEndpoint() const { DARABONBA_PTR_GET_DEFAULT(innerEndpoint_, "") };
    inline DescribeServerlessInstanceResponseBody& setInnerEndpoint(string innerEndpoint) { DARABONBA_PTR_SET_VALUE(innerEndpoint_, innerEndpoint) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeServerlessInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeServerlessInstanceResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // isDeletionProtection Field Functions 
    bool hasIsDeletionProtection() const { return this->isDeletionProtection_ != nullptr;};
    void deleteIsDeletionProtection() { this->isDeletionProtection_ = nullptr;};
    inline string isDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(isDeletionProtection_, "") };
    inline DescribeServerlessInstanceResponseBody& setIsDeletionProtection(string isDeletionProtection) { DARABONBA_PTR_SET_VALUE(isDeletionProtection_, isDeletionProtection) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeServerlessInstanceResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // mainVersion Field Functions 
    bool hasMainVersion() const { return this->mainVersion_ != nullptr;};
    void deleteMainVersion() { this->mainVersion_ = nullptr;};
    inline string mainVersion() const { DARABONBA_PTR_GET_DEFAULT(mainVersion_, "") };
    inline DescribeServerlessInstanceResponseBody& setMainVersion(string mainVersion) { DARABONBA_PTR_SET_VALUE(mainVersion_, mainVersion) };


    // outerEndpoint Field Functions 
    bool hasOuterEndpoint() const { return this->outerEndpoint_ != nullptr;};
    void deleteOuterEndpoint() { this->outerEndpoint_ = nullptr;};
    inline string outerEndpoint() const { DARABONBA_PTR_GET_DEFAULT(outerEndpoint_, "") };
    inline DescribeServerlessInstanceResponseBody& setOuterEndpoint(string outerEndpoint) { DARABONBA_PTR_SET_VALUE(outerEndpoint_, outerEndpoint) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeServerlessInstanceResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeServerlessInstanceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeServerlessInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reserverMaxQpsNum Field Functions 
    bool hasReserverMaxQpsNum() const { return this->reserverMaxQpsNum_ != nullptr;};
    void deleteReserverMaxQpsNum() { this->reserverMaxQpsNum_ = nullptr;};
    inline string reserverMaxQpsNum() const { DARABONBA_PTR_GET_DEFAULT(reserverMaxQpsNum_, "") };
    inline DescribeServerlessInstanceResponseBody& setReserverMaxQpsNum(string reserverMaxQpsNum) { DARABONBA_PTR_SET_VALUE(reserverMaxQpsNum_, reserverMaxQpsNum) };


    // reserverMinQpsNum Field Functions 
    bool hasReserverMinQpsNum() const { return this->reserverMinQpsNum_ != nullptr;};
    void deleteReserverMinQpsNum() { this->reserverMinQpsNum_ = nullptr;};
    inline string reserverMinQpsNum() const { DARABONBA_PTR_GET_DEFAULT(reserverMinQpsNum_, "") };
    inline DescribeServerlessInstanceResponseBody& setReserverMinQpsNum(string reserverMinQpsNum) { DARABONBA_PTR_SET_VALUE(reserverMinQpsNum_, reserverMinQpsNum) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeServerlessInstanceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateStatus Field Functions 
    bool hasUpdateStatus() const { return this->updateStatus_ != nullptr;};
    void deleteUpdateStatus() { this->updateStatus_ = nullptr;};
    inline string updateStatus() const { DARABONBA_PTR_GET_DEFAULT(updateStatus_, "") };
    inline DescribeServerlessInstanceResponseBody& setUpdateStatus(string updateStatus) { DARABONBA_PTR_SET_VALUE(updateStatus_, updateStatus) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeServerlessInstanceResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeServerlessInstanceResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeServerlessInstanceResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> autoRenew_ = nullptr;
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> cuSize_ = nullptr;
    std::shared_ptr<string> diskSize_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> haType_ = nullptr;
    std::shared_ptr<string> hasUser_ = nullptr;
    std::shared_ptr<string> innerEndpoint_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> isDeletionProtection_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> mainVersion_ = nullptr;
    std::shared_ptr<string> outerEndpoint_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> reserverMaxQpsNum_ = nullptr;
    std::shared_ptr<string> reserverMinQpsNum_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> updateStatus_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
