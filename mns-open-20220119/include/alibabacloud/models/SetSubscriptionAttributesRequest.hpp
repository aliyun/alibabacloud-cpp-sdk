// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSUBSCRIPTIONATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSUBSCRIPTIONATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SetSubscriptionAttributesRequestDlqPolicy.hpp>
#include <alibabacloud/models/SetSubscriptionAttributesRequestTenantRateLimitPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SetSubscriptionAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSubscriptionAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, SetSubscriptionAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    SetSubscriptionAttributesRequest() = default ;
    SetSubscriptionAttributesRequest(const SetSubscriptionAttributesRequest &) = default ;
    SetSubscriptionAttributesRequest(SetSubscriptionAttributesRequest &&) = default ;
    SetSubscriptionAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSubscriptionAttributesRequest() = default ;
    SetSubscriptionAttributesRequest& operator=(const SetSubscriptionAttributesRequest &) = default ;
    SetSubscriptionAttributesRequest& operator=(SetSubscriptionAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dlqPolicy_ != nullptr
        && this->notifyStrategy_ != nullptr && this->subscriptionName_ != nullptr && this->tenantRateLimitPolicy_ != nullptr && this->topicName_ != nullptr; };
    // dlqPolicy Field Functions 
    bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
    void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
    inline const SetSubscriptionAttributesRequestDlqPolicy & dlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, SetSubscriptionAttributesRequestDlqPolicy) };
    inline SetSubscriptionAttributesRequestDlqPolicy dlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, SetSubscriptionAttributesRequestDlqPolicy) };
    inline SetSubscriptionAttributesRequest& setDlqPolicy(const SetSubscriptionAttributesRequestDlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
    inline SetSubscriptionAttributesRequest& setDlqPolicy(SetSubscriptionAttributesRequestDlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string notifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline SetSubscriptionAttributesRequest& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string subscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline SetSubscriptionAttributesRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // tenantRateLimitPolicy Field Functions 
    bool hasTenantRateLimitPolicy() const { return this->tenantRateLimitPolicy_ != nullptr;};
    void deleteTenantRateLimitPolicy() { this->tenantRateLimitPolicy_ = nullptr;};
    inline const SetSubscriptionAttributesRequestTenantRateLimitPolicy & tenantRateLimitPolicy() const { DARABONBA_PTR_GET_CONST(tenantRateLimitPolicy_, SetSubscriptionAttributesRequestTenantRateLimitPolicy) };
    inline SetSubscriptionAttributesRequestTenantRateLimitPolicy tenantRateLimitPolicy() { DARABONBA_PTR_GET(tenantRateLimitPolicy_, SetSubscriptionAttributesRequestTenantRateLimitPolicy) };
    inline SetSubscriptionAttributesRequest& setTenantRateLimitPolicy(const SetSubscriptionAttributesRequestTenantRateLimitPolicy & tenantRateLimitPolicy) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };
    inline SetSubscriptionAttributesRequest& setTenantRateLimitPolicy(SetSubscriptionAttributesRequestTenantRateLimitPolicy && tenantRateLimitPolicy) { DARABONBA_PTR_SET_RVALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline SetSubscriptionAttributesRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The dead-letter queue policy.
    std::shared_ptr<SetSubscriptionAttributesRequestDlqPolicy> dlqPolicy_ = nullptr;
    // The retry policy that is applied if an error occurs when Message Service (MNS) pushes messages to the endpoint. Valid values:
    // 
    // *   BACKOFF_RETRY
    // *   EXPONENTIAL_DECAY_RETRY
    std::shared_ptr<string> notifyStrategy_ = nullptr;
    // The name of the subscription.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscriptionName_ = nullptr;
    std::shared_ptr<SetSubscriptionAttributesRequestTenantRateLimitPolicy> tenantRateLimitPolicy_ = nullptr;
    // The name of the topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
