// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORSLSALERT_HPP_
#define ALIBABACLOUD_MODELS_MONITORSLSALERT_HPP_
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
  class MonitorSlsAlert : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorSlsAlert& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(monitorNotifyStrategy, monitorNotifyStrategy_);
      DARABONBA_PTR_TO_JSON(monitorSlsAlertRules, monitorSlsAlertRules_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(pbcId, pbcId_);
      DARABONBA_PTR_TO_JSON(remark, remark_);
      DARABONBA_PTR_TO_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorSlsAlert& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(monitorNotifyStrategy, monitorNotifyStrategy_);
      DARABONBA_PTR_FROM_JSON(monitorSlsAlertRules, monitorSlsAlertRules_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(pbcId, pbcId_);
      DARABONBA_PTR_FROM_JSON(remark, remark_);
      DARABONBA_PTR_FROM_JSON(serviceGroupId, serviceGroupId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    MonitorSlsAlert() = default ;
    MonitorSlsAlert(const MonitorSlsAlert &) = default ;
    MonitorSlsAlert(MonitorSlsAlert &&) = default ;
    MonitorSlsAlert(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorSlsAlert() = default ;
    MonitorSlsAlert& operator=(const MonitorSlsAlert &) = default ;
    MonitorSlsAlert& operator=(MonitorSlsAlert &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && this->env_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->monitorNotifyStrategy_ == nullptr
        && this->monitorSlsAlertRules_ == nullptr && this->name_ == nullptr && this->pbcId_ == nullptr && this->remark_ == nullptr && this->serviceGroupId_ == nullptr
        && this->type_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
    inline MonitorSlsAlert& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline MonitorSlsAlert& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline MonitorSlsAlert& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline MonitorSlsAlert& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MonitorSlsAlert& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // monitorNotifyStrategy Field Functions 
    bool hasMonitorNotifyStrategy() const { return this->monitorNotifyStrategy_ != nullptr;};
    void deleteMonitorNotifyStrategy() { this->monitorNotifyStrategy_ = nullptr;};
    inline const MonitorNotifyStrategy & getMonitorNotifyStrategy() const { DARABONBA_PTR_GET_CONST(monitorNotifyStrategy_, MonitorNotifyStrategy) };
    inline MonitorNotifyStrategy getMonitorNotifyStrategy() { DARABONBA_PTR_GET(monitorNotifyStrategy_, MonitorNotifyStrategy) };
    inline MonitorSlsAlert& setMonitorNotifyStrategy(const MonitorNotifyStrategy & monitorNotifyStrategy) { DARABONBA_PTR_SET_VALUE(monitorNotifyStrategy_, monitorNotifyStrategy) };
    inline MonitorSlsAlert& setMonitorNotifyStrategy(MonitorNotifyStrategy && monitorNotifyStrategy) { DARABONBA_PTR_SET_RVALUE(monitorNotifyStrategy_, monitorNotifyStrategy) };


    // monitorSlsAlertRules Field Functions 
    bool hasMonitorSlsAlertRules() const { return this->monitorSlsAlertRules_ != nullptr;};
    void deleteMonitorSlsAlertRules() { this->monitorSlsAlertRules_ = nullptr;};
    inline const vector<MonitorSlsAlertRule> & getMonitorSlsAlertRules() const { DARABONBA_PTR_GET_CONST(monitorSlsAlertRules_, vector<MonitorSlsAlertRule>) };
    inline vector<MonitorSlsAlertRule> getMonitorSlsAlertRules() { DARABONBA_PTR_GET(monitorSlsAlertRules_, vector<MonitorSlsAlertRule>) };
    inline MonitorSlsAlert& setMonitorSlsAlertRules(const vector<MonitorSlsAlertRule> & monitorSlsAlertRules) { DARABONBA_PTR_SET_VALUE(monitorSlsAlertRules_, monitorSlsAlertRules) };
    inline MonitorSlsAlert& setMonitorSlsAlertRules(vector<MonitorSlsAlertRule> && monitorSlsAlertRules) { DARABONBA_PTR_SET_RVALUE(monitorSlsAlertRules_, monitorSlsAlertRules) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MonitorSlsAlert& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pbcId Field Functions 
    bool hasPbcId() const { return this->pbcId_ != nullptr;};
    void deletePbcId() { this->pbcId_ = nullptr;};
    inline string getPbcId() const { DARABONBA_PTR_GET_DEFAULT(pbcId_, "") };
    inline MonitorSlsAlert& setPbcId(string pbcId) { DARABONBA_PTR_SET_VALUE(pbcId_, pbcId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline MonitorSlsAlert& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // serviceGroupId Field Functions 
    bool hasServiceGroupId() const { return this->serviceGroupId_ != nullptr;};
    void deleteServiceGroupId() { this->serviceGroupId_ = nullptr;};
    inline string getServiceGroupId() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupId_, "") };
    inline MonitorSlsAlert& setServiceGroupId(string serviceGroupId) { DARABONBA_PTR_SET_VALUE(serviceGroupId_, serviceGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MonitorSlsAlert& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> condition_ {};
    shared_ptr<string> env_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    // This parameter is required.
    shared_ptr<MonitorNotifyStrategy> monitorNotifyStrategy_ {};
    shared_ptr<vector<MonitorSlsAlertRule>> monitorSlsAlertRules_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> pbcId_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> serviceGroupId_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
