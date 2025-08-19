// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBSCRIBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBSCRIBEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubscribeRequestDlqPolicy.hpp>
#include <alibabacloud/models/SubscribeRequestDmAttributes.hpp>
#include <alibabacloud/models/SubscribeRequestDysmsAttributes.hpp>
#include <alibabacloud/models/SubscribeRequestKafkaAttributes.hpp>
#include <alibabacloud/models/SubscribeRequestTenantRateLimitPolicy.hpp>
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
    virtual bool empty() const override { this->dlqPolicy_ != nullptr
        && this->dmAttributes_ != nullptr && this->dysmsAttributes_ != nullptr && this->endpoint_ != nullptr && this->kafkaAttributes_ != nullptr && this->messageTag_ != nullptr
        && this->notifyContentFormat_ != nullptr && this->notifyStrategy_ != nullptr && this->pushType_ != nullptr && this->stsRoleArn_ != nullptr && this->subscriptionName_ != nullptr
        && this->tenantRateLimitPolicy_ != nullptr && this->topicName_ != nullptr; };
    // dlqPolicy Field Functions 
    bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
    void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
    inline const SubscribeRequestDlqPolicy & dlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, SubscribeRequestDlqPolicy) };
    inline SubscribeRequestDlqPolicy dlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, SubscribeRequestDlqPolicy) };
    inline SubscribeRequest& setDlqPolicy(const SubscribeRequestDlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
    inline SubscribeRequest& setDlqPolicy(SubscribeRequestDlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


    // dmAttributes Field Functions 
    bool hasDmAttributes() const { return this->dmAttributes_ != nullptr;};
    void deleteDmAttributes() { this->dmAttributes_ = nullptr;};
    inline const SubscribeRequestDmAttributes & dmAttributes() const { DARABONBA_PTR_GET_CONST(dmAttributes_, SubscribeRequestDmAttributes) };
    inline SubscribeRequestDmAttributes dmAttributes() { DARABONBA_PTR_GET(dmAttributes_, SubscribeRequestDmAttributes) };
    inline SubscribeRequest& setDmAttributes(const SubscribeRequestDmAttributes & dmAttributes) { DARABONBA_PTR_SET_VALUE(dmAttributes_, dmAttributes) };
    inline SubscribeRequest& setDmAttributes(SubscribeRequestDmAttributes && dmAttributes) { DARABONBA_PTR_SET_RVALUE(dmAttributes_, dmAttributes) };


    // dysmsAttributes Field Functions 
    bool hasDysmsAttributes() const { return this->dysmsAttributes_ != nullptr;};
    void deleteDysmsAttributes() { this->dysmsAttributes_ = nullptr;};
    inline const SubscribeRequestDysmsAttributes & dysmsAttributes() const { DARABONBA_PTR_GET_CONST(dysmsAttributes_, SubscribeRequestDysmsAttributes) };
    inline SubscribeRequestDysmsAttributes dysmsAttributes() { DARABONBA_PTR_GET(dysmsAttributes_, SubscribeRequestDysmsAttributes) };
    inline SubscribeRequest& setDysmsAttributes(const SubscribeRequestDysmsAttributes & dysmsAttributes) { DARABONBA_PTR_SET_VALUE(dysmsAttributes_, dysmsAttributes) };
    inline SubscribeRequest& setDysmsAttributes(SubscribeRequestDysmsAttributes && dysmsAttributes) { DARABONBA_PTR_SET_RVALUE(dysmsAttributes_, dysmsAttributes) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline SubscribeRequest& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // kafkaAttributes Field Functions 
    bool hasKafkaAttributes() const { return this->kafkaAttributes_ != nullptr;};
    void deleteKafkaAttributes() { this->kafkaAttributes_ = nullptr;};
    inline const SubscribeRequestKafkaAttributes & kafkaAttributes() const { DARABONBA_PTR_GET_CONST(kafkaAttributes_, SubscribeRequestKafkaAttributes) };
    inline SubscribeRequestKafkaAttributes kafkaAttributes() { DARABONBA_PTR_GET(kafkaAttributes_, SubscribeRequestKafkaAttributes) };
    inline SubscribeRequest& setKafkaAttributes(const SubscribeRequestKafkaAttributes & kafkaAttributes) { DARABONBA_PTR_SET_VALUE(kafkaAttributes_, kafkaAttributes) };
    inline SubscribeRequest& setKafkaAttributes(SubscribeRequestKafkaAttributes && kafkaAttributes) { DARABONBA_PTR_SET_RVALUE(kafkaAttributes_, kafkaAttributes) };


    // messageTag Field Functions 
    bool hasMessageTag() const { return this->messageTag_ != nullptr;};
    void deleteMessageTag() { this->messageTag_ = nullptr;};
    inline string messageTag() const { DARABONBA_PTR_GET_DEFAULT(messageTag_, "") };
    inline SubscribeRequest& setMessageTag(string messageTag) { DARABONBA_PTR_SET_VALUE(messageTag_, messageTag) };


    // notifyContentFormat Field Functions 
    bool hasNotifyContentFormat() const { return this->notifyContentFormat_ != nullptr;};
    void deleteNotifyContentFormat() { this->notifyContentFormat_ = nullptr;};
    inline string notifyContentFormat() const { DARABONBA_PTR_GET_DEFAULT(notifyContentFormat_, "") };
    inline SubscribeRequest& setNotifyContentFormat(string notifyContentFormat) { DARABONBA_PTR_SET_VALUE(notifyContentFormat_, notifyContentFormat) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string notifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline SubscribeRequest& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // pushType Field Functions 
    bool hasPushType() const { return this->pushType_ != nullptr;};
    void deletePushType() { this->pushType_ = nullptr;};
    inline string pushType() const { DARABONBA_PTR_GET_DEFAULT(pushType_, "") };
    inline SubscribeRequest& setPushType(string pushType) { DARABONBA_PTR_SET_VALUE(pushType_, pushType) };


    // stsRoleArn Field Functions 
    bool hasStsRoleArn() const { return this->stsRoleArn_ != nullptr;};
    void deleteStsRoleArn() { this->stsRoleArn_ = nullptr;};
    inline string stsRoleArn() const { DARABONBA_PTR_GET_DEFAULT(stsRoleArn_, "") };
    inline SubscribeRequest& setStsRoleArn(string stsRoleArn) { DARABONBA_PTR_SET_VALUE(stsRoleArn_, stsRoleArn) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string subscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline SubscribeRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // tenantRateLimitPolicy Field Functions 
    bool hasTenantRateLimitPolicy() const { return this->tenantRateLimitPolicy_ != nullptr;};
    void deleteTenantRateLimitPolicy() { this->tenantRateLimitPolicy_ = nullptr;};
    inline const SubscribeRequestTenantRateLimitPolicy & tenantRateLimitPolicy() const { DARABONBA_PTR_GET_CONST(tenantRateLimitPolicy_, SubscribeRequestTenantRateLimitPolicy) };
    inline SubscribeRequestTenantRateLimitPolicy tenantRateLimitPolicy() { DARABONBA_PTR_GET(tenantRateLimitPolicy_, SubscribeRequestTenantRateLimitPolicy) };
    inline SubscribeRequest& setTenantRateLimitPolicy(const SubscribeRequestTenantRateLimitPolicy & tenantRateLimitPolicy) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };
    inline SubscribeRequest& setTenantRateLimitPolicy(SubscribeRequestTenantRateLimitPolicy && tenantRateLimitPolicy) { DARABONBA_PTR_SET_RVALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline SubscribeRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The dead-letter queue policy.
    std::shared_ptr<SubscribeRequestDlqPolicy> dlqPolicy_ = nullptr;
    std::shared_ptr<SubscribeRequestDmAttributes> dmAttributes_ = nullptr;
    std::shared_ptr<SubscribeRequestDysmsAttributes> dysmsAttributes_ = nullptr;
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
    std::shared_ptr<SubscribeRequestKafkaAttributes> kafkaAttributes_ = nullptr;
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
    std::shared_ptr<SubscribeRequestTenantRateLimitPolicy> tenantRateLimitPolicy_ = nullptr;
    // The name of the topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
