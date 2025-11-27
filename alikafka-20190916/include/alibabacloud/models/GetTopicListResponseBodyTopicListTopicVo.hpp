// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICLISTRESPONSEBODYTOPICLISTTOPICVO_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICLISTRESPONSEBODYTOPICLISTTOPICVO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTopicListResponseBodyTopicListTopicVOTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicListResponseBodyTopicListTopicVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicListResponseBodyTopicListTopicVO& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreate, autoCreate_);
      DARABONBA_PTR_TO_JSON(CompactTopic, compactTopic_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LocalTopic, localTopic_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusName, statusName_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(TopicConfig, topicConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicListResponseBodyTopicListTopicVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreate, autoCreate_);
      DARABONBA_PTR_FROM_JSON(CompactTopic, compactTopic_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LocalTopic, localTopic_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusName, statusName_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(TopicConfig, topicConfig_);
    };
    GetTopicListResponseBodyTopicListTopicVO() = default ;
    GetTopicListResponseBodyTopicListTopicVO(const GetTopicListResponseBodyTopicListTopicVO &) = default ;
    GetTopicListResponseBodyTopicListTopicVO(GetTopicListResponseBodyTopicListTopicVO &&) = default ;
    GetTopicListResponseBodyTopicListTopicVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicListResponseBodyTopicListTopicVO() = default ;
    GetTopicListResponseBodyTopicListTopicVO& operator=(const GetTopicListResponseBodyTopicListTopicVO &) = default ;
    GetTopicListResponseBodyTopicListTopicVO& operator=(GetTopicListResponseBodyTopicListTopicVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCreate_ == nullptr
        && return this->compactTopic_ == nullptr && return this->createTime_ == nullptr && return this->instanceId_ == nullptr && return this->localTopic_ == nullptr && return this->partitionNum_ == nullptr
        && return this->regionId_ == nullptr && return this->remark_ == nullptr && return this->status_ == nullptr && return this->statusName_ == nullptr && return this->tags_ == nullptr
        && return this->topic_ == nullptr && return this->topicConfig_ == nullptr; };
    // autoCreate Field Functions 
    bool hasAutoCreate() const { return this->autoCreate_ != nullptr;};
    void deleteAutoCreate() { this->autoCreate_ = nullptr;};
    inline bool autoCreate() const { DARABONBA_PTR_GET_DEFAULT(autoCreate_, false) };
    inline GetTopicListResponseBodyTopicListTopicVO& setAutoCreate(bool autoCreate) { DARABONBA_PTR_SET_VALUE(autoCreate_, autoCreate) };


    // compactTopic Field Functions 
    bool hasCompactTopic() const { return this->compactTopic_ != nullptr;};
    void deleteCompactTopic() { this->compactTopic_ = nullptr;};
    inline bool compactTopic() const { DARABONBA_PTR_GET_DEFAULT(compactTopic_, false) };
    inline GetTopicListResponseBodyTopicListTopicVO& setCompactTopic(bool compactTopic) { DARABONBA_PTR_SET_VALUE(compactTopic_, compactTopic) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetTopicListResponseBodyTopicListTopicVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTopicListResponseBodyTopicListTopicVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // localTopic Field Functions 
    bool hasLocalTopic() const { return this->localTopic_ != nullptr;};
    void deleteLocalTopic() { this->localTopic_ = nullptr;};
    inline bool localTopic() const { DARABONBA_PTR_GET_DEFAULT(localTopic_, false) };
    inline GetTopicListResponseBodyTopicListTopicVO& setLocalTopic(bool localTopic) { DARABONBA_PTR_SET_VALUE(localTopic_, localTopic) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline int32_t partitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
    inline GetTopicListResponseBodyTopicListTopicVO& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTopicListResponseBodyTopicListTopicVO& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline GetTopicListResponseBodyTopicListTopicVO& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetTopicListResponseBodyTopicListTopicVO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusName Field Functions 
    bool hasStatusName() const { return this->statusName_ != nullptr;};
    void deleteStatusName() { this->statusName_ = nullptr;};
    inline string statusName() const { DARABONBA_PTR_GET_DEFAULT(statusName_, "") };
    inline GetTopicListResponseBodyTopicListTopicVO& setStatusName(string statusName) { DARABONBA_PTR_SET_VALUE(statusName_, statusName) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::GetTopicListResponseBodyTopicListTopicVOTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::GetTopicListResponseBodyTopicListTopicVOTags) };
    inline Models::GetTopicListResponseBodyTopicListTopicVOTags tags() { DARABONBA_PTR_GET(tags_, Models::GetTopicListResponseBodyTopicListTopicVOTags) };
    inline GetTopicListResponseBodyTopicListTopicVO& setTags(const Models::GetTopicListResponseBodyTopicListTopicVOTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetTopicListResponseBodyTopicListTopicVO& setTags(Models::GetTopicListResponseBodyTopicListTopicVOTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetTopicListResponseBodyTopicListTopicVO& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // topicConfig Field Functions 
    bool hasTopicConfig() const { return this->topicConfig_ != nullptr;};
    void deleteTopicConfig() { this->topicConfig_ = nullptr;};
    inline string topicConfig() const { DARABONBA_PTR_GET_DEFAULT(topicConfig_, "") };
    inline GetTopicListResponseBodyTopicListTopicVO& setTopicConfig(string topicConfig) { DARABONBA_PTR_SET_VALUE(topicConfig_, topicConfig) };


  protected:
    // Indicates whether the topic was automatically created.
    std::shared_ptr<bool> autoCreate_ = nullptr;
    // The log cleanup policy for the topic. This parameter is returned only if **LocalTopic** is set to **true**. Valid values:
    // 
    // *   false: the default log cleanup policy.
    // *   true: the Apache Kafka log compaction policy.
    std::shared_ptr<bool> compactTopic_ = nullptr;
    // The timestamp that indicates when the topic was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The storage type that is used for the topic. Valid values:
    // 
    // *   false: cloud storage
    // *   true: local storage
    std::shared_ptr<bool> localTopic_ = nullptr;
    // The number of partitions in the topic.
    std::shared_ptr<int32_t> partitionNum_ = nullptr;
    // The ID of the region where the instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The topic description. Valid values:
    // 
    // *   The description can contain only letters, digits, hyphens (-), and underscores (_).
    // *   The description must be 3 to 64 characters in length.
    std::shared_ptr<string> remark_ = nullptr;
    // The topic status. Valid value:
    // 
    // **0**: running.
    // 
    // If the topic is deleted, this parameter is not returned.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The topic status. Valid value:
    // 
    // **Running**.
    // 
    // If the topic is deleted, this parameter is not returned.
    std::shared_ptr<string> statusName_ = nullptr;
    // The tags.
    std::shared_ptr<Models::GetTopicListResponseBodyTopicListTopicVOTags> tags_ = nullptr;
    // The topic name. Valid values:
    // 
    // *   The name can contain only letters, digits, hyphens (-), and underscores (_).
    // *   The name must be 3 to 64 characters in length. If the name contains more than 64 characters, the system automatically truncates the name.
    std::shared_ptr<string> topic_ = nullptr;
    // The topic configuration.
    std::shared_ptr<string> topicConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
