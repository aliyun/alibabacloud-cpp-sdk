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
    shared_ptr<string> conflictHash_ {};
    shared_ptr<bool> dryRun_ {};
    shared_ptr<bool> overwrite_ {};
    shared_ptr<int64_t> periodMultiplier_ {};
    shared_ptr<string> periodType_ {};
    shared_ptr<int64_t> quotaLimit_ {};
    shared_ptr<string> timezone_ {};
    shared_ptr<string> windowAlignment_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
