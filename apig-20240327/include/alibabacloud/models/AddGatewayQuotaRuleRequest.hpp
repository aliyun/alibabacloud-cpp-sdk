// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYQUOTARULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYQUOTARULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AddGatewayQuotaRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewayQuotaRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(conflictHash, conflictHash_);
      DARABONBA_PTR_TO_JSON(consumerGroupIds, consumerGroupIds_);
      DARABONBA_PTR_TO_JSON(consumerIds, consumerIds_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(overwrite, overwrite_);
      DARABONBA_PTR_TO_JSON(periodMultiplier, periodMultiplier_);
      DARABONBA_PTR_TO_JSON(periodType, periodType_);
      DARABONBA_PTR_TO_JSON(quotaDimension, quotaDimension_);
      DARABONBA_PTR_TO_JSON(quotaLimit, quotaLimit_);
      DARABONBA_PTR_TO_JSON(ruleName, ruleName_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(windowAlignment, windowAlignment_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewayQuotaRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(conflictHash, conflictHash_);
      DARABONBA_PTR_FROM_JSON(consumerGroupIds, consumerGroupIds_);
      DARABONBA_PTR_FROM_JSON(consumerIds, consumerIds_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(overwrite, overwrite_);
      DARABONBA_PTR_FROM_JSON(periodMultiplier, periodMultiplier_);
      DARABONBA_PTR_FROM_JSON(periodType, periodType_);
      DARABONBA_PTR_FROM_JSON(quotaDimension, quotaDimension_);
      DARABONBA_PTR_FROM_JSON(quotaLimit, quotaLimit_);
      DARABONBA_PTR_FROM_JSON(ruleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(windowAlignment, windowAlignment_);
    };
    AddGatewayQuotaRuleRequest() = default ;
    AddGatewayQuotaRuleRequest(const AddGatewayQuotaRuleRequest &) = default ;
    AddGatewayQuotaRuleRequest(AddGatewayQuotaRuleRequest &&) = default ;
    AddGatewayQuotaRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewayQuotaRuleRequest() = default ;
    AddGatewayQuotaRuleRequest& operator=(const AddGatewayQuotaRuleRequest &) = default ;
    AddGatewayQuotaRuleRequest& operator=(AddGatewayQuotaRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conflictHash_ == nullptr
        && this->consumerGroupIds_ == nullptr && this->consumerIds_ == nullptr && this->dryRun_ == nullptr && this->overwrite_ == nullptr && this->periodMultiplier_ == nullptr
        && this->periodType_ == nullptr && this->quotaDimension_ == nullptr && this->quotaLimit_ == nullptr && this->ruleName_ == nullptr && this->timezone_ == nullptr
        && this->windowAlignment_ == nullptr; };
    // conflictHash Field Functions 
    bool hasConflictHash() const { return this->conflictHash_ != nullptr;};
    void deleteConflictHash() { this->conflictHash_ = nullptr;};
    inline string getConflictHash() const { DARABONBA_PTR_GET_DEFAULT(conflictHash_, "") };
    inline AddGatewayQuotaRuleRequest& setConflictHash(string conflictHash) { DARABONBA_PTR_SET_VALUE(conflictHash_, conflictHash) };


    // consumerGroupIds Field Functions 
    bool hasConsumerGroupIds() const { return this->consumerGroupIds_ != nullptr;};
    void deleteConsumerGroupIds() { this->consumerGroupIds_ = nullptr;};
    inline const vector<string> & getConsumerGroupIds() const { DARABONBA_PTR_GET_CONST(consumerGroupIds_, vector<string>) };
    inline vector<string> getConsumerGroupIds() { DARABONBA_PTR_GET(consumerGroupIds_, vector<string>) };
    inline AddGatewayQuotaRuleRequest& setConsumerGroupIds(const vector<string> & consumerGroupIds) { DARABONBA_PTR_SET_VALUE(consumerGroupIds_, consumerGroupIds) };
    inline AddGatewayQuotaRuleRequest& setConsumerGroupIds(vector<string> && consumerGroupIds) { DARABONBA_PTR_SET_RVALUE(consumerGroupIds_, consumerGroupIds) };


    // consumerIds Field Functions 
    bool hasConsumerIds() const { return this->consumerIds_ != nullptr;};
    void deleteConsumerIds() { this->consumerIds_ = nullptr;};
    inline const vector<string> & getConsumerIds() const { DARABONBA_PTR_GET_CONST(consumerIds_, vector<string>) };
    inline vector<string> getConsumerIds() { DARABONBA_PTR_GET(consumerIds_, vector<string>) };
    inline AddGatewayQuotaRuleRequest& setConsumerIds(const vector<string> & consumerIds) { DARABONBA_PTR_SET_VALUE(consumerIds_, consumerIds) };
    inline AddGatewayQuotaRuleRequest& setConsumerIds(vector<string> && consumerIds) { DARABONBA_PTR_SET_RVALUE(consumerIds_, consumerIds) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AddGatewayQuotaRuleRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // overwrite Field Functions 
    bool hasOverwrite() const { return this->overwrite_ != nullptr;};
    void deleteOverwrite() { this->overwrite_ = nullptr;};
    inline bool getOverwrite() const { DARABONBA_PTR_GET_DEFAULT(overwrite_, false) };
    inline AddGatewayQuotaRuleRequest& setOverwrite(bool overwrite) { DARABONBA_PTR_SET_VALUE(overwrite_, overwrite) };


    // periodMultiplier Field Functions 
    bool hasPeriodMultiplier() const { return this->periodMultiplier_ != nullptr;};
    void deletePeriodMultiplier() { this->periodMultiplier_ = nullptr;};
    inline int64_t getPeriodMultiplier() const { DARABONBA_PTR_GET_DEFAULT(periodMultiplier_, 0L) };
    inline AddGatewayQuotaRuleRequest& setPeriodMultiplier(int64_t periodMultiplier) { DARABONBA_PTR_SET_VALUE(periodMultiplier_, periodMultiplier) };


    // periodType Field Functions 
    bool hasPeriodType() const { return this->periodType_ != nullptr;};
    void deletePeriodType() { this->periodType_ = nullptr;};
    inline string getPeriodType() const { DARABONBA_PTR_GET_DEFAULT(periodType_, "") };
    inline AddGatewayQuotaRuleRequest& setPeriodType(string periodType) { DARABONBA_PTR_SET_VALUE(periodType_, periodType) };


    // quotaDimension Field Functions 
    bool hasQuotaDimension() const { return this->quotaDimension_ != nullptr;};
    void deleteQuotaDimension() { this->quotaDimension_ = nullptr;};
    inline string getQuotaDimension() const { DARABONBA_PTR_GET_DEFAULT(quotaDimension_, "") };
    inline AddGatewayQuotaRuleRequest& setQuotaDimension(string quotaDimension) { DARABONBA_PTR_SET_VALUE(quotaDimension_, quotaDimension) };


    // quotaLimit Field Functions 
    bool hasQuotaLimit() const { return this->quotaLimit_ != nullptr;};
    void deleteQuotaLimit() { this->quotaLimit_ = nullptr;};
    inline int64_t getQuotaLimit() const { DARABONBA_PTR_GET_DEFAULT(quotaLimit_, 0L) };
    inline AddGatewayQuotaRuleRequest& setQuotaLimit(int64_t quotaLimit) { DARABONBA_PTR_SET_VALUE(quotaLimit_, quotaLimit) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline AddGatewayQuotaRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string getTimezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline AddGatewayQuotaRuleRequest& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // windowAlignment Field Functions 
    bool hasWindowAlignment() const { return this->windowAlignment_ != nullptr;};
    void deleteWindowAlignment() { this->windowAlignment_ = nullptr;};
    inline string getWindowAlignment() const { DARABONBA_PTR_GET_DEFAULT(windowAlignment_, "") };
    inline AddGatewayQuotaRuleRequest& setWindowAlignment(string windowAlignment) { DARABONBA_PTR_SET_VALUE(windowAlignment_, windowAlignment) };


  protected:
    // The conflict snapshot hash, used to prevent concurrent dirty overwrites during confirmation. Obtain this value from the response of a previous dry run (dryRun=true).
    // 
    // This parameter is not required in the following cases: no conflicts exist, the request is a dry run (dryRun=true), or overwrite is set to false.
    // 
    // If dryRun is set to false and overwrite is set to true but this parameter is not specified or the value has expired, the system returns accepted=false with a new conflict preview. Perform a new dry run to confirm the updated conflicts.
    shared_ptr<string> conflictHash_ {};
    // The list of consumer group IDs. This parameter is not supported.
    shared_ptr<vector<string>> consumerGroupIds_ {};
    // The list of consumer IDs to bind to the rule. You can specify up to 1,000 consumers in a single request.
    shared_ptr<vector<string>> consumerIds_ {};
    // Specifies whether to perform only a dry run without applying the configuration. A dry run checks whether conflicting rules exist on the bound consumers. For example, a consumer that already has a calendar-day quota rule cannot have another calendar-day quota rule added.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to allow overwriting when conflicts exist. If overwriting is allowed, the conflicting consumers are unbound from the old rule and bound to the new rule.
    shared_ptr<bool> overwrite_ {};
    // The period multiplier, which specifies the number of periods after which the quota resets. This parameter is required for custom period rules. Minimum value: 1. Maximum value: 60.
    shared_ptr<int64_t> periodMultiplier_ {};
    // The period unit. For calendar periods, the value can be day, week, or month. For custom periods, only day is supported.
    // 
    // This parameter is required.
    shared_ptr<string> periodType_ {};
    // The quota dimension or throttling type. Valid values: token and credit. The credit quota applies only to dedicated instances of version 2.1.19 or later.
    // 
    // This parameter is required.
    shared_ptr<string> quotaDimension_ {};
    // The total available quota per period (the limit).
    // 
    // This parameter is required.
    shared_ptr<int64_t> quotaLimit_ {};
    // The name of the rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The time zone for the calendar period, in UTC+x format.
    shared_ptr<string> timezone_ {};
    // The reset period type. Valid values:
    // 
    // - calendar: calendar period. The period starts from the beginning of a calendar day, week, or month.
    // - epoch: custom period. The period starts from the time the rule is applied. The custom period applies only to dedicated instances of version 2.1.19 or later.
    shared_ptr<string> windowAlignment_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
