// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERGROUPSUBSCRIPTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERGROUPSUBSCRIPTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListConsumerGroupSubscriptionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerGroupSubscriptionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(consistency, consistency_);
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(filterExpression, filterExpression_);
      DARABONBA_PTR_TO_JSON(filterExpressionType, filterExpressionType_);
      DARABONBA_PTR_TO_JSON(messageModel, messageModel_);
      DARABONBA_PTR_TO_JSON(subscriptionStatus, subscriptionStatus_);
      DARABONBA_PTR_TO_JSON(topicCreated, topicCreated_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerGroupSubscriptionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(consistency, consistency_);
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(filterExpression, filterExpression_);
      DARABONBA_PTR_FROM_JSON(filterExpressionType, filterExpressionType_);
      DARABONBA_PTR_FROM_JSON(messageModel, messageModel_);
      DARABONBA_PTR_FROM_JSON(subscriptionStatus, subscriptionStatus_);
      DARABONBA_PTR_FROM_JSON(topicCreated, topicCreated_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    ListConsumerGroupSubscriptionsResponseBodyData() = default ;
    ListConsumerGroupSubscriptionsResponseBodyData(const ListConsumerGroupSubscriptionsResponseBodyData &) = default ;
    ListConsumerGroupSubscriptionsResponseBodyData(ListConsumerGroupSubscriptionsResponseBodyData &&) = default ;
    ListConsumerGroupSubscriptionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerGroupSubscriptionsResponseBodyData() = default ;
    ListConsumerGroupSubscriptionsResponseBodyData& operator=(const ListConsumerGroupSubscriptionsResponseBodyData &) = default ;
    ListConsumerGroupSubscriptionsResponseBodyData& operator=(ListConsumerGroupSubscriptionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consistency_ == nullptr
        && return this->consumerGroupId_ == nullptr && return this->filterExpression_ == nullptr && return this->filterExpressionType_ == nullptr && return this->messageModel_ == nullptr && return this->subscriptionStatus_ == nullptr
        && return this->topicCreated_ == nullptr && return this->topicName_ == nullptr; };
    // consistency Field Functions 
    bool hasConsistency() const { return this->consistency_ != nullptr;};
    void deleteConsistency() { this->consistency_ = nullptr;};
    inline bool consistency() const { DARABONBA_PTR_GET_DEFAULT(consistency_, false) };
    inline ListConsumerGroupSubscriptionsResponseBodyData& setConsistency(bool consistency) { DARABONBA_PTR_SET_VALUE(consistency_, consistency) };


    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline ListConsumerGroupSubscriptionsResponseBodyData& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // filterExpression Field Functions 
    bool hasFilterExpression() const { return this->filterExpression_ != nullptr;};
    void deleteFilterExpression() { this->filterExpression_ = nullptr;};
    inline string filterExpression() const { DARABONBA_PTR_GET_DEFAULT(filterExpression_, "") };
    inline ListConsumerGroupSubscriptionsResponseBodyData& setFilterExpression(string filterExpression) { DARABONBA_PTR_SET_VALUE(filterExpression_, filterExpression) };


    // filterExpressionType Field Functions 
    bool hasFilterExpressionType() const { return this->filterExpressionType_ != nullptr;};
    void deleteFilterExpressionType() { this->filterExpressionType_ = nullptr;};
    inline string filterExpressionType() const { DARABONBA_PTR_GET_DEFAULT(filterExpressionType_, "") };
    inline ListConsumerGroupSubscriptionsResponseBodyData& setFilterExpressionType(string filterExpressionType) { DARABONBA_PTR_SET_VALUE(filterExpressionType_, filterExpressionType) };


    // messageModel Field Functions 
    bool hasMessageModel() const { return this->messageModel_ != nullptr;};
    void deleteMessageModel() { this->messageModel_ = nullptr;};
    inline string messageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
    inline ListConsumerGroupSubscriptionsResponseBodyData& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


    // subscriptionStatus Field Functions 
    bool hasSubscriptionStatus() const { return this->subscriptionStatus_ != nullptr;};
    void deleteSubscriptionStatus() { this->subscriptionStatus_ = nullptr;};
    inline string subscriptionStatus() const { DARABONBA_PTR_GET_DEFAULT(subscriptionStatus_, "") };
    inline ListConsumerGroupSubscriptionsResponseBodyData& setSubscriptionStatus(string subscriptionStatus) { DARABONBA_PTR_SET_VALUE(subscriptionStatus_, subscriptionStatus) };


    // topicCreated Field Functions 
    bool hasTopicCreated() const { return this->topicCreated_ != nullptr;};
    void deleteTopicCreated() { this->topicCreated_ = nullptr;};
    inline bool topicCreated() const { DARABONBA_PTR_GET_DEFAULT(topicCreated_, false) };
    inline ListConsumerGroupSubscriptionsResponseBodyData& setTopicCreated(bool topicCreated) { DARABONBA_PTR_SET_VALUE(topicCreated_, topicCreated) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListConsumerGroupSubscriptionsResponseBodyData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // Indicates whether message consumption is consistent. Valid values:
    // 
    // *   false: Unconsumed messages exist in the consumer group.
    // *   true: No unconsumed message exists in the consumer group.
    std::shared_ptr<bool> consistency_ = nullptr;
    // The ID of the consumer group.
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // The filter expression.
    std::shared_ptr<string> filterExpression_ = nullptr;
    // The type of the filter expression. Valid values:
    // 
    // *   SQL: filters messages by using SQL expressions.
    // *   TAG: filters messages by using tags.
    std::shared_ptr<string> filterExpressionType_ = nullptr;
    // The consumption mode of the consumer group. Valid values:
    // 
    // *   BROADCASTING: broadcasting consumption
    // *   CLUSTERING: clustering consumption
    std::shared_ptr<string> messageModel_ = nullptr;
    // The subscription status. Valid values:
    // 
    // *   ONLINE: The consumer group is online. If the consumer group contains multiple consumers, this value is returned as long as one of the consumers is online.
    // *   OFFLINE: The consumer group is offline. If the consumer group contains multiple consumers, this value is returned only if all consumers are offline.
    std::shared_ptr<string> subscriptionStatus_ = nullptr;
    // Indicates whether the topic is created.
    std::shared_ptr<bool> topicCreated_ = nullptr;
    // The topic to which the consumer group subscribes.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
