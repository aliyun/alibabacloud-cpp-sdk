// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONANDNOTIFYSTRATEGYFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONANDNOTIFYSTRATEGYFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NotifyStrategyForSNSView.hpp>
#include <alibabacloud/models/IncidentResponsePlanForSNSView.hpp>
#include <alibabacloud/models/SubscriptionForSNSView.hpp>
#include <vector>
#include <alibabacloud/models/SubscriptionForView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SubscriptionAndNotifyStrategyForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionAndNotifyStrategyForView& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(migrationBatchId, migrationBatchId_);
      DARABONBA_PTR_TO_JSON(migrationMeta, migrationMeta_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(notifyStrategyUuid, notifyStrategyUuid_);
      DARABONBA_PTR_TO_JSON(responsePlan, responsePlan_);
      DARABONBA_PTR_TO_JSON(subscription, subscription_);
      DARABONBA_PTR_TO_JSON(subscriptionUuid, subscriptionUuid_);
      DARABONBA_PTR_TO_JSON(subscriptions, subscriptions_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionAndNotifyStrategyForView& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(migrationBatchId, migrationBatchId_);
      DARABONBA_PTR_FROM_JSON(migrationMeta, migrationMeta_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyUuid, notifyStrategyUuid_);
      DARABONBA_PTR_FROM_JSON(responsePlan, responsePlan_);
      DARABONBA_PTR_FROM_JSON(subscription, subscription_);
      DARABONBA_PTR_FROM_JSON(subscriptionUuid, subscriptionUuid_);
      DARABONBA_PTR_FROM_JSON(subscriptions, subscriptions_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    SubscriptionAndNotifyStrategyForView() = default ;
    SubscriptionAndNotifyStrategyForView(const SubscriptionAndNotifyStrategyForView &) = default ;
    SubscriptionAndNotifyStrategyForView(SubscriptionAndNotifyStrategyForView &&) = default ;
    SubscriptionAndNotifyStrategyForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionAndNotifyStrategyForView() = default ;
    SubscriptionAndNotifyStrategyForView& operator=(const SubscriptionAndNotifyStrategyForView &) = default ;
    SubscriptionAndNotifyStrategyForView& operator=(SubscriptionAndNotifyStrategyForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->enabled_ == nullptr && this->migrationBatchId_ == nullptr && this->migrationMeta_ == nullptr && this->name_ == nullptr
        && this->notifyStrategy_ == nullptr && this->notifyStrategyUuid_ == nullptr && this->responsePlan_ == nullptr && this->subscription_ == nullptr && this->subscriptionUuid_ == nullptr
        && this->subscriptions_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->uuid_ == nullptr && this->version_ == nullptr
        && this->workspace_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SubscriptionAndNotifyStrategyForView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubscriptionAndNotifyStrategyForView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline SubscriptionAndNotifyStrategyForView& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // migrationBatchId Field Functions 
    bool hasMigrationBatchId() const { return this->migrationBatchId_ != nullptr;};
    void deleteMigrationBatchId() { this->migrationBatchId_ = nullptr;};
    inline string getMigrationBatchId() const { DARABONBA_PTR_GET_DEFAULT(migrationBatchId_, "") };
    inline SubscriptionAndNotifyStrategyForView& setMigrationBatchId(string migrationBatchId) { DARABONBA_PTR_SET_VALUE(migrationBatchId_, migrationBatchId) };


    // migrationMeta Field Functions 
    bool hasMigrationMeta() const { return this->migrationMeta_ != nullptr;};
    void deleteMigrationMeta() { this->migrationMeta_ = nullptr;};
    inline string getMigrationMeta() const { DARABONBA_PTR_GET_DEFAULT(migrationMeta_, "") };
    inline SubscriptionAndNotifyStrategyForView& setMigrationMeta(string migrationMeta) { DARABONBA_PTR_SET_VALUE(migrationMeta_, migrationMeta) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubscriptionAndNotifyStrategyForView& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline const NotifyStrategyForSNSView & getNotifyStrategy() const { DARABONBA_PTR_GET_CONST(notifyStrategy_, NotifyStrategyForSNSView) };
    inline NotifyStrategyForSNSView getNotifyStrategy() { DARABONBA_PTR_GET(notifyStrategy_, NotifyStrategyForSNSView) };
    inline SubscriptionAndNotifyStrategyForView& setNotifyStrategy(const NotifyStrategyForSNSView & notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };
    inline SubscriptionAndNotifyStrategyForView& setNotifyStrategy(NotifyStrategyForSNSView && notifyStrategy) { DARABONBA_PTR_SET_RVALUE(notifyStrategy_, notifyStrategy) };


    // notifyStrategyUuid Field Functions 
    bool hasNotifyStrategyUuid() const { return this->notifyStrategyUuid_ != nullptr;};
    void deleteNotifyStrategyUuid() { this->notifyStrategyUuid_ = nullptr;};
    inline string getNotifyStrategyUuid() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyUuid_, "") };
    inline SubscriptionAndNotifyStrategyForView& setNotifyStrategyUuid(string notifyStrategyUuid) { DARABONBA_PTR_SET_VALUE(notifyStrategyUuid_, notifyStrategyUuid) };


    // responsePlan Field Functions 
    bool hasResponsePlan() const { return this->responsePlan_ != nullptr;};
    void deleteResponsePlan() { this->responsePlan_ = nullptr;};
    inline const IncidentResponsePlanForSNSView & getResponsePlan() const { DARABONBA_PTR_GET_CONST(responsePlan_, IncidentResponsePlanForSNSView) };
    inline IncidentResponsePlanForSNSView getResponsePlan() { DARABONBA_PTR_GET(responsePlan_, IncidentResponsePlanForSNSView) };
    inline SubscriptionAndNotifyStrategyForView& setResponsePlan(const IncidentResponsePlanForSNSView & responsePlan) { DARABONBA_PTR_SET_VALUE(responsePlan_, responsePlan) };
    inline SubscriptionAndNotifyStrategyForView& setResponsePlan(IncidentResponsePlanForSNSView && responsePlan) { DARABONBA_PTR_SET_RVALUE(responsePlan_, responsePlan) };


    // subscription Field Functions 
    bool hasSubscription() const { return this->subscription_ != nullptr;};
    void deleteSubscription() { this->subscription_ = nullptr;};
    inline const SubscriptionForSNSView & getSubscription() const { DARABONBA_PTR_GET_CONST(subscription_, SubscriptionForSNSView) };
    inline SubscriptionForSNSView getSubscription() { DARABONBA_PTR_GET(subscription_, SubscriptionForSNSView) };
    inline SubscriptionAndNotifyStrategyForView& setSubscription(const SubscriptionForSNSView & subscription) { DARABONBA_PTR_SET_VALUE(subscription_, subscription) };
    inline SubscriptionAndNotifyStrategyForView& setSubscription(SubscriptionForSNSView && subscription) { DARABONBA_PTR_SET_RVALUE(subscription_, subscription) };


    // subscriptionUuid Field Functions 
    bool hasSubscriptionUuid() const { return this->subscriptionUuid_ != nullptr;};
    void deleteSubscriptionUuid() { this->subscriptionUuid_ = nullptr;};
    inline string getSubscriptionUuid() const { DARABONBA_PTR_GET_DEFAULT(subscriptionUuid_, "") };
    inline SubscriptionAndNotifyStrategyForView& setSubscriptionUuid(string subscriptionUuid) { DARABONBA_PTR_SET_VALUE(subscriptionUuid_, subscriptionUuid) };


    // subscriptions Field Functions 
    bool hasSubscriptions() const { return this->subscriptions_ != nullptr;};
    void deleteSubscriptions() { this->subscriptions_ = nullptr;};
    inline const vector<SubscriptionForView> & getSubscriptions() const { DARABONBA_PTR_GET_CONST(subscriptions_, vector<SubscriptionForView>) };
    inline vector<SubscriptionForView> getSubscriptions() { DARABONBA_PTR_GET(subscriptions_, vector<SubscriptionForView>) };
    inline SubscriptionAndNotifyStrategyForView& setSubscriptions(const vector<SubscriptionForView> & subscriptions) { DARABONBA_PTR_SET_VALUE(subscriptions_, subscriptions) };
    inline SubscriptionAndNotifyStrategyForView& setSubscriptions(vector<SubscriptionForView> && subscriptions) { DARABONBA_PTR_SET_RVALUE(subscriptions_, subscriptions) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline SubscriptionAndNotifyStrategyForView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SubscriptionAndNotifyStrategyForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline SubscriptionAndNotifyStrategyForView& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline SubscriptionAndNotifyStrategyForView& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline SubscriptionAndNotifyStrategyForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    // The creation time. The value is a UNIX timestamp string in milliseconds.
    shared_ptr<string> createTime_ {};
    // The description of the alert policy.
    shared_ptr<string> description_ {};
    // Indicates whether the alert policy is enabled. This field is controlled by the EnableAlertPolicy and DisableAlertPolicy operations. The Create and Update operations do not directly set this field.
    shared_ptr<bool> enabled_ {};
    // The migration batch ID. This is an internal system field. The value is an empty string for user-created policies and is populated for policies migrated from the legacy version.
    shared_ptr<string> migrationBatchId_ {};
    // The migration metadata JSON string. This is an internal system field. You do not need to configure this field.
    shared_ptr<string> migrationMeta_ {};
    // The name of the alert policy.
    shared_ptr<string> name_ {};
    // The snapshot of the notification strategy details, including notification routes (routes), notification channels (channels), grouping settings (groupingSetting), and custom templates (customTemplateEntries).
    shared_ptr<NotifyStrategyForSNSView> notifyStrategy_ {};
    // The UUID of the associated notifyStrategy. This UUID is shared with the responsePlan UUID.
    shared_ptr<string> notifyStrategyUuid_ {};
    // The snapshot of the event response plan details, including escalation policy (escalationId), repeat notification (repeatNotifySetting), automatic recovery (autoRecoverSeconds), and action integration (pushingSetting).
    shared_ptr<IncidentResponsePlanForSNSView> responsePlan_ {};
    // The snapshot of the primary subscription details, including filter conditions (filterSetting) and cross-workspace subscription configuration (workspaceFilterSetting).
    shared_ptr<SubscriptionForSNSView> subscription_ {};
    // The UUID of the primary subscription. This UUID is generated when the alert policy is bound to a subscription in a 1:1 relationship.
    shared_ptr<string> subscriptionUuid_ {};
    // The list of all associated subscriptions, including the primary subscription. This list is generated by the backend through a reverse lookup. The array length is greater than 1 only when workspace-level subscriptions are added in addition to the primary subscription.
    shared_ptr<vector<SubscriptionForView>> subscriptions_ {};
    // The last update time. The value is a UNIX timestamp string in milliseconds.
    shared_ptr<string> updateTime_ {};
    // The userId of the owner.
    shared_ptr<string> userId_ {};
    // The UUID of the alert policy.
    shared_ptr<string> uuid_ {};
    // The optimistic lock version number. You must pass in the current value during an Update operation to prevent concurrent conflicts. The value is incremented by 1 after each successful Update operation.
    shared_ptr<int32_t> version_ {};
    // The workspace identifier.
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
