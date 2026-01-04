// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESV2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesV2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesV2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WebCCRules, webCCRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesV2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WebCCRules, webCCRules_);
    };
    DescribeWebCCRulesV2ResponseBody() = default ;
    DescribeWebCCRulesV2ResponseBody(const DescribeWebCCRulesV2ResponseBody &) = default ;
    DescribeWebCCRulesV2ResponseBody(DescribeWebCCRulesV2ResponseBody &&) = default ;
    DescribeWebCCRulesV2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesV2ResponseBody() = default ;
    DescribeWebCCRulesV2ResponseBody& operator=(const DescribeWebCCRulesV2ResponseBody &) = default ;
    DescribeWebCCRulesV2ResponseBody& operator=(DescribeWebCCRulesV2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebCCRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebCCRules& obj) { 
        DARABONBA_PTR_TO_JSON(Expires, expires_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(RuleDetail, ruleDetail_);
      };
      friend void from_json(const Darabonba::Json& j, WebCCRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Expires, expires_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(RuleDetail, ruleDetail_);
      };
      WebCCRules() = default ;
      WebCCRules(const WebCCRules &) = default ;
      WebCCRules(WebCCRules &&) = default ;
      WebCCRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebCCRules() = default ;
      WebCCRules& operator=(const WebCCRules &) = default ;
      WebCCRules& operator=(WebCCRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleDetail& obj) { 
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
        friend void from_json(const Darabonba::Json& j, RuleDetail& obj) { 
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
        RuleDetail() = default ;
        RuleDetail(const RuleDetail &) = default ;
        RuleDetail(RuleDetail &&) = default ;
        RuleDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleDetail() = default ;
        RuleDetail& operator=(const RuleDetail &) = default ;
        RuleDetail& operator=(RuleDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class StatusCode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const StatusCode& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(CountThreshold, countThreshold_);
            DARABONBA_PTR_TO_JSON(Enabled, enabled_);
            DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
            DARABONBA_PTR_TO_JSON(UseRatio, useRatio_);
          };
          friend void from_json(const Darabonba::Json& j, StatusCode& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(CountThreshold, countThreshold_);
            DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
            DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
            DARABONBA_PTR_FROM_JSON(UseRatio, useRatio_);
          };
          StatusCode() = default ;
          StatusCode(const StatusCode &) = default ;
          StatusCode(StatusCode &&) = default ;
          StatusCode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~StatusCode() = default ;
          StatusCode& operator=(const StatusCode &) = default ;
          StatusCode& operator=(StatusCode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->code_ == nullptr
        && this->countThreshold_ == nullptr && this->enabled_ == nullptr && this->ratioThreshold_ == nullptr && this->useRatio_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
          inline StatusCode& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // countThreshold Field Functions 
          bool hasCountThreshold() const { return this->countThreshold_ != nullptr;};
          void deleteCountThreshold() { this->countThreshold_ = nullptr;};
          inline int32_t getCountThreshold() const { DARABONBA_PTR_GET_DEFAULT(countThreshold_, 0) };
          inline StatusCode& setCountThreshold(int32_t countThreshold) { DARABONBA_PTR_SET_VALUE(countThreshold_, countThreshold) };


          // enabled Field Functions 
          bool hasEnabled() const { return this->enabled_ != nullptr;};
          void deleteEnabled() { this->enabled_ = nullptr;};
          inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
          inline StatusCode& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


          // ratioThreshold Field Functions 
          bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
          void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
          inline int32_t getRatioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0) };
          inline StatusCode& setRatioThreshold(int32_t ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


          // useRatio Field Functions 
          bool hasUseRatio() const { return this->useRatio_ != nullptr;};
          void deleteUseRatio() { this->useRatio_ = nullptr;};
          inline bool getUseRatio() const { DARABONBA_PTR_GET_DEFAULT(useRatio_, false) };
          inline StatusCode& setUseRatio(bool useRatio) { DARABONBA_PTR_SET_VALUE(useRatio_, useRatio) };


        protected:
          // The status code. Valid values: **100** to **599**.
          // 
          // *   **200**: The request was successful.
          // *   Other codes: The request failed.
          shared_ptr<int32_t> code_ {};
          // If a ratio is not used, the handling action is triggered only when the number of requests of the corresponding status code reaches the value of **CountThreshold**. Valid values: **2** to **50000**.
          shared_ptr<int32_t> countThreshold_ {};
          // Indicates whether the status code is enabled. Valid values:
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> enabled_ {};
          // If a ratio is used, the handling action is triggered only when the number of requests of the corresponding status code reaches the value of **RatioThreshold**. Valid values: **1** to **100**.
          shared_ptr<int32_t> ratioThreshold_ {};
          // Indicates whether to use a ratio.
          // 
          // *   **true**
          // *   **false**
          shared_ptr<bool> useRatio_ {};
        };

        class Statistics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
            DARABONBA_PTR_TO_JSON(Field, field_);
            DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
            DARABONBA_PTR_TO_JSON(Mode, mode_);
          };
          friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
            DARABONBA_PTR_FROM_JSON(Field, field_);
            DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
            DARABONBA_PTR_FROM_JSON(Mode, mode_);
          };
          Statistics() = default ;
          Statistics(const Statistics &) = default ;
          Statistics(Statistics &&) = default ;
          Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Statistics() = default ;
          Statistics& operator=(const Statistics &) = default ;
          Statistics& operator=(Statistics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->field_ == nullptr
        && this->headerName_ == nullptr && this->mode_ == nullptr; };
          // field Field Functions 
          bool hasField() const { return this->field_ != nullptr;};
          void deleteField() { this->field_ = nullptr;};
          inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
          inline Statistics& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


          // headerName Field Functions 
          bool hasHeaderName() const { return this->headerName_ != nullptr;};
          void deleteHeaderName() { this->headerName_ = nullptr;};
          inline string getHeaderName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
          inline Statistics& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


          // mode Field Functions 
          bool hasMode() const { return this->mode_ != nullptr;};
          void deleteMode() { this->mode_ = nullptr;};
          inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
          inline Statistics& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        protected:
          // The statistical method. Valid values:
          // 
          // *   **ip**
          // *   **header**
          // *   **uri**
          shared_ptr<string> field_ {};
          // The name of the header. This parameter is required only when the Field parameter is set to header.
          shared_ptr<string> headerName_ {};
          // Indicates whether the system collects statistics after deduplication. Valid values:
          // 
          // *   **count**: The system collects statistics before deduplication.
          // *   **distinct**: The system collects statistics after deduplication.
          shared_ptr<string> mode_ {};
        };

        class RateLimit : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RateLimit& obj) { 
            DARABONBA_PTR_TO_JSON(Interval, interval_);
            DARABONBA_PTR_TO_JSON(SubKey, subKey_);
            DARABONBA_PTR_TO_JSON(Target, target_);
            DARABONBA_PTR_TO_JSON(Threshold, threshold_);
            DARABONBA_PTR_TO_JSON(Ttl, ttl_);
          };
          friend void from_json(const Darabonba::Json& j, RateLimit& obj) { 
            DARABONBA_PTR_FROM_JSON(Interval, interval_);
            DARABONBA_PTR_FROM_JSON(SubKey, subKey_);
            DARABONBA_PTR_FROM_JSON(Target, target_);
            DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
            DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
          };
          RateLimit() = default ;
          RateLimit(const RateLimit &) = default ;
          RateLimit(RateLimit &&) = default ;
          RateLimit(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RateLimit() = default ;
          RateLimit& operator=(const RateLimit &) = default ;
          RateLimit& operator=(RateLimit &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->interval_ == nullptr
        && this->subKey_ == nullptr && this->target_ == nullptr && this->threshold_ == nullptr && this->ttl_ == nullptr; };
          // interval Field Functions 
          bool hasInterval() const { return this->interval_ != nullptr;};
          void deleteInterval() { this->interval_ = nullptr;};
          inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
          inline RateLimit& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


          // subKey Field Functions 
          bool hasSubKey() const { return this->subKey_ != nullptr;};
          void deleteSubKey() { this->subKey_ = nullptr;};
          inline string getSubKey() const { DARABONBA_PTR_GET_DEFAULT(subKey_, "") };
          inline RateLimit& setSubKey(string subKey) { DARABONBA_PTR_SET_VALUE(subKey_, subKey) };


          // target Field Functions 
          bool hasTarget() const { return this->target_ != nullptr;};
          void deleteTarget() { this->target_ = nullptr;};
          inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
          inline RateLimit& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


          // threshold Field Functions 
          bool hasThreshold() const { return this->threshold_ != nullptr;};
          void deleteThreshold() { this->threshold_ = nullptr;};
          inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
          inline RateLimit& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


          // ttl Field Functions 
          bool hasTtl() const { return this->ttl_ != nullptr;};
          void deleteTtl() { this->ttl_ = nullptr;};
          inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
          inline RateLimit& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


        protected:
          // The statistical period. Unit: seconds.
          shared_ptr<int32_t> interval_ {};
          // The name of the field. This parameter is required only when the Target parameter is set to header.
          shared_ptr<string> subKey_ {};
          // The statistical method. Valid values:
          // 
          // *   **ip**
          // *   **header**
          shared_ptr<string> target_ {};
          // The trigger threshold.
          shared_ptr<int32_t> threshold_ {};
          // The blocking duration. Unit: seconds.
          shared_ptr<int32_t> ttl_ {};
        };

        class Condition : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Condition& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(ContentList, contentList_);
            DARABONBA_PTR_TO_JSON(Field, field_);
            DARABONBA_PTR_TO_JSON(HeaderName, headerName_);
            DARABONBA_PTR_TO_JSON(MatchMethod, matchMethod_);
          };
          friend void from_json(const Darabonba::Json& j, Condition& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(ContentList, contentList_);
            DARABONBA_PTR_FROM_JSON(Field, field_);
            DARABONBA_PTR_FROM_JSON(HeaderName, headerName_);
            DARABONBA_PTR_FROM_JSON(MatchMethod, matchMethod_);
          };
          Condition() = default ;
          Condition(const Condition &) = default ;
          Condition(Condition &&) = default ;
          Condition(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Condition() = default ;
          Condition& operator=(const Condition &) = default ;
          Condition& operator=(Condition &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->contentList_ == nullptr && this->field_ == nullptr && this->headerName_ == nullptr && this->matchMethod_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Condition& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // contentList Field Functions 
          bool hasContentList() const { return this->contentList_ != nullptr;};
          void deleteContentList() { this->contentList_ = nullptr;};
          inline string getContentList() const { DARABONBA_PTR_GET_DEFAULT(contentList_, "") };
          inline Condition& setContentList(string contentList) { DARABONBA_PTR_SET_VALUE(contentList_, contentList) };


          // field Field Functions 
          bool hasField() const { return this->field_ != nullptr;};
          void deleteField() { this->field_ = nullptr;};
          inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
          inline Condition& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


          // headerName Field Functions 
          bool hasHeaderName() const { return this->headerName_ != nullptr;};
          void deleteHeaderName() { this->headerName_ = nullptr;};
          inline string getHeaderName() const { DARABONBA_PTR_GET_DEFAULT(headerName_, "") };
          inline Condition& setHeaderName(string headerName) { DARABONBA_PTR_SET_VALUE(headerName_, headerName) };


          // matchMethod Field Functions 
          bool hasMatchMethod() const { return this->matchMethod_ != nullptr;};
          void deleteMatchMethod() { this->matchMethod_ = nullptr;};
          inline string getMatchMethod() const { DARABONBA_PTR_GET_DEFAULT(matchMethod_, "") };
          inline Condition& setMatchMethod(string matchMethod) { DARABONBA_PTR_SET_VALUE(matchMethod_, matchMethod) };


        protected:
          // The match content.
          shared_ptr<string> content_ {};
          // The match content when the match method is Equals to One of Multiple Values.
          shared_ptr<string> contentList_ {};
          // The match field.
          shared_ptr<string> field_ {};
          // The custom HTTP request header.
          // 
          // >  This parameter takes effect only when **Field** is set to **header**.
          shared_ptr<string> headerName_ {};
          // The match method.
          shared_ptr<string> matchMethod_ {};
        };

        virtual bool empty() const override { return this->action_ == nullptr
        && this->condition_ == nullptr && this->count_ == nullptr && this->interval_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr
        && this->rateLimit_ == nullptr && this->statistics_ == nullptr && this->statusCode_ == nullptr && this->ttl_ == nullptr && this->uri_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline RuleDetail& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // condition Field Functions 
        bool hasCondition() const { return this->condition_ != nullptr;};
        void deleteCondition() { this->condition_ = nullptr;};
        inline const vector<RuleDetail::Condition> & getCondition() const { DARABONBA_PTR_GET_CONST(condition_, vector<RuleDetail::Condition>) };
        inline vector<RuleDetail::Condition> getCondition() { DARABONBA_PTR_GET(condition_, vector<RuleDetail::Condition>) };
        inline RuleDetail& setCondition(const vector<RuleDetail::Condition> & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
        inline RuleDetail& setCondition(vector<RuleDetail::Condition> && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline RuleDetail& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline RuleDetail& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline RuleDetail& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RuleDetail& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // rateLimit Field Functions 
        bool hasRateLimit() const { return this->rateLimit_ != nullptr;};
        void deleteRateLimit() { this->rateLimit_ = nullptr;};
        inline const RuleDetail::RateLimit & getRateLimit() const { DARABONBA_PTR_GET_CONST(rateLimit_, RuleDetail::RateLimit) };
        inline RuleDetail::RateLimit getRateLimit() { DARABONBA_PTR_GET(rateLimit_, RuleDetail::RateLimit) };
        inline RuleDetail& setRateLimit(const RuleDetail::RateLimit & rateLimit) { DARABONBA_PTR_SET_VALUE(rateLimit_, rateLimit) };
        inline RuleDetail& setRateLimit(RuleDetail::RateLimit && rateLimit) { DARABONBA_PTR_SET_RVALUE(rateLimit_, rateLimit) };


        // statistics Field Functions 
        bool hasStatistics() const { return this->statistics_ != nullptr;};
        void deleteStatistics() { this->statistics_ = nullptr;};
        inline const RuleDetail::Statistics & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, RuleDetail::Statistics) };
        inline RuleDetail::Statistics getStatistics() { DARABONBA_PTR_GET(statistics_, RuleDetail::Statistics) };
        inline RuleDetail& setStatistics(const RuleDetail::Statistics & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
        inline RuleDetail& setStatistics(RuleDetail::Statistics && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline const RuleDetail::StatusCode & getStatusCode() const { DARABONBA_PTR_GET_CONST(statusCode_, RuleDetail::StatusCode) };
        inline RuleDetail::StatusCode getStatusCode() { DARABONBA_PTR_GET(statusCode_, RuleDetail::StatusCode) };
        inline RuleDetail& setStatusCode(const RuleDetail::StatusCode & statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };
        inline RuleDetail& setStatusCode(RuleDetail::StatusCode && statusCode) { DARABONBA_PTR_SET_RVALUE(statusCode_, statusCode) };


        // ttl Field Functions 
        bool hasTtl() const { return this->ttl_ != nullptr;};
        void deleteTtl() { this->ttl_ = nullptr;};
        inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
        inline RuleDetail& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


        // uri Field Functions 
        bool hasUri() const { return this->uri_ != nullptr;};
        void deleteUri() { this->uri_ = nullptr;};
        inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
        inline RuleDetail& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


      protected:
        // The action triggered if the rule is matched. Valid values:
        // 
        // *   **accept**: The requests that match the rule are allowed.
        // *   **block**: The requests that match the rule are blocked.
        // *   **challenge**: Completely Automated Public Turing test to tell Computers and Humans Apart (CAPTCHA) verification for the requests that match the rule is implemented.
        // *   **watch**: The requests that match the rule are recorded in logs and allowed.
        shared_ptr<string> action_ {};
        // The match conditions.
        shared_ptr<vector<RuleDetail::Condition>> condition_ {};
        // The parameter is deprecated.
        shared_ptr<int32_t> count_ {};
        // The parameter is deprecated.
        shared_ptr<int32_t> interval_ {};
        // The parameter is deprecated.
        shared_ptr<string> mode_ {};
        // The name of the rule.
        shared_ptr<string> name_ {};
        // The frequency statistics.
        shared_ptr<RuleDetail::RateLimit> rateLimit_ {};
        // The statistics after deduplication. By default, the system collects statistics before deduplication.
        shared_ptr<RuleDetail::Statistics> statistics_ {};
        // The status codes.
        shared_ptr<RuleDetail::StatusCode> statusCode_ {};
        // The parameter is deprecated.
        shared_ptr<int32_t> ttl_ {};
        // The parameter is deprecated.
        shared_ptr<string> uri_ {};
      };

      virtual bool empty() const override { return this->expires_ == nullptr
        && this->name_ == nullptr && this->owner_ == nullptr && this->ruleDetail_ == nullptr; };
      // expires Field Functions 
      bool hasExpires() const { return this->expires_ != nullptr;};
      void deleteExpires() { this->expires_ = nullptr;};
      inline int64_t getExpires() const { DARABONBA_PTR_GET_DEFAULT(expires_, 0L) };
      inline WebCCRules& setExpires(int64_t expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WebCCRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline WebCCRules& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // ruleDetail Field Functions 
      bool hasRuleDetail() const { return this->ruleDetail_ != nullptr;};
      void deleteRuleDetail() { this->ruleDetail_ = nullptr;};
      inline const WebCCRules::RuleDetail & getRuleDetail() const { DARABONBA_PTR_GET_CONST(ruleDetail_, WebCCRules::RuleDetail) };
      inline WebCCRules::RuleDetail getRuleDetail() { DARABONBA_PTR_GET(ruleDetail_, WebCCRules::RuleDetail) };
      inline WebCCRules& setRuleDetail(const WebCCRules::RuleDetail & ruleDetail) { DARABONBA_PTR_SET_VALUE(ruleDetail_, ruleDetail) };
      inline WebCCRules& setRuleDetail(WebCCRules::RuleDetail && ruleDetail) { DARABONBA_PTR_SET_RVALUE(ruleDetail_, ruleDetail) };


    protected:
      // The validity period of the rule. Unit: seconds. If the Action parameter is set to block, the system blocks the requests that match the rule within the validity period of the rule. The value 0 indicates that the rule is permanently valid.
      shared_ptr<int64_t> expires_ {};
      // The name of the rule.
      shared_ptr<string> name_ {};
      // The method used to create the rule. Valid values:
      // 
      // *   **manual** (default): manually created.
      // *   **clover**: automatically created.
      shared_ptr<string> owner_ {};
      // The details of the rule.
      shared_ptr<WebCCRules::RuleDetail> ruleDetail_ {};
    };

    virtual bool empty() const override { return this->domain_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->webCCRules_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebCCRulesV2ResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebCCRulesV2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeWebCCRulesV2ResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // webCCRules Field Functions 
    bool hasWebCCRules() const { return this->webCCRules_ != nullptr;};
    void deleteWebCCRules() { this->webCCRules_ = nullptr;};
    inline const vector<DescribeWebCCRulesV2ResponseBody::WebCCRules> & getWebCCRules() const { DARABONBA_PTR_GET_CONST(webCCRules_, vector<DescribeWebCCRulesV2ResponseBody::WebCCRules>) };
    inline vector<DescribeWebCCRulesV2ResponseBody::WebCCRules> getWebCCRules() { DARABONBA_PTR_GET(webCCRules_, vector<DescribeWebCCRulesV2ResponseBody::WebCCRules>) };
    inline DescribeWebCCRulesV2ResponseBody& setWebCCRules(const vector<DescribeWebCCRulesV2ResponseBody::WebCCRules> & webCCRules) { DARABONBA_PTR_SET_VALUE(webCCRules_, webCCRules) };
    inline DescribeWebCCRulesV2ResponseBody& setWebCCRules(vector<DescribeWebCCRulesV2ResponseBody::WebCCRules> && webCCRules) { DARABONBA_PTR_SET_RVALUE(webCCRules_, webCCRules) };


  protected:
    // The domain name of the website.
    shared_ptr<string> domain_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of returned custom frequency control rules.
    shared_ptr<string> totalCount_ {};
    // The custom frequency control rules.
    shared_ptr<vector<DescribeWebCCRulesV2ResponseBody::WebCCRules>> webCCRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
