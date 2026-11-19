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
    // The attributes for Direct Mail push. This parameter is required when the PushType parameter is set to dm. The value is in JSON format and contains the following fields:
    // 
    // - AccountName: the sender address, which is the sender address configured in Direct Mail, such as notify@example.com.
    // - Subject: the email subject.
    shared_ptr<string> dmAttributesShrink_ {};
    // The attributes for SMS push. This parameter is required when the PushType parameter is set to alisms. The value is in JSON format and contains the following fields:
    // 
    // - TemplateCode: the code of the SMS template, which can be obtained from the SMS console.
    // - SignName: the name of the SMS signature.
    shared_ptr<string> dysmsAttributesShrink_ {};
    // ## Endpoint for receiving messages
    // 
    // The format varies based on the `PushType` parameter:
    // 
    // - `PushType=http`: The HTTP or HTTPS callback URL, such as `http://example.com/callback` or `https://example.com/callback`.
    // - `PushType=queue`: The ARN of the destination queue, in the format of `acs:mns:{RegionId}:{Alibaba Cloud account ID}:/queues/{QueueName}`.
    // - `PushType=dm`: The Direct Mail push endpoint, in the fixed format of `smq-ep:dm:{Alibaba Cloud account ID}:__dynamic`. Replace `{Alibaba Cloud account ID}` with the ID of your Alibaba Cloud account.
    // - `PushType=dysms`: The SMS push endpoint, in the format of `smq-ep:dysms:{Alibaba Cloud account ID}:{Phone number}`.
    // - `PushType=kafka`: The Kafka push endpoint. The Kafka push type is deprecated.
    // - `PushType=fc`: The Function Compute endpoint, in the format of `acs:fc:{RegionId}:{Alibaba Cloud account ID}:services/{ServiceName}/functions/{FunctionName}`.
    // - `PushType=eventbus`: The EventBridge endpoint, in the format of `acs:eventbridge:{RegionId}:{Alibaba Cloud account ID}:eventbus/{EventBusName}`.
    // 
    // This parameter is required.
    shared_ptr<string> endpoint_ {};
    // The Kafka push type is deprecated.
    shared_ptr<string> kafkaAttributesShrink_ {};
    // The tag used for message filtering in the subscription. Only messages with a matching tag are pushed.
    // The value must be a string up to 16 characters in length.
    // 
    // By default, message filtering is not performed.
    shared_ptr<string> messageTag_ {};
    // ## Format of the pushed message content
    // 
    // Valid values:
    // 
    // - `XML`: XML format (default)
    // - `JSON`: JSON format
    // - `SIMPLIFIED`: original message body content without the SMQ metadata wrapper
    shared_ptr<string> notifyContentFormat_ {};
    // The retry strategy that is used when an error occurs during message pushing to the endpoint. Valid values:
    // 
    // - BACKOFF_RETRY: backoff retry (default)
    // - EXPONENTIAL_DECAY_RETRY: exponential decay retry
    shared_ptr<string> notifyStrategy_ {};
    // ## Push types for subscriptions
    // 
    // Valid values:
    // 
    // - `http`: Pushes messages to the specified HTTP or HTTPS callback URL.
    // - `queue`: Pushes messages to the specified Simple Message Queue (SMQ) queue.
    // - `dm`: Sends notifications by using the Direct Mail service. You must also set the `DmAttributes` and `StsRoleArn` parameters.
    // - `dysms`: Sends notifications by using the Alibaba Cloud SMS service. You must also set the `DysmsAttributes` parameter.
    // - `fc`: Pushes messages to Alibaba Cloud Function Compute (FC).
    // - `eventbus`: Pushes messages to an EventBridge event bus.
    // 
    // **Note:**
    // The following values are deprecated and are retained only for compatibility with legacy subscriptions:
    // 
    // - `mpush`: mobile push
    // - `alisms`: legacy SMS
    // - `email`: legacy email, use `dm` instead
    // - `kafka`: deprecated Kafka push type
    // 
    // This parameter is required.
    shared_ptr<string> pushType_ {};
    // The ARN of the RAM role assumed by the service. The format is acs:ram::{Alibaba Cloud account ID}:role/{RoleName}. Replace {Alibaba Cloud account ID} with the ID of the Alibaba Cloud account that calls the API operation.
    shared_ptr<string> stsRoleArn_ {};
    // The name of the subscription. The name must be 1 to 255 characters in length. It must start with a letter or a digit, and can contain only letters, digits, and hyphens (-). The name cannot start with mns-reserved-.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionName_ {};
    // The throttling policy.
    shared_ptr<string> tenantRateLimitPolicyShrink_ {};
    // The name of the topic. The name must be 1 to 255 characters in length. It must start with a letter or a digit, and can contain only letters, digits, and hyphens (-). The name cannot start with mns-reserved-.
    // 
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
