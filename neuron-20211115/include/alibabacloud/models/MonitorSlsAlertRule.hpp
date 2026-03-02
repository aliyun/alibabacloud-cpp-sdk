// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORSLSALERTRULE_HPP_
#define ALIBABACLOUD_MODELS_MONITORSLSALERTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorSlsAlertRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorSlsAlertRule& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(queryCondition, queryCondition_);
      DARABONBA_PTR_TO_JSON(triggerInterval, triggerInterval_);
      DARABONBA_PTR_TO_JSON(triggerIntervalUnit, triggerIntervalUnit_);
      DARABONBA_PTR_TO_JSON(triggerOperator, triggerOperator_);
      DARABONBA_PTR_TO_JSON(triggerThreshold, triggerThreshold_);
      DARABONBA_PTR_TO_JSON(triggerThresholdUpper, triggerThresholdUpper_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorSlsAlertRule& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(queryCondition, queryCondition_);
      DARABONBA_PTR_FROM_JSON(triggerInterval, triggerInterval_);
      DARABONBA_PTR_FROM_JSON(triggerIntervalUnit, triggerIntervalUnit_);
      DARABONBA_PTR_FROM_JSON(triggerOperator, triggerOperator_);
      DARABONBA_PTR_FROM_JSON(triggerThreshold, triggerThreshold_);
      DARABONBA_PTR_FROM_JSON(triggerThresholdUpper, triggerThresholdUpper_);
    };
    MonitorSlsAlertRule() = default ;
    MonitorSlsAlertRule(const MonitorSlsAlertRule &) = default ;
    MonitorSlsAlertRule(MonitorSlsAlertRule &&) = default ;
    MonitorSlsAlertRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorSlsAlertRule() = default ;
    MonitorSlsAlertRule& operator=(const MonitorSlsAlertRule &) = default ;
    MonitorSlsAlertRule& operator=(MonitorSlsAlertRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr && this->queryCondition_ == nullptr && this->triggerInterval_ == nullptr && this->triggerIntervalUnit_ == nullptr && this->triggerOperator_ == nullptr
        && this->triggerThreshold_ == nullptr && this->triggerThresholdUpper_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MonitorSlsAlertRule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MonitorSlsAlertRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // queryCondition Field Functions 
    bool hasQueryCondition() const { return this->queryCondition_ != nullptr;};
    void deleteQueryCondition() { this->queryCondition_ = nullptr;};
    inline string getQueryCondition() const { DARABONBA_PTR_GET_DEFAULT(queryCondition_, "") };
    inline MonitorSlsAlertRule& setQueryCondition(string queryCondition) { DARABONBA_PTR_SET_VALUE(queryCondition_, queryCondition) };


    // triggerInterval Field Functions 
    bool hasTriggerInterval() const { return this->triggerInterval_ != nullptr;};
    void deleteTriggerInterval() { this->triggerInterval_ = nullptr;};
    inline int64_t getTriggerInterval() const { DARABONBA_PTR_GET_DEFAULT(triggerInterval_, 0L) };
    inline MonitorSlsAlertRule& setTriggerInterval(int64_t triggerInterval) { DARABONBA_PTR_SET_VALUE(triggerInterval_, triggerInterval) };


    // triggerIntervalUnit Field Functions 
    bool hasTriggerIntervalUnit() const { return this->triggerIntervalUnit_ != nullptr;};
    void deleteTriggerIntervalUnit() { this->triggerIntervalUnit_ = nullptr;};
    inline string getTriggerIntervalUnit() const { DARABONBA_PTR_GET_DEFAULT(triggerIntervalUnit_, "") };
    inline MonitorSlsAlertRule& setTriggerIntervalUnit(string triggerIntervalUnit) { DARABONBA_PTR_SET_VALUE(triggerIntervalUnit_, triggerIntervalUnit) };


    // triggerOperator Field Functions 
    bool hasTriggerOperator() const { return this->triggerOperator_ != nullptr;};
    void deleteTriggerOperator() { this->triggerOperator_ = nullptr;};
    inline string getTriggerOperator() const { DARABONBA_PTR_GET_DEFAULT(triggerOperator_, "") };
    inline MonitorSlsAlertRule& setTriggerOperator(string triggerOperator) { DARABONBA_PTR_SET_VALUE(triggerOperator_, triggerOperator) };


    // triggerThreshold Field Functions 
    bool hasTriggerThreshold() const { return this->triggerThreshold_ != nullptr;};
    void deleteTriggerThreshold() { this->triggerThreshold_ = nullptr;};
    inline int64_t getTriggerThreshold() const { DARABONBA_PTR_GET_DEFAULT(triggerThreshold_, 0L) };
    inline MonitorSlsAlertRule& setTriggerThreshold(int64_t triggerThreshold) { DARABONBA_PTR_SET_VALUE(triggerThreshold_, triggerThreshold) };


    // triggerThresholdUpper Field Functions 
    bool hasTriggerThresholdUpper() const { return this->triggerThresholdUpper_ != nullptr;};
    void deleteTriggerThresholdUpper() { this->triggerThresholdUpper_ = nullptr;};
    inline int64_t getTriggerThresholdUpper() const { DARABONBA_PTR_GET_DEFAULT(triggerThresholdUpper_, 0L) };
    inline MonitorSlsAlertRule& setTriggerThresholdUpper(int64_t triggerThresholdUpper) { DARABONBA_PTR_SET_VALUE(triggerThresholdUpper_, triggerThresholdUpper) };


  protected:
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> queryCondition_ {};
    shared_ptr<int64_t> triggerInterval_ {};
    shared_ptr<string> triggerIntervalUnit_ {};
    shared_ptr<string> triggerOperator_ {};
    shared_ptr<int64_t> triggerThreshold_ {};
    shared_ptr<int64_t> triggerThresholdUpper_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
