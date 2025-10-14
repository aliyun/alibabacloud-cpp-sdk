// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricListRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeMetricListRequest& obj) { 
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
    DescribeMetricListRequest() = default ;
    DescribeMetricListRequest(const DescribeMetricListRequest &) = default ;
    DescribeMetricListRequest(DescribeMetricListRequest &&) = default ;
    DescribeMetricListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricListRequest() = default ;
    DescribeMetricListRequest& operator=(const DescribeMetricListRequest &) = default ;
    DescribeMetricListRequest& operator=(DescribeMetricListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimensions_ == nullptr
        && return this->endTime_ == nullptr && return this->express_ == nullptr && return this->length_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr
        && return this->nextToken_ == nullptr && return this->period_ == nullptr && return this->regionId_ == nullptr && return this->startTime_ == nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeMetricListRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMetricListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // express Field Functions 
    bool hasExpress() const { return this->express_ != nullptr;};
    void deleteExpress() { this->express_ = nullptr;};
    inline string express() const { DARABONBA_PTR_GET_DEFAULT(express_, "") };
    inline DescribeMetricListRequest& setExpress(string express) { DARABONBA_PTR_SET_VALUE(express_, express) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string length() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline DescribeMetricListRequest& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricListRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMetricListRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeMetricListRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMetricListRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMetricListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The dimensions that specify the resources whose monitoring data you want to query.
    // 
    // Set the value to a collection of key-value pairs. A typical key-value pair is `instanceId:i-2ze2d6j5uhg20x47****`.
    // 
    // >  You can query a maximum of 50 instances in a single request.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The end of the time range to query. The following formats are supported:
    // 
    // *   UNIX timestamp: the number of milliseconds that have elapsed since 00:00:00 Thursday, January 1, 1970
    // *   UTC time: the UTC time that follows the YYYY-MM-DDThh:mm:ssZ format
    std::shared_ptr<string> endTime_ = nullptr;
    // The expression that is used to compute the query results in real time.
    // 
    // >  Only the groupby expression is supported. This expression is similar to the GROUP BY statement that is used in databases.
    std::shared_ptr<string> express_ = nullptr;
    // The number of entries to return on each page.
    // 
    // >  The maximum value of the Length parameter in a request is 1440.
    std::shared_ptr<string> length_ = nullptr;
    // The name of the metric.
    // 
    // For more information about metric names, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service. Format: acs_service name.
    // 
    // For more information about the namespaces of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The paging token.
    // 
    // >  If this parameter is not specified, the data on the first page is returned. A return value other than Null of this parameter indicates that not all entries have been returned. You can use this value as an input parameter to obtain entries on the next page. The value Null indicates that all query results have been returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The interval at which the monitoring data is queried.
    // 
    // Valid values: 60, 300, and 900.
    // 
    // Unit: seconds.
    // 
    // >  Configure this parameter based on your business scenario.
    std::shared_ptr<string> period_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. The following formats are supported:
    // 
    // *   UNIX timestamp: the number of milliseconds that have elapsed since 00:00:00 Thursday, January 1, 1970
    // *   UTC time: the UTC time that follows the YYYY-MM-DDThh:mm:ssZ format
    // 
    // >  The specified period includes the end time and excludes the start time. The start time must be earlier than the end time.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
