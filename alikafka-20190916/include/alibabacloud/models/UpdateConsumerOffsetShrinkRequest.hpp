// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONSUMEROFFSETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONSUMEROFFSETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class UpdateConsumerOffsetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConsumerOffsetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Offsets, offsetsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResetType, resetType_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConsumerOffsetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Offsets, offsetsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResetType, resetType_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    UpdateConsumerOffsetShrinkRequest() = default ;
    UpdateConsumerOffsetShrinkRequest(const UpdateConsumerOffsetShrinkRequest &) = default ;
    UpdateConsumerOffsetShrinkRequest(UpdateConsumerOffsetShrinkRequest &&) = default ;
    UpdateConsumerOffsetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConsumerOffsetShrinkRequest() = default ;
    UpdateConsumerOffsetShrinkRequest& operator=(const UpdateConsumerOffsetShrinkRequest &) = default ;
    UpdateConsumerOffsetShrinkRequest& operator=(UpdateConsumerOffsetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->instanceId_ == nullptr && this->offsetsShrink_ == nullptr && this->regionId_ == nullptr && this->resetType_ == nullptr && this->time_ == nullptr
        && this->topic_ == nullptr; };
    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline UpdateConsumerOffsetShrinkRequest& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateConsumerOffsetShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // offsetsShrink Field Functions 
    bool hasOffsetsShrink() const { return this->offsetsShrink_ != nullptr;};
    void deleteOffsetsShrink() { this->offsetsShrink_ = nullptr;};
    inline string getOffsetsShrink() const { DARABONBA_PTR_GET_DEFAULT(offsetsShrink_, "") };
    inline UpdateConsumerOffsetShrinkRequest& setOffsetsShrink(string offsetsShrink) { DARABONBA_PTR_SET_VALUE(offsetsShrink_, offsetsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateConsumerOffsetShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resetType Field Functions 
    bool hasResetType() const { return this->resetType_ != nullptr;};
    void deleteResetType() { this->resetType_ = nullptr;};
    inline string getResetType() const { DARABONBA_PTR_GET_DEFAULT(resetType_, "") };
    inline UpdateConsumerOffsetShrinkRequest& setResetType(string resetType) { DARABONBA_PTR_SET_VALUE(resetType_, resetType) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline UpdateConsumerOffsetShrinkRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline UpdateConsumerOffsetShrinkRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


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
    shared_ptr<string> offsetsShrink_ {};
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
