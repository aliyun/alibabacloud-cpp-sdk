// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFBATCHRULESHARED_HPP_
#define ALIBABACLOUD_MODELS_WAFBATCHRULESHARED_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafBatchRuleSharedActions.hpp>
#include <alibabacloud/models/WafRuleMatch2.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafBatchRuleShared : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafBatchRuleShared& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(CrossSiteId, crossSiteId_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Match, match_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Target, target_);
    };
    friend void from_json(const Darabonba::Json& j, WafBatchRuleShared& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(CrossSiteId, crossSiteId_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Match, match_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
    };
    WafBatchRuleShared() = default ;
    WafBatchRuleShared(const WafBatchRuleShared &) = default ;
    WafBatchRuleShared(WafBatchRuleShared &&) = default ;
    WafBatchRuleShared(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafBatchRuleShared() = default ;
    WafBatchRuleShared& operator=(const WafBatchRuleShared &) = default ;
    WafBatchRuleShared& operator=(WafBatchRuleShared &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->actions_ == nullptr && return this->crossSiteId_ == nullptr && return this->expression_ == nullptr && return this->match_ == nullptr && return this->mode_ == nullptr
        && return this->name_ == nullptr && return this->target_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline WafBatchRuleShared& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const WafBatchRuleSharedActions & actions() const { DARABONBA_PTR_GET_CONST(actions_, WafBatchRuleSharedActions) };
    inline WafBatchRuleSharedActions actions() { DARABONBA_PTR_GET(actions_, WafBatchRuleSharedActions) };
    inline WafBatchRuleShared& setActions(const WafBatchRuleSharedActions & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline WafBatchRuleShared& setActions(WafBatchRuleSharedActions && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // crossSiteId Field Functions 
    bool hasCrossSiteId() const { return this->crossSiteId_ != nullptr;};
    void deleteCrossSiteId() { this->crossSiteId_ = nullptr;};
    inline int64_t crossSiteId() const { DARABONBA_PTR_GET_DEFAULT(crossSiteId_, 0L) };
    inline WafBatchRuleShared& setCrossSiteId(int64_t crossSiteId) { DARABONBA_PTR_SET_VALUE(crossSiteId_, crossSiteId) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline WafBatchRuleShared& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const WafRuleMatch2 & match() const { DARABONBA_PTR_GET_CONST(match_, WafRuleMatch2) };
    inline WafRuleMatch2 match() { DARABONBA_PTR_GET(match_, WafRuleMatch2) };
    inline WafBatchRuleShared& setMatch(const WafRuleMatch2 & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline WafBatchRuleShared& setMatch(WafRuleMatch2 && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline WafBatchRuleShared& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WafBatchRuleShared& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline WafBatchRuleShared& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<WafBatchRuleSharedActions> actions_ = nullptr;
    std::shared_ptr<int64_t> crossSiteId_ = nullptr;
    std::shared_ptr<string> expression_ = nullptr;
    std::shared_ptr<WafRuleMatch2> match_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> target_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
