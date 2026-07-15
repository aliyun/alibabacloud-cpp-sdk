// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESETGATEWAYQUOTARULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESETGATEWAYQUOTARULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ResetGatewayQuotaRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResetGatewayQuotaRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(conflictHash, conflictHash_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(periodMultiplier, periodMultiplier_);
      DARABONBA_PTR_TO_JSON(periodType, periodType_);
      DARABONBA_PTR_TO_JSON(quotaLimit, quotaLimit_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(windowAlignment, windowAlignment_);
    };
    friend void from_json(const Darabonba::Json& j, ResetGatewayQuotaRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(conflictHash, conflictHash_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(periodMultiplier, periodMultiplier_);
      DARABONBA_PTR_FROM_JSON(periodType, periodType_);
      DARABONBA_PTR_FROM_JSON(quotaLimit, quotaLimit_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(windowAlignment, windowAlignment_);
    };
    ResetGatewayQuotaRuleRequest() = default ;
    ResetGatewayQuotaRuleRequest(const ResetGatewayQuotaRuleRequest &) = default ;
    ResetGatewayQuotaRuleRequest(ResetGatewayQuotaRuleRequest &&) = default ;
    ResetGatewayQuotaRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResetGatewayQuotaRuleRequest() = default ;
    ResetGatewayQuotaRuleRequest& operator=(const ResetGatewayQuotaRuleRequest &) = default ;
    ResetGatewayQuotaRuleRequest& operator=(ResetGatewayQuotaRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conflictHash_ == nullptr
        && this->dryRun_ == nullptr && this->overwrite_ == nullptr && this->periodMultiplier_ == nullptr && this->periodType_ == nullptr && this->quotaLimit_ == nullptr
        && this->timezone_ == nullptr && this->windowAlignment_ == nullptr; };
    // conflictHash Field Functions 
    bool hasConflictHash() const { return this->conflictHash_ != nullptr;};
    void deleteConflictHash() { this->conflictHash_ = nullptr;};
    inline string getConflictHash() const { DARABONBA_PTR_GET_DEFAULT(conflictHash_, "") };
    inline ResetGatewayQuotaRuleRequest& setConflictHash(string conflictHash) { DARABONBA_PTR_SET_VALUE(conflictHash_, conflictHash) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ResetGatewayQuotaRuleRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline ResetGatewayQuotaRuleRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // periodMultiplier Field Functions 
    bool hasPeriodMultiplier() const { return this->periodMultiplier_ != nullptr;};
    void deletePeriodMultiplier() { this->periodMultiplier_ = nullptr;};
    inline int64_t getPeriodMultiplier() const { DARABONBA_PTR_GET_DEFAULT(periodMultiplier_, 0L) };
    inline ResetGatewayQuotaRuleRequest& setPeriodMultiplier(int64_t periodMultiplier) { DARABONBA_PTR_SET_VALUE(periodMultiplier_, periodMultiplier) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline ResetGatewayQuotaRuleRequest& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // quotaLimit Field Functions 
    bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
    void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
    inline int64_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0L) };
    inline ResetGatewayQuotaRuleRequest& setQuotaLimit(int64_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline ResetGatewayQuotaRuleRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // windowAlignment Field Functions 
    bool hasWindowAlignment() const { return this->windowAlignment_ != nullptr;};
    void deleteWindowAlignment() { this->windowAlignment_ = nullptr;};
    inline string getWindowAlignment() const { DARABONBA_PTR_GET_DEFAULT(windowAlignment_, "") };
    inline ResetGatewayQuotaRuleRequest& setWindowAlignment(string windowAlignment) { DARABONBA_PTR_SET_VALUE(windowAlignment_, windowAlignment) };


  protected:
    // The conflict snapshot hash, used to prevent concurrent dirty overwrites during a confirmed overwrite. Obtain this value from the response of a previous dry run (dryRun=true).
    // 
    // You do not need to specify this parameter in the following cases: no conflicts exist, you are performing a dry run (dryRun=true), or you set overwrite to false.
    // 
    // If dryRun is set to false and overwrite is set to true but this parameter is not specified or the value has expired, the backend returns accepted=false with a new conflict preview. You must perform a new dry run to confirm the updated conflicts.
    shared_ptr<string> conflictHash_ {};
    // Specifies whether to perform only a dry run without persisting or applying the configuration. A dry run checks whether conflicting rules exist on the bound consumers. For example, a consumer that already has a calendar-day quota cannot have another calendar-day quota rule added.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to allow overwriting when conflicts exist. If overwriting is allowed, the conflicting entity (consumer) is unbound from the old rule and bound to the new rule.
    shared_ptr<bool> overwrite_ {};
    // The period multiplier, which specifies the number of periods after which the quota is reset. This parameter is returned when the rule uses a custom period. Minimum value: 1. Maximum value: 60.
    shared_ptr<int64_t> periodMultiplier_ {};
    // The period type. Calendar periods support daily, weekly, and monthly statistics. Valid values: day, week, and month. Custom periods support only daily statistics. The value is fixed to day.
    shared_ptr<string> periodType_ {};
    // The total available quota per period after the reset.
    shared_ptr<int64_t> quotaLimit_ {};
    // The time zone for the calendar period, in UTC+x format.
    shared_ptr<string> timezone_ {};
    // The period alignment type after the reset. Valid values:
    // - calendar: calendar period.
    // - epoch: custom period. Custom periods are supported only on dedicated instances running version 2.1.19 or later.
    shared_ptr<string> windowAlignment_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
