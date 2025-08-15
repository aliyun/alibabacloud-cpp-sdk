// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICSUBSCRIPTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICSUBSCRIPTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListTopicSubscriptionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicSubscriptionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(consistency, consistency_);
      DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_TO_JSON(filterExpression, filterExpression_);
      DARABONBA_PTR_TO_JSON(filterExpressionType, filterExpressionType_);
      DARABONBA_PTR_TO_JSON(messageModel, messageModel_);
      DARABONBA_PTR_TO_JSON(subscriptionStatus, subscriptionStatus_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicSubscriptionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(consistency, consistency_);
      DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
      DARABONBA_PTR_FROM_JSON(filterExpression, filterExpression_);
      DARABONBA_PTR_FROM_JSON(filterExpressionType, filterExpressionType_);
      DARABONBA_PTR_FROM_JSON(messageModel, messageModel_);
      DARABONBA_PTR_FROM_JSON(subscriptionStatus, subscriptionStatus_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    ListTopicSubscriptionsResponseBodyData() = default ;
    ListTopicSubscriptionsResponseBodyData(const ListTopicSubscriptionsResponseBodyData &) = default ;
    ListTopicSubscriptionsResponseBodyData(ListTopicSubscriptionsResponseBodyData &&) = default ;
    ListTopicSubscriptionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicSubscriptionsResponseBodyData() = default ;
    ListTopicSubscriptionsResponseBodyData& operator=(const ListTopicSubscriptionsResponseBodyData &) = default ;
    ListTopicSubscriptionsResponseBodyData& operator=(ListTopicSubscriptionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consistency_ != nullptr
        && this->consumerGroupId_ != nullptr && this->filterExpression_ != nullptr && this->filterExpressionType_ != nullptr && this->messageModel_ != nullptr && this->subscriptionStatus_ != nullptr
        && this->topicName_ != nullptr; };
    // consistency Field Functions 
    bool hasConsistency() const { return this->consistency_ != nullptr;};
    void deleteConsistency() { this->consistency_ = nullptr;};
    inline string consistency() const { DARABONBA_PTR_GET_DEFAULT(consistency_, "") };
    inline ListTopicSubscriptionsResponseBodyData& setConsistency(string consistency) { DARABONBA_PTR_SET_VALUE(consistency_, consistency) };


    // consumerGroupId Field Functions 
    bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
    void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
    inline string consumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
    inline ListTopicSubscriptionsResponseBodyData& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


    // filterExpression Field Functions 
    bool hasFilterExpression() const { return this->filterExpression_ != nullptr;};
    void deleteFilterExpression() { this->filterExpression_ = nullptr;};
    inline string filterExpression() const { DARABONBA_PTR_GET_DEFAULT(filterExpression_, "") };
    inline ListTopicSubscriptionsResponseBodyData& setFilterExpression(string filterExpression) { DARABONBA_PTR_SET_VALUE(filterExpression_, filterExpression) };


    // filterExpressionType Field Functions 
    bool hasFilterExpressionType() const { return this->filterExpressionType_ != nullptr;};
    void deleteFilterExpressionType() { this->filterExpressionType_ = nullptr;};
    inline string filterExpressionType() const { DARABONBA_PTR_GET_DEFAULT(filterExpressionType_, "") };
    inline ListTopicSubscriptionsResponseBodyData& setFilterExpressionType(string filterExpressionType) { DARABONBA_PTR_SET_VALUE(filterExpressionType_, filterExpressionType) };


    // messageModel Field Functions 
    bool hasMessageModel() const { return this->messageModel_ != nullptr;};
    void deleteMessageModel() { this->messageModel_ = nullptr;};
    inline string messageModel() const { DARABONBA_PTR_GET_DEFAULT(messageModel_, "") };
    inline ListTopicSubscriptionsResponseBodyData& setMessageModel(string messageModel) { DARABONBA_PTR_SET_VALUE(messageModel_, messageModel) };


    // subscriptionStatus Field Functions 
    bool hasSubscriptionStatus() const { return this->subscriptionStatus_ != nullptr;};
    void deleteSubscriptionStatus() { this->subscriptionStatus_ = nullptr;};
    inline string subscriptionStatus() const { DARABONBA_PTR_GET_DEFAULT(subscriptionStatus_, "") };
    inline ListTopicSubscriptionsResponseBodyData& setSubscriptionStatus(string subscriptionStatus) { DARABONBA_PTR_SET_VALUE(subscriptionStatus_, subscriptionStatus) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListTopicSubscriptionsResponseBodyData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // Indicates whether message consumption is consistent. Valid values:
    // 
    // *   false: Unconsumed messages exist in the consumer group.
    // *   true: No unconsumed message exists in the consumer group.
    std::shared_ptr<string> consistency_ = nullptr;
    // The consumer group ID.
    std::shared_ptr<string> consumerGroupId_ = nullptr;
    // The filter expression.
    std::shared_ptr<string> filterExpression_ = nullptr;
    // The type of the filter expression. Valid values: SQL, TAG, and UNSPECIFIED. The value SQL indicates that messages are filtered by using SQL expressions. The value TAG indicates that messages are filtered by using tags. The value UNSPECIFIED indicates that no filter expression type is specified.
    std::shared_ptr<string> filterExpressionType_ = nullptr;
    // The consumption mode. Valid values: BROADCASTING and CLUSTERING.
    std::shared_ptr<string> messageModel_ = nullptr;
    // The subscription status. Valid values: ONLINE and OFFLINE.
    std::shared_ptr<string> subscriptionStatus_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
