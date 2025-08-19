// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUERESPONSEBODYDATAPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUERESPONSEBODYDATAPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListQueueResponseBodyDataPageDataDlqPolicy.hpp>
#include <vector>
#include <alibabacloud/models/ListQueueResponseBodyDataPageDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class ListQueueResponseBodyDataPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveMessages, activeMessages_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DelayMessages, delayMessages_);
      DARABONBA_PTR_TO_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_TO_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_TO_JSON(InactiveMessages, inactiveMessages_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(LoggingEnabled, loggingEnabled_);
      DARABONBA_PTR_TO_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_TO_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_TO_JSON(QueueName, queueName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveMessages, activeMessages_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DelayMessages, delayMessages_);
      DARABONBA_PTR_FROM_JSON(DelaySeconds, delaySeconds_);
      DARABONBA_PTR_FROM_JSON(DlqPolicy, dlqPolicy_);
      DARABONBA_PTR_FROM_JSON(InactiveMessages, inactiveMessages_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(LoggingEnabled, loggingEnabled_);
      DARABONBA_PTR_FROM_JSON(MaximumMessageSize, maximumMessageSize_);
      DARABONBA_PTR_FROM_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(PollingWaitSeconds, pollingWaitSeconds_);
      DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VisibilityTimeout, visibilityTimeout_);
    };
    ListQueueResponseBodyDataPageData() = default ;
    ListQueueResponseBodyDataPageData(const ListQueueResponseBodyDataPageData &) = default ;
    ListQueueResponseBodyDataPageData(ListQueueResponseBodyDataPageData &&) = default ;
    ListQueueResponseBodyDataPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueResponseBodyDataPageData() = default ;
    ListQueueResponseBodyDataPageData& operator=(const ListQueueResponseBodyDataPageData &) = default ;
    ListQueueResponseBodyDataPageData& operator=(ListQueueResponseBodyDataPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeMessages_ != nullptr
        && this->createTime_ != nullptr && this->delayMessages_ != nullptr && this->delaySeconds_ != nullptr && this->dlqPolicy_ != nullptr && this->inactiveMessages_ != nullptr
        && this->lastModifyTime_ != nullptr && this->loggingEnabled_ != nullptr && this->maximumMessageSize_ != nullptr && this->messageRetentionPeriod_ != nullptr && this->pollingWaitSeconds_ != nullptr
        && this->queueName_ != nullptr && this->tags_ != nullptr && this->visibilityTimeout_ != nullptr; };
    // activeMessages Field Functions 
    bool hasActiveMessages() const { return this->activeMessages_ != nullptr;};
    void deleteActiveMessages() { this->activeMessages_ = nullptr;};
    inline int64_t activeMessages() const { DARABONBA_PTR_GET_DEFAULT(activeMessages_, 0L) };
    inline ListQueueResponseBodyDataPageData& setActiveMessages(int64_t activeMessages) { DARABONBA_PTR_SET_VALUE(activeMessages_, activeMessages) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListQueueResponseBodyDataPageData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // delayMessages Field Functions 
    bool hasDelayMessages() const { return this->delayMessages_ != nullptr;};
    void deleteDelayMessages() { this->delayMessages_ = nullptr;};
    inline int64_t delayMessages() const { DARABONBA_PTR_GET_DEFAULT(delayMessages_, 0L) };
    inline ListQueueResponseBodyDataPageData& setDelayMessages(int64_t delayMessages) { DARABONBA_PTR_SET_VALUE(delayMessages_, delayMessages) };


    // delaySeconds Field Functions 
    bool hasDelaySeconds() const { return this->delaySeconds_ != nullptr;};
    void deleteDelaySeconds() { this->delaySeconds_ = nullptr;};
    inline int64_t delaySeconds() const { DARABONBA_PTR_GET_DEFAULT(delaySeconds_, 0L) };
    inline ListQueueResponseBodyDataPageData& setDelaySeconds(int64_t delaySeconds) { DARABONBA_PTR_SET_VALUE(delaySeconds_, delaySeconds) };


    // dlqPolicy Field Functions 
    bool hasDlqPolicy() const { return this->dlqPolicy_ != nullptr;};
    void deleteDlqPolicy() { this->dlqPolicy_ = nullptr;};
    inline const Models::ListQueueResponseBodyDataPageDataDlqPolicy & dlqPolicy() const { DARABONBA_PTR_GET_CONST(dlqPolicy_, Models::ListQueueResponseBodyDataPageDataDlqPolicy) };
    inline Models::ListQueueResponseBodyDataPageDataDlqPolicy dlqPolicy() { DARABONBA_PTR_GET(dlqPolicy_, Models::ListQueueResponseBodyDataPageDataDlqPolicy) };
    inline ListQueueResponseBodyDataPageData& setDlqPolicy(const Models::ListQueueResponseBodyDataPageDataDlqPolicy & dlqPolicy) { DARABONBA_PTR_SET_VALUE(dlqPolicy_, dlqPolicy) };
    inline ListQueueResponseBodyDataPageData& setDlqPolicy(Models::ListQueueResponseBodyDataPageDataDlqPolicy && dlqPolicy) { DARABONBA_PTR_SET_RVALUE(dlqPolicy_, dlqPolicy) };


    // inactiveMessages Field Functions 
    bool hasInactiveMessages() const { return this->inactiveMessages_ != nullptr;};
    void deleteInactiveMessages() { this->inactiveMessages_ = nullptr;};
    inline int64_t inactiveMessages() const { DARABONBA_PTR_GET_DEFAULT(inactiveMessages_, 0L) };
    inline ListQueueResponseBodyDataPageData& setInactiveMessages(int64_t inactiveMessages) { DARABONBA_PTR_SET_VALUE(inactiveMessages_, inactiveMessages) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline int64_t lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
    inline ListQueueResponseBodyDataPageData& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // loggingEnabled Field Functions 
    bool hasLoggingEnabled() const { return this->loggingEnabled_ != nullptr;};
    void deleteLoggingEnabled() { this->loggingEnabled_ = nullptr;};
    inline bool loggingEnabled() const { DARABONBA_PTR_GET_DEFAULT(loggingEnabled_, false) };
    inline ListQueueResponseBodyDataPageData& setLoggingEnabled(bool loggingEnabled) { DARABONBA_PTR_SET_VALUE(loggingEnabled_, loggingEnabled) };


    // maximumMessageSize Field Functions 
    bool hasMaximumMessageSize() const { return this->maximumMessageSize_ != nullptr;};
    void deleteMaximumMessageSize() { this->maximumMessageSize_ = nullptr;};
    inline int64_t maximumMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maximumMessageSize_, 0L) };
    inline ListQueueResponseBodyDataPageData& setMaximumMessageSize(int64_t maximumMessageSize) { DARABONBA_PTR_SET_VALUE(maximumMessageSize_, maximumMessageSize) };


    // messageRetentionPeriod Field Functions 
    bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
    void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
    inline int64_t messageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
    inline ListQueueResponseBodyDataPageData& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


    // pollingWaitSeconds Field Functions 
    bool hasPollingWaitSeconds() const { return this->pollingWaitSeconds_ != nullptr;};
    void deletePollingWaitSeconds() { this->pollingWaitSeconds_ = nullptr;};
    inline int64_t pollingWaitSeconds() const { DARABONBA_PTR_GET_DEFAULT(pollingWaitSeconds_, 0L) };
    inline ListQueueResponseBodyDataPageData& setPollingWaitSeconds(int64_t pollingWaitSeconds) { DARABONBA_PTR_SET_VALUE(pollingWaitSeconds_, pollingWaitSeconds) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline ListQueueResponseBodyDataPageData& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListQueueResponseBodyDataPageDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListQueueResponseBodyDataPageDataTags>) };
    inline vector<Models::ListQueueResponseBodyDataPageDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListQueueResponseBodyDataPageDataTags>) };
    inline ListQueueResponseBodyDataPageData& setTags(const vector<Models::ListQueueResponseBodyDataPageDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListQueueResponseBodyDataPageData& setTags(vector<Models::ListQueueResponseBodyDataPageDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // visibilityTimeout Field Functions 
    bool hasVisibilityTimeout() const { return this->visibilityTimeout_ != nullptr;};
    void deleteVisibilityTimeout() { this->visibilityTimeout_ = nullptr;};
    inline int64_t visibilityTimeout() const { DARABONBA_PTR_GET_DEFAULT(visibilityTimeout_, 0L) };
    inline ListQueueResponseBodyDataPageData& setVisibilityTimeout(int64_t visibilityTimeout) { DARABONBA_PTR_SET_VALUE(visibilityTimeout_, visibilityTimeout) };


  protected:
    // The total number of messages that are in the Active state in the queue. The value is an approximate number. Default value: 0. We recommend that you do not use the return value and that you call CloudMonitor API operations to query the metric value.
    std::shared_ptr<int64_t> activeMessages_ = nullptr;
    // The time when the queue was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The total number of the messages that are in the Delayed state in the queue. The value is an approximate number. Default value: 0. We recommend that you do not use the return value and that you call CloudMonitor API operations to query the metric value.
    std::shared_ptr<int64_t> delayMessages_ = nullptr;
    // The period after which all messages sent to the queue are consumed. Unit: seconds.
    std::shared_ptr<int64_t> delaySeconds_ = nullptr;
    // The dead-letter queue policy.
    std::shared_ptr<Models::ListQueueResponseBodyDataPageDataDlqPolicy> dlqPolicy_ = nullptr;
    // The total number of the messages that are in the Inactive state in the queue. The value is an approximate number. Default value: 0. We recommend that you do not use the return value and that you call CloudMonitor API operations to query the metric value.
    std::shared_ptr<int64_t> inactiveMessages_ = nullptr;
    // The time when the queue was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lastModifyTime_ = nullptr;
    // Indicates whether the logging feature is enabled. Valid values:
    // 
    // *   True
    // *   False
    std::shared_ptr<bool> loggingEnabled_ = nullptr;
    // The maximum length of the message that is sent to the queue. Unit: bytes.
    std::shared_ptr<int64_t> maximumMessageSize_ = nullptr;
    // The maximum duration for which a message is retained in the queue. After the specified retention period ends, the message is deleted regardless of whether the message is received. Unit: seconds.
    std::shared_ptr<int64_t> messageRetentionPeriod_ = nullptr;
    // The maximum duration for which long polling requests are held after the ReceiveMessage operation is called. Unit: seconds.
    std::shared_ptr<int64_t> pollingWaitSeconds_ = nullptr;
    // The name of the queue.
    std::shared_ptr<string> queueName_ = nullptr;
    // The tags added to the resources.
    std::shared_ptr<vector<Models::ListQueueResponseBodyDataPageDataTags>> tags_ = nullptr;
    // The duration for which a message stays in the Inactive state after the message is received from the queue. Valid values: 1 to 43200. Unit: seconds. Default value: 30.
    std::shared_ptr<int64_t> visibilityTimeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
