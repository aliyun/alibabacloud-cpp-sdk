// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTCENTERRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTCENTERRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class UpdateEventCenterRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventCenterRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventChannel, eventChannel_);
      DARABONBA_PTR_TO_JSON(EventConfig, eventConfig_);
      DARABONBA_PTR_TO_JSON(EventScope, eventScope_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Namespaces, namespacesShrink_);
      DARABONBA_PTR_TO_JSON(RepoNames, repoNamesShrink_);
      DARABONBA_PTR_TO_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventCenterRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventChannel, eventChannel_);
      DARABONBA_PTR_FROM_JSON(EventConfig, eventConfig_);
      DARABONBA_PTR_FROM_JSON(EventScope, eventScope_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Namespaces, namespacesShrink_);
      DARABONBA_PTR_FROM_JSON(RepoNames, repoNamesShrink_);
      DARABONBA_PTR_FROM_JSON(RepoTagFilterPattern, repoTagFilterPattern_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    UpdateEventCenterRuleShrinkRequest() = default ;
    UpdateEventCenterRuleShrinkRequest(const UpdateEventCenterRuleShrinkRequest &) = default ;
    UpdateEventCenterRuleShrinkRequest(UpdateEventCenterRuleShrinkRequest &&) = default ;
    UpdateEventCenterRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventCenterRuleShrinkRequest() = default ;
    UpdateEventCenterRuleShrinkRequest& operator=(const UpdateEventCenterRuleShrinkRequest &) = default ;
    UpdateEventCenterRuleShrinkRequest& operator=(UpdateEventCenterRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventChannel_ != nullptr
        && this->eventConfig_ != nullptr && this->eventScope_ != nullptr && this->eventType_ != nullptr && this->instanceId_ != nullptr && this->namespacesShrink_ != nullptr
        && this->repoNamesShrink_ != nullptr && this->repoTagFilterPattern_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr; };
    // eventChannel Field Functions 
    bool hasEventChannel() const { return this->eventChannel_ != nullptr;};
    void deleteEventChannel() { this->eventChannel_ = nullptr;};
    inline string eventChannel() const { DARABONBA_PTR_GET_DEFAULT(eventChannel_, "") };
    inline UpdateEventCenterRuleShrinkRequest& setEventChannel(string eventChannel) { DARABONBA_PTR_SET_VALUE(eventChannel_, eventChannel) };


    // eventConfig Field Functions 
    bool hasEventConfig() const { return this->eventConfig_ != nullptr;};
    void deleteEventConfig() { this->eventConfig_ = nullptr;};
    inline string eventConfig() const { DARABONBA_PTR_GET_DEFAULT(eventConfig_, "") };
    inline UpdateEventCenterRuleShrinkRequest& setEventConfig(string eventConfig) { DARABONBA_PTR_SET_VALUE(eventConfig_, eventConfig) };


    // eventScope Field Functions 
    bool hasEventScope() const { return this->eventScope_ != nullptr;};
    void deleteEventScope() { this->eventScope_ = nullptr;};
    inline string eventScope() const { DARABONBA_PTR_GET_DEFAULT(eventScope_, "") };
    inline UpdateEventCenterRuleShrinkRequest& setEventScope(string eventScope) { DARABONBA_PTR_SET_VALUE(eventScope_, eventScope) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline UpdateEventCenterRuleShrinkRequest& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateEventCenterRuleShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespacesShrink Field Functions 
    bool hasNamespacesShrink() const { return this->namespacesShrink_ != nullptr;};
    void deleteNamespacesShrink() { this->namespacesShrink_ = nullptr;};
    inline string namespacesShrink() const { DARABONBA_PTR_GET_DEFAULT(namespacesShrink_, "") };
    inline UpdateEventCenterRuleShrinkRequest& setNamespacesShrink(string namespacesShrink) { DARABONBA_PTR_SET_VALUE(namespacesShrink_, namespacesShrink) };


    // repoNamesShrink Field Functions 
    bool hasRepoNamesShrink() const { return this->repoNamesShrink_ != nullptr;};
    void deleteRepoNamesShrink() { this->repoNamesShrink_ = nullptr;};
    inline string repoNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(repoNamesShrink_, "") };
    inline UpdateEventCenterRuleShrinkRequest& setRepoNamesShrink(string repoNamesShrink) { DARABONBA_PTR_SET_VALUE(repoNamesShrink_, repoNamesShrink) };


    // repoTagFilterPattern Field Functions 
    bool hasRepoTagFilterPattern() const { return this->repoTagFilterPattern_ != nullptr;};
    void deleteRepoTagFilterPattern() { this->repoTagFilterPattern_ = nullptr;};
    inline string repoTagFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(repoTagFilterPattern_, "") };
    inline UpdateEventCenterRuleShrinkRequest& setRepoTagFilterPattern(string repoTagFilterPattern) { DARABONBA_PTR_SET_VALUE(repoTagFilterPattern_, repoTagFilterPattern) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdateEventCenterRuleShrinkRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateEventCenterRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


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
    std::shared_ptr<string> namespacesShrink_ = nullptr;
    // The names of the repositories to which the event notification rule applies.
    std::shared_ptr<string> repoNamesShrink_ = nullptr;
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
