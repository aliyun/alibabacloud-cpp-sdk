// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTCENTERRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTCENTERRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateEventCenterRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventCenterRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventChannel, eventChannel_);
      DARABONBA_PTR_TO_JSON(EventConfig, eventConfig_);
      DARABONBA_PTR_TO_JSON(EventScope, eventScope_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_TO_JSON(RepoNames, repoNames_);
      DARABONBA_PTR_TO_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventCenterRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventChannel, eventChannel_);
      DARABONBA_PTR_FROM_JSON(EventConfig, eventConfig_);
      DARABONBA_PTR_FROM_JSON(EventScope, eventScope_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      DARABONBA_PTR_FROM_JSON(RepoNames, repoNames_);
      DARABONBA_PTR_FROM_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    UpdateEventCenterRuleRequest() = default ;
    UpdateEventCenterRuleRequest(const UpdateEventCenterRuleRequest &) = default ;
    UpdateEventCenterRuleRequest(UpdateEventCenterRuleRequest &&) = default ;
    UpdateEventCenterRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventCenterRuleRequest() = default ;
    UpdateEventCenterRuleRequest& operator=(const UpdateEventCenterRuleRequest &) = default ;
    UpdateEventCenterRuleRequest& operator=(UpdateEventCenterRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventChannel_ == nullptr
        && return this->eventConfig_ == nullptr && return this->eventScope_ == nullptr && return this->eventType_ == nullptr && return this->instanceId_ == nullptr && return this->namespaces_ == nullptr
        && return this->repoNames_ == nullptr && return this->repoTagFilterPattern_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr; };
    // eventChannel Field Functions 
    bool hasEventChannel() const { return this->eventChannel_ != nullptr;};
    void deleteEventChannel() { this->eventChannel_ = nullptr;};
    inline string eventChannel() const { DARABONBA_PTR_GET_DEFAULT(eventChannel_, "") };
    inline UpdateEventCenterRuleRequest& setEventChannel(string eventChannel) { DARABONBA_PTR_SET_VALUE(eventChannel_, eventChannel) };


    // eventConfig Field Functions 
    bool hasEventConfig() const { return this->eventConfig_ != nullptr;};
    void deleteEventConfig() { this->eventConfig_ = nullptr;};
    inline string eventConfig() const { DARABONBA_PTR_GET_DEFAULT(eventConfig_, "") };
    inline UpdateEventCenterRuleRequest& setEventConfig(string eventConfig) { DARABONBA_PTR_SET_VALUE(eventConfig_, eventConfig) };


    // eventScope Field Functions 
    bool hasEventScope() const { return this->eventScope_ != nullptr;};
    void deleteEventScope() { this->eventScope_ = nullptr;};
    inline string eventScope() const { DARABONBA_PTR_GET_DEFAULT(eventScope_, "") };
    inline UpdateEventCenterRuleRequest& setEventScope(string eventScope) { DARABONBA_PTR_SET_VALUE(eventScope_, eventScope) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline UpdateEventCenterRuleRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateEventCenterRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaces Field Functions 
    bool hasNamespaces() const { return this->namespaces_ != nullptr;};
    void deleteNamespaces() { this->namespaces_ = nullptr;};
    inline const vector<string> & namespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
    inline vector<string> namespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
    inline UpdateEventCenterRuleRequest& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
    inline UpdateEventCenterRuleRequest& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    // repoNames Field Functions 
    bool hasRepoNames() const { return this->repoNames_ != nullptr;};
    void deleteRepoNames() { this->repoNames_ = nullptr;};
    inline const vector<string> & repoNames() const { DARABONBA_PTR_GET_CONST(repoNames_, vector<string>) };
    inline vector<string> repoNames() { DARABONBA_PTR_GET(repoNames_, vector<string>) };
    inline UpdateEventCenterRuleRequest& setRepoNames(const vector<string> & repoNames) { DARABONBA_PTR_SET_VALUE(repoNames_, repoNames) };
    inline UpdateEventCenterRuleRequest& setRepoNames(vector<string> && repoNames) { DARABONBA_PTR_SET_RVALUE(repoNames_, repoNames) };


    // repoTagFilterPattern Field Functions 
    bool hasRepoTagFilterPattern() const { return this->repoTagFilterPattern_ != nullptr;};
    void deleteRepoTagFilterPattern() { this->repoTagFilterPattern_ = nullptr;};
    inline string repoTagFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(repoTagFilterPattern_, "") };
    inline UpdateEventCenterRuleRequest& setRepoTagFilterPattern(string repoTagFilterPattern) { DARABONBA_PTR_SET_VALUE(repoTagFilterPattern_, repoTagFilterPattern) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdateEventCenterRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateEventCenterRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The event notification channel.
    std::shared_ptr<string> eventChannel_ = nullptr;
    // The event configuration.
    std::shared_ptr<string> eventConfig_ = nullptr;
    // The event scope. Valid values:
    // 
    // *   `INSTANCE`
    // *   `NAMESPACE`
    // *   `REPO`
    // 
    // Default value: `INSTANCE`
    std::shared_ptr<string> eventScope_ = nullptr;
    // The type of the event. Valid values:
    // 
    // *   `cr:Artifact:DeliveryChainCompleted`: The delivery chain is processed.
    // *   `cr:Artifact:SynchronizationCompleted`: The image is replicated.
    // *   `cr:Artifact:BuildCompleted`: The image is built.
    // *   `cr:Artifact:ScanCompleted`: The image is scanned.
    // *   `cr:Artifact:SigningCompleted`: The image is signed.
    std::shared_ptr<string> eventType_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The namespaces to which the event notification rule applies.
    std::shared_ptr<vector<string>> namespaces_ = nullptr;
    // The names of the repositories to which the event notification rule applies.
    std::shared_ptr<vector<string>> repoNames_ = nullptr;
    // The regular expression for image tags.
    std::shared_ptr<string> repoTagFilterPattern_ = nullptr;
    // The ID of the event notification rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the event notification rule.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
