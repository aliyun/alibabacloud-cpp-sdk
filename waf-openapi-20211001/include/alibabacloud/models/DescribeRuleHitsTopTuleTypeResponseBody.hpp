// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPTULETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPTULETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopTuleTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopTuleTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopTuleType, ruleHitsTopTuleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopTuleTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopTuleType, ruleHitsTopTuleType_);
    };
    DescribeRuleHitsTopTuleTypeResponseBody() = default ;
    DescribeRuleHitsTopTuleTypeResponseBody(const DescribeRuleHitsTopTuleTypeResponseBody &) = default ;
    DescribeRuleHitsTopTuleTypeResponseBody(DescribeRuleHitsTopTuleTypeResponseBody &&) = default ;
    DescribeRuleHitsTopTuleTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopTuleTypeResponseBody() = default ;
    DescribeRuleHitsTopTuleTypeResponseBody& operator=(const DescribeRuleHitsTopTuleTypeResponseBody &) = default ;
    DescribeRuleHitsTopTuleTypeResponseBody& operator=(DescribeRuleHitsTopTuleTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleHitsTopTuleType : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleHitsTopTuleType& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      };
      friend void from_json(const Darabonba::Json& j, RuleHitsTopTuleType& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      };
      RuleHitsTopTuleType() = default ;
      RuleHitsTopTuleType(const RuleHitsTopTuleType &) = default ;
      RuleHitsTopTuleType(RuleHitsTopTuleType &&) = default ;
      RuleHitsTopTuleType(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleHitsTopTuleType() = default ;
      RuleHitsTopTuleType& operator=(const RuleHitsTopTuleType &) = default ;
      RuleHitsTopTuleType& operator=(RuleHitsTopTuleType &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->ruleType_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline RuleHitsTopTuleType& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline RuleHitsTopTuleType& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    protected:
      // The number of requests that match protection rules.
      shared_ptr<int64_t> count_ {};
      // The type of rule that is matched. By default, this parameter is not returned. This indicates that all types of rules that are matched are returned.
      // 
      // *   **waf:** basic protection rules.
      // *   **blacklist:** IP address blacklist rules.
      // *   **custom:** custom rules.
      // *   **antiscan:** scan protection rules.
      // *   **cc_system:** HTTP flood protection rules.
      // *   **region_block:** region blacklist rules.
      // *   **scene:** bot management rules.
      // *   **dlp:** data leakage prevention rules.
      shared_ptr<string> ruleType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleHitsTopTuleType_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitsTopTuleTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopTuleType Field Functions 
    bool hasRuleHitsTopTuleType() const { return this->ruleHitsTopTuleType_ != nullptr;};
    void deleteRuleHitsTopTuleType() { this->ruleHitsTopTuleType_ = nullptr;};
    inline const vector<DescribeRuleHitsTopTuleTypeResponseBody::RuleHitsTopTuleType> & getRuleHitsTopTuleType() const { DARABONBA_PTR_GET_CONST(ruleHitsTopTuleType_, vector<DescribeRuleHitsTopTuleTypeResponseBody::RuleHitsTopTuleType>) };
    inline vector<DescribeRuleHitsTopTuleTypeResponseBody::RuleHitsTopTuleType> getRuleHitsTopTuleType() { DARABONBA_PTR_GET(ruleHitsTopTuleType_, vector<DescribeRuleHitsTopTuleTypeResponseBody::RuleHitsTopTuleType>) };
    inline DescribeRuleHitsTopTuleTypeResponseBody& setRuleHitsTopTuleType(const vector<DescribeRuleHitsTopTuleTypeResponseBody::RuleHitsTopTuleType> & ruleHitsTopTuleType) { DARABONBA_PTR_SET_VALUE(ruleHitsTopTuleType_, ruleHitsTopTuleType) };
    inline DescribeRuleHitsTopTuleTypeResponseBody& setRuleHitsTopTuleType(vector<DescribeRuleHitsTopTuleTypeResponseBody::RuleHitsTopTuleType> && ruleHitsTopTuleType) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopTuleType_, ruleHitsTopTuleType) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The top 10 protection modules that are matched.
    shared_ptr<vector<DescribeRuleHitsTopTuleTypeResponseBody::RuleHitsTopTuleType>> ruleHitsTopTuleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
