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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHistoryMonitorValuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MonitorHistory, monitorHistory_);
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
        && this->requestId_ == nullptr; };
    // monitorHistory Field Functions 
    bool hasMonitorHistory() const { return this->monitorHistory_ != nullptr;};
    void deleteMonitorHistory() { this->monitorHistory_ = nullptr;};
    inline string getMonitorHistory() const { DARABONBA_PTR_GET_DEFAULT(monitorHistory_, "") };
    inline DescribeHistoryMonitorValuesResponseBody& setMonitorHistory(string monitorHistory) { DARABONBA_PTR_SET_VALUE(monitorHistory_, monitorHistory) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHistoryMonitorValuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The monitoring information returned in the JSON format. For more information, see [View performance monitoring data](https://help.aliyun.com/document_detail/122091.html).
    // 
    // *   Only metrics whose values are not 0 are returned. This improves data transmission efficiency. Metrics that are not displayed are represented by the **0** default value.
    // 
    // *   The query result is aligned with the data aggregation frequency. If the specified time range to query is less than or equal to 10 minutes and the data is aggregated once every 5 seconds, query results are returned at an interval of 5 seconds. If the specified StartTime value does not coincide with a point in time for data aggregation, the system returns the latest point in time for data aggregation as the first point in time. For example, if you set the StartTime parameter to 2022-01-20T12:01:48Z, the first point in time returned is 2022-01-20T12:01:45Z.
    shared_ptr<string> monitorHistory_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
