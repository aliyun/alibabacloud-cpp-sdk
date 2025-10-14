// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICTOPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICTOPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMetricTopRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricTopRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Express, express_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(OrderDesc, orderDesc_);
      DARABONBA_PTR_TO_JSON(Orderby, orderby_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricTopRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Express, express_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(OrderDesc, orderDesc_);
      DARABONBA_PTR_FROM_JSON(Orderby, orderby_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeMetricTopRequest() = default ;
    DescribeMetricTopRequest(const DescribeMetricTopRequest &) = default ;
    DescribeMetricTopRequest(DescribeMetricTopRequest &&) = default ;
    DescribeMetricTopRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricTopRequest() = default ;
    DescribeMetricTopRequest& operator=(const DescribeMetricTopRequest &) = default ;
    DescribeMetricTopRequest& operator=(DescribeMetricTopRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dimensions_ == nullptr
        && return this->endTime_ == nullptr && return this->express_ == nullptr && return this->length_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr
        && return this->orderDesc_ == nullptr && return this->orderby_ == nullptr && return this->period_ == nullptr && return this->regionId_ == nullptr && return this->startTime_ == nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline DescribeMetricTopRequest& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMetricTopRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // express Field Functions 
    bool hasExpress() const { return this->express_ != nullptr;};
    void deleteExpress() { this->express_ = nullptr;};
    inline string express() const { DARABONBA_PTR_GET_DEFAULT(express_, "") };
    inline DescribeMetricTopRequest& setExpress(string express) { DARABONBA_PTR_SET_VALUE(express_, express) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string length() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline DescribeMetricTopRequest& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricTopRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeMetricTopRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // orderDesc Field Functions 
    bool hasOrderDesc() const { return this->orderDesc_ != nullptr;};
    void deleteOrderDesc() { this->orderDesc_ = nullptr;};
    inline string orderDesc() const { DARABONBA_PTR_GET_DEFAULT(orderDesc_, "") };
    inline DescribeMetricTopRequest& setOrderDesc(string orderDesc) { DARABONBA_PTR_SET_VALUE(orderDesc_, orderDesc) };


    // orderby Field Functions 
    bool hasOrderby() const { return this->orderby_ != nullptr;};
    void deleteOrderby() { this->orderby_ = nullptr;};
    inline string orderby() const { DARABONBA_PTR_GET_DEFAULT(orderby_, "") };
    inline DescribeMetricTopRequest& setOrderby(string orderby) { DARABONBA_PTR_SET_VALUE(orderby_, orderby) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline DescribeMetricTopRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMetricTopRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMetricTopRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The monitoring dimensions of the specified resource.
    // 
    // Set the value to a collection of `key:value` pairs. Example: `{"userId":"120886317861****"}` or `{"instanceId":"i-2ze2d6j5uhg20x47****"}`.
    // 
    // >  You can query a maximum of 50 instances in each request.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The end of the time range to query monitoring data.
    // 
    // *   If the `StartTime` and `EndTime` parameters are not specified, the monitoring data of the last statistical period is queried.``
    // 
    // *   If the `StartTime` and `EndTime` parameters are specified, the monitoring data of the last statistical period in the specified time range is queried.````
    // 
    //     *   If you set the `Period` parameter to 15, the specified time range must be less than or equal to 20 minutes. For example, if you set the StartTime parameter to 2021-05-08 08:10:00 and the EndTime parameter to 2021-05-08 08:30:00, the monitoring data of the last 15 seconds in the time range is queried.
    //     *   If you set the `Period` parameter to 60 or 900, the specified time range must be less than or equal to 2 hours. For example, if you set the Period parameter to 60, the StartTime parameter to 2021-05-08 08:00:00, and the EndTime parameter to 2021-05-08 10:00:00, the monitoring data of the last 60 seconds in the time range is queried.
    //     *   If you set the `Period` parameter to 3600, the specified time range must be less than or equal to two days. For example, if you set the StartTime parameter to 2021-05-08 08:00:00 and the EndTime parameter to 2021-05-10 08:00:00, the monitoring data of the last 3,600 seconds in the time range is queried.
    // 
    // The following formats are supported:
    // 
    // *   UNIX timestamp: the number of milliseconds that have elapsed since 00:00:00 Thursday, January 1, 1970
    // *   Time format: YYYY-MM-DDThh:mm:ssZ
    // 
    // >  We recommend that you use UNIX timestamps to prevent time zone-related issues.
    std::shared_ptr<string> endTime_ = nullptr;
    // The expression that is used to compute the query results in real time.
    // 
    // >  Only the `groupby` expression is supported. This expression is similar to the GROUP BY statement used in databases.
    std::shared_ptr<string> express_ = nullptr;
    // The number of entries per page.
    // 
    // Default value: 10.
    // 
    // >  The maximum value of the Length parameter in a request is 1440.
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
    // The order in which data is sorted. Valid values:
    // 
    // *   True: sorts data in ascending order.
    // *   False (default): sorts data in descending order.
    std::shared_ptr<string> orderDesc_ = nullptr;
    // The field based on which data is sorted. Valid values:
    // 
    // *   Average
    // *   Minimum
    // *   Maximum
    // 
    // This parameter is required.
    std::shared_ptr<string> orderby_ = nullptr;
    // The statistical period of the monitoring data.
    // 
    // Valid values: 15, 60, 900, and 3600.
    // 
    // Unit: seconds.
    // 
    // > 
    // 
    // *   If this parameter is not specified, monitoring data is queried based on the period in which metric values are reported.
    // 
    // *   Statistical periods vary based on the metrics that are specified by `MetricName`. For more information, see [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    std::shared_ptr<string> period_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The start of the time range to query monitoring data.
    // 
    // *   If the `StartTime` and `EndTime` parameters are not specified, the monitoring data of the last statistical period is queried.``
    // 
    // *   If the `StartTime` and `EndTime` parameters are specified, the monitoring data of the last statistical period in the specified time range is queried.````
    // 
    //     *   If you set the `Period` parameter to 15, the specified time range must be less than or equal to 20 minutes. For example, if you set the StartTime parameter to 2021-05-08 08:10:00 and the EndTime parameter to 2021-05-08 08:30:00, the monitoring data of the last 15 seconds in the time range is queried.
    //     *   If you set the `Period` parameter to 60 or 900, the specified time range must be less than or equal to 2 hours. For example, if you set the Period parameter to 60, the StartTime parameter to 2021-05-08 08:00:00, and the EndTime parameter to 2021-05-08 10:00:00, the monitoring data of the last 60 seconds in the time range is queried.
    //     *   If you set the `Period` parameter to 3600, the specified time range must be less than or equal to two days. For example, if you set the StartTime parameter to 2021-05-08 08:00:00 and the EndTime parameter to 2021-05-10 08:00:00, the monitoring data of the last 3,600 seconds in the time range is queried.
    // 
    // The following formats are supported:
    // 
    // *   UNIX timestamp: the number of milliseconds that have elapsed since 00:00:00 Thursday, January 1, 1970
    // *   Time format: YYYY-MM-DDThh:mm:ssZ
    // 
    // > 
    // 
    // *   You must set the `StartTime` parameter to a point in time that is later than 00:00:00 Thursday, January 1, 1970. Otherwise, this parameter is invalid.
    // 
    // *   We recommend that you use UNIX timestamps to prevent time zone-related issues.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
