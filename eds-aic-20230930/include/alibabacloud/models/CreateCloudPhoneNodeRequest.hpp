// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDPHONENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDPHONENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCloudPhoneNodeRequestDisplayConfig.hpp>
#include <alibabacloud/models/CreateCloudPhoneNodeRequestNetworkInfo.hpp>
#include <vector>
#include <alibabacloud/models/CreateCloudPhoneNodeRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateCloudPhoneNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudPhoneNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DisplayConfig, displayConfig_);
      DARABONBA_PTR_TO_JSON(DownBandwidthLimit, downBandwidthLimit_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkInfo, networkInfo_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_TO_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_TO_JSON(ServerShareDataVolume, serverShareDataVolume_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(StreamMode, streamMode_);
      DARABONBA_PTR_TO_JSON(SwapSize, swapSize_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UpBandwidthLimit, upBandwidthLimit_);
      DARABONBA_PTR_TO_JSON(UseTemplate, useTemplate_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudPhoneNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DisplayConfig, displayConfig_);
      DARABONBA_PTR_FROM_JSON(DownBandwidthLimit, downBandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkInfo, networkInfo_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_FROM_JSON(PhoneDataVolume, phoneDataVolume_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_FROM_JSON(ServerShareDataVolume, serverShareDataVolume_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(StreamMode, streamMode_);
      DARABONBA_PTR_FROM_JSON(SwapSize, swapSize_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UpBandwidthLimit, upBandwidthLimit_);
      DARABONBA_PTR_FROM_JSON(UseTemplate, useTemplate_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateCloudPhoneNodeRequest() = default ;
    CreateCloudPhoneNodeRequest(const CreateCloudPhoneNodeRequest &) = default ;
    CreateCloudPhoneNodeRequest(CreateCloudPhoneNodeRequest &&) = default ;
    CreateCloudPhoneNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudPhoneNodeRequest() = default ;
    CreateCloudPhoneNodeRequest& operator=(const CreateCloudPhoneNodeRequest &) = default ;
    CreateCloudPhoneNodeRequest& operator=(CreateCloudPhoneNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->autoRenew_ == nullptr && return this->bandwidthPackageId_ == nullptr && return this->bandwidthPackageType_ == nullptr && return this->bizRegionId_ == nullptr && return this->chargeType_ == nullptr
        && return this->count_ == nullptr && return this->displayConfig_ == nullptr && return this->downBandwidthLimit_ == nullptr && return this->imageId_ == nullptr && return this->instanceType_ == nullptr
        && return this->networkId_ == nullptr && return this->networkInfo_ == nullptr && return this->networkType_ == nullptr && return this->nodeName_ == nullptr && return this->period_ == nullptr
        && return this->periodUnit_ == nullptr && return this->phoneCount_ == nullptr && return this->phoneDataVolume_ == nullptr && return this->promotionId_ == nullptr && return this->resolutionHeight_ == nullptr
        && return this->resolutionWidth_ == nullptr && return this->serverShareDataVolume_ == nullptr && return this->serverType_ == nullptr && return this->streamMode_ == nullptr && return this->swapSize_ == nullptr
        && return this->tag_ == nullptr && return this->upBandwidthLimit_ == nullptr && return this->useTemplate_ == nullptr && return this->vSwitchId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateCloudPhoneNodeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateCloudPhoneNodeRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline CreateCloudPhoneNodeRequest& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageType Field Functions 
    bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
    void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
    inline string bandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
    inline CreateCloudPhoneNodeRequest& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateCloudPhoneNodeRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateCloudPhoneNodeRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline CreateCloudPhoneNodeRequest& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // displayConfig Field Functions 
    bool hasDisplayConfig() const { return this->displayConfig_ != nullptr;};
    void deleteDisplayConfig() { this->displayConfig_ = nullptr;};
    inline const CreateCloudPhoneNodeRequestDisplayConfig & displayConfig() const { DARABONBA_PTR_GET_CONST(displayConfig_, CreateCloudPhoneNodeRequestDisplayConfig) };
    inline CreateCloudPhoneNodeRequestDisplayConfig displayConfig() { DARABONBA_PTR_GET(displayConfig_, CreateCloudPhoneNodeRequestDisplayConfig) };
    inline CreateCloudPhoneNodeRequest& setDisplayConfig(const CreateCloudPhoneNodeRequestDisplayConfig & displayConfig) { DARABONBA_PTR_SET_VALUE(displayConfig_, displayConfig) };
    inline CreateCloudPhoneNodeRequest& setDisplayConfig(CreateCloudPhoneNodeRequestDisplayConfig && displayConfig) { DARABONBA_PTR_SET_RVALUE(displayConfig_, displayConfig) };


    // downBandwidthLimit Field Functions 
    bool hasDownBandwidthLimit() const { return this->downBandwidthLimit_ != nullptr;};
    void deleteDownBandwidthLimit() { this->downBandwidthLimit_ = nullptr;};
    inline int32_t downBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(downBandwidthLimit_, 0) };
    inline CreateCloudPhoneNodeRequest& setDownBandwidthLimit(int32_t downBandwidthLimit) { DARABONBA_PTR_SET_VALUE(downBandwidthLimit_, downBandwidthLimit) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateCloudPhoneNodeRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateCloudPhoneNodeRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline CreateCloudPhoneNodeRequest& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkInfo Field Functions 
    bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
    void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
    inline const CreateCloudPhoneNodeRequestNetworkInfo & networkInfo() const { DARABONBA_PTR_GET_CONST(networkInfo_, CreateCloudPhoneNodeRequestNetworkInfo) };
    inline CreateCloudPhoneNodeRequestNetworkInfo networkInfo() { DARABONBA_PTR_GET(networkInfo_, CreateCloudPhoneNodeRequestNetworkInfo) };
    inline CreateCloudPhoneNodeRequest& setNetworkInfo(const CreateCloudPhoneNodeRequestNetworkInfo & networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };
    inline CreateCloudPhoneNodeRequest& setNetworkInfo(CreateCloudPhoneNodeRequestNetworkInfo && networkInfo) { DARABONBA_PTR_SET_RVALUE(networkInfo_, networkInfo) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateCloudPhoneNodeRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline CreateCloudPhoneNodeRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateCloudPhoneNodeRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateCloudPhoneNodeRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // phoneCount Field Functions 
    bool hasPhoneCount() const { return this->phoneCount_ != nullptr;};
    void deletePhoneCount() { this->phoneCount_ = nullptr;};
    inline int32_t phoneCount() const { DARABONBA_PTR_GET_DEFAULT(phoneCount_, 0) };
    inline CreateCloudPhoneNodeRequest& setPhoneCount(int32_t phoneCount) { DARABONBA_PTR_SET_VALUE(phoneCount_, phoneCount) };


    // phoneDataVolume Field Functions 
    bool hasPhoneDataVolume() const { return this->phoneDataVolume_ != nullptr;};
    void deletePhoneDataVolume() { this->phoneDataVolume_ = nullptr;};
    inline int32_t phoneDataVolume() const { DARABONBA_PTR_GET_DEFAULT(phoneDataVolume_, 0) };
    inline CreateCloudPhoneNodeRequest& setPhoneDataVolume(int32_t phoneDataVolume) { DARABONBA_PTR_SET_VALUE(phoneDataVolume_, phoneDataVolume) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateCloudPhoneNodeRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline CreateCloudPhoneNodeRequest& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline CreateCloudPhoneNodeRequest& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // serverShareDataVolume Field Functions 
    bool hasServerShareDataVolume() const { return this->serverShareDataVolume_ != nullptr;};
    void deleteServerShareDataVolume() { this->serverShareDataVolume_ = nullptr;};
    inline int32_t serverShareDataVolume() const { DARABONBA_PTR_GET_DEFAULT(serverShareDataVolume_, 0) };
    inline CreateCloudPhoneNodeRequest& setServerShareDataVolume(int32_t serverShareDataVolume) { DARABONBA_PTR_SET_VALUE(serverShareDataVolume_, serverShareDataVolume) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline CreateCloudPhoneNodeRequest& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // streamMode Field Functions 
    bool hasStreamMode() const { return this->streamMode_ != nullptr;};
    void deleteStreamMode() { this->streamMode_ = nullptr;};
    inline int32_t streamMode() const { DARABONBA_PTR_GET_DEFAULT(streamMode_, 0) };
    inline CreateCloudPhoneNodeRequest& setStreamMode(int32_t streamMode) { DARABONBA_PTR_SET_VALUE(streamMode_, streamMode) };


    // swapSize Field Functions 
    bool hasSwapSize() const { return this->swapSize_ != nullptr;};
    void deleteSwapSize() { this->swapSize_ = nullptr;};
    inline int32_t swapSize() const { DARABONBA_PTR_GET_DEFAULT(swapSize_, 0) };
    inline CreateCloudPhoneNodeRequest& setSwapSize(int32_t swapSize) { DARABONBA_PTR_SET_VALUE(swapSize_, swapSize) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCloudPhoneNodeRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCloudPhoneNodeRequestTag>) };
    inline vector<CreateCloudPhoneNodeRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateCloudPhoneNodeRequestTag>) };
    inline CreateCloudPhoneNodeRequest& setTag(const vector<CreateCloudPhoneNodeRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCloudPhoneNodeRequest& setTag(vector<CreateCloudPhoneNodeRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // upBandwidthLimit Field Functions 
    bool hasUpBandwidthLimit() const { return this->upBandwidthLimit_ != nullptr;};
    void deleteUpBandwidthLimit() { this->upBandwidthLimit_ = nullptr;};
    inline int32_t upBandwidthLimit() const { DARABONBA_PTR_GET_DEFAULT(upBandwidthLimit_, 0) };
    inline CreateCloudPhoneNodeRequest& setUpBandwidthLimit(int32_t upBandwidthLimit) { DARABONBA_PTR_SET_VALUE(upBandwidthLimit_, upBandwidthLimit) };


    // useTemplate Field Functions 
    bool hasUseTemplate() const { return this->useTemplate_ != nullptr;};
    void deleteUseTemplate() { this->useTemplate_ = nullptr;};
    inline string useTemplate() const { DARABONBA_PTR_GET_DEFAULT(useTemplate_, "") };
    inline CreateCloudPhoneNodeRequest& setUseTemplate(string useTemplate) { DARABONBA_PTR_SET_VALUE(useTemplate_, useTemplate) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateCloudPhoneNodeRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


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
    std::shared_ptr<CreateCloudPhoneNodeRequestDisplayConfig> displayConfig_ = nullptr;
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
    std::shared_ptr<CreateCloudPhoneNodeRequestNetworkInfo> networkInfo_ = nullptr;
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
    std::shared_ptr<string> promotionId_ = nullptr;
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
    std::shared_ptr<int32_t> swapSize_ = nullptr;
    // The resource tags.
    std::shared_ptr<vector<CreateCloudPhoneNodeRequestTag>> tag_ = nullptr;
    std::shared_ptr<int32_t> upBandwidthLimit_ = nullptr;
    std::shared_ptr<string> useTemplate_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
