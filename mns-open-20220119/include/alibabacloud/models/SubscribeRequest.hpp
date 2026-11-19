// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class SubscribeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubscribeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_TO_JSON(DmAttributes, dmAttributes_);
      DARABONBA_PTR_TO_JSON(DysmsAttributes, dysmsAttributes_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(KafkaAttributes, kafkaAttributes_);
      DARABONBA_PTR_TO_JSON(MessageTag, messageTag_);
      DARABONBA_PTR_TO_JSON(NotifyContentFormat, notifyContentFormat_);
      DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(PushType, pushType_);
      DARABONBA_PTR_TO_JSON(StsRoleArn, stsRoleArn_);
      DARABONBA_PTR_TO_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, SubscribeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_FROM_JSON(DmAttributes, dmAttributes_);
      DARABONBA_PTR_FROM_JSON(DysmsAttributes, dysmsAttributes_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(KafkaAttributes, kafkaAttributes_);
      DARABONBA_PTR_FROM_JSON(MessageTag, messageTag_);
      DARABONBA_PTR_FROM_JSON(NotifyContentFormat, notifyContentFormat_);
      DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(PushType, pushType_);
      DARABONBA_PTR_FROM_JSON(StsRoleArn, stsRoleArn_);
      DARABONBA_PTR_FROM_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    SubscribeRequest() = default ;
    SubscribeRequest(const SubscribeRequest &) = default ;
    SubscribeRequest(SubscribeRequest &&) = default ;
    SubscribeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubscribeRequest() = default ;
    SubscribeRequest& operator=(const SubscribeRequest &) = default ;
    SubscribeRequest& operator=(SubscribeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantRateLimitPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantRateLimitPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(MaxReceivesPerSecond, maxReceivesPerSecond_);
      };
      friend void from_json(const Darabonba::Json& j, TenantRateLimitPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(MaxReceivesPerSecond, maxReceivesPerSecond_);
      };
      TenantRateLimitPolicy() = default ;
      TenantRateLimitPolicy(const TenantRateLimitPolicy &) = default ;
      TenantRateLimitPolicy(TenantRateLimitPolicy &&) = default ;
      TenantRateLimitPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantRateLimitPolicy() = default ;
      TenantRateLimitPolicy& operator=(const TenantRateLimitPolicy &) = default ;
      TenantRateLimitPolicy& operator=(TenantRateLimitPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->maxReceivesPerSecond_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline TenantRateLimitPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // maxReceivesPerSecond Field Functions 
      bool hasMaxReceivesPerSecond() const { return this->maxReceivesPerSecond_ != nullptr;};
      void deleteMaxReceivesPerSecond() { this->maxReceivesPerSecond_ = nullptr;};
      inline int32_t getMaxReceivesPerSecond() const { DARABONBA_PTR_GET_DEFAULT(maxReceivesPerSecond_, 0) };
      inline TenantRateLimitPolicy& setMaxReceivesPerSecond(int32_t maxReceivesPerSecond) { DARABONBA_PTR_SET_VALUE(maxReceivesPerSecond_, maxReceivesPerSecond) };


    protected:
      // Specifies whether to enable the throttling policy. Valid values:
      // 
      // - true: enabled
      // - false: disabled (default)
      shared_ptr<bool> enabled_ {};
      // The maximum number of pushes or consumptions per second. The value must be a positive integer and is valid only when the PushType parameter is set to http or https. The specific minimum value varies by region.
      shared_ptr<int32_t> maxReceivesPerSecond_ {};
    };

    class KafkaAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KafkaAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(BusinessMode, businessMode_);
      };
      friend void from_json(const Darabonba::Json& j, KafkaAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(BusinessMode, businessMode_);
      };
      KafkaAttributes() = default ;
      KafkaAttributes(const KafkaAttributes &) = default ;
      KafkaAttributes(KafkaAttributes &&) = default ;
      KafkaAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KafkaAttributes() = default ;
      KafkaAttributes& operator=(const KafkaAttributes &) = default ;
      KafkaAttributes& operator=(KafkaAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->businessMode_ == nullptr; };
      // businessMode Field Functions 
      bool hasBusinessMode() const { return this->businessMode_ != nullptr;};
      void deleteBusinessMode() { this->businessMode_ = nullptr;};
      inline string getBusinessMode() const { DARABONBA_PTR_GET_DEFAULT(businessMode_, "") };
      inline KafkaAttributes& setBusinessMode(string businessMode) { DARABONBA_PTR_SET_VALUE(businessMode_, businessMode) };


    protected:
      // The Kafka push type is deprecated.
      shared_ptr<string> businessMode_ {};
    };

    class DysmsAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DysmsAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(SignName, signName_);
        DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
      };
      friend void from_json(const Darabonba::Json& j, DysmsAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(SignName, signName_);
        DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
      };
      DysmsAttributes() = default ;
      DysmsAttributes(const DysmsAttributes &) = default ;
      DysmsAttributes(DysmsAttributes &&) = default ;
      DysmsAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DysmsAttributes() = default ;
      DysmsAttributes& operator=(const DysmsAttributes &) = default ;
      DysmsAttributes& operator=(DysmsAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->signName_ == nullptr
        && this->templateCode_ == nullptr; };
      // signName Field Functions 
      bool hasSignName() const { return this->signName_ != nullptr;};
      void deleteSignName() { this->signName_ = nullptr;};
      inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
      inline DysmsAttributes& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline DysmsAttributes& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


    protected:
      // The name of the SMS signature.
      shared_ptr<string> signName_ {};
      // The code of the SMS template.
      shared_ptr<string> templateCode_ {};
    };

    class DmAttributes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DmAttributes& obj) { 
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(Subject, subject_);
      };
      friend void from_json(const Darabonba::Json& j, DmAttributes& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(Subject, subject_);
      };
      DmAttributes() = default ;
      DmAttributes(const DmAttributes &) = default ;
      DmAttributes(DmAttributes &&) = default ;
      DmAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DmAttributes() = default ;
      DmAttributes& operator=(const DmAttributes &) = default ;
      DmAttributes& operator=(DmAttributes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountName_ == nullptr
        && this->subject_ == nullptr; };
      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline DmAttributes& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // subject Field Functions 
      bool hasSubject() const { return this->subject_ != nullptr;};
      void deleteSubject() { this->subject_ = nullptr;};
      inline string getSubject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
      inline DmAttributes& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    protected:
      // The sender address.
      shared_ptr<string> accountName_ {};
      // The email subject.
      shared_ptr<string> subject_ {};
    };

    class DlqPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DlqPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      };
      friend void from_json(const Darabonba::Json& j, DlqPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(DeadLetterTargetQueue, deadLetterTargetQueue_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      };
      DlqPolicy() = default ;
      DlqPolicy(const DlqPolicy &) = default ;
      DlqPolicy(DlqPolicy &&) = default ;
      DlqPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DlqPolicy() = default ;
      DlqPolicy& operator=(const DlqPolicy &) = default ;
      DlqPolicy& operator=(DlqPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deadLetterTargetQueue_ == nullptr
        && this->enabled_ == nullptr; };
      // deadLetterTargetQueue Field Functions 
      bool hasDeadLetterTargetQueue() const { return this->deadLetterTargetQueue_ != nullptr;};
      void deleteDeadLetterTargetQueue() { this->deadLetterTargetQueue_ = nullptr;};
      inline string getDeadLetterTargetQueue() const { DARABONBA_PTR_GET_DEFAULT(deadLetterTargetQueue_, "") };
      inline DlqPolicy& setDeadLetterTargetQueue(string deadLetterTargetQueue) { DARABONBA_PTR_SET_VALUE(deadLetterTargetQueue_, deadLetterTargetQueue) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline DlqPolicy& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    protected:
      // The destination queue for dead-letter message delivery. The queue must already exist in the current region.
      shared_ptr<string> deadLetterTargetQueue_ {};
      // Specifies whether to enable dead-letter message delivery. Default value: false.
      shared_ptr<bool> enabled_ {};
    };

    virtual bool empty() const override { return this->dlqPolicy_ == nullptr
        && this->dmAttributes_ == nullptr && this->dysmsAttributes_ == nullptr && this->endpoint_ == nullptr && this->kafkaAttributes_ == nullptr && this->messageTag_ == nullptr
        && this->notifyContentFormat_ == nullptr && this->notifyStrategy_ == nullptr && this->pushType_ == nullptr && this->stsRoleArn_ == nullptr && this->subscriptionName_ == nullptr
        && this->tenantRateLimitPolicy_ == nullptr && this->topicName_ == nullptr; };
    // dlqPolicy Field Functions 
    bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
    void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
    inline const SubscribeRequest::DlqPolicy & getDlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, SubscribeRequest::DlqPolicy) };
    inline SubscribeRequest::DlqPolicy getDlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, SubscribeRequest::DlqPolicy) };
    inline SubscribeRequest& setDlqPolicy(const SubscribeRequest::DlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
    inline SubscribeRequest& setDlqPolicy(SubscribeRequest::DlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


    // dmAttributes Field Functions 
    bool hasDmAttributes() const { return this->dmAttributes_ != nullptr;};
    void deleteDmAttributes() { this->dmAttributes_ = nullptr;};
    inline const SubscribeRequest::DmAttributes & getDmAttributes() const { DARABONBA_PTR_GET_CONST(dmAttributes_, SubscribeRequest::DmAttributes) };
    inline SubscribeRequest::DmAttributes getDmAttributes() { DARABONBA_PTR_GET(dmAttributes_, SubscribeRequest::DmAttributes) };
    inline SubscribeRequest& setDmAttributes(const SubscribeRequest::DmAttributes & dmAttributes) { DARABONBA_PTR_SET_VALUE(dmAttributes_, dmAttributes) };
    inline SubscribeRequest& setDmAttributes(SubscribeRequest::DmAttributes && dmAttributes) { DARABONBA_PTR_SET_RVALUE(dmAttributes_, dmAttributes) };


    // dysmsAttributes Field Functions 
    bool hasDysmsAttributes() const { return this->dysmsAttributes_ != nullptr;};
    void deleteDysmsAttributes() { this->dysmsAttributes_ = nullptr;};
    inline const SubscribeRequest::DysmsAttributes & getDysmsAttributes() const { DARABONBA_PTR_GET_CONST(dysmsAttributes_, SubscribeRequest::DysmsAttributes) };
    inline SubscribeRequest::DysmsAttributes getDysmsAttributes() { DARABONBA_PTR_GET(dysmsAttributes_, SubscribeRequest::DysmsAttributes) };
    inline SubscribeRequest& setDysmsAttributes(const SubscribeRequest::DysmsAttributes & dysmsAttributes) { DARABONBA_PTR_SET_VALUE(dysmsAttributes_, dysmsAttributes) };
    inline SubscribeRequest& setDysmsAttributes(SubscribeRequest::DysmsAttributes && dysmsAttributes) { DARABONBA_PTR_SET_RVALUE(dysmsAttributes_, dysmsAttributes) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SubscribeRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // kafkaAttributes Field Functions 
    bool hasKafkaAttributes() const { return this->kafkaAttributes_ != nullptr;};
    void deleteKafkaAttributes() { this->kafkaAttributes_ = nullptr;};
    inline const SubscribeRequest::KafkaAttributes & getKafkaAttributes() const { DARABONBA_PTR_GET_CONST(kafkaAttributes_, SubscribeRequest::KafkaAttributes) };
    inline SubscribeRequest::KafkaAttributes getKafkaAttributes() { DARABONBA_PTR_GET(kafkaAttributes_, SubscribeRequest::KafkaAttributes) };
    inline SubscribeRequest& setKafkaAttributes(const SubscribeRequest::KafkaAttributes & kafkaAttributes) { DARABONBA_PTR_SET_VALUE(kafkaAttributes_, kafkaAttributes) };
    inline SubscribeRequest& setKafkaAttributes(SubscribeRequest::KafkaAttributes && kafkaAttributes) { DARABONBA_PTR_SET_RVALUE(kafkaAttributes_, kafkaAttributes) };


    // messageTag Field Functions 
    bool hasMessageTag() const { return this->messageTag_ != nullptr;};
    void deleteMessageTag() { this->messageTag_ = nullptr;};
    inline string getMessageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
    inline SubscribeRequest& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


    // notifyContentFormat Field Functions 
    bool hasNotifyContentFormat() const { return this->notifyContentFormat_ != nullptr;};
    void deleteNotifyContentFormat() { this->notifyContentFormat_ = nullptr;};
    inline string getNotifyContentFormat() const { DARABONBA_PTR_GET_DEFAULT(notifyContentFormat_, "") };
    inline SubscribeRequest& setNotifyContentFormat(string notifyContentFormat) { DARABONBA_PTR_SET_VALUE(notifyContentFormat_, notifyContentFormat) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string getNotifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline SubscribeRequest& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string getPushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline SubscribeRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // stsRoleArn Field Functions 
    bool hasStsRoleArn() const { return this->stsRoleArn_ != nullptr;};
    void deleteStsRoleArn() { this->stsRoleArn_ = nullptr;};
    inline string getStsRoleArn() const { DARABONBA_PTR_GET_DEFAULT(stsRoleArn_, "") };
    inline SubscribeRequest& setStsRoleArn(string stsRoleArn) { DARABONBA_PTR_SET_VALUE(stsRoleArn_, stsRoleArn) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string getSubscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline SubscribeRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // tenantRateLimitPolicy Field Functions 
    bool hasTenantRateLimitPolicy() const { return this->tenantRateLimitPolicy_ != nullptr;};
    void deleteTenantRateLimitPolicy() { this->tenantRateLimitPolicy_ = nullptr;};
    inline const SubscribeRequest::TenantRateLimitPolicy & getTenantRateLimitPolicy() const { DARABONBA_PTR_GET_CONST(tenantRateLimitPolicy_, SubscribeRequest::TenantRateLimitPolicy) };
    inline SubscribeRequest::TenantRateLimitPolicy getTenantRateLimitPolicy() { DARABONBA_PTR_GET(tenantRateLimitPolicy_, SubscribeRequest::TenantRateLimitPolicy) };
    inline SubscribeRequest& setTenantRateLimitPolicy(const SubscribeRequest::TenantRateLimitPolicy & tenantRateLimitPolicy) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };
    inline SubscribeRequest& setTenantRateLimitPolicy(SubscribeRequest::TenantRateLimitPolicy && tenantRateLimitPolicy) { DARABONBA_PTR_SET_RVALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline SubscribeRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The dead-letter queue policy.
    shared_ptr<SubscribeRequest::DlqPolicy> dlqPolicy_ {};
    // The attributes for Direct Mail push. This parameter is required when the PushType parameter is set to dm. The value is in JSON format and contains the following fields:
    // 
    // - AccountName: the sender address, which is the sender address configured in Direct Mail, such as notify@example.com.
    // - Subject: the email subject.
    shared_ptr<SubscribeRequest::DmAttributes> dmAttributes_ {};
    // The attributes for SMS push. This parameter is required when the PushType parameter is set to alisms. The value is in JSON format and contains the following fields:
    // 
    // - TemplateCode: the code of the SMS template, which can be obtained from the SMS console.
    // - SignName: the name of the SMS signature.
    shared_ptr<SubscribeRequest::DysmsAttributes> dysmsAttributes_ {};
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
    shared_ptr<SubscribeRequest::KafkaAttributes> kafkaAttributes_ {};
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
    shared_ptr<SubscribeRequest::TenantRateLimitPolicy> tenantRateLimitPolicy_ {};
    // The name of the topic. The name must be 1 to 255 characters in length. It must start with a letter or a digit, and can contain only letters, digits, and hyphens (-). The name cannot start with mns-reserved-.
    // 
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
