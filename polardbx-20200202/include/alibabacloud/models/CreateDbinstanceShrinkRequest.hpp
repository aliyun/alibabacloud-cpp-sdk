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
      DARABONBA_PTR_TO_JSON(DnClass, dnClass_);
      DARABONBA_PTR_TO_JSON(DnStorageSpace, dnStorageSpace_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(ExtraParams, extraParamsShrink_);
      DARABONBA_PTR_TO_JSON(IsColumnarReadDBInstance, isColumnarReadDBInstance_);
      DARABONBA_PTR_TO_JSON(IsReadDBInstance, isReadDBInstance_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PrimaryDBInstanceName, primaryDBInstanceName_);
      DARABONBA_PTR_TO_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondaryZone, secondaryZone_);
      DARABONBA_PTR_TO_JSON(Series, series_);
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
      DARABONBA_PTR_FROM_JSON(DnClass, dnClass_);
      DARABONBA_PTR_FROM_JSON(DnStorageSpace, dnStorageSpace_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(ExtraParams, extraParamsShrink_);
      DARABONBA_PTR_FROM_JSON(IsColumnarReadDBInstance, isColumnarReadDBInstance_);
      DARABONBA_PTR_FROM_JSON(IsReadDBInstance, isReadDBInstance_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PrimaryDBInstanceName, primaryDBInstanceName_);
      DARABONBA_PTR_FROM_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZone, secondaryZone_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
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
    virtual bool empty() const override { this->autoRenew_ != nullptr
        && this->CNNodeCount_ != nullptr && this->clientToken_ != nullptr && this->cnClass_ != nullptr && this->DBNodeClass_ != nullptr && this->DBNodeCount_ != nullptr
        && this->DNNodeCount_ != nullptr && this->dnClass_ != nullptr && this->dnStorageSpace_ != nullptr && this->engineVersion_ != nullptr && this->extraParamsShrink_ != nullptr
        && this->isColumnarReadDBInstance_ != nullptr && this->isReadDBInstance_ != nullptr && this->networkType_ != nullptr && this->payType_ != nullptr && this->period_ != nullptr
        && this->primaryDBInstanceName_ != nullptr && this->primaryZone_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->secondaryZone_ != nullptr
        && this->series_ != nullptr && this->tertiaryZone_ != nullptr && this->topologyType_ != nullptr && this->usedTime_ != nullptr && this->VPCId_ != nullptr
        && this->vSwitchId_ != nullptr && this->zoneId_ != nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateDBInstanceShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // CNNodeCount Field Functions 
    bool hasCNNodeCount() const { return this->CNNodeCount_ != nullptr;};
    void deleteCNNodeCount() { this->CNNodeCount_ = nullptr;};
    inline int32_t CNNodeCount() const { DARABONBA_PTR_GET_DEFAULT(CNNodeCount_, 0) };
    inline CreateDBInstanceShrinkRequest& setCNNodeCount(int32_t CNNodeCount) { DARABONBA_PTR_SET_VALUE(CNNodeCount_, CNNodeCount) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBInstanceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cnClass Field Functions 
    bool hasCnClass() const { return this->cnClass_ != nullptr;};
    void deleteCnClass() { this->cnClass_ = nullptr;};
    inline string cnClass() const { DARABONBA_PTR_GET_DEFAULT(cnClass_, "") };
    inline CreateDBInstanceShrinkRequest& setCnClass(string cnClass) { DARABONBA_PTR_SET_VALUE(cnClass_, cnClass) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline CreateDBInstanceShrinkRequest& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeCount Field Functions 
    bool hasDBNodeCount() const { return this->DBNodeCount_ != nullptr;};
    void deleteDBNodeCount() { this->DBNodeCount_ = nullptr;};
    inline int32_t DBNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DBNodeCount_, 0) };
    inline CreateDBInstanceShrinkRequest& setDBNodeCount(int32_t DBNodeCount) { DARABONBA_PTR_SET_VALUE(DBNodeCount_, DBNodeCount) };


    // DNNodeCount Field Functions 
    bool hasDNNodeCount() const { return this->DNNodeCount_ != nullptr;};
    void deleteDNNodeCount() { this->DNNodeCount_ = nullptr;};
    inline int32_t DNNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DNNodeCount_, 0) };
    inline CreateDBInstanceShrinkRequest& setDNNodeCount(int32_t DNNodeCount) { DARABONBA_PTR_SET_VALUE(DNNodeCount_, DNNodeCount) };


    // dnClass Field Functions 
    bool hasDnClass() const { return this->dnClass_ != nullptr;};
    void deleteDnClass() { this->dnClass_ = nullptr;};
    inline string dnClass() const { DARABONBA_PTR_GET_DEFAULT(dnClass_, "") };
    inline CreateDBInstanceShrinkRequest& setDnClass(string dnClass) { DARABONBA_PTR_SET_VALUE(dnClass_, dnClass) };


    // dnStorageSpace Field Functions 
    bool hasDnStorageSpace() const { return this->dnStorageSpace_ != nullptr;};
    void deleteDnStorageSpace() { this->dnStorageSpace_ = nullptr;};
    inline string dnStorageSpace() const { DARABONBA_PTR_GET_DEFAULT(dnStorageSpace_, "") };
    inline CreateDBInstanceShrinkRequest& setDnStorageSpace(string dnStorageSpace) { DARABONBA_PTR_SET_VALUE(dnStorageSpace_, dnStorageSpace) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateDBInstanceShrinkRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // extraParamsShrink Field Functions 
    bool hasExtraParamsShrink() const { return this->extraParamsShrink_ != nullptr;};
    void deleteExtraParamsShrink() { this->extraParamsShrink_ = nullptr;};
    inline string extraParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(extraParamsShrink_, "") };
    inline CreateDBInstanceShrinkRequest& setExtraParamsShrink(string extraParamsShrink) { DARABONBA_PTR_SET_VALUE(extraParamsShrink_, extraParamsShrink) };


    // isColumnarReadDBInstance Field Functions 
    bool hasIsColumnarReadDBInstance() const { return this->isColumnarReadDBInstance_ != nullptr;};
    void deleteIsColumnarReadDBInstance() { this->isColumnarReadDBInstance_ = nullptr;};
    inline bool isColumnarReadDBInstance() const { DARABONBA_PTR_GET_DEFAULT(isColumnarReadDBInstance_, false) };
    inline CreateDBInstanceShrinkRequest& setIsColumnarReadDBInstance(bool isColumnarReadDBInstance) { DARABONBA_PTR_SET_VALUE(isColumnarReadDBInstance_, isColumnarReadDBInstance) };


    // isReadDBInstance Field Functions 
    bool hasIsReadDBInstance() const { return this->isReadDBInstance_ != nullptr;};
    void deleteIsReadDBInstance() { this->isReadDBInstance_ = nullptr;};
    inline bool isReadDBInstance() const { DARABONBA_PTR_GET_DEFAULT(isReadDBInstance_, false) };
    inline CreateDBInstanceShrinkRequest& setIsReadDBInstance(bool isReadDBInstance) { DARABONBA_PTR_SET_VALUE(isReadDBInstance_, isReadDBInstance) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateDBInstanceShrinkRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateDBInstanceShrinkRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateDBInstanceShrinkRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // primaryDBInstanceName Field Functions 
    bool hasPrimaryDBInstanceName() const { return this->primaryDBInstanceName_ != nullptr;};
    void deletePrimaryDBInstanceName() { this->primaryDBInstanceName_ = nullptr;};
    inline string primaryDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(primaryDBInstanceName_, "") };
    inline CreateDBInstanceShrinkRequest& setPrimaryDBInstanceName(string primaryDBInstanceName) { DARABONBA_PTR_SET_VALUE(primaryDBInstanceName_, primaryDBInstanceName) };


    // primaryZone Field Functions 
    bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
    void deletePrimaryZone() { this->primaryZone_ = nullptr;};
    inline string primaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
    inline CreateDBInstanceShrinkRequest& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDBInstanceShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBInstanceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secondaryZone Field Functions 
    bool hasSecondaryZone() const { return this->secondaryZone_ != nullptr;};
    void deleteSecondaryZone() { this->secondaryZone_ = nullptr;};
    inline string secondaryZone() const { DARABONBA_PTR_GET_DEFAULT(secondaryZone_, "") };
    inline CreateDBInstanceShrinkRequest& setSecondaryZone(string secondaryZone) { DARABONBA_PTR_SET_VALUE(secondaryZone_, secondaryZone) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string series() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline CreateDBInstanceShrinkRequest& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


    // tertiaryZone Field Functions 
    bool hasTertiaryZone() const { return this->tertiaryZone_ != nullptr;};
    void deleteTertiaryZone() { this->tertiaryZone_ = nullptr;};
    inline string tertiaryZone() const { DARABONBA_PTR_GET_DEFAULT(tertiaryZone_, "") };
    inline CreateDBInstanceShrinkRequest& setTertiaryZone(string tertiaryZone) { DARABONBA_PTR_SET_VALUE(tertiaryZone_, tertiaryZone) };


    // topologyType Field Functions 
    bool hasTopologyType() const { return this->topologyType_ != nullptr;};
    void deleteTopologyType() { this->topologyType_ = nullptr;};
    inline string topologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
    inline CreateDBInstanceShrinkRequest& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t usedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateDBInstanceShrinkRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBInstanceShrinkRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBInstanceShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateDBInstanceShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<int32_t> CNNodeCount_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> cnClass_ = nullptr;
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    std::shared_ptr<int32_t> DBNodeCount_ = nullptr;
    std::shared_ptr<int32_t> DNNodeCount_ = nullptr;
    std::shared_ptr<string> dnClass_ = nullptr;
    std::shared_ptr<string> dnStorageSpace_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> engineVersion_ = nullptr;
    std::shared_ptr<string> extraParamsShrink_ = nullptr;
    std::shared_ptr<bool> isColumnarReadDBInstance_ = nullptr;
    std::shared_ptr<bool> isReadDBInstance_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> period_ = nullptr;
    std::shared_ptr<string> primaryDBInstanceName_ = nullptr;
    std::shared_ptr<string> primaryZone_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> secondaryZone_ = nullptr;
    std::shared_ptr<string> series_ = nullptr;
    std::shared_ptr<string> tertiaryZone_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> topologyType_ = nullptr;
    std::shared_ptr<int32_t> usedTime_ = nullptr;
    // VPC ID。
    std::shared_ptr<string> VPCId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
