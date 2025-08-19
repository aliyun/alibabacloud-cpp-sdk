// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONBYTOPICRESPONSEBODYDATAPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBSCRIPTIONBYTOPICRESPONSEBODYDATAPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSubscriptionByTopicResponseBodyDataPageDataDlqPolicy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class ListSubscriptionByTopicResponseBodyDataPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubscriptionByTopicResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(FilterTag, filterTag_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(NotifyContentFormat, notifyContentFormat_);
      DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(TopicOwner, topicOwner_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubscriptionByTopicResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(FilterTag, filterTag_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(NotifyContentFormat, notifyContentFormat_);
      DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(SubscriptionName, subscriptionName_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(TopicOwner, topicOwner_);
    };
    ListSubscriptionByTopicResponseBodyDataPageData() = default ;
    ListSubscriptionByTopicResponseBodyDataPageData(const ListSubscriptionByTopicResponseBodyDataPageData &) = default ;
    ListSubscriptionByTopicResponseBodyDataPageData(ListSubscriptionByTopicResponseBodyDataPageData &&) = default ;
    ListSubscriptionByTopicResponseBodyDataPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubscriptionByTopicResponseBodyDataPageData() = default ;
    ListSubscriptionByTopicResponseBodyDataPageData& operator=(const ListSubscriptionByTopicResponseBodyDataPageData &) = default ;
    ListSubscriptionByTopicResponseBodyDataPageData& operator=(ListSubscriptionByTopicResponseBodyDataPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->dlqPolicy_ != nullptr && this->endpoint_ != nullptr && this->filterTag_ != nullptr && this->lastModifyTime_ != nullptr && this->notifyContentFormat_ != nullptr
        && this->notifyStrategy_ != nullptr && this->subscriptionName_ != nullptr && this->topicName_ != nullptr && this->topicOwner_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dlqPolicy Field Functions 
    bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
    void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
    inline const Models::ListSubscriptionByTopicResponseBodyDataPageDataDlqPolicy & dlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, Models::ListSubscriptionByTopicResponseBodyDataPageDataDlqPolicy) };
    inline Models::ListSubscriptionByTopicResponseBodyDataPageDataDlqPolicy dlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, Models::ListSubscriptionByTopicResponseBodyDataPageDataDlqPolicy) };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setDlqPolicy(const Models::ListSubscriptionByTopicResponseBodyDataPageDataDlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setDlqPolicy(Models::ListSubscriptionByTopicResponseBodyDataPageDataDlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // filterTag Field Functions 
    bool hasFilterTag() const { return this->filterTag_ != nullptr;};
    void deleteFilterTag() { this->filterTag_ = nullptr;};
    inline string filterTag() const { DARABONBA_PTR_GET_DEFAULT(filterTag_, "") };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setFilterTag(string filterTag) { DARABONBA_PTR_SET_VALUE(filterTag_, filterTag) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline int64_t lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // notifyContentFormat Field Functions 
    bool hasNotifyContentFormat() const { return this->notifyContentFormat_ != nullptr;};
    void deleteNotifyContentFormat() { this->notifyContentFormat_ = nullptr;};
    inline string notifyContentFormat() const { DARABONBA_PTR_GET_DEFAULT(notifyContentFormat_, "") };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setNotifyContentFormat(string notifyContentFormat) { DARABONBA_PTR_SET_VALUE(notifyContentFormat_, notifyContentFormat) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string notifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // subscriptionName Field Functions 
    bool hasSubscriptionName() const { return this->subscriptionName_ != nullptr;};
    void deleteSubscriptionName() { this->subscriptionName_ = nullptr;};
    inline string subscriptionName() const { DARABONBA_PTR_GET_DEFAULT(subscriptionName_, "") };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setSubscriptionName(string subscriptionName) { DARABONBA_PTR_SET_VALUE(subscriptionName_, subscriptionName) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // topicOwner Field Functions 
    bool hasTopicOwner() const { return this->topicOwner_ != nullptr;};
    void deleteTopicOwner() { this->topicOwner_ = nullptr;};
    inline string topicOwner() const { DARABONBA_PTR_GET_DEFAULT(topicOwner_, "") };
    inline ListSubscriptionByTopicResponseBodyDataPageData& setTopicOwner(string topicOwner) { DARABONBA_PTR_SET_VALUE(topicOwner_, topicOwner) };


  protected:
    // The time when the subscription was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The dead-letter queue policy.
    std::shared_ptr<Models::ListSubscriptionByTopicResponseBodyDataPageDataDlqPolicy> dlqPolicy_ = nullptr;
    // The endpoint to which the messages are pushed.
    std::shared_ptr<string> endpoint_ = nullptr;
    // The tag that is used to filter messages. Only the messages that are attached with the specified tag can be pushed.
    std::shared_ptr<string> filterTag_ = nullptr;
    // The time when the subscription was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lastModifyTime_ = nullptr;
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
    // The name of the subscription.
    std::shared_ptr<string> subscriptionName_ = nullptr;
    // The name of the topic.
    std::shared_ptr<string> topicName_ = nullptr;
    // The Alibaba Cloud account ID of the topic owner.
    std::shared_ptr<string> topicOwner_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
