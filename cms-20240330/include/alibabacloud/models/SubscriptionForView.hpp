// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FilterSetting.hpp>
#include <alibabacloud/models/SubscriptionForViewPushingSetting.hpp>
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
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_TO_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_TO_JSON(subscriptionId, subscriptionId_);
      DARABONBA_PTR_TO_JSON(subscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionForView& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_FROM_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_FROM_JSON(subscriptionId, subscriptionId_);
      DARABONBA_PTR_FROM_JSON(subscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
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
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->enable_ != nullptr && this->filterSetting_ != nullptr && this->notifyStrategyId_ != nullptr && this->pushingSetting_ != nullptr
        && this->subscriptionId_ != nullptr && this->subscriptionName_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr && this->workspace_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SubscriptionForView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubscriptionForView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline SubscriptionForView& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline SubscriptionForView& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline SubscriptionForView& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // notifyStrategyId Field Functions 
    bool hasNotifyStrategyId() const { return this->notifyStrategyId_ != nullptr;};
    void deleteNotifyStrategyId() { this->notifyStrategyId_ = nullptr;};
    inline string notifyStrategyId() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyId_, "") };
    inline SubscriptionForView& setNotifyStrategyId(string notifyStrategyId) { DARABONBA_PTR_SET_VALUE(notifyStrategyId_, notifyStrategyId) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const SubscriptionForViewPushingSetting & pushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, SubscriptionForViewPushingSetting) };
    inline SubscriptionForViewPushingSetting pushingSetting() { DARABONBA_PTR_GET(pushingSetting_, SubscriptionForViewPushingSetting) };
    inline SubscriptionForView& setPushingSetting(const SubscriptionForViewPushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline SubscriptionForView& setPushingSetting(SubscriptionForViewPushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // subscriptionId Field Functions 
    bool hasSubscriptionId() const { return this->subscriptionId_ != nullptr;};
    void deleteSubscriptionId() { this->subscriptionId_ = nullptr;};
    inline string subscriptionId() const { DARABONBA_PTR_GET_DEFAULT(subscriptionId_, "") };
    inline SubscriptionForView& setSubscriptionId(string subscriptionId) { DARABONBA_PTR_SET_VALUE(subscriptionId_, subscriptionId) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string subscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline SubscriptionForView& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline SubscriptionForView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SubscriptionForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline SubscriptionForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<FilterSetting> filterSetting_ = nullptr;
    std::shared_ptr<string> notifyStrategyId_ = nullptr;
    std::shared_ptr<SubscriptionForViewPushingSetting> pushingSetting_ = nullptr;
    std::shared_ptr<string> subscriptionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subscriptionName_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
