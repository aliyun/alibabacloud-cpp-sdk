// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIPTIONANDNOTIFYSTRATEGYFORMODIFY_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIPTIONANDNOTIFYSTRATEGYFORMODIFY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NotifyStrategyForSNSModify.hpp>
#include <alibabacloud/models/IncidentResponsePlanForSNSModify.hpp>
#include <alibabacloud/models/SubscriptionForSNSModify.hpp>
#include <vector>
#include <alibabacloud/models/SubscriptionOp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class SubscriptionAndNotifyStrategyForModify : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscriptionAndNotifyStrategyForModify& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(responsePlan, responsePlan_);
      DARABONBA_PTR_TO_JSON(subscription, subscription_);
      DARABONBA_PTR_TO_JSON(subscriptions, subscriptions_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, SubscriptionAndNotifyStrategyForModify& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(responsePlan, responsePlan_);
      DARABONBA_PTR_FROM_JSON(subscription, subscription_);
      DARABONBA_PTR_FROM_JSON(subscriptions, subscriptions_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    SubscriptionAndNotifyStrategyForModify() = default ;
    SubscriptionAndNotifyStrategyForModify(const SubscriptionAndNotifyStrategyForModify &) = default ;
    SubscriptionAndNotifyStrategyForModify(SubscriptionAndNotifyStrategyForModify &&) = default ;
    SubscriptionAndNotifyStrategyForModify(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscriptionAndNotifyStrategyForModify() = default ;
    SubscriptionAndNotifyStrategyForModify& operator=(const SubscriptionAndNotifyStrategyForModify &) = default ;
    SubscriptionAndNotifyStrategyForModify& operator=(SubscriptionAndNotifyStrategyForModify &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->enabled_ == nullptr && this->name_ == nullptr && this->notifyStrategy_ == nullptr && this->responsePlan_ == nullptr && this->subscription_ == nullptr
        && this->subscriptions_ == nullptr && this->uuid_ == nullptr && this->version_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubscriptionAndNotifyStrategyForModify& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline SubscriptionAndNotifyStrategyForModify& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubscriptionAndNotifyStrategyForModify& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline const NotifyStrategyForSNSModify & getNotifyStrategy() const { DARABONBA_PTR_GET_CONST(notifyStrategy_, NotifyStrategyForSNSModify) };
    inline NotifyStrategyForSNSModify getNotifyStrategy() { DARABONBA_PTR_GET(notifyStrategy_, NotifyStrategyForSNSModify) };
    inline SubscriptionAndNotifyStrategyForModify& setNotifyStrategy(const NotifyStrategyForSNSModify & notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };
    inline SubscriptionAndNotifyStrategyForModify& setNotifyStrategy(NotifyStrategyForSNSModify && notifyStrategy) { DARABONBA_PTR_SET_RVALUE(notifyStrategy_, notifyStrategy) };


    // responsePlan Field Functions 
    bool hasResponsePlan() const { return this->responsePlan_ != nullptr;};
    void deleteResponsePlan() { this->responsePlan_ = nullptr;};
    inline const IncidentResponsePlanForSNSModify & getResponsePlan() const { DARABONBA_PTR_GET_CONST(responsePlan_, IncidentResponsePlanForSNSModify) };
    inline IncidentResponsePlanForSNSModify getResponsePlan() { DARABONBA_PTR_GET(responsePlan_, IncidentResponsePlanForSNSModify) };
    inline SubscriptionAndNotifyStrategyForModify& setResponsePlan(const IncidentResponsePlanForSNSModify & responsePlan) { DARABONBA_PTR_SET_VALUE(responsePlan_, responsePlan) };
    inline SubscriptionAndNotifyStrategyForModify& setResponsePlan(IncidentResponsePlanForSNSModify && responsePlan) { DARABONBA_PTR_SET_RVALUE(responsePlan_, responsePlan) };


    // subscription Field Functions 
    bool hasSubscription() const { return this->subscription_ != nullptr;};
    void deleteSubscription() { this->subscription_ = nullptr;};
    inline const SubscriptionForSNSModify & getSubscription() const { DARABONBA_PTR_GET_CONST(subscription_, SubscriptionForSNSModify) };
    inline SubscriptionForSNSModify getSubscription() { DARABONBA_PTR_GET(subscription_, SubscriptionForSNSModify) };
    inline SubscriptionAndNotifyStrategyForModify& setSubscription(const SubscriptionForSNSModify & subscription) { DARABONBA_PTR_SET_VALUE(subscription_, subscription) };
    inline SubscriptionAndNotifyStrategyForModify& setSubscription(SubscriptionForSNSModify && subscription) { DARABONBA_PTR_SET_RVALUE(subscription_, subscription) };


    // subscriptions Field Functions 
    bool hasSubscriptions() const { return this->subscriptions_ != nullptr;};
    void deleteSubscriptions() { this->subscriptions_ = nullptr;};
    inline const vector<SubscriptionOp> & getSubscriptions() const { DARABONBA_PTR_GET_CONST(subscriptions_, vector<SubscriptionOp>) };
    inline vector<SubscriptionOp> getSubscriptions() { DARABONBA_PTR_GET(subscriptions_, vector<SubscriptionOp>) };
    inline SubscriptionAndNotifyStrategyForModify& setSubscriptions(const vector<SubscriptionOp> & subscriptions) { DARABONBA_PTR_SET_VALUE(subscriptions_, subscriptions) };
    inline SubscriptionAndNotifyStrategyForModify& setSubscriptions(vector<SubscriptionOp> && subscriptions) { DARABONBA_PTR_SET_RVALUE(subscriptions_, subscriptions) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline SubscriptionAndNotifyStrategyForModify& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline SubscriptionAndNotifyStrategyForModify& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<bool> enabled_ {};
    // Optional. If omitted, the backend derives the name from `notifyStrategy`.
    shared_ptr<string> name_ {};
    shared_ptr<NotifyStrategyForSNSModify> notifyStrategy_ {};
    shared_ptr<IncidentResponsePlanForSNSModify> responsePlan_ {};
    shared_ptr<SubscriptionForSNSModify> subscription_ {};
    // For update operations only. Use this parameter to batch create, update, and remove member subscriptions.
    shared_ptr<vector<SubscriptionOp>> subscriptions_ {};
    // Required for update operations but optional for create operations. If omitted during creation, the backend automatically generates a UUID.
    shared_ptr<string> uuid_ {};
    // Required for update operations. The value must match the current version of the record. If the versions do not match, the request fails with an `OPTIMISTIC_LOCK_FAILED` error.
    shared_ptr<int32_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
