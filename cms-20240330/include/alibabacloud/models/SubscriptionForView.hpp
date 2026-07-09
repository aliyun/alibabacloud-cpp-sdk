// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotifyRouteForSubscription.hpp>
#include <alibabacloud/models/FilterSetting.hpp>
#include <alibabacloud/models/WorkspaceFilterSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SubscriptionForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionForView& obj) { 
      DARABONBA_PTR_TO_JSON(agentConfig, agentConfig_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_TO_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_TO_JSON(subscribeLegacyEvent, subscribeLegacyEvent_);
      DARABONBA_PTR_TO_JSON(subscriptionId, subscriptionId_);
      DARABONBA_PTR_TO_JSON(subscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(subscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(syncFromType, syncFromType_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
      DARABONBA_PTR_TO_JSON(workspaceFilterSetting, workspaceFilterSetting_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionForView& obj) { 
      DARABONBA_PTR_FROM_JSON(agentConfig, agentConfig_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_FROM_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_FROM_JSON(subscribeLegacyEvent, subscribeLegacyEvent_);
      DARABONBA_PTR_FROM_JSON(subscriptionId, subscriptionId_);
      DARABONBA_PTR_FROM_JSON(subscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(subscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(syncFromType, syncFromType_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      DARABONBA_PTR_FROM_JSON(workspaceFilterSetting, workspaceFilterSetting_);
    };
    SubscriptionForView() = default ;
    SubscriptionForView(const SubscriptionForView &) = default ;
    SubscriptionForView(SubscriptionForView &&) = default ;
    SubscriptionForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionForView() = default ;
    SubscriptionForView& operator=(const SubscriptionForView &) = default ;
    SubscriptionForView& operator=(SubscriptionForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PushingSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushingSetting& obj) { 
        DARABONBA_PTR_TO_JSON(alertActionIds, alertActionIds_);
        DARABONBA_PTR_TO_JSON(responsePlanId, responsePlanId_);
        DARABONBA_PTR_TO_JSON(restoreActionIds, restoreActionIds_);
        DARABONBA_PTR_TO_JSON(templateUuid, templateUuid_);
      };
      friend void from_json(const Darabonba::Json& j, PushingSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(alertActionIds, alertActionIds_);
        DARABONBA_PTR_FROM_JSON(responsePlanId, responsePlanId_);
        DARABONBA_PTR_FROM_JSON(restoreActionIds, restoreActionIds_);
        DARABONBA_PTR_FROM_JSON(templateUuid, templateUuid_);
      };
      PushingSetting() = default ;
      PushingSetting(const PushingSetting &) = default ;
      PushingSetting(PushingSetting &&) = default ;
      PushingSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushingSetting() = default ;
      PushingSetting& operator=(const PushingSetting &) = default ;
      PushingSetting& operator=(PushingSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertActionIds_ == nullptr
        && this->responsePlanId_ == nullptr && this->restoreActionIds_ == nullptr && this->templateUuid_ == nullptr; };
      // alertActionIds Field Functions 
      bool hasAlertActionIds() const { return this->alertActionIds_ != nullptr;};
      void deleteAlertActionIds() { this->alertActionIds_ = nullptr;};
      inline const vector<string> & getAlertActionIds() const { DARABONBA_PTR_GET_CONST(alertActionIds_, vector<string>) };
      inline vector<string> getAlertActionIds() { DARABONBA_PTR_GET(alertActionIds_, vector<string>) };
      inline PushingSetting& setAlertActionIds(const vector<string> & alertActionIds) { DARABONBA_PTR_SET_VALUE(alertActionIds_, alertActionIds) };
      inline PushingSetting& setAlertActionIds(vector<string> && alertActionIds) { DARABONBA_PTR_SET_RVALUE(alertActionIds_, alertActionIds) };


      // responsePlanId Field Functions 
      bool hasResponsePlanId() const { return this->responsePlanId_ != nullptr;};
      void deleteResponsePlanId() { this->responsePlanId_ = nullptr;};
      inline string getResponsePlanId() const { DARABONBA_PTR_GET_DEFAULT(responsePlanId_, "") };
      inline PushingSetting& setResponsePlanId(string responsePlanId) { DARABONBA_PTR_SET_VALUE(responsePlanId_, responsePlanId) };


      // restoreActionIds Field Functions 
      bool hasRestoreActionIds() const { return this->restoreActionIds_ != nullptr;};
      void deleteRestoreActionIds() { this->restoreActionIds_ = nullptr;};
      inline const vector<string> & getRestoreActionIds() const { DARABONBA_PTR_GET_CONST(restoreActionIds_, vector<string>) };
      inline vector<string> getRestoreActionIds() { DARABONBA_PTR_GET(restoreActionIds_, vector<string>) };
      inline PushingSetting& setRestoreActionIds(const vector<string> & restoreActionIds) { DARABONBA_PTR_SET_VALUE(restoreActionIds_, restoreActionIds) };
      inline PushingSetting& setRestoreActionIds(vector<string> && restoreActionIds) { DARABONBA_PTR_SET_RVALUE(restoreActionIds_, restoreActionIds) };


      // templateUuid Field Functions 
      bool hasTemplateUuid() const { return this->templateUuid_ != nullptr;};
      void deleteTemplateUuid() { this->templateUuid_ = nullptr;};
      inline string getTemplateUuid() const { DARABONBA_PTR_GET_DEFAULT(templateUuid_, "") };
      inline PushingSetting& setTemplateUuid(string templateUuid) { DARABONBA_PTR_SET_VALUE(templateUuid_, templateUuid) };


    protected:
      // The list of action integration IDs for alert pushing.
      shared_ptr<vector<string>> alertActionIds_ {};
      // The action plan ID.
      shared_ptr<string> responsePlanId_ {};
      // The list of action integration IDs for recovery pushing.
      shared_ptr<vector<string>> restoreActionIds_ {};
      // The UUID of the template.
      shared_ptr<string> templateUuid_ {};
    };

    class AgentConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentConfig& obj) { 
        DARABONBA_PTR_TO_JSON(agentUuid, agentUuid_);
        DARABONBA_PTR_TO_JSON(routes, routes_);
      };
      friend void from_json(const Darabonba::Json& j, AgentConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(agentUuid, agentUuid_);
        DARABONBA_PTR_FROM_JSON(routes, routes_);
      };
      AgentConfig() = default ;
      AgentConfig(const AgentConfig &) = default ;
      AgentConfig(AgentConfig &&) = default ;
      AgentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentConfig() = default ;
      AgentConfig& operator=(const AgentConfig &) = default ;
      AgentConfig& operator=(AgentConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentUuid_ == nullptr
        && this->routes_ == nullptr; };
      // agentUuid Field Functions 
      bool hasAgentUuid() const { return this->agentUuid_ != nullptr;};
      void deleteAgentUuid() { this->agentUuid_ = nullptr;};
      inline string getAgentUuid() const { DARABONBA_PTR_GET_DEFAULT(agentUuid_, "") };
      inline AgentConfig& setAgentUuid(string agentUuid) { DARABONBA_PTR_SET_VALUE(agentUuid_, agentUuid) };


      // routes Field Functions 
      bool hasRoutes() const { return this->routes_ != nullptr;};
      void deleteRoutes() { this->routes_ = nullptr;};
      inline const vector<NotifyRouteForSubscription> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<NotifyRouteForSubscription>) };
      inline vector<NotifyRouteForSubscription> getRoutes() { DARABONBA_PTR_GET(routes_, vector<NotifyRouteForSubscription>) };
      inline AgentConfig& setRoutes(const vector<NotifyRouteForSubscription> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
      inline AgentConfig& setRoutes(vector<NotifyRouteForSubscription> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


    protected:
      shared_ptr<string> agentUuid_ {};
      shared_ptr<vector<NotifyRouteForSubscription>> routes_ {};
    };

    virtual bool empty() const override { return this->agentConfig_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->enable_ == nullptr && this->filterSetting_ == nullptr && this->notifyStrategyId_ == nullptr
        && this->pushingSetting_ == nullptr && this->subscribeLegacyEvent_ == nullptr && this->subscriptionId_ == nullptr && this->subscriptionName_ == nullptr && this->subscriptionType_ == nullptr
        && this->syncFromType_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->workspace_ == nullptr && this->workspaceFilterSetting_ == nullptr; };
    // agentConfig Field Functions 
    bool hasAgentConfig() const { return this->agentConfig_ != nullptr;};
    void deleteAgentConfig() { this->agentConfig_ = nullptr;};
    inline const SubscriptionForView::AgentConfig & getAgentConfig() const { DARABONBA_PTR_GET_CONST(agentConfig_, SubscriptionForView::AgentConfig) };
    inline SubscriptionForView::AgentConfig getAgentConfig() { DARABONBA_PTR_GET(agentConfig_, SubscriptionForView::AgentConfig) };
    inline SubscriptionForView& setAgentConfig(const SubscriptionForView::AgentConfig & agentConfig) { DARABONBA_PTR_SET_VALUE(agentConfig_, agentConfig) };
    inline SubscriptionForView& setAgentConfig(SubscriptionForView::AgentConfig && agentConfig) { DARABONBA_PTR_SET_RVALUE(agentConfig_, agentConfig) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SubscriptionForView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubscriptionForView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline SubscriptionForView& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & getFilterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting getFilterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline SubscriptionForView& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline SubscriptionForView& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // notifyStrategyId Field Functions 
    bool hasNotifyStrategyId() const { return this->notifyStrategyId_ != nullptr;};
    void deleteNotifyStrategyId() { this->notifyStrategyId_ = nullptr;};
    inline string getNotifyStrategyId() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyId_, "") };
    inline SubscriptionForView& setNotifyStrategyId(string notifyStrategyId) { DARABONBA_PTR_SET_VALUE(notifyStrategyId_, notifyStrategyId) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const SubscriptionForView::PushingSetting & getPushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, SubscriptionForView::PushingSetting) };
    inline SubscriptionForView::PushingSetting getPushingSetting() { DARABONBA_PTR_GET(pushingSetting_, SubscriptionForView::PushingSetting) };
    inline SubscriptionForView& setPushingSetting(const SubscriptionForView::PushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline SubscriptionForView& setPushingSetting(SubscriptionForView::PushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // subscribeLegacyEvent Field Functions 
    bool hasSubscribeLegacyEvent() const { return this->subscribeLegacyEvent_ != nullptr;};
    void deleteSubscribeLegacyEvent() { this->subscribeLegacyEvent_ = nullptr;};
    inline bool getSubscribeLegacyEvent() const { DARABONBA_PTR_GET_DEFAULT(subscribeLegacyEvent_, false) };
    inline SubscriptionForView& setSubscribeLegacyEvent(bool subscribeLegacyEvent) { DARABONBA_PTR_SET_VALUE(subscribeLegacyEvent_, subscribeLegacyEvent) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string getSubscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline SubscriptionForView& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string getSubscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline SubscriptionForView& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline SubscriptionForView& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // syncFromType Field Functions 
    bool hasSyncFromType() const { return this->syncFromType_ != nullptr;};
    void deleteSyncFromType() { this->syncFromType_ = nullptr;};
    inline string getSyncFromType() const { DARABONBA_PTR_GET_DEFAULT(syncFromType_, "") };
    inline SubscriptionForView& setSyncFromType(string syncFromType) { DARABONBA_PTR_SET_VALUE(syncFromType_, syncFromType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline SubscriptionForView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SubscriptionForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline SubscriptionForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    // workspaceFilterSetting Field Functions 
    bool hasWorkspaceFilterSetting() const { return this->workspaceFilterSetting_ != nullptr;};
    void deleteWorkspaceFilterSetting() { this->workspaceFilterSetting_ = nullptr;};
    inline const WorkspaceFilterSetting & getWorkspaceFilterSetting() const { DARABONBA_PTR_GET_CONST(workspaceFilterSetting_, WorkspaceFilterSetting) };
    inline WorkspaceFilterSetting getWorkspaceFilterSetting() { DARABONBA_PTR_GET(workspaceFilterSetting_, WorkspaceFilterSetting) };
    inline SubscriptionForView& setWorkspaceFilterSetting(const WorkspaceFilterSetting & workspaceFilterSetting) { DARABONBA_PTR_SET_VALUE(workspaceFilterSetting_, workspaceFilterSetting) };
    inline SubscriptionForView& setWorkspaceFilterSetting(WorkspaceFilterSetting && workspaceFilterSetting) { DARABONBA_PTR_SET_RVALUE(workspaceFilterSetting_, workspaceFilterSetting) };


  protected:
    shared_ptr<SubscriptionForView::AgentConfig> agentConfig_ {};
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The description.
    shared_ptr<string> description_ {};
    // Indicates whether the subscription is enabled.
    shared_ptr<bool> enable_ {};
    // The filter settings.
    shared_ptr<FilterSetting> filterSetting_ {};
    // The UUID of the notification policy.
    shared_ptr<string> notifyStrategyId_ {};
    // The push settings.
    shared_ptr<SubscriptionForView::PushingSetting> pushingSetting_ {};
    // Specifies whether to subscribe to legacy product events (CMS 1.0, ARMS, or SLS events where workspace is null). Valid values:
    // - true: Subscribe.
    // - false or null: Do not subscribe.
    shared_ptr<bool> subscribeLegacyEvent_ {};
    // UUID
    shared_ptr<string> subscriptionId_ {};
    // The name.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionName_ {};
    shared_ptr<string> subscriptionType_ {};
    // The source type of the synchronization policy.
    shared_ptr<string> syncFromType_ {};
    // The update time.
    shared_ptr<string> updateTime_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
    // workspace
    shared_ptr<string> workspace_ {};
    shared_ptr<WorkspaceFilterSetting> workspaceFilterSetting_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
