// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEFENSERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEFENSERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateDefenseRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
    };
    CreateDefenseRuleResponseBody() = default ;
    CreateDefenseRuleResponseBody(const CreateDefenseRuleResponseBody &) = default ;
    CreateDefenseRuleResponseBody(CreateDefenseRuleResponseBody &&) = default ;
    CreateDefenseRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDefenseRuleResponseBody() = default ;
    CreateDefenseRuleResponseBody& operator=(const CreateDefenseRuleResponseBody &) = default ;
    CreateDefenseRuleResponseBody& operator=(CreateDefenseRuleResponseBody &&) = default ;
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
    inline CreateDefenseRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline string ruleIds() const { DARABONBA_PTR_GET_DEFAULT(ruleIds_, "") };
    inline CreateDefenseRuleResponseBody& setRuleIds(string ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The IDs of the protection rules. Multiple IDs are separated by commas (,).
    std::shared_ptr<string> ruleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
