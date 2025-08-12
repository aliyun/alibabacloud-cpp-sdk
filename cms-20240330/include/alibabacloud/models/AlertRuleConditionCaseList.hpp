// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULECONDITIONCASELIST_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULECONDITIONCASELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleConditionCaseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleConditionCaseList& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(countCondition, countCondition_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleConditionCaseList& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(countCondition, countCondition_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    AlertRuleConditionCaseList() = default ;
    AlertRuleConditionCaseList(const AlertRuleConditionCaseList &) = default ;
    AlertRuleConditionCaseList(AlertRuleConditionCaseList &&) = default ;
    AlertRuleConditionCaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleConditionCaseList() = default ;
    AlertRuleConditionCaseList& operator=(const AlertRuleConditionCaseList &) = default ;
    AlertRuleConditionCaseList& operator=(AlertRuleConditionCaseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->countCondition_ != nullptr && this->level_ != nullptr && this->type_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string condition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline AlertRuleConditionCaseList& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // countCondition Field Functions 
    bool hasCountCondition() const { return this->countCondition_ != nullptr;};
    void deleteCountCondition() { this->countCondition_ = nullptr;};
    inline string countCondition() const { DARABONBA_PTR_GET_DEFAULT(countCondition_, "") };
    inline AlertRuleConditionCaseList& setCountCondition(string countCondition) { DARABONBA_PTR_SET_VALUE(countCondition_, countCondition) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline AlertRuleConditionCaseList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertRuleConditionCaseList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> condition_ = nullptr;
    std::shared_ptr<string> countCondition_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
