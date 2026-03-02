// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORARMSALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORARMSALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorArmsAlert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateMonitorArmsAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorArmsAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorArmsAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMonitorArmsAlertRequest() = default ;
    CreateMonitorArmsAlertRequest(const CreateMonitorArmsAlertRequest &) = default ;
    CreateMonitorArmsAlertRequest(CreateMonitorArmsAlertRequest &&) = default ;
    CreateMonitorArmsAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorArmsAlertRequest() = default ;
    CreateMonitorArmsAlertRequest& operator=(const CreateMonitorArmsAlertRequest &) = default ;
    CreateMonitorArmsAlertRequest& operator=(CreateMonitorArmsAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MonitorArmsAlert & getBody() const { DARABONBA_PTR_GET_CONST(body_, MonitorArmsAlert) };
    inline MonitorArmsAlert getBody() { DARABONBA_PTR_GET(body_, MonitorArmsAlert) };
    inline CreateMonitorArmsAlertRequest& setBody(const MonitorArmsAlert & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMonitorArmsAlertRequest& setBody(MonitorArmsAlert && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MonitorArmsAlert> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
