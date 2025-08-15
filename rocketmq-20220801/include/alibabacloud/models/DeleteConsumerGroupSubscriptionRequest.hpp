// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONSUMERGROUPSUBSCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECONSUMERGROUPSUBSCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class DeleteConsumerGroupSubscriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConsumerGroupSubscriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(filterExpression, filterExpression_);
      DARABONBA_PTR_TO_JSON(filterType, filterType_);
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConsumerGroupSubscriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(filterExpression, filterExpression_);
      DARABONBA_PTR_FROM_JSON(filterType, filterType_);
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    DeleteConsumerGroupSubscriptionRequest() = default ;
    DeleteConsumerGroupSubscriptionRequest(const DeleteConsumerGroupSubscriptionRequest &) = default ;
    DeleteConsumerGroupSubscriptionRequest(DeleteConsumerGroupSubscriptionRequest &&) = default ;
    DeleteConsumerGroupSubscriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConsumerGroupSubscriptionRequest() = default ;
    DeleteConsumerGroupSubscriptionRequest& operator=(const DeleteConsumerGroupSubscriptionRequest &) = default ;
    DeleteConsumerGroupSubscriptionRequest& operator=(DeleteConsumerGroupSubscriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filterExpression_ != nullptr
        && this->filterType_ != nullptr && this->topicName_ != nullptr; };
    // filterExpression Field Functions 
    bool hasFilterExpression() const { return this->filterExpression_ != nullptr;};
    void deleteFilterExpression() { this->filterExpression_ = nullptr;};
    inline string filterExpression() const { DARABONBA_PTR_GET_DEFAULT(filterExpression_, "") };
    inline DeleteConsumerGroupSubscriptionRequest& setFilterExpression(string filterExpression) { DARABONBA_PTR_SET_VALUE(filterExpression_, filterExpression) };


    // filterType Field Functions 
    bool hasFilterType() const { return this->filterType_ != nullptr;};
    void deleteFilterType() { this->filterType_ = nullptr;};
    inline string filterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
    inline DeleteConsumerGroupSubscriptionRequest& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline DeleteConsumerGroupSubscriptionRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The filter expression.
    // 
    // This parameter is required.
    std::shared_ptr<string> filterExpression_ = nullptr;
    // The type of the filter expression. Valid values:
    // 
    // *   SQL: filters messages by using SQL expressions.
    // *   TAG: filters messages by using tags.
    // 
    // This parameter is required.
    std::shared_ptr<string> filterType_ = nullptr;
    // The topic name.
    // 
    // This parameter is required.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
