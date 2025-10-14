// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WAFRULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_WAFRULECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WafRuleConfigActions.hpp>
#include <alibabacloud/models/WafRuleConfigAppPackage.hpp>
#include <alibabacloud/models/WafRuleConfigAppSdk.hpp>
#include <vector>
#include <alibabacloud/models/WafRuleConfigManagedRulesets.hpp>
#include <alibabacloud/models/WafRuleConfigRateLimit.hpp>
#include <alibabacloud/models/WafRuleConfigSecurityLevel.hpp>
#include <alibabacloud/models/WafTimer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class WafRuleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WafRuleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(Actions, actions_);
      DARABONBA_PTR_TO_JSON(AppPackage, appPackage_);
      DARABONBA_PTR_TO_JSON(AppSdk, appSdk_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ManagedGroupId, managedGroupId_);
      DARABONBA_PTR_TO_JSON(ManagedList, managedList_);
      DARABONBA_PTR_TO_JSON(ManagedRulesets, managedRulesets_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notes, notes_);
      DARABONBA_PTR_TO_JSON(RateLimit, rateLimit_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_TO_JSON(Sigchl, sigchl_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Timer, timer_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, WafRuleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(Actions, actions_);
      DARABONBA_PTR_FROM_JSON(AppPackage, appPackage_);
      DARABONBA_PTR_FROM_JSON(AppSdk, appSdk_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ManagedGroupId, managedGroupId_);
      DARABONBA_PTR_FROM_JSON(ManagedList, managedList_);
      DARABONBA_PTR_FROM_JSON(ManagedRulesets, managedRulesets_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notes, notes_);
      DARABONBA_PTR_FROM_JSON(RateLimit, rateLimit_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
      DARABONBA_PTR_FROM_JSON(Sigchl, sigchl_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Timer, timer_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    WafRuleConfig() = default ;
    WafRuleConfig(const WafRuleConfig &) = default ;
    WafRuleConfig(WafRuleConfig &&) = default ;
    WafRuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WafRuleConfig() = default ;
    WafRuleConfig& operator=(const WafRuleConfig &) = default ;
    WafRuleConfig& operator=(WafRuleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->actions_ == nullptr && return this->appPackage_ == nullptr && return this->appSdk_ == nullptr && return this->expression_ == nullptr && return this->id_ == nullptr
        && return this->managedGroupId_ == nullptr && return this->managedList_ == nullptr && return this->managedRulesets_ == nullptr && return this->name_ == nullptr && return this->notes_ == nullptr
        && return this->rateLimit_ == nullptr && return this->securityLevel_ == nullptr && return this->sigchl_ == nullptr && return this->status_ == nullptr && return this->timer_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline WafRuleConfig& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const WafRuleConfigActions & actions() const { DARABONBA_PTR_GET_CONST(actions_, WafRuleConfigActions) };
    inline WafRuleConfigActions actions() { DARABONBA_PTR_GET(actions_, WafRuleConfigActions) };
    inline WafRuleConfig& setActions(const WafRuleConfigActions & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline WafRuleConfig& setActions(WafRuleConfigActions && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // appPackage Field Functions 
    bool hasAppPackage() const { return this->appPackage_ != nullptr;};
    void deleteAppPackage() { this->appPackage_ = nullptr;};
    inline const WafRuleConfigAppPackage & appPackage() const { DARABONBA_PTR_GET_CONST(appPackage_, WafRuleConfigAppPackage) };
    inline WafRuleConfigAppPackage appPackage() { DARABONBA_PTR_GET(appPackage_, WafRuleConfigAppPackage) };
    inline WafRuleConfig& setAppPackage(const WafRuleConfigAppPackage & appPackage) { DARABONBA_PTR_SET_VALUE(appPackage_, appPackage) };
    inline WafRuleConfig& setAppPackage(WafRuleConfigAppPackage && appPackage) { DARABONBA_PTR_SET_RVALUE(appPackage_, appPackage) };


    // appSdk Field Functions 
    bool hasAppSdk() const { return this->appSdk_ != nullptr;};
    void deleteAppSdk() { this->appSdk_ = nullptr;};
    inline const WafRuleConfigAppSdk & appSdk() const { DARABONBA_PTR_GET_CONST(appSdk_, WafRuleConfigAppSdk) };
    inline WafRuleConfigAppSdk appSdk() { DARABONBA_PTR_GET(appSdk_, WafRuleConfigAppSdk) };
    inline WafRuleConfig& setAppSdk(const WafRuleConfigAppSdk & appSdk) { DARABONBA_PTR_SET_VALUE(appSdk_, appSdk) };
    inline WafRuleConfig& setAppSdk(WafRuleConfigAppSdk && appSdk) { DARABONBA_PTR_SET_RVALUE(appSdk_, appSdk) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline WafRuleConfig& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline WafRuleConfig& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // managedGroupId Field Functions 
    bool hasManagedGroupId() const { return this->managedGroupId_ != nullptr;};
    void deleteManagedGroupId() { this->managedGroupId_ = nullptr;};
    inline int64_t managedGroupId() const { DARABONBA_PTR_GET_DEFAULT(managedGroupId_, 0L) };
    inline WafRuleConfig& setManagedGroupId(int64_t managedGroupId) { DARABONBA_PTR_SET_VALUE(managedGroupId_, managedGroupId) };


    // managedList Field Functions 
    bool hasManagedList() const { return this->managedList_ != nullptr;};
    void deleteManagedList() { this->managedList_ = nullptr;};
    inline string managedList() const { DARABONBA_PTR_GET_DEFAULT(managedList_, "") };
    inline WafRuleConfig& setManagedList(string managedList) { DARABONBA_PTR_SET_VALUE(managedList_, managedList) };


    // managedRulesets Field Functions 
    bool hasManagedRulesets() const { return this->managedRulesets_ != nullptr;};
    void deleteManagedRulesets() { this->managedRulesets_ = nullptr;};
    inline const vector<WafRuleConfigManagedRulesets> & managedRulesets() const { DARABONBA_PTR_GET_CONST(managedRulesets_, vector<WafRuleConfigManagedRulesets>) };
    inline vector<WafRuleConfigManagedRulesets> managedRulesets() { DARABONBA_PTR_GET(managedRulesets_, vector<WafRuleConfigManagedRulesets>) };
    inline WafRuleConfig& setManagedRulesets(const vector<WafRuleConfigManagedRulesets> & managedRulesets) { DARABONBA_PTR_SET_VALUE(managedRulesets_, managedRulesets) };
    inline WafRuleConfig& setManagedRulesets(vector<WafRuleConfigManagedRulesets> && managedRulesets) { DARABONBA_PTR_SET_RVALUE(managedRulesets_, managedRulesets) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline WafRuleConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notes Field Functions 
    bool hasNotes() const { return this->notes_ != nullptr;};
    void deleteNotes() { this->notes_ = nullptr;};
    inline string notes() const { DARABONBA_PTR_GET_DEFAULT(notes_, "") };
    inline WafRuleConfig& setNotes(string notes) { DARABONBA_PTR_SET_VALUE(notes_, notes) };


    // rateLimit Field Functions 
    bool hasRateLimit() const { return this->rateLimit_ != nullptr;};
    void deleteRateLimit() { this->rateLimit_ = nullptr;};
    inline const WafRuleConfigRateLimit & rateLimit() const { DARABONBA_PTR_GET_CONST(rateLimit_, WafRuleConfigRateLimit) };
    inline WafRuleConfigRateLimit rateLimit() { DARABONBA_PTR_GET(rateLimit_, WafRuleConfigRateLimit) };
    inline WafRuleConfig& setRateLimit(const WafRuleConfigRateLimit & rateLimit) { DARABONBA_PTR_SET_VALUE(rateLimit_, rateLimit) };
    inline WafRuleConfig& setRateLimit(WafRuleConfigRateLimit && rateLimit) { DARABONBA_PTR_SET_RVALUE(rateLimit_, rateLimit) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline const WafRuleConfigSecurityLevel & securityLevel() const { DARABONBA_PTR_GET_CONST(securityLevel_, WafRuleConfigSecurityLevel) };
    inline WafRuleConfigSecurityLevel securityLevel() { DARABONBA_PTR_GET(securityLevel_, WafRuleConfigSecurityLevel) };
    inline WafRuleConfig& setSecurityLevel(const WafRuleConfigSecurityLevel & securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };
    inline WafRuleConfig& setSecurityLevel(WafRuleConfigSecurityLevel && securityLevel) { DARABONBA_PTR_SET_RVALUE(securityLevel_, securityLevel) };


    // sigchl Field Functions 
    bool hasSigchl() const { return this->sigchl_ != nullptr;};
    void deleteSigchl() { this->sigchl_ = nullptr;};
    inline const vector<string> & sigchl() const { DARABONBA_PTR_GET_CONST(sigchl_, vector<string>) };
    inline vector<string> sigchl() { DARABONBA_PTR_GET(sigchl_, vector<string>) };
    inline WafRuleConfig& setSigchl(const vector<string> & sigchl) { DARABONBA_PTR_SET_VALUE(sigchl_, sigchl) };
    inline WafRuleConfig& setSigchl(vector<string> && sigchl) { DARABONBA_PTR_SET_RVALUE(sigchl_, sigchl) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline WafRuleConfig& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // timer Field Functions 
    bool hasTimer() const { return this->timer_ != nullptr;};
    void deleteTimer() { this->timer_ = nullptr;};
    inline const WafTimer & timer() const { DARABONBA_PTR_GET_CONST(timer_, WafTimer) };
    inline WafTimer timer() { DARABONBA_PTR_GET(timer_, WafTimer) };
    inline WafRuleConfig& setTimer(const WafTimer & timer) { DARABONBA_PTR_SET_VALUE(timer_, timer) };
    inline WafRuleConfig& setTimer(WafTimer && timer) { DARABONBA_PTR_SET_RVALUE(timer_, timer) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline WafRuleConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline WafRuleConfig& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<WafRuleConfigActions> actions_ = nullptr;
    std::shared_ptr<WafRuleConfigAppPackage> appPackage_ = nullptr;
    std::shared_ptr<WafRuleConfigAppSdk> appSdk_ = nullptr;
    std::shared_ptr<string> expression_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> managedGroupId_ = nullptr;
    std::shared_ptr<string> managedList_ = nullptr;
    std::shared_ptr<vector<WafRuleConfigManagedRulesets>> managedRulesets_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> notes_ = nullptr;
    std::shared_ptr<WafRuleConfigRateLimit> rateLimit_ = nullptr;
    std::shared_ptr<WafRuleConfigSecurityLevel> securityLevel_ = nullptr;
    std::shared_ptr<vector<string>> sigchl_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<WafTimer> timer_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
