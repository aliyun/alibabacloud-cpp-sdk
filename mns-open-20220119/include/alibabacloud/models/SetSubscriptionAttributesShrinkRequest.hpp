// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSUBSCRIPTIONATTRIBUTESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSUBSCRIPTIONATTRIBUTESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SetSubscriptionAttributesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSubscriptionAttributesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicyShrink_);
      DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicyShrink_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, SetSubscriptionAttributesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(TenantRateLimitPolicy, tenantRateLimitPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    SetSubscriptionAttributesShrinkRequest() = default ;
    SetSubscriptionAttributesShrinkRequest(const SetSubscriptionAttributesShrinkRequest &) = default ;
    SetSubscriptionAttributesShrinkRequest(SetSubscriptionAttributesShrinkRequest &&) = default ;
    SetSubscriptionAttributesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSubscriptionAttributesShrinkRequest() = default ;
    SetSubscriptionAttributesShrinkRequest& operator=(const SetSubscriptionAttributesShrinkRequest &) = default ;
    SetSubscriptionAttributesShrinkRequest& operator=(SetSubscriptionAttributesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dlqPolicyShrink_ != nullptr
        && this->notifyStrategy_ != nullptr && this->subscriptionName_ != nullptr && this->tenantRateLimitPolicyShrink_ != nullptr && this->topicName_ != nullptr; };
    // dlqPolicyShrink Field Functions 
    bool hasDlqPolicyShrink() const { return this->dlqPolicyShrink_ != nullptr;};
    void deleteDlqPolicyShrink() { this->dlqPolicyShrink_ = nullptr;};
    inline string dlqPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(dlqPolicyShrink_, "") };
    inline SetSubscriptionAttributesShrinkRequest& setDlqPolicyShrink(string dlqPolicyShrink) { DARABONBA_PTR_SET_VALUE(dlqPolicyShrink_, dlqPolicyShrink) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string notifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline SetSubscriptionAttributesShrinkRequest& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string subscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline SetSubscriptionAttributesShrinkRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // tenantRateLimitPolicyShrink Field Functions 
    bool hasTenantRateLimitPolicyShrink() const { return this->tenantRateLimitPolicyShrink_ != nullptr;};
    void deleteTenantRateLimitPolicyShrink() { this->tenantRateLimitPolicyShrink_ = nullptr;};
    inline string tenantRateLimitPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantRateLimitPolicyShrink_, "") };
    inline SetSubscriptionAttributesShrinkRequest& setTenantRateLimitPolicyShrink(string tenantRateLimitPolicyShrink) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicyShrink_, tenantRateLimitPolicyShrink) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline SetSubscriptionAttributesShrinkRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The dead-letter queue policy.
    std::shared_ptr<string> dlqPolicyShrink_ = nullptr;
    // The retry policy that is applied if an error occurs when Message Service (MNS) pushes messages to the endpoint. Valid values:
    // 
    // *   BACKOFF_RETRY
    // *   EXPONENTIAL_DECAY_RETRY
    std::shared_ptr<string> notifyStrategy_ = nullptr;
    // The name of the subscription.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscriptionName_ = nullptr;
    std::shared_ptr<string> tenantRateLimitPolicyShrink_ = nullptr;
    // The name of the topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
