// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBFILTERRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBFILTERRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ListWebFilterRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebFilterRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebFilterRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListWebFilterRulesResponseBody() = default ;
    ListWebFilterRulesResponseBody(const ListWebFilterRulesResponseBody &) = default ;
    ListWebFilterRulesResponseBody(ListWebFilterRulesResponseBody &&) = default ;
    ListWebFilterRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebFilterRulesResponseBody() = default ;
    ListWebFilterRulesResponseBody& operator=(const ListWebFilterRulesResponseBody &) = default ;
    ListWebFilterRulesResponseBody& operator=(ListWebFilterRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(Conditions, conditions_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(WebFilterRuleId, webFilterRuleId_);
        DARABONBA_PTR_TO_JSON(WebFilterTemplateId, webFilterTemplateId_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(WebFilterRuleId, webFilterRuleId_);
        DARABONBA_PTR_FROM_JSON(WebFilterTemplateId, webFilterTemplateId_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Conditions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
        inline Conditions& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


      protected:
        // The type of the matching condition. Only **URL** is supported, which indicates matching by URL.
        shared_ptr<string> key_ {};
        // The URL to match. A single asterisk (*) matches all URLs. A value ending with /* indicates prefix wildcard matching.
        shared_ptr<string> values_ {};
      };

      virtual bool empty() const override { return this->conditions_ == nullptr
        && this->createTime_ == nullptr && this->ruleAction_ == nullptr && this->updateTime_ == nullptr && this->webFilterRuleId_ == nullptr && this->webFilterTemplateId_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<Rules::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Rules::Conditions>) };
      inline vector<Rules::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Rules::Conditions>) };
      inline Rules& setConditions(const vector<Rules::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline Rules& setConditions(vector<Rules::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Rules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
      inline Rules& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Rules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // webFilterRuleId Field Functions 
      bool hasWebFilterRuleId() const { return this->webFilterRuleId_ != nullptr;};
      void deleteWebFilterRuleId() { this->webFilterRuleId_ = nullptr;};
      inline string getWebFilterRuleId() const { DARABONBA_PTR_GET_DEFAULT(webFilterRuleId_, "") };
      inline Rules& setWebFilterRuleId(string webFilterRuleId) { DARABONBA_PTR_SET_VALUE(webFilterRuleId_, webFilterRuleId) };


      // webFilterTemplateId Field Functions 
      bool hasWebFilterTemplateId() const { return this->webFilterTemplateId_ != nullptr;};
      void deleteWebFilterTemplateId() { this->webFilterTemplateId_ = nullptr;};
      inline string getWebFilterTemplateId() const { DARABONBA_PTR_GET_DEFAULT(webFilterTemplateId_, "") };
      inline Rules& setWebFilterTemplateId(string webFilterTemplateId) { DARABONBA_PTR_SET_VALUE(webFilterTemplateId_, webFilterTemplateId) };


    protected:
      // The matching conditions of the rule. The list contains only one condition.
      shared_ptr<vector<Rules::Conditions>> conditions_ {};
      // The time when the web filtering rule was created. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> createTime_ {};
      // The action performed after the rule is matched. Valid values:
      // - **Allow**: allows the traffic.
      // - **Alert**: monitors the traffic.
      // - **Deny**: blocks the traffic.
      shared_ptr<string> ruleAction_ {};
      // The time when the web filtering rule was last modified. The value is a UNIX timestamp in seconds.
      shared_ptr<int64_t> updateTime_ {};
      // The ID of the web filtering rule.
      shared_ptr<string> webFilterRuleId_ {};
      // The ID of the web filtering template to which the rule belongs.
      shared_ptr<string> webFilterTemplateId_ {};
    };

    virtual bool empty() const override { return this->pageNo_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->rules_ == nullptr && this->totalCount_ == nullptr; };
    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
    inline ListWebFilterRulesResponseBody& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListWebFilterRulesResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWebFilterRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<ListWebFilterRulesResponseBody::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ListWebFilterRulesResponseBody::Rules>) };
    inline vector<ListWebFilterRulesResponseBody::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ListWebFilterRulesResponseBody::Rules>) };
    inline ListWebFilterRulesResponseBody& setRules(const vector<ListWebFilterRulesResponseBody::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListWebFilterRulesResponseBody& setRules(vector<ListWebFilterRulesResponseBody::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListWebFilterRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int64_t> pageNo_ {};
    // The current number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of web filtering rules.
    shared_ptr<vector<ListWebFilterRulesResponseBody::Rules>> rules_ {};
    // The total number of web filtering rules that meet the filter conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
