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
        && return this->endTime_ == nullptr && return this->express_ == nullptr && return this->length_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr
        && return this->nextToken_ == nullptr && return this->period_ == nullptr && return this->regionId_ == nullptr && return this->startTime_ == nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeMetricLastRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMetricLastRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // express Field Functions 
    bool hasExpress() const { return this->express_ != nullptr;};
    void deleteExpress() { this->express_ = nullptr;};
    inline string express() const { DARABONBA_PTR_GET_DEFAULT(express_, "") };
    inline DescribeMetricLastRequest& setExpress(string express) { DARABONBA_PTR_SET_VALUE(express_, express) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string length() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline DescribeMetricLastRequest& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricLastRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricLastRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeMetricLastRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeMetricLastRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMetricLastRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMetricLastRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The monitoring dimensions of the specified resource.
    // 
    // Set the value to a collection of `key:value` pairs. Example: `{"userId":"120886317861****"}` or `{"instanceId":"i-2ze2d6j5uhg20x47****"}`.
    // 
    // >  You can query a maximum of 50 instances in each request.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The end of the time range to query monitoring data.
    // 
    // *   For second-level data, the start time is obtained by comparing the time that is specified by the StartTime parameter and 20 minutes earlier of the time that is specified by the EndTime parameter. The earlier one of the compared points in time is used as the start time.
    // *   For minute-level data, the start time is obtained by comparing the time that is specified by the StartTime parameter and 2 hours earlier of the time that is specified by the EndTime parameter. The earlier one of the compared points in time is used as the start time.
    // *   For hour-level data, the start time is obtained by comparing the time that is specified by the StartTime parameter and two days earlier of the time that is specified by the EndTime parameter. The earlier one of the compared points in time is used as the start time.
    std::shared_ptr<string> endTime_ = nullptr;
    // The expression that is used to calculate the query results in real time.
    std::shared_ptr<string> express_ = nullptr;
    // The number of entries per page.
    // 
    // Default value: 1000. This value indicates that a maximum of 1,000 entries of monitoring data can be returned on each page.
    // 
    // >  The maximum value of the Length parameter for each request is 1440.
    std::shared_ptr<string> length_ = nullptr;
    // The metric that is used to monitor the cloud service.
    // 
    // For more information about metric names, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service.
    // 
    // For more information about the namespaces of cloud services, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The pagination token.
    // 
    // *   If the number of results exceeds the maximum number of entries allowed on a single page, a pagination token is returned.
    // *   This token can be used as an input parameter to obtain the next page of results. If all results are obtained, no token is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The statistical period of the monitoring data.
    // 
    // Valid values: 15, 60, 900, and 3600.
    // 
    // Unit: seconds.
    // 
    // > 
    // 
    // *   If this parameter is not specified, monitoring data is queried based on the period in which metric values are reported. The statistical period of metrics (`MetricName`) varies for each cloud service. The statistical period of metrics is displayed in the `MinPeriods` column on the **Metrics** page for each cloud service. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> period_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The start of the time range to query monitoring data.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
