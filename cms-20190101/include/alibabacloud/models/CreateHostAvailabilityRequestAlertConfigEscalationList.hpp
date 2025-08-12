// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOSTAVAILABILITYREQUESTALERTCONFIGESCALATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOSTAVAILABILITYREQUESTALERTCONFIGESCALATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateHostAvailabilityRequestAlertConfigEscalationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHostAvailabilityRequestAlertConfigEscalationList& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregate, aggregate_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Times, times_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHostAvailabilityRequestAlertConfigEscalationList& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregate, aggregate_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Times, times_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    CreateHostAvailabilityRequestAlertConfigEscalationList() = default ;
    CreateHostAvailabilityRequestAlertConfigEscalationList(const CreateHostAvailabilityRequestAlertConfigEscalationList &) = default ;
    CreateHostAvailabilityRequestAlertConfigEscalationList(CreateHostAvailabilityRequestAlertConfigEscalationList &&) = default ;
    CreateHostAvailabilityRequestAlertConfigEscalationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHostAvailabilityRequestAlertConfigEscalationList() = default ;
    CreateHostAvailabilityRequestAlertConfigEscalationList& operator=(const CreateHostAvailabilityRequestAlertConfigEscalationList &) = default ;
    CreateHostAvailabilityRequestAlertConfigEscalationList& operator=(CreateHostAvailabilityRequestAlertConfigEscalationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregate_ != nullptr
        && this->metricName_ != nullptr && this->operator_ != nullptr && this->times_ != nullptr && this->value_ != nullptr; };
    // aggregate Field Functions 
    bool hasAggregate() const { return this->aggregate_ != nullptr;};
    void deleteAggregate() { this->aggregate_ = nullptr;};
    inline string aggregate() const { DARABONBA_PTR_GET_DEFAULT(aggregate_, "") };
    inline CreateHostAvailabilityRequestAlertConfigEscalationList& setAggregate(string aggregate) { DARABONBA_PTR_SET_VALUE(aggregate_, aggregate) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CreateHostAvailabilityRequestAlertConfigEscalationList& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CreateHostAvailabilityRequestAlertConfigEscalationList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline CreateHostAvailabilityRequestAlertConfigEscalationList& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline CreateHostAvailabilityRequestAlertConfigEscalationList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The method used to calculate the metric values that trigger alerts. Valid values of N: 1 to 21. Valid values:
    // 
    // *   HttpStatus: Value
    // *   HttpLatency: Average
    // *   TelnetStatus: Value
    // *   TelnetLatency: Average
    // *   PingLostRate: Average
    // 
    // > The value Value indicates the original value and is used for metrics such as status codes. The value Average indicates the average value and is used for metrics such as the latency and packet loss rate.
    std::shared_ptr<string> aggregate_ = nullptr;
    // The metric for which the alert feature is enabled. Valid values of N: 1 to 21. Valid values:
    // 
    // *   HttpStatus: HTTP status code
    // *   HttpLatency: HTTP response time
    // *   TelnetStatus: Telnet status code
    // *   TelnetLatency: Telnet response time
    // *   PingLostRate: Ping packet loss rate
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The comparison operator that is used in the alert rule. Valid values of N: 1 to 21. Valid values:
    // 
    // *   `>`
    // *   `>=`
    // *   `<`
    // *   `<=`
    // *   `=`
    std::shared_ptr<string> operator_ = nullptr;
    // The consecutive number of times for which the metric value meets the alert condition before an alert is triggered. Valid values of N: 1 to 21.
    std::shared_ptr<int32_t> times_ = nullptr;
    // The alert threshold. Valid values of N: 1 to 21.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
