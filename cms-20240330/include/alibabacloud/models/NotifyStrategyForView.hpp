// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotifyStrategyForViewCustomTemplateEntries.hpp>
#include <alibabacloud/models/NotifyStrategyForViewGroupingSetting.hpp>
#include <alibabacloud/models/NotifyStrategyForViewRoutes.hpp>
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
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_TO_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_TO_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_TO_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_TO_JSON(routes, routes_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForView& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_FROM_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_FROM_JSON(routes, routes_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
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
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->customTemplateEntries_ != nullptr && this->description_ != nullptr && this->enable_ != nullptr && this->groupingSetting_ != nullptr && this->ignoreRestoredNotification_ != nullptr
        && this->notifyStrategyId_ != nullptr && this->notifyStrategyName_ != nullptr && this->routes_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr
        && this->workspace_ != nullptr; };
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


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<NotifyStrategyForViewRoutes> & routes() const { DARABONBA_PTR_GET_CONST(routes_, vector<NotifyStrategyForViewRoutes>) };
    inline vector<NotifyStrategyForViewRoutes> routes() { DARABONBA_PTR_GET(routes_, vector<NotifyStrategyForViewRoutes>) };
    inline NotifyStrategyForView& setRoutes(const vector<NotifyStrategyForViewRoutes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline NotifyStrategyForView& setRoutes(vector<NotifyStrategyForViewRoutes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


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


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<NotifyStrategyForViewCustomTemplateEntries>> customTemplateEntries_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<NotifyStrategyForViewGroupingSetting> groupingSetting_ = nullptr;
    std::shared_ptr<bool> ignoreRestoredNotification_ = nullptr;
    std::shared_ptr<string> notifyStrategyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> notifyStrategyName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<NotifyStrategyForViewRoutes>> routes_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
