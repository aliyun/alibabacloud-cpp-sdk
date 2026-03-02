// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORMQALERTUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_MONITORMQALERTUPDATECMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorMqAlertRule.hpp>
#include <alibabacloud/models/MonitorNotifyStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorMqAlertUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorMqAlertUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(monitorMqAlertRules, monitorMqAlertRules_);
      DARABONBA_PTR_TO_JSON(monitorNotifyStrategy, monitorNotifyStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorMqAlertUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(monitorMqAlertRules, monitorMqAlertRules_);
      DARABONBA_PTR_FROM_JSON(monitorNotifyStrategy, monitorNotifyStrategy_);
    };
    MonitorMqAlertUpdateCmd() = default ;
    MonitorMqAlertUpdateCmd(const MonitorMqAlertUpdateCmd &) = default ;
    MonitorMqAlertUpdateCmd(MonitorMqAlertUpdateCmd &&) = default ;
    MonitorMqAlertUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorMqAlertUpdateCmd() = default ;
    MonitorMqAlertUpdateCmd& operator=(const MonitorMqAlertUpdateCmd &) = default ;
    MonitorMqAlertUpdateCmd& operator=(MonitorMqAlertUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && this->id_ == nullptr && this->monitorMqAlertRules_ == nullptr && this->monitorNotifyStrategy_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline MonitorMqAlertUpdateCmd& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MonitorMqAlertUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // monitorMqAlertRules Field Functions 
    bool hasMonitorMqAlertRules() const { return this->monitorMqAlertRules_ != nullptr;};
    void deleteMonitorMqAlertRules() { this->monitorMqAlertRules_ = nullptr;};
    inline const vector<MonitorMqAlertRule> & getMonitorMqAlertRules() const { DARABONBA_PTR_GET_CONST(monitorMqAlertRules_, vector<MonitorMqAlertRule>) };
    inline vector<MonitorMqAlertRule> getMonitorMqAlertRules() { DARABONBA_PTR_GET(monitorMqAlertRules_, vector<MonitorMqAlertRule>) };
    inline MonitorMqAlertUpdateCmd& setMonitorMqAlertRules(const vector<MonitorMqAlertRule> & monitorMqAlertRules) { DARABONBA_PTR_SET_VALUE(monitorMqAlertRules_, monitorMqAlertRules) };
    inline MonitorMqAlertUpdateCmd& setMonitorMqAlertRules(vector<MonitorMqAlertRule> && monitorMqAlertRules) { DARABONBA_PTR_SET_RVALUE(monitorMqAlertRules_, monitorMqAlertRules) };


    // monitorNotifyStrategy Field Functions 
    bool hasMonitorNotifyStrategy() const { return this->monitorNotifyStrategy_ != nullptr;};
    void deleteMonitorNotifyStrategy() { this->monitorNotifyStrategy_ = nullptr;};
    inline const MonitorNotifyStrategy & getMonitorNotifyStrategy() const { DARABONBA_PTR_GET_CONST(monitorNotifyStrategy_, MonitorNotifyStrategy) };
    inline MonitorNotifyStrategy getMonitorNotifyStrategy() { DARABONBA_PTR_GET(monitorNotifyStrategy_, MonitorNotifyStrategy) };
    inline MonitorMqAlertUpdateCmd& setMonitorNotifyStrategy(const MonitorNotifyStrategy & monitorNotifyStrategy) { DARABONBA_PTR_SET_VALUE(monitorNotifyStrategy_, monitorNotifyStrategy) };
    inline MonitorMqAlertUpdateCmd& setMonitorNotifyStrategy(MonitorNotifyStrategy && monitorNotifyStrategy) { DARABONBA_PTR_SET_RVALUE(monitorNotifyStrategy_, monitorNotifyStrategy) };


  protected:
    shared_ptr<string> condition_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<vector<MonitorMqAlertRule>> monitorMqAlertRules_ {};
    shared_ptr<MonitorNotifyStrategy> monitorNotifyStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
