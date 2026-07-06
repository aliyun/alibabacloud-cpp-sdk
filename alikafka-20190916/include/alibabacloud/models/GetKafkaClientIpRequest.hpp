// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKAFKACLIENTIPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKAFKACLIENTIPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetKafkaClientIpRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKafkaClientIpRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetKafkaClientIpRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetKafkaClientIpRequest() = default ;
    GetKafkaClientIpRequest(const GetKafkaClientIpRequest &) = default ;
    GetKafkaClientIpRequest(GetKafkaClientIpRequest &&) = default ;
    GetKafkaClientIpRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKafkaClientIpRequest() = default ;
    GetKafkaClientIpRequest& operator=(const GetKafkaClientIpRequest &) = default ;
    GetKafkaClientIpRequest& operator=(GetKafkaClientIpRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->group_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr && this->topic_ == nullptr
        && this->type_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetKafkaClientIpRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetKafkaClientIpRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetKafkaClientIpRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetKafkaClientIpRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetKafkaClientIpRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetKafkaClientIpRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetKafkaClientIpRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // End time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // Consumer group ID.
    // 
    // > This parameter is required when Type is set to byGroup.
    shared_ptr<string> group_ {};
    // Instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Start time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // Topic name.
    // 
    // > - This parameter is required when Type is set to byTopic.
    shared_ptr<string> topic_ {};
    // The type of client IP query. You can choose from three methods.
    // 
    // - byInstance: Query client IPs for the instance within the specified time range.
    // 
    // - byTopic: Query client IPs for the topic within the specified time range.
    // 
    // - byGroup: Query client IPs for the group within the specified time range.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
