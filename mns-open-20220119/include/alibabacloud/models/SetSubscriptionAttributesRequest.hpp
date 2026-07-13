// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSUBSCRIPTIONATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSUBSCRIPTIONATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
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
      DARABONBA_PTR_TO_JSON(StsRoleArn, stsRoleArn_);
      DARABONBA_PTR_TO_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(TenantRateLimitPolicy, tenantRateLimitPolicy_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, SetSubscriptionAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(StsRoleArn, stsRoleArn_);
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
      shared_ptr<bool> enabled_ {};
      shared_ptr<int32_t> maxReceivesPerSecond_ {};
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
      // The destination queue for dead-letter messages.
      shared_ptr<string> deadLetterTargetQueue_ {};
      // Whether to enable dead-letter message delivery.
      shared_ptr<bool> enabled_ {};
    };

    virtual bool empty() const override { return this->dlqPolicy_ == nullptr
        && this->notifyStrategy_ == nullptr && this->stsRoleArn_ == nullptr && this->subscriptionName_ == nullptr && this->tenantRateLimitPolicy_ == nullptr && this->topicName_ == nullptr; };
    // dlqPolicy Field Functions 
    bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
    void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
    inline const SetSubscriptionAttributesRequest::DlqPolicy & getDlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, SetSubscriptionAttributesRequest::DlqPolicy) };
    inline SetSubscriptionAttributesRequest::DlqPolicy getDlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, SetSubscriptionAttributesRequest::DlqPolicy) };
    inline SetSubscriptionAttributesRequest& setDlqPolicy(const SetSubscriptionAttributesRequest::DlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
    inline SetSubscriptionAttributesRequest& setDlqPolicy(SetSubscriptionAttributesRequest::DlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string getNotifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline SetSubscriptionAttributesRequest& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // stsRoleArn Field Functions 
    bool hasStsRoleArn() const { return this->stsRoleArn_ != nullptr;};
    void deleteStsRoleArn() { this->stsRoleArn_ = nullptr;};
    inline string getStsRoleArn() const { DARABONBA_PTR_GET_DEFAULT(stsRoleArn_, "") };
    inline SetSubscriptionAttributesRequest& setStsRoleArn(string stsRoleArn) { DARABONBA_PTR_SET_VALUE(stsRoleArn_, stsRoleArn) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string getSubscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline SetSubscriptionAttributesRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // tenantRateLimitPolicy Field Functions 
    bool hasTenantRateLimitPolicy() const { return this->tenantRateLimitPolicy_ != nullptr;};
    void deleteTenantRateLimitPolicy() { this->tenantRateLimitPolicy_ = nullptr;};
    inline const SetSubscriptionAttributesRequest::TenantRateLimitPolicy & getTenantRateLimitPolicy() const { DARABONBA_PTR_GET_CONST(tenantRateLimitPolicy_, SetSubscriptionAttributesRequest::TenantRateLimitPolicy) };
    inline SetSubscriptionAttributesRequest::TenantRateLimitPolicy getTenantRateLimitPolicy() { DARABONBA_PTR_GET(tenantRateLimitPolicy_, SetSubscriptionAttributesRequest::TenantRateLimitPolicy) };
    inline SetSubscriptionAttributesRequest& setTenantRateLimitPolicy(const SetSubscriptionAttributesRequest::TenantRateLimitPolicy & tenantRateLimitPolicy) { DARABONBA_PTR_SET_VALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };
    inline SetSubscriptionAttributesRequest& setTenantRateLimitPolicy(SetSubscriptionAttributesRequest::TenantRateLimitPolicy && tenantRateLimitPolicy) { DARABONBA_PTR_SET_RVALUE(tenantRateLimitPolicy_, tenantRateLimitPolicy) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline SetSubscriptionAttributesRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The dead-letter queue policy.
    shared_ptr<SetSubscriptionAttributesRequest::DlqPolicy> dlqPolicy_ {};
    // The retry policy for message delivery failures to the endpoint. Valid values:
    // 
    // - BACKOFF_RETRY: backoff retry.
    // 
    // - EXPONENTIAL_DECAY_RETRY: exponential decay retry.
    shared_ptr<string> notifyStrategy_ {};
    shared_ptr<string> stsRoleArn_ {};
    // The name of the subscription.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionName_ {};
    shared_ptr<SetSubscriptionAttributesRequest::TenantRateLimitPolicy> tenantRateLimitPolicy_ {};
    // The name of the topic.
    // 
    // This parameter is required.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
