// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMQTTTRACEMESSAGESUBSCRIBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMQTTTRACEMESSAGESUBSCRIBEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryMqttTraceMessageSubscribeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMqttTraceMessageSubscribeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MqttRegionId, mqttRegionId_);
      DARABONBA_PTR_TO_JSON(MsgId, msgId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMqttTraceMessageSubscribeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MqttRegionId, mqttRegionId_);
      DARABONBA_PTR_FROM_JSON(MsgId, msgId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
    };
    QueryMqttTraceMessageSubscribeRequest() = default ;
    QueryMqttTraceMessageSubscribeRequest(const QueryMqttTraceMessageSubscribeRequest &) = default ;
    QueryMqttTraceMessageSubscribeRequest(QueryMqttTraceMessageSubscribeRequest &&) = default ;
    QueryMqttTraceMessageSubscribeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMqttTraceMessageSubscribeRequest() = default ;
    QueryMqttTraceMessageSubscribeRequest& operator=(const QueryMqttTraceMessageSubscribeRequest &) = default ;
    QueryMqttTraceMessageSubscribeRequest& operator=(QueryMqttTraceMessageSubscribeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->clientId_ == nullptr && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->mqttRegionId_ == nullptr
        && this->msgId_ == nullptr && this->pageSize_ == nullptr && this->reverse_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline QueryMqttTraceMessageSubscribeRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline QueryMqttTraceMessageSubscribeRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryMqttTraceMessageSubscribeRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryMqttTraceMessageSubscribeRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryMqttTraceMessageSubscribeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mqttRegionId Field Functions 
    bool hasMqttRegionId() const { return this->mqttRegionId_ != nullptr;};
    void deleteMqttRegionId() { this->mqttRegionId_ = nullptr;};
    inline string getMqttRegionId() const { DARABONBA_PTR_GET_DEFAULT(mqttRegionId_, "") };
    inline QueryMqttTraceMessageSubscribeRequest& setMqttRegionId(string mqttRegionId) { DARABONBA_PTR_SET_VALUE(mqttRegionId_, mqttRegionId) };


    // msgId Field Functions 
    bool hasMsgId() const { return this->msgId_ != nullptr;};
    void deleteMsgId() { this->msgId_ = nullptr;};
    inline string getMsgId() const { DARABONBA_PTR_GET_DEFAULT(msgId_, "") };
    inline QueryMqttTraceMessageSubscribeRequest& setMsgId(string msgId) { DARABONBA_PTR_SET_VALUE(msgId_, msgId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMqttTraceMessageSubscribeRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline QueryMqttTraceMessageSubscribeRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


  protected:
    // The beginning of the time range to query. The value of this parameter is a UNIX timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The ID of the client that subscribes to the message. If you do not specify this parameter, the IDs of all clients that subscribe to the message are returned.
    shared_ptr<string> clientId_ {};
    // The number of the page to return. Pages start from page 1. If the input parameter value is greater than the total number of pages, the returned result is empty.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end of the time range to query. The value of this parameter is a UNIX timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the ApsaraMQ for MQTT instance. The ID must be consistent with the ID of the instance that the ApsaraMQ for MQTT client uses. You can view the instance ID in the **Basic Information** section of the **Instance Details** page that corresponds to the instance in the ApsaraMQ for MQTT console.
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
    // The number of entries to return on each page. Valid values: 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether the returned results are displayed in reverse chronological order. Valid values:
    // 
    // - **true**: The returned results are displayed in reverse order of the time when messages are delivered. This means that the latest consumed message is displayed as the first entry and the earliest consumed message is displayed as the last entry.
    // 
    // - **false**: The returned results are displayed in order of the time when messages are delivered. This means that the earliest consumed message is displayed as the first entry and the latest consumed message is displayed as the last entry.
    // 
    // If you do not specify this parameter, the returned results are displayed in order of time when messages are delivered.
    shared_ptr<bool> reverse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
