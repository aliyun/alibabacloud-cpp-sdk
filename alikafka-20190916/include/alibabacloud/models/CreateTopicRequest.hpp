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
      // The tag key.
      // 
      // *   If you do not specify this parameter, the keys of all tags are matched.
      // *   The tag key must be 1 to 128 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `aliyun` or `acs:`.
      // 
      // This parameter is required.
      shared_ptr<string> key_ {};
      // The tag value.
      // 
      // *   You can leave this parameter empty.
      // *   The tag value must be 1 to 128 characters in length and cannot contain http:// or https://. The tag value cannot start with aliyun or acs:.
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
    // The log cleanup policy that is used for the topic. This parameter is available only when LocalTopic is set to true. Valid values:
    // 
    // *   false: The topic uses the default log cleanup policy.
    // *   true: The topic uses the log compaction policy.
    shared_ptr<bool> compactTopic_ {};
    // The additional configuration.
    // 
    // *   The value must be in JSON format.
    // *   Set Key to **replications**. This value specifies the number of replicas of the topic. The value must be an integer that ranges from 1 to 3.
    // *   You can configure this parameter only if you set **LocalTopic** to **true** or specify **Open Source Edition (Local Disk)** as the instance edition.****
    // 
    // >  If you specify replications in this parameter, **ReplicationFactor** does not take effect.
    shared_ptr<string> config_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The type of storage that the topic uses. Valid values:
    // 
    // *   false: The topic uses cloud storage.
    // *   true: The topic uses local storage.
    shared_ptr<bool> localTopic_ {};
    // The minimum number of in-sync replicas (ISRs).
    // 
    // *   This parameter is available only when **LocalTopic** is set to **true**, or the instance is of the **Open Source Edition (Local Disk)**.****
    // *   The value of this parameter must be smaller than the value of ReplicationFactor.
    // *   Valid values: 1 to 3.
    shared_ptr<int64_t> minInsyncReplicas_ {};
    // The number of partitions in the topic.
    // 
    // *   Valid values: 1 to 360.
    // *   In the ApsaraMQ for Kafka console, you can view the number of partitions that the system recommends based on the specifications of the instance. We recommend that you specify the number that is recommended by the system as the value of this parameter to reduce the risk of data skew.
    // 
    // Default values:
    // 
    // *   ApsaraMQ for Kafka V2 instance: 12
    // *   ApsaraMQ for Kafka V3 instance: 3
    shared_ptr<string> partitionNum_ {};
    // The region ID of the instance in which you want to create a topic.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The description of the topic.
    // 
    // *   The description can contain only letters, digits, hyphens (-), and underscores (_).
    // *   The description must be 3 to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> remark_ {};
    // The number of replicas for the topic.
    // 
    // *   This parameter is available only when **LocalTopic** is set to **true**, or the instance is of the **Open Source Edition (Local Disk)**.****
    // *   Valid values: 1 to 3.
    // 
    // > If you set this parameter to **1**, data loss may occur. Exercise caution when you configure this parameter.
    shared_ptr<int64_t> replicationFactor_ {};
    // The tags that you want to add to the topic.
    shared_ptr<vector<CreateTopicRequest::Tag>> tag_ {};
    // The topic name.
    // 
    // *   The name can contain only letters, digits, hyphens (-), and underscores (_).
    // *   The name must be 3 to 64 characters in length. If the name that you specify contains more than 64 characters, the system automatically truncates the name.
    // *   After a topic is created, you cannot change the name of the topic.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
