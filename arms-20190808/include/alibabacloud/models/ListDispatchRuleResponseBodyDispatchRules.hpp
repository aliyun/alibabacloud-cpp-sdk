// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISPATCHRULERESPONSEBODYDISPATCHRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTDISPATCHRULERESPONSEBODYDISPATCHRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListDispatchRuleResponseBodyDispatchRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDispatchRuleResponseBodyDispatchRules& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListDispatchRuleResponseBodyDispatchRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListDispatchRuleResponseBodyDispatchRules() = default ;
    ListDispatchRuleResponseBodyDispatchRules(const ListDispatchRuleResponseBodyDispatchRules &) = default ;
    ListDispatchRuleResponseBodyDispatchRules(ListDispatchRuleResponseBodyDispatchRules &&) = default ;
    ListDispatchRuleResponseBodyDispatchRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDispatchRuleResponseBodyDispatchRules() = default ;
    ListDispatchRuleResponseBodyDispatchRules& operator=(const ListDispatchRuleResponseBodyDispatchRules &) = default ;
    ListDispatchRuleResponseBodyDispatchRules& operator=(ListDispatchRuleResponseBodyDispatchRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->ruleId_ != nullptr && this->state_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDispatchRuleResponseBodyDispatchRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListDispatchRuleResponseBodyDispatchRules& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListDispatchRuleResponseBodyDispatchRules& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The name of the notification policy.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the notification policy.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // Indicates whether the notification policy is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
