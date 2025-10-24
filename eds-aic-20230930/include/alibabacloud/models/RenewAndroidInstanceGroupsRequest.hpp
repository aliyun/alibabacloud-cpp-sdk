// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWANDROIDINSTANCEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWANDROIDINSTANCEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class RenewAndroidInstanceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewAndroidInstanceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, RenewAndroidInstanceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    RenewAndroidInstanceGroupsRequest() = default ;
    RenewAndroidInstanceGroupsRequest(const RenewAndroidInstanceGroupsRequest &) = default ;
    RenewAndroidInstanceGroupsRequest(RenewAndroidInstanceGroupsRequest &&) = default ;
    RenewAndroidInstanceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewAndroidInstanceGroupsRequest() = default ;
    RenewAndroidInstanceGroupsRequest& operator=(const RenewAndroidInstanceGroupsRequest &) = default ;
    RenewAndroidInstanceGroupsRequest& operator=(RenewAndroidInstanceGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && return this->instanceGroupIds_ == nullptr && return this->period_ == nullptr && return this->periodUnit_ == nullptr && return this->promotionId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool autoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RenewAndroidInstanceGroupsRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & instanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> instanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline RenewAndroidInstanceGroupsRequest& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline RenewAndroidInstanceGroupsRequest& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RenewAndroidInstanceGroupsRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string periodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RenewAndroidInstanceGroupsRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string promotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline RenewAndroidInstanceGroupsRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    // Specifies whether to enable the auto-payment feature.
    // 
    // Valid values:
    // 
    // *   true: enables the auto-payment feature. Ensure your account has sufficient balance to use this feature.
    // *   false: disables the auto-payment feature. You need to manually complete the payment process.
    std::shared_ptr<bool> autoPay_ = nullptr;
    // The IDs of the instance groups.
    std::shared_ptr<vector<string>> instanceGroupIds_ = nullptr;
    // The duration of the renewal, measured in units defined by PeriodUnit.
    std::shared_ptr<int32_t> period_ = nullptr;
    // The unit of the renewal duration. Default value: Month.
    // 
    // Valid values:
    // 
    // *   Month
    // *   Year
    std::shared_ptr<string> periodUnit_ = nullptr;
    std::shared_ptr<string> promotionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
