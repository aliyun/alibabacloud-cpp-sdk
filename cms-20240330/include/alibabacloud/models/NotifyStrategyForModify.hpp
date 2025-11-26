// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFY_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotifyStrategyForModifyCustomTemplateEntries.hpp>
#include <alibabacloud/models/FilterSetting.hpp>
#include <alibabacloud/models/NotifyStrategyForModifyGroupingSetting.hpp>
#include <alibabacloud/models/NotifyStrategyForModifyPushingSetting.hpp>
#include <alibabacloud/models/NotifyStrategyForModifyRepeatNotifySetting.hpp>
#include <alibabacloud/models/NotifyStrategyForModifyRoutes.hpp>
#include <alibabacloud/models/WorkspaceFilterSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyStrategyForModify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyStrategyForModify& obj) { 
      DARABONBA_PTR_TO_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_TO_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableIncidentManagement, enableIncidentManagement_);
      DARABONBA_PTR_TO_JSON(escalationId, escalationId_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_TO_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_TO_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_TO_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_TO_JSON(repeatNotifySetting, repeatNotifySetting_);
      DARABONBA_PTR_TO_JSON(routes, routes_);
      DARABONBA_PTR_TO_JSON(workspaceFilterSetting, workspaceFilterSetting_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForModify& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRecoverSeconds, autoRecoverSeconds_);
      DARABONBA_PTR_FROM_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableIncidentManagement, enableIncidentManagement_);
      DARABONBA_PTR_FROM_JSON(escalationId, escalationId_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_FROM_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_FROM_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_FROM_JSON(repeatNotifySetting, repeatNotifySetting_);
      DARABONBA_PTR_FROM_JSON(routes, routes_);
      DARABONBA_PTR_FROM_JSON(workspaceFilterSetting, workspaceFilterSetting_);
    };
    NotifyStrategyForModify() = default ;
    NotifyStrategyForModify(const NotifyStrategyForModify &) = default ;
    NotifyStrategyForModify(NotifyStrategyForModify &&) = default ;
    NotifyStrategyForModify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyStrategyForModify() = default ;
    NotifyStrategyForModify& operator=(const NotifyStrategyForModify &) = default ;
    NotifyStrategyForModify& operator=(NotifyStrategyForModify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRecoverSeconds_ == nullptr
        && return this->customTemplateEntries_ == nullptr && return this->description_ == nullptr && return this->enableIncidentManagement_ == nullptr && return this->escalationId_ == nullptr && return this->filterSetting_ == nullptr
        && return this->groupingSetting_ == nullptr && return this->ignoreRestoredNotification_ == nullptr && return this->notifyStrategyName_ == nullptr && return this->pushingSetting_ == nullptr && return this->repeatNotifySetting_ == nullptr
        && return this->routes_ == nullptr && return this->workspaceFilterSetting_ == nullptr; };
    // autoRecoverSeconds Field Functions 
    bool hasAutoRecoverSeconds() const { return this->autoRecoverSeconds_ != nullptr;};
    void deleteAutoRecoverSeconds() { this->autoRecoverSeconds_ = nullptr;};
    inline int32_t autoRecoverSeconds() const { DARABONBA_PTR_GET_DEFAULT(autoRecoverSeconds_, 0) };
    inline NotifyStrategyForModify& setAutoRecoverSeconds(int32_t autoRecoverSeconds) { DARABONBA_PTR_SET_VALUE(autoRecoverSeconds_, autoRecoverSeconds) };


    // customTemplateEntries Field Functions 
    bool hasCustomTemplateEntries() const { return this->customTemplateEntries_ != nullptr;};
    void deleteCustomTemplateEntries() { this->customTemplateEntries_ = nullptr;};
    inline const vector<NotifyStrategyForModifyCustomTemplateEntries> & customTemplateEntries() const { DARABONBA_PTR_GET_CONST(customTemplateEntries_, vector<NotifyStrategyForModifyCustomTemplateEntries>) };
    inline vector<NotifyStrategyForModifyCustomTemplateEntries> customTemplateEntries() { DARABONBA_PTR_GET(customTemplateEntries_, vector<NotifyStrategyForModifyCustomTemplateEntries>) };
    inline NotifyStrategyForModify& setCustomTemplateEntries(const vector<NotifyStrategyForModifyCustomTemplateEntries> & customTemplateEntries) { DARABONBA_PTR_SET_VALUE(customTemplateEntries_, customTemplateEntries) };
    inline NotifyStrategyForModify& setCustomTemplateEntries(vector<NotifyStrategyForModifyCustomTemplateEntries> && customTemplateEntries) { DARABONBA_PTR_SET_RVALUE(customTemplateEntries_, customTemplateEntries) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotifyStrategyForModify& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableIncidentManagement Field Functions 
    bool hasEnableIncidentManagement() const { return this->enableIncidentManagement_ != nullptr;};
    void deleteEnableIncidentManagement() { this->enableIncidentManagement_ = nullptr;};
    inline bool enableIncidentManagement() const { DARABONBA_PTR_GET_DEFAULT(enableIncidentManagement_, false) };
    inline NotifyStrategyForModify& setEnableIncidentManagement(bool enableIncidentManagement) { DARABONBA_PTR_SET_VALUE(enableIncidentManagement_, enableIncidentManagement) };


    // escalationId Field Functions 
    bool hasEscalationId() const { return this->escalationId_ != nullptr;};
    void deleteEscalationId() { this->escalationId_ = nullptr;};
    inline const vector<string> & escalationId() const { DARABONBA_PTR_GET_CONST(escalationId_, vector<string>) };
    inline vector<string> escalationId() { DARABONBA_PTR_GET(escalationId_, vector<string>) };
    inline NotifyStrategyForModify& setEscalationId(const vector<string> & escalationId) { DARABONBA_PTR_SET_VALUE(escalationId_, escalationId) };
    inline NotifyStrategyForModify& setEscalationId(vector<string> && escalationId) { DARABONBA_PTR_SET_RVALUE(escalationId_, escalationId) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline NotifyStrategyForModify& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline NotifyStrategyForModify& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // groupingSetting Field Functions 
    bool hasGroupingSetting() const { return this->groupingSetting_ != nullptr;};
    void deleteGroupingSetting() { this->groupingSetting_ = nullptr;};
    inline const NotifyStrategyForModifyGroupingSetting & groupingSetting() const { DARABONBA_PTR_GET_CONST(groupingSetting_, NotifyStrategyForModifyGroupingSetting) };
    inline NotifyStrategyForModifyGroupingSetting groupingSetting() { DARABONBA_PTR_GET(groupingSetting_, NotifyStrategyForModifyGroupingSetting) };
    inline NotifyStrategyForModify& setGroupingSetting(const NotifyStrategyForModifyGroupingSetting & groupingSetting) { DARABONBA_PTR_SET_VALUE(groupingSetting_, groupingSetting) };
    inline NotifyStrategyForModify& setGroupingSetting(NotifyStrategyForModifyGroupingSetting && groupingSetting) { DARABONBA_PTR_SET_RVALUE(groupingSetting_, groupingSetting) };


    // ignoreRestoredNotification Field Functions 
    bool hasIgnoreRestoredNotification() const { return this->ignoreRestoredNotification_ != nullptr;};
    void deleteIgnoreRestoredNotification() { this->ignoreRestoredNotification_ = nullptr;};
    inline bool ignoreRestoredNotification() const { DARABONBA_PTR_GET_DEFAULT(ignoreRestoredNotification_, false) };
    inline NotifyStrategyForModify& setIgnoreRestoredNotification(bool ignoreRestoredNotification) { DARABONBA_PTR_SET_VALUE(ignoreRestoredNotification_, ignoreRestoredNotification) };


    // notifyStrategyName Field Functions 
    bool hasNotifyStrategyName() const { return this->notifyStrategyName_ != nullptr;};
    void deleteNotifyStrategyName() { this->notifyStrategyName_ = nullptr;};
    inline string notifyStrategyName() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyName_, "") };
    inline NotifyStrategyForModify& setNotifyStrategyName(string notifyStrategyName) { DARABONBA_PTR_SET_VALUE(notifyStrategyName_, notifyStrategyName) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const NotifyStrategyForModifyPushingSetting & pushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, NotifyStrategyForModifyPushingSetting) };
    inline NotifyStrategyForModifyPushingSetting pushingSetting() { DARABONBA_PTR_GET(pushingSetting_, NotifyStrategyForModifyPushingSetting) };
    inline NotifyStrategyForModify& setPushingSetting(const NotifyStrategyForModifyPushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline NotifyStrategyForModify& setPushingSetting(NotifyStrategyForModifyPushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // repeatNotifySetting Field Functions 
    bool hasRepeatNotifySetting() const { return this->repeatNotifySetting_ != nullptr;};
    void deleteRepeatNotifySetting() { this->repeatNotifySetting_ = nullptr;};
    inline const NotifyStrategyForModifyRepeatNotifySetting & repeatNotifySetting() const { DARABONBA_PTR_GET_CONST(repeatNotifySetting_, NotifyStrategyForModifyRepeatNotifySetting) };
    inline NotifyStrategyForModifyRepeatNotifySetting repeatNotifySetting() { DARABONBA_PTR_GET(repeatNotifySetting_, NotifyStrategyForModifyRepeatNotifySetting) };
    inline NotifyStrategyForModify& setRepeatNotifySetting(const NotifyStrategyForModifyRepeatNotifySetting & repeatNotifySetting) { DARABONBA_PTR_SET_VALUE(repeatNotifySetting_, repeatNotifySetting) };
    inline NotifyStrategyForModify& setRepeatNotifySetting(NotifyStrategyForModifyRepeatNotifySetting && repeatNotifySetting) { DARABONBA_PTR_SET_RVALUE(repeatNotifySetting_, repeatNotifySetting) };


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<NotifyStrategyForModifyRoutes> & routes() const { DARABONBA_PTR_GET_CONST(routes_, vector<NotifyStrategyForModifyRoutes>) };
    inline vector<NotifyStrategyForModifyRoutes> routes() { DARABONBA_PTR_GET(routes_, vector<NotifyStrategyForModifyRoutes>) };
    inline NotifyStrategyForModify& setRoutes(const vector<NotifyStrategyForModifyRoutes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline NotifyStrategyForModify& setRoutes(vector<NotifyStrategyForModifyRoutes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


    // workspaceFilterSetting Field Functions 
    bool hasWorkspaceFilterSetting() const { return this->workspaceFilterSetting_ != nullptr;};
    void deleteWorkspaceFilterSetting() { this->workspaceFilterSetting_ = nullptr;};
    inline const WorkspaceFilterSetting & workspaceFilterSetting() const { DARABONBA_PTR_GET_CONST(workspaceFilterSetting_, WorkspaceFilterSetting) };
    inline WorkspaceFilterSetting workspaceFilterSetting() { DARABONBA_PTR_GET(workspaceFilterSetting_, WorkspaceFilterSetting) };
    inline NotifyStrategyForModify& setWorkspaceFilterSetting(const WorkspaceFilterSetting & workspaceFilterSetting) { DARABONBA_PTR_SET_VALUE(workspaceFilterSetting_, workspaceFilterSetting) };
    inline NotifyStrategyForModify& setWorkspaceFilterSetting(WorkspaceFilterSetting && workspaceFilterSetting) { DARABONBA_PTR_SET_RVALUE(workspaceFilterSetting_, workspaceFilterSetting) };


  protected:
    std::shared_ptr<int32_t> autoRecoverSeconds_ = nullptr;
    std::shared_ptr<vector<NotifyStrategyForModifyCustomTemplateEntries>> customTemplateEntries_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableIncidentManagement_ = nullptr;
    std::shared_ptr<vector<string>> escalationId_ = nullptr;
    std::shared_ptr<FilterSetting> filterSetting_ = nullptr;
    // This parameter is required.
    std::shared_ptr<NotifyStrategyForModifyGroupingSetting> groupingSetting_ = nullptr;
    std::shared_ptr<bool> ignoreRestoredNotification_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> notifyStrategyName_ = nullptr;
    std::shared_ptr<NotifyStrategyForModifyPushingSetting> pushingSetting_ = nullptr;
    std::shared_ptr<NotifyStrategyForModifyRepeatNotifySetting> repeatNotifySetting_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<NotifyStrategyForModifyRoutes>> routes_ = nullptr;
    std::shared_ptr<WorkspaceFilterSetting> workspaceFilterSetting_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
