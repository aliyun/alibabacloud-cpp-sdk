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
      // Partition offset.
      shared_ptr<int64_t> offset_ {};
      // Partition ID.
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
    // Consumer Group name.
    // 
    // - Can only contain letters, numbers, hyphens (-), and underscores (_).
    // 
    // - Length must be **3-64** characters. If more than **64** characters are provided, they will be automatically truncated.
    // 
    // - Cannot be modified once created.
    // 
    // This parameter is required.
    shared_ptr<string> consumerId_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // When resetType is offset, this parameter is used to set the consumer offset for each partition of a topic for the consumer group.
    shared_ptr<vector<UpdateConsumerOffsetRequest::Offsets>> offsets_ {};
    // Region ID of the instance to which the Group belongs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Type of consumer group offset reset, supporting the following two types:
    // 
    // - **timestamp** (default)
    // 
    // - **offset**
    shared_ptr<string> resetType_ {};
    // Time parameter in Unix timestamp format, in milliseconds.
    // The parameter range should be **less than 0** or **within the retention period of the consumer offset**. This parameter only takes effect when resetType is timestamp.
    // 
    // - To reset to the latest consumer offset, pass -1.
    // 
    // - To reset to the earliest consumer offset, pass -2.
    shared_ptr<string> time_ {};
    // Topic name.
    // 
    // - Can only contain letters, numbers, underscores (_), and hyphens (-).
    // 
    // - Length must be **3-64** characters. If more than **64** characters are provided, they will be automatically truncated.
    // 
    // - Cannot be modified once created.
    // 
    // **To set the consumer offset for all topics subscribed by the current consumer, pass an empty string.**
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
