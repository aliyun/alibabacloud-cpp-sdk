// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONATTRIBUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONATTRIBUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetSubscriptionAttributesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionAttributesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionAttributesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetSubscriptionAttributesRequest() = default ;
    GetSubscriptionAttributesRequest(const GetSubscriptionAttributesRequest &) = default ;
    GetSubscriptionAttributesRequest(GetSubscriptionAttributesRequest &&) = default ;
    GetSubscriptionAttributesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionAttributesRequest() = default ;
    GetSubscriptionAttributesRequest& operator=(const GetSubscriptionAttributesRequest &) = default ;
    GetSubscriptionAttributesRequest& operator=(GetSubscriptionAttributesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->subscriptionName_ != nullptr
        && this->topicName_ != nullptr; };
    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string subscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline GetSubscriptionAttributesRequest& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetSubscriptionAttributesRequest& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The name of the subscription.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscriptionName_ = nullptr;
    // The name of the topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
