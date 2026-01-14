// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSUMERGROUPSUBSCRIPTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSUMERGROUPSUBSCRIPTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ListConsumerGroupSubscriptionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsumerGroupSubscriptionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(topicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsumerGroupSubscriptionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(topicName, topicName_);
    };
    ListConsumerGroupSubscriptionsRequest() = default ;
    ListConsumerGroupSubscriptionsRequest(const ListConsumerGroupSubscriptionsRequest &) = default ;
    ListConsumerGroupSubscriptionsRequest(ListConsumerGroupSubscriptionsRequest &&) = default ;
    ListConsumerGroupSubscriptionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsumerGroupSubscriptionsRequest() = default ;
    ListConsumerGroupSubscriptionsRequest& operator=(const ListConsumerGroupSubscriptionsRequest &) = default ;
    ListConsumerGroupSubscriptionsRequest& operator=(ListConsumerGroupSubscriptionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->topicName_ == nullptr; };
    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListConsumerGroupSubscriptionsRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The topic name. If you do not specify this parameter, all subscriptions of the consumer group are queried.
    shared_ptr<string> topicName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
