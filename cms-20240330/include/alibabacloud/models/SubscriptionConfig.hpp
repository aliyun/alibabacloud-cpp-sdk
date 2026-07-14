// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
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
  class SubscriptionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(subscribeLegacyEvent, subscribeLegacyEvent_);
      DARABONBA_PTR_TO_JSON(workspaceFilterSetting, workspaceFilterSetting_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(subscribeLegacyEvent, subscribeLegacyEvent_);
      DARABONBA_PTR_FROM_JSON(workspaceFilterSetting, workspaceFilterSetting_);
    };
    SubscriptionConfig() = default ;
    SubscriptionConfig(const SubscriptionConfig &) = default ;
    SubscriptionConfig(SubscriptionConfig &&) = default ;
    SubscriptionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionConfig() = default ;
    SubscriptionConfig& operator=(const SubscriptionConfig &) = default ;
    SubscriptionConfig& operator=(SubscriptionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filterSetting_ == nullptr
        && this->subscribeLegacyEvent_ == nullptr && this->workspaceFilterSetting_ == nullptr; };
    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & getFilterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting getFilterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline SubscriptionConfig& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline SubscriptionConfig& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // subscribeLegacyEvent Field Functions 
    bool hasSubscribeLegacyEvent() const { return this->subscribeLegacyEvent_ != nullptr;};
    void deleteSubscribeLegacyEvent() { this->subscribeLegacyEvent_ = nullptr;};
    inline bool getSubscribeLegacyEvent() const { DARABONBA_PTR_GET_DEFAULT(subscribeLegacyEvent_, false) };
    inline SubscriptionConfig& setSubscribeLegacyEvent(bool subscribeLegacyEvent) { DARABONBA_PTR_SET_VALUE(subscribeLegacyEvent_, subscribeLegacyEvent) };


    // workspaceFilterSetting Field Functions 
    bool hasWorkspaceFilterSetting() const { return this->workspaceFilterSetting_ != nullptr;};
    void deleteWorkspaceFilterSetting() { this->workspaceFilterSetting_ = nullptr;};
    inline const WorkspaceFilterSetting & getWorkspaceFilterSetting() const { DARABONBA_PTR_GET_CONST(workspaceFilterSetting_, WorkspaceFilterSetting) };
    inline WorkspaceFilterSetting getWorkspaceFilterSetting() { DARABONBA_PTR_GET(workspaceFilterSetting_, WorkspaceFilterSetting) };
    inline SubscriptionConfig& setWorkspaceFilterSetting(const WorkspaceFilterSetting & workspaceFilterSetting) { DARABONBA_PTR_SET_VALUE(workspaceFilterSetting_, workspaceFilterSetting) };
    inline SubscriptionConfig& setWorkspaceFilterSetting(WorkspaceFilterSetting && workspaceFilterSetting) { DARABONBA_PTR_SET_RVALUE(workspaceFilterSetting_, workspaceFilterSetting) };


  protected:
    // The event content filtering conditions.
    shared_ptr<FilterSetting> filterSetting_ {};
    // Specifies whether to subscribe to legacy product events (events with an empty workspace from CMS 1.0, ARMS, or SLS). Valid values:
    // - true: Subscribe.
    // - false/null: Do not subscribe.
    shared_ptr<bool> subscribeLegacyEvent_ {};
    // The cross-workspace event routing (global subscription) settings.
    shared_ptr<WorkspaceFilterSetting> workspaceFilterSetting_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
