// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MONITORMQALERTS_HPP_
#define ALIBABACLOUD_MODELS_MONITORMQALERTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MonitorMqAlert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MonitorMqAlerts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MonitorMqAlerts& obj) { 
      DARABONBA_PTR_TO_JSON(monitorMqAlerts, monitorMqAlerts_);
    };
    friend void from_json(const Darabonba::Json& j, MonitorMqAlerts& obj) { 
      DARABONBA_PTR_FROM_JSON(monitorMqAlerts, monitorMqAlerts_);
    };
    MonitorMqAlerts() = default ;
    MonitorMqAlerts(const MonitorMqAlerts &) = default ;
    MonitorMqAlerts(MonitorMqAlerts &&) = default ;
    MonitorMqAlerts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MonitorMqAlerts() = default ;
    MonitorMqAlerts& operator=(const MonitorMqAlerts &) = default ;
    MonitorMqAlerts& operator=(MonitorMqAlerts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->monitorMqAlerts_ == nullptr; };
    // monitorMqAlerts Field Functions 
    bool hasMonitorMqAlerts() const { return this->monitorMqAlerts_ != nullptr;};
    void deleteMonitorMqAlerts() { this->monitorMqAlerts_ = nullptr;};
    inline const vector<MonitorMqAlert> & getMonitorMqAlerts() const { DARABONBA_PTR_GET_CONST(monitorMqAlerts_, vector<MonitorMqAlert>) };
    inline vector<MonitorMqAlert> getMonitorMqAlerts() { DARABONBA_PTR_GET(monitorMqAlerts_, vector<MonitorMqAlert>) };
    inline MonitorMqAlerts& setMonitorMqAlerts(const vector<MonitorMqAlert> & monitorMqAlerts) { DARABONBA_PTR_SET_VALUE(monitorMqAlerts_, monitorMqAlerts) };
    inline MonitorMqAlerts& setMonitorMqAlerts(vector<MonitorMqAlert> && monitorMqAlerts) { DARABONBA_PTR_SET_RVALUE(monitorMqAlerts_, monitorMqAlerts) };


  protected:
    shared_ptr<vector<MonitorMqAlert>> monitorMqAlerts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
