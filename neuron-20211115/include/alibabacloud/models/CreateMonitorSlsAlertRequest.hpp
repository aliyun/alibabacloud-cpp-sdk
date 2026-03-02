// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORSLSALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORSLSALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorSlsAlert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateMonitorSlsAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorSlsAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorSlsAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMonitorSlsAlertRequest() = default ;
    CreateMonitorSlsAlertRequest(const CreateMonitorSlsAlertRequest &) = default ;
    CreateMonitorSlsAlertRequest(CreateMonitorSlsAlertRequest &&) = default ;
    CreateMonitorSlsAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorSlsAlertRequest() = default ;
    CreateMonitorSlsAlertRequest& operator=(const CreateMonitorSlsAlertRequest &) = default ;
    CreateMonitorSlsAlertRequest& operator=(CreateMonitorSlsAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MonitorSlsAlert & getBody() const { DARABONBA_PTR_GET_CONST(body_, MonitorSlsAlert) };
    inline MonitorSlsAlert getBody() { DARABONBA_PTR_GET(body_, MonitorSlsAlert) };
    inline CreateMonitorSlsAlertRequest& setBody(const MonitorSlsAlert & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMonitorSlsAlertRequest& setBody(MonitorSlsAlert && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MonitorSlsAlert> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
