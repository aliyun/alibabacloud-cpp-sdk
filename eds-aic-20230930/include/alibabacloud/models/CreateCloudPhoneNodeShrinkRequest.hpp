// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDPHONENODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDPHONENODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCloudPhoneNodeShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateCloudPhoneNodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudPhoneNodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DisplayConfig, displayConfigShrink_);
      DARABONBA_PTR_TO_JSON(DownBandwidthLimit, downBandwidthLimit_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkInfo, networkInfoShrink_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_TO_JSON(ServerShareDataVolume, serverShareDataVolume_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(StreamMode, streamMode_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UpBandwidthLimit, upBandwidthLimit_);
      DARABONBA_PTR_TO_JSON(UseTemplate, useTemplate_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudPhoneNodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DisplayConfig, displayConfigShrink_);
      DARABONBA_PTR_FROM_JSON(DownBandwidthLimit, downBandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkInfo, networkInfoShrink_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_FROM_JSON(ServerShareDataVolume, serverShareDataVolume_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(StreamMode, streamMode_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UpBandwidthLimit, upBandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(UseTemplate, useTemplate_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateCloudPhoneNodeShrinkRequest() = default ;
    CreateCloudPhoneNodeShrinkRequest(const CreateCloudPhoneNodeShrinkRequest &) = default ;
    CreateCloudPhoneNodeShrinkRequest(CreateCloudPhoneNodeShrinkRequest &&) = default ;
    CreateCloudPhoneNodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudPhoneNodeShrinkRequest() = default ;
    CreateCloudPhoneNodeShrinkRequest& operator=(const CreateCloudPhoneNodeShrinkRequest &) = default ;
    CreateCloudPhoneNodeShrinkRequest& operator=(CreateCloudPhoneNodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoPay_ != nullptr
        && this->autoRenew_ != nullptr && this->bandwidthPackageId_ != nullptr && this->bandwidthPackageType_ != nullptr && this->bizRegionId_ != nullptr && this->chargeType_ != nullptr
        && this->count_ != nullptr && this->displayConfigShrink_ != nullptr && this->downBandwidthLimit_ != nullptr && this->imageId_ != nullptr && this->instanceType_ != nullptr
        && this->networkId_ != nullptr && this->networkInfoShrink_ != nullptr && this->networkType_ != nullptr && this->nodeName_ != nullptr && this->period_ != nullptr
        && this->periodUnit_ != nullptr && this->phoneCount_ != nullptr && this->phoneDataVolume_ != nullptr && this->resolutionHeight_ != nullptr && this->resolutionWidth_ != nullptr
        && this->serverShareDataVolume_ != nullptr && this->serverType_ != nullptr && this->streamMode_ != nullptr && this->tag_ != nullptr && this->upBandwidthLimit_ != nullptr
        && this->useTemplate_ != nullptr && this->vSwitchId_ != nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateCloudPhoneNodeShrinkRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateCloudPhoneNodeShrinkRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageType Field Functions 
    bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
    void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
    inline string bandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // displayConfigShrink Field Functions 
    bool hasDisplayConfigShrink() const { return this->displayConfigShrink_ != nullptr;};
    void deleteDisplayConfigShrink() { this->displayConfigShrink_ = nullptr;};
    inline string displayConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(displayConfigShrink_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setDisplayConfigShrink(string displayConfigShrink) { DARABONBA_PTR_SET_VALUE(displayConfigShrink_, displayConfigShrink) };


    // downBandwidthLimit Field Functions 
    bool hasDownBandwidthLimit() const { return this->downBandwidthLimit_ != nullptr;};
    void deleteDownBandwidthLimit() { this->downBandwidthLimit_ = nullptr;};
    inline int32_t downBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(downBandwidthLimit_, 0) };
    inline CreateCloudPhoneNodeShrinkRequest& setDownBandwidthLimit(int32_t downBandwidthLimit) { DARABONBA_PTR_SET_VALUE(downBandwidthLimit_, downBandwidthLimit) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkInfoShrink Field Functions 
    bool hasNetworkInfoShrink() const { return this->networkInfoShrink_ != nullptr;};
    void deleteNetworkInfoShrink() { this->networkInfoShrink_ = nullptr;};
    inline string networkInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(networkInfoShrink_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setNetworkInfoShrink(string networkInfoShrink) { DARABONBA_PTR_SET_VALUE(networkInfoShrink_, networkInfoShrink) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateCloudPhoneNodeShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // phoneCount Field Functions 
    bool hasPhoneCount() const { return this->phoneCount_ != nullptr;};
    void deletePhoneCount() { this->phoneCount_ = nullptr;};
    inline int32_t phoneCount() const { DARABONBA_PTR_GET_DEFAULT(phoneCount_, 0) };
    inline CreateCloudPhoneNodeShrinkRequest& setPhoneCount(int32_t phoneCount) { DARABONBA_PTR_SET_VALUE(phoneCount_, phoneCount) };


    // phoneDataVolume Field Functions 
    bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
    void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
    inline int32_t phoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
    inline CreateCloudPhoneNodeShrinkRequest& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline CreateCloudPhoneNodeShrinkRequest& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline CreateCloudPhoneNodeShrinkRequest& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // serverShareDataVolume Field Functions 
    bool hasServerShareDataVolume() const { return this->serverShareDataVolume_ != nullptr;};
    void deleteServerShareDataVolume() { this->serverShareDataVolume_ = nullptr;};
    inline int32_t serverShareDataVolume() const { DARABONBA_PTR_GET_DEFAULT(serverShareDataVolume_, 0) };
    inline CreateCloudPhoneNodeShrinkRequest& setServerShareDataVolume(int32_t serverShareDataVolume) { DARABONBA_PTR_SET_VALUE(serverShareDataVolume_, serverShareDataVolume) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // streamMode Field Functions 
    bool hasStreamMode() const { return this->streamMode_ != nullptr;};
    void deleteStreamMode() { this->streamMode_ = nullptr;};
    inline int32_t streamMode() const { DARABONBA_PTR_GET_DEFAULT(streamMode_, 0) };
    inline CreateCloudPhoneNodeShrinkRequest& setStreamMode(int32_t streamMode) { DARABONBA_PTR_SET_VALUE(streamMode_, streamMode) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCloudPhoneNodeShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCloudPhoneNodeShrinkRequestTag>) };
    inline vector<CreateCloudPhoneNodeShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateCloudPhoneNodeShrinkRequestTag>) };
    inline CreateCloudPhoneNodeShrinkRequest& setTag(const vector<CreateCloudPhoneNodeShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCloudPhoneNodeShrinkRequest& setTag(vector<CreateCloudPhoneNodeShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // upBandwidthLimit Field Functions 
    bool hasUpBandwidthLimit() const { return this->upBandwidthLimit_ != nullptr;};
    void deleteUpBandwidthLimit() { this->upBandwidthLimit_ = nullptr;};
    inline int32_t upBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(upBandwidthLimit_, 0) };
    inline CreateCloudPhoneNodeShrinkRequest& setUpBandwidthLimit(int32_t upBandwidthLimit) { DARABONBA_PTR_SET_VALUE(upBandwidthLimit_, upBandwidthLimit) };


    // useTemplate Field Functions 
    bool hasUseTemplate() const { return this->useTemplate_ != nullptr;};
    void deleteUseTemplate() { this->useTemplate_ = nullptr;};
    inline string useTemplate() const { DARABONBA_PTR_GET_DEFAULT(useTemplate_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setUseTemplate(string useTemplate) { DARABONBA_PTR_SET_VALUE(useTemplate_, useTemplate) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateCloudPhoneNodeShrinkRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // Specifies whether to enable the auto-payment feature.
    // 
    // Valid values:
    // 
    // *   False (default): You must manually complete the payment in the Alibaba Cloud Expenses and Costs console.
    // *   true: enables the auto-payment feature.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // Specifies whether to enable the auto-renewal feature.
    // 
    // Valid values:
    // 
    // *   true: enables the auto-renewal feature. In this case, the system automatically renews instances upon expiration.
    // *   false (default): disables the auto-renewal feature. In this case, you need to manually renew instances upon expiration.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    std::shared_ptr<string> bandwidthPackageType_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The billing method. Only the subscription billing method is supported.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The number of cloud phone matrixes you want to purchase.
    std::shared_ptr<string> count_ = nullptr;
    std::shared_ptr<string> displayConfigShrink_ = nullptr;
    std::shared_ptr<int32_t> downBandwidthLimit_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The instance specification.
    // 
    // Valid values:
    // 
    // *   ac.max: By default, this specification allows up to 25 instances. You can adjust this number by using PhoneCount (Value range: 4 to 40).
    // *   ac.plus: By default, this specification allows up to 40 instances. You can adjust this number by using PhoneCount (Value range: 4 to 40).
    std::shared_ptr<string> instanceType_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> networkId_ = nullptr;
    std::shared_ptr<string> networkInfoShrink_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    // The name of the cloud phone matrix.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The subscription duration. The unit is specified by `PeriodUnit`. Valid values:
    // 
    // *   When `PeriodUnit` is set to **year**: 1.
    // *   When `PeriodUnit` is set to **month**: 1, 2, 3, and 6.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the subscription duration.
    // 
    // Valid values:
    // 
    // *   Month (default)
    // *   Year
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The number of instances per cloud phone matrix.
    std::shared_ptr<int32_t> phoneCount_ = nullptr;
    std::shared_ptr<int32_t> phoneDataVolume_ = nullptr;
    // The resolution height. Unit: pixel.
    std::shared_ptr<int32_t> resolutionHeight_ = nullptr;
    // The resolution width. Unit: pixel.
    std::shared_ptr<int32_t> resolutionWidth_ = nullptr;
    // The shared storage size Unit: GiB.
    std::shared_ptr<int32_t> serverShareDataVolume_ = nullptr;
    // The matrix specification.
    // 
    // Valid values:
    // 
    // *   cpm.gn6.gx1
    // 
    // This parameter is required.
    std::shared_ptr<string> serverType_ = nullptr;
    std::shared_ptr<int32_t> streamMode_ = nullptr;
    // The resource tags.
    std::shared_ptr<vector<CreateCloudPhoneNodeShrinkRequestTag>> tag_ = nullptr;
    std::shared_ptr<int32_t> upBandwidthLimit_ = nullptr;
    std::shared_ptr<string> useTemplate_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
