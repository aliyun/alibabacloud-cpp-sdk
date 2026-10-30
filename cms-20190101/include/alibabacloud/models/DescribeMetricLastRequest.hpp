// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLASTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricLastRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricLastRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Express, express_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricLastRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Express, express_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeMetricLastRequest() = default ;
    DescribeMetricLastRequest(const DescribeMetricLastRequest &) = default ;
    DescribeMetricLastRequest(DescribeMetricLastRequest &&) = default ;
    DescribeMetricLastRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricLastRequest() = default ;
    DescribeMetricLastRequest& operator=(const DescribeMetricLastRequest &) = default ;
    DescribeMetricLastRequest& operator=(DescribeMetricLastRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimensions_ == nullptr
        && this->endTime_ == nullptr && this->express_ == nullptr && this->length_ == nullptr && this->metricName_ == nullptr && this->namespace_ == nullptr
        && this->nextToken_ == nullptr && this->period_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string getDimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeMetricLastRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMetricLastRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // express Field Functions 
    bool hasExpress() const { return this->express_ != nullptr;};
    void deleteExpress() { this->express_ = nullptr;};
    inline string getExpress() const { DARABONBA_PTR_GET_DEFAULT(express_, "") };
    inline DescribeMetricLastRequest& setExpress(string express) { DARABONBA_PTR_SET_VALUE(express_, express) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline DescribeMetricLastRequest& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricLastRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricLastRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMetricLastRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeMetricLastRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMetricLastRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMetricLastRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The monitoring dimensions of the specified resource.
    // 
    // Format: a collection of `key:value` pairs. Example: `{"userId":"120886317861****"}` or `{"instanceId":"i-2ze2d6j5uhg20x47****"}`.
    // 
    // > A maximum of 50 instances can be queried in a single request.
    shared_ptr<string> dimensions_ {};
    // The end time for querying the metric.
    // 
    // The system automatically limits the query start time (query window size) based on data granularity:
    // 1. Second-level data: The maximum query span is 20 minutes (start time = Max(startTime, EndTime - 20min)).
    // 2. Minute-level data: The maximum query span is 2 hours (start time = Max(startTime, EndTime - 2h)).
    // 3. Hour-level data: The maximum query span is 2 days (start time = Max(startTime, EndTime - 2d)).
    // 
    // > If the specified startTime is earlier than the limit, the system automatically uses the limit as the actual query start time.
    shared_ptr<string> endTime_ {};
    // The expression for real-time computation on existing query results.
    shared_ptr<string> express_ {};
    // The number of entries per page for monitoring data. This parameter is used for paged query.
    // 
    // Default value: 1000, which indicates 1000 entries of monitoring data per page.
    // 
    // > The maximum value of Length in a single request is 1440.
    shared_ptr<string> length_ {};
    // The metric name of the cloud service.
    // 
    // For information about metric names, see [Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<string> metricName_ {};
    // The namespace of the cloud service.
    // 
    // For information about namespaces of cloud services, see [Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The pagination cursor.
    // 
    // - If the query results that match the filter conditions exceed the page size, a pagination cursor is returned.
    // - To retrieve the next page of data, use the returned cursor value as the request parameter until no cursor value is returned, which indicates that all data has been retrieved.
    shared_ptr<string> nextToken_ {};
    // The statistical period of the monitoring data.
    // 
    // Valid values: 15, 60, 900, and 3600.
    // 
    // Unit: seconds.
    // 
    // > - If you do not set the statistical period, monitoring data is queried based on the reporting period that was specified when the metric was registered.
    //     - The statistical period varies by metric (`MetricName`) for each cloud service. For more information, see the `Min Periods` column on the metric list page of the target cloud service in [Cloud service monitoring metrics](https://help.aliyun.com/document_detail/163515.html).
    shared_ptr<string> period_ {};
    shared_ptr<string> regionId_ {};
    // The start time.
    // 
    // Two formats are supported: 1. A UNIX timestamp string in milliseconds (ms), which represents the number of milliseconds elapsed since 1970-01-01 00:00:00 UTC. 2. A time string in the ISO 8601 format of YYYY-MM-DDThh:mm:ssZ in UTC.
    // 
    // > The query range uses a left-exclusive and right-inclusive mode. StartTime cannot be equal to or greater than EndTime, and the interval between them must be less than or equal to 31 days.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
