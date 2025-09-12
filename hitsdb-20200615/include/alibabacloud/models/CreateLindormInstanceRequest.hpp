// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELINDORMINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELINDORMINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateLindormInstanceRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class CreateLindormInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLindormInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_TO_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_TO_JSON(ArchVersion, archVersion_);
      DARABONBA_PTR_TO_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_TO_JSON(CoreSingleStorage, coreSingleStorage_);
      DARABONBA_PTR_TO_JSON(CoreSpec, coreSpec_);
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FilestoreNum, filestoreNum_);
      DARABONBA_PTR_TO_JSON(FilestoreSpec, filestoreSpec_);
      DARABONBA_PTR_TO_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_TO_JSON(InstanceStorage, instanceStorage_);
      DARABONBA_PTR_TO_JSON(LindormNum, lindormNum_);
      DARABONBA_PTR_TO_JSON(LindormSpec, lindormSpec_);
      DARABONBA_PTR_TO_JSON(LogDiskCategory, logDiskCategory_);
      DARABONBA_PTR_TO_JSON(LogNum, logNum_);
      DARABONBA_PTR_TO_JSON(LogSingleStorage, logSingleStorage_);
      DARABONBA_PTR_TO_JSON(LogSpec, logSpec_);
      DARABONBA_PTR_TO_JSON(LtsNum, ltsNum_);
      DARABONBA_PTR_TO_JSON(LtsSpec, ltsSpec_);
      DARABONBA_PTR_TO_JSON(MultiZoneCombination, multiZoneCombination_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SolrNum, solrNum_);
      DARABONBA_PTR_TO_JSON(SolrSpec, solrSpec_);
      DARABONBA_PTR_TO_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_TO_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_TO_JSON(StreamNum, streamNum_);
      DARABONBA_PTR_TO_JSON(StreamSpec, streamSpec_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TsdbNum, tsdbNum_);
      DARABONBA_PTR_TO_JSON(TsdbSpec, tsdbSpec_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLindormInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArbiterVSwitchId, arbiterVSwitchId_);
      DARABONBA_PTR_FROM_JSON(ArbiterZoneId, arbiterZoneId_);
      DARABONBA_PTR_FROM_JSON(ArchVersion, archVersion_);
      DARABONBA_PTR_FROM_JSON(AutoRenewDuration, autoRenewDuration_);
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(ColdStorage, coldStorage_);
      DARABONBA_PTR_FROM_JSON(CoreSingleStorage, coreSingleStorage_);
      DARABONBA_PTR_FROM_JSON(CoreSpec, coreSpec_);
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FilestoreNum, filestoreNum_);
      DARABONBA_PTR_FROM_JSON(FilestoreSpec, filestoreSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceAlias, instanceAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceStorage, instanceStorage_);
      DARABONBA_PTR_FROM_JSON(LindormNum, lindormNum_);
      DARABONBA_PTR_FROM_JSON(LindormSpec, lindormSpec_);
      DARABONBA_PTR_FROM_JSON(LogDiskCategory, logDiskCategory_);
      DARABONBA_PTR_FROM_JSON(LogNum, logNum_);
      DARABONBA_PTR_FROM_JSON(LogSingleStorage, logSingleStorage_);
      DARABONBA_PTR_FROM_JSON(LogSpec, logSpec_);
      DARABONBA_PTR_FROM_JSON(LtsNum, ltsNum_);
      DARABONBA_PTR_FROM_JSON(LtsSpec, ltsSpec_);
      DARABONBA_PTR_FROM_JSON(MultiZoneCombination, multiZoneCombination_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(PrimaryVSwitchId, primaryVSwitchId_);
      DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SolrNum, solrNum_);
      DARABONBA_PTR_FROM_JSON(SolrSpec, solrSpec_);
      DARABONBA_PTR_FROM_JSON(StandbyVSwitchId, standbyVSwitchId_);
      DARABONBA_PTR_FROM_JSON(StandbyZoneId, standbyZoneId_);
      DARABONBA_PTR_FROM_JSON(StreamNum, streamNum_);
      DARABONBA_PTR_FROM_JSON(StreamSpec, streamSpec_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TsdbNum, tsdbNum_);
      DARABONBA_PTR_FROM_JSON(TsdbSpec, tsdbSpec_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateLindormInstanceRequest() = default ;
    CreateLindormInstanceRequest(const CreateLindormInstanceRequest &) = default ;
    CreateLindormInstanceRequest(CreateLindormInstanceRequest &&) = default ;
    CreateLindormInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLindormInstanceRequest() = default ;
    CreateLindormInstanceRequest& operator=(const CreateLindormInstanceRequest &) = default ;
    CreateLindormInstanceRequest& operator=(CreateLindormInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arbiterVSwitchId_ != nullptr
        && this->arbiterZoneId_ != nullptr && this->archVersion_ != nullptr && this->autoRenewDuration_ != nullptr && this->autoRenewal_ != nullptr && this->coldStorage_ != nullptr
        && this->coreSingleStorage_ != nullptr && this->coreSpec_ != nullptr && this->diskCategory_ != nullptr && this->duration_ != nullptr && this->filestoreNum_ != nullptr
        && this->filestoreSpec_ != nullptr && this->instanceAlias_ != nullptr && this->instanceStorage_ != nullptr && this->lindormNum_ != nullptr && this->lindormSpec_ != nullptr
        && this->logDiskCategory_ != nullptr && this->logNum_ != nullptr && this->logSingleStorage_ != nullptr && this->logSpec_ != nullptr && this->ltsNum_ != nullptr
        && this->ltsSpec_ != nullptr && this->multiZoneCombination_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->payType_ != nullptr
        && this->pricingCycle_ != nullptr && this->primaryVSwitchId_ != nullptr && this->primaryZoneId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->securityToken_ != nullptr && this->solrNum_ != nullptr && this->solrSpec_ != nullptr
        && this->standbyVSwitchId_ != nullptr && this->standbyZoneId_ != nullptr && this->streamNum_ != nullptr && this->streamSpec_ != nullptr && this->tag_ != nullptr
        && this->tsdbNum_ != nullptr && this->tsdbSpec_ != nullptr && this->VPCId_ != nullptr && this->vSwitchId_ != nullptr && this->zoneId_ != nullptr; };
    // arbiterVSwitchId Field Functions 
    bool hasArbiterVSwitchId() const { return this->arbiterVSwitchId_ != nullptr;};
    void deleteArbiterVSwitchId() { this->arbiterVSwitchId_ = nullptr;};
    inline string arbiterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(arbiterVSwitchId_, "") };
    inline CreateLindormInstanceRequest& setArbiterVSwitchId(string arbiterVSwitchId) { DARABONBA_PTR_SET_VALUE(arbiterVSwitchId_, arbiterVSwitchId) };


    // arbiterZoneId Field Functions 
    bool hasArbiterZoneId() const { return this->arbiterZoneId_ != nullptr;};
    void deleteArbiterZoneId() { this->arbiterZoneId_ = nullptr;};
    inline string arbiterZoneId() const { DARABONBA_PTR_GET_DEFAULT(arbiterZoneId_, "") };
    inline CreateLindormInstanceRequest& setArbiterZoneId(string arbiterZoneId) { DARABONBA_PTR_SET_VALUE(arbiterZoneId_, arbiterZoneId) };


    // archVersion Field Functions 
    bool hasArchVersion() const { return this->archVersion_ != nullptr;};
    void deleteArchVersion() { this->archVersion_ = nullptr;};
    inline string archVersion() const { DARABONBA_PTR_GET_DEFAULT(archVersion_, "") };
    inline CreateLindormInstanceRequest& setArchVersion(string archVersion) { DARABONBA_PTR_SET_VALUE(archVersion_, archVersion) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline string autoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, "") };
    inline CreateLindormInstanceRequest& setAutoRenewDuration(string autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool autoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline CreateLindormInstanceRequest& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // coldStorage Field Functions 
    bool hasColdStorage() const { return this->coldStorage_ != nullptr;};
    void deleteColdStorage() { this->coldStorage_ = nullptr;};
    inline int32_t coldStorage() const { DARABONBA_PTR_GET_DEFAULT(coldStorage_, 0) };
    inline CreateLindormInstanceRequest& setColdStorage(int32_t coldStorage) { DARABONBA_PTR_SET_VALUE(coldStorage_, coldStorage) };


    // coreSingleStorage Field Functions 
    bool hasCoreSingleStorage() const { return this->coreSingleStorage_ != nullptr;};
    void deleteCoreSingleStorage() { this->coreSingleStorage_ = nullptr;};
    inline int32_t coreSingleStorage() const { DARABONBA_PTR_GET_DEFAULT(coreSingleStorage_, 0) };
    inline CreateLindormInstanceRequest& setCoreSingleStorage(int32_t coreSingleStorage) { DARABONBA_PTR_SET_VALUE(coreSingleStorage_, coreSingleStorage) };


    // coreSpec Field Functions 
    bool hasCoreSpec() const { return this->coreSpec_ != nullptr;};
    void deleteCoreSpec() { this->coreSpec_ = nullptr;};
    inline string coreSpec() const { DARABONBA_PTR_GET_DEFAULT(coreSpec_, "") };
    inline CreateLindormInstanceRequest& setCoreSpec(string coreSpec) { DARABONBA_PTR_SET_VALUE(coreSpec_, coreSpec) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string diskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline CreateLindormInstanceRequest& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateLindormInstanceRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // filestoreNum Field Functions 
    bool hasFilestoreNum() const { return this->filestoreNum_ != nullptr;};
    void deleteFilestoreNum() { this->filestoreNum_ = nullptr;};
    inline int32_t filestoreNum() const { DARABONBA_PTR_GET_DEFAULT(filestoreNum_, 0) };
    inline CreateLindormInstanceRequest& setFilestoreNum(int32_t filestoreNum) { DARABONBA_PTR_SET_VALUE(filestoreNum_, filestoreNum) };


    // filestoreSpec Field Functions 
    bool hasFilestoreSpec() const { return this->filestoreSpec_ != nullptr;};
    void deleteFilestoreSpec() { this->filestoreSpec_ = nullptr;};
    inline string filestoreSpec() const { DARABONBA_PTR_GET_DEFAULT(filestoreSpec_, "") };
    inline CreateLindormInstanceRequest& setFilestoreSpec(string filestoreSpec) { DARABONBA_PTR_SET_VALUE(filestoreSpec_, filestoreSpec) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string instanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline CreateLindormInstanceRequest& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceStorage Field Functions 
    bool hasInstanceStorage() const { return this->instanceStorage_ != nullptr;};
    void deleteInstanceStorage() { this->instanceStorage_ = nullptr;};
    inline string instanceStorage() const { DARABONBA_PTR_GET_DEFAULT(instanceStorage_, "") };
    inline CreateLindormInstanceRequest& setInstanceStorage(string instanceStorage) { DARABONBA_PTR_SET_VALUE(instanceStorage_, instanceStorage) };


    // lindormNum Field Functions 
    bool hasLindormNum() const { return this->lindormNum_ != nullptr;};
    void deleteLindormNum() { this->lindormNum_ = nullptr;};
    inline int32_t lindormNum() const { DARABONBA_PTR_GET_DEFAULT(lindormNum_, 0) };
    inline CreateLindormInstanceRequest& setLindormNum(int32_t lindormNum) { DARABONBA_PTR_SET_VALUE(lindormNum_, lindormNum) };


    // lindormSpec Field Functions 
    bool hasLindormSpec() const { return this->lindormSpec_ != nullptr;};
    void deleteLindormSpec() { this->lindormSpec_ = nullptr;};
    inline string lindormSpec() const { DARABONBA_PTR_GET_DEFAULT(lindormSpec_, "") };
    inline CreateLindormInstanceRequest& setLindormSpec(string lindormSpec) { DARABONBA_PTR_SET_VALUE(lindormSpec_, lindormSpec) };


    // logDiskCategory Field Functions 
    bool hasLogDiskCategory() const { return this->logDiskCategory_ != nullptr;};
    void deleteLogDiskCategory() { this->logDiskCategory_ = nullptr;};
    inline string logDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(logDiskCategory_, "") };
    inline CreateLindormInstanceRequest& setLogDiskCategory(string logDiskCategory) { DARABONBA_PTR_SET_VALUE(logDiskCategory_, logDiskCategory) };


    // logNum Field Functions 
    bool hasLogNum() const { return this->logNum_ != nullptr;};
    void deleteLogNum() { this->logNum_ = nullptr;};
    inline int32_t logNum() const { DARABONBA_PTR_GET_DEFAULT(logNum_, 0) };
    inline CreateLindormInstanceRequest& setLogNum(int32_t logNum) { DARABONBA_PTR_SET_VALUE(logNum_, logNum) };


    // logSingleStorage Field Functions 
    bool hasLogSingleStorage() const { return this->logSingleStorage_ != nullptr;};
    void deleteLogSingleStorage() { this->logSingleStorage_ = nullptr;};
    inline int32_t logSingleStorage() const { DARABONBA_PTR_GET_DEFAULT(logSingleStorage_, 0) };
    inline CreateLindormInstanceRequest& setLogSingleStorage(int32_t logSingleStorage) { DARABONBA_PTR_SET_VALUE(logSingleStorage_, logSingleStorage) };


    // logSpec Field Functions 
    bool hasLogSpec() const { return this->logSpec_ != nullptr;};
    void deleteLogSpec() { this->logSpec_ = nullptr;};
    inline string logSpec() const { DARABONBA_PTR_GET_DEFAULT(logSpec_, "") };
    inline CreateLindormInstanceRequest& setLogSpec(string logSpec) { DARABONBA_PTR_SET_VALUE(logSpec_, logSpec) };


    // ltsNum Field Functions 
    bool hasLtsNum() const { return this->ltsNum_ != nullptr;};
    void deleteLtsNum() { this->ltsNum_ = nullptr;};
    inline string ltsNum() const { DARABONBA_PTR_GET_DEFAULT(ltsNum_, "") };
    inline CreateLindormInstanceRequest& setLtsNum(string ltsNum) { DARABONBA_PTR_SET_VALUE(ltsNum_, ltsNum) };


    // ltsSpec Field Functions 
    bool hasLtsSpec() const { return this->ltsSpec_ != nullptr;};
    void deleteLtsSpec() { this->ltsSpec_ = nullptr;};
    inline string ltsSpec() const { DARABONBA_PTR_GET_DEFAULT(ltsSpec_, "") };
    inline CreateLindormInstanceRequest& setLtsSpec(string ltsSpec) { DARABONBA_PTR_SET_VALUE(ltsSpec_, ltsSpec) };


    // multiZoneCombination Field Functions 
    bool hasMultiZoneCombination() const { return this->multiZoneCombination_ != nullptr;};
    void deleteMultiZoneCombination() { this->multiZoneCombination_ = nullptr;};
    inline string multiZoneCombination() const { DARABONBA_PTR_GET_DEFAULT(multiZoneCombination_, "") };
    inline CreateLindormInstanceRequest& setMultiZoneCombination(string multiZoneCombination) { DARABONBA_PTR_SET_VALUE(multiZoneCombination_, multiZoneCombination) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateLindormInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLindormInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateLindormInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateLindormInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // primaryVSwitchId Field Functions 
    bool hasPrimaryVSwitchId() const { return this->primaryVSwitchId_ != nullptr;};
    void deletePrimaryVSwitchId() { this->primaryVSwitchId_ = nullptr;};
    inline string primaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchId_, "") };
    inline CreateLindormInstanceRequest& setPrimaryVSwitchId(string primaryVSwitchId) { DARABONBA_PTR_SET_VALUE(primaryVSwitchId_, primaryVSwitchId) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string primaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline CreateLindormInstanceRequest& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLindormInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLindormInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateLindormInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateLindormInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateLindormInstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // solrNum Field Functions 
    bool hasSolrNum() const { return this->solrNum_ != nullptr;};
    void deleteSolrNum() { this->solrNum_ = nullptr;};
    inline int32_t solrNum() const { DARABONBA_PTR_GET_DEFAULT(solrNum_, 0) };
    inline CreateLindormInstanceRequest& setSolrNum(int32_t solrNum) { DARABONBA_PTR_SET_VALUE(solrNum_, solrNum) };


    // solrSpec Field Functions 
    bool hasSolrSpec() const { return this->solrSpec_ != nullptr;};
    void deleteSolrSpec() { this->solrSpec_ = nullptr;};
    inline string solrSpec() const { DARABONBA_PTR_GET_DEFAULT(solrSpec_, "") };
    inline CreateLindormInstanceRequest& setSolrSpec(string solrSpec) { DARABONBA_PTR_SET_VALUE(solrSpec_, solrSpec) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string standbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline CreateLindormInstanceRequest& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string standbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline CreateLindormInstanceRequest& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // streamNum Field Functions 
    bool hasStreamNum() const { return this->streamNum_ != nullptr;};
    void deleteStreamNum() { this->streamNum_ = nullptr;};
    inline int32_t streamNum() const { DARABONBA_PTR_GET_DEFAULT(streamNum_, 0) };
    inline CreateLindormInstanceRequest& setStreamNum(int32_t streamNum) { DARABONBA_PTR_SET_VALUE(streamNum_, streamNum) };


    // streamSpec Field Functions 
    bool hasStreamSpec() const { return this->streamSpec_ != nullptr;};
    void deleteStreamSpec() { this->streamSpec_ = nullptr;};
    inline string streamSpec() const { DARABONBA_PTR_GET_DEFAULT(streamSpec_, "") };
    inline CreateLindormInstanceRequest& setStreamSpec(string streamSpec) { DARABONBA_PTR_SET_VALUE(streamSpec_, streamSpec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateLindormInstanceRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateLindormInstanceRequestTag>) };
    inline vector<CreateLindormInstanceRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateLindormInstanceRequestTag>) };
    inline CreateLindormInstanceRequest& setTag(const vector<CreateLindormInstanceRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateLindormInstanceRequest& setTag(vector<CreateLindormInstanceRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tsdbNum Field Functions 
    bool hasTsdbNum() const { return this->tsdbNum_ != nullptr;};
    void deleteTsdbNum() { this->tsdbNum_ = nullptr;};
    inline int32_t tsdbNum() const { DARABONBA_PTR_GET_DEFAULT(tsdbNum_, 0) };
    inline CreateLindormInstanceRequest& setTsdbNum(int32_t tsdbNum) { DARABONBA_PTR_SET_VALUE(tsdbNum_, tsdbNum) };


    // tsdbSpec Field Functions 
    bool hasTsdbSpec() const { return this->tsdbSpec_ != nullptr;};
    void deleteTsdbSpec() { this->tsdbSpec_ = nullptr;};
    inline string tsdbSpec() const { DARABONBA_PTR_GET_DEFAULT(tsdbSpec_, "") };
    inline CreateLindormInstanceRequest& setTsdbSpec(string tsdbSpec) { DARABONBA_PTR_SET_VALUE(tsdbSpec_, tsdbSpec) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateLindormInstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateLindormInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateLindormInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the vSwitch that is specified for the zone for the coordinate node of the instance. The vSwitch must be deployed in the zone specified by the ArbiterZoneId parameter. **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<string> arbiterVSwitchId_ = nullptr;
    // The ID of the zone for the coordinate node of the instance. **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<string> arbiterZoneId_ = nullptr;
    // The architecture of the instance. Valid values:
    // 
    // *   **1.0**: The instance that you want to create is a single-zone instance.
    // *   **2.0**: The instance that you want to create is a multi-zone instance.
    // 
    // By default, the value of this parameter is 1.0. To create a multi-zone instance, set this parameter to 2.0. **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<string> archVersion_ = nullptr;
    // The auto-renewal duration. Unit: month.
    // 
    // Valid values: **1** to **12**.
    // 
    // >  This parameter is available only when the **AutoRenewal** parameter is set to **true**.
    std::shared_ptr<string> autoRenewDuration_ = nullptr;
    // Specifies whether to enable auto-renewal for the instance. Valid values:
    // 
    // *   **true**: enables auto-renewal.
    // *   **false**: disables auto-renewal.
    // 
    // Default value: false.
    // 
    // >  This parameter is available only when the **PayType** parameter is set to **PREPAY**.
    std::shared_ptr<bool> autoRenewal_ = nullptr;
    // The cold storage capacity of the instance. By default, if you leave this parameter unspecified, cold storage is not enabled for the instance. Unit: GB. Valid values: **800** to **1000000**.
    std::shared_ptr<int32_t> coldStorage_ = nullptr;
    // The storage capacity of the disk of a single core node. Valid values: 400 to 64000. Unit: GB. **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<int32_t> coreSingleStorage_ = nullptr;
    // The specification of the nodes in the instance if you set DiskCategory to local_ssd_pro or local_hdd_pro.
    // 
    // Valid values when DiskCategory is set to local_ssd_pro (i3 instance types support only subscription instances):
    // 
    // *   **lindorm.i4.xlarge**: Each node has 4 CPU cores and 32 GB of memory.
    // *   **lindorm.i4.2xlarge**: Each node has 8 CPU cores and 64 GB of memory.
    // *   **lindorm.i4.4xlarge**: Each node has 16 CPU cores and 128 GB of memory.
    // *   **lindorm.i4.8xlarge**: Each node has 32 CPU cores and 256 GB of memory.
    // *   **lindorm.i3.xlarge**: Each node has 4 CPU cores and 32 GB of memory.
    // *   **lindorm.i3.2xlarge**: Each node has 8 CPU cores and 64 GB of memory.
    // *   **lindorm.i3.4xlarge**: Each node has 16 CPU cores and 128 GB of memory.
    // *   **lindorm.i3.8xlarge**: Each node has 32 CPU cores and 256 GB of memory.
    // *   **lindorm.i2.xlarge**: Each node has 4 CPU cores and 32 GB of memory.
    // *   **lindorm.i2.2xlarge**: Each node has 8 CPU cores and 64 GB of memory.
    // *   **lindorm.i2.4xlarge**: Each node has 16 CPU cores and 128 GB of memory.
    // *   **lindorm.i2.8xlarge**: Each node has 32 CPU cores and 256 GB of memory.
    // 
    // Valid values when DiskCategory is set to local_hhd_pro:
    // 
    // *   **lindorm.sd3c.3xlarge**: Each node has 14 CPU cores and 56 GB of memory.
    // *   **lindorm.sd3c.7xlarge**: Each node has 28 CPU cores and 112 GB of memory.
    // *   **lindorm.sd3c.14xlarge**: Each node has 56 CPU cores and 224 GB of memory.
    // *   **lindorm.d2c.6xlarge**: Each node has 24 CPU cores and 88 GB of memory.
    // *   **lindorm.d2c.12xlarge**: Each node has 48 CPU cores and 176 GB of memory.
    // *   **lindorm.d2c.24xlarge**: Each node has 96 CPU cores and 352 GB of memory.
    // *   **lindorm.d2s.5xlarge**: Each node has 20 CPU cores and 88 GB of memory.
    // *   **lindorm.d2s.10xlarge**: Each node has 40 CPU cores and 176 GB of memory.
    // *   **lindorm.d1.2xlarge**: Each node has 8 CPU cores and 32 GB of memory.
    // *   **lindorm.d1.4xlarge**: Each node has 16 CPU cores and 64 GB of memory.
    // *   **lindorm.d1.6xlarge**: Each node has 24 CPU cores and 96 GB of memory.
    std::shared_ptr<string> coreSpec_ = nullptr;
    // The storage type of the instance. Valid values:
    // 
    // *   **cloud_efficiency**: This instance uses the Standard type of storage.
    // *   **cloud_ssd**: This instance uses the Performance type of storage.
    // *   **capacity_cloud_storage**: This instance uses the Capacity type of storage.
    // *   **local_ssd_pro**: This instance uses local SSDs.
    // *   **local_hdd_pro**: This instance uses local HDDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> diskCategory_ = nullptr;
    // The subscription period of the instance. The valid values of this parameter depend on the value of the PricingCycle parameter.
    // 
    // *   If PricingCycle is set to **Month**, set this parameter to an integer that ranges from **1** to **9**.
    // *   If PricingCycle is set to **Year**, set this parameter to an integer that ranges from **1** to **3**.
    // 
    // > This parameter is available and required when the PayType parameter is set to **PREPAY**.
    std::shared_ptr<string> duration_ = nullptr;
    // The number of LindormDFS nodes in the instance. The valid values of this parameter depend on the value of the PayType parameter.
    // 
    // *   If the PayType parameter is set to **PREPAY**, set this parameter to an integer that ranges from **0** to **60**.
    // *   If the PayType parameter is set to **POSTPAY**, set this parameter to an integer that ranges from **0** to **8**.
    std::shared_ptr<int32_t> filestoreNum_ = nullptr;
    // The specification of LindormDFS nodes in the instance. Set the value of this parameter to **lindorm.c.xlarge**, which indicates that each node has 4 dedicated CPU cores and 8 GB of dedicated memory.
    std::shared_ptr<string> filestoreSpec_ = nullptr;
    // The name of the instance that you want to create.
    std::shared_ptr<string> instanceAlias_ = nullptr;
    // The storage capacity of the instance you want to create. Unit: GB.
    std::shared_ptr<string> instanceStorage_ = nullptr;
    // The number of LindormTable nodes in the instance. The valid values of this parameter depend on the value of the PayType parameter.
    // 
    // *   If the PayType parameter is set to **PREPAY**, set this parameter to an integer that ranges from **0** to **90**.
    // *   If the PayType parameter is set to **POSTPAY**, set this parameter to an integer that ranges from **0** to **400**.
    // 
    // **This parameter is required if you want to create a multi-zone instance**.  The valid values of this parameter range from 4 to 400 if you want to create a multi-zone instance.
    std::shared_ptr<int32_t> lindormNum_ = nullptr;
    // The specification of LindormTable nodes in the instance. Valid values:
    // 
    // *   **lindorm.c.xlarge**: Each node has 4 dedicated CPU cores and 8 GB of dedicated memory.
    // *   **lindorm.c.2xlarge**: Each node has 8 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.c.4xlarge**: Each node has 16 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.c.8xlarge**: Each node has 32 dedicated CPU cores and 64 GB of dedicated memory.
    std::shared_ptr<string> lindormSpec_ = nullptr;
    // The disk type of the log nodes. Valid values:
    // 
    // *   **cloud_efficiency**: This instance uses the Standard type of storage.
    // *   **cloud_ssd**: This instance uses the Performance type of storage.
    // 
    // **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<string> logDiskCategory_ = nullptr;
    // The number of the log nodes. Valid values: 4 to 400. **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<int32_t> logNum_ = nullptr;
    // The storage capacity of the disk of a single log node. Valid values: 400 to 64000. Unit: GB. **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<int32_t> logSingleStorage_ = nullptr;
    // The type of the log nodes. Valid values:
    // 
    // *   **lindorm.sn1.xlarge**: Each node has 4 dedicated CPU cores and 8 GB of dedicated memory.
    // *   **lindorm.sn1.2xlarge**: Each node has 8 dedicated CPU cores and 16 GB of dedicated memory.
    // 
    // **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<string> logSpec_ = nullptr;
    // The number of LTS nodes in the instance. Valid values: **0** to **60**.
    std::shared_ptr<string> ltsNum_ = nullptr;
    // The specification of LTS nodes in the instance. Valid values:
    // 
    // *   **lindorm.c.xlarge**: Each node has 4 dedicated CPU cores and 8 GB of dedicated memory.
    // *   **lindorm.g.xlarge**: Each node has 4 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.c.2xlarge**: Each node has 8 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.g.2xlarge**: Each node has 8 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.c.4xlarge**: Each node has 16 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.g.4xlarge**: Each node has 16 dedicated CPU cores and 64 GB of dedicated memory.
    // *   **lindorm.c.8xlarge**: Each node has 32 dedicated CPU cores and 64 GB of dedicated memory.
    // *   **lindorm.g.8xlarge**: Each node has 32 dedicated CPU cores and 128 GB of dedicated memory.
    std::shared_ptr<string> ltsSpec_ = nullptr;
    // The combinations of zones that are available for the multi-zone instance. You can go to the purchase page of Lindorm to view the supported zone combinations.
    // 
    // *   **ap-southeast-5abc-aliyun**: Zone A+B+C in the Indonesia (Jakarta) region.
    // *   **cn-hangzhou-ehi-aliyun**: Zone E+H+I in the China (Hangzhou) region.
    // *   **cn-beijing-acd-aliyun**: Zone A+C+D in the China (Beijing) region.
    // *   **ap-southeast-1-abc-aliyun**: Zone A+B+C in the Singapore region.
    // *   **cn-zhangjiakou-abc-aliyun**: Zone A+B+C in the China (Zhangjiakou) region.
    // *   **cn-shanghai-efg-aliyun**: Zone E+F+G in the China (Shanghai) region.
    // *   **cn-shanghai-abd-aliyun**: Zone A+B+D in the China (Shanghai) region.
    // *   **cn-hangzhou-bef-aliyun**: Zone B+E+F in the China (Hangzhou) region.
    // *   **cn-hangzhou-bce-aliyun**: Zone B+C+E in the China (Hangzhou) region.
    // *   **cn-beijing-fgh-aliyun**: Zone F+G+H in the China (Beijing) region.
    // *   **cn-shenzhen-abc-aliyun**: Zone A+B+C in the China (Shenzhen) region.
    // 
    // **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<string> multiZoneCombination_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The billing method of the instance you want to create. Valid values:
    // 
    // *   **PREPAY**: subscription.
    // *   **POSTPAY**: pay-as-you-go.
    // 
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    // The period based on which you are charged for the instance. Valid values:
    // 
    // *   **Month**: You are charged for the instance on a monthly basis.
    // *   **Year**: You are charged for the instance on a yearly basis.
    // 
    // > This parameter is available and required when the PayType parameter is set to **PREPAY**.
    std::shared_ptr<string> pricingCycle_ = nullptr;
    // The ID of the vSwitch that is specified for the secondary zone of the instance. The vSwitch must be deployed in the zone specified by the StandbyZoneId parameter. **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<string> primaryVSwitchId_ = nullptr;
    // Multi-zone instance, availability zone ID of the primary zone. **This parameter is required if you need to create a multi-zone instance.**
    std::shared_ptr<string> primaryZoneId_ = nullptr;
    // The ID of the region in which you want to create the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/426062.html) operation to query the region in which you can create the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the Lindorm instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The number of LindormSearch nodes in the instance. Valid values: integers from **0** to **60**.
    std::shared_ptr<int32_t> solrNum_ = nullptr;
    // The specification of the LindormSearch nodes in the instance. Valid values:
    // 
    // *   **lindorm.g.xlarge**: Each node has 4 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.c.2xlarge**: Each node has 8 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.g.2xlarge**: Each node has 8 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.c.4xlarge**: Each node has 16 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.g.4xlarge**: Each node has 16 dedicated CPU cores and 64 GB of dedicated memory.
    // *   **lindorm.c.8xlarge**: Each node has 32 dedicated CPU cores and 64 GB of dedicated memory.
    // *   **lindorm.g.8xlarge**: Each node has 32 dedicated CPU cores and 128 GB of dedicated memory.
    std::shared_ptr<string> solrSpec_ = nullptr;
    // The ID of the vSwitch that is specified for the secondary zone of the instance. The vSwitch must be deployed in the zone specified by the StandbyZoneId parameter. **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<string> standbyVSwitchId_ = nullptr;
    // The ID of the secondary zone of the instance. **This parameter is required if you want to create a multi-zone instance**.
    std::shared_ptr<string> standbyZoneId_ = nullptr;
    // The number of LindormStream nodes in the instance. Valid values: integers from **0** to **60**.
    std::shared_ptr<int32_t> streamNum_ = nullptr;
    // The specification of the LindormStream nodes in the instance. Valid values:
    // 
    // *   **lindorm.g.xlarge**: Each node has 4 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.g.2xlarge**: Each node has 8 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.g.4xlarge**: Each node has 16 dedicated CPU cores and 64 GB of dedicated memory.
    // *   **lindorm.g.8xlarge**: Each node has 32 dedicated CPU cores and 128 GB of dedicated memory.
    std::shared_ptr<string> streamSpec_ = nullptr;
    // The tags that are added to instances.
    std::shared_ptr<vector<CreateLindormInstanceRequestTag>> tag_ = nullptr;
    // The number of the LindormTSDB nodes in the instance. The valid values of this parameter depend on the value of the PayType parameter.
    // 
    // *   If the PayType parameter is set to **PREPAY**, set this parameter to an integer that ranges from **0** to **24**.
    // *   If the PayType parameter is set to **POSTPAY**, set this parameter to an integer that ranges from **0** to **32**.
    std::shared_ptr<int32_t> tsdbNum_ = nullptr;
    // The specification of the LindormTSDB nodes in the instance. Valid values:
    // 
    // *   **lindorm.g.xlarge**: Each node has 4 dedicated CPU cores and 16 GB of dedicated memory.
    // *   **lindorm.g.2xlarge**: Each node has 8 dedicated CPU cores and 32 GB of dedicated memory.
    // *   **lindorm.g.4xlarge**: Each node has 16 dedicated CPU cores and 64 GB of dedicated memory.
    // *   **lindorm.g.8xlarge**: Each node has 32 dedicated CPU cores and 128 GB of dedicated memory.
    std::shared_ptr<string> tsdbSpec_ = nullptr;
    // The ID of the VPC in which you want to create the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> VPCId_ = nullptr;
    // The ID of the vSwitch to which you want the instance to connect.
    // 
    // This parameter is required.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The ID of the zone in which you want to create the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
