// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSCONSUMERRESETOFFSETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSCONSUMERRESETOFFSETREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsConsumerResetOffsetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsConsumerResetOffsetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ResetTimestamp, resetTimestamp_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OnsConsumerResetOffsetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ResetTimestamp, resetTimestamp_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OnsConsumerResetOffsetRequest() = default ;
    OnsConsumerResetOffsetRequest(const OnsConsumerResetOffsetRequest &) = default ;
    OnsConsumerResetOffsetRequest(OnsConsumerResetOffsetRequest &&) = default ;
    OnsConsumerResetOffsetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsConsumerResetOffsetRequest() = default ;
    OnsConsumerResetOffsetRequest& operator=(const OnsConsumerResetOffsetRequest &) = default ;
    OnsConsumerResetOffsetRequest& operator=(OnsConsumerResetOffsetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceId_ == nullptr && this->resetTimestamp_ == nullptr && this->topic_ == nullptr && this->type_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline OnsConsumerResetOffsetRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsConsumerResetOffsetRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // resetTimestamp Field Functions 
    bool hasResetTimestamp() const { return this->resetTimestamp_ != nullptr;};
    void deleteResetTimestamp() { this->resetTimestamp_ = nullptr;};
    inline int64_t getResetTimestamp() const { DARABONBA_PTR_GET_DEFAULT(resetTimestamp_, 0L) };
    inline OnsConsumerResetOffsetRequest& setResetTimestamp(int64_t resetTimestamp) { DARABONBA_PTR_SET_VALUE(resetTimestamp_, resetTimestamp) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsConsumerResetOffsetRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline OnsConsumerResetOffsetRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the consumer group whose dead-letter message you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The ID of the instance to which the consumer group belongs.
    shared_ptr<string> instanceId_ {};
    // The timestamp to which you want to reset the consumer offset. This parameter takes effect only when the **Type** parameter is set to **1**. Unit: milliseconds.
    shared_ptr<int64_t> resetTimestamp_ {};
    // The name of the topic for which you want to reset the consumer offset.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
    // The method that you want to use to clear accumulated messages. Valid values:
    // 
    // *   **0:** All accumulated messages are cleared. Messages that are not consumed are ignored. Consumers in the specified consumer group consume only messages that are published to the topic after the specified point in time.
    // 
    // If "reconsumeLater" is returned, the accumulated messages are not cleared because the system is retrying to resend the messages to consumers.
    // 
    // *   **1:** The messages that were published to the topic before the specified point in time are cleared. You must specify a point in time. Consumers in the specified consumer group consume only the messages that are published to the topic after the specified point in time.
    // 
    // You can specify a point in time from the earliest point in time when a message was published to the topic to the most recent point in time when a message was published to the topic. Points in time that are not within the allowed time range are invalid.
    // 
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
