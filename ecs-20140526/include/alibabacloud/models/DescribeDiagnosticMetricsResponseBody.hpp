// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDiagnosticMetricsResponseBody() = default ;
    DescribeDiagnosticMetricsResponseBody(const DescribeDiagnosticMetricsResponseBody &) = default ;
    DescribeDiagnosticMetricsResponseBody(DescribeDiagnosticMetricsResponseBody &&) = default ;
    DescribeDiagnosticMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticMetricsResponseBody() = default ;
    DescribeDiagnosticMetricsResponseBody& operator=(const DescribeDiagnosticMetricsResponseBody &) = default ;
    DescribeDiagnosticMetricsResponseBody& operator=(DescribeDiagnosticMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Metrics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(GuestMetric, guestMetric_);
        DARABONBA_PTR_TO_JSON(MetricCategory, metricCategory_);
        DARABONBA_PTR_TO_JSON(MetricId, metricId_);
        DARABONBA_PTR_TO_JSON(MetricName, metricName_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SupportedOperatingSystem, supportedOperatingSystem_);
      };
      friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(GuestMetric, guestMetric_);
        DARABONBA_PTR_FROM_JSON(MetricCategory, metricCategory_);
        DARABONBA_PTR_FROM_JSON(MetricId, metricId_);
        DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SupportedOperatingSystem, supportedOperatingSystem_);
      };
      Metrics() = default ;
      Metrics(const Metrics &) = default ;
      Metrics(Metrics &&) = default ;
      Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Metrics() = default ;
      Metrics& operator=(const Metrics &) = default ;
      Metrics& operator=(Metrics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->guestMetric_ == nullptr && this->metricCategory_ == nullptr && this->metricId_ == nullptr && this->metricName_ == nullptr && this->resourceType_ == nullptr
        && this->supportedOperatingSystem_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Metrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // guestMetric Field Functions 
      bool hasGuestMetric() const { return this->guestMetric_ != nullptr;};
      void deleteGuestMetric() { this->guestMetric_ = nullptr;};
      inline bool getGuestMetric() const { DARABONBA_PTR_GET_DEFAULT(guestMetric_, false) };
      inline Metrics& setGuestMetric(bool guestMetric) { DARABONBA_PTR_SET_VALUE(guestMetric_, guestMetric) };


      // metricCategory Field Functions 
      bool hasMetricCategory() const { return this->metricCategory_ != nullptr;};
      void deleteMetricCategory() { this->metricCategory_ = nullptr;};
      inline string getMetricCategory() const { DARABONBA_PTR_GET_DEFAULT(metricCategory_, "") };
      inline Metrics& setMetricCategory(string metricCategory) { DARABONBA_PTR_SET_VALUE(metricCategory_, metricCategory) };


      // metricId Field Functions 
      bool hasMetricId() const { return this->metricId_ != nullptr;};
      void deleteMetricId() { this->metricId_ = nullptr;};
      inline string getMetricId() const { DARABONBA_PTR_GET_DEFAULT(metricId_, "") };
      inline Metrics& setMetricId(string metricId) { DARABONBA_PTR_SET_VALUE(metricId_, metricId) };


      // metricName Field Functions 
      bool hasMetricName() const { return this->metricName_ != nullptr;};
      void deleteMetricName() { this->metricName_ = nullptr;};
      inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
      inline Metrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Metrics& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // supportedOperatingSystem Field Functions 
      bool hasSupportedOperatingSystem() const { return this->supportedOperatingSystem_ != nullptr;};
      void deleteSupportedOperatingSystem() { this->supportedOperatingSystem_ = nullptr;};
      inline string getSupportedOperatingSystem() const { DARABONBA_PTR_GET_DEFAULT(supportedOperatingSystem_, "") };
      inline Metrics& setSupportedOperatingSystem(string supportedOperatingSystem) { DARABONBA_PTR_SET_VALUE(supportedOperatingSystem_, supportedOperatingSystem) };


    protected:
      // The description of the diagnostic metric.
      shared_ptr<string> description_ {};
      // Indicates whether the diagnostic metric needs to be assessed by running a Cloud Assistant command in a guest operating system.
      shared_ptr<bool> guestMetric_ {};
      // The category of the diagnostic metric.
      shared_ptr<string> metricCategory_ {};
      // The ID of the diagnostic metric.
      shared_ptr<string> metricId_ {};
      // The name of the diagnostic metric.
      shared_ptr<string> metricName_ {};
      // The resource type supported by the diagnostic metric.
      shared_ptr<string> resourceType_ {};
      // The operating system type supported by the diagnostic metric. Valid values:
      // 
      // *   Windows
      // *   Linux
      // *   All: Windows and Linux
      shared_ptr<string> supportedOperatingSystem_ {};
    };

    virtual bool empty() const override { return this->metrics_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<DescribeDiagnosticMetricsResponseBody::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<DescribeDiagnosticMetricsResponseBody::Metrics>) };
    inline vector<DescribeDiagnosticMetricsResponseBody::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<DescribeDiagnosticMetricsResponseBody::Metrics>) };
    inline DescribeDiagnosticMetricsResponseBody& setMetrics(const vector<DescribeDiagnosticMetricsResponseBody::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline DescribeDiagnosticMetricsResponseBody& setMetrics(vector<DescribeDiagnosticMetricsResponseBody::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiagnosticMetricsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDiagnosticMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The diagnostic metrics.
    shared_ptr<vector<DescribeDiagnosticMetricsResponseBody::Metrics>> metrics_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
