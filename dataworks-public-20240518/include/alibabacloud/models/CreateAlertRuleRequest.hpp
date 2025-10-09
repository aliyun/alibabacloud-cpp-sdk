// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAlertRuleRequestNotification.hpp>
#include <alibabacloud/models/CreateAlertRuleRequestTriggerCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(TriggerCondition, triggerCondition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(TriggerCondition, triggerCondition_);
    };
    CreateAlertRuleRequest() = default ;
    CreateAlertRuleRequest(const CreateAlertRuleRequest &) = default ;
    CreateAlertRuleRequest(CreateAlertRuleRequest &&) = default ;
    CreateAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRuleRequest() = default ;
    CreateAlertRuleRequest& operator=(const CreateAlertRuleRequest &) = default ;
    CreateAlertRuleRequest& operator=(CreateAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->name_ != nullptr && this->notification_ != nullptr && this->owner_ != nullptr && this->triggerCondition_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateAlertRuleRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAlertRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const CreateAlertRuleRequestNotification & notification() const { DARABONBA_PTR_GET_CONST(notification_, CreateAlertRuleRequestNotification) };
    inline CreateAlertRuleRequestNotification notification() { DARABONBA_PTR_GET(notification_, CreateAlertRuleRequestNotification) };
    inline CreateAlertRuleRequest& setNotification(const CreateAlertRuleRequestNotification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline CreateAlertRuleRequest& setNotification(CreateAlertRuleRequestNotification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateAlertRuleRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // triggerCondition Field Functions 
    bool hasTriggerCondition() const { return this->triggerCondition_ != nullptr;};
    void deleteTriggerCondition() { this->triggerCondition_ = nullptr;};
    inline const CreateAlertRuleRequestTriggerCondition & triggerCondition() const { DARABONBA_PTR_GET_CONST(triggerCondition_, CreateAlertRuleRequestTriggerCondition) };
    inline CreateAlertRuleRequestTriggerCondition triggerCondition() { DARABONBA_PTR_GET(triggerCondition_, CreateAlertRuleRequestTriggerCondition) };
    inline CreateAlertRuleRequest& setTriggerCondition(const CreateAlertRuleRequestTriggerCondition & triggerCondition) { DARABONBA_PTR_SET_VALUE(triggerCondition_, triggerCondition) };
    inline CreateAlertRuleRequest& setTriggerCondition(CreateAlertRuleRequestTriggerCondition && triggerCondition) { DARABONBA_PTR_SET_RVALUE(triggerCondition_, triggerCondition) };


  protected:
    // Indicates whether the rule is enabled.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The name of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The configuration for the alert notification.
    std::shared_ptr<CreateAlertRuleRequestNotification> notification_ = nullptr;
    // The ID of the Alibaba Cloud account used by the owner of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
    // The alert triggering condition.
    // 
    // This parameter is required.
    std::shared_ptr<CreateAlertRuleRequestTriggerCondition> triggerCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
