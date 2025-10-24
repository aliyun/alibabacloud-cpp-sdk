// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDefenseRuleResponseBodyRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeDefenseRuleResponseBody() = default ;
    DescribeDefenseRuleResponseBody(const DescribeDefenseRuleResponseBody &) = default ;
    DescribeDefenseRuleResponseBody(DescribeDefenseRuleResponseBody &&) = default ;
    DescribeDefenseRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRuleResponseBody() = default ;
    DescribeDefenseRuleResponseBody& operator=(const DescribeDefenseRuleResponseBody &) = default ;
    DescribeDefenseRuleResponseBody& operator=(DescribeDefenseRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->rule_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const DescribeDefenseRuleResponseBodyRule & rule() const { DARABONBA_PTR_GET_CONST(rule_, DescribeDefenseRuleResponseBodyRule) };
    inline DescribeDefenseRuleResponseBodyRule rule() { DARABONBA_PTR_GET(rule_, DescribeDefenseRuleResponseBodyRule) };
    inline DescribeDefenseRuleResponseBody& setRule(const DescribeDefenseRuleResponseBodyRule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeDefenseRuleResponseBody& setRule(DescribeDefenseRuleResponseBodyRule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The configurations of the protection rule. The value is a JSON string that contains multiple parameters.
    std::shared_ptr<DescribeDefenseRuleResponseBodyRule> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
