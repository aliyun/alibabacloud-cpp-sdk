// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELINDORMINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELINDORMINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of a tag.
      // 
      // > You can specify the keys of multiple tags. For example, `Tag.1.Key` specifies the key of the first tag and `Tag.2.Key` specifies the key of the second tag.
      shared_ptr<string> key_ {};
      // The value of a tag.
      // 
      // > You can specify the values of multiple tags. For example, `Tag.1.Value` specifies the value of the first tag and `Tag.2.Value` specifies the value of the second tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->arbiterVSwitchId_ == nullptr
        && this->arbiterZoneId_ == nullptr && this->archVersion_ == nullptr && this->autoRenewDuration_ == nullptr && this->autoRenewal_ == nullptr && this->coldStorage_ == nullptr
        && this->coreSingleStorage_ == nullptr && this->coreSpec_ == nullptr && this->diskCategory_ == nullptr && this->duration_ == nullptr && this->filestoreNum_ == nullptr
        && this->filestoreSpec_ == nullptr && this->instanceAlias_ == nullptr && this->instanceStorage_ == nullptr && this->lindormNum_ == nullptr && this->lindormSpec_ == nullptr
        && this->logDiskCategory_ == nullptr && this->logNum_ == nullptr && this->logSingleStorage_ == nullptr && this->logSpec_ == nullptr && this->ltsNum_ == nullptr
        && this->ltsSpec_ == nullptr && this->multiZoneCombination_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->payType_ == nullptr
        && this->pricingCycle_ == nullptr && this->primaryVSwitchId_ == nullptr && this->primaryZoneId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityToken_ == nullptr && this->solrNum_ == nullptr && this->solrSpec_ == nullptr
        && this->standbyVSwitchId_ == nullptr && this->standbyZoneId_ == nullptr && this->streamNum_ == nullptr && this->streamSpec_ == nullptr && this->tag_ == nullptr
        && this->tsdbNum_ == nullptr && this->tsdbSpec_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // arbiterVSwitchId Field Functions 
    bool hasArbiterVSwitchId() const { return this->arbiterVSwitchId_ != nullptr;};
    void deleteArbiterVSwitchId() { this->arbiterVSwitchId_ = nullptr;};
    inline string getArbiterVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(arbiterVSwitchId_, "") };
    inline CreateLindormInstanceRequest& setArbiterVSwitchId(string arbiterVSwitchId) { DARABONBA_PTR_SET_VALUE(arbiterVSwitchId_, arbiterVSwitchId) };


    // arbiterZoneId Field Functions 
    bool hasArbiterZoneId() const { return this->arbiterZoneId_ != nullptr;};
    void deleteArbiterZoneId() { this->arbiterZoneId_ = nullptr;};
    inline string getArbiterZoneId() const { DARABONBA_PTR_GET_DEFAULT(arbiterZoneId_, "") };
    inline CreateLindormInstanceRequest& setArbiterZoneId(string arbiterZoneId) { DARABONBA_PTR_SET_VALUE(arbiterZoneId_, arbiterZoneId) };


    // archVersion Field Functions 
    bool hasArchVersion() const { return this->archVersion_ != nullptr;};
    void deleteArchVersion() { this->archVersion_ = nullptr;};
    inline string getArchVersion() const { DARABONBA_PTR_GET_DEFAULT(archVersion_, "") };
    inline CreateLindormInstanceRequest& setArchVersion(string archVersion) { DARABONBA_PTR_SET_VALUE(archVersion_, archVersion) };


    // autoRenewDuration Field Functions 
    bool hasAutoRenewDuration() const { return this->autoRenewDuration_ != nullptr;};
    void deleteAutoRenewDuration() { this->autoRenewDuration_ = nullptr;};
    inline string getAutoRenewDuration() const { DARABONBA_PTR_GET_DEFAULT(autoRenewDuration_, "") };
    inline CreateLindormInstanceRequest& setAutoRenewDuration(string autoRenewDuration) { DARABONBA_PTR_SET_VALUE(autoRenewDuration_, autoRenewDuration) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline CreateLindormInstanceRequest& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // coldStorage Field Functions 
    bool hasColdStorage() const { return this->coldStorage_ != nullptr;};
    void deleteColdStorage() { this->coldStorage_ = nullptr;};
    inline int32_t getColdStorage() const { DARABONBA_PTR_GET_DEFAULT(coldStorage_, 0) };
    inline CreateLindormInstanceRequest& setColdStorage(int32_t coldStorage) { DARABONBA_PTR_SET_VALUE(coldStorage_, coldStorage) };


    // coreSingleStorage Field Functions 
    bool hasCoreSingleStorage() const { return this->coreSingleStorage_ != nullptr;};
    void deleteCoreSingleStorage() { this->coreSingleStorage_ = nullptr;};
    inline int32_t getCoreSingleStorage() const { DARABONBA_PTR_GET_DEFAULT(coreSingleStorage_, 0) };
    inline CreateLindormInstanceRequest& setCoreSingleStorage(int32_t coreSingleStorage) { DARABONBA_PTR_SET_VALUE(coreSingleStorage_, coreSingleStorage) };


    // coreSpec Field Functions 
    bool hasCoreSpec() const { return this->coreSpec_ != nullptr;};
    void deleteCoreSpec() { this->coreSpec_ = nullptr;};
    inline string getCoreSpec() const { DARABONBA_PTR_GET_DEFAULT(coreSpec_, "") };
    inline CreateLindormInstanceRequest& setCoreSpec(string coreSpec) { DARABONBA_PTR_SET_VALUE(coreSpec_, coreSpec) };


    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline CreateLindormInstanceRequest& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreateLindormInstanceRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // filestoreNum Field Functions 
    bool hasFilestoreNum() const { return this->filestoreNum_ != nullptr;};
    void deleteFilestoreNum() { this->filestoreNum_ = nullptr;};
    inline int32_t getFilestoreNum() const { DARABONBA_PTR_GET_DEFAULT(filestoreNum_, 0) };
    inline CreateLindormInstanceRequest& setFilestoreNum(int32_t filestoreNum) { DARABONBA_PTR_SET_VALUE(filestoreNum_, filestoreNum) };


    // filestoreSpec Field Functions 
    bool hasFilestoreSpec() const { return this->filestoreSpec_ != nullptr;};
    void deleteFilestoreSpec() { this->filestoreSpec_ = nullptr;};
    inline string getFilestoreSpec() const { DARABONBA_PTR_GET_DEFAULT(filestoreSpec_, "") };
    inline CreateLindormInstanceRequest& setFilestoreSpec(string filestoreSpec) { DARABONBA_PTR_SET_VALUE(filestoreSpec_, filestoreSpec) };


    // instanceAlias Field Functions 
    bool hasInstanceAlias() const { return this->instanceAlias_ != nullptr;};
    void deleteInstanceAlias() { this->instanceAlias_ = nullptr;};
    inline string getInstanceAlias() const { DARABONBA_PTR_GET_DEFAULT(instanceAlias_, "") };
    inline CreateLindormInstanceRequest& setInstanceAlias(string instanceAlias) { DARABONBA_PTR_SET_VALUE(instanceAlias_, instanceAlias) };


    // instanceStorage Field Functions 
    bool hasInstanceStorage() const { return this->instanceStorage_ != nullptr;};
    void deleteInstanceStorage() { this->instanceStorage_ = nullptr;};
    inline string getInstanceStorage() const { DARABONBA_PTR_GET_DEFAULT(instanceStorage_, "") };
    inline CreateLindormInstanceRequest& setInstanceStorage(string instanceStorage) { DARABONBA_PTR_SET_VALUE(instanceStorage_, instanceStorage) };


    // lindormNum Field Functions 
    bool hasLindormNum() const { return this->lindormNum_ != nullptr;};
    void deleteLindormNum() { this->lindormNum_ = nullptr;};
    inline int32_t getLindormNum() const { DARABONBA_PTR_GET_DEFAULT(lindormNum_, 0) };
    inline CreateLindormInstanceRequest& setLindormNum(int32_t lindormNum) { DARABONBA_PTR_SET_VALUE(lindormNum_, lindormNum) };


    // lindormSpec Field Functions 
    bool hasLindormSpec() const { return this->lindormSpec_ != nullptr;};
    void deleteLindormSpec() { this->lindormSpec_ = nullptr;};
    inline string getLindormSpec() const { DARABONBA_PTR_GET_DEFAULT(lindormSpec_, "") };
    inline CreateLindormInstanceRequest& setLindormSpec(string lindormSpec) { DARABONBA_PTR_SET_VALUE(lindormSpec_, lindormSpec) };


    // logDiskCategory Field Functions 
    bool hasLogDiskCategory() const { return this->logDiskCategory_ != nullptr;};
    void deleteLogDiskCategory() { this->logDiskCategory_ = nullptr;};
    inline string getLogDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(logDiskCategory_, "") };
    inline CreateLindormInstanceRequest& setLogDiskCategory(string logDiskCategory) { DARABONBA_PTR_SET_VALUE(logDiskCategory_, logDiskCategory) };


    // logNum Field Functions 
    bool hasLogNum() const { return this->logNum_ != nullptr;};
    void deleteLogNum() { this->logNum_ = nullptr;};
    inline int32_t getLogNum() const { DARABONBA_PTR_GET_DEFAULT(logNum_, 0) };
    inline CreateLindormInstanceRequest& setLogNum(int32_t logNum) { DARABONBA_PTR_SET_VALUE(logNum_, logNum) };


    // logSingleStorage Field Functions 
    bool hasLogSingleStorage() const { return this->logSingleStorage_ != nullptr;};
    void deleteLogSingleStorage() { this->logSingleStorage_ = nullptr;};
    inline int32_t getLogSingleStorage() const { DARABONBA_PTR_GET_DEFAULT(logSingleStorage_, 0) };
    inline CreateLindormInstanceRequest& setLogSingleStorage(int32_t logSingleStorage) { DARABONBA_PTR_SET_VALUE(logSingleStorage_, logSingleStorage) };


    // logSpec Field Functions 
    bool hasLogSpec() const { return this->logSpec_ != nullptr;};
    void deleteLogSpec() { this->logSpec_ = nullptr;};
    inline string getLogSpec() const { DARABONBA_PTR_GET_DEFAULT(logSpec_, "") };
    inline CreateLindormInstanceRequest& setLogSpec(string logSpec) { DARABONBA_PTR_SET_VALUE(logSpec_, logSpec) };


    // ltsNum Field Functions 
    bool hasLtsNum() const { return this->ltsNum_ != nullptr;};
    void deleteLtsNum() { this->ltsNum_ = nullptr;};
    inline string getLtsNum() const { DARABONBA_PTR_GET_DEFAULT(ltsNum_, "") };
    inline CreateLindormInstanceRequest& setLtsNum(string ltsNum) { DARABONBA_PTR_SET_VALUE(ltsNum_, ltsNum) };


    // ltsSpec Field Functions 
    bool hasLtsSpec() const { return this->ltsSpec_ != nullptr;};
    void deleteLtsSpec() { this->ltsSpec_ = nullptr;};
    inline string getLtsSpec() const { DARABONBA_PTR_GET_DEFAULT(ltsSpec_, "") };
    inline CreateLindormInstanceRequest& setLtsSpec(string ltsSpec) { DARABONBA_PTR_SET_VALUE(ltsSpec_, ltsSpec) };


    // multiZoneCombination Field Functions 
    bool hasMultiZoneCombination() const { return this->multiZoneCombination_ != nullptr;};
    void deleteMultiZoneCombination() { this->multiZoneCombination_ = nullptr;};
    inline string getMultiZoneCombination() const { DARABONBA_PTR_GET_DEFAULT(multiZoneCombination_, "") };
    inline CreateLindormInstanceRequest& setMultiZoneCombination(string multiZoneCombination) { DARABONBA_PTR_SET_VALUE(multiZoneCombination_, multiZoneCombination) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateLindormInstanceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLindormInstanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateLindormInstanceRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateLindormInstanceRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // primaryVSwitchId Field Functions 
    bool hasPrimaryVSwitchId() const { return this->primaryVSwitchId_ != nullptr;};
    void deletePrimaryVSwitchId() { this->primaryVSwitchId_ = nullptr;};
    inline string getPrimaryVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(primaryVSwitchId_, "") };
    inline CreateLindormInstanceRequest& setPrimaryVSwitchId(string primaryVSwitchId) { DARABONBA_PTR_SET_VALUE(primaryVSwitchId_, primaryVSwitchId) };


    // primaryZoneId Field Functions 
    bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
    void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
    inline string getPrimaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
    inline CreateLindormInstanceRequest& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLindormInstanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLindormInstanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateLindormInstanceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateLindormInstanceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateLindormInstanceRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // solrNum Field Functions 
    bool hasSolrNum() const { return this->solrNum_ != nullptr;};
    void deleteSolrNum() { this->solrNum_ = nullptr;};
    inline int32_t getSolrNum() const { DARABONBA_PTR_GET_DEFAULT(solrNum_, 0) };
    inline CreateLindormInstanceRequest& setSolrNum(int32_t solrNum) { DARABONBA_PTR_SET_VALUE(solrNum_, solrNum) };


    // solrSpec Field Functions 
    bool hasSolrSpec() const { return this->solrSpec_ != nullptr;};
    void deleteSolrSpec() { this->solrSpec_ = nullptr;};
    inline string getSolrSpec() const { DARABONBA_PTR_GET_DEFAULT(solrSpec_, "") };
    inline CreateLindormInstanceRequest& setSolrSpec(string solrSpec) { DARABONBA_PTR_SET_VALUE(solrSpec_, solrSpec) };


    // standbyVSwitchId Field Functions 
    bool hasStandbyVSwitchId() const { return this->standbyVSwitchId_ != nullptr;};
    void deleteStandbyVSwitchId() { this->standbyVSwitchId_ = nullptr;};
    inline string getStandbyVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(standbyVSwitchId_, "") };
    inline CreateLindormInstanceRequest& setStandbyVSwitchId(string standbyVSwitchId) { DARABONBA_PTR_SET_VALUE(standbyVSwitchId_, standbyVSwitchId) };


    // standbyZoneId Field Functions 
    bool hasStandbyZoneId() const { return this->standbyZoneId_ != nullptr;};
    void deleteStandbyZoneId() { this->standbyZoneId_ = nullptr;};
    inline string getStandbyZoneId() const { DARABONBA_PTR_GET_DEFAULT(standbyZoneId_, "") };
    inline CreateLindormInstanceRequest& setStandbyZoneId(string standbyZoneId) { DARABONBA_PTR_SET_VALUE(standbyZoneId_, standbyZoneId) };


    // streamNum Field Functions 
    bool hasStreamNum() const { return this->streamNum_ != nullptr;};
    void deleteStreamNum() { this->streamNum_ = nullptr;};
    inline int32_t getStreamNum() const { DARABONBA_PTR_GET_DEFAULT(streamNum_, 0) };
    inline CreateLindormInstanceRequest& setStreamNum(int32_t streamNum) { DARABONBA_PTR_SET_VALUE(streamNum_, streamNum) };


    // streamSpec Field Functions 
    bool hasStreamSpec() const { return this->streamSpec_ != nullptr;};
    void deleteStreamSpec() { this->streamSpec_ = nullptr;};
    inline string getStreamSpec() const { DARABONBA_PTR_GET_DEFAULT(streamSpec_, "") };
    inline CreateLindormInstanceRequest& setStreamSpec(string streamSpec) { DARABONBA_PTR_SET_VALUE(streamSpec_, streamSpec) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateLindormInstanceRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateLindormInstanceRequest::Tag>) };
    inline vector<CreateLindormInstanceRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateLindormInstanceRequest::Tag>) };
    inline CreateLindormInstanceRequest& setTag(const vector<CreateLindormInstanceRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateLindormInstanceRequest& setTag(vector<CreateLindormInstanceRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tsdbNum Field Functions 
    bool hasTsdbNum() const { return this->tsdbNum_ != nullptr;};
    void deleteTsdbNum() { this->tsdbNum_ = nullptr;};
    inline int32_t getTsdbNum() const { DARABONBA_PTR_GET_DEFAULT(tsdbNum_, 0) };
    inline CreateLindormInstanceRequest& setTsdbNum(int32_t tsdbNum) { DARABONBA_PTR_SET_VALUE(tsdbNum_, tsdbNum) };


    // tsdbSpec Field Functions 
    bool hasTsdbSpec() const { return this->tsdbSpec_ != nullptr;};
    void deleteTsdbSpec() { this->tsdbSpec_ = nullptr;};
    inline string getTsdbSpec() const { DARABONBA_PTR_GET_DEFAULT(tsdbSpec_, "") };
    inline CreateLindormInstanceRequest& setTsdbSpec(string tsdbSpec) { DARABONBA_PTR_SET_VALUE(tsdbSpec_, tsdbSpec) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateLindormInstanceRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateLindormInstanceRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateLindormInstanceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the VSwitch for the arbiter zone of the multi-zone instance. The VSwitch must be in the zone specified by `ArbiterZoneId`. **This parameter is required for multi-zone instances.**
    shared_ptr<string> arbiterVSwitchId_ {};
    // The ID of the arbiter zone for the multi-zone instance. **This parameter is required for multi-zone instances.**
    shared_ptr<string> arbiterZoneId_ {};
    // The deployment architecture of the instance. Valid values:
    // 
    // - **1.0**: Single-zone deployment.
    // 
    // - **2.0**: Multi-zone deployment.
    // 
    // The default value is 1.0. To create a multi-zone instance, set this parameter to 2.0. **This parameter is required for multi-zone instances.**
    shared_ptr<string> archVersion_ {};
    // The auto-renewal duration, in months.
    // 
    // The value of this parameter ranges from **1** to **12**.
    // 
    // > This parameter takes effect only when **AutoRenewal** is set to **true**.
    shared_ptr<string> autoRenewDuration_ {};
    // Specifies whether to enable auto-renewal for the Subscription instance. Valid values:
    // 
    // - **true**: Auto-renewal is enabled.
    // 
    // - **false**: Auto-renewal is disabled.
    // 
    // Default value: false.
    // 
    // > This parameter takes effect only when the **PayType** parameter is set to **PREPAY**.
    shared_ptr<bool> autoRenewal_ {};
    // The cold storage capacity of the instance, in GB. The value of this parameter ranges from **800** to **1,000,000**. If you do not specify this parameter, cold storage is not enabled.
    shared_ptr<int32_t> coldStorage_ {};
    // The storage capacity of a single core node in the multi-zone instance. Unit: GB. The value of this parameter ranges from 400 to 64,000. **This parameter is required for multi-zone instances.**
    shared_ptr<int32_t> coreSingleStorage_ {};
    // The node specification for an instance that uses local disks.
    // 
    // If the storage type is **local_ssd_pro**, valid values include the following: Note that I3-family specifications are available only for Subscription instances.
    // 
    // - **lindorm.i4.xlarge**: 4 cores, 32 GB memory (I4).
    // 
    // - **lindorm.i4.2xlarge**: 8 cores, 64 GB memory (I4).
    // 
    // - **lindorm.i4.4xlarge**: 16 cores, 128 GB memory (I4).
    // 
    // - **lindorm.i4.8xlarge**: 32 cores, 256 GB memory (I4).
    // 
    // - **lindorm.i3.xlarge**: 4 cores, 32 GB memory (I3).
    // 
    // - **lindorm.i3.2xlarge**: 8 cores, 64 GB memory (I3).
    // 
    // - **lindorm.i3.4xlarge**: 16 cores, 128 GB memory (I3).
    // 
    // - **lindorm.i3.8xlarge**: 32 cores, 256 GB memory (I3).
    // 
    // - **lindorm.i2.xlarge**: 4 cores, 32 GB memory (I2).
    // 
    // - **lindorm.i2.2xlarge**: 8 cores, 64 GB memory (I2).
    // 
    // - **lindorm.i2.4xlarge**: 16 cores, 128 GB memory (I2).
    // 
    // - **lindorm.i2.8xlarge**: 32 cores, 256 GB memory (I2).
    // 
    // If the storage type is **local_hdd_pro**, valid values include:
    // 
    // - **lindorm.sd3c.3xlarge**: 14 cores, 56 GB memory (D3C PRO).
    // 
    // - **lindorm.sd3c.7xlarge**: 28 cores, 112 GB memory (D3C PRO).
    // 
    // - **lindorm.sd3c.14xlarge**: 56 cores, 224 GB memory (D3C PRO).
    // 
    // - **lindorm.d2c.6xlarge**: 24 cores, 88 GB memory (D2C).
    // 
    // - **lindorm.d2c.12xlarge**: 48 cores, 176 GB memory (D2C).
    // 
    // - **lindorm.d2c.24xlarge**: 96 cores, 352 GB memory (D2C).
    // 
    // - **lindorm.d2s.5xlarge**: 20 cores, 88 GB memory (D2S).
    // 
    // - **lindorm.d2s.10xlarge**: 40 cores, 176 GB memory (D2S).
    // 
    // - **lindorm.d1.2xlarge**: 8 cores, 32 GB memory (D1NE).
    // 
    // - **lindorm.d1.4xlarge**: 16 cores, 64 GB memory (D1NE).
    // 
    // - **lindorm.d1.6xlarge**: 24 cores, 96 GB memory (D1NE).
    shared_ptr<string> coreSpec_ {};
    // The storage type of the instance. Valid values:
    // 
    // - **cloud_efficiency**: Efficiency cloud disk.
    // 
    // - **cloud_ssd**: Performance cloud disk.
    // 
    // - **cloud_essd**: Enhanced SSD (ESSD).
    // 
    // - **cloud_essd_pl0**: ESSD PL0.
    // 
    // - **capacity_cloud_storage**: Capacity-optimized cloud storage. (Not available for multi-zone instances.)
    // 
    // - **local_ssd_pro**: Local SSD. (Not available for multi-zone instances.)
    // 
    // - **local_hdd_pro**: Local HDD. (Not available for multi-zone instances.)
    // 
    // This parameter is required.
    shared_ptr<string> diskCategory_ {};
    // The subscription duration for the instance. Valid values:
    // 
    // - If **PricingCycle** is set to **Month**, the value can range from **1** to **9**.
    // 
    // - If **PricingCycle** is set to **Year**, the value can range from **1** to **3**.
    // 
    // > This parameter is required if you set **PayType** to **PREPAY**.
    shared_ptr<string> duration_ {};
    // The number of nodes in the file engine. Valid values:
    // 
    // - For a Subscription instance, the value of this parameter ranges from **0** to **60**.
    // 
    // - For a Pay-As-You-Go instance, the value of this parameter ranges from **0** to **8**.
    shared_ptr<int32_t> filestoreNum_ {};
    // The specification of the file engine nodes. Valid values:
    // 
    // - **lindorm.c.xlarge**: 4 cores, 8 GB memory (standard).
    shared_ptr<string> filestoreSpec_ {};
    // The name of the instance.
    shared_ptr<string> instanceAlias_ {};
    // The storage capacity of the instance, in GB.
    shared_ptr<string> instanceStorage_ {};
    // The number of nodes in the wide table engine.
    // 
    // For a single-zone instance, the value of this parameter ranges from **0** to **90**.
    // 
    // **This parameter is required for multi-zone instances.** For an instance that uses cloud disks, the value ranges from **4** to **400**. For an instance that uses local disks, the value ranges from **6** to **400**.
    shared_ptr<int32_t> lindormNum_ {};
    // The specification of the wide table engine nodes. Valid values:
    // 
    // - **lindorm.g.xlarge**: 4 cores, 16 GB memory (dedicated).
    // 
    // - **lindorm.c.2xlarge**: 8 cores, 16 GB memory (dedicated).
    // 
    // - **lindorm.g.2xlarge**: 8 cores, 32 GB memory (dedicated).
    // 
    // - **lindorm.c.4xlarge**: 16 cores, 32 GB memory (dedicated).
    // 
    // - **lindorm.g.4xlarge**: 16 cores, 64 GB memory (dedicated).
    // 
    // - **lindorm.c.8xlarge**: 32 cores, 64 GB memory (dedicated).
    // 
    // - **lindorm.g.8xlarge**: 32 cores, 128 GB memory (dedicated).
    shared_ptr<string> lindormSpec_ {};
    // The storage type of the log nodes for the multi-zone instance. Valid values:
    // 
    // - **cloud_efficiency**: Efficiency cloud disk.
    // 
    // - **cloud_ssd**: Performance cloud disk.
    // 
    // **This parameter is required for multi-zone instances.**
    shared_ptr<string> logDiskCategory_ {};
    // The number of log nodes for the multi-zone instance. The value of this parameter ranges from 4 to 400. **This parameter is required for multi-zone instances.**
    shared_ptr<int32_t> logNum_ {};
    // The storage capacity of a single log node in the multi-zone instance. Unit: GB. The value of this parameter ranges from 400 to 64,000. **This parameter is required for multi-zone instances.**
    shared_ptr<int32_t> logSingleStorage_ {};
    // The specification of the log nodes for the multi-zone instance. Valid values:
    // 
    // - **lindorm.sn1.large**: 4 cores, 8 GB memory (dedicated).
    // 
    // - **lindorm.sn1.2xlarge**: 8 cores, 16 GB memory (dedicated).
    // 
    // **This parameter is required for multi-zone instances.**
    shared_ptr<string> logSpec_ {};
    // The number of nodes in the LTS engine. The value of this parameter ranges from **0** to **60**.
    shared_ptr<string> ltsNum_ {};
    // The specification of the LTS engine nodes. Valid values:
    // 
    // - **lindorm.c.xlarge**: 4 cores, 8 GB memory (dedicated).
    // 
    // - **lindorm.g.xlarge**: 4 cores, 16 GB memory (dedicated).
    // 
    // - **lindorm.c.2xlarge**: 8 cores, 16 GB memory (dedicated).
    // 
    // - **lindorm.g.2xlarge**: 8 cores, 32 GB memory (dedicated).
    // 
    // - **lindorm.c.4xlarge**: 16 cores, 32 GB memory (dedicated).
    // 
    // - **lindorm.g.4xlarge**: 16 cores, 64 GB memory (dedicated).
    // 
    // - **lindorm.c.8xlarge**: 32 cores, 64 GB memory (dedicated).
    // 
    // - **lindorm.g.8xlarge**: 32 cores, 128 GB memory (dedicated).
    shared_ptr<string> ltsSpec_ {};
    // The combination of zones for the multi-zone instance. For a list of supported combinations, refer to the instance purchase page.
    // 
    // - **ap-southeast-5abc-aliyun**: Indonesia (Jakarta) A+B+C.
    // 
    // - **cn-hangzhou-ehi-aliyun**: China (Hangzhou) E+H+I.
    // 
    // - **cn-beijing-acd-aliyun**: China (Beijing) A+C+D.
    // 
    // - **ap-southeast-1-abc-aliyun**: Singapore A+B+C.
    // 
    // - **cn-zhangjiakou-abc-aliyun**: China (Zhangjiakou) A+B+C.
    // 
    // - **cn-shanghai-efg-aliyun**: China (Shanghai) E+F+G.
    // 
    // - **cn-shanghai-abd-aliyun**: China (Shanghai) A+B+D.
    // 
    // - **cn-hangzhou-bef-aliyun**: China (Hangzhou) B+E+F.
    // 
    // - **cn-hangzhou-bce-aliyun**: China (Hangzhou) B+C+E.
    // 
    // - **cn-beijing-fgh-aliyun**: China (Beijing) F+G+H.
    // 
    // - **cn-shenzhen-abc-aliyun**: China (Shenzhen) A+B+C.
    // 
    // **This parameter is required for multi-zone instances.**
    shared_ptr<string> multiZoneCombination_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The billing method of the instance. Valid values:
    // 
    // - **PREPAY**: Subscription.
    // 
    // - **POSTPAY**: Pay-As-You-Go.
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The billing cycle for the Subscription instance. Valid values:
    // 
    // - **Month**
    // 
    // - **Year**
    // 
    // > This parameter is required if you set **PayType** to **PREPAY**.
    shared_ptr<string> pricingCycle_ {};
    // The ID of the VSwitch for the primary zone of the multi-zone instance. The VSwitch must be in the zone specified by `PrimaryZoneId`. **This parameter is required for multi-zone instances.**
    shared_ptr<string> primaryVSwitchId_ {};
    // The ID of the primary zone for the multi-zone instance. **This parameter is required for multi-zone instances.**
    shared_ptr<string> primaryZoneId_ {};
    // The ID of the region in which to create the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/426062.html) operation to query the latest region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> securityToken_ {};
    // The number of search engine nodes. The value of this parameter ranges from **0** to **60**.
    shared_ptr<int32_t> solrNum_ {};
    // The specification of the search engine nodes. Valid values:
    // 
    // - **lindorm.g.xlarge**: 4 cores, 16 GB memory (dedicated).
    // 
    // - **lindorm.c.2xlarge**: 8 cores, 16 GB memory (dedicated).
    // 
    // - **lindorm.g.2xlarge**: 8 cores, 32 GB memory (dedicated).
    // 
    // - **lindorm.c.4xlarge**: 16 cores, 32 GB memory (dedicated).
    // 
    // - **lindorm.g.4xlarge**: 16 cores, 64 GB memory (dedicated).
    // 
    // - **lindorm.c.8xlarge**: 32 cores, 64 GB memory (dedicated).
    // 
    // - **lindorm.g.8xlarge**: 32 cores, 128 GB memory (dedicated).
    shared_ptr<string> solrSpec_ {};
    // The ID of the VSwitch for the standby zone of the multi-zone instance. The VSwitch must be in the zone specified by `StandbyZoneId`. **This parameter is required for multi-zone instances.**
    shared_ptr<string> standbyVSwitchId_ {};
    // The ID of the standby zone for the multi-zone instance. **This parameter is required for multi-zone instances.**
    shared_ptr<string> standbyZoneId_ {};
    // The number of nodes in the stream engine. The value of this parameter ranges from **0** to **60**.
    shared_ptr<int32_t> streamNum_ {};
    // The specification of the stream engine nodes. Valid values:
    // 
    // - **lindorm.g.xlarge**: 4 cores, 16 GB memory (dedicated).
    // 
    // - **lindorm.c.2xlarge**: 8 cores, 16 GB memory (dedicated).
    // 
    // - **lindorm.g.2xlarge**: 8 cores, 32 GB memory (dedicated).
    // 
    // - **lindorm.c.4xlarge**: 16 cores, 32 GB memory (dedicated).
    // 
    // - **lindorm.g.4xlarge**: 16 cores, 64 GB memory (dedicated).
    // 
    // - **lindorm.c.8xlarge**: 32 cores, 64 GB memory (dedicated).
    // 
    // - **lindorm.g.8xlarge**: 32 cores, 128 GB memory (dedicated).
    shared_ptr<string> streamSpec_ {};
    // The tags to add to the instance. You can add up to 20 tags.
    shared_ptr<vector<CreateLindormInstanceRequest::Tag>> tag_ {};
    // The number of nodes in the time series engine. Valid values:
    // 
    // - For a Subscription instance, the value of this parameter ranges from **0** to **24**.
    // 
    // - For a Pay-As-You-Go instance, the value of this parameter ranges from **0** to **32**.
    shared_ptr<int32_t> tsdbNum_ {};
    // The specification of the time series engine nodes. Valid values:
    // 
    // - **lindorm.g.xlarge**: 4 cores, 16 GB memory (dedicated).
    // 
    // - **lindorm.g.2xlarge**: 8 cores, 32 GB memory (dedicated).
    // 
    // - **lindorm.g.4xlarge**: 16 cores, 64 GB memory (dedicated).
    // 
    // - **lindorm.g.8xlarge**: 32 cores, 128 GB memory (dedicated).
    shared_ptr<string> tsdbSpec_ {};
    // The ID of the VPC where you want to create the instance.
    // 
    // This parameter is required.
    shared_ptr<string> VPCId_ {};
    // The ID of the VSwitch.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the zone where you want to create the instance.
    // 
    // This parameter is required.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
