// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHTTPDDOSINTELLIGENTRATELIMITRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHTTPDDOSINTELLIGENTRATELIMITRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeHttpDDoSIntelligentRateLimitRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHttpDDoSIntelligentRateLimitRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleInfos, ruleInfos_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHttpDDoSIntelligentRateLimitRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleInfos, ruleInfos_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHttpDDoSIntelligentRateLimitRulesResponseBody() = default ;
    DescribeHttpDDoSIntelligentRateLimitRulesResponseBody(const DescribeHttpDDoSIntelligentRateLimitRulesResponseBody &) = default ;
    DescribeHttpDDoSIntelligentRateLimitRulesResponseBody(DescribeHttpDDoSIntelligentRateLimitRulesResponseBody &&) = default ;
    DescribeHttpDDoSIntelligentRateLimitRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHttpDDoSIntelligentRateLimitRulesResponseBody() = default ;
    DescribeHttpDDoSIntelligentRateLimitRulesResponseBody& operator=(const DescribeHttpDDoSIntelligentRateLimitRulesResponseBody &) = default ;
    DescribeHttpDDoSIntelligentRateLimitRulesResponseBody& operator=(DescribeHttpDDoSIntelligentRateLimitRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(Condition, condition_);
        DARABONBA_PTR_TO_JSON(LogRuleId, logRuleId_);
        DARABONBA_PTR_TO_JSON(PunishTime, punishTime_);
        DARABONBA_PTR_TO_JSON(RateLimit, rateLimit_);
        DARABONBA_PTR_TO_JSON(RecordName, recordName_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      };
      friend void from_json(const Darabonba::Json& j, RuleInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(Condition, condition_);
        DARABONBA_PTR_FROM_JSON(LogRuleId, logRuleId_);
        DARABONBA_PTR_FROM_JSON(PunishTime, punishTime_);
        DARABONBA_PTR_FROM_JSON(RateLimit, rateLimit_);
        DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      };
      RuleInfos() = default ;
      RuleInfos(const RuleInfos &) = default ;
      RuleInfos(RuleInfos &&) = default ;
      RuleInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleInfos() = default ;
      RuleInfos& operator=(const RuleInfos &) = default ;
      RuleInfos& operator=(RuleInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->condition_ == nullptr && this->logRuleId_ == nullptr && this->punishTime_ == nullptr && this->rateLimit_ == nullptr && this->recordName_ == nullptr
        && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->statistics_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline RuleInfos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
      inline RuleInfos& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


      // logRuleId Field Functions 
      bool hasLogRuleId() const { return this->logRuleId_ != nullptr;};
      void deleteLogRuleId() { this->logRuleId_ = nullptr;};
      inline int64_t getLogRuleId() const { DARABONBA_PTR_GET_DEFAULT(logRuleId_, 0L) };
      inline RuleInfos& setLogRuleId(int64_t logRuleId) { DARABONBA_PTR_SET_VALUE(logRuleId_, logRuleId) };


      // punishTime Field Functions 
      bool hasPunishTime() const { return this->punishTime_ != nullptr;};
      void deletePunishTime() { this->punishTime_ = nullptr;};
      inline int64_t getPunishTime() const { DARABONBA_PTR_GET_DEFAULT(punishTime_, 0L) };
      inline RuleInfos& setPunishTime(int64_t punishTime) { DARABONBA_PTR_SET_VALUE(punishTime_, punishTime) };


      // rateLimit Field Functions 
      bool hasRateLimit() const { return this->rateLimit_ != nullptr;};
      void deleteRateLimit() { this->rateLimit_ = nullptr;};
      inline string getRateLimit() const { DARABONBA_PTR_GET_DEFAULT(rateLimit_, "") };
      inline RuleInfos& setRateLimit(string rateLimit) { DARABONBA_PTR_SET_VALUE(rateLimit_, rateLimit) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline RuleInfos& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline RuleInfos& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline RuleInfos& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline string getStatistics() const { DARABONBA_PTR_GET_DEFAULT(statistics_, "") };
      inline RuleInfos& setStatistics(string statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> condition_ {};
      shared_ptr<int64_t> logRuleId_ {};
      shared_ptr<int64_t> punishTime_ {};
      shared_ptr<string> rateLimit_ {};
      shared_ptr<string> recordName_ {};
      shared_ptr<int64_t> ruleId_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<string> statistics_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->ruleInfos_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHttpDDoSIntelligentRateLimitRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHttpDDoSIntelligentRateLimitRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHttpDDoSIntelligentRateLimitRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleInfos Field Functions 
    bool hasRuleInfos() const { return this->ruleInfos_ != nullptr;};
    void deleteRuleInfos() { this->ruleInfos_ = nullptr;};
    inline const vector<DescribeHttpDDoSIntelligentRateLimitRulesResponseBody::RuleInfos> & getRuleInfos() const { DARABONBA_PTR_GET_CONST(ruleInfos_, vector<DescribeHttpDDoSIntelligentRateLimitRulesResponseBody::RuleInfos>) };
    inline vector<DescribeHttpDDoSIntelligentRateLimitRulesResponseBody::RuleInfos> getRuleInfos() { DARABONBA_PTR_GET(ruleInfos_, vector<DescribeHttpDDoSIntelligentRateLimitRulesResponseBody::RuleInfos>) };
    inline DescribeHttpDDoSIntelligentRateLimitRulesResponseBody& setRuleInfos(const vector<DescribeHttpDDoSIntelligentRateLimitRulesResponseBody::RuleInfos> & ruleInfos) { DARABONBA_PTR_SET_VALUE(ruleInfos_, ruleInfos) };
    inline DescribeHttpDDoSIntelligentRateLimitRulesResponseBody& setRuleInfos(vector<DescribeHttpDDoSIntelligentRateLimitRulesResponseBody::RuleInfos> && ruleInfos) { DARABONBA_PTR_SET_RVALUE(ruleInfos_, ruleInfos) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeHttpDDoSIntelligentRateLimitRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeHttpDDoSIntelligentRateLimitRulesResponseBody::RuleInfos>> ruleInfos_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
