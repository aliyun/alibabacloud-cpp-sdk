// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDMONITORINGPROMETHEUSESCALATION_HPP_
#define ALIBABACLOUD_MODELS_CLOUDMONITORINGPROMETHEUSESCALATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CloudMonitoringPrometheusEscalation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudMonitoringPrometheusEscalation& obj) { 
      DARABONBA_PTR_TO_JSON(promQl, promQl_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(times, times_);
    };
    friend void from_json(const Darabonba::Json& j, CloudMonitoringPrometheusEscalation& obj) { 
      DARABONBA_PTR_FROM_JSON(promQl, promQl_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(times, times_);
    };
    CloudMonitoringPrometheusEscalation() = default ;
    CloudMonitoringPrometheusEscalation(const CloudMonitoringPrometheusEscalation &) = default ;
    CloudMonitoringPrometheusEscalation(CloudMonitoringPrometheusEscalation &&) = default ;
    CloudMonitoringPrometheusEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudMonitoringPrometheusEscalation() = default ;
    CloudMonitoringPrometheusEscalation& operator=(const CloudMonitoringPrometheusEscalation &) = default ;
    CloudMonitoringPrometheusEscalation& operator=(CloudMonitoringPrometheusEscalation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->promQl_ == nullptr
        && this->severity_ == nullptr && this->times_ == nullptr; };
    // promQl Field Functions 
    bool hasPromQl() const { return this->promQl_ != nullptr;};
    void deletePromQl() { this->promQl_ = nullptr;};
    inline string getPromQl() const { DARABONBA_PTR_GET_DEFAULT(promQl_, "") };
    inline CloudMonitoringPrometheusEscalation& setPromQl(string promQl) { DARABONBA_PTR_SET_VALUE(promQl_, promQl) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CloudMonitoringPrometheusEscalation& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline CloudMonitoringPrometheusEscalation& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    // The PromQL expression that defines the alert condition. This parameter is required.
    shared_ptr<string> promQl_ {};
    // The severity of the alert that triggers the escalation. This parameter is required.
    shared_ptr<string> severity_ {};
    // The number of consecutive times the condition must be met to trigger an escalation. This parameter is required.
    shared_ptr<int32_t> times_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
