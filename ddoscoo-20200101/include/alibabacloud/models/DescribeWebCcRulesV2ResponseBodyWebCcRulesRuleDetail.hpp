// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULESRULEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODYWEBCCRULESRULEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition.hpp>
#include <alibabacloud/models/DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit.hpp>
#include <alibabacloud/models/DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics.hpp>
#include <alibabacloud/models/DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Condition, condition_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RateLimit, rateLimit_);
      DARABONBA_PTR_TO_JSON(Statistics, statistics_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Uri, uri_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Condition, condition_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RateLimit, rateLimit_);
      DARABONBA_PTR_FROM_JSON(Statistics, statistics_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Uri, uri_);
    };
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail(const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail(DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail &&) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail() = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& operator=(const DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail &) = default ;
    DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& operator=(DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->condition_ == nullptr && return this->count_ == nullptr && return this->interval_ == nullptr && return this->mode_ == nullptr && return this->name_ == nullptr
        && return this->rateLimit_ == nullptr && return this->statistics_ == nullptr && return this->statusCode_ == nullptr && return this->ttl_ == nullptr && return this->uri_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const vector<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition> & condition() const { DARABONBA_PTR_GET_CONST(condition_, vector<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition>) };
    inline vector<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition> condition() { DARABONBA_PTR_GET(condition_, vector<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition>) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setCondition(const vector<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition> & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setCondition(vector<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition> && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rateLimit Field Functions 
    bool hasRateLimit() const { return this->rateLimit_ != nullptr;};
    void deleteRateLimit() { this->rateLimit_ = nullptr;};
    inline const Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit & rateLimit() const { DARABONBA_PTR_GET_CONST(rateLimit_, Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit) };
    inline Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit rateLimit() { DARABONBA_PTR_GET(rateLimit_, Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setRateLimit(const Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit & rateLimit) { DARABONBA_PTR_SET_VALUE(rateLimit_, rateLimit) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setRateLimit(Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit && rateLimit) { DARABONBA_PTR_SET_RVALUE(rateLimit_, rateLimit) };


    // statistics Field Functions 
    bool hasStatistics() const { return this->statistics_ != nullptr;};
    void deleteStatistics() { this->statistics_ = nullptr;};
    inline const Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics & statistics() const { DARABONBA_PTR_GET_CONST(statistics_, Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics) };
    inline Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics statistics() { DARABONBA_PTR_GET(statistics_, Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setStatistics(const Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setStatistics(Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline const Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode & statusCode() const { DARABONBA_PTR_GET_CONST(statusCode_, Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode) };
    inline Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode statusCode() { DARABONBA_PTR_GET(statusCode_, Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setStatusCode(const Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode & statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setStatusCode(Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode && statusCode) { DARABONBA_PTR_SET_RVALUE(statusCode_, statusCode) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // uri Field Functions 
    bool hasUri() const { return this->uri_ != nullptr;};
    void deleteUri() { this->uri_ = nullptr;};
    inline string uri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
    inline DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetail& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


  protected:
    // The action triggered if the rule is matched. Valid values:
    // 
    // *   **accept**: The requests that match the rule are allowed.
    // *   **block**: The requests that match the rule are blocked.
    // *   **challenge**: Completely Automated Public Turing test to tell Computers and Humans Apart (CAPTCHA) verification for the requests that match the rule is implemented.
    // *   **watch**: The requests that match the rule are recorded in logs and allowed.
    std::shared_ptr<string> action_ = nullptr;
    // The match conditions.
    std::shared_ptr<vector<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailCondition>> condition_ = nullptr;
    // The parameter is deprecated.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The parameter is deprecated.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The parameter is deprecated.
    std::shared_ptr<string> mode_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> name_ = nullptr;
    // The frequency statistics.
    std::shared_ptr<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailRateLimit> rateLimit_ = nullptr;
    // The statistics after deduplication. By default, the system collects statistics before deduplication.
    std::shared_ptr<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatistics> statistics_ = nullptr;
    // The status codes.
    std::shared_ptr<Models::DescribeWebCCRulesV2ResponseBodyWebCCRulesRuleDetailStatusCode> statusCode_ = nullptr;
    // The parameter is deprecated.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The parameter is deprecated.
    std::shared_ptr<string> uri_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
