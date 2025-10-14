// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCUSTOMREPLYRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTAICOACHSCRIPTPAGERESPONSEBODYLISTCUSTOMREPLYRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAICoachScriptPageResponseBodyListCustomReplyRulesAction.hpp>
#include <alibabacloud/models/ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition.hpp>
#include <alibabacloud/models/ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ListAICoachScriptPageResponseBodyListCustomReplyRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAICoachScriptPageResponseBodyListCustomReplyRules& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(logic, logic_);
      DARABONBA_PTR_TO_JSON(mainCondition, mainCondition_);
      DARABONBA_PTR_TO_JSON(priority, priority_);
      DARABONBA_PTR_TO_JSON(sortNo, sortNo_);
      DARABONBA_PTR_TO_JSON(subCondition, subCondition_);
    };
    friend void from_json(const Darabonba::Json& j, ListAICoachScriptPageResponseBodyListCustomReplyRules& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(logic, logic_);
      DARABONBA_PTR_FROM_JSON(mainCondition, mainCondition_);
      DARABONBA_PTR_FROM_JSON(priority, priority_);
      DARABONBA_PTR_FROM_JSON(sortNo, sortNo_);
      DARABONBA_PTR_FROM_JSON(subCondition, subCondition_);
    };
    ListAICoachScriptPageResponseBodyListCustomReplyRules() = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRules(const ListAICoachScriptPageResponseBodyListCustomReplyRules &) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRules(ListAICoachScriptPageResponseBodyListCustomReplyRules &&) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAICoachScriptPageResponseBodyListCustomReplyRules() = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRules& operator=(const ListAICoachScriptPageResponseBodyListCustomReplyRules &) = default ;
    ListAICoachScriptPageResponseBodyListCustomReplyRules& operator=(ListAICoachScriptPageResponseBodyListCustomReplyRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->logic_ == nullptr && return this->mainCondition_ == nullptr && return this->priority_ == nullptr && return this->sortNo_ == nullptr && return this->subCondition_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline const Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesAction & action() const { DARABONBA_PTR_GET_CONST(action_, Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesAction) };
    inline Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesAction action() { DARABONBA_PTR_GET(action_, Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesAction) };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRules& setAction(const Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesAction & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRules& setAction(Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesAction && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline string logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRules& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // mainCondition Field Functions 
    bool hasMainCondition() const { return this->mainCondition_ != nullptr;};
    void deleteMainCondition() { this->mainCondition_ = nullptr;};
    inline const Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition & mainCondition() const { DARABONBA_PTR_GET_CONST(mainCondition_, Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition) };
    inline Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition mainCondition() { DARABONBA_PTR_GET(mainCondition_, Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition) };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRules& setMainCondition(const Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition & mainCondition) { DARABONBA_PTR_SET_VALUE(mainCondition_, mainCondition) };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRules& setMainCondition(Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition && mainCondition) { DARABONBA_PTR_SET_RVALUE(mainCondition_, mainCondition) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // sortNo Field Functions 
    bool hasSortNo() const { return this->sortNo_ != nullptr;};
    void deleteSortNo() { this->sortNo_ = nullptr;};
    inline int32_t sortNo() const { DARABONBA_PTR_GET_DEFAULT(sortNo_, 0) };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRules& setSortNo(int32_t sortNo) { DARABONBA_PTR_SET_VALUE(sortNo_, sortNo) };


    // subCondition Field Functions 
    bool hasSubCondition() const { return this->subCondition_ != nullptr;};
    void deleteSubCondition() { this->subCondition_ = nullptr;};
    inline const Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition & subCondition() const { DARABONBA_PTR_GET_CONST(subCondition_, Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition) };
    inline Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition subCondition() { DARABONBA_PTR_GET(subCondition_, Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition) };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRules& setSubCondition(const Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition & subCondition) { DARABONBA_PTR_SET_VALUE(subCondition_, subCondition) };
    inline ListAICoachScriptPageResponseBodyListCustomReplyRules& setSubCondition(Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition && subCondition) { DARABONBA_PTR_SET_RVALUE(subCondition_, subCondition) };


  protected:
    std::shared_ptr<Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesAction> action_ = nullptr;
    std::shared_ptr<string> logic_ = nullptr;
    std::shared_ptr<Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesMainCondition> mainCondition_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    std::shared_ptr<int32_t> sortNo_ = nullptr;
    std::shared_ptr<Models::ListAICoachScriptPageResponseBodyListCustomReplyRulesSubCondition> subCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
