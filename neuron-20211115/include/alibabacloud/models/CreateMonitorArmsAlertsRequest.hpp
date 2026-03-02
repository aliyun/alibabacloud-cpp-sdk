// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORARMSALERTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORARMSALERTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorArmsAlerts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateMonitorArmsAlertsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorArmsAlertsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorArmsAlertsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMonitorArmsAlertsRequest() = default ;
    CreateMonitorArmsAlertsRequest(const CreateMonitorArmsAlertsRequest &) = default ;
    CreateMonitorArmsAlertsRequest(CreateMonitorArmsAlertsRequest &&) = default ;
    CreateMonitorArmsAlertsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorArmsAlertsRequest() = default ;
    CreateMonitorArmsAlertsRequest& operator=(const CreateMonitorArmsAlertsRequest &) = default ;
    CreateMonitorArmsAlertsRequest& operator=(CreateMonitorArmsAlertsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MonitorArmsAlerts & getBody() const { DARABONBA_PTR_GET_CONST(body_, MonitorArmsAlerts) };
    inline MonitorArmsAlerts getBody() { DARABONBA_PTR_GET(body_, MonitorArmsAlerts) };
    inline CreateMonitorArmsAlertsRequest& setBody(const MonitorArmsAlerts & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMonitorArmsAlertsRequest& setBody(MonitorArmsAlerts && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MonitorArmsAlerts> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
