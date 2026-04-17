// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONSUMEROFFSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONSUMEROFFSETREQUEST_HPP_
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
  class UpdateConsumerOffsetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConsumerOffsetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Offsets, offsets_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConsumerOffsetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Offsets, offsets_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    UpdateConsumerOffsetRequest() = default ;
    UpdateConsumerOffsetRequest(const UpdateConsumerOffsetRequest &) = default ;
    UpdateConsumerOffsetRequest(UpdateConsumerOffsetRequest &&) = default ;
    UpdateConsumerOffsetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConsumerOffsetRequest() = default ;
    UpdateConsumerOffsetRequest& operator=(const UpdateConsumerOffsetRequest &) = default ;
    UpdateConsumerOffsetRequest& operator=(UpdateConsumerOffsetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Offsets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Offsets& obj) { 
        DARABONBA_PTR_TO_JSON(Offset, offset_);
        DARABONBA_PTR_TO_JSON(Partition, partition_);
      };
      friend void from_json(const Darabonba::Json& j, Offsets& obj) { 
        DARABONBA_PTR_FROM_JSON(Offset, offset_);
        DARABONBA_PTR_FROM_JSON(Partition, partition_);
      };
      Offsets() = default ;
      Offsets(const Offsets &) = default ;
      Offsets(Offsets &&) = default ;
      Offsets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Offsets() = default ;
      Offsets& operator=(const Offsets &) = default ;
      Offsets& operator=(Offsets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->offset_ == nullptr
        && this->partition_ == nullptr; };
      // offset Field Functions 
      bool hasOffset() const { return this->offset_ != nullptr;};
      void deleteOffset() { this->offset_ = nullptr;};
      inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
      inline Offsets& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


      // partition Field Functions 
      bool hasPartition() const { return this->partition_ != nullptr;};
      void deletePartition() { this->partition_ = nullptr;};
      inline int32_t getPartition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
      inline Offsets& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    protected:
      // The consumer offset of the partition.
      shared_ptr<int64_t> offset_ {};
      // The partition ID.
      shared_ptr<int32_t> partition_ {};
    };

    virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->instanceId_ == nullptr && this->offsets_ == nullptr && this->regionId_ == nullptr && this->resetType_ == nullptr && this->time_ == nullptr
        && this->topic_ == nullptr; };
    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline UpdateConsumerOffsetRequest& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateConsumerOffsetRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // offsets Field Functions 
    bool hasOffsets() const { return this->offsets_ != nullptr;};
    void deleteOffsets() { this->offsets_ = nullptr;};
    inline const vector<UpdateConsumerOffsetRequest::Offsets> & getOffsets() const { DARABONBA_PTR_GET_CONST(offsets_, vector<UpdateConsumerOffsetRequest::Offsets>) };
    inline vector<UpdateConsumerOffsetRequest::Offsets> getOffsets() { DARABONBA_PTR_GET(offsets_, vector<UpdateConsumerOffsetRequest::Offsets>) };
    inline UpdateConsumerOffsetRequest& setOffsets(const vector<UpdateConsumerOffsetRequest::Offsets> & offsets) { DARABONBA_PTR_SET_VALUE(offsets_, offsets) };
    inline UpdateConsumerOffsetRequest& setOffsets(vector<UpdateConsumerOffsetRequest::Offsets> && offsets) { DARABONBA_PTR_SET_RVALUE(offsets_, offsets) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateConsumerOffsetRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline string getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
    inline UpdateConsumerOffsetRequest& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline UpdateConsumerOffsetRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline UpdateConsumerOffsetRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The name of the consumer group.
    // 
    // *   The name can contain letters, digits, hyphens (-), and underscores (_).
    // *   The name must be **3 to 64** characters in length. If a name contains more than **64** characters, the name is automatically truncated.
    // *   The name of a consumer group cannot be changed after the consumer group is created.
    // 
    // This parameter is required.
    shared_ptr<string> consumerId_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // If you set resetType to offset, you can use this parameter to reset the consumer offset of each partition of a specific topic in the consumer group.
    shared_ptr<vector<UpdateConsumerOffsetRequest::Offsets>> offsets_ {};
    // The region ID of the instance to which the consumer group belongs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The method that is used to reset the consumer offsets of the subscribed topics of a consumer group. Valid values:
    // 
    // *   **timestamp** (default)
    // *   **offset**
    shared_ptr<string> resetType_ {};
    // The point in time when message consumption starts. The value of this parameter is a UNIX timestamp in milliseconds. The value of this parameter must be **less than 0** or **within the retention period of the consumer offset**. This parameter takes effect only if you set resetType to timestamp.
    // 
    // *   If you want to reset the consumer offset to the latest offset, set this parameter to -1.
    // *   If you want to reset the consumer offset to the earliest offset, set this parameter to -2.
    shared_ptr<string> time_ {};
    // The topic name.
    // 
    // *   The name can contain letters, digits, underscores (_), and hyphens (-).
    // *   The name must be **3 to 64** characters in length. If a name contains more than **64** characters, the name is automatically truncated.
    // *   The name of a topic cannot be changed after the topic is created.
    // 
    // **If you want to reset the consumer offsets of all topics to which the consumer subscribes, specify an empty string.**
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
