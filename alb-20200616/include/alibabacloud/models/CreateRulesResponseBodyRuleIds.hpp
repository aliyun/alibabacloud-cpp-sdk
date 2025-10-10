// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODYRULEIDS_HPP_
#define ALIBABACLOUD_MODELS_CREATERULESRESPONSEBODYRULEIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class CreateRulesResponseBodyRuleIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRulesResponseBodyRuleIds& obj) { 
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRulesResponseBodyRuleIds& obj) { 
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    CreateRulesResponseBodyRuleIds() = default ;
    CreateRulesResponseBodyRuleIds(const CreateRulesResponseBodyRuleIds &) = default ;
    CreateRulesResponseBodyRuleIds(CreateRulesResponseBodyRuleIds &&) = default ;
    CreateRulesResponseBodyRuleIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRulesResponseBodyRuleIds() = default ;
    CreateRulesResponseBodyRuleIds& operator=(const CreateRulesResponseBodyRuleIds &) = default ;
    CreateRulesResponseBodyRuleIds& operator=(CreateRulesResponseBodyRuleIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->priority_ != nullptr
        && this->ruleId_ != nullptr; };
    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateRulesResponseBodyRuleIds& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CreateRulesResponseBodyRuleIds& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The priority of the forwarding rule. Valid values: **1 to 10000**. A smaller value indicates a higher priority.
    // 
    // > The priorities of the forwarding rules created for the same listener must be unique.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The forwarding rule ID.
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
