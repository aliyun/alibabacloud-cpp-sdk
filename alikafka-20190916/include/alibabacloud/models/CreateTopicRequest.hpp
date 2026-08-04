// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOPICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOPICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class CreateTopicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTopicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompactTopic, compactTopic_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LocalTopic, localTopic_);
      DARABONBA_PTR_TO_JSON(MinInsyncReplicas, minInsyncReplicas_);
      DARABONBA_PTR_TO_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTopicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompactTopic, compactTopic_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LocalTopic, localTopic_);
      DARABONBA_PTR_FROM_JSON(MinInsyncReplicas, minInsyncReplicas_);
      DARABONBA_PTR_FROM_JSON(PartitionNum, partitionNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ReplicationFactor, replicationFactor_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    CreateTopicRequest() = default ;
    CreateTopicRequest(const CreateTopicRequest &) = default ;
    CreateTopicRequest(CreateTopicRequest &&) = default ;
    CreateTopicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTopicRequest() = default ;
    CreateTopicRequest& operator=(const CreateTopicRequest &) = default ;
    CreateTopicRequest& operator=(CreateTopicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the resource.
      // 
      // - N ranges from 1 to 20.
      // 
      // - If this parameter is left empty, all tag keys are matched.
      // 
      // - The tag key can be up to 128 characters in length and cannot start with `aliyun` or `acs:`, or contain `http://` or `https://`.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value of the resource.
      // 
      // - N ranges from 1 to 20.
      // 
      // - This parameter can be left empty.
      // 
      // - The tag value can be up to 128 characters in length and cannot start with aliyun or acs:, or contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->compactTopic_ == nullptr
        && this->config_ == nullptr && this->instanceId_ == nullptr && this->localTopic_ == nullptr && this->minInsyncReplicas_ == nullptr && this->partitionNum_ == nullptr
        && this->regionId_ == nullptr && this->remark_ == nullptr && this->replicationFactor_ == nullptr && this->tag_ == nullptr && this->topic_ == nullptr; };
    // compactTopic Field Functions 
    bool hasCompactTopic() const { return this->compactTopic_ != nullptr;};
    void deleteCompactTopic() { this->compactTopic_ = nullptr;};
    inline bool getCompactTopic() const { DARABONBA_PTR_GET_DEFAULT(compactTopic_, false) };
    inline CreateTopicRequest& setCompactTopic(bool compactTopic) { DARABONBA_PTR_SET_VALUE(compactTopic_, compactTopic) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateTopicRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateTopicRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // localTopic Field Functions 
    bool hasLocalTopic() const { return this->localTopic_ != nullptr;};
    void deleteLocalTopic() { this->localTopic_ = nullptr;};
    inline bool getLocalTopic() const { DARABONBA_PTR_GET_DEFAULT(localTopic_, false) };
    inline CreateTopicRequest& setLocalTopic(bool localTopic) { DARABONBA_PTR_SET_VALUE(localTopic_, localTopic) };


    // minInsyncReplicas Field Functions 
    bool hasMinInsyncReplicas() const { return this->minInsyncReplicas_ != nullptr;};
    void deleteMinInsyncReplicas() { this->minInsyncReplicas_ = nullptr;};
    inline int64_t getMinInsyncReplicas() const { DARABONBA_PTR_GET_DEFAULT(minInsyncReplicas_, 0L) };
    inline CreateTopicRequest& setMinInsyncReplicas(int64_t minInsyncReplicas) { DARABONBA_PTR_SET_VALUE(minInsyncReplicas_, minInsyncReplicas) };


    // partitionNum Field Functions 
    bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
    void deletePartitionNum() { this->partitionNum_ = nullptr;};
    inline string getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, "") };
    inline CreateTopicRequest& setPartitionNum(string partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTopicRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateTopicRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // replicationFactor Field Functions 
    bool hasReplicationFactor() const { return this->replicationFactor_ != nullptr;};
    void deleteReplicationFactor() { this->replicationFactor_ = nullptr;};
    inline int64_t getReplicationFactor() const { DARABONBA_PTR_GET_DEFAULT(replicationFactor_, 0L) };
    inline CreateTopicRequest& setReplicationFactor(int64_t replicationFactor) { DARABONBA_PTR_SET_VALUE(replicationFactor_, replicationFactor) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTopicRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTopicRequest::Tag>) };
    inline vector<CreateTopicRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateTopicRequest::Tag>) };
    inline CreateTopicRequest& setTag(const vector<CreateTopicRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTopicRequest& setTag(vector<CreateTopicRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline CreateTopicRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The cleanup policy configured when the storage engine of the topic is set to local storage. Valid values:
    // 
    // - false: delete cleanup policy.
    // - true: compact cleanup policy.
    shared_ptr<bool> compactTopic_ {};
    // The supplementary configuration.
    // 
    // - Must be in JSON format.
    // 
    // 
    // - This parameter takes effect only when **LocalTopic** is set to **true**.
    // 
    // - Supported configurations for reserved instances:
    //   -   **retention.ms** (message retention period): ranges from 3600000 to 31536000000 milliseconds.
    //   - **max.message.bytes** (maximum message size): ranges from 1048576 to 10485760 bytes. 
    //   - **message.timestamp.type**: specifies the type of message timestamp. CreateTime indicates the timestamp specified by the producer when sending a message. If not specified, it is the message creation time on the client. LogAppendTime indicates the time when the message is written to disk on the server. Valid values: CreateTime or LogAppendTime. Default value: CreateTime. We recommend LogAppendTime.
    // 
    //  - Supported configurations for Serverless instances:
    //    -  **retention.hours** (message retention period): value type is String. Valid values: 24 to 8760.
    //    -  **max.message.bytes** (maximum message size): value type is String. Valid values: 1048576 to 10485760.
    //    -  **message.timestamp.type** (type of message timestamp): CreateTime indicates the timestamp specified by the producer when sending a message. If not specified, it is the message creation time on the client. LogAppendTime indicates the time when the message is written to disk on the server. Valid values: CreateTime or LogAppendTime. Default value: CreateTime. We recommend LogAppendTime.
    shared_ptr<string> config_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The storage engine of the topic. Valid values:
    // 
    // - false: cloud storage.
    // - true: local storage.
    shared_ptr<bool> localTopic_ {};
    // The minimum number of in-sync replicas (ISR).
    // 
    // - This parameter takes effect only when **LocalTopic** is set to **true**.
    // 
    // - The value must be less than the number of topic replicas.
    // 
    // - The number of in-sync replicas ranges from 1 to 3.
    shared_ptr<int64_t> minInsyncReplicas_ {};
    // The number of partitions for the topic.
    // 
    // - The number of partitions ranges from 1 to 360.
    // 
    // - The console provides different configuration suggestions based on the instance edition. Configure the number of partitions based on the console suggestions to reduce the risk of data skew.
    // 
    // Default value:
    // 
    // - Reserved instances: 12
    // 
    // - Serverless instances: 3
    shared_ptr<string> partitionNum_ {};
    // The region ID of the instance to which the topic belongs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The description of the topic.
    // 
    // - Can contain only letters, digits, underscores (_), and hyphens (-).
    // 
    // - Must be 3 to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> remark_ {};
    // The number of replicas for the topic.
    // 
    // - This parameter takes effect only when **LocalTopic** is set to **true**.
    // 
    // - The number of replicas ranges from 1 to 3.
    // 
    // > If the number of replicas is set to **1**, data loss may occur. Set this parameter with caution.
    shared_ptr<int64_t> replicationFactor_ {};
    // The tag list.
    shared_ptr<vector<CreateTopicRequest::Tag>> tag_ {};
    // The name of the topic.
    // 
    // - Reserved instances:
    // Supports uppercase and lowercase letters, digits, underscores (_), hyphens (-), and periods (.). The name must be 3 to 64 characters in length.
    // - Serverless instances:
    // Supports uppercase and lowercase letters, digits, underscores (_), hyphens (-), and periods (.). The name must be 1 to 249 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
