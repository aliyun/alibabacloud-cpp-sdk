// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnWafRuleResponseBodyRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    DescribeDcdnWafRuleResponseBody() = default ;
    DescribeDcdnWafRuleResponseBody(const DescribeDcdnWafRuleResponseBody &) = default ;
    DescribeDcdnWafRuleResponseBody(DescribeDcdnWafRuleResponseBody &&) = default ;
    DescribeDcdnWafRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafRuleResponseBody() = default ;
    DescribeDcdnWafRuleResponseBody& operator=(const DescribeDcdnWafRuleResponseBody &) = default ;
    DescribeDcdnWafRuleResponseBody& operator=(DescribeDcdnWafRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->rule_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const DescribeDcdnWafRuleResponseBodyRule & rule() const { DARABONBA_PTR_GET_CONST(rule_, DescribeDcdnWafRuleResponseBodyRule) };
    inline DescribeDcdnWafRuleResponseBodyRule rule() { DARABONBA_PTR_GET(rule_, DescribeDcdnWafRuleResponseBodyRule) };
    inline DescribeDcdnWafRuleResponseBody& setRule(const DescribeDcdnWafRuleResponseBodyRule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline DescribeDcdnWafRuleResponseBody& setRule(DescribeDcdnWafRuleResponseBodyRule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the protection rule.
    std::shared_ptr<DescribeDcdnWafRuleResponseBodyRule> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
