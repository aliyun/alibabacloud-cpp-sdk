// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWUYINGSERVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWUYINGSERVERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(IdempotenceToken, idempotenceToken_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_TO_JSON(NetworkStrategyType, networkStrategyType_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(SavingPlanId, savingPlanId_);
      DARABONBA_PTR_TO_JSON(ServerInstanceType, serverInstanceType_);
      DARABONBA_PTR_TO_JSON(ServerPortRange, serverPortRange_);
      DARABONBA_PTR_TO_JSON(SubPayType, subPayType_);
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
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(IdempotenceToken, idempotenceToken_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_FROM_JSON(NetworkStrategyType, networkStrategyType_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(SavingPlanId, savingPlanId_);
      DARABONBA_PTR_FROM_JSON(ServerInstanceType, serverInstanceType_);
      DARABONBA_PTR_FROM_JSON(ServerPortRange, serverPortRange_);
      DARABONBA_PTR_FROM_JSON(SubPayType, subPayType_);
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
    class DataDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
        DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_TO_JSON(DataDiskPerformanceLevel, dataDiskPerformanceLevel_);
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      };
      friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
        DARABONBA_PTR_FROM_JSON(DataDiskPerformanceLevel, dataDiskPerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      };
      DataDisk() = default ;
      DataDisk(const DataDisk &) = default ;
      DataDisk(DataDisk &&) = default ;
      DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDisk() = default ;
      DataDisk& operator=(const DataDisk &) = default ;
      DataDisk& operator=(DataDisk &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataDiskCategory_ == nullptr
        && this->dataDiskPerformanceLevel_ == nullptr && this->dataDiskSize_ == nullptr; };
      // dataDiskCategory Field Functions 
      bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
      void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
      inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
      inline DataDisk& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


      // dataDiskPerformanceLevel Field Functions 
      bool hasDataDiskPerformanceLevel() const { return this->dataDiskPerformanceLevel_ != nullptr;};
      void deleteDataDiskPerformanceLevel() { this->dataDiskPerformanceLevel_ = nullptr;};
      inline string getDataDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(dataDiskPerformanceLevel_, "") };
      inline DataDisk& setDataDiskPerformanceLevel(string dataDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(dataDiskPerformanceLevel_, dataDiskPerformanceLevel) };


      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
      inline DataDisk& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    protected:
      // The data disk category.
      // 
      // Valid values:
      // 
      // *   cloud_auto.
      shared_ptr<string> dataDiskCategory_ {};
      // The PL of the data disk.
      shared_ptr<string> dataDiskPerformanceLevel_ {};
      // The data disk size.
      shared_ptr<int32_t> dataDiskSize_ {};
    };

    virtual bool empty() const override { return this->amount_ == nullptr
        && this->autoPay_ == nullptr && this->autoRenew_ == nullptr && this->bandwidth_ == nullptr && this->bizRegionId_ == nullptr && this->chargeType_ == nullptr
        && this->dataDisk_ == nullptr && this->hostName_ == nullptr && this->idempotenceToken_ == nullptr && this->imageId_ == nullptr && this->maxPrice_ == nullptr
        && this->networkStrategyType_ == nullptr && this->officeSiteId_ == nullptr && this->password_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->promotionId_ == nullptr && this->savingPlanId_ == nullptr && this->serverInstanceType_ == nullptr && this->serverPortRange_ == nullptr && this->subPayType_ == nullptr
        && this->systemDiskCategory_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr && this->systemDiskSize_ == nullptr && this->vSwitchIds_ == nullptr && this->virtualNodePoolId_ == nullptr
        && this->wuyingServerName_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateWuyingServerRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateWuyingServerRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateWuyingServerRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateWuyingServerRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline CreateWuyingServerRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateWuyingServerRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<CreateWuyingServerRequest::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<CreateWuyingServerRequest::DataDisk>) };
    inline vector<CreateWuyingServerRequest::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<CreateWuyingServerRequest::DataDisk>) };
    inline CreateWuyingServerRequest& setDataDisk(const vector<CreateWuyingServerRequest::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline CreateWuyingServerRequest& setDataDisk(vector<CreateWuyingServerRequest::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateWuyingServerRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // idempotenceToken Field Functions 
    bool hasIdempotenceToken() const { return this->idempotenceToken_ != nullptr;};
    void deleteIdempotenceToken() { this->idempotenceToken_ = nullptr;};
    inline string getIdempotenceToken() const { DARABONBA_PTR_GET_DEFAULT(idempotenceToken_, "") };
    inline CreateWuyingServerRequest& setIdempotenceToken(string idempotenceToken) { DARABONBA_PTR_SET_VALUE(idempotenceToken_, idempotenceToken) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateWuyingServerRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // maxPrice Field Functions 
    bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
    void deleteMaxPrice() { this->maxPrice_ = nullptr;};
    inline float getMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
    inline CreateWuyingServerRequest& setMaxPrice(float maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


    // networkStrategyType Field Functions 
    bool hasNetworkStrategyType() const { return this->networkStrategyType_ != nullptr;};
    void deleteNetworkStrategyType() { this->networkStrategyType_ = nullptr;};
    inline string getNetworkStrategyType() const { DARABONBA_PTR_GET_DEFAULT(networkStrategyType_, "") };
    inline CreateWuyingServerRequest& setNetworkStrategyType(string networkStrategyType) { DARABONBA_PTR_SET_VALUE(networkStrategyType_, networkStrategyType) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateWuyingServerRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateWuyingServerRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateWuyingServerRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateWuyingServerRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline CreateWuyingServerRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // savingPlanId Field Functions 
    bool hasSavingPlanId() const { return this->savingPlanId_ != nullptr;};
    void deleteSavingPlanId() { this->savingPlanId_ = nullptr;};
    inline string getSavingPlanId() const { DARABONBA_PTR_GET_DEFAULT(savingPlanId_, "") };
    inline CreateWuyingServerRequest& setSavingPlanId(string savingPlanId) { DARABONBA_PTR_SET_VALUE(savingPlanId_, savingPlanId) };


    // serverInstanceType Field Functions 
    bool hasServerInstanceType() const { return this->serverInstanceType_ != nullptr;};
    void deleteServerInstanceType() { this->serverInstanceType_ = nullptr;};
    inline string getServerInstanceType() const { DARABONBA_PTR_GET_DEFAULT(serverInstanceType_, "") };
    inline CreateWuyingServerRequest& setServerInstanceType(string serverInstanceType) { DARABONBA_PTR_SET_VALUE(serverInstanceType_, serverInstanceType) };


    // serverPortRange Field Functions 
    bool hasServerPortRange() const { return this->serverPortRange_ != nullptr;};
    void deleteServerPortRange() { this->serverPortRange_ = nullptr;};
    inline string getServerPortRange() const { DARABONBA_PTR_GET_DEFAULT(serverPortRange_, "") };
    inline CreateWuyingServerRequest& setServerPortRange(string serverPortRange) { DARABONBA_PTR_SET_VALUE(serverPortRange_, serverPortRange) };


    // subPayType Field Functions 
    bool hasSubPayType() const { return this->subPayType_ != nullptr;};
    void deleteSubPayType() { this->subPayType_ = nullptr;};
    inline string getSubPayType() const { DARABONBA_PTR_GET_DEFAULT(subPayType_, "") };
    inline CreateWuyingServerRequest& setSubPayType(string subPayType) { DARABONBA_PTR_SET_VALUE(subPayType_, subPayType) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline CreateWuyingServerRequest& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // systemDiskPerformanceLevel Field Functions 
    bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
    void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
    inline string getSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
    inline CreateWuyingServerRequest& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


    // systemDiskSize Field Functions 
    bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
    void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
    inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
    inline CreateWuyingServerRequest& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline CreateWuyingServerRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline CreateWuyingServerRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // virtualNodePoolId Field Functions 
    bool hasVirtualNodePoolId() const { return this->virtualNodePoolId_ != nullptr;};
    void deleteVirtualNodePoolId() { this->virtualNodePoolId_ = nullptr;};
    inline string getVirtualNodePoolId() const { DARABONBA_PTR_GET_DEFAULT(virtualNodePoolId_, "") };
    inline CreateWuyingServerRequest& setVirtualNodePoolId(string virtualNodePoolId) { DARABONBA_PTR_SET_VALUE(virtualNodePoolId_, virtualNodePoolId) };


    // wuyingServerName Field Functions 
    bool hasWuyingServerName() const { return this->wuyingServerName_ != nullptr;};
    void deleteWuyingServerName() { this->wuyingServerName_ = nullptr;};
    inline string getWuyingServerName() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerName_, "") };
    inline CreateWuyingServerRequest& setWuyingServerName(string wuyingServerName) { DARABONBA_PTR_SET_VALUE(wuyingServerName_, wuyingServerName) };


  protected:
    // Quantity.
    shared_ptr<int32_t> amount_ {};
    // Auto payment.
    shared_ptr<bool> autoPay_ {};
    // Auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // bandwidth value, the NetworkStrategyType is valid for DirectIp. Unit: Mbps, range 2~100
    shared_ptr<int32_t> bandwidth_ {};
    // Region.
    shared_ptr<string> bizRegionId_ {};
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PrePaid: subscription
    shared_ptr<string> chargeType_ {};
    // The list of data disks.
    shared_ptr<vector<CreateWuyingServerRequest::DataDisk>> dataDisk_ {};
    shared_ptr<string> hostName_ {};
    // Idempotence token to ensure operation uniqueness
    shared_ptr<string> idempotenceToken_ {};
    // The ID of the image.
    shared_ptr<string> imageId_ {};
    shared_ptr<float> maxPrice_ {};
    // The type of the network policy (in invitational preview).
    shared_ptr<string> networkStrategyType_ {};
    // The office network IDs.
    shared_ptr<string> officeSiteId_ {};
    // Workstation login password.
    shared_ptr<string> password_ {};
    // The subscription period.
    shared_ptr<int32_t> period_ {};
    // The time unit.
    // 
    // Valid values:
    // 
    // *   Month
    // *   Year
    shared_ptr<string> periodUnit_ {};
    // The ID of the discount.
    // 
    // >  If PromotionId is set, it will try to apply the corresponding discount.
    shared_ptr<string> promotionId_ {};
    shared_ptr<string> savingPlanId_ {};
    // Workstation specifications.
    shared_ptr<string> serverInstanceType_ {};
    shared_ptr<string> serverPortRange_ {};
    shared_ptr<string> subPayType_ {};
    // The system disk category.
    // 
    // Valid values:
    // 
    // *   cloud_auto.
    shared_ptr<string> systemDiskCategory_ {};
    // The performance level (PL) of the system disk.
    shared_ptr<string> systemDiskPerformanceLevel_ {};
    // The size of the system disk. Unit: GB.
    shared_ptr<int32_t> systemDiskSize_ {};
    // The list of office network vSwitches.
    shared_ptr<vector<string>> vSwitchIds_ {};
    shared_ptr<string> virtualNodePoolId_ {};
    // The name of the workstation. The numeric suffix is automatically added when multiple workstations are created.
    shared_ptr<string> wuyingServerName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
