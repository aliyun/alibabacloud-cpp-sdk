// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSRESPONSEBODYMETRICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICMETRICSRESPONSEBODYMETRICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticMetricsResponseBodyMetrics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticMetricsResponseBodyMetrics& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GuestMetric, guestMetric_);
      DARABONBA_PTR_TO_JSON(MetricCategory, metricCategory_);
      DARABONBA_PTR_TO_JSON(MetricId, metricId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SupportedOperatingSystem, supportedOperatingSystem_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticMetricsResponseBodyMetrics& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GuestMetric, guestMetric_);
      DARABONBA_PTR_FROM_JSON(MetricCategory, metricCategory_);
      DARABONBA_PTR_FROM_JSON(MetricId, metricId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SupportedOperatingSystem, supportedOperatingSystem_);
    };
    DescribeDiagnosticMetricsResponseBodyMetrics() = default ;
    DescribeDiagnosticMetricsResponseBodyMetrics(const DescribeDiagnosticMetricsResponseBodyMetrics &) = default ;
    DescribeDiagnosticMetricsResponseBodyMetrics(DescribeDiagnosticMetricsResponseBodyMetrics &&) = default ;
    DescribeDiagnosticMetricsResponseBodyMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticMetricsResponseBodyMetrics() = default ;
    DescribeDiagnosticMetricsResponseBodyMetrics& operator=(const DescribeDiagnosticMetricsResponseBodyMetrics &) = default ;
    DescribeDiagnosticMetricsResponseBodyMetrics& operator=(DescribeDiagnosticMetricsResponseBodyMetrics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->guestMetric_ != nullptr && this->metricCategory_ != nullptr && this->metricId_ != nullptr && this->metricName_ != nullptr && this->resourceType_ != nullptr
        && this->supportedOperatingSystem_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDiagnosticMetricsResponseBodyMetrics& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // guestMetric Field Functions 
    bool hasGuestMetric() const { return this->guestMetric_ != nullptr;};
    void deleteGuestMetric() { this->guestMetric_ = nullptr;};
    inline bool guestMetric() const { DARABONBA_PTR_GET_DEFAULT(guestMetric_, false) };
    inline DescribeDiagnosticMetricsResponseBodyMetrics& setGuestMetric(bool guestMetric) { DARABONBA_PTR_SET_VALUE(guestMetric_, guestMetric) };


    // metricCategory Field Functions 
    bool hasMetricCategory() const { return this->metricCategory_ != nullptr;};
    void deleteMetricCategory() { this->metricCategory_ = nullptr;};
    inline string metricCategory() const { DARABONBA_PTR_GET_DEFAULT(metricCategory_, "") };
    inline DescribeDiagnosticMetricsResponseBodyMetrics& setMetricCategory(string metricCategory) { DARABONBA_PTR_SET_VALUE(metricCategory_, metricCategory) };


    // metricId Field Functions 
    bool hasMetricId() const { return this->metricId_ != nullptr;};
    void deleteMetricId() { this->metricId_ = nullptr;};
    inline string metricId() const { DARABONBA_PTR_GET_DEFAULT(metricId_, "") };
    inline DescribeDiagnosticMetricsResponseBodyMetrics& setMetricId(string metricId) { DARABONBA_PTR_SET_VALUE(metricId_, metricId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeDiagnosticMetricsResponseBodyMetrics& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeDiagnosticMetricsResponseBodyMetrics& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // supportedOperatingSystem Field Functions 
    bool hasSupportedOperatingSystem() const { return this->supportedOperatingSystem_ != nullptr;};
    void deleteSupportedOperatingSystem() { this->supportedOperatingSystem_ = nullptr;};
    inline string supportedOperatingSystem() const { DARABONBA_PTR_GET_DEFAULT(supportedOperatingSystem_, "") };
    inline DescribeDiagnosticMetricsResponseBodyMetrics& setSupportedOperatingSystem(string supportedOperatingSystem) { DARABONBA_PTR_SET_VALUE(supportedOperatingSystem_, supportedOperatingSystem) };


  protected:
    // The description of the diagnostic metric.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the diagnostic metric needs to be assessed by running a Cloud Assistant command in a guest operating system.
    std::shared_ptr<bool> guestMetric_ = nullptr;
    // The category of the diagnostic metric.
    std::shared_ptr<string> metricCategory_ = nullptr;
    // The ID of the diagnostic metric.
    std::shared_ptr<string> metricId_ = nullptr;
    // The name of the diagnostic metric.
    std::shared_ptr<string> metricName_ = nullptr;
    // The resource type supported by the diagnostic metric.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The operating system type supported by the diagnostic metric. Valid values:
    // 
    // *   Windows
    // *   Linux
    // *   All: Windows and Linux
    std::shared_ptr<string> supportedOperatingSystem_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
