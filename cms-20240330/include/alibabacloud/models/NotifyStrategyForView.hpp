// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotifyStrategyForViewCustomTemplateEntries.hpp>
#include <alibabacloud/models/FilterSetting.hpp>
#include <alibabacloud/models/NotifyStrategyForViewGroupingSetting.hpp>
#include <alibabacloud/models/NotifyStrategyForViewPushingSetting.hpp>
#include <alibabacloud/models/NotifyStrategyForViewRepeatNotifySetting.hpp>
#include <alibabacloud/models/NotifyStrategyForViewRoutes.hpp>
#include <alibabacloud/models/WorkspaceFilterSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyStrategyForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForView& obj) { 
      DARABONBA_PTR_TO_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_TO_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_TO_JSON(incidentEscalationPolicies, incidentEscalationPolicies_);
      DARABONBA_PTR_TO_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_TO_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_TO_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_TO_JSON(receiverNames, receiverNames_);
      DARABONBA_PTR_TO_JSON(repeatNotifySetting, repeatNotifySetting_);
      DARABONBA_PTR_TO_JSON(routes, routes_);
      DARABONBA_PTR_TO_JSON(syncFromType, syncFromType_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
      DARABONBA_PTR_TO_JSON(workspaceFilterSetting, workspaceFilterSetting_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForView& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_FROM_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_FROM_JSON(incidentEscalationPolicies, incidentEscalationPolicies_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_FROM_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_FROM_JSON(receiverNames, receiverNames_);
      DARABONBA_PTR_FROM_JSON(repeatNotifySetting, repeatNotifySetting_);
      DARABONBA_PTR_FROM_JSON(routes, routes_);
      DARABONBA_PTR_FROM_JSON(syncFromType, syncFromType_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
      DARABONBA_PTR_FROM_JSON(workspaceFilterSetting, workspaceFilterSetting_);
    };
    NotifyStrategyForView() = default ;
    NotifyStrategyForView(const NotifyStrategyForView &) = default ;
    NotifyStrategyForView(NotifyStrategyForView &&) = default ;
    NotifyStrategyForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForView() = default ;
    NotifyStrategyForView& operator=(const NotifyStrategyForView &) = default ;
    NotifyStrategyForView& operator=(NotifyStrategyForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRecoverSeconds_ == nullptr
        && return this->createTime_ == nullptr && return this->customTemplateEntries_ == nullptr && return this->description_ == nullptr && return this->enable_ == nullptr && return this->filterSetting_ == nullptr
        && return this->groupingSetting_ == nullptr && return this->ignoreRestoredNotification_ == nullptr && return this->incidentEscalationPolicies_ == nullptr && return this->notifyStrategyId_ == nullptr && return this->notifyStrategyName_ == nullptr
        && return this->pushingSetting_ == nullptr && return this->receiverNames_ == nullptr && return this->repeatNotifySetting_ == nullptr && return this->routes_ == nullptr && return this->syncFromType_ == nullptr
        && return this->updateTime_ == nullptr && return this->userId_ == nullptr && return this->workspace_ == nullptr && return this->workspaceFilterSetting_ == nullptr; };
    // autoRecoverSeconds Field Functions 
    bool hasAutoRecoverSeconds() const { return this->autoRecoverSeconds_ != nullptr;};
    void deleteAutoRecoverSeconds() { this->autoRecoverSeconds_ = nullptr;};
    inline int32_t autoRecoverSeconds() const { DARABONBA_PTR_GET_DEFAULT(autoRecoverSeconds_, 0) };
    inline NotifyStrategyForView& setAutoRecoverSeconds(int32_t autoRecoverSeconds) { DARABONBA_PTR_SET_VALUE(autoRecoverSeconds_, autoRecoverSeconds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline NotifyStrategyForView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customTemplateEntries Field Functions 
    bool hasCustomTemplateEntries() const { return this->customTemplateEntries_ != nullptr;};
    void deleteCustomTemplateEntries() { this->customTemplateEntries_ = nullptr;};
    inline const vector<NotifyStrategyForViewCustomTemplateEntries> & customTemplateEntries() const { DARABONBA_PTR_GET_CONST(customTemplateEntries_, vector<NotifyStrategyForViewCustomTemplateEntries>) };
    inline vector<NotifyStrategyForViewCustomTemplateEntries> customTemplateEntries() { DARABONBA_PTR_GET(customTemplateEntries_, vector<NotifyStrategyForViewCustomTemplateEntries>) };
    inline NotifyStrategyForView& setCustomTemplateEntries(const vector<NotifyStrategyForViewCustomTemplateEntries> & customTemplateEntries) { DARABONBA_PTR_SET_VALUE(customTemplateEntries_, customTemplateEntries) };
    inline NotifyStrategyForView& setCustomTemplateEntries(vector<NotifyStrategyForViewCustomTemplateEntries> && customTemplateEntries) { DARABONBA_PTR_SET_RVALUE(customTemplateEntries_, customTemplateEntries) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotifyStrategyForView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline NotifyStrategyForView& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline NotifyStrategyForView& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline NotifyStrategyForView& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // groupingSetting Field Functions 
    bool hasGroupingSetting() const { return this->groupingSetting_ != nullptr;};
    void deleteGroupingSetting() { this->groupingSetting_ = nullptr;};
    inline const NotifyStrategyForViewGroupingSetting & groupingSetting() const { DARABONBA_PTR_GET_CONST(groupingSetting_, NotifyStrategyForViewGroupingSetting) };
    inline NotifyStrategyForViewGroupingSetting groupingSetting() { DARABONBA_PTR_GET(groupingSetting_, NotifyStrategyForViewGroupingSetting) };
    inline NotifyStrategyForView& setGroupingSetting(const NotifyStrategyForViewGroupingSetting & groupingSetting) { DARABONBA_PTR_SET_VALUE(groupingSetting_, groupingSetting) };
    inline NotifyStrategyForView& setGroupingSetting(NotifyStrategyForViewGroupingSetting && groupingSetting) { DARABONBA_PTR_SET_RVALUE(groupingSetting_, groupingSetting) };


    // ignoreRestoredNotification Field Functions 
    bool hasIgnoreRestoredNotification() const { return this->ignoreRestoredNotification_ != nullptr;};
    void deleteIgnoreRestoredNotification() { this->ignoreRestoredNotification_ = nullptr;};
    inline bool ignoreRestoredNotification() const { DARABONBA_PTR_GET_DEFAULT(ignoreRestoredNotification_, false) };
    inline NotifyStrategyForView& setIgnoreRestoredNotification(bool ignoreRestoredNotification) { DARABONBA_PTR_SET_VALUE(ignoreRestoredNotification_, ignoreRestoredNotification) };


    // incidentEscalationPolicies Field Functions 
    bool hasIncidentEscalationPolicies() const { return this->incidentEscalationPolicies_ != nullptr;};
    void deleteIncidentEscalationPolicies() { this->incidentEscalationPolicies_ = nullptr;};
    inline const vector<Darabonba::Json> & incidentEscalationPolicies() const { DARABONBA_PTR_GET_CONST(incidentEscalationPolicies_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> incidentEscalationPolicies() { DARABONBA_PTR_GET(incidentEscalationPolicies_, vector<Darabonba::Json>) };
    inline NotifyStrategyForView& setIncidentEscalationPolicies(const vector<Darabonba::Json> & incidentEscalationPolicies) { DARABONBA_PTR_SET_VALUE(incidentEscalationPolicies_, incidentEscalationPolicies) };
    inline NotifyStrategyForView& setIncidentEscalationPolicies(vector<Darabonba::Json> && incidentEscalationPolicies) { DARABONBA_PTR_SET_RVALUE(incidentEscalationPolicies_, incidentEscalationPolicies) };


    // notifyStrategyId Field Functions 
    bool hasNotifyStrategyId() const { return this->notifyStrategyId_ != nullptr;};
    void deleteNotifyStrategyId() { this->notifyStrategyId_ = nullptr;};
    inline string notifyStrategyId() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyId_, "") };
    inline NotifyStrategyForView& setNotifyStrategyId(string notifyStrategyId) { DARABONBA_PTR_SET_VALUE(notifyStrategyId_, notifyStrategyId) };


    // notifyStrategyName Field Functions 
    bool hasNotifyStrategyName() const { return this->notifyStrategyName_ != nullptr;};
    void deleteNotifyStrategyName() { this->notifyStrategyName_ = nullptr;};
    inline string notifyStrategyName() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyName_, "") };
    inline NotifyStrategyForView& setNotifyStrategyName(string notifyStrategyName) { DARABONBA_PTR_SET_VALUE(notifyStrategyName_, notifyStrategyName) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const NotifyStrategyForViewPushingSetting & pushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, NotifyStrategyForViewPushingSetting) };
    inline NotifyStrategyForViewPushingSetting pushingSetting() { DARABONBA_PTR_GET(pushingSetting_, NotifyStrategyForViewPushingSetting) };
    inline NotifyStrategyForView& setPushingSetting(const NotifyStrategyForViewPushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline NotifyStrategyForView& setPushingSetting(NotifyStrategyForViewPushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // receiverNames Field Functions 
    bool hasReceiverNames() const { return this->receiverNames_ != nullptr;};
    void deleteReceiverNames() { this->receiverNames_ = nullptr;};
    inline const vector<string> & receiverNames() const { DARABONBA_PTR_GET_CONST(receiverNames_, vector<string>) };
    inline vector<string> receiverNames() { DARABONBA_PTR_GET(receiverNames_, vector<string>) };
    inline NotifyStrategyForView& setReceiverNames(const vector<string> & receiverNames) { DARABONBA_PTR_SET_VALUE(receiverNames_, receiverNames) };
    inline NotifyStrategyForView& setReceiverNames(vector<string> && receiverNames) { DARABONBA_PTR_SET_RVALUE(receiverNames_, receiverNames) };


    // repeatNotifySetting Field Functions 
    bool hasRepeatNotifySetting() const { return this->repeatNotifySetting_ != nullptr;};
    void deleteRepeatNotifySetting() { this->repeatNotifySetting_ = nullptr;};
    inline const NotifyStrategyForViewRepeatNotifySetting & repeatNotifySetting() const { DARABONBA_PTR_GET_CONST(repeatNotifySetting_, NotifyStrategyForViewRepeatNotifySetting) };
    inline NotifyStrategyForViewRepeatNotifySetting repeatNotifySetting() { DARABONBA_PTR_GET(repeatNotifySetting_, NotifyStrategyForViewRepeatNotifySetting) };
    inline NotifyStrategyForView& setRepeatNotifySetting(const NotifyStrategyForViewRepeatNotifySetting & repeatNotifySetting) { DARABONBA_PTR_SET_VALUE(repeatNotifySetting_, repeatNotifySetting) };
    inline NotifyStrategyForView& setRepeatNotifySetting(NotifyStrategyForViewRepeatNotifySetting && repeatNotifySetting) { DARABONBA_PTR_SET_RVALUE(repeatNotifySetting_, repeatNotifySetting) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<NotifyStrategyForViewRoutes> & routes() const { DARABONBA_PTR_GET_CONST(routes_, vector<NotifyStrategyForViewRoutes>) };
    inline vector<NotifyStrategyForViewRoutes> routes() { DARABONBA_PTR_GET(routes_, vector<NotifyStrategyForViewRoutes>) };
    inline NotifyStrategyForView& setRoutes(const vector<NotifyStrategyForViewRoutes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline NotifyStrategyForView& setRoutes(vector<NotifyStrategyForViewRoutes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


    // syncFromType Field Functions 
    bool hasSyncFromType() const { return this->syncFromType_ != nullptr;};
    void deleteSyncFromType() { this->syncFromType_ = nullptr;};
    inline string syncFromType() const { DARABONBA_PTR_GET_DEFAULT(syncFromType_, "") };
    inline NotifyStrategyForView& setSyncFromType(string syncFromType) { DARABONBA_PTR_SET_VALUE(syncFromType_, syncFromType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline NotifyStrategyForView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline NotifyStrategyForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline NotifyStrategyForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


    // workspaceFilterSetting Field Functions 
    bool hasWorkspaceFilterSetting() const { return this->workspaceFilterSetting_ != nullptr;};
    void deleteWorkspaceFilterSetting() { this->workspaceFilterSetting_ = nullptr;};
    inline const WorkspaceFilterSetting & workspaceFilterSetting() const { DARABONBA_PTR_GET_CONST(workspaceFilterSetting_, WorkspaceFilterSetting) };
    inline WorkspaceFilterSetting workspaceFilterSetting() { DARABONBA_PTR_GET(workspaceFilterSetting_, WorkspaceFilterSetting) };
    inline NotifyStrategyForView& setWorkspaceFilterSetting(const WorkspaceFilterSetting & workspaceFilterSetting) { DARABONBA_PTR_SET_VALUE(workspaceFilterSetting_, workspaceFilterSetting) };
    inline NotifyStrategyForView& setWorkspaceFilterSetting(WorkspaceFilterSetting && workspaceFilterSetting) { DARABONBA_PTR_SET_RVALUE(workspaceFilterSetting_, workspaceFilterSetting) };


  protected:
    std::shared_ptr<int32_t> autoRecoverSeconds_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<NotifyStrategyForViewCustomTemplateEntries>> customTemplateEntries_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<FilterSetting> filterSetting_ = nullptr;
    // This parameter is required.
    std::shared_ptr<NotifyStrategyForViewGroupingSetting> groupingSetting_ = nullptr;
    std::shared_ptr<bool> ignoreRestoredNotification_ = nullptr;
    std::shared_ptr<vector<Darabonba::Json>> incidentEscalationPolicies_ = nullptr;
    std::shared_ptr<string> notifyStrategyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> notifyStrategyName_ = nullptr;
    std::shared_ptr<NotifyStrategyForViewPushingSetting> pushingSetting_ = nullptr;
    std::shared_ptr<vector<string>> receiverNames_ = nullptr;
    std::shared_ptr<NotifyStrategyForViewRepeatNotifySetting> repeatNotifySetting_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<NotifyStrategyForViewRoutes>> routes_ = nullptr;
    std::shared_ptr<string> syncFromType_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
    std::shared_ptr<WorkspaceFilterSetting> workspaceFilterSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
