// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateDBInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(CNNodeCount, CNNodeCount_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CnClass, cnClass_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_TO_JSON(DNNodeCount, DNNodeCount_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DnClass, dnClass_);
      DARABONBA_PTR_TO_JSON(DnStorageSpace, dnStorageSpace_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExtraParams, extraParamsShrink_);
      DARABONBA_PTR_TO_JSON(IsColumnarReadDBInstance, isColumnarReadDBInstance_);
      DARABONBA_PTR_TO_JSON(IsReadDBInstance, isReadDBInstance_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OriginMinorVersion, originMinorVersion_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PrimaryDBInstanceName, primaryDBInstanceName_);
      DARABONBA_PTR_TO_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondaryZone, secondaryZone_);
      DARABONBA_PTR_TO_JSON(Series, series_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(TertiaryZone, tertiaryZone_);
      DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(CNNodeCount, CNNodeCount_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CnClass, cnClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeCount, DBNodeCount_);
      DARABONBA_PTR_FROM_JSON(DNNodeCount, DNNodeCount_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DnClass, dnClass_);
      DARABONBA_PTR_FROM_JSON(DnStorageSpace, dnStorageSpace_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExtraParams, extraParamsShrink_);
      DARABONBA_PTR_FROM_JSON(IsColumnarReadDBInstance, isColumnarReadDBInstance_);
      DARABONBA_PTR_FROM_JSON(IsReadDBInstance, isReadDBInstance_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OriginMinorVersion, originMinorVersion_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PrimaryDBInstanceName, primaryDBInstanceName_);
      DARABONBA_PTR_FROM_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZone, secondaryZone_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(TertiaryZone, tertiaryZone_);
      DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateDBInstanceShrinkRequest() = default ;
    CreateDBInstanceShrinkRequest(const CreateDBInstanceShrinkRequest &) = default ;
    CreateDBInstanceShrinkRequest(CreateDBInstanceShrinkRequest &&) = default ;
    CreateDBInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBInstanceShrinkRequest() = default ;
    CreateDBInstanceShrinkRequest& operator=(const CreateDBInstanceShrinkRequest &) = default ;
    CreateDBInstanceShrinkRequest& operator=(CreateDBInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->CNNodeCount_ == nullptr && this->clientToken_ == nullptr && this->cnClass_ == nullptr && this->DBNodeClass_ == nullptr && this->DBNodeCount_ == nullptr
        && this->DNNodeCount_ == nullptr && this->description_ == nullptr && this->dnClass_ == nullptr && this->dnStorageSpace_ == nullptr && this->engineVersion_ == nullptr
        && this->extraParamsShrink_ == nullptr && this->isColumnarReadDBInstance_ == nullptr && this->isReadDBInstance_ == nullptr && this->networkType_ == nullptr && this->originMinorVersion_ == nullptr
        && this->payType_ == nullptr && this->period_ == nullptr && this->primaryDBInstanceName_ == nullptr && this->primaryZone_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->secondaryZone_ == nullptr && this->series_ == nullptr && this->storageType_ == nullptr && this->tertiaryZone_ == nullptr
        && this->topologyType_ == nullptr && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateDBInstanceShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // CNNodeCount Field Functions 
    bool hasCNNodeCount() const { return this->CNNodeCount_ != nullptr;};
    void deleteCNNodeCount() { this->CNNodeCount_ = nullptr;};
    inline int32_t getCNNodeCount() const { DARABONBA_PTR_GET_DEFAULT(CNNodeCount_, 0) };
    inline CreateDBInstanceShrinkRequest& setCNNodeCount(int32_t CNNodeCount) { DARABONBA_PTR_SET_VALUE(CNNodeCount_, CNNodeCount) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cnClass Field Functions 
    bool hasCnClass() const { return this->cnClass_ != nullptr;};
    void deleteCnClass() { this->cnClass_ = nullptr;};
    inline string getCnClass() const { DARABONBA_PTR_GET_DEFAULT(cnClass_, "") };
    inline CreateDBInstanceShrinkRequest& setCnClass(string cnClass) { DARABONBA_PTR_SET_VALUE(cnClass_, cnClass) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string getDBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline CreateDBInstanceShrinkRequest& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeCount Field Functions 
    bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
    void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
    inline int32_t getDBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0) };
    inline CreateDBInstanceShrinkRequest& setDBNodeCount(int32_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


    // DNNodeCount Field Functions 
    bool hasDNNodeCount() const { return this->DNNodeCount_ != nullptr;};
    void deleteDNNodeCount() { this->DNNodeCount_ = nullptr;};
    inline int32_t getDNNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DNNodeCount_, 0) };
    inline CreateDBInstanceShrinkRequest& setDNNodeCount(int32_t DNNodeCount) { DARABONBA_PTR_SET_VALUE(DNNodeCount_, DNNodeCount) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDBInstanceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnClass Field Functions 
    bool hasDnClass() const { return this->dnClass_ != nullptr;};
    void deleteDnClass() { this->dnClass_ = nullptr;};
    inline string getDnClass() const { DARABONBA_PTR_GET_DEFAULT(dnClass_, "") };
    inline CreateDBInstanceShrinkRequest& setDnClass(string dnClass) { DARABONBA_PTR_SET_VALUE(dnClass_, dnClass) };


    // dnStorageSpace Field Functions 
    bool hasDnStorageSpace() const { return this->dnStorageSpace_ != nullptr;};
    void deleteDnStorageSpace() { this->dnStorageSpace_ = nullptr;};
    inline string getDnStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(dnStorageSpace_, "") };
    inline CreateDBInstanceShrinkRequest& setDnStorageSpace(string dnStorageSpace) { DARABONBA_PTR_SET_VALUE(dnStorageSpace_, dnStorageSpace) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateDBInstanceShrinkRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // extraParamsShrink Field Functions 
    bool hasExtraParamsShrink() const { return this->extraParamsShrink_ != nullptr;};
    void deleteExtraParamsShrink() { this->extraParamsShrink_ = nullptr;};
    inline string getExtraParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(extraParamsShrink_, "") };
    inline CreateDBInstanceShrinkRequest& setExtraParamsShrink(string extraParamsShrink) { DARABONBA_PTR_SET_VALUE(extraParamsShrink_, extraParamsShrink) };


    // isColumnarReadDBInstance Field Functions 
    bool hasIsColumnarReadDBInstance() const { return this->isColumnarReadDBInstance_ != nullptr;};
    void deleteIsColumnarReadDBInstance() { this->isColumnarReadDBInstance_ = nullptr;};
    inline bool getIsColumnarReadDBInstance() const { DARABONBA_PTR_GET_DEFAULT(isColumnarReadDBInstance_, false) };
    inline CreateDBInstanceShrinkRequest& setIsColumnarReadDBInstance(bool isColumnarReadDBInstance) { DARABONBA_PTR_SET_VALUE(isColumnarReadDBInstance_, isColumnarReadDBInstance) };


    // isReadDBInstance Field Functions 
    bool hasIsReadDBInstance() const { return this->isReadDBInstance_ != nullptr;};
    void deleteIsReadDBInstance() { this->isReadDBInstance_ = nullptr;};
    inline bool getIsReadDBInstance() const { DARABONBA_PTR_GET_DEFAULT(isReadDBInstance_, false) };
    inline CreateDBInstanceShrinkRequest& setIsReadDBInstance(bool isReadDBInstance) { DARABONBA_PTR_SET_VALUE(isReadDBInstance_, isReadDBInstance) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateDBInstanceShrinkRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // originMinorVersion Field Functions 
    bool hasOriginMinorVersion() const { return this->originMinorVersion_ != nullptr;};
    void deleteOriginMinorVersion() { this->originMinorVersion_ = nullptr;};
    inline string getOriginMinorVersion() const { DARABONBA_PTR_GET_DEFAULT(originMinorVersion_, "") };
    inline CreateDBInstanceShrinkRequest& setOriginMinorVersion(string originMinorVersion) { DARABONBA_PTR_SET_VALUE(originMinorVersion_, originMinorVersion) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBInstanceShrinkRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBInstanceShrinkRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // primaryDBInstanceName Field Functions 
    bool hasPrimaryDBInstanceName() const { return this->primaryDBInstanceName_ != nullptr;};
    void deletePrimaryDBInstanceName() { this->primaryDBInstanceName_ = nullptr;};
    inline string getPrimaryDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(primaryDBInstanceName_, "") };
    inline CreateDBInstanceShrinkRequest& setPrimaryDBInstanceName(string primaryDBInstanceName) { DARABONBA_PTR_SET_VALUE(primaryDBInstanceName_, primaryDBInstanceName) };


    // primaryZone Field Functions 
    bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
    void deletePrimaryZone() { this->primaryZone_ = nullptr;};
    inline string getPrimaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
    inline CreateDBInstanceShrinkRequest& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secondaryZone Field Functions 
    bool hasSecondaryZone() const { return this->secondaryZone_ != nullptr;};
    void deleteSecondaryZone() { this->secondaryZone_ = nullptr;};
    inline string getSecondaryZone() const { DARABONBA_PTR_GET_DEFAULT(secondaryZone_, "") };
    inline CreateDBInstanceShrinkRequest& setSecondaryZone(string secondaryZone) { DARABONBA_PTR_SET_VALUE(secondaryZone_, secondaryZone) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string getSeries() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline CreateDBInstanceShrinkRequest& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDBInstanceShrinkRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tertiaryZone Field Functions 
    bool hasTertiaryZone() const { return this->tertiaryZone_ != nullptr;};
    void deleteTertiaryZone() { this->tertiaryZone_ = nullptr;};
    inline string getTertiaryZone() const { DARABONBA_PTR_GET_DEFAULT(tertiaryZone_, "") };
    inline CreateDBInstanceShrinkRequest& setTertiaryZone(string tertiaryZone) { DARABONBA_PTR_SET_VALUE(tertiaryZone_, tertiaryZone) };


    // topologyType Field Functions 
    bool hasTopologyType() const { return this->topologyType_ != nullptr;};
    void deleteTopologyType() { this->topologyType_ = nullptr;};
    inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
    inline CreateDBInstanceShrinkRequest& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateDBInstanceShrinkRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBInstanceShrinkRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether to enable auto-renewal. Default value: true. Valid values:
    // - **true**: Enables auto-renewal.
    // - **false**: Disables auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // The number of compute nodes.
    shared_ptr<int32_t> CNNodeCount_ {};
    // The client token that is used to ensure the idempotence of the request. You must specify a unique token for each request.
    shared_ptr<string> clientToken_ {};
    // The specifications of compute nodes. Required when you create an Enterprise Edition instance. Not required for a Standard Edition instance.
    // 
    // Local node specifications for Enterprise Edition:
    // - **polarx.x4.medium.2e**: 2 vCPUs, 8 GB (general-purpose)
    // - **polarx.x4.large.2e**: 4 vCPUs, 16 GB (general-purpose)
    // - **polarx.x4.xlarge.2e**: 8 vCPUs, 32 GB (general-purpose)
    // - **polarx.x4.2xlarge.2e**: 16 vCPUs, 64 GB (general-purpose)
    // - **polarx.x8.large.2e**: 4 vCPUs, 32 GB (dedicated)
    // - **polarx.x2.large.2x**: 8 vCPUs, 16 GB (dedicated)
    // - **polarx.x4.xlarge.2x**: 8 vCPUs, 32 GB (dedicated)
    // - **polarx.x8.xlarge.2e**: 8 vCPUs, 64 GB (dedicated)
    // - **polarx.x8.2xlarge.2e**: 16 vCPUs, 128 GB (dedicated)
    // - **polarx.x4.4xlarge.2e**: 32 vCPUs, 128 GB (dedicated)
    // - **polarx.x8.4xlarge.2e**: 32 vCPUs, 256 GB (dedicated)
    // - **polarx.st.8xlarge.2e**: 60 vCPUs, 470 GB (dedicated)
    // - **polarx.st.12xlarge.2e**: 90 vCPUs, 720 GB (dedicated)
    // 
    // Cloud node specifications for Enterprise Edition:
    // - **polarx.x4.medium.c2e**: 2 vCPUs, 8 GB (general-purpose)
    // - **polarx.x4.large.c2e**: 4 vCPUs, 16 GB (general-purpose)
    // - **polarx.x4.xlarge.c2e**: 8 vCPUs, 32 GB (general-purpose)
    // - **polarx.x4.2xlarge.c2e**: 16 vCPUs, 64 GB (general-purpose)
    // - **polarx.x8.large.c2e**: 4 vCPUs, 32 GB (dedicated)
    // - **polarx.x2.large.c2x**: 8 vCPUs, 16 GB (dedicated)
    // - **polarx.x4.xlarge.c2x**: 8 vCPUs, 32 GB (dedicated)
    // - **polarx.x8.xlarge.c2e**: 8 vCPUs, 64 GB (dedicated)
    // - **polarx.x8.2xlarge.c2e**: 16 vCPUs, 128 GB (dedicated)
    // - **polarx.x4.4xlarge.c2e**: 32 vCPUs, 128 GB (dedicated)
    // - **polarx.x8.4xlarge.c2e**: 32 vCPUs, 256 GB (dedicated)
    // - **polarx.st.8xlarge.c2e**: 60 vCPUs, 470 GB (dedicated)
    // - **polarx.st.12xlarge.c2e**: 90 vCPUs, 720 GB (dedicated)
    shared_ptr<string> cnClass_ {};
    // Required when you create a Standard Edition instance. Not required for an Enterprise Edition instance.
    // 
    // Local disk specifications for Standard Edition:
    // - **mysql.n8.small.25**: 1 vCPU, 8 GB (general-purpose)
    // - **mysql.n2.medium.25**: 2 vCPUs, 4 GB (general-purpose)
    // - **mysql.n4.medium.25**: 2 vCPUs, 8 GB (general-purpose)
    // - **mysql.n8.medium.25**: 2 vCPUs, 16 GB (general-purpose)
    // - **mysql.n2.large.25**: 4 vCPUs, 8 GB (general-purpose)
    // - **mysql.n4.large.25**: 4 vCPUs, 16 GB (general-purpose)
    // - **mysql.n8.large.25**: 4 vCPUs, 32 GB (general-purpose)
    // - **mysql.n2.xlarge.25**: 8 vCPUs, 16 GB (general-purpose)
    // - **mysql.n4.xlarge.25**: 8 vCPUs, 32 GB (general-purpose)
    // - **mysql.n8.xlarge.25**: 8 vCPUs, 64 GB (general-purpose)
    // - **mysql.n2.2xlarge.25**: 16 vCPUs, 32 GB (general-purpose)
    // - **mysql.n4.2xlarge.25**: 16 vCPUs, 64 GB (general-purpose)
    // - **mysql.n8.2xlarge.25**: 16 vCPUs, 128 GB (general-purpose)
    // - **mysql.x2.medium.25**: 2 vCPUs, 4 GB (dedicated)
    // - **mysql.x4.medium.25**: 2 vCPUs, 8 GB (dedicated)
    // - **mysql.x8.medium.25**: 2 vCPUs, 16 GB (dedicated)
    // - **mysql.x2.large.25**: 4 vCPUs, 8 GB (dedicated)
    // - **mysql.x4.large.25**: 4 vCPUs, 16 GB (dedicated)
    // - **mysql.x8.large.25**: 4 vCPUs, 32 GB (dedicated)
    // - **mysql.x2.xlarge.25**: 8 vCPUs, 16 GB (dedicated)
    // - **mysql.x4.xlarge.25**: 8 vCPUs, 32 GB (dedicated)
    // - **mysql.x8.xlarge.25**: 8 vCPUs, 64 GB (dedicated)
    // - **mysql.x2.2xlarge.25**: 16 vCPUs, 32 GB (dedicated)
    // - **mysql.x4.2xlarge.25**: 16 vCPUs, 64 GB (dedicated)
    // - **mysql.x8.2xlarge.25**: 16 vCPUs, 128 GB (dedicated)
    // - **mysql.x4.4xlarge.25**: 32 vCPUs, 128 GB (dedicated)
    // - **mysql.x8.4xlarge.25**: 32 vCPUs, 256 GB (dedicated)
    // - **mysql.x4.8xlarge.25**: 64 vCPUs, 256 GB (dedicated)
    // - **mysql.x8.8xlarge.25**: 64 vCPUs, 512 GB (dedicated)
    // - **mysql.st.12xlarge.25**: 90 vCPUs, 720 GB (dedicated)
    // 
    // Cloud disk specifications for Standard Edition:
    // - **polarx.mysql.n2.medium.c25**: 2 vCPUs, 4 GB (general-purpose)
    // - **polarx.mysql.n4.medium.c25**: 2 vCPUs, 8 GB (general-purpose)
    // - **polarx.mysql.n8.medium.c25**: 2 vCPUs, 16 GB (general-purpose)
    // - **polarx.mysql.n2.large.c25**: 4 vCPUs, 8 GB (general-purpose)
    // - **polarx.mysql.n4.large.c25**: 4 vCPUs, 16 GB (general-purpose)
    // - **polarx.mysql.n8.large.c25**: 4 vCPUs, 32 GB (general-purpose)
    // - **polarx.mysql.n2.xlarge.c25**: 8 vCPUs, 16 GB (general-purpose)
    // - **polarx.mysql.n4.xlarge.c25**: 8 vCPUs, 32 GB (general-purpose)
    // - **polarx.mysql.n8.xlarge.c25**: 8 vCPUs, 64 GB (general-purpose)
    // - **polarx.mysql.x2.medium.c25**: 2 vCPUs, 4 GB (dedicated)
    // - **polarx.mysql.x4.medium.c25**: 2 vCPUs, 8 GB (dedicated)
    // - **polarx.mysql.x8.medium.c25**: 2 vCPUs, 16 GB (dedicated)
    // - **polarx.mysql.x2.large.c25**: 4 vCPUs, 8 GB (dedicated)
    // - **polarx.mysql.x4.large.c25**: 4 vCPUs, 16 GB (dedicated)
    // - **polarx.mysql.x8.large.c25**: 4 vCPUs, 32 GB (dedicated)
    // - **polarx.mysql.x2.xlarge.c25**: 8 vCPUs, 16 GB (dedicated)
    // - **polarx.mysql.x4.xlarge.c25**: 8 vCPUs, 32 GB (dedicated)
    // - **polarx.mysql.x8.xlarge.c25**: 8 vCPUs, 64 GB (dedicated)
    // - **polarx.mysql.x2.2xlarge.c25**: 16 vCPUs, 32 GB (dedicated)
    // - **polarx.mysql.x4.2xlarge.c25**: 16 vCPUs, 64 GB (dedicated)
    // - **polarx.mysql.x8.2xlarge.c25**: 16 vCPUs, 128 GB (dedicated)
    // - **polarx.mysql.x2.4xlarge.c25**: 32 vCPUs, 64 GB (dedicated)
    // - **polarx.mysql.x4.4xlarge.c25**: 32 vCPUs, 128 GB (dedicated)
    // - **polarx.mysql.x8.4xlarge.c25**: 32 vCPUs, 256 GB (dedicated)
    // - **polarx.mysql.x2.8xlarge.c25**: 64 vCPUs, 128 GB (dedicated)
    // - **polarx.mysql.x4.8xlarge.c25**: 64 vCPUs, 256 GB (dedicated)
    // - **polarx.mysql.x8.8xlarge.c25**: 64 vCPUs, 512 GB (dedicated)
    shared_ptr<string> DBNodeClass_ {};
    // The number of nodes in the instance. Valid values:
    // * Standard Edition: 1
    // * Enterprise Edition: 2 or greater
    shared_ptr<int32_t> DBNodeCount_ {};
    // The number of storage nodes.
    shared_ptr<int32_t> DNNodeCount_ {};
    // The description of the database.
    shared_ptr<string> description_ {};
    // The specifications of storage nodes. Required when you create an Enterprise Edition instance. Not required for a Standard Edition instance.
    // 
    // Local node specifications for Enterprise Edition:
    // - **mysql.n2.medium.25**: 2 vCPUs, 4 GB (general-purpose)
    // - **mysql.n4.medium.25**: 2 vCPUs, 8 GB (general-purpose)
    // - **mysql.n2.large.25**: 4 vCPUs, 8 GB (general-purpose)
    // - **mysql.n4.large.25**: 4 vCPUs, 16 GB (general-purpose)
    // - **mysql.n4.xlarge.25**: 8 vCPUs, 32 GB (general-purpose)
    // - **mysql.n4.2xlarge.25**: 16 vCPUs, 64 GB (general-purpose)
    // - **mysql.x4.large.25**: 4 vCPUs, 16 GB (dedicated)
    // - **mysql.x8.large.25**: 4 vCPUs, 32 GB (dedicated)
    // - **mysql.x2.xlarge.25**: 8 vCPUs, 16 GB (dedicated)
    // - **mysql.x8.xlarge.25**: 8 vCPUs, 64 GB (dedicated)
    // - **mysql.x8.2xlarge.25**: 16 vCPUs, 128 GB (dedicated)
    // - **mysql.x4.4xlarge.25**: 32 vCPUs, 128 GB (dedicated)
    // - **mysql.x8.4xlarge.25**: 32 vCPUs, 256 GB (dedicated)
    // - **mysql.st.8xlarge.25**: 60 vCPUs, 470 GB (dedicated)
    // - **mysql.st.12xlarge.25**: 90 vCPUs, 720 GB (dedicated)
    // - **mysql.x8.45xlarge.25**: 180 vCPUs, 1440 GB (dedicated)
    // - **mysql.x8.60xlarge.25**: 240 vCPUs, 1920 GB (dedicated)
    // 
    // Cloud node specifications for Enterprise Edition:
    // - **polarx.mysql.n2.medium.c25**: 2 vCPUs, 4 GB (general-purpose)
    // - **polarx.mysql.n4.medium.c25**: 2 vCPUs, 8 GB (general-purpose)
    // - **polarx.mysql.n2.large.c25**: 4 vCPUs, 8 GB (general-purpose)
    // - **polarx.mysql.n4.large.c25**: 4 vCPUs, 16 GB (general-purpose)
    // - **polarx.mysql.n4.xlarge.c25**: 8 vCPUs, 32 GB (general-purpose)
    // - **polarx.mysql.n4.2xlarge.c25**: 16 vCPUs, 64 GB (general-purpose)
    // - **polarx.mysql.x4.large.c25**: 4 vCPUs, 16 GB (dedicated)
    // - **polarx.mysql.x8.large.c25**: 4 vCPUs, 32 GB (dedicated)
    // - **polarx.mysql.x2.xlarge.c25**: 8 vCPUs, 16 GB (dedicated)
    // - **polarx.mysql.x8.xlarge.c25**: 8 vCPUs, 64 GB (dedicated)
    // - **polarx.mysql.x8.2xlarge.c25**: 16 vCPUs, 128 GB (dedicated)
    // - **polarx.mysql.x4.4xlarge.c25**: 32 vCPUs, 128 GB (dedicated)
    // - **polarx.mysql.x8.4xlarge.c25**: 32 vCPUs, 256 GB (dedicated)
    // - **polarx.mysql.st.8xlarge.c25**: 60 vCPUs, 470 GB (dedicated)
    // - **polarx.mysql.st.12xlarge.c25**: 90 vCPUs, 720 GB (dedicated)
    // - **polarx.mysql.x8.45xlarge.c25**: 180 vCPUs, 1440 GB (dedicated)
    // - **polarx.mysql.x8.60xlarge.c25**: 240 vCPUs, 1920 GB (dedicated)
    shared_ptr<string> dnClass_ {};
    // The disk space of the storage nodes.
    shared_ptr<string> dnStorageSpace_ {};
    // The MySQL DPI engine version. Valid values: 5.7 and 8.0.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The extra parameters.
    shared_ptr<string> extraParamsShrink_ {};
    // Specifies whether the instance to be created is a column store read-only instance.
    shared_ptr<bool> isColumnarReadDBInstance_ {};
    // Specifies whether the instance is a read-only instance. Valid values:
    // - **true**: Yes.
    // - **false**: No.
    shared_ptr<bool> isReadDBInstance_ {};
    // The network type of the instance. Only VPC is supported.
    shared_ptr<string> networkType_ {};
    // The minor engine version. This parameter is generally not required.
    shared_ptr<string> originMinorVersion_ {};
    // The billing method of the instance. Valid values:
    // - **PREPAY**: subscription
    // - **POSTPAY**: pay-as-you-go
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The billing cycle. Valid values for subscription instances: Year and Month. Default value for pay-as-you-go instances: Hour.
    shared_ptr<string> period_ {};
    // The name of the primary instance. This parameter is required if the instance is a read-only instance.
    shared_ptr<string> primaryDBInstanceName_ {};
    // The primary zone.
    shared_ptr<string> primaryZone_ {};
    // The region of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID. This parameter is not supported and can be left empty.
    shared_ptr<string> resourceGroupId_ {};
    // The secondary zone.
    shared_ptr<string> secondaryZone_ {};
    // The edition of the instance. Valid values:
    // - enterprise: Enterprise Edition
    // - standard: Standard Edition
    shared_ptr<string> series_ {};
    // The storage type. Valid values:
    // * custom_local_ssd: local disk
    // * cloud_auto: cloud disk
    shared_ptr<string> storageType_ {};
    // The third active zone in a Three-zone deployment.
    shared_ptr<string> tertiaryZone_ {};
    // The topology type. Valid values:
    // - **3azones**: Three-zone deployment (three active zones).
    // - **1azone**: Single active zone.
    // 
    // This parameter is required.
    shared_ptr<string> topologyType_ {};
    // The subscription duration. This parameter is required when the billing method is set to subscription.
    // 
    // > If Period is set to Year, valid values are 1, 2, and 3.
    shared_ptr<int32_t> usedTime_ {};
    // The VPC ID.
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
    // The zone of the instance.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
