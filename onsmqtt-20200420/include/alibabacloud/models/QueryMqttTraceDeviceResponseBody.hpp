// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMQTTTRACEDEVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMQTTTRACEDEVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryMqttTraceDeviceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMqttTraceDeviceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeviceInfoList, deviceInfoList_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMqttTraceDeviceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeviceInfoList, deviceInfoList_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    QueryMqttTraceDeviceResponseBody() = default ;
    QueryMqttTraceDeviceResponseBody(const QueryMqttTraceDeviceResponseBody &) = default ;
    QueryMqttTraceDeviceResponseBody(QueryMqttTraceDeviceResponseBody &&) = default ;
    QueryMqttTraceDeviceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMqttTraceDeviceResponseBody() = default ;
    QueryMqttTraceDeviceResponseBody& operator=(const QueryMqttTraceDeviceResponseBody &) = default ;
    QueryMqttTraceDeviceResponseBody& operator=(QueryMqttTraceDeviceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeviceInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(ActionCode, actionCode_);
        DARABONBA_PTR_TO_JSON(ActionInfo, actionInfo_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(Time, time_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(ActionCode, actionCode_);
        DARABONBA_PTR_FROM_JSON(ActionInfo, actionInfo_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
      };
      DeviceInfoList() = default ;
      DeviceInfoList(const DeviceInfoList &) = default ;
      DeviceInfoList(DeviceInfoList &&) = default ;
      DeviceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceInfoList() = default ;
      DeviceInfoList& operator=(const DeviceInfoList &) = default ;
      DeviceInfoList& operator=(DeviceInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->actionCode_ == nullptr && this->actionInfo_ == nullptr && this->channelId_ == nullptr && this->time_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline DeviceInfoList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // actionCode Field Functions 
      bool hasActionCode() const { return this->actionCode_ != nullptr;};
      void deleteActionCode() { this->actionCode_ = nullptr;};
      inline string getActionCode() const { DARABONBA_PTR_GET_DEFAULT(actionCode_, "") };
      inline DeviceInfoList& setActionCode(string actionCode) { DARABONBA_PTR_SET_VALUE(actionCode_, actionCode) };


      // actionInfo Field Functions 
      bool hasActionInfo() const { return this->actionInfo_ != nullptr;};
      void deleteActionInfo() { this->actionInfo_ = nullptr;};
      inline string getActionInfo() const { DARABONBA_PTR_GET_DEFAULT(actionInfo_, "") };
      inline DeviceInfoList& setActionInfo(string actionInfo) { DARABONBA_PTR_SET_VALUE(actionInfo_, actionInfo) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline DeviceInfoList& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline DeviceInfoList& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    protected:
      // The device action. Valid values:
      // 
      // - **connect**: The client requests a connection to the server.
      // 
      // - **close**: The TCP connection is closed.
      // 
      // - **disconnect**: The client requests to disconnect from the server.
      shared_ptr<string> action_ {};
      // The return code of the device action. Valid values:
      // 
      // - **mqtt.trace.action.connect**: returned when the device action is **connect**.
      // 
      // - **mqtt.trace.action.close**: returned when the device action is **close**.
      // 
      // - **mqtt.trace.action.disconnect**: returned when the device action is **disconnect**.
      shared_ptr<string> actionCode_ {};
      // The description of the device action. Valid values:
      // 
      // - **accepted**: The server accepts the connection request from the client.
      // 
      // - **not authorized**: The TCP connection is closed because the permission verification of the instance accessed by the client fails.
      // 
      // - **clientId conflict**: The TCP connection is closed because of a client ID conflict.
      // 
      // - **resource auth failed**: The TCP connection is closed because the permission verification of the topic or group ID resource accessed by the client fails.
      // 
      // - **no heart**: The TCP connection is closed because no heartbeat is detected from the client.
      // 
      // - **closed by client**: The TCP connection is closed because of a client exception.
      // 
      // - **disconnected by client**: The client requests to disconnect.
      // 
      // - **invalid param**: The TCP connection is closed because of invalid request parameters.
      // 
      // - **Socket IOException**: The TCP connection is closed because of network jitter or packet loss.
      shared_ptr<string> actionInfo_ {};
      // The connection identifier of the device.
      shared_ptr<string> channelId_ {};
      // The time when the device action occurred.
      shared_ptr<string> time_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->deviceInfoList_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryMqttTraceDeviceResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceInfoList Field Functions 
    bool hasDeviceInfoList() const { return this->deviceInfoList_ != nullptr;};
    void deleteDeviceInfoList() { this->deviceInfoList_ = nullptr;};
    inline const vector<QueryMqttTraceDeviceResponseBody::DeviceInfoList> & getDeviceInfoList() const { DARABONBA_PTR_GET_CONST(deviceInfoList_, vector<QueryMqttTraceDeviceResponseBody::DeviceInfoList>) };
    inline vector<QueryMqttTraceDeviceResponseBody::DeviceInfoList> getDeviceInfoList() { DARABONBA_PTR_GET(deviceInfoList_, vector<QueryMqttTraceDeviceResponseBody::DeviceInfoList>) };
    inline QueryMqttTraceDeviceResponseBody& setDeviceInfoList(const vector<QueryMqttTraceDeviceResponseBody::DeviceInfoList> & deviceInfoList) { DARABONBA_PTR_SET_VALUE(deviceInfoList_, deviceInfoList) };
    inline QueryMqttTraceDeviceResponseBody& setDeviceInfoList(vector<QueryMqttTraceDeviceResponseBody::DeviceInfoList> && deviceInfoList) { DARABONBA_PTR_SET_RVALUE(deviceInfoList_, deviceInfoList) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMqttTraceDeviceResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMqttTraceDeviceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline QueryMqttTraceDeviceResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The details of the device activity entries.
    shared_ptr<vector<QueryMqttTraceDeviceResponseBody::DeviceInfoList>> deviceInfoList_ {};
    // The maximum number of device activity entries displayed per page.
    shared_ptr<int32_t> pageSize_ {};
    // A common parameter. Each request has a unique ID that is active for troubleshooting and locating issues.
    shared_ptr<string> requestId_ {};
    // The total number of device activity entries returned.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
