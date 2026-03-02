// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORSLSALERTUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_MONITORSLSALERTUPDATECMD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorNotifyStrategy.hpp>
#include <vector>
#include <alibabacloud/models/MonitorSlsAlertRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorSlsAlertUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorSlsAlertUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(monitorNotifyStrategy, monitorNotifyStrategy_);
      DARABONBA_PTR_TO_JSON(monitorSlsAlertRules, monitorSlsAlertRules_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorSlsAlertUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(monitorNotifyStrategy, monitorNotifyStrategy_);
      DARABONBA_PTR_FROM_JSON(monitorSlsAlertRules, monitorSlsAlertRules_);
    };
    MonitorSlsAlertUpdateCmd() = default ;
    MonitorSlsAlertUpdateCmd(const MonitorSlsAlertUpdateCmd &) = default ;
    MonitorSlsAlertUpdateCmd(MonitorSlsAlertUpdateCmd &&) = default ;
    MonitorSlsAlertUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorSlsAlertUpdateCmd() = default ;
    MonitorSlsAlertUpdateCmd& operator=(const MonitorSlsAlertUpdateCmd &) = default ;
    MonitorSlsAlertUpdateCmd& operator=(MonitorSlsAlertUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && this->id_ == nullptr && this->monitorNotifyStrategy_ == nullptr && this->monitorSlsAlertRules_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline MonitorSlsAlertUpdateCmd& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MonitorSlsAlertUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // monitorNotifyStrategy Field Functions 
    bool hasMonitorNotifyStrategy() const { return this->monitorNotifyStrategy_ != nullptr;};
    void deleteMonitorNotifyStrategy() { this->monitorNotifyStrategy_ = nullptr;};
    inline const MonitorNotifyStrategy & getMonitorNotifyStrategy() const { DARABONBA_PTR_GET_CONST(monitorNotifyStrategy_, MonitorNotifyStrategy) };
    inline MonitorNotifyStrategy getMonitorNotifyStrategy() { DARABONBA_PTR_GET(monitorNotifyStrategy_, MonitorNotifyStrategy) };
    inline MonitorSlsAlertUpdateCmd& setMonitorNotifyStrategy(const MonitorNotifyStrategy & monitorNotifyStrategy) { DARABONBA_PTR_SET_VALUE(monitorNotifyStrategy_, monitorNotifyStrategy) };
    inline MonitorSlsAlertUpdateCmd& setMonitorNotifyStrategy(MonitorNotifyStrategy && monitorNotifyStrategy) { DARABONBA_PTR_SET_RVALUE(monitorNotifyStrategy_, monitorNotifyStrategy) };


    // monitorSlsAlertRules Field Functions 
    bool hasMonitorSlsAlertRules() const { return this->monitorSlsAlertRules_ != nullptr;};
    void deleteMonitorSlsAlertRules() { this->monitorSlsAlertRules_ = nullptr;};
    inline const vector<MonitorSlsAlertRule> & getMonitorSlsAlertRules() const { DARABONBA_PTR_GET_CONST(monitorSlsAlertRules_, vector<MonitorSlsAlertRule>) };
    inline vector<MonitorSlsAlertRule> getMonitorSlsAlertRules() { DARABONBA_PTR_GET(monitorSlsAlertRules_, vector<MonitorSlsAlertRule>) };
    inline MonitorSlsAlertUpdateCmd& setMonitorSlsAlertRules(const vector<MonitorSlsAlertRule> & monitorSlsAlertRules) { DARABONBA_PTR_SET_VALUE(monitorSlsAlertRules_, monitorSlsAlertRules) };
    inline MonitorSlsAlertUpdateCmd& setMonitorSlsAlertRules(vector<MonitorSlsAlertRule> && monitorSlsAlertRules) { DARABONBA_PTR_SET_RVALUE(monitorSlsAlertRules_, monitorSlsAlertRules) };


  protected:
    shared_ptr<string> condition_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<MonitorNotifyStrategy> monitorNotifyStrategy_ {};
    shared_ptr<vector<MonitorSlsAlertRule>> monitorSlsAlertRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
