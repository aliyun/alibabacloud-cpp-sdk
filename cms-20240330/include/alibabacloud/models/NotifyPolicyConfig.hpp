// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYPOLICYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYPOLICYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NotifyStrategyConfig.hpp>
#include <alibabacloud/models/ResponsePlanConfig.hpp>
#include <alibabacloud/models/SubscriptionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class NotifyPolicyConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyPolicyConfig& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(notifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(responsePlan, responsePlan_);
      DARABONBA_PTR_TO_JSON(subscription, subscription_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyPolicyConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(notifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(responsePlan, responsePlan_);
      DARABONBA_PTR_FROM_JSON(subscription, subscription_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    NotifyPolicyConfig() = default ;
    NotifyPolicyConfig(const NotifyPolicyConfig &) = default ;
    NotifyPolicyConfig(NotifyPolicyConfig &&) = default ;
    NotifyPolicyConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyPolicyConfig() = default ;
    NotifyPolicyConfig& operator=(const NotifyPolicyConfig &) = default ;
    NotifyPolicyConfig& operator=(NotifyPolicyConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->notifyStrategy_ == nullptr && this->responsePlan_ == nullptr && this->subscription_ == nullptr && this->uuid_ == nullptr
        && this->version_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline NotifyPolicyConfig& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline NotifyPolicyConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline const NotifyStrategyConfig & getNotifyStrategy() const { DARABONBA_PTR_GET_CONST(notifyStrategy_, NotifyStrategyConfig) };
    inline NotifyStrategyConfig getNotifyStrategy() { DARABONBA_PTR_GET(notifyStrategy_, NotifyStrategyConfig) };
    inline NotifyPolicyConfig& setNotifyStrategy(const NotifyStrategyConfig & notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };
    inline NotifyPolicyConfig& setNotifyStrategy(NotifyStrategyConfig && notifyStrategy) { DARABONBA_PTR_SET_RVALUE(notifyStrategy_, notifyStrategy) };


    // responsePlan Field Functions 
    bool hasResponsePlan() const { return this->responsePlan_ != nullptr;};
    void deleteResponsePlan() { this->responsePlan_ = nullptr;};
    inline const ResponsePlanConfig & getResponsePlan() const { DARABONBA_PTR_GET_CONST(responsePlan_, ResponsePlanConfig) };
    inline ResponsePlanConfig getResponsePlan() { DARABONBA_PTR_GET(responsePlan_, ResponsePlanConfig) };
    inline NotifyPolicyConfig& setResponsePlan(const ResponsePlanConfig & responsePlan) { DARABONBA_PTR_SET_VALUE(responsePlan_, responsePlan) };
    inline NotifyPolicyConfig& setResponsePlan(ResponsePlanConfig && responsePlan) { DARABONBA_PTR_SET_RVALUE(responsePlan_, responsePlan) };


    // subscription Field Functions 
    bool hasSubscription() const { return this->subscription_ != nullptr;};
    void deleteSubscription() { this->subscription_ = nullptr;};
    inline const SubscriptionConfig & getSubscription() const { DARABONBA_PTR_GET_CONST(subscription_, SubscriptionConfig) };
    inline SubscriptionConfig getSubscription() { DARABONBA_PTR_GET(subscription_, SubscriptionConfig) };
    inline NotifyPolicyConfig& setSubscription(const SubscriptionConfig & subscription) { DARABONBA_PTR_SET_VALUE(subscription_, subscription) };
    inline NotifyPolicyConfig& setSubscription(SubscriptionConfig && subscription) { DARABONBA_PTR_SET_RVALUE(subscription_, subscription) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline NotifyPolicyConfig& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline NotifyPolicyConfig& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The description of the policy, which helps identify its purpose.
    shared_ptr<string> description_ {};
    // The policy name. We recommend that you specify this parameter for the Create operation. If a policy with the same name already exists in the workspace, ConflictName (409) is returned.
    shared_ptr<string> name_ {};
    // The notification strategy sub-entity, which includes noise reduction, notification routing, channels, and custom templates. Required for the Create operation.
    shared_ptr<NotifyStrategyConfig> notifyStrategy_ {};
    // The response plan sub-entity, which includes upgrade, repeated notification, automatic recovery, and action integration. Optional.
    shared_ptr<ResponsePlanConfig> responsePlan_ {};
    // The subscription sub-entity, which includes event filtering, cross-workspace routing, and legacy product event subscription switches. Optional. If not specified, all events in the current workspace are subscribed to.
    shared_ptr<SubscriptionConfig> subscription_ {};
    // The unique identifier of the policy. Required for the Update operation. Omitted for the Create operation because it is generated by the backend.
    shared_ptr<string> uuid_ {};
    // Required for the Update operation. The write succeeds only when this value matches the backend record. If the values do not match, OptimisticLockFailed is returned.
    shared_ptr<int32_t> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
