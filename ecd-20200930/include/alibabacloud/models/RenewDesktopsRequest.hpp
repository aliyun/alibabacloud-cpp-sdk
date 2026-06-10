// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWDESKTOPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWDESKTOPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class RenewDesktopsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewDesktopsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, RenewDesktopsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    RenewDesktopsRequest() = default ;
    RenewDesktopsRequest(const RenewDesktopsRequest &) = default ;
    RenewDesktopsRequest(RenewDesktopsRequest &&) = default ;
    RenewDesktopsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewDesktopsRequest() = default ;
    RenewDesktopsRequest& operator=(const RenewDesktopsRequest &) = default ;
    RenewDesktopsRequest& operator=(RenewDesktopsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->desktopId_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->promotionId_ == nullptr
        && this->regionId_ == nullptr && this->resellerOwnerUid_ == nullptr && this->resourceType_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RenewDesktopsRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline RenewDesktopsRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline const vector<string> & getDesktopId() const { DARABONBA_PTR_GET_CONST(desktopId_, vector<string>) };
    inline vector<string> getDesktopId() { DARABONBA_PTR_GET(desktopId_, vector<string>) };
    inline RenewDesktopsRequest& setDesktopId(const vector<string> & desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };
    inline RenewDesktopsRequest& setDesktopId(vector<string> && desktopId) { DARABONBA_PTR_SET_RVALUE(desktopId_, desktopId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewDesktopsRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewDesktopsRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline RenewDesktopsRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RenewDesktopsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t getResellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline RenewDesktopsRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline RenewDesktopsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // Specifies whether to enable automatic payment.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal.
    shared_ptr<bool> autoRenew_ {};
    // A list of WUYING Workspace instance IDs. You can renew only instances purchased on a monthly basis.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> desktopId_ {};
    // The renewal duration. Valid values depend on the value of `PeriodUnit`.
    // 
    // - If `PeriodUnit` is `Month`, valid values are 1, 2, 3, and 6.
    // 
    // - If `PeriodUnit` is `Year`, valid values are 1 to 5.
    // 
    // Default value: 1.
    shared_ptr<int32_t> period_ {};
    // The unit for the renewal duration, which applies to the `Period` parameter.
    shared_ptr<string> periodUnit_ {};
    // The promotion ID.
    shared_ptr<string> promotionId_ {};
    // The region ID. Call [DescribeRegions](~~DescribeRegions~~) to list the regions where WUYING Workspace is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resellerOwnerUid_ {};
    // > This field is not available for public use.
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
