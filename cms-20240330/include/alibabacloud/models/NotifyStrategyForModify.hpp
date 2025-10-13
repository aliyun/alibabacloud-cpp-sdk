// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFY_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYSTRATEGYFORMODIFY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NotifyStrategyForModifyCustomTemplateEntries.hpp>
#include <alibabacloud/models/NotifyStrategyForModifyGroupingSetting.hpp>
#include <alibabacloud/models/NotifyStrategyForModifyRoutes.hpp>
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
      DARABONBA_PTR_TO_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_TO_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_TO_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_TO_JSON(routes, routes_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyStrategyForModify& obj) { 
      DARABONBA_PTR_FROM_JSON(customTemplateEntries, customTemplateEntries_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupingSetting, groupingSetting_);
      DARABONBA_PTR_FROM_JSON(ignoreRestoredNotification, ignoreRestoredNotification_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyName, notifyStrategyName_);
      DARABONBA_PTR_FROM_JSON(routes, routes_);
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
    virtual bool empty() const override { return this->customTemplateEntries_ == nullptr
        && return this->description_ == nullptr && return this->groupingSetting_ == nullptr && return this->ignoreRestoredNotification_ == nullptr && return this->notifyStrategyName_ == nullptr && return this->routes_ == nullptr; };
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


    // routes Field Functions 
    bool hasRoutes() const { return this->routes_ != nullptr;};
    void deleteRoutes() { this->routes_ = nullptr;};
    inline const vector<NotifyStrategyForModifyRoutes> & routes() const { DARABONBA_PTR_GET_CONST(routes_, vector<NotifyStrategyForModifyRoutes>) };
    inline vector<NotifyStrategyForModifyRoutes> routes() { DARABONBA_PTR_GET(routes_, vector<NotifyStrategyForModifyRoutes>) };
    inline NotifyStrategyForModify& setRoutes(const vector<NotifyStrategyForModifyRoutes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
    inline NotifyStrategyForModify& setRoutes(vector<NotifyStrategyForModifyRoutes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


  protected:
    std::shared_ptr<vector<NotifyStrategyForModifyCustomTemplateEntries>> customTemplateEntries_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<NotifyStrategyForModifyGroupingSetting> groupingSetting_ = nullptr;
    std::shared_ptr<bool> ignoreRestoredNotification_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> notifyStrategyName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<NotifyStrategyForModifyRoutes>> routes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
