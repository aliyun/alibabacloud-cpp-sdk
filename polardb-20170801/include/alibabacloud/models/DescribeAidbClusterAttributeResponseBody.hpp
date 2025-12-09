// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAIDBClusterAttributeResponseBodyDBNodes.hpp>
#include <alibabacloud/models/DescribeAIDBClusterAttributeResponseBodyEndpointList.hpp>
#include <alibabacloud/models/DescribeAIDBClusterAttributeResponseBodyVolumes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AiNodeType, aiNodeType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_TO_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_TO_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_TO_JSON(EcsSecurityGroupId, ecsSecurityGroupId_);
      DARABONBA_PTR_TO_JSON(EndpointList, endpointList_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Expired, expired_);
      DARABONBA_PTR_TO_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_TO_JSON(KVCacheInstanceId, KVCacheInstanceId_);
      DARABONBA_PTR_TO_JSON(KubeClusterId, kubeClusterId_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(MaxQPM, maxQPM_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunType, runType_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(Volumes, volumes_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneIds, zoneIds_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AiNodeType, aiNodeType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBClusterDescription, DBClusterDescription_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBClusterStatus, DBClusterStatus_);
      DARABONBA_PTR_FROM_JSON(DBNodes, DBNodes_);
      DARABONBA_PTR_FROM_JSON(DBVersion, DBVersion_);
      DARABONBA_PTR_FROM_JSON(EcsSecurityGroupId, ecsSecurityGroupId_);
      DARABONBA_PTR_FROM_JSON(EndpointList, endpointList_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Expired, expired_);
      DARABONBA_PTR_FROM_JSON(InternalIp, internalIp_);
      DARABONBA_PTR_FROM_JSON(KVCacheInstanceId, KVCacheInstanceId_);
      DARABONBA_PTR_FROM_JSON(KubeClusterId, kubeClusterId_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(MaxQPM, maxQPM_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunType, runType_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(Volumes, volumes_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneIds, zoneIds_);
    };
    DescribeAIDBClusterAttributeResponseBody() = default ;
    DescribeAIDBClusterAttributeResponseBody(const DescribeAIDBClusterAttributeResponseBody &) = default ;
    DescribeAIDBClusterAttributeResponseBody(DescribeAIDBClusterAttributeResponseBody &&) = default ;
    DescribeAIDBClusterAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterAttributeResponseBody() = default ;
    DescribeAIDBClusterAttributeResponseBody& operator=(const DescribeAIDBClusterAttributeResponseBody &) = default ;
    DescribeAIDBClusterAttributeResponseBody& operator=(DescribeAIDBClusterAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiNodeType_ == nullptr
        && return this->creationTime_ == nullptr && return this->DBClusterDescription_ == nullptr && return this->DBClusterId_ == nullptr && return this->DBClusterStatus_ == nullptr && return this->DBNodes_ == nullptr
        && return this->DBVersion_ == nullptr && return this->ecsSecurityGroupId_ == nullptr && return this->endpointList_ == nullptr && return this->expireTime_ == nullptr && return this->expired_ == nullptr
        && return this->internalIp_ == nullptr && return this->KVCacheInstanceId_ == nullptr && return this->kubeClusterId_ == nullptr && return this->lockMode_ == nullptr && return this->maxQPM_ == nullptr
        && return this->modelName_ == nullptr && return this->payType_ == nullptr && return this->publicIp_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->runType_ == nullptr && return this->storageType_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->volumes_ == nullptr
        && return this->zoneId_ == nullptr && return this->zoneIds_ == nullptr; };
    // aiNodeType Field Functions 
    bool hasAiNodeType() const { return this->aiNodeType_ != nullptr;};
    void deleteAiNodeType() { this->aiNodeType_ = nullptr;};
    inline string aiNodeType() const { DARABONBA_PTR_GET_DEFAULT(aiNodeType_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setAiNodeType(string aiNodeType) { DARABONBA_PTR_SET_VALUE(aiNodeType_, aiNodeType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBClusterDescription Field Functions 
    bool hasDBClusterDescription() const { return this->DBClusterDescription_ != nullptr;};
    void deleteDBClusterDescription() { this->DBClusterDescription_ = nullptr;};
    inline string DBClusterDescription() const { DARABONBA_PTR_GET_DEFAULT(DBClusterDescription_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setDBClusterDescription(string DBClusterDescription) { DARABONBA_PTR_SET_VALUE(DBClusterDescription_, DBClusterDescription) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBClusterStatus Field Functions 
    bool hasDBClusterStatus() const { return this->DBClusterStatus_ != nullptr;};
    void deleteDBClusterStatus() { this->DBClusterStatus_ = nullptr;};
    inline string DBClusterStatus() const { DARABONBA_PTR_GET_DEFAULT(DBClusterStatus_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setDBClusterStatus(string DBClusterStatus) { DARABONBA_PTR_SET_VALUE(DBClusterStatus_, DBClusterStatus) };


    // DBNodes Field Functions 
    bool hasDBNodes() const { return this->DBNodes_ != nullptr;};
    void deleteDBNodes() { this->DBNodes_ = nullptr;};
    inline const vector<DescribeAIDBClusterAttributeResponseBodyDBNodes> & DBNodes() const { DARABONBA_PTR_GET_CONST(DBNodes_, vector<DescribeAIDBClusterAttributeResponseBodyDBNodes>) };
    inline vector<DescribeAIDBClusterAttributeResponseBodyDBNodes> DBNodes() { DARABONBA_PTR_GET(DBNodes_, vector<DescribeAIDBClusterAttributeResponseBodyDBNodes>) };
    inline DescribeAIDBClusterAttributeResponseBody& setDBNodes(const vector<DescribeAIDBClusterAttributeResponseBodyDBNodes> & DBNodes) { DARABONBA_PTR_SET_VALUE(DBNodes_, DBNodes) };
    inline DescribeAIDBClusterAttributeResponseBody& setDBNodes(vector<DescribeAIDBClusterAttributeResponseBodyDBNodes> && DBNodes) { DARABONBA_PTR_SET_RVALUE(DBNodes_, DBNodes) };


    // DBVersion Field Functions 
    bool hasDBVersion() const { return this->DBVersion_ != nullptr;};
    void deleteDBVersion() { this->DBVersion_ = nullptr;};
    inline string DBVersion() const { DARABONBA_PTR_GET_DEFAULT(DBVersion_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setDBVersion(string DBVersion) { DARABONBA_PTR_SET_VALUE(DBVersion_, DBVersion) };


    // ecsSecurityGroupId Field Functions 
    bool hasEcsSecurityGroupId() const { return this->ecsSecurityGroupId_ != nullptr;};
    void deleteEcsSecurityGroupId() { this->ecsSecurityGroupId_ = nullptr;};
    inline string ecsSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(ecsSecurityGroupId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setEcsSecurityGroupId(string ecsSecurityGroupId) { DARABONBA_PTR_SET_VALUE(ecsSecurityGroupId_, ecsSecurityGroupId) };


    // endpointList Field Functions 
    bool hasEndpointList() const { return this->endpointList_ != nullptr;};
    void deleteEndpointList() { this->endpointList_ = nullptr;};
    inline const vector<DescribeAIDBClusterAttributeResponseBodyEndpointList> & endpointList() const { DARABONBA_PTR_GET_CONST(endpointList_, vector<DescribeAIDBClusterAttributeResponseBodyEndpointList>) };
    inline vector<DescribeAIDBClusterAttributeResponseBodyEndpointList> endpointList() { DARABONBA_PTR_GET(endpointList_, vector<DescribeAIDBClusterAttributeResponseBodyEndpointList>) };
    inline DescribeAIDBClusterAttributeResponseBody& setEndpointList(const vector<DescribeAIDBClusterAttributeResponseBodyEndpointList> & endpointList) { DARABONBA_PTR_SET_VALUE(endpointList_, endpointList) };
    inline DescribeAIDBClusterAttributeResponseBody& setEndpointList(vector<DescribeAIDBClusterAttributeResponseBodyEndpointList> && endpointList) { DARABONBA_PTR_SET_RVALUE(endpointList_, endpointList) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expired Field Functions 
    bool hasExpired() const { return this->expired_ != nullptr;};
    void deleteExpired() { this->expired_ = nullptr;};
    inline bool expired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
    inline DescribeAIDBClusterAttributeResponseBody& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


    // internalIp Field Functions 
    bool hasInternalIp() const { return this->internalIp_ != nullptr;};
    void deleteInternalIp() { this->internalIp_ = nullptr;};
    inline string internalIp() const { DARABONBA_PTR_GET_DEFAULT(internalIp_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setInternalIp(string internalIp) { DARABONBA_PTR_SET_VALUE(internalIp_, internalIp) };


    // KVCacheInstanceId Field Functions 
    bool hasKVCacheInstanceId() const { return this->KVCacheInstanceId_ != nullptr;};
    void deleteKVCacheInstanceId() { this->KVCacheInstanceId_ = nullptr;};
    inline string KVCacheInstanceId() const { DARABONBA_PTR_GET_DEFAULT(KVCacheInstanceId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setKVCacheInstanceId(string KVCacheInstanceId) { DARABONBA_PTR_SET_VALUE(KVCacheInstanceId_, KVCacheInstanceId) };


    // kubeClusterId Field Functions 
    bool hasKubeClusterId() const { return this->kubeClusterId_ != nullptr;};
    void deleteKubeClusterId() { this->kubeClusterId_ = nullptr;};
    inline string kubeClusterId() const { DARABONBA_PTR_GET_DEFAULT(kubeClusterId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setKubeClusterId(string kubeClusterId) { DARABONBA_PTR_SET_VALUE(kubeClusterId_, kubeClusterId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // maxQPM Field Functions 
    bool hasMaxQPM() const { return this->maxQPM_ != nullptr;};
    void deleteMaxQPM() { this->maxQPM_ = nullptr;};
    inline string maxQPM() const { DARABONBA_PTR_GET_DEFAULT(maxQPM_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setMaxQPM(string maxQPM) { DARABONBA_PTR_SET_VALUE(maxQPM_, maxQPM) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runType Field Functions 
    bool hasRunType() const { return this->runType_ != nullptr;};
    void deleteRunType() { this->runType_ = nullptr;};
    inline string runType() const { DARABONBA_PTR_GET_DEFAULT(runType_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setRunType(string runType) { DARABONBA_PTR_SET_VALUE(runType_, runType) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // volumes Field Functions 
    bool hasVolumes() const { return this->volumes_ != nullptr;};
    void deleteVolumes() { this->volumes_ = nullptr;};
    inline const vector<DescribeAIDBClusterAttributeResponseBodyVolumes> & volumes() const { DARABONBA_PTR_GET_CONST(volumes_, vector<DescribeAIDBClusterAttributeResponseBodyVolumes>) };
    inline vector<DescribeAIDBClusterAttributeResponseBodyVolumes> volumes() { DARABONBA_PTR_GET(volumes_, vector<DescribeAIDBClusterAttributeResponseBodyVolumes>) };
    inline DescribeAIDBClusterAttributeResponseBody& setVolumes(const vector<DescribeAIDBClusterAttributeResponseBodyVolumes> & volumes) { DARABONBA_PTR_SET_VALUE(volumes_, volumes) };
    inline DescribeAIDBClusterAttributeResponseBody& setVolumes(vector<DescribeAIDBClusterAttributeResponseBodyVolumes> && volumes) { DARABONBA_PTR_SET_RVALUE(volumes_, volumes) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneIds Field Functions 
    bool hasZoneIds() const { return this->zoneIds_ != nullptr;};
    void deleteZoneIds() { this->zoneIds_ = nullptr;};
    inline string zoneIds() const { DARABONBA_PTR_GET_DEFAULT(zoneIds_, "") };
    inline DescribeAIDBClusterAttributeResponseBody& setZoneIds(string zoneIds) { DARABONBA_PTR_SET_VALUE(zoneIds_, zoneIds) };


  protected:
    std::shared_ptr<string> aiNodeType_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> DBClusterDescription_ = nullptr;
    std::shared_ptr<string> DBClusterId_ = nullptr;
    std::shared_ptr<string> DBClusterStatus_ = nullptr;
    std::shared_ptr<vector<DescribeAIDBClusterAttributeResponseBodyDBNodes>> DBNodes_ = nullptr;
    std::shared_ptr<string> DBVersion_ = nullptr;
    std::shared_ptr<string> ecsSecurityGroupId_ = nullptr;
    std::shared_ptr<vector<DescribeAIDBClusterAttributeResponseBodyEndpointList>> endpointList_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<bool> expired_ = nullptr;
    std::shared_ptr<string> internalIp_ = nullptr;
    std::shared_ptr<string> KVCacheInstanceId_ = nullptr;
    std::shared_ptr<string> kubeClusterId_ = nullptr;
    std::shared_ptr<string> lockMode_ = nullptr;
    std::shared_ptr<string> maxQPM_ = nullptr;
    std::shared_ptr<string> modelName_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> publicIp_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> runType_ = nullptr;
    std::shared_ptr<string> storageType_ = nullptr;
    std::shared_ptr<string> VPCId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<vector<DescribeAIDBClusterAttributeResponseBodyVolumes>> volumes_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
    std::shared_ptr<string> zoneIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
