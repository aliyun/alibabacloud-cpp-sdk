// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORARMSALERTS_HPP_
#define ALIBABACLOUD_MODELS_MONITORARMSALERTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorArmsAlert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorArmsAlerts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorArmsAlerts& obj) { 
      DARABONBA_PTR_TO_JSON(monitorArmsAlerts, monitorArmsAlerts_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorArmsAlerts& obj) { 
      DARABONBA_PTR_FROM_JSON(monitorArmsAlerts, monitorArmsAlerts_);
    };
    MonitorArmsAlerts() = default ;
    MonitorArmsAlerts(const MonitorArmsAlerts &) = default ;
    MonitorArmsAlerts(MonitorArmsAlerts &&) = default ;
    MonitorArmsAlerts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorArmsAlerts() = default ;
    MonitorArmsAlerts& operator=(const MonitorArmsAlerts &) = default ;
    MonitorArmsAlerts& operator=(MonitorArmsAlerts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorArmsAlerts_ == nullptr; };
    // monitorArmsAlerts Field Functions 
    bool hasMonitorArmsAlerts() const { return this->monitorArmsAlerts_ != nullptr;};
    void deleteMonitorArmsAlerts() { this->monitorArmsAlerts_ = nullptr;};
    inline const vector<MonitorArmsAlert> & getMonitorArmsAlerts() const { DARABONBA_PTR_GET_CONST(monitorArmsAlerts_, vector<MonitorArmsAlert>) };
    inline vector<MonitorArmsAlert> getMonitorArmsAlerts() { DARABONBA_PTR_GET(monitorArmsAlerts_, vector<MonitorArmsAlert>) };
    inline MonitorArmsAlerts& setMonitorArmsAlerts(const vector<MonitorArmsAlert> & monitorArmsAlerts) { DARABONBA_PTR_SET_VALUE(monitorArmsAlerts_, monitorArmsAlerts) };
    inline MonitorArmsAlerts& setMonitorArmsAlerts(vector<MonitorArmsAlert> && monitorArmsAlerts) { DARABONBA_PTR_SET_RVALUE(monitorArmsAlerts_, monitorArmsAlerts) };


  protected:
    shared_ptr<vector<MonitorArmsAlert>> monitorArmsAlerts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
