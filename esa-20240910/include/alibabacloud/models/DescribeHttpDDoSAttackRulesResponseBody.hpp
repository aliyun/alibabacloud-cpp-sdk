// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHTTPDDOSATTACKRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHTTPDDOSATTACKRULESRESPONSEBODY_HPP_
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
  class DescribeHttpDDoSAttackRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHttpDDoSAttackRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleInfos, ruleInfos_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHttpDDoSAttackRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleInfos, ruleInfos_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHttpDDoSAttackRulesResponseBody() = default ;
    DescribeHttpDDoSAttackRulesResponseBody(const DescribeHttpDDoSAttackRulesResponseBody &) = default ;
    DescribeHttpDDoSAttackRulesResponseBody(DescribeHttpDDoSAttackRulesResponseBody &&) = default ;
    DescribeHttpDDoSAttackRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHttpDDoSAttackRulesResponseBody() = default ;
    DescribeHttpDDoSAttackRulesResponseBody& operator=(const DescribeHttpDDoSAttackRulesResponseBody &) = default ;
    DescribeHttpDDoSAttackRulesResponseBody& operator=(DescribeHttpDDoSAttackRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleInfos& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(DefaultAction, defaultAction_);
        DARABONBA_PTR_TO_JSON(LogRuleId, logRuleId_);
        DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleIdInfo, ruleIdInfo_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, RuleInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(DefaultAction, defaultAction_);
        DARABONBA_PTR_FROM_JSON(LogRuleId, logRuleId_);
        DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleIdInfo, ruleIdInfo_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
        && this->defaultAction_ == nullptr && this->logRuleId_ == nullptr && this->ruleDesc_ == nullptr && this->ruleId_ == nullptr && this->ruleIdInfo_ == nullptr
        && this->ruleName_ == nullptr && this->status_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline RuleInfos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // defaultAction Field Functions 
      bool hasDefaultAction() const { return this->defaultAction_ != nullptr;};
      void deleteDefaultAction() { this->defaultAction_ = nullptr;};
      inline string getDefaultAction() const { DARABONBA_PTR_GET_DEFAULT(defaultAction_, "") };
      inline RuleInfos& setDefaultAction(string defaultAction) { DARABONBA_PTR_SET_VALUE(defaultAction_, defaultAction) };


      // logRuleId Field Functions 
      bool hasLogRuleId() const { return this->logRuleId_ != nullptr;};
      void deleteLogRuleId() { this->logRuleId_ = nullptr;};
      inline int32_t getLogRuleId() const { DARABONBA_PTR_GET_DEFAULT(logRuleId_, 0) };
      inline RuleInfos& setLogRuleId(int32_t logRuleId) { DARABONBA_PTR_SET_VALUE(logRuleId_, logRuleId) };


      // ruleDesc Field Functions 
      bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
      void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
      inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
      inline RuleInfos& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int32_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0) };
      inline RuleInfos& setRuleId(int32_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleIdInfo Field Functions 
      bool hasRuleIdInfo() const { return this->ruleIdInfo_ != nullptr;};
      void deleteRuleIdInfo() { this->ruleIdInfo_ = nullptr;};
      inline string getRuleIdInfo() const { DARABONBA_PTR_GET_DEFAULT(ruleIdInfo_, "") };
      inline RuleInfos& setRuleIdInfo(string ruleIdInfo) { DARABONBA_PTR_SET_VALUE(ruleIdInfo_, ruleIdInfo) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline RuleInfos& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline RuleInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> defaultAction_ {};
      shared_ptr<int32_t> logRuleId_ {};
      shared_ptr<string> ruleDesc_ {};
      shared_ptr<int32_t> ruleId_ {};
      shared_ptr<string> ruleIdInfo_ {};
      shared_ptr<string> ruleName_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->ruleInfos_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeHttpDDoSAttackRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeHttpDDoSAttackRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHttpDDoSAttackRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleInfos Field Functions 
    bool hasRuleInfos() const { return this->ruleInfos_ != nullptr;};
    void deleteRuleInfos() { this->ruleInfos_ = nullptr;};
    inline const vector<DescribeHttpDDoSAttackRulesResponseBody::RuleInfos> & getRuleInfos() const { DARABONBA_PTR_GET_CONST(ruleInfos_, vector<DescribeHttpDDoSAttackRulesResponseBody::RuleInfos>) };
    inline vector<DescribeHttpDDoSAttackRulesResponseBody::RuleInfos> getRuleInfos() { DARABONBA_PTR_GET(ruleInfos_, vector<DescribeHttpDDoSAttackRulesResponseBody::RuleInfos>) };
    inline DescribeHttpDDoSAttackRulesResponseBody& setRuleInfos(const vector<DescribeHttpDDoSAttackRulesResponseBody::RuleInfos> & ruleInfos) { DARABONBA_PTR_SET_VALUE(ruleInfos_, ruleInfos) };
    inline DescribeHttpDDoSAttackRulesResponseBody& setRuleInfos(vector<DescribeHttpDDoSAttackRulesResponseBody::RuleInfos> && ruleInfos) { DARABONBA_PTR_SET_RVALUE(ruleInfos_, ruleInfos) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHttpDDoSAttackRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeHttpDDoSAttackRulesResponseBody::RuleInfos>> ruleInfos_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
