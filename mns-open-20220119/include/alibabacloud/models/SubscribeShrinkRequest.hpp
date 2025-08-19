// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SubscribeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicyShrink_);
      DARABONBA_PTR_TO_JSON(DmAttributes, dmAttributesShrink_);
      DARABONBA_PTR_TO_JSON(DysmsAttributes, dysmsAttributesShrink_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(KafkaAttributes, kafkaAttributesShrink_);
      DARABONBA_PTR_TO_JSON(MessageTag, messageTag_);
      DARABONBA_PTR_TO_JSON(NotifyContentFormat, notifyContentFormat_);
      DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(PushType, pushType_);
      DARABONBA_PTR_TO_JSON(StsRoleArn, stsRoleArn_);
      DARABONBA_PTR_TO_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicyShrink_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(DmAttributes, dmAttributesShrink_);
      DARABONBA_PTR_FROM_JSON(DysmsAttributes, dysmsAttributesShrink_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(KafkaAttributes, kafkaAttributesShrink_);
      DARABONBA_PTR_FROM_JSON(MessageTag, messageTag_);
      DARABONBA_PTR_FROM_JSON(NotifyContentFormat, notifyContentFormat_);
      DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(PushType, pushType_);
      DARABONBA_PTR_FROM_JSON(StsRoleArn, stsRoleArn_);
      DARABONBA_PTR_FROM_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(TenantRateLimitPolicy, tenantRateLimitPolicyShrink_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    SubscribeShrinkRequest() = default ;
    SubscribeShrinkRequest(const SubscribeShrinkRequest &) = default ;
    SubscribeShrinkRequest(SubscribeShrinkRequest &&) = default ;
    SubscribeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribeShrinkRequest() = default ;
    SubscribeShrinkRequest& operator=(const SubscribeShrinkRequest &) = default ;
    SubscribeShrinkRequest& operator=(SubscribeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dlqPolicyShrink_ != nullptr
        && this->dmAttributesShrink_ != nullptr && this->dysmsAttributesShrink_ != nullptr && this->endpoint_ != nullptr && this->kafkaAttributesShrink_ != nullptr && this->messageTag_ != nullptr
        && this->notifyContentFormat_ != nullptr && this->notifyStrategy_ != nullptr && this->pushType_ != nullptr && this->stsRoleArn_ != nullptr && this->subscriptionName_ != nullptr
        && this->tenantRateLimitPolicyShrink_ != nullptr && this->topicName_ != nullptr; };
    // dlqPolicyShrink Field Functions 
    bool hasDlqPolicyShrink() const { return this->dlqPolicyShrink_ != nullptr;};
    void deleteDlqPolicyShrink() { this->dlqPolicyShrink_ = nullptr;};
    inline string dlqPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(dlqPolicyShrink_, "") };
    inline SubscribeShrinkRequest& setDlqPolicyShrink(string dlqPolicyShrink) { DARABONBA_PTR_SET_VALUE(dlqPolicyShrink_, dlqPolicyShrink) };


    // dmAttributesShrink Field Functions 
    bool hasDmAttributesShrink() const { return this->dmAttributesShrink_ != nullptr;};
    void deleteDmAttributesShrink() { this->dmAttributesShrink_ = nullptr;};
    inline string dmAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(dmAttributesShrink_, "") };
    inline SubscribeShrinkRequest& setDmAttributesShrink(string dmAttributesShrink) { DARABONBA_PTR_SET_VALUE(dmAttributesShrink_, dmAttributesShrink) };


    // dysmsAttributesShrink Field Functions 
    bool hasDysmsAttributesShrink() const { return this->dysmsAttributesShrink_ != nullptr;};
    void deleteDysmsAttributesShrink() { this->dysmsAttributesShrink_ = nullptr;};
    inline string dysmsAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(dysmsAttributesShrink_, "") };
    inline SubscribeShrinkRequest& setDysmsAttributesShrink(string dysmsAttributesShrink) { DARABONBA_PTR_SET_VALUE(dysmsAttributesShrink_, dysmsAttributesShrink) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SubscribeShrinkRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // kafkaAttributesShrink Field Functions 
    bool hasKafkaAttributesShrink() const { return this->kafkaAttributesShrink_ != nullptr;};
    void deleteKafkaAttributesShrink() { this->kafkaAttributesShrink_ = nullptr;};
    inline string kafkaAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(kafkaAttributesShrink_, "") };
    inline SubscribeShrinkRequest& setKafkaAttributesShrink(string kafkaAttributesShrink) { DARABONBA_PTR_SET_VALUE(kafkaAttributesShrink_, kafkaAttributesShrink) };


    // messageTag Field Functions 
    bool hasMessageTag() const { return this->messageTag_ != nullptr;};
    void deleteMessageTag() { this->messageTag_ = nullptr;};
    inline string messageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
    inline SubscribeShrinkRequest& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


    // notifyContentFormat Field Functions 
    bool hasNotifyContentFormat() const { return this->notifyContentFormat_ != nullptr;};
    void deleteNotifyContentFormat() { this->notifyContentFormat_ = nullptr;};
    inline string notifyContentFormat() const { DARABONBA_PTR_GET_DEFAULT(notifyContentFormat_, "") };
    inline SubscribeShrinkRequest& setNotifyContentFormat(string notifyContentFormat) { DARABONBA_PTR_SET_VALUE(notifyContentFormat_, notifyContentFormat) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string notifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline SubscribeShrinkRequest& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string pushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline SubscribeShrinkRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // stsRoleArn Field Functions 
    bool hasStsRoleArn() const { return this->stsRoleArn_ != nullptr;};
    void deleteStsRoleArn() { this->stsRoleArn_ = nullptr;};
    inline string stsRoleArn() const { DARABONBA_PTR_GET_DEFAULT(stsRoleArn_, "") };
    inline SubscribeShrinkRequest& setStsRoleArn(string stsRoleArn) { DARABONBA_PTR_SET_VALUE(stsRoleArn_, stsRoleArn) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string subscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline SubscribeShrinkRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // tenantRateLimitPolicyShrink Field Functions 
    bool hasTenantRateLimitPolicyShrink() const { return this->tenantRateLimitPolicyShrink_ != nullptr;};
    void deleteTenantRateLimitPolicyShrink() { this->tenantRateLimitPolicyShrink_ = nullptr;};
    inline string tenantRateLimitPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantRateLimitPolicyShrink_, "") };
    inline SubscribeShrinkRequest& setTenantRateLimitPolicyShrink(string tenantRateLimitPolicyShrink) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicyShrink_, tenantRateLimitPolicyShrink) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline SubscribeShrinkRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The dead-letter queue policy.
    std::shared_ptr<string> dlqPolicyShrink_ = nullptr;
    std::shared_ptr<string> dmAttributesShrink_ = nullptr;
    std::shared_ptr<string> dysmsAttributesShrink_ = nullptr;
    // The receiver endpoint. The format of the endpoint varies based on the terminal type.
    // 
    // *   If you set PushType to http, set Endpoint to an `HTTP URL that starts with http:// or https://`.
    // *   If you set PushType to queue, set Endpoint to a `queue name`.
    // *   If you set PushType to mpush, set Endpoint to an `AppKey`.
    // *   If you set PushType to alisms, set Endpoint to a `mobile number`.
    // *   If you set PushType to email, set Endpoint to an `email address`.
    // 
    // This parameter is required.
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> kafkaAttributesShrink_ = nullptr;
    // The tag that is used to filter messages. Only messages that have the same tag can be pushed. Set the value to a string of no more than 16 characters.
    // 
    // By default, no tag is specified to filter messages.
    std::shared_ptr<string> messageTag_ = nullptr;
    // The content format of the messages that are pushed to the endpoint. Valid values:
    // 
    // *   XML
    // *   JSON
    // *   SIMPLIFIED
    std::shared_ptr<string> notifyContentFormat_ = nullptr;
    // The retry policy that is applied if an error occurs when Message Service (MNS) pushes messages to the endpoint. Valid values:
    // 
    // *   BACKOFF_RETRY
    // *   EXPONENTIAL_DECAY_RETRY
    std::shared_ptr<string> notifyStrategy_ = nullptr;
    // The terminal type. Valid values:
    // 
    // *   http: HTTP services
    // *   queue: queues
    // *   mpush: mobile devices
    // *   alisms: Alibaba Cloud Short Message Service (SMS)
    // *   email: emails
    // 
    // This parameter is required.
    std::shared_ptr<string> pushType_ = nullptr;
    std::shared_ptr<string> stsRoleArn_ = nullptr;
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
