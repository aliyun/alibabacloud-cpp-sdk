// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMQTTTRACEDEVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMQTTTRACEDEVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OnsMqtt20200420
{
namespace Models
{
  class QueryMqttTraceDeviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMqttTraceDeviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MqttRegionId, mqttRegionId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Reverse, reverse_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMqttTraceDeviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MqttRegionId, mqttRegionId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Reverse, reverse_);
    };
    QueryMqttTraceDeviceRequest() = default ;
    QueryMqttTraceDeviceRequest(const QueryMqttTraceDeviceRequest &) = default ;
    QueryMqttTraceDeviceRequest(QueryMqttTraceDeviceRequest &&) = default ;
    QueryMqttTraceDeviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMqttTraceDeviceRequest() = default ;
    QueryMqttTraceDeviceRequest& operator=(const QueryMqttTraceDeviceRequest &) = default ;
    QueryMqttTraceDeviceRequest& operator=(QueryMqttTraceDeviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->clientId_ == nullptr && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->mqttRegionId_ == nullptr
        && this->pageSize_ == nullptr && this->reverse_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline QueryMqttTraceDeviceRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline QueryMqttTraceDeviceRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryMqttTraceDeviceRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryMqttTraceDeviceRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryMqttTraceDeviceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mqttRegionId Field Functions 
    bool hasMqttRegionId() const { return this->mqttRegionId_ != nullptr;};
    void deleteMqttRegionId() { this->mqttRegionId_ = nullptr;};
    inline string getMqttRegionId() const { DARABONBA_PTR_GET_DEFAULT(mqttRegionId_, "") };
    inline QueryMqttTraceDeviceRequest& setMqttRegionId(string mqttRegionId) { DARABONBA_PTR_SET_VALUE(mqttRegionId_, mqttRegionId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMqttTraceDeviceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reverse Field Functions 
    bool hasReverse() const { return this->reverse_ != nullptr;};
    void deleteReverse() { this->reverse_ = nullptr;};
    inline bool getReverse() const { DARABONBA_PTR_GET_DEFAULT(reverse_, false) };
    inline QueryMqttTraceDeviceRequest& setReverse(bool reverse) { DARABONBA_PTR_SET_VALUE(reverse_, reverse) };


  protected:
    // The beginning of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The client ID of the device whose trace information you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> clientId_ {};
    // The number of the page to return. Pages start from page 1. If the value of this parameter exceeds the total number of pages, an empty result is returned.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end of the time range to query. Unit: milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the ApsaraMQ for MQTT instance. This value must match the instance ID that the client actually uses. You can view the instance ID in the **Basic Information** area on the **Instance Details** page in the console.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the ApsaraMQ for MQTT instance. For more information, see [Endpoints](https://help.aliyun.com/document_detail/181438.html).
    // 
    // This parameter is required.
    shared_ptr<string> mqttRegionId_ {};
    // The maximum number of MSMQ to display on each page for paging. Minimum value: 1. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // Specifies whether to display the results in reverse chronological order. Valid values:
    // 
    // - **true**: Results are displayed in reverse chronological order of device activity time. The most recent device activity is displayed first, and the earliest device activity is displayed last.
    // 
    // - **false**: Results are displayed in chronological order of device activity time. The earliest device activity is displayed first, and the most recent device activity is displayed last.
    // 
    // If this parameter is not specified, results are displayed in chronological order by default.
    shared_ptr<bool> reverse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OnsMqtt20200420
#endif
