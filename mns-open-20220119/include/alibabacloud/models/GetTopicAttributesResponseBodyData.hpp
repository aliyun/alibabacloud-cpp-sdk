// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICATTRIBUTESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICATTRIBUTESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicAttributesResponseBodyDataTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class GetTopicAttributesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicAttributesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(LoggingEnabled, loggingEnabled_);
      DARABONBA_PTR_TO_JSON(MaxMessageSize, maxMessageSize_);
      DARABONBA_PTR_TO_JSON(MessageCount, messageCount_);
      DARABONBA_PTR_TO_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TopicName, topicName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicAttributesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(LoggingEnabled, loggingEnabled_);
      DARABONBA_PTR_FROM_JSON(MaxMessageSize, maxMessageSize_);
      DARABONBA_PTR_FROM_JSON(MessageCount, messageCount_);
      DARABONBA_PTR_FROM_JSON(MessageRetentionPeriod, messageRetentionPeriod_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
    };
    GetTopicAttributesResponseBodyData() = default ;
    GetTopicAttributesResponseBodyData(const GetTopicAttributesResponseBodyData &) = default ;
    GetTopicAttributesResponseBodyData(GetTopicAttributesResponseBodyData &&) = default ;
    GetTopicAttributesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicAttributesResponseBodyData() = default ;
    GetTopicAttributesResponseBodyData& operator=(const GetTopicAttributesResponseBodyData &) = default ;
    GetTopicAttributesResponseBodyData& operator=(GetTopicAttributesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->lastModifyTime_ != nullptr && this->loggingEnabled_ != nullptr && this->maxMessageSize_ != nullptr && this->messageCount_ != nullptr && this->messageRetentionPeriod_ != nullptr
        && this->tags_ != nullptr && this->topicName_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetTopicAttributesResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline int64_t lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, 0L) };
    inline GetTopicAttributesResponseBodyData& setLastModifyTime(int64_t lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // loggingEnabled Field Functions 
    bool hasLoggingEnabled() const { return this->loggingEnabled_ != nullptr;};
    void deleteLoggingEnabled() { this->loggingEnabled_ = nullptr;};
    inline bool loggingEnabled() const { DARABONBA_PTR_GET_DEFAULT(loggingEnabled_, false) };
    inline GetTopicAttributesResponseBodyData& setLoggingEnabled(bool loggingEnabled) { DARABONBA_PTR_SET_VALUE(loggingEnabled_, loggingEnabled) };


    // maxMessageSize Field Functions 
    bool hasMaxMessageSize() const { return this->maxMessageSize_ != nullptr;};
    void deleteMaxMessageSize() { this->maxMessageSize_ = nullptr;};
    inline int64_t maxMessageSize() const { DARABONBA_PTR_GET_DEFAULT(maxMessageSize_, 0L) };
    inline GetTopicAttributesResponseBodyData& setMaxMessageSize(int64_t maxMessageSize) { DARABONBA_PTR_SET_VALUE(maxMessageSize_, maxMessageSize) };


    // messageCount Field Functions 
    bool hasMessageCount() const { return this->messageCount_ != nullptr;};
    void deleteMessageCount() { this->messageCount_ = nullptr;};
    inline int64_t messageCount() const { DARABONBA_PTR_GET_DEFAULT(messageCount_, 0L) };
    inline GetTopicAttributesResponseBodyData& setMessageCount(int64_t messageCount) { DARABONBA_PTR_SET_VALUE(messageCount_, messageCount) };


    // messageRetentionPeriod Field Functions 
    bool hasMessageRetentionPeriod() const { return this->messageRetentionPeriod_ != nullptr;};
    void deleteMessageRetentionPeriod() { this->messageRetentionPeriod_ = nullptr;};
    inline int64_t messageRetentionPeriod() const { DARABONBA_PTR_GET_DEFAULT(messageRetentionPeriod_, 0L) };
    inline GetTopicAttributesResponseBodyData& setMessageRetentionPeriod(int64_t messageRetentionPeriod) { DARABONBA_PTR_SET_VALUE(messageRetentionPeriod_, messageRetentionPeriod) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetTopicAttributesResponseBodyDataTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetTopicAttributesResponseBodyDataTags>) };
    inline vector<Models::GetTopicAttributesResponseBodyDataTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetTopicAttributesResponseBodyDataTags>) };
    inline GetTopicAttributesResponseBodyData& setTags(const vector<Models::GetTopicAttributesResponseBodyDataTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetTopicAttributesResponseBodyData& setTags(vector<Models::GetTopicAttributesResponseBodyDataTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // topicName Field Functions 
    bool hasTopicName() const { return this->topicName_ != nullptr;};
    void deleteTopicName() { this->topicName_ = nullptr;};
    inline string topicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
    inline GetTopicAttributesResponseBodyData& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


  protected:
    // The time when the topic was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the topic was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lastModifyTime_ = nullptr;
    // Indicates whether the logging feature is enabled. Valid values:
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
    std::shared_ptr<vector<Models::GetTopicAttributesResponseBodyDataTags>> tags_ = nullptr;
    // The name of the topic.
    std::shared_ptr<string> topicName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
