// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMQTTTRACEMESSAGEPUBLISHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMQTTTRACEMESSAGEPUBLISHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryMqttTraceMessagePublishRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMqttTraceMessagePublishRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MqttRegionId, mqttRegionId_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMqttTraceMessagePublishRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MqttRegionId, mqttRegionId_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
    };
    QueryMqttTraceMessagePublishRequest() = default ;
    QueryMqttTraceMessagePublishRequest(const QueryMqttTraceMessagePublishRequest &) = default ;
    QueryMqttTraceMessagePublishRequest(QueryMqttTraceMessagePublishRequest &&) = default ;
    QueryMqttTraceMessagePublishRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMqttTraceMessagePublishRequest() = default ;
    QueryMqttTraceMessagePublishRequest& operator=(const QueryMqttTraceMessagePublishRequest &) = default ;
    QueryMqttTraceMessagePublishRequest& operator=(QueryMqttTraceMessagePublishRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->mqttRegionId_ == nullptr && this->msgId_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline QueryMqttTraceMessagePublishRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryMqttTraceMessagePublishRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryMqttTraceMessagePublishRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mqttRegionId Field Functions 
    bool hasMqttRegionId() const { return this->mqttRegionId_ != nullptr;};
    void deleteMqttRegionId() { this->mqttRegionId_ = nullptr;};
    inline string getMqttRegionId() const { DARABONBA_PTR_GET_DEFAULT(mqttRegionId_, "") };
    inline QueryMqttTraceMessagePublishRequest& setMqttRegionId(string mqttRegionId) { DARABONBA_PTR_SET_VALUE(mqttRegionId_, mqttRegionId) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline QueryMqttTraceMessagePublishRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


  protected:
    // The beginning of the time range to query. The value of this parameter is a UNIX timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The end of the time range to query. The value of this parameter is a UNIX timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the ApsaraMQ for MQTT instance. The ID must be consistent with the ID of the instance that the ApsaraMQ for MQTT client uses. You can view the instance ID in the **Basic Information** section on the **Instance Details** page that corresponds to the instance in the ApsaraMQ for MQTT console.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the region where the ApsaraMQ for MQTT instance resides. For more information, see [Endpoints](https://help.aliyun.com/document_detail/181438.html).
    // 
    // This parameter is required.
    shared_ptr<string> mqttRegionId_ {};
    // The message ID.
    // 
    // This parameter is required.
    shared_ptr<string> msgId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
