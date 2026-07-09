// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDMONITORINGEXPRESSESCALATION_HPP_
#define ALIBABACLOUD_MODELS_CLOUDMONITORINGEXPRESSESCALATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CloudMonitoringExpressEscalation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudMonitoringExpressEscalation& obj) { 
      DARABONBA_PTR_TO_JSON(rawExpression, rawExpression_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(times, times_);
    };
    friend void from_json(const Darabonba::Json& j, CloudMonitoringExpressEscalation& obj) { 
      DARABONBA_PTR_FROM_JSON(rawExpression, rawExpression_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(times, times_);
    };
    CloudMonitoringExpressEscalation() = default ;
    CloudMonitoringExpressEscalation(const CloudMonitoringExpressEscalation &) = default ;
    CloudMonitoringExpressEscalation(CloudMonitoringExpressEscalation &&) = default ;
    CloudMonitoringExpressEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudMonitoringExpressEscalation() = default ;
    CloudMonitoringExpressEscalation& operator=(const CloudMonitoringExpressEscalation &) = default ;
    CloudMonitoringExpressEscalation& operator=(CloudMonitoringExpressEscalation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rawExpression_ == nullptr
        && this->severity_ == nullptr && this->times_ == nullptr; };
    // rawExpression Field Functions 
    bool hasRawExpression() const { return this->rawExpression_ != nullptr;};
    void deleteRawExpression() { this->rawExpression_ = nullptr;};
    inline string getRawExpression() const { DARABONBA_PTR_GET_DEFAULT(rawExpression_, "") };
    inline CloudMonitoringExpressEscalation& setRawExpression(string rawExpression) { DARABONBA_PTR_SET_VALUE(rawExpression_, rawExpression) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CloudMonitoringExpressEscalation& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t getTimes() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline CloudMonitoringExpressEscalation& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    // The expression that defines the alert condition.
    shared_ptr<string> rawExpression_ {};
    // The alert severity that triggers the escalation.
    shared_ptr<string> severity_ {};
    // The number of alert occurrences required to trigger the escalation.
    shared_ptr<int32_t> times_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
