// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEAIPRODUCERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEAIPRODUCERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveAIProduceRulesResponseBodyRuleInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveAIProduceRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveAIProduceRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleInfoList, ruleInfoList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveAIProduceRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleInfoList, ruleInfoList_);
    };
    DescribeLiveAIProduceRulesResponseBody() = default ;
    DescribeLiveAIProduceRulesResponseBody(const DescribeLiveAIProduceRulesResponseBody &) = default ;
    DescribeLiveAIProduceRulesResponseBody(DescribeLiveAIProduceRulesResponseBody &&) = default ;
    DescribeLiveAIProduceRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveAIProduceRulesResponseBody() = default ;
    DescribeLiveAIProduceRulesResponseBody& operator=(const DescribeLiveAIProduceRulesResponseBody &) = default ;
    DescribeLiveAIProduceRulesResponseBody& operator=(DescribeLiveAIProduceRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleInfoList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveAIProduceRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleInfoList Field Functions 
    bool hasRuleInfoList() const { return this->ruleInfoList_ != nullptr;};
    void deleteRuleInfoList() { this->ruleInfoList_ = nullptr;};
    inline const DescribeLiveAIProduceRulesResponseBodyRuleInfoList & ruleInfoList() const { DARABONBA_PTR_GET_CONST(ruleInfoList_, DescribeLiveAIProduceRulesResponseBodyRuleInfoList) };
    inline DescribeLiveAIProduceRulesResponseBodyRuleInfoList ruleInfoList() { DARABONBA_PTR_GET(ruleInfoList_, DescribeLiveAIProduceRulesResponseBodyRuleInfoList) };
    inline DescribeLiveAIProduceRulesResponseBody& setRuleInfoList(const DescribeLiveAIProduceRulesResponseBodyRuleInfoList & ruleInfoList) { DARABONBA_PTR_SET_VALUE(ruleInfoList_, ruleInfoList) };
    inline DescribeLiveAIProduceRulesResponseBody& setRuleInfoList(DescribeLiveAIProduceRulesResponseBodyRuleInfoList && ruleInfoList) { DARABONBA_PTR_SET_RVALUE(ruleInfoList_, ruleInfoList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The subtitle rules.
    std::shared_ptr<DescribeLiveAIProduceRulesResponseBodyRuleInfoList> ruleInfoList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
