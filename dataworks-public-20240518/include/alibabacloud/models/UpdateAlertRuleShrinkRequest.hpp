// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateAlertRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(TriggerCondition, triggerConditionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(TriggerCondition, triggerConditionShrink_);
    };
    UpdateAlertRuleShrinkRequest() = default ;
    UpdateAlertRuleShrinkRequest(const UpdateAlertRuleShrinkRequest &) = default ;
    UpdateAlertRuleShrinkRequest(UpdateAlertRuleShrinkRequest &&) = default ;
    UpdateAlertRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertRuleShrinkRequest() = default ;
    UpdateAlertRuleShrinkRequest& operator=(const UpdateAlertRuleShrinkRequest &) = default ;
    UpdateAlertRuleShrinkRequest& operator=(UpdateAlertRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->notificationShrink_ == nullptr && return this->owner_ == nullptr && return this->triggerConditionShrink_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateAlertRuleShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateAlertRuleShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateAlertRuleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline UpdateAlertRuleShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline UpdateAlertRuleShrinkRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // triggerConditionShrink Field Functions 
    bool hasTriggerConditionShrink() const { return this->triggerConditionShrink_ != nullptr;};
    void deleteTriggerConditionShrink() { this->triggerConditionShrink_ = nullptr;};
    inline string triggerConditionShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerConditionShrink_, "") };
    inline UpdateAlertRuleShrinkRequest& setTriggerConditionShrink(string triggerConditionShrink) { DARABONBA_PTR_SET_VALUE(triggerConditionShrink_, triggerConditionShrink) };


  protected:
    // Specifies whether to enable the rule.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> name_ = nullptr;
    // The configuration for the alert notification.
    std::shared_ptr<string> notificationShrink_ = nullptr;
    // The ID of the Alibaba Cloud account used by the owner of the rule.
    std::shared_ptr<string> owner_ = nullptr;
    // The alert triggering condition.
    std::shared_ptr<string> triggerConditionShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
