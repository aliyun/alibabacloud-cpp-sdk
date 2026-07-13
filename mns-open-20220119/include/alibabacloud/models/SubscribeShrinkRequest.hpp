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
    virtual bool empty() const override { return this->dlqPolicyShrink_ == nullptr
        && this->dmAttributesShrink_ == nullptr && this->dysmsAttributesShrink_ == nullptr && this->endpoint_ == nullptr && this->kafkaAttributesShrink_ == nullptr && this->messageTag_ == nullptr
        && this->notifyContentFormat_ == nullptr && this->notifyStrategy_ == nullptr && this->pushType_ == nullptr && this->stsRoleArn_ == nullptr && this->subscriptionName_ == nullptr
        && this->tenantRateLimitPolicyShrink_ == nullptr && this->topicName_ == nullptr; };
    // dlqPolicyShrink Field Functions 
    bool hasDlqPolicyShrink() const { return this->dlqPolicyShrink_ != nullptr;};
    void deleteDlqPolicyShrink() { this->dlqPolicyShrink_ = nullptr;};
    inline string getDlqPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(dlqPolicyShrink_, "") };
    inline SubscribeShrinkRequest& setDlqPolicyShrink(string dlqPolicyShrink) { DARABONBA_PTR_SET_VALUE(dlqPolicyShrink_, dlqPolicyShrink) };


    // dmAttributesShrink Field Functions 
    bool hasDmAttributesShrink() const { return this->dmAttributesShrink_ != nullptr;};
    void deleteDmAttributesShrink() { this->dmAttributesShrink_ = nullptr;};
    inline string getDmAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(dmAttributesShrink_, "") };
    inline SubscribeShrinkRequest& setDmAttributesShrink(string dmAttributesShrink) { DARABONBA_PTR_SET_VALUE(dmAttributesShrink_, dmAttributesShrink) };


    // dysmsAttributesShrink Field Functions 
    bool hasDysmsAttributesShrink() const { return this->dysmsAttributesShrink_ != nullptr;};
    void deleteDysmsAttributesShrink() { this->dysmsAttributesShrink_ = nullptr;};
    inline string getDysmsAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(dysmsAttributesShrink_, "") };
    inline SubscribeShrinkRequest& setDysmsAttributesShrink(string dysmsAttributesShrink) { DARABONBA_PTR_SET_VALUE(dysmsAttributesShrink_, dysmsAttributesShrink) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SubscribeShrinkRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // kafkaAttributesShrink Field Functions 
    bool hasKafkaAttributesShrink() const { return this->kafkaAttributesShrink_ != nullptr;};
    void deleteKafkaAttributesShrink() { this->kafkaAttributesShrink_ = nullptr;};
    inline string getKafkaAttributesShrink() const { DARABONBA_PTR_GET_DEFAULT(kafkaAttributesShrink_, "") };
    inline SubscribeShrinkRequest& setKafkaAttributesShrink(string kafkaAttributesShrink) { DARABONBA_PTR_SET_VALUE(kafkaAttributesShrink_, kafkaAttributesShrink) };


    // messageTag Field Functions 
    bool hasMessageTag() const { return this->messageTag_ != nullptr;};
    void deleteMessageTag() { this->messageTag_ = nullptr;};
    inline string getMessageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
    inline SubscribeShrinkRequest& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


    // notifyContentFormat Field Functions 
    bool hasNotifyContentFormat() const { return this->notifyContentFormat_ != nullptr;};
    void deleteNotifyContentFormat() { this->notifyContentFormat_ = nullptr;};
    inline string getNotifyContentFormat() const { DARABONBA_PTR_GET_DEFAULT(notifyContentFormat_, "") };
    inline SubscribeShrinkRequest& setNotifyContentFormat(string notifyContentFormat) { DARABONBA_PTR_SET_VALUE(notifyContentFormat_, notifyContentFormat) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string getNotifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline SubscribeShrinkRequest& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string getPushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline SubscribeShrinkRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // stsRoleArn Field Functions 
    bool hasStsRoleArn() const { return this->stsRoleArn_ != nullptr;};
    void deleteStsRoleArn() { this->stsRoleArn_ = nullptr;};
    inline string getStsRoleArn() const { DARABONBA_PTR_GET_DEFAULT(stsRoleArn_, "") };
    inline SubscribeShrinkRequest& setStsRoleArn(string stsRoleArn) { DARABONBA_PTR_SET_VALUE(stsRoleArn_, stsRoleArn) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string getSubscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline SubscribeShrinkRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // tenantRateLimitPolicyShrink Field Functions 
    bool hasTenantRateLimitPolicyShrink() const { return this->tenantRateLimitPolicyShrink_ != nullptr;};
    void deleteTenantRateLimitPolicyShrink() { this->tenantRateLimitPolicyShrink_ = nullptr;};
    inline string getTenantRateLimitPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(tenantRateLimitPolicyShrink_, "") };
    inline SubscribeShrinkRequest& setTenantRateLimitPolicyShrink(string tenantRateLimitPolicyShrink) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicyShrink_, tenantRateLimitPolicyShrink) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline SubscribeShrinkRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The dead-letter queue policy.
    shared_ptr<string> dlqPolicyShrink_ {};
    // The email push attributes. This parameter is required when PushType is set to dm. The value is in JSON format and contains the following fields:
    // 
    // - AccountName: The sender address configured in DirectMail (such as notify@example.com).
    // - Subject: The email subject.
    shared_ptr<string> dmAttributesShrink_ {};
    // The SMS push attributes. This parameter is required when PushType is set to alisms. The value is in JSON format and contains the following fields:
    // 
    // - TemplateCode: The SMS template code, which can be obtained from the Short Message Service console.
    // - SignName: The SMS signature name.
    shared_ptr<string> dysmsAttributesShrink_ {};
    // ## Endpoint address for receiving messages
    // 
    // The format varies depending on the value of `PushType`:
    // 
    // - `PushType=http`: An HTTP/HTTPS callback URL, such as `http://example.com/callback` or `https://example.com/callback`.
    // - `PushType=queue`: The ARN of the destination queue, in the format `acs:mns:{RegionId}:{Alibaba Cloud account ID}:queues/{QueueName}`.
    // - `PushType=dm`: The email push endpoint, in the fixed format `smq-ep:dm:{Alibaba Cloud account ID}:__dynamic`. Replace `{Alibaba Cloud account ID}` with your Alibaba Cloud account ID.
    // - `PushType=dysms`: The SMS push endpoint, in the format `smq-ep:dysms:{Alibaba Cloud account ID}:{PhoneNumber}`.
    // - `PushType=kafka`: The Kafka push endpoint. The Kafka push type is deprecated.
    // - `PushType=fc`: The Function Compute endpoint, in the format `acs:fc:{RegionId}:{Alibaba Cloud account ID}:services/{ServiceName}/functions/{FunctionName}`.
    // - `PushType=eventbus`: The EventBridge endpoint, in the format `acs:eventbridge:{RegionId}:{Alibaba Cloud account ID}:eventbus/{EventBusName}`.
    // 
    // This parameter is required.
    shared_ptr<string> endpoint_ {};
    // The Kafka push type is deprecated.
    shared_ptr<string> kafkaAttributesShrink_ {};
    // The tag used for message filtering in this subscription. Only messages with a matching tag are pushed. The value is a string of up to 16 characters.
    // 
    // By default, no message filtering is applied.
    shared_ptr<string> messageTag_ {};
    // ## Format of the pushed message content
    // 
    // Valid values:
    // 
    // - `XML`: The message body is pushed in XML format. This is the default value.
    // - `JSON`: The message body is pushed in JSON format.
    // - `SIMPLIFIED`: Only the raw message body content is pushed, without SMQ metadata wrapping.
    shared_ptr<string> notifyContentFormat_ {};
    // The retry strategy when an error occurs while pushing messages to the endpoint. Valid values:
    // 
    // - BACKOFF_RETRY: backoff retry.
    // 
    // - EXPONENTIAL_DECAY_RETRY: exponential decay retry.
    shared_ptr<string> notifyStrategy_ {};
    // ## Push type of the subscription
    // 
    // Valid values:
    // 
    // - `http`: HTTP/HTTPS push. Pushes messages to a specified HTTP or HTTPS callback URL.
    // - `queue`: Queue push. Pushes messages to a specified SMQ queue.
    // - `dm`: Email push. Sends notifications through DirectMail. You must also set the `DmAttributes` and `StsRoleArn` parameters.
    // - `dysms`: SMS push. Sends notifications through Alibaba Cloud Short Message Service. You must also set the `DysmsAttributes` parameter.
    // 
    // - `fc`: Function Compute push. Pushes messages to Alibaba Cloud Function Compute (FC).
    // - `eventbus`: EventBridge push. Pushes messages to an EventBridge event bus.
    // 
    // **Note:**
    // The following values are deprecated and are only used for compatibility with legacy subscriptions:
    // 
    // - `mpush`: Mobile push.
    // - `alisms`: Legacy SMS.
    // - `email`: Legacy email. Use `dm` instead.
    // - `kafka`: Kafka push type is deprecated.
    // 
    // This parameter is required.
    shared_ptr<string> pushType_ {};
    // The ARN of the RAM role assumed by the service. The format is acs:ram::{Alibaba Cloud account ID}:role/{RoleName}. Replace {Alibaba Cloud account ID} with the Alibaba Cloud account ID that calls the API operation.
    shared_ptr<string> stsRoleArn_ {};
    // The name of the subscription.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionName_ {};
    // The throttling policy.
    shared_ptr<string> tenantRateLimitPolicyShrink_ {};
    // The name of the topic.
    // 
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
