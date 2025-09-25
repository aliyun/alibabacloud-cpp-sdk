// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONFORMODIFY_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONFORMODIFY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FilterSetting.hpp>
#include <alibabacloud/models/SubscriptionForModifyPushingSetting.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SubscriptionForModify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionForModify& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_TO_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_TO_JSON(subscriptionName, subscriptionName_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionForModify& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_FROM_JSON(pushingSetting, pushingSetting_);
      DARABONBA_PTR_FROM_JSON(subscriptionName, subscriptionName_);
    };
    SubscriptionForModify() = default ;
    SubscriptionForModify(const SubscriptionForModify &) = default ;
    SubscriptionForModify(SubscriptionForModify &&) = default ;
    SubscriptionForModify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionForModify() = default ;
    SubscriptionForModify& operator=(const SubscriptionForModify &) = default ;
    SubscriptionForModify& operator=(SubscriptionForModify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->filterSetting_ != nullptr && this->notifyStrategyId_ != nullptr && this->pushingSetting_ != nullptr && this->subscriptionName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubscriptionForModify& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline SubscriptionForModify& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline SubscriptionForModify& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // notifyStrategyId Field Functions 
    bool hasNotifyStrategyId() const { return this->notifyStrategyId_ != nullptr;};
    void deleteNotifyStrategyId() { this->notifyStrategyId_ = nullptr;};
    inline string notifyStrategyId() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategyId_, "") };
    inline SubscriptionForModify& setNotifyStrategyId(string notifyStrategyId) { DARABONBA_PTR_SET_VALUE(notifyStrategyId_, notifyStrategyId) };


    // pushingSetting Field Functions 
    bool hasPushingSetting() const { return this->pushingSetting_ != nullptr;};
    void deletePushingSetting() { this->pushingSetting_ = nullptr;};
    inline const SubscriptionForModifyPushingSetting & pushingSetting() const { DARABONBA_PTR_GET_CONST(pushingSetting_, SubscriptionForModifyPushingSetting) };
    inline SubscriptionForModifyPushingSetting pushingSetting() { DARABONBA_PTR_GET(pushingSetting_, SubscriptionForModifyPushingSetting) };
    inline SubscriptionForModify& setPushingSetting(const SubscriptionForModifyPushingSetting & pushingSetting) { DARABONBA_PTR_SET_VALUE(pushingSetting_, pushingSetting) };
    inline SubscriptionForModify& setPushingSetting(SubscriptionForModifyPushingSetting && pushingSetting) { DARABONBA_PTR_SET_RVALUE(pushingSetting_, pushingSetting) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string subscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline SubscriptionForModify& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<FilterSetting> filterSetting_ = nullptr;
    std::shared_ptr<string> notifyStrategyId_ = nullptr;
    std::shared_ptr<SubscriptionForModifyPushingSetting> pushingSetting_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> subscriptionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
