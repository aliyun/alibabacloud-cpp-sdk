// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWNETWORKPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWNETWORKPACKAGESREQUEST_HPP_
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
  class RenewNetworkPackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewNetworkPackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    friend void from_json(const Darabonba::Json& j, RenewNetworkPackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
    };
    RenewNetworkPackagesRequest() = default ;
    RenewNetworkPackagesRequest(const RenewNetworkPackagesRequest &) = default ;
    RenewNetworkPackagesRequest(RenewNetworkPackagesRequest &&) = default ;
    RenewNetworkPackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewNetworkPackagesRequest() = default ;
    RenewNetworkPackagesRequest& operator=(const RenewNetworkPackagesRequest &) = default ;
    RenewNetworkPackagesRequest& operator=(RenewNetworkPackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->autoRenew_ == nullptr && return this->networkPackageId_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->promotionId_ == nullptr
        && return this->regionId_ == nullptr && return this->resellerOwnerUid_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RenewNetworkPackagesRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline RenewNetworkPackagesRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline const vector<string> & networkPackageId() const { DARABONBA_PTR_GET_CONST(networkPackageId_, vector<string>) };
    inline vector<string> networkPackageId() { DARABONBA_PTR_GET(networkPackageId_, vector<string>) };
    inline RenewNetworkPackagesRequest& setNetworkPackageId(const vector<string> & networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };
    inline RenewNetworkPackagesRequest& setNetworkPackageId(vector<string> && networkPackageId) { DARABONBA_PTR_SET_RVALUE(networkPackageId_, networkPackageId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewNetworkPackagesRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewNetworkPackagesRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline RenewNetworkPackagesRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RenewNetworkPackagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t resellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline RenewNetworkPackagesRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


  protected:
    // Specifies whether to enable the automatic payment feature.
    // 
    // Valid values:
    // 
    // *   true (default): enables the auto-payment feature.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     Make sure that your account has sufficient balance. Otherwise, no order is generated.
    // 
    //     <!-- -->
    // 
    // *   false: disables the auto-payment feature. In this case, an order is generated but you need to make the payment manually.
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     To make the payment, log on to the Elastic Desktop Service console, go to the Orders page, and find the order based on the order ID.
    // 
    //     <!-- -->
    std::shared_ptr<bool> autoPay_ = nullptr;
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The IDs of premium bandwidth plans. You can specify up to 100 IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> networkPackageId_ = nullptr;
    // The subscription duration if you specify subscription as the new billing method for the cloud desktop. The unit of the value is specified by the `PeriodUnit` parameter. This parameter takes effect only when the `ChargeType` parameter is set to `PrePaid`.
    // 
    // *   If the `PeriodUnit` parameter is set to `Week`, the valid value of the Period parameter is 1.
    // *   If the `PeriodUnit` parameter is set to `Month`, the valid values of the Period parameter are 1, 2, 3, and 6.
    // *   If the `PeriodUnit` parameter is set to `Year`, the valid values of the Period parameter are 1, 2, 3, 4, and 5.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the renewal duration specified by the Period parameter. Valid values:
    // 
    // *   Month
    // *   Year
    // 
    // Default value: Month.
    std::shared_ptr<string> periodUnit_ = nullptr;
    // The promotion ID.
    std::shared_ptr<string> promotionId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<int64_t> resellerOwnerUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
