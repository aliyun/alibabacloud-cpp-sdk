// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHONEYPOTNODEMETRICLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHONEYPOTNODEMETRICLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetHoneypotNodeMetricListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHoneypotNodeMetricListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Express, express_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetHoneypotNodeMetricListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Express, express_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetHoneypotNodeMetricListRequest() = default ;
    GetHoneypotNodeMetricListRequest(const GetHoneypotNodeMetricListRequest &) = default ;
    GetHoneypotNodeMetricListRequest(GetHoneypotNodeMetricListRequest &&) = default ;
    GetHoneypotNodeMetricListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHoneypotNodeMetricListRequest() = default ;
    GetHoneypotNodeMetricListRequest& operator=(const GetHoneypotNodeMetricListRequest &) = default ;
    GetHoneypotNodeMetricListRequest& operator=(GetHoneypotNodeMetricListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->express_ != nullptr && this->length_ != nullptr && this->metricName_ != nullptr && this->namespace_ != nullptr && this->nodeId_ != nullptr
        && this->period_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetHoneypotNodeMetricListRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // express Field Functions 
    bool hasExpress() const { return this->express_ != nullptr;};
    void deleteExpress() { this->express_ = nullptr;};
    inline string express() const { DARABONBA_PTR_GET_DEFAULT(express_, "") };
    inline GetHoneypotNodeMetricListRequest& setExpress(string express) { DARABONBA_PTR_SET_VALUE(express_, express) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string length() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline GetHoneypotNodeMetricListRequest& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline GetHoneypotNodeMetricListRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetHoneypotNodeMetricListRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetHoneypotNodeMetricListRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline GetHoneypotNodeMetricListRequest& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetHoneypotNodeMetricListRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. Valid values:
    // 
    // *   UNIX timestamp: the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC
    // *   Date format: YYYY-MM-DDThh:mm:ssZ
    std::shared_ptr<string> endTime_ = nullptr;
    // The expression that is used to compute the query results in real time.
    // 
    // >  Only the groupby expression is supported. This expression is similar to the GROUP BY statement that applies to databases.
    std::shared_ptr<string> express_ = nullptr;
    // The number of entries per page.
    // 
    // >  The maximum value of the Length parameter in a request is 1440.
    std::shared_ptr<string> length_ = nullptr;
    // The metric that is used to monitor the cloud service.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service. Format: acs_cloud service name.
    std::shared_ptr<string> namespace_ = nullptr;
    // The management node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The time interval. Unit: seconds. Valid values: 60, 300, and 900.
    std::shared_ptr<string> period_ = nullptr;
    // The beginning of the time range to query. The following formats are supported:
    // 
    // *   UNIX timestamp: the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC
    // *   Date format: YYYY-MM-DDThh:mm:ssZ
    // *   The interval between the start time and the end time is less than or equal to 31 days.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
