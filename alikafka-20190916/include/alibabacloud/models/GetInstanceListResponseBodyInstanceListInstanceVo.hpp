// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVO_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig.hpp>
#include <alibabacloud/models/GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents.hpp>
#include <alibabacloud/models/GetInstanceListResponseBodyInstanceListInstanceVOTags.hpp>
#include <alibabacloud/models/GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo.hpp>
#include <alibabacloud/models/GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetInstanceListResponseBodyInstanceListInstanceVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListResponseBodyInstanceListInstanceVO& obj) { 
      DARABONBA_PTR_TO_JSON(AllConfig, allConfig_);
      DARABONBA_PTR_TO_JSON(AutoCreateGroupEnable, autoCreateGroupEnable_);
      DARABONBA_PTR_TO_JSON(AutoCreateTopicEnable, autoCreateTopicEnable_);
      DARABONBA_PTR_TO_JSON(BackupZoneId, backupZoneId_);
      DARABONBA_PTR_TO_JSON(ConfluentConfig, confluentConfig_);
      DARABONBA_PTR_TO_JSON(ConfluentInstanceComponents, confluentInstanceComponents_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultPartitionNum, defaultPartitionNum_);
      DARABONBA_PTR_TO_JSON(DeployType, deployType_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(DomainEndpoint, domainEndpoint_);
      DARABONBA_PTR_TO_JSON(EipMax, eipMax_);
      DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IoMax, ioMax_);
      DARABONBA_PTR_TO_JSON(IoMaxRead, ioMaxRead_);
      DARABONBA_PTR_TO_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_TO_JSON(IoMaxWrite, ioMaxWrite_);
      DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_TO_JSON(MsgRetain, msgRetain_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PaidType, paidType_);
      DARABONBA_PTR_TO_JSON(RecommendedPartitionCount, recommendedPartitionCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
      DARABONBA_PTR_TO_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SaslDomainEndpoint, saslDomainEndpoint_);
      DARABONBA_PTR_TO_JSON(SaslEndPoint, saslEndPoint_);
      DARABONBA_PTR_TO_JSON(ScheduledRetirement, scheduledRetirement_);
      DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_TO_JSON(Series, series_);
      DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_TO_JSON(SpecType, specType_);
      DARABONBA_PTR_TO_JSON(SslDomainEndpoint, sslDomainEndpoint_);
      DARABONBA_PTR_TO_JSON(SslEndPoint, sslEndPoint_);
      DARABONBA_PTR_TO_JSON(StandardZoneId, standardZoneId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TopicNumLimit, topicNumLimit_);
      DARABONBA_PTR_TO_JSON(UpgradeServiceDetailInfo, upgradeServiceDetailInfo_);
      DARABONBA_PTR_TO_JSON(UsedGroupCount, usedGroupCount_);
      DARABONBA_PTR_TO_JSON(UsedPartitionCount, usedPartitionCount_);
      DARABONBA_PTR_TO_JSON(UsedTopicCount, usedTopicCount_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(ViewInstanceStatusCode, viewInstanceStatusCode_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcSaslDomainEndpoint, vpcSaslDomainEndpoint_);
      DARABONBA_PTR_TO_JSON(VpcSaslEndPoint, vpcSaslEndPoint_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListResponseBodyInstanceListInstanceVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AllConfig, allConfig_);
      DARABONBA_PTR_FROM_JSON(AutoCreateGroupEnable, autoCreateGroupEnable_);
      DARABONBA_PTR_FROM_JSON(AutoCreateTopicEnable, autoCreateTopicEnable_);
      DARABONBA_PTR_FROM_JSON(BackupZoneId, backupZoneId_);
      DARABONBA_PTR_FROM_JSON(ConfluentConfig, confluentConfig_);
      DARABONBA_PTR_FROM_JSON(ConfluentInstanceComponents, confluentInstanceComponents_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultPartitionNum, defaultPartitionNum_);
      DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(DomainEndpoint, domainEndpoint_);
      DARABONBA_PTR_FROM_JSON(EipMax, eipMax_);
      DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IoMax, ioMax_);
      DARABONBA_PTR_FROM_JSON(IoMaxRead, ioMaxRead_);
      DARABONBA_PTR_FROM_JSON(IoMaxSpec, ioMaxSpec_);
      DARABONBA_PTR_FROM_JSON(IoMaxWrite, ioMaxWrite_);
      DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
      DARABONBA_PTR_FROM_JSON(MsgRetain, msgRetain_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PaidType, paidType_);
      DARABONBA_PTR_FROM_JSON(RecommendedPartitionCount, recommendedPartitionCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
      DARABONBA_PTR_FROM_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SaslDomainEndpoint, saslDomainEndpoint_);
      DARABONBA_PTR_FROM_JSON(SaslEndPoint, saslEndPoint_);
      DARABONBA_PTR_FROM_JSON(ScheduledRetirement, scheduledRetirement_);
      DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
      DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
      DARABONBA_PTR_FROM_JSON(SpecType, specType_);
      DARABONBA_PTR_FROM_JSON(SslDomainEndpoint, sslDomainEndpoint_);
      DARABONBA_PTR_FROM_JSON(SslEndPoint, sslEndPoint_);
      DARABONBA_PTR_FROM_JSON(StandardZoneId, standardZoneId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TopicNumLimit, topicNumLimit_);
      DARABONBA_PTR_FROM_JSON(UpgradeServiceDetailInfo, upgradeServiceDetailInfo_);
      DARABONBA_PTR_FROM_JSON(UsedGroupCount, usedGroupCount_);
      DARABONBA_PTR_FROM_JSON(UsedPartitionCount, usedPartitionCount_);
      DARABONBA_PTR_FROM_JSON(UsedTopicCount, usedTopicCount_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(ViewInstanceStatusCode, viewInstanceStatusCode_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcSaslDomainEndpoint, vpcSaslDomainEndpoint_);
      DARABONBA_PTR_FROM_JSON(VpcSaslEndPoint, vpcSaslEndPoint_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetInstanceListResponseBodyInstanceListInstanceVO() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVO(const GetInstanceListResponseBodyInstanceListInstanceVO &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVO(GetInstanceListResponseBodyInstanceListInstanceVO &&) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListResponseBodyInstanceListInstanceVO() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVO& operator=(const GetInstanceListResponseBodyInstanceListInstanceVO &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVO& operator=(GetInstanceListResponseBodyInstanceListInstanceVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allConfig_ == nullptr
        && return this->autoCreateGroupEnable_ == nullptr && return this->autoCreateTopicEnable_ == nullptr && return this->backupZoneId_ == nullptr && return this->confluentConfig_ == nullptr && return this->confluentInstanceComponents_ == nullptr
        && return this->createTime_ == nullptr && return this->defaultPartitionNum_ == nullptr && return this->deployType_ == nullptr && return this->diskSize_ == nullptr && return this->diskType_ == nullptr
        && return this->domainEndpoint_ == nullptr && return this->eipMax_ == nullptr && return this->endPoint_ == nullptr && return this->expiredTime_ == nullptr && return this->instanceId_ == nullptr
        && return this->ioMax_ == nullptr && return this->ioMaxRead_ == nullptr && return this->ioMaxSpec_ == nullptr && return this->ioMaxWrite_ == nullptr && return this->kmsKeyId_ == nullptr
        && return this->msgRetain_ == nullptr && return this->name_ == nullptr && return this->paidType_ == nullptr && return this->recommendedPartitionCount_ == nullptr && return this->regionId_ == nullptr
        && return this->reservedPublishCapacity_ == nullptr && return this->reservedSubscribeCapacity_ == nullptr && return this->resourceGroupId_ == nullptr && return this->saslDomainEndpoint_ == nullptr && return this->saslEndPoint_ == nullptr
        && return this->scheduledRetirement_ == nullptr && return this->securityGroup_ == nullptr && return this->series_ == nullptr && return this->serviceStatus_ == nullptr && return this->specType_ == nullptr
        && return this->sslDomainEndpoint_ == nullptr && return this->sslEndPoint_ == nullptr && return this->standardZoneId_ == nullptr && return this->tags_ == nullptr && return this->topicNumLimit_ == nullptr
        && return this->upgradeServiceDetailInfo_ == nullptr && return this->usedGroupCount_ == nullptr && return this->usedPartitionCount_ == nullptr && return this->usedTopicCount_ == nullptr && return this->vSwitchId_ == nullptr
        && return this->vSwitchIds_ == nullptr && return this->viewInstanceStatusCode_ == nullptr && return this->vpcId_ == nullptr && return this->vpcSaslDomainEndpoint_ == nullptr && return this->vpcSaslEndPoint_ == nullptr
        && return this->zoneId_ == nullptr; };
    // allConfig Field Functions 
    bool hasAllConfig() const { return this->allConfig_ != nullptr;};
    void deleteAllConfig() { this->allConfig_ = nullptr;};
    inline string allConfig() const { DARABONBA_PTR_GET_DEFAULT(allConfig_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setAllConfig(string allConfig) { DARABONBA_PTR_SET_VALUE(allConfig_, allConfig) };


    // autoCreateGroupEnable Field Functions 
    bool hasAutoCreateGroupEnable() const { return this->autoCreateGroupEnable_ != nullptr;};
    void deleteAutoCreateGroupEnable() { this->autoCreateGroupEnable_ = nullptr;};
    inline bool autoCreateGroupEnable() const { DARABONBA_PTR_GET_DEFAULT(autoCreateGroupEnable_, false) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setAutoCreateGroupEnable(bool autoCreateGroupEnable) { DARABONBA_PTR_SET_VALUE(autoCreateGroupEnable_, autoCreateGroupEnable) };


    // autoCreateTopicEnable Field Functions 
    bool hasAutoCreateTopicEnable() const { return this->autoCreateTopicEnable_ != nullptr;};
    void deleteAutoCreateTopicEnable() { this->autoCreateTopicEnable_ = nullptr;};
    inline bool autoCreateTopicEnable() const { DARABONBA_PTR_GET_DEFAULT(autoCreateTopicEnable_, false) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setAutoCreateTopicEnable(bool autoCreateTopicEnable) { DARABONBA_PTR_SET_VALUE(autoCreateTopicEnable_, autoCreateTopicEnable) };


    // backupZoneId Field Functions 
    bool hasBackupZoneId() const { return this->backupZoneId_ != nullptr;};
    void deleteBackupZoneId() { this->backupZoneId_ = nullptr;};
    inline string backupZoneId() const { DARABONBA_PTR_GET_DEFAULT(backupZoneId_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setBackupZoneId(string backupZoneId) { DARABONBA_PTR_SET_VALUE(backupZoneId_, backupZoneId) };


    // confluentConfig Field Functions 
    bool hasConfluentConfig() const { return this->confluentConfig_ != nullptr;};
    void deleteConfluentConfig() { this->confluentConfig_ = nullptr;};
    inline const Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig & confluentConfig() const { DARABONBA_PTR_GET_CONST(confluentConfig_, Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig) };
    inline Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig confluentConfig() { DARABONBA_PTR_GET(confluentConfig_, Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setConfluentConfig(const Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig & confluentConfig) { DARABONBA_PTR_SET_VALUE(confluentConfig_, confluentConfig) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setConfluentConfig(Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig && confluentConfig) { DARABONBA_PTR_SET_RVALUE(confluentConfig_, confluentConfig) };


    // confluentInstanceComponents Field Functions 
    bool hasConfluentInstanceComponents() const { return this->confluentInstanceComponents_ != nullptr;};
    void deleteConfluentInstanceComponents() { this->confluentInstanceComponents_ = nullptr;};
    inline const Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents & confluentInstanceComponents() const { DARABONBA_PTR_GET_CONST(confluentInstanceComponents_, Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents) };
    inline Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents confluentInstanceComponents() { DARABONBA_PTR_GET(confluentInstanceComponents_, Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setConfluentInstanceComponents(const Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents & confluentInstanceComponents) { DARABONBA_PTR_SET_VALUE(confluentInstanceComponents_, confluentInstanceComponents) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setConfluentInstanceComponents(Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents && confluentInstanceComponents) { DARABONBA_PTR_SET_RVALUE(confluentInstanceComponents_, confluentInstanceComponents) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultPartitionNum Field Functions 
    bool hasDefaultPartitionNum() const { return this->defaultPartitionNum_ != nullptr;};
    void deleteDefaultPartitionNum() { this->defaultPartitionNum_ = nullptr;};
    inline int32_t defaultPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(defaultPartitionNum_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setDefaultPartitionNum(int32_t defaultPartitionNum) { DARABONBA_PTR_SET_VALUE(defaultPartitionNum_, defaultPartitionNum) };


    // deployType Field Functions 
    bool hasDeployType() const { return this->deployType_ != nullptr;};
    void deleteDeployType() { this->deployType_ = nullptr;};
    inline int32_t deployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline int32_t diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setDiskType(int32_t diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // domainEndpoint Field Functions 
    bool hasDomainEndpoint() const { return this->domainEndpoint_ != nullptr;};
    void deleteDomainEndpoint() { this->domainEndpoint_ = nullptr;};
    inline string domainEndpoint() const { DARABONBA_PTR_GET_DEFAULT(domainEndpoint_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setDomainEndpoint(string domainEndpoint) { DARABONBA_PTR_SET_VALUE(domainEndpoint_, domainEndpoint) };


    // eipMax Field Functions 
    bool hasEipMax() const { return this->eipMax_ != nullptr;};
    void deleteEipMax() { this->eipMax_ = nullptr;};
    inline int32_t eipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


    // endPoint Field Functions 
    bool hasEndPoint() const { return this->endPoint_ != nullptr;};
    void deleteEndPoint() { this->endPoint_ = nullptr;};
    inline string endPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline int64_t expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ioMax Field Functions 
    bool hasIoMax() const { return this->ioMax_ != nullptr;};
    void deleteIoMax() { this->ioMax_ = nullptr;};
    inline int32_t ioMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


    // ioMaxRead Field Functions 
    bool hasIoMaxRead() const { return this->ioMaxRead_ != nullptr;};
    void deleteIoMaxRead() { this->ioMaxRead_ = nullptr;};
    inline int32_t ioMaxRead() const { DARABONBA_PTR_GET_DEFAULT(ioMaxRead_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setIoMaxRead(int32_t ioMaxRead) { DARABONBA_PTR_SET_VALUE(ioMaxRead_, ioMaxRead) };


    // ioMaxSpec Field Functions 
    bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
    void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
    inline string ioMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


    // ioMaxWrite Field Functions 
    bool hasIoMaxWrite() const { return this->ioMaxWrite_ != nullptr;};
    void deleteIoMaxWrite() { this->ioMaxWrite_ = nullptr;};
    inline int32_t ioMaxWrite() const { DARABONBA_PTR_GET_DEFAULT(ioMaxWrite_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setIoMaxWrite(int32_t ioMaxWrite) { DARABONBA_PTR_SET_VALUE(ioMaxWrite_, ioMaxWrite) };


    // kmsKeyId Field Functions 
    bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
    void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
    inline string kmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


    // msgRetain Field Functions 
    bool hasMsgRetain() const { return this->msgRetain_ != nullptr;};
    void deleteMsgRetain() { this->msgRetain_ = nullptr;};
    inline int32_t msgRetain() const { DARABONBA_PTR_GET_DEFAULT(msgRetain_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setMsgRetain(int32_t msgRetain) { DARABONBA_PTR_SET_VALUE(msgRetain_, msgRetain) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paidType Field Functions 
    bool hasPaidType() const { return this->paidType_ != nullptr;};
    void deletePaidType() { this->paidType_ = nullptr;};
    inline int32_t paidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


    // recommendedPartitionCount Field Functions 
    bool hasRecommendedPartitionCount() const { return this->recommendedPartitionCount_ != nullptr;};
    void deleteRecommendedPartitionCount() { this->recommendedPartitionCount_ = nullptr;};
    inline int32_t recommendedPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(recommendedPartitionCount_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setRecommendedPartitionCount(int32_t recommendedPartitionCount) { DARABONBA_PTR_SET_VALUE(recommendedPartitionCount_, recommendedPartitionCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reservedPublishCapacity Field Functions 
    bool hasReservedPublishCapacity() const { return this->reservedPublishCapacity_ != nullptr;};
    void deleteReservedPublishCapacity() { this->reservedPublishCapacity_ = nullptr;};
    inline int32_t reservedPublishCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedPublishCapacity_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setReservedPublishCapacity(int32_t reservedPublishCapacity) { DARABONBA_PTR_SET_VALUE(reservedPublishCapacity_, reservedPublishCapacity) };


    // reservedSubscribeCapacity Field Functions 
    bool hasReservedSubscribeCapacity() const { return this->reservedSubscribeCapacity_ != nullptr;};
    void deleteReservedSubscribeCapacity() { this->reservedSubscribeCapacity_ = nullptr;};
    inline int32_t reservedSubscribeCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedSubscribeCapacity_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setReservedSubscribeCapacity(int32_t reservedSubscribeCapacity) { DARABONBA_PTR_SET_VALUE(reservedSubscribeCapacity_, reservedSubscribeCapacity) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // saslDomainEndpoint Field Functions 
    bool hasSaslDomainEndpoint() const { return this->saslDomainEndpoint_ != nullptr;};
    void deleteSaslDomainEndpoint() { this->saslDomainEndpoint_ = nullptr;};
    inline string saslDomainEndpoint() const { DARABONBA_PTR_GET_DEFAULT(saslDomainEndpoint_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setSaslDomainEndpoint(string saslDomainEndpoint) { DARABONBA_PTR_SET_VALUE(saslDomainEndpoint_, saslDomainEndpoint) };


    // saslEndPoint Field Functions 
    bool hasSaslEndPoint() const { return this->saslEndPoint_ != nullptr;};
    void deleteSaslEndPoint() { this->saslEndPoint_ = nullptr;};
    inline string saslEndPoint() const { DARABONBA_PTR_GET_DEFAULT(saslEndPoint_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setSaslEndPoint(string saslEndPoint) { DARABONBA_PTR_SET_VALUE(saslEndPoint_, saslEndPoint) };


    // scheduledRetirement Field Functions 
    bool hasScheduledRetirement() const { return this->scheduledRetirement_ != nullptr;};
    void deleteScheduledRetirement() { this->scheduledRetirement_ = nullptr;};
    inline bool scheduledRetirement() const { DARABONBA_PTR_GET_DEFAULT(scheduledRetirement_, false) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setScheduledRetirement(bool scheduledRetirement) { DARABONBA_PTR_SET_VALUE(scheduledRetirement_, scheduledRetirement) };


    // securityGroup Field Functions 
    bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
    void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
    inline string securityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string series() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


    // serviceStatus Field Functions 
    bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
    void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
    inline int32_t serviceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setServiceStatus(int32_t serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


    // specType Field Functions 
    bool hasSpecType() const { return this->specType_ != nullptr;};
    void deleteSpecType() { this->specType_ = nullptr;};
    inline string specType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


    // sslDomainEndpoint Field Functions 
    bool hasSslDomainEndpoint() const { return this->sslDomainEndpoint_ != nullptr;};
    void deleteSslDomainEndpoint() { this->sslDomainEndpoint_ = nullptr;};
    inline string sslDomainEndpoint() const { DARABONBA_PTR_GET_DEFAULT(sslDomainEndpoint_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setSslDomainEndpoint(string sslDomainEndpoint) { DARABONBA_PTR_SET_VALUE(sslDomainEndpoint_, sslDomainEndpoint) };


    // sslEndPoint Field Functions 
    bool hasSslEndPoint() const { return this->sslEndPoint_ != nullptr;};
    void deleteSslEndPoint() { this->sslEndPoint_ = nullptr;};
    inline string sslEndPoint() const { DARABONBA_PTR_GET_DEFAULT(sslEndPoint_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setSslEndPoint(string sslEndPoint) { DARABONBA_PTR_SET_VALUE(sslEndPoint_, sslEndPoint) };


    // standardZoneId Field Functions 
    bool hasStandardZoneId() const { return this->standardZoneId_ != nullptr;};
    void deleteStandardZoneId() { this->standardZoneId_ = nullptr;};
    inline string standardZoneId() const { DARABONBA_PTR_GET_DEFAULT(standardZoneId_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setStandardZoneId(string standardZoneId) { DARABONBA_PTR_SET_VALUE(standardZoneId_, standardZoneId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::GetInstanceListResponseBodyInstanceListInstanceVOTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::GetInstanceListResponseBodyInstanceListInstanceVOTags) };
    inline Models::GetInstanceListResponseBodyInstanceListInstanceVOTags tags() { DARABONBA_PTR_GET(tags_, Models::GetInstanceListResponseBodyInstanceListInstanceVOTags) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setTags(const Models::GetInstanceListResponseBodyInstanceListInstanceVOTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setTags(Models::GetInstanceListResponseBodyInstanceListInstanceVOTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // topicNumLimit Field Functions 
    bool hasTopicNumLimit() const { return this->topicNumLimit_ != nullptr;};
    void deleteTopicNumLimit() { this->topicNumLimit_ = nullptr;};
    inline int32_t topicNumLimit() const { DARABONBA_PTR_GET_DEFAULT(topicNumLimit_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setTopicNumLimit(int32_t topicNumLimit) { DARABONBA_PTR_SET_VALUE(topicNumLimit_, topicNumLimit) };


    // upgradeServiceDetailInfo Field Functions 
    bool hasUpgradeServiceDetailInfo() const { return this->upgradeServiceDetailInfo_ != nullptr;};
    void deleteUpgradeServiceDetailInfo() { this->upgradeServiceDetailInfo_ = nullptr;};
    inline const Models::GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo & upgradeServiceDetailInfo() const { DARABONBA_PTR_GET_CONST(upgradeServiceDetailInfo_, Models::GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo) };
    inline Models::GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo upgradeServiceDetailInfo() { DARABONBA_PTR_GET(upgradeServiceDetailInfo_, Models::GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setUpgradeServiceDetailInfo(const Models::GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo & upgradeServiceDetailInfo) { DARABONBA_PTR_SET_VALUE(upgradeServiceDetailInfo_, upgradeServiceDetailInfo) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setUpgradeServiceDetailInfo(Models::GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo && upgradeServiceDetailInfo) { DARABONBA_PTR_SET_RVALUE(upgradeServiceDetailInfo_, upgradeServiceDetailInfo) };


    // usedGroupCount Field Functions 
    bool hasUsedGroupCount() const { return this->usedGroupCount_ != nullptr;};
    void deleteUsedGroupCount() { this->usedGroupCount_ = nullptr;};
    inline int32_t usedGroupCount() const { DARABONBA_PTR_GET_DEFAULT(usedGroupCount_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setUsedGroupCount(int32_t usedGroupCount) { DARABONBA_PTR_SET_VALUE(usedGroupCount_, usedGroupCount) };


    // usedPartitionCount Field Functions 
    bool hasUsedPartitionCount() const { return this->usedPartitionCount_ != nullptr;};
    void deleteUsedPartitionCount() { this->usedPartitionCount_ = nullptr;};
    inline int32_t usedPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(usedPartitionCount_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setUsedPartitionCount(int32_t usedPartitionCount) { DARABONBA_PTR_SET_VALUE(usedPartitionCount_, usedPartitionCount) };


    // usedTopicCount Field Functions 
    bool hasUsedTopicCount() const { return this->usedTopicCount_ != nullptr;};
    void deleteUsedTopicCount() { this->usedTopicCount_ = nullptr;};
    inline int32_t usedTopicCount() const { DARABONBA_PTR_GET_DEFAULT(usedTopicCount_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setUsedTopicCount(int32_t usedTopicCount) { DARABONBA_PTR_SET_VALUE(usedTopicCount_, usedTopicCount) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const Models::GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, Models::GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds) };
    inline Models::GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, Models::GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setVSwitchIds(const Models::GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setVSwitchIds(Models::GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // viewInstanceStatusCode Field Functions 
    bool hasViewInstanceStatusCode() const { return this->viewInstanceStatusCode_ != nullptr;};
    void deleteViewInstanceStatusCode() { this->viewInstanceStatusCode_ = nullptr;};
    inline int32_t viewInstanceStatusCode() const { DARABONBA_PTR_GET_DEFAULT(viewInstanceStatusCode_, 0) };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setViewInstanceStatusCode(int32_t viewInstanceStatusCode) { DARABONBA_PTR_SET_VALUE(viewInstanceStatusCode_, viewInstanceStatusCode) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcSaslDomainEndpoint Field Functions 
    bool hasVpcSaslDomainEndpoint() const { return this->vpcSaslDomainEndpoint_ != nullptr;};
    void deleteVpcSaslDomainEndpoint() { this->vpcSaslDomainEndpoint_ = nullptr;};
    inline string vpcSaslDomainEndpoint() const { DARABONBA_PTR_GET_DEFAULT(vpcSaslDomainEndpoint_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setVpcSaslDomainEndpoint(string vpcSaslDomainEndpoint) { DARABONBA_PTR_SET_VALUE(vpcSaslDomainEndpoint_, vpcSaslDomainEndpoint) };


    // vpcSaslEndPoint Field Functions 
    bool hasVpcSaslEndPoint() const { return this->vpcSaslEndPoint_ != nullptr;};
    void deleteVpcSaslEndPoint() { this->vpcSaslEndPoint_ = nullptr;};
    inline string vpcSaslEndPoint() const { DARABONBA_PTR_GET_DEFAULT(vpcSaslEndPoint_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setVpcSaslEndPoint(string vpcSaslEndPoint) { DARABONBA_PTR_SET_VALUE(vpcSaslEndPoint_, vpcSaslEndPoint) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVO& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The configurations of the deployed ApsaraMQ for Kafka instance.
    std::shared_ptr<string> allConfig_ = nullptr;
    // Indicates whether the flexible group creation feature is enabled.
    std::shared_ptr<bool> autoCreateGroupEnable_ = nullptr;
    // Indicates whether the automatic topic creation feature is enabled.
    std::shared_ptr<bool> autoCreateTopicEnable_ = nullptr;
    // The ID of the secondary zone.
    std::shared_ptr<string> backupZoneId_ = nullptr;
    // The parameters that are returned for the ApsaraMQ for Confluent instance.
    std::shared_ptr<Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentConfig> confluentConfig_ = nullptr;
    std::shared_ptr<Models::GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponents> confluentInstanceComponents_ = nullptr;
    // The time when the instance was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The number of partitions in a topic that is automatically created.
    std::shared_ptr<int32_t> defaultPartitionNum_ = nullptr;
    // The type of the network in which the instance is deployed. Valid values:
    // 
    // *   **4**: Internet and VPC
    // *   **5**: VPC
    std::shared_ptr<int32_t> deployType_ = nullptr;
    // The disk size. Unit: GB
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    // The disk type of the instance. Valid values:
    // 
    // *   **0**: ultra disk
    // *   **1**: standard SSD
    std::shared_ptr<int32_t> diskType_ = nullptr;
    // The default endpoint of the instance in domain name mode. ApsaraMQ for Kafka instances support endpoints in domain name mode and IP address mode.
    // 
    // *   Endpoints in domain name mode: An endpoint in this mode consists of the domain name of the instance and a port number. The format of an endpoint in this mode is `{Instance domain name}:{Port number}`.
    // *   Endpoints in IP address mode: An endpoint in this mode consists of the IP address of the broker and a port number. The format of an endpoint in this mode is `{Broker IP address}:{Port number}`.
    std::shared_ptr<string> domainEndpoint_ = nullptr;
    // The maximum Internet traffic in the instance.
    std::shared_ptr<int32_t> eipMax_ = nullptr;
    // The default endpoint of the instance in IP address mode. ApsaraMQ for Kafka instances support endpoints in domain name mode and IP address mode.
    // 
    // *   Endpoints in domain name mode: An endpoint in this mode consists of the domain name of the instance and a port number. The format of an endpoint in this mode is `{Instance domain name}:{Port number}`.
    // *   Endpoints in IP address mode: An endpoint in this mode consists of the IP address of the broker and a port number. The format of an endpoint in this mode is `{Broker IP address}:{Port number}`.
    std::shared_ptr<string> endPoint_ = nullptr;
    // The time when the instance expires. Unit: milliseconds.
    std::shared_ptr<int64_t> expiredTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The maximum traffic in the instance.
    std::shared_ptr<int32_t> ioMax_ = nullptr;
    // The maximum read traffic in the instance. Unit: Mbit/s.
    std::shared_ptr<int32_t> ioMaxRead_ = nullptr;
    // The traffic specification.
    std::shared_ptr<string> ioMaxSpec_ = nullptr;
    // The maximum write traffic. Unit: Mbit/s.
    std::shared_ptr<int32_t> ioMaxWrite_ = nullptr;
    // The ID of the key that is used for disk encryption in the region where the instance is deployed.
    std::shared_ptr<string> kmsKeyId_ = nullptr;
    // The retention period of messages in the instance. Unit: hours.
    std::shared_ptr<int32_t> msgRetain_ = nullptr;
    // The instance name.
    std::shared_ptr<string> name_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   **0**: the subscription billing method
    // *   **1**: the pay-as-you-go billing method
    // *   **3**: the pay-as-you-go billing method for serverless ApsaraMQ for Kafka V3 instances
    // *   **4**: the pay-as-you-go billing method for ApsaraMQ for Confluent instances
    std::shared_ptr<int32_t> paidType_ = nullptr;
    std::shared_ptr<int32_t> recommendedPartitionCount_ = nullptr;
    // The ID of the region where the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The traffic reserved for message publishing. Unit: MB/s.
    // 
    // >  This parameter is returned only if the instance is a serverless ApsaraMQ for Kafka V3 instance.
    std::shared_ptr<int32_t> reservedPublishCapacity_ = nullptr;
    // The traffic reserved for message subscription. Unit: MB/s.
    // 
    // >  This parameter is returned only if the instance is a serverless ApsaraMQ for Kafka V3 instance.
    std::shared_ptr<int32_t> reservedSubscribeCapacity_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The Simple Authentication and Security Layer (SASL) endpoint of the instance in domain name mode. ApsaraMQ for Kafka instances support endpoints in domain name mode and IP address mode.
    // 
    // *   Endpoints in domain name mode: An endpoint in this mode consists of the domain name of the instance and a port number. The format of an endpoint in this mode is `{Instance domain name}:{Port number}`.
    // *   Endpoints in IP address mode: An endpoint in this mode consists of the IP address of the broker and a port number. The format of an endpoint in this mode is `{Broker IP address}:{Port number}`.
    std::shared_ptr<string> saslDomainEndpoint_ = nullptr;
    // The Simple Authentication and Security Layer (SASL) endpoint of the instance in IP address mode. ApsaraMQ for Kafka instances support endpoints in domain name mode and IP address mode.
    // 
    // *   Endpoints in domain name mode: An endpoint in this mode consists of the domain name of the instance and a port number. The format of an endpoint in this mode is `{Instance domain name}:{Port number}`.
    // *   Endpoints in IP address mode: An endpoint in this mode consists of the IP address of the broker and a port number. The format of an endpoint in this mode is `{Broker IP address}:{Port number}`.
    std::shared_ptr<string> saslEndPoint_ = nullptr;
    std::shared_ptr<bool> scheduledRetirement_ = nullptr;
    // The security group to which the instance belongs.
    // 
    // *   If the instance is deployed in the ApsaraMQ for Kafka console or by calling the [StartInstance](https://help.aliyun.com/document_detail/157786.html) operation without a security group configured, no value is returned.
    // *   If the instance is deployed by calling the [StartInstance](https://help.aliyun.com/document_detail/157786.html) operation with a security group configured, the returned value is the configured security group.
    std::shared_ptr<string> securityGroup_ = nullptr;
    // The instance version. Valid values: v2, v3, and confluent.
    std::shared_ptr<string> series_ = nullptr;
    // >  This parameter is out of date. We recommend that you refer to the ViewInstanceStatusCode parameter.
    // 
    // The instance status. Valid values:
    // 
    // *   **0**: pending
    // *   **1**: preparing hardware resources
    // *   **2**: initializing
    // *   **3**: starting
    // *   **5**: running
    // *   **6**: migrating
    // *   **7**: ready for upgrade
    // *   **8**: upgrading
    // *   **9**: ready for change
    // *   **10**: released
    // *   **11**: changing
    // *   **15**: expired
    // *   **30**: scaling
    std::shared_ptr<int32_t> serviceStatus_ = nullptr;
    // The instance edition. Valid values:
    // 
    // *   **professional**: Professional Edition (High Write)
    // *   **professionalForHighRead**: Professional Edition (High Read)
    // *   **normal**: Standard Edition
    std::shared_ptr<string> specType_ = nullptr;
    // The SSL endpoint of the instance in domain name mode. ApsaraMQ for Kafka instances support endpoints in domain name mode and IP address mode.
    // 
    // *   Endpoints in domain name mode: An endpoint in this mode consists of the domain name of the instance and a port number. The format of an endpoint in this mode is `{Instance domain name}:{Port number}`.
    // *   Endpoints in IP address mode: An endpoint in this mode consists of the IP address of the broker and a port number. The format of an endpoint in this mode is `{Broker IP address}:{Port number}`.
    std::shared_ptr<string> sslDomainEndpoint_ = nullptr;
    // The Secure Sockets Layer (SSL) endpoint of the instance in IP address mode. ApsaraMQ for Kafka instances support endpoints in domain name mode and IP address mode.
    // 
    // *   Endpoints in domain name mode: An endpoint in this mode consists of the domain name of the instance and a port number. The format of an endpoint in this mode is `{Instance domain name}:{Port number}`.
    // *   Endpoints in IP address mode: An endpoint in this mode consists of the IP address of the broker and a port number. The format of an endpoint in this mode is `{Broker IP address}:{Port number}`.
    std::shared_ptr<string> sslEndPoint_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> standardZoneId_ = nullptr;
    // The tags.
    std::shared_ptr<Models::GetInstanceListResponseBodyInstanceListInstanceVOTags> tags_ = nullptr;
    // The maximum number of topics on the instance.
    std::shared_ptr<int32_t> topicNumLimit_ = nullptr;
    // The upgrade information about the instance.
    std::shared_ptr<Models::GetInstanceListResponseBodyInstanceListInstanceVOUpgradeServiceDetailInfo> upgradeServiceDetailInfo_ = nullptr;
    // The number of used groups.
    std::shared_ptr<int32_t> usedGroupCount_ = nullptr;
    // The number of used partitions.
    std::shared_ptr<int32_t> usedPartitionCount_ = nullptr;
    // The number of used topics.
    std::shared_ptr<int32_t> usedTopicCount_ = nullptr;
    // The ID of the vSwitch to which the instance belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The vSwitch IDs.
    std::shared_ptr<Models::GetInstanceListResponseBodyInstanceListInstanceVOVSwitchIds> vSwitchIds_ = nullptr;
    // The instance status. The valid values are consistent with the values displayed in the ApsaraMQ for Kafka console. This parameter is used in the new version of ApsaraMQ for Kafka.
    // 
    // Valid values:
    // 
    // *   **0**: pending
    // *   **1**: deploying
    // *   **2**: running
    // *   **3**: stopped
    // *   **4**: expiring
    // *   **5**: expired
    // *   **6**: released
    // *   **7**: upgrading
    // *   **8**: migrating
    // *   **21**: stopping
    // *   **22**: starting
    // *   **23**: releasing
    // *   **30**: auto scaling
    // *   **101**: deployment failed
    // *   **102**: upgrade failed
    // *   **103**: migration failed
    std::shared_ptr<int32_t> viewInstanceStatusCode_ = nullptr;
    // The virtual private cloud (VPC) ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The SSL endpoint of the instance in domain name mode. You can use the endpoint to access the instance only in virtual private clouds (VPCs). ApsaraMQ for Kafka instances support endpoints in domain name mode and IP address mode.
    // 
    // *   Endpoints in domain name mode: An endpoint in this mode consists of the domain name of the instance and a port number. The format of an endpoint in this mode is `{Instance domain name}:{Port number}`.
    // *   Endpoints in IP address mode: An endpoint in this mode consists of the IP address of the broker and a port number. The format of an endpoint in this mode is `{Broker IP address}:{Port number}`.
    std::shared_ptr<string> vpcSaslDomainEndpoint_ = nullptr;
    // The Secure Sockets Layer (SSL) endpoint of the instance in IP address mode. You can use the endpoint to access the instance only in virtual private clouds (VPCs). ApsaraMQ for Kafka instances support endpoints in domain name mode and IP address mode.
    // 
    // *   Endpoints in domain name mode: An endpoint in this mode consists of the domain name of the instance and a port number. The format of an endpoint in this mode is `{Instance domain name}:{Port number}`.
    // *   Endpoints in IP address mode: An endpoint in this mode consists of the IP address of the broker and a port number. The format of an endpoint in this mode is `{Broker IP address}:{Port number}`.
    std::shared_ptr<string> vpcSaslEndPoint_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
