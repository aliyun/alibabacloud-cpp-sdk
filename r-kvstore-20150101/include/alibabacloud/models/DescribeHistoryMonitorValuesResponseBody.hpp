// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHISTORYMONITORVALUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHISTORYMONITORVALUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeHistoryMonitorValuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHistoryMonitorValuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MonitorHistory, monitorHistory_);
      DARABONBA_PTR_TO_JSON(MonitorLegend, monitorLegend_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryMonitorValuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorHistory, monitorHistory_);
      DARABONBA_PTR_FROM_JSON(MonitorLegend, monitorLegend_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHistoryMonitorValuesResponseBody() = default ;
    DescribeHistoryMonitorValuesResponseBody(const DescribeHistoryMonitorValuesResponseBody &) = default ;
    DescribeHistoryMonitorValuesResponseBody(DescribeHistoryMonitorValuesResponseBody &&) = default ;
    DescribeHistoryMonitorValuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHistoryMonitorValuesResponseBody() = default ;
    DescribeHistoryMonitorValuesResponseBody& operator=(const DescribeHistoryMonitorValuesResponseBody &) = default ;
    DescribeHistoryMonitorValuesResponseBody& operator=(DescribeHistoryMonitorValuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorHistory_ == nullptr
        && this->monitorLegend_ == nullptr && this->requestId_ == nullptr; };
    // monitorHistory Field Functions 
    bool hasMonitorHistory() const { return this->monitorHistory_ != nullptr;};
    void deleteMonitorHistory() { this->monitorHistory_ = nullptr;};
    inline string getMonitorHistory() const { DARABONBA_PTR_GET_DEFAULT(monitorHistory_, "") };
    inline DescribeHistoryMonitorValuesResponseBody& setMonitorHistory(string monitorHistory) { DARABONBA_PTR_SET_VALUE(monitorHistory_, monitorHistory) };


    // monitorLegend Field Functions 
    bool hasMonitorLegend() const { return this->monitorLegend_ != nullptr;};
    void deleteMonitorLegend() { this->monitorLegend_ = nullptr;};
    inline string getMonitorLegend() const { DARABONBA_PTR_GET_DEFAULT(monitorLegend_, "") };
    inline DescribeHistoryMonitorValuesResponseBody& setMonitorLegend(string monitorLegend) { DARABONBA_PTR_SET_VALUE(monitorLegend_, monitorLegend) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHistoryMonitorValuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitoring information returned in JSON format. For more information, see [Monitoring parameter description](https://help.aliyun.com/document_detail/122091.html).
    // 
    // > To improve data transmission efficiency, only non-zero monitoring data is returned. All other monitoring data that is not displayed has a default value of **0**.
    shared_ptr<string> monitorHistory_ {};
    shared_ptr<string> monitorLegend_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
