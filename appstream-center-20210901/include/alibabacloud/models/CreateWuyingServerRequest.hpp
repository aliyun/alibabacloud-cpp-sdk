// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWUYINGSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWUYINGSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateWuyingServerRequestDataDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class CreateWuyingServerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWuyingServerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(IdempotenceToken, idempotenceToken_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(NetworkStrategyType, networkStrategyType_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(ServerInstanceType, serverInstanceType_);
      DARABONBA_PTR_TO_JSON(ServerPortRange, serverPortRange_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VirtualNodePoolId, virtualNodePoolId_);
      DARABONBA_PTR_TO_JSON(WuyingServerName, wuyingServerName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWuyingServerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(IdempotenceToken, idempotenceToken_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(NetworkStrategyType, networkStrategyType_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(ServerInstanceType, serverInstanceType_);
      DARABONBA_PTR_FROM_JSON(ServerPortRange, serverPortRange_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VirtualNodePoolId, virtualNodePoolId_);
      DARABONBA_PTR_FROM_JSON(WuyingServerName, wuyingServerName_);
    };
    CreateWuyingServerRequest() = default ;
    CreateWuyingServerRequest(const CreateWuyingServerRequest &) = default ;
    CreateWuyingServerRequest(CreateWuyingServerRequest &&) = default ;
    CreateWuyingServerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWuyingServerRequest() = default ;
    CreateWuyingServerRequest& operator=(const CreateWuyingServerRequest &) = default ;
    CreateWuyingServerRequest& operator=(CreateWuyingServerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->autoPay_ == nullptr && return this->autoRenew_ == nullptr && return this->bandwidth_ == nullptr && return this->bizRegionId_ == nullptr && return this->chargeType_ == nullptr
        && return this->dataDisk_ == nullptr && return this->idempotenceToken_ == nullptr && return this->imageId_ == nullptr && return this->networkStrategyType_ == nullptr && return this->officeSiteId_ == nullptr
        && return this->password_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->promotionId_ == nullptr && return this->serverInstanceType_ == nullptr
        && return this->serverPortRange_ == nullptr && return this->systemDiskCategory_ == nullptr && return this->systemDiskPerformanceLevel_ == nullptr && return this->systemDiskSize_ == nullptr && return this->vSwitchIds_ == nullptr
        && return this->virtualNodePoolId_ == nullptr && return this->wuyingServerName_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateWuyingServerRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateWuyingServerRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateWuyingServerRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateWuyingServerRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateWuyingServerRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateWuyingServerRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<CreateWuyingServerRequestDataDisk> & dataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<CreateWuyingServerRequestDataDisk>) };
    inline vector<CreateWuyingServerRequestDataDisk> dataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<CreateWuyingServerRequestDataDisk>) };
    inline CreateWuyingServerRequest& setDataDisk(const vector<CreateWuyingServerRequestDataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline CreateWuyingServerRequest& setDataDisk(vector<CreateWuyingServerRequestDataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // idempotenceToken Field Functions 
    bool hasIdempotenceToken() const { return this->idempotenceToken_ != nullptr;};
    void deleteIdempotenceToken() { this->idempotenceToken_ = nullptr;};
    inline string idempotenceToken() const { DARABONBA_PTR_GET_DEFAULT(idempotenceToken_, "") };
    inline CreateWuyingServerRequest& setIdempotenceToken(string idempotenceToken) { DARABONBA_PTR_SET_VALUE(idempotenceToken_, idempotenceToken) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateWuyingServerRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // networkStrategyType Field Functions 
    bool hasNetworkStrategyType() const { return this->networkStrategyType_ != nullptr;};
    void deleteNetworkStrategyType() { this->networkStrategyType_ = nullptr;};
    inline string networkStrategyType() const { DARABONBA_PTR_GET_DEFAULT(networkStrategyType_, "") };
    inline CreateWuyingServerRequest& setNetworkStrategyType(string networkStrategyType) { DARABONBA_PTR_SET_VALUE(networkStrategyType_, networkStrategyType) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateWuyingServerRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateWuyingServerRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateWuyingServerRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateWuyingServerRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateWuyingServerRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // serverInstanceType Field Functions 
    bool hasServerInstanceType() const { return this->serverInstanceType_ != nullptr;};
    void deleteServerInstanceType() { this->serverInstanceType_ = nullptr;};
    inline string serverInstanceType() const { DARABONBA_PTR_GET_DEFAULT(serverInstanceType_, "") };
    inline CreateWuyingServerRequest& setServerInstanceType(string serverInstanceType) { DARABONBA_PTR_SET_VALUE(serverInstanceType_, serverInstanceType) };


    // serverPortRange Field Functions 
    bool hasServerPortRange() const { return this->serverPortRange_ != nullptr;};
    void deleteServerPortRange() { this->serverPortRange_ = nullptr;};
    inline string serverPortRange() const { DARABONBA_PTR_GET_DEFAULT(serverPortRange_, "") };
    inline CreateWuyingServerRequest& setServerPortRange(string serverPortRange) { DARABONBA_PTR_SET_VALUE(serverPortRange_, serverPortRange) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string systemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline CreateWuyingServerRequest& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string systemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline CreateWuyingServerRequest& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t systemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateWuyingServerRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateWuyingServerRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateWuyingServerRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // virtualNodePoolId Field Functions 
    bool hasVirtualNodePoolId() const { return this->virtualNodePoolId_ != nullptr;};
    void deleteVirtualNodePoolId() { this->virtualNodePoolId_ = nullptr;};
    inline string virtualNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(virtualNodePoolId_, "") };
    inline CreateWuyingServerRequest& setVirtualNodePoolId(string virtualNodePoolId) { DARABONBA_PTR_SET_VALUE(virtualNodePoolId_, virtualNodePoolId) };


    // wuyingServerName Field Functions 
    bool hasWuyingServerName() const { return this->wuyingServerName_ != nullptr;};
    void deleteWuyingServerName() { this->wuyingServerName_ = nullptr;};
    inline string wuyingServerName() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerName_, "") };
    inline CreateWuyingServerRequest& setWuyingServerName(string wuyingServerName) { DARABONBA_PTR_SET_VALUE(wuyingServerName_, wuyingServerName) };


  protected:
    std::shared_ptr<int32_t> amount_ = nullptr;
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    std::shared_ptr<string> bizRegionId_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<vector<CreateWuyingServerRequestDataDisk>> dataDisk_ = nullptr;
    std::shared_ptr<string> idempotenceToken_ = nullptr;
    std::shared_ptr<string> imageId_ = nullptr;
    std::shared_ptr<string> networkStrategyType_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    std::shared_ptr<string> password_ = nullptr;
    std::shared_ptr<int32_t> period_ = nullptr;
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
    std::shared_ptr<string> serverInstanceType_ = nullptr;
    std::shared_ptr<string> serverPortRange_ = nullptr;
    std::shared_ptr<string> systemDiskCategory_ = nullptr;
    std::shared_ptr<string> systemDiskPerformanceLevel_ = nullptr;
    std::shared_ptr<int32_t> systemDiskSize_ = nullptr;
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    std::shared_ptr<string> virtualNodePoolId_ = nullptr;
    std::shared_ptr<string> wuyingServerName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
