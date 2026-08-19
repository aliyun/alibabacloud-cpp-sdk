// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGDNSTANDBYMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGDNSTANDBYMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateGdnStandbyMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGdnStandbyMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(CNNodeCount, CNNodeCount_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloneInstanceName, cloneInstanceName_);
      DARABONBA_PTR_TO_JSON(CnClass, cnClass_);
      DARABONBA_PTR_TO_JSON(DNNodeCount, DNNodeCount_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DnClass, dnClass_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecondaryZone, secondaryZone_);
      DARABONBA_PTR_TO_JSON(Series, series_);
      DARABONBA_PTR_TO_JSON(SourceInstanceRegion, sourceInstanceRegion_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(TertiaryZone, tertiaryZone_);
      DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_TO_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGdnStandbyMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(CNNodeCount, CNNodeCount_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloneInstanceName, cloneInstanceName_);
      DARABONBA_PTR_FROM_JSON(CnClass, cnClass_);
      DARABONBA_PTR_FROM_JSON(DNNodeCount, DNNodeCount_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DnClass, dnClass_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecondaryZone, secondaryZone_);
      DARABONBA_PTR_FROM_JSON(Series, series_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceRegion, sourceInstanceRegion_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(TertiaryZone, tertiaryZone_);
      DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
      DARABONBA_PTR_FROM_JSON(UsedTime, usedTime_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateGdnStandbyMemberRequest() = default ;
    CreateGdnStandbyMemberRequest(const CreateGdnStandbyMemberRequest &) = default ;
    CreateGdnStandbyMemberRequest(CreateGdnStandbyMemberRequest &&) = default ;
    CreateGdnStandbyMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGdnStandbyMemberRequest() = default ;
    CreateGdnStandbyMemberRequest& operator=(const CreateGdnStandbyMemberRequest &) = default ;
    CreateGdnStandbyMemberRequest& operator=(CreateGdnStandbyMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRenew_ == nullptr
        && this->CNNodeCount_ == nullptr && this->clientToken_ == nullptr && this->cloneInstanceName_ == nullptr && this->cnClass_ == nullptr && this->DNNodeCount_ == nullptr
        && this->description_ == nullptr && this->dnClass_ == nullptr && this->engineVersion_ == nullptr && this->networkType_ == nullptr && this->payType_ == nullptr
        && this->period_ == nullptr && this->primaryZone_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->secondaryZone_ == nullptr
        && this->series_ == nullptr && this->sourceInstanceRegion_ == nullptr && this->storageType_ == nullptr && this->tertiaryZone_ == nullptr && this->topologyType_ == nullptr
        && this->usedTime_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr; };
    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateGdnStandbyMemberRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // CNNodeCount Field Functions 
    bool hasCNNodeCount() const { return this->CNNodeCount_ != nullptr;};
    void deleteCNNodeCount() { this->CNNodeCount_ = nullptr;};
    inline string getCNNodeCount() const { DARABONBA_PTR_GET_DEFAULT(CNNodeCount_, "") };
    inline CreateGdnStandbyMemberRequest& setCNNodeCount(string CNNodeCount) { DARABONBA_PTR_SET_VALUE(CNNodeCount_, CNNodeCount) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateGdnStandbyMemberRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloneInstanceName Field Functions 
    bool hasCloneInstanceName() const { return this->cloneInstanceName_ != nullptr;};
    void deleteCloneInstanceName() { this->cloneInstanceName_ = nullptr;};
    inline string getCloneInstanceName() const { DARABONBA_PTR_GET_DEFAULT(cloneInstanceName_, "") };
    inline CreateGdnStandbyMemberRequest& setCloneInstanceName(string cloneInstanceName) { DARABONBA_PTR_SET_VALUE(cloneInstanceName_, cloneInstanceName) };


    // cnClass Field Functions 
    bool hasCnClass() const { return this->cnClass_ != nullptr;};
    void deleteCnClass() { this->cnClass_ = nullptr;};
    inline string getCnClass() const { DARABONBA_PTR_GET_DEFAULT(cnClass_, "") };
    inline CreateGdnStandbyMemberRequest& setCnClass(string cnClass) { DARABONBA_PTR_SET_VALUE(cnClass_, cnClass) };


    // DNNodeCount Field Functions 
    bool hasDNNodeCount() const { return this->DNNodeCount_ != nullptr;};
    void deleteDNNodeCount() { this->DNNodeCount_ = nullptr;};
    inline string getDNNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DNNodeCount_, "") };
    inline CreateGdnStandbyMemberRequest& setDNNodeCount(string DNNodeCount) { DARABONBA_PTR_SET_VALUE(DNNodeCount_, DNNodeCount) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGdnStandbyMemberRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dnClass Field Functions 
    bool hasDnClass() const { return this->dnClass_ != nullptr;};
    void deleteDnClass() { this->dnClass_ = nullptr;};
    inline string getDnClass() const { DARABONBA_PTR_GET_DEFAULT(dnClass_, "") };
    inline CreateGdnStandbyMemberRequest& setDnClass(string dnClass) { DARABONBA_PTR_SET_VALUE(dnClass_, dnClass) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string getEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline CreateGdnStandbyMemberRequest& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateGdnStandbyMemberRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline CreateGdnStandbyMemberRequest& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateGdnStandbyMemberRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // primaryZone Field Functions 
    bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
    void deletePrimaryZone() { this->primaryZone_ = nullptr;};
    inline string getPrimaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
    inline CreateGdnStandbyMemberRequest& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateGdnStandbyMemberRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateGdnStandbyMemberRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // secondaryZone Field Functions 
    bool hasSecondaryZone() const { return this->secondaryZone_ != nullptr;};
    void deleteSecondaryZone() { this->secondaryZone_ = nullptr;};
    inline string getSecondaryZone() const { DARABONBA_PTR_GET_DEFAULT(secondaryZone_, "") };
    inline CreateGdnStandbyMemberRequest& setSecondaryZone(string secondaryZone) { DARABONBA_PTR_SET_VALUE(secondaryZone_, secondaryZone) };


    // series Field Functions 
    bool hasSeries() const { return this->series_ != nullptr;};
    void deleteSeries() { this->series_ = nullptr;};
    inline string getSeries() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
    inline CreateGdnStandbyMemberRequest& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


    // sourceInstanceRegion Field Functions 
    bool hasSourceInstanceRegion() const { return this->sourceInstanceRegion_ != nullptr;};
    void deleteSourceInstanceRegion() { this->sourceInstanceRegion_ = nullptr;};
    inline string getSourceInstanceRegion() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceRegion_, "") };
    inline CreateGdnStandbyMemberRequest& setSourceInstanceRegion(string sourceInstanceRegion) { DARABONBA_PTR_SET_VALUE(sourceInstanceRegion_, sourceInstanceRegion) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateGdnStandbyMemberRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tertiaryZone Field Functions 
    bool hasTertiaryZone() const { return this->tertiaryZone_ != nullptr;};
    void deleteTertiaryZone() { this->tertiaryZone_ = nullptr;};
    inline string getTertiaryZone() const { DARABONBA_PTR_GET_DEFAULT(tertiaryZone_, "") };
    inline CreateGdnStandbyMemberRequest& setTertiaryZone(string tertiaryZone) { DARABONBA_PTR_SET_VALUE(tertiaryZone_, tertiaryZone) };


    // topologyType Field Functions 
    bool hasTopologyType() const { return this->topologyType_ != nullptr;};
    void deleteTopologyType() { this->topologyType_ = nullptr;};
    inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
    inline CreateGdnStandbyMemberRequest& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


    // usedTime Field Functions 
    bool hasUsedTime() const { return this->usedTime_ != nullptr;};
    void deleteUsedTime() { this->usedTime_ = nullptr;};
    inline int32_t getUsedTime() const { DARABONBA_PTR_GET_DEFAULT(usedTime_, 0) };
    inline CreateGdnStandbyMemberRequest& setUsedTime(int32_t usedTime) { DARABONBA_PTR_SET_VALUE(usedTime_, usedTime) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateGdnStandbyMemberRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateGdnStandbyMemberRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // Specifies whether to enable auto-renewal. Default value: true.
    // 
    // - **true**: Enabled.
    // - **false**: Disabled.
    shared_ptr<bool> autoRenew_ {};
    // The number of compute nodes.
    shared_ptr<string> CNNodeCount_ {};
    // The client token that is used to ensure the idempotence of the request. Make sure that the value is different for each request.
    shared_ptr<string> clientToken_ {};
    // The name of the source instance.
    // 
    // This parameter is required.
    shared_ptr<string> cloneInstanceName_ {};
    // The compute node specifications. This parameter is required for Enterprise Edition instances and is not required for Standard Edition instances.
    // 
    // Enterprise Edition with local disks:
    // 
    // - **polarx.x4.medium.2e**: 2 cores, 8 GB (general-purpose)
    // - **polarx.x4.large.2e**: 4 cores, 16 GB (general-purpose)
    // - **polarx.x4.xlarge.2e**: 8 cores, 32 GB (general-purpose)
    // - **polarx.x4.2xlarge.2e**: 16 cores, 64 GB (general-purpose)
    // - **polarx.x8.large.2e**: 4 cores, 32 GB (dedicated)
    // - **polarx.x2.large.2x**: 8 cores, 16 GB (dedicated)
    // - **polarx.x4.xlarge.2x**: 8 cores, 32 GB (dedicated)
    // - **polarx.x8.xlarge.2e**: 8 cores, 64 GB (dedicated)
    // - **polarx.x8.2xlarge.2e**: 16 cores, 128 GB (dedicated)
    // - **polarx.x4.4xlarge.2e**: 32 cores, 128 GB (dedicated)
    // - **polarx.x8.4xlarge.2e**: 32 cores, 256 GB (dedicated)
    // - **polarx.st.8xlarge.2e**: 60 cores, 470 GB (dedicated)
    // - **polarx.st.12xlarge.2e**: 90 cores, 720 GB (dedicated)
    // 
    // 
    // Enterprise Edition with cloud disks:
    // - **polarx.x4.medium.c2e**: 2 cores, 8 GB (general-purpose)
    // - **polarx.x4.large.c2e**: 4 cores, 16 GB (general-purpose)
    // - **polarx.x4.xlarge.c2e**: 8 cores, 32 GB (general-purpose)
    // - **polarx.x4.2xlarge.c2e**: 16 cores, 64 GB (general-purpose)
    // - **polarx.x8.large.c2e**: 4 cores, 32 GB (dedicated)
    // - **polarx.x2.large.c2x**: 8 cores, 16 GB (dedicated)
    // - **polarx.x4.xlarge.c2x**: 8 cores, 32 GB (dedicated)
    // - **polarx.x8.xlarge.c2e**: 8 cores, 64 GB (dedicated)
    // - **polarx.x8.2xlarge.c2e**: 16 cores, 128 GB (dedicated)
    // - **polarx.x4.4xlarge.c2e**: 32 cores, 128 GB (dedicated)
    // - **polarx.x8.4xlarge.c2e**: 32 cores, 256 GB (dedicated)
    // - **polarx.st.8xlarge.c2e**: 60 cores, 470 GB (dedicated)
    // - **polarx.st.12xlarge.c2e**: 90 cores, 720 GB (dedicated)
    shared_ptr<string> cnClass_ {};
    // The number of storage nodes.
    shared_ptr<string> DNNodeCount_ {};
    // The description of the instance.
    shared_ptr<string> description_ {};
    // The storage node specifications. This parameter is required for Enterprise Edition instances and is not required for Standard Edition instances.
    // 
    // Enterprise Edition with local disks:
    // 
    // - **mysql.n2.medium.25**: 2 cores, 4 GB (general-purpose)
    // - **mysql.n4.medium.25**: 2 cores, 8 GB (general-purpose)
    // - **mysql.n2.large.25**: 4 cores, 8 GB (general-purpose)
    // - **mysql.n4.large.25**: 4 cores, 16 GB (general-purpose)
    // - **mysql.n4.xlarge.25**: 8 cores, 32 GB (general-purpose)
    // - **mysql.n4.2xlarge.25**: 16 cores, 64 GB (general-purpose)
    // - **mysql.x4.large.25**: 4 cores, 16 GB (dedicated)
    // - **mysql.x8.large.25**: 4 cores, 32 GB (dedicated)
    // - **mysql.x2.xlarge.25**: 8 cores, 16 GB (dedicated)
    // - **mysql.x8.xlarge.25**: 8 cores, 64 GB (dedicated)
    // - **mysql.x8.2xlarge.25**: 16 cores, 128 GB (dedicated)
    // - **mysql.x4.4xlarge.25**: 32 cores, 128 GB (dedicated)
    // - **mysql.x8.4xlarge.25**: 32 cores, 256 GB (dedicated)
    // - **mysql.st.8xlarge.25**: 60 cores, 470 GB (dedicated)
    // - **mysql.st.12xlarge.25**: 90 cores, 720 GB (dedicated)
    // - **mysql.x8.45xlarge.25**: 180 cores, 1440 GB (dedicated)
    // - **mysql.x8.60xlarge.25**: 240 cores, 1920 GB (dedicated)
    // 
    // 
    // Enterprise Edition with cloud disks:
    // 
    // - **polarx.mysql.n2.medium.c25**: 2 cores, 4 GB (general-purpose)
    // - **polarx.mysql.n4.medium.c25**: 2 cores, 8 GB (general-purpose)
    // - **polarx.mysql.n2.large.c25**: 4 cores, 8 GB (general-purpose)
    // - **polarx.mysql.n4.large.c25**: 4 cores, 16 GB (general-purpose)
    // - **polarx.mysql.n4.xlarge.c25**: 8 cores, 32 GB (general-purpose)
    // - **polarx.mysql.n4.2xlarge.c25**: 16 cores, 64 GB (general-purpose)
    // - **polarx.mysql.x4.large.c25**: 4 cores, 16 GB (dedicated)
    // - **polarx.mysql.x8.large.c25**: 4 cores, 32 GB (dedicated)
    // - **polarx.mysql.x2.xlarge.c25**: 8 cores, 16 GB (dedicated)
    // - **polarx.mysql.x8.xlarge.c25**: 8 cores, 64 GB (dedicated)
    // - **polarx.mysql.x8.2xlarge.c25**: 16 cores, 128 GB (dedicated)
    // - **polarx.mysql.x4.4xlarge.c25**: 32 cores, 128 GB (dedicated)
    // - **polarx.mysql.x8.4xlarge.c25**: 32 cores, 256 GB (dedicated)
    // - **polarx.mysql.st.8xlarge.c25**: 60 cores, 470 GB (dedicated)
    // - **polarx.mysql.st.12xlarge.c25**: 90 cores, 720 GB (dedicated)
    // - **polarx.mysql.x8.45xlarge.c25**: 180 cores, 1440 GB (dedicated)
    // - **polarx.mysql.x8.60xlarge.c25**: 240 cores, 1920 GB (dedicated)
    shared_ptr<string> dnClass_ {};
    // The MySQL DPI engine version. Valid values: 5.7 and 8.0.
    // 
    // This parameter is required.
    shared_ptr<string> engineVersion_ {};
    // The network type. Only VPC is supported.
    shared_ptr<string> networkType_ {};
    // The billing method of the instance.
    // 
    // - **PREPAY**: subscription
    // - **POSTPAY**: pay-as-you-go
    // 
    // This parameter is required.
    shared_ptr<string> payType_ {};
    // The unit of the subscription duration. Valid values:
    // 
    // - Year
    // - Month
    // 
    // For pay-as-you-go instances, the default value is Hour.
    shared_ptr<string> period_ {};
    // The primary zone.
    shared_ptr<string> primaryZone_ {};
    // The region in which the instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID. This parameter can be left empty. This parameter is not supported.
    shared_ptr<string> resourceGroupId_ {};
    // The secondary zone.
    shared_ptr<string> secondaryZone_ {};
    // The edition of the instance. Valid values:
    // 
    // - enterprise: Enterprise Edition.
    // - standard: Standard Edition.
    shared_ptr<string> series_ {};
    // The region in which the source instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> sourceInstanceRegion_ {};
    // The storage type.
    shared_ptr<string> storageType_ {};
    // The zone for Three-zone deployment.
    shared_ptr<string> tertiaryZone_ {};
    // The topology type. Valid values:
    // 
    // - **3azones**: three-zone deployment.
    // - **1azone**: single-zone deployment.
    // 
    // This parameter is required.
    shared_ptr<string> topologyType_ {};
    // The subscription duration. Unit: months or years.
    // 
    // > If Period is set to Year, valid values of this parameter are 1, 2, and 3.
    shared_ptr<int32_t> usedTime_ {};
    // VPC ID。
    shared_ptr<string> VPCId_ {};
    // The vSwitch ID.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
