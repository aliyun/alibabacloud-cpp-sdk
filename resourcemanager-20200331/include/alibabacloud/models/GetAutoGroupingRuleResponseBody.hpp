// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOGROUPINGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOGROUPINGRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAutoGroupingRuleResponseBodyRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class GetAutoGroupingRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoGroupingRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoGroupingRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    GetAutoGroupingRuleResponseBody() = default ;
    GetAutoGroupingRuleResponseBody(const GetAutoGroupingRuleResponseBody &) = default ;
    GetAutoGroupingRuleResponseBody(GetAutoGroupingRuleResponseBody &&) = default ;
    GetAutoGroupingRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoGroupingRuleResponseBody() = default ;
    GetAutoGroupingRuleResponseBody& operator=(const GetAutoGroupingRuleResponseBody &) = default ;
    GetAutoGroupingRuleResponseBody& operator=(GetAutoGroupingRuleResponseBody &&) = default ;
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
    inline GetAutoGroupingRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const GetAutoGroupingRuleResponseBodyRule & rule() const { DARABONBA_PTR_GET_CONST(rule_, GetAutoGroupingRuleResponseBodyRule) };
    inline GetAutoGroupingRuleResponseBodyRule rule() { DARABONBA_PTR_GET(rule_, GetAutoGroupingRuleResponseBodyRule) };
    inline GetAutoGroupingRuleResponseBody& setRule(const GetAutoGroupingRuleResponseBodyRule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline GetAutoGroupingRuleResponseBody& setRule(GetAutoGroupingRuleResponseBodyRule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the rule.
    std::shared_ptr<GetAutoGroupingRuleResponseBodyRule> rule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
