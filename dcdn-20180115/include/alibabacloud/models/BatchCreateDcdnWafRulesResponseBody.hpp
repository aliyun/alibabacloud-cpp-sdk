// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEDCDNWAFRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEDCDNWAFRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchCreateDcdnWafRulesResponseBodyRuleIds.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchCreateDcdnWafRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateDcdnWafRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateDcdnWafRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
    };
    BatchCreateDcdnWafRulesResponseBody() = default ;
    BatchCreateDcdnWafRulesResponseBody(const BatchCreateDcdnWafRulesResponseBody &) = default ;
    BatchCreateDcdnWafRulesResponseBody(BatchCreateDcdnWafRulesResponseBody &&) = default ;
    BatchCreateDcdnWafRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateDcdnWafRulesResponseBody() = default ;
    BatchCreateDcdnWafRulesResponseBody& operator=(const BatchCreateDcdnWafRulesResponseBody &) = default ;
    BatchCreateDcdnWafRulesResponseBody& operator=(BatchCreateDcdnWafRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->ruleIds_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateDcdnWafRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const BatchCreateDcdnWafRulesResponseBodyRuleIds & ruleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, BatchCreateDcdnWafRulesResponseBodyRuleIds) };
    inline BatchCreateDcdnWafRulesResponseBodyRuleIds ruleIds() { DARABONBA_PTR_GET(ruleIds_, BatchCreateDcdnWafRulesResponseBodyRuleIds) };
    inline BatchCreateDcdnWafRulesResponseBody& setRuleIds(const BatchCreateDcdnWafRulesResponseBodyRuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline BatchCreateDcdnWafRulesResponseBody& setRuleIds(BatchCreateDcdnWafRulesResponseBodyRuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDs of created rules.
    std::shared_ptr<BatchCreateDcdnWafRulesResponseBodyRuleIds> ruleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
