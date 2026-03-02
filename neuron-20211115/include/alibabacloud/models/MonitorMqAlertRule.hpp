// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORMQALERTRULE_HPP_
#define ALIBABACLOUD_MODELS_MONITORMQALERTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorMqAlertRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorMqAlertRule& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(metricDimension, metricDimension_);
      DARABONBA_PTR_TO_JSON(metricKey, metricKey_);
      DARABONBA_PTR_TO_JSON(metricType, metricType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(triggerInterval, triggerInterval_);
      DARABONBA_PTR_TO_JSON(triggerOperator, triggerOperator_);
      DARABONBA_PTR_TO_JSON(triggerThreshold, triggerThreshold_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorMqAlertRule& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(metricDimension, metricDimension_);
      DARABONBA_PTR_FROM_JSON(metricKey, metricKey_);
      DARABONBA_PTR_FROM_JSON(metricType, metricType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(triggerInterval, triggerInterval_);
      DARABONBA_PTR_FROM_JSON(triggerOperator, triggerOperator_);
      DARABONBA_PTR_FROM_JSON(triggerThreshold, triggerThreshold_);
    };
    MonitorMqAlertRule() = default ;
    MonitorMqAlertRule(const MonitorMqAlertRule &) = default ;
    MonitorMqAlertRule(MonitorMqAlertRule &&) = default ;
    MonitorMqAlertRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorMqAlertRule() = default ;
    MonitorMqAlertRule& operator=(const MonitorMqAlertRule &) = default ;
    MonitorMqAlertRule& operator=(MonitorMqAlertRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->metricDimension_ == nullptr && this->metricKey_ == nullptr && this->metricType_ == nullptr && this->name_ == nullptr && this->triggerInterval_ == nullptr
        && this->triggerOperator_ == nullptr && this->triggerThreshold_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MonitorMqAlertRule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metricDimension Field Functions 
    bool hasMetricDimension() const { return this->metricDimension_ != nullptr;};
    void deleteMetricDimension() { this->metricDimension_ = nullptr;};
    inline string getMetricDimension() const { DARABONBA_PTR_GET_DEFAULT(metricDimension_, "") };
    inline MonitorMqAlertRule& setMetricDimension(string metricDimension) { DARABONBA_PTR_SET_VALUE(metricDimension_, metricDimension) };


    // metricKey Field Functions 
    bool hasMetricKey() const { return this->metricKey_ != nullptr;};
    void deleteMetricKey() { this->metricKey_ = nullptr;};
    inline string getMetricKey() const { DARABONBA_PTR_GET_DEFAULT(metricKey_, "") };
    inline MonitorMqAlertRule& setMetricKey(string metricKey) { DARABONBA_PTR_SET_VALUE(metricKey_, metricKey) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string getMetricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline MonitorMqAlertRule& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MonitorMqAlertRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // triggerInterval Field Functions 
    bool hasTriggerInterval() const { return this->triggerInterval_ != nullptr;};
    void deleteTriggerInterval() { this->triggerInterval_ = nullptr;};
    inline int64_t getTriggerInterval() const { DARABONBA_PTR_GET_DEFAULT(triggerInterval_, 0L) };
    inline MonitorMqAlertRule& setTriggerInterval(int64_t triggerInterval) { DARABONBA_PTR_SET_VALUE(triggerInterval_, triggerInterval) };


    // triggerOperator Field Functions 
    bool hasTriggerOperator() const { return this->triggerOperator_ != nullptr;};
    void deleteTriggerOperator() { this->triggerOperator_ = nullptr;};
    inline string getTriggerOperator() const { DARABONBA_PTR_GET_DEFAULT(triggerOperator_, "") };
    inline MonitorMqAlertRule& setTriggerOperator(string triggerOperator) { DARABONBA_PTR_SET_VALUE(triggerOperator_, triggerOperator) };


    // triggerThreshold Field Functions 
    bool hasTriggerThreshold() const { return this->triggerThreshold_ != nullptr;};
    void deleteTriggerThreshold() { this->triggerThreshold_ = nullptr;};
    inline int64_t getTriggerThreshold() const { DARABONBA_PTR_GET_DEFAULT(triggerThreshold_, 0L) };
    inline MonitorMqAlertRule& setTriggerThreshold(int64_t triggerThreshold) { DARABONBA_PTR_SET_VALUE(triggerThreshold_, triggerThreshold) };


  protected:
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> metricDimension_ {};
    shared_ptr<string> metricKey_ {};
    shared_ptr<string> metricType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> triggerInterval_ {};
    shared_ptr<string> triggerOperator_ {};
    shared_ptr<int64_t> triggerThreshold_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
