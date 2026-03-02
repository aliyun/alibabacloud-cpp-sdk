// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORARMSALERTUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_MONITORARMSALERTUPDATECMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorArmsAlertRule.hpp>
#include <alibabacloud/models/MonitorNotifyStrategy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorArmsAlertUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorArmsAlertUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(monitorArmsAlertRules, monitorArmsAlertRules_);
      DARABONBA_PTR_TO_JSON(monitorNotifyStrategy, monitorNotifyStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorArmsAlertUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(monitorArmsAlertRules, monitorArmsAlertRules_);
      DARABONBA_PTR_FROM_JSON(monitorNotifyStrategy, monitorNotifyStrategy_);
    };
    MonitorArmsAlertUpdateCmd() = default ;
    MonitorArmsAlertUpdateCmd(const MonitorArmsAlertUpdateCmd &) = default ;
    MonitorArmsAlertUpdateCmd(MonitorArmsAlertUpdateCmd &&) = default ;
    MonitorArmsAlertUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorArmsAlertUpdateCmd() = default ;
    MonitorArmsAlertUpdateCmd& operator=(const MonitorArmsAlertUpdateCmd &) = default ;
    MonitorArmsAlertUpdateCmd& operator=(MonitorArmsAlertUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && this->id_ == nullptr && this->monitorArmsAlertRules_ == nullptr && this->monitorNotifyStrategy_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline MonitorArmsAlertUpdateCmd& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MonitorArmsAlertUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // monitorArmsAlertRules Field Functions 
    bool hasMonitorArmsAlertRules() const { return this->monitorArmsAlertRules_ != nullptr;};
    void deleteMonitorArmsAlertRules() { this->monitorArmsAlertRules_ = nullptr;};
    inline const vector<MonitorArmsAlertRule> & getMonitorArmsAlertRules() const { DARABONBA_PTR_GET_CONST(monitorArmsAlertRules_, vector<MonitorArmsAlertRule>) };
    inline vector<MonitorArmsAlertRule> getMonitorArmsAlertRules() { DARABONBA_PTR_GET(monitorArmsAlertRules_, vector<MonitorArmsAlertRule>) };
    inline MonitorArmsAlertUpdateCmd& setMonitorArmsAlertRules(const vector<MonitorArmsAlertRule> & monitorArmsAlertRules) { DARABONBA_PTR_SET_VALUE(monitorArmsAlertRules_, monitorArmsAlertRules) };
    inline MonitorArmsAlertUpdateCmd& setMonitorArmsAlertRules(vector<MonitorArmsAlertRule> && monitorArmsAlertRules) { DARABONBA_PTR_SET_RVALUE(monitorArmsAlertRules_, monitorArmsAlertRules) };


    // monitorNotifyStrategy Field Functions 
    bool hasMonitorNotifyStrategy() const { return this->monitorNotifyStrategy_ != nullptr;};
    void deleteMonitorNotifyStrategy() { this->monitorNotifyStrategy_ = nullptr;};
    inline const MonitorNotifyStrategy & getMonitorNotifyStrategy() const { DARABONBA_PTR_GET_CONST(monitorNotifyStrategy_, MonitorNotifyStrategy) };
    inline MonitorNotifyStrategy getMonitorNotifyStrategy() { DARABONBA_PTR_GET(monitorNotifyStrategy_, MonitorNotifyStrategy) };
    inline MonitorArmsAlertUpdateCmd& setMonitorNotifyStrategy(const MonitorNotifyStrategy & monitorNotifyStrategy) { DARABONBA_PTR_SET_VALUE(monitorNotifyStrategy_, monitorNotifyStrategy) };
    inline MonitorArmsAlertUpdateCmd& setMonitorNotifyStrategy(MonitorNotifyStrategy && monitorNotifyStrategy) { DARABONBA_PTR_SET_RVALUE(monitorNotifyStrategy_, monitorNotifyStrategy) };


  protected:
    shared_ptr<string> condition_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<vector<MonitorArmsAlertRule>> monitorArmsAlertRules_ {};
    shared_ptr<MonitorNotifyStrategy> monitorNotifyStrategy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
