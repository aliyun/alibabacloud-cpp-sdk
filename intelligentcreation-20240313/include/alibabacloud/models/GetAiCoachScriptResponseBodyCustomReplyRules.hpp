// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCUSTOMREPLYRULES_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYCUSTOMREPLYRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyCustomReplyRulesAction.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyCustomReplyRulesMainCondition.hpp>
#include <alibabacloud/models/GetAICoachScriptResponseBodyCustomReplyRulesSubCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyCustomReplyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyCustomReplyRules& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(logic, logic_);
      DARABONBA_PTR_TO_JSON(mainCondition, mainCondition_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(subCondition, subCondition_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyCustomReplyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(logic, logic_);
      DARABONBA_PTR_FROM_JSON(mainCondition, mainCondition_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(subCondition, subCondition_);
    };
    GetAICoachScriptResponseBodyCustomReplyRules() = default ;
    GetAICoachScriptResponseBodyCustomReplyRules(const GetAICoachScriptResponseBodyCustomReplyRules &) = default ;
    GetAICoachScriptResponseBodyCustomReplyRules(GetAICoachScriptResponseBodyCustomReplyRules &&) = default ;
    GetAICoachScriptResponseBodyCustomReplyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyCustomReplyRules() = default ;
    GetAICoachScriptResponseBodyCustomReplyRules& operator=(const GetAICoachScriptResponseBodyCustomReplyRules &) = default ;
    GetAICoachScriptResponseBodyCustomReplyRules& operator=(GetAICoachScriptResponseBodyCustomReplyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->logic_ == nullptr && return this->mainCondition_ == nullptr && return this->priority_ == nullptr && return this->subCondition_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline const Models::GetAICoachScriptResponseBodyCustomReplyRulesAction & action() const { DARABONBA_PTR_GET_CONST(action_, Models::GetAICoachScriptResponseBodyCustomReplyRulesAction) };
    inline Models::GetAICoachScriptResponseBodyCustomReplyRulesAction action() { DARABONBA_PTR_GET(action_, Models::GetAICoachScriptResponseBodyCustomReplyRulesAction) };
    inline GetAICoachScriptResponseBodyCustomReplyRules& setAction(const Models::GetAICoachScriptResponseBodyCustomReplyRulesAction & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
    inline GetAICoachScriptResponseBodyCustomReplyRules& setAction(Models::GetAICoachScriptResponseBodyCustomReplyRulesAction && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline string logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
    inline GetAICoachScriptResponseBodyCustomReplyRules& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // mainCondition Field Functions 
    bool hasMainCondition() const { return this->mainCondition_ != nullptr;};
    void deleteMainCondition() { this->mainCondition_ = nullptr;};
    inline const Models::GetAICoachScriptResponseBodyCustomReplyRulesMainCondition & mainCondition() const { DARABONBA_PTR_GET_CONST(mainCondition_, Models::GetAICoachScriptResponseBodyCustomReplyRulesMainCondition) };
    inline Models::GetAICoachScriptResponseBodyCustomReplyRulesMainCondition mainCondition() { DARABONBA_PTR_GET(mainCondition_, Models::GetAICoachScriptResponseBodyCustomReplyRulesMainCondition) };
    inline GetAICoachScriptResponseBodyCustomReplyRules& setMainCondition(const Models::GetAICoachScriptResponseBodyCustomReplyRulesMainCondition & mainCondition) { DARABONBA_PTR_SET_VALUE(mainCondition_, mainCondition) };
    inline GetAICoachScriptResponseBodyCustomReplyRules& setMainCondition(Models::GetAICoachScriptResponseBodyCustomReplyRulesMainCondition && mainCondition) { DARABONBA_PTR_SET_RVALUE(mainCondition_, mainCondition) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline GetAICoachScriptResponseBodyCustomReplyRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // subCondition Field Functions 
    bool hasSubCondition() const { return this->subCondition_ != nullptr;};
    void deleteSubCondition() { this->subCondition_ = nullptr;};
    inline const Models::GetAICoachScriptResponseBodyCustomReplyRulesSubCondition & subCondition() const { DARABONBA_PTR_GET_CONST(subCondition_, Models::GetAICoachScriptResponseBodyCustomReplyRulesSubCondition) };
    inline Models::GetAICoachScriptResponseBodyCustomReplyRulesSubCondition subCondition() { DARABONBA_PTR_GET(subCondition_, Models::GetAICoachScriptResponseBodyCustomReplyRulesSubCondition) };
    inline GetAICoachScriptResponseBodyCustomReplyRules& setSubCondition(const Models::GetAICoachScriptResponseBodyCustomReplyRulesSubCondition & subCondition) { DARABONBA_PTR_SET_VALUE(subCondition_, subCondition) };
    inline GetAICoachScriptResponseBodyCustomReplyRules& setSubCondition(Models::GetAICoachScriptResponseBodyCustomReplyRulesSubCondition && subCondition) { DARABONBA_PTR_SET_RVALUE(subCondition_, subCondition) };


  protected:
    std::shared_ptr<Models::GetAICoachScriptResponseBodyCustomReplyRulesAction> action_ = nullptr;
    std::shared_ptr<string> logic_ = nullptr;
    std::shared_ptr<Models::GetAICoachScriptResponseBodyCustomReplyRulesMainCondition> mainCondition_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<Models::GetAICoachScriptResponseBodyCustomReplyRulesSubCondition> subCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
