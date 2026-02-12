// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSTRENDTOPICINPUTTPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONSTRENDTOPICINPUTTPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsTrendTopicInputTpsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsTrendTopicInputTpsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, OnsTrendTopicInputTpsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    OnsTrendTopicInputTpsRequest() = default ;
    OnsTrendTopicInputTpsRequest(const OnsTrendTopicInputTpsRequest &) = default ;
    OnsTrendTopicInputTpsRequest(OnsTrendTopicInputTpsRequest &&) = default ;
    OnsTrendTopicInputTpsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsTrendTopicInputTpsRequest() = default ;
    OnsTrendTopicInputTpsRequest& operator=(const OnsTrendTopicInputTpsRequest &) = default ;
    OnsTrendTopicInputTpsRequest& operator=(OnsTrendTopicInputTpsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->period_ == nullptr && this->topic_ == nullptr && this->type_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline OnsTrendTopicInputTpsRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline OnsTrendTopicInputTpsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline OnsTrendTopicInputTpsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline OnsTrendTopicInputTpsRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline OnsTrendTopicInputTpsRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline OnsTrendTopicInputTpsRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The timestamp that indicates the beginning of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The timestamp that indicates the end of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the instance to which the topic you want to query belongs.
    shared_ptr<string> instanceId_ {};
    // The sampling period. Unit: minutes. Valid values: 1, 5, and 10.
    shared_ptr<int64_t> period_ {};
    // The name of the topic that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> topic_ {};
    // The type of information that you want to query. Valid values:
    // 
    // *   **0**: the number of messages that are published to the topic during each sampling period.
    // *   **1**: the TPS for message publishing in the topic during each sampling period.
    // 
    // This parameter is required.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
