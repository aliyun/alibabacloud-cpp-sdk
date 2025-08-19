// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICRESPONSEBODYDATAPAGEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICRESPONSEBODYDATAPAGEDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTopicResponseBodyDataPageDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class ListTopicResponseBodyDataPageData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(LoggingEnabled, loggingEnabled_);
      DARABONBA_PTR_TO_JSON(MaxMessageSize, maxMessageSize_);
      DARABONBA_PTR_TO_JSON(MessageCount, messageCount_);
      DARABONBA_PTR_TO_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TopicInnerUrl, topicInnerUrl_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
      DARABONBA_PTR_TO_JSON(TopicUrl, topicUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicResponseBodyDataPageData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(LoggingEnabled, loggingEnabled_);
      DARABONBA_PTR_FROM_JSON(MaxMessageSize, maxMessageSize_);
      DARABONBA_PTR_FROM_JSON(MessageCount, messageCount_);
      DARABONBA_PTR_FROM_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TopicInnerUrl, topicInnerUrl_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
      DARABONBA_PTR_FROM_JSON(TopicUrl, topicUrl_);
    };
    ListTopicResponseBodyDataPageData() = default ;
    ListTopicResponseBodyDataPageData(const ListTopicResponseBodyDataPageData &) = default ;
    ListTopicResponseBodyDataPageData(ListTopicResponseBodyDataPageData &&) = default ;
    ListTopicResponseBodyDataPageData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicResponseBodyDataPageData() = default ;
    ListTopicResponseBodyDataPageData& operator=(const ListTopicResponseBodyDataPageData &) = default ;
    ListTopicResponseBodyDataPageData& operator=(ListTopicResponseBodyDataPageData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->lastModifyTime_ != nullptr && this->loggingEnabled_ != nullptr && this->maxMessageSize_ != nullptr && this->messageCount_ != nullptr && this->messageRetentionPeriod_ != nullptr
        && this->tags_ != nullptr && this->topicInnerUrl_ != nullptr && this->topicName_ != nullptr && this->topicUrl_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListTopicResponseBodyDataPageData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline int64_t lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
    inline ListTopicResponseBodyDataPageData& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // loggingEnabled Field Functions 
    bool hasLoggingEnabled() const { return this->loggingEnabled_ != nullptr;};
    void deleteLoggingEnabled() { this->loggingEnabled_ = nullptr;};
    inline bool loggingEnabled() const { DARABONBA_PTR_GET_DEFAULT(loggingEnabled_, false) };
    inline ListTopicResponseBodyDataPageData& setLoggingEnabled(bool loggingEnabled) { DARABONBA_PTR_SET_VALUE(loggingEnabled_, loggingEnabled) };


    // maxMessageSize Field Functions 
    bool hasMaxMessageSize() const { return this->maxMessageSize_ != nullptr;};
    void deleteMaxMessageSize() { this->maxMessageSize_ = nullptr;};
    inline int64_t maxMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maxMessageSize_, 0L) };
    inline ListTopicResponseBodyDataPageData& setMaxMessageSize(int64_t maxMessageSize) { DARABONBA_PTR_SET_VALUE(maxMessageSize_, maxMessageSize) };


    // messageCount Field Functions 
    bool hasMessageCount() const { return this->messageCount_ != nullptr;};
    void deleteMessageCount() { this->messageCount_ = nullptr;};
    inline int64_t messageCount() const { DARABONBA_PTR_GET_DEFAULT(messageCount_, 0L) };
    inline ListTopicResponseBodyDataPageData& setMessageCount(int64_t messageCount) { DARABONBA_PTR_SET_VALUE(messageCount_, messageCount) };


    // messageRetentionPeriod Field Functions 
    bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
    void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
    inline int64_t messageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
    inline ListTopicResponseBodyDataPageData& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListTopicResponseBodyDataPageDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListTopicResponseBodyDataPageDataTags>) };
    inline vector<Models::ListTopicResponseBodyDataPageDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListTopicResponseBodyDataPageDataTags>) };
    inline ListTopicResponseBodyDataPageData& setTags(const vector<Models::ListTopicResponseBodyDataPageDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTopicResponseBodyDataPageData& setTags(vector<Models::ListTopicResponseBodyDataPageDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // topicInnerUrl Field Functions 
    bool hasTopicInnerUrl() const { return this->topicInnerUrl_ != nullptr;};
    void deleteTopicInnerUrl() { this->topicInnerUrl_ = nullptr;};
    inline string topicInnerUrl() const { DARABONBA_PTR_GET_DEFAULT(topicInnerUrl_, "") };
    inline ListTopicResponseBodyDataPageData& setTopicInnerUrl(string topicInnerUrl) { DARABONBA_PTR_SET_VALUE(topicInnerUrl_, topicInnerUrl) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline ListTopicResponseBodyDataPageData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


    // topicUrl Field Functions 
    bool hasTopicUrl() const { return this->topicUrl_ != nullptr;};
    void deleteTopicUrl() { this->topicUrl_ = nullptr;};
    inline string topicUrl() const { DARABONBA_PTR_GET_DEFAULT(topicUrl_, "") };
    inline ListTopicResponseBodyDataPageData& setTopicUrl(string topicUrl) { DARABONBA_PTR_SET_VALUE(topicUrl_, topicUrl) };


  protected:
    // The time when the subscription was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the subscription was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lastModifyTime_ = nullptr;
    // Indicates whether the logging feature is enabled.
    // 
    // *   True
    // *   False
    std::shared_ptr<bool> loggingEnabled_ = nullptr;
    // The maximum length of the message that is sent to the topic. Unit: bytes.
    std::shared_ptr<int64_t> maxMessageSize_ = nullptr;
    // The number of messages in the topic.
    std::shared_ptr<int64_t> messageCount_ = nullptr;
    // The maximum duration for which a message is retained in the topic. After the specified retention period ends, the message is deleted regardless of whether the message is received. Unit: seconds.
    std::shared_ptr<int64_t> messageRetentionPeriod_ = nullptr;
    // The tags added to the resources.
    std::shared_ptr<vector<Models::ListTopicResponseBodyDataPageDataTags>> tags_ = nullptr;
    // The internal URL of the message topic. The internal URL can be accessed over an internal network.
    std::shared_ptr<string> topicInnerUrl_ = nullptr;
    // The name of the topic.
    std::shared_ptr<string> topicName_ = nullptr;
    // The URL of the message topic.
    std::shared_ptr<string> topicUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
