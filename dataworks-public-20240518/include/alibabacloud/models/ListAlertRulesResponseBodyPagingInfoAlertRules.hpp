// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFOALERTRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFOALERTRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAlertRulesResponseBodyPagingInfoAlertRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertRulesResponseBodyPagingInfoAlertRules& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(TriggerCondition, triggerCondition_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertRulesResponseBodyPagingInfoAlertRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(TriggerCondition, triggerCondition_);
    };
    ListAlertRulesResponseBodyPagingInfoAlertRules() = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRules(const ListAlertRulesResponseBodyPagingInfoAlertRules &) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRules(ListAlertRulesResponseBodyPagingInfoAlertRules &&) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertRulesResponseBodyPagingInfoAlertRules() = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRules& operator=(const ListAlertRulesResponseBodyPagingInfoAlertRules &) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRules& operator=(ListAlertRulesResponseBodyPagingInfoAlertRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr && this->owner_ != nullptr && this->triggerCondition_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAlertRulesResponseBodyPagingInfoAlertRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListAlertRulesResponseBodyPagingInfoAlertRules& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // triggerCondition Field Functions 
    bool hasTriggerCondition() const { return this->triggerCondition_ != nullptr;};
    void deleteTriggerCondition() { this->triggerCondition_ = nullptr;};
    inline const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerCondition & triggerCondition() const { DARABONBA_PTR_GET_CONST(triggerCondition_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerCondition) };
    inline Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerCondition triggerCondition() { DARABONBA_PTR_GET(triggerCondition_, Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerCondition) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRules& setTriggerCondition(const Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerCondition & triggerCondition) { DARABONBA_PTR_SET_VALUE(triggerCondition_, triggerCondition) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRules& setTriggerCondition(Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerCondition && triggerCondition) { DARABONBA_PTR_SET_RVALUE(triggerCondition_, triggerCondition) };


  protected:
    // Indicates whether the rule is enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the Alibaba Cloud account used by the owner of the rule.
    std::shared_ptr<string> owner_ = nullptr;
    // The alert triggering condition.
    std::shared_ptr<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerCondition> triggerCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
