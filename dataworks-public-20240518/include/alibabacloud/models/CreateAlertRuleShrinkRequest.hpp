// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAlertRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(TriggerCondition, triggerConditionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(TriggerCondition, triggerConditionShrink_);
    };
    CreateAlertRuleShrinkRequest() = default ;
    CreateAlertRuleShrinkRequest(const CreateAlertRuleShrinkRequest &) = default ;
    CreateAlertRuleShrinkRequest(CreateAlertRuleShrinkRequest &&) = default ;
    CreateAlertRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRuleShrinkRequest() = default ;
    CreateAlertRuleShrinkRequest& operator=(const CreateAlertRuleShrinkRequest &) = default ;
    CreateAlertRuleShrinkRequest& operator=(CreateAlertRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->name_ == nullptr && return this->notificationShrink_ == nullptr && return this->owner_ == nullptr && return this->triggerConditionShrink_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateAlertRuleShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAlertRuleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateAlertRuleShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline CreateAlertRuleShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // triggerConditionShrink Field Functions 
    bool hasTriggerConditionShrink() const { return this->triggerConditionShrink_ != nullptr;};
    void deleteTriggerConditionShrink() { this->triggerConditionShrink_ = nullptr;};
    inline string triggerConditionShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerConditionShrink_, "") };
    inline CreateAlertRuleShrinkRequest& setTriggerConditionShrink(string triggerConditionShrink) { DARABONBA_PTR_SET_VALUE(triggerConditionShrink_, triggerConditionShrink) };


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
    std::shared_ptr<string> notificationShrink_ = nullptr;
    // The ID of the Alibaba Cloud account used by the owner of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> owner_ = nullptr;
    // The alert triggering condition.
    // 
    // This parameter is required.
    std::shared_ptr<string> triggerConditionShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
