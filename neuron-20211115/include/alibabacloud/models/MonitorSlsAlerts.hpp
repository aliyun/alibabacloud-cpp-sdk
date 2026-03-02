// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORSLSALERTS_HPP_
#define ALIBABACLOUD_MODELS_MONITORSLSALERTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorSlsAlert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorSlsAlerts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorSlsAlerts& obj) { 
      DARABONBA_PTR_TO_JSON(monitorSlsAlerts, monitorSlsAlerts_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorSlsAlerts& obj) { 
      DARABONBA_PTR_FROM_JSON(monitorSlsAlerts, monitorSlsAlerts_);
    };
    MonitorSlsAlerts() = default ;
    MonitorSlsAlerts(const MonitorSlsAlerts &) = default ;
    MonitorSlsAlerts(MonitorSlsAlerts &&) = default ;
    MonitorSlsAlerts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorSlsAlerts() = default ;
    MonitorSlsAlerts& operator=(const MonitorSlsAlerts &) = default ;
    MonitorSlsAlerts& operator=(MonitorSlsAlerts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorSlsAlerts_ == nullptr; };
    // monitorSlsAlerts Field Functions 
    bool hasMonitorSlsAlerts() const { return this->monitorSlsAlerts_ != nullptr;};
    void deleteMonitorSlsAlerts() { this->monitorSlsAlerts_ = nullptr;};
    inline const vector<MonitorSlsAlert> & getMonitorSlsAlerts() const { DARABONBA_PTR_GET_CONST(monitorSlsAlerts_, vector<MonitorSlsAlert>) };
    inline vector<MonitorSlsAlert> getMonitorSlsAlerts() { DARABONBA_PTR_GET(monitorSlsAlerts_, vector<MonitorSlsAlert>) };
    inline MonitorSlsAlerts& setMonitorSlsAlerts(const vector<MonitorSlsAlert> & monitorSlsAlerts) { DARABONBA_PTR_SET_VALUE(monitorSlsAlerts_, monitorSlsAlerts) };
    inline MonitorSlsAlerts& setMonitorSlsAlerts(vector<MonitorSlsAlert> && monitorSlsAlerts) { DARABONBA_PTR_SET_RVALUE(monitorSlsAlerts_, monitorSlsAlerts) };


  protected:
    shared_ptr<vector<MonitorSlsAlert>> monitorSlsAlerts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
