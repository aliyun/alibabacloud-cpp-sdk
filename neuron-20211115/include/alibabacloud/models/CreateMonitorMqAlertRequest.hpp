// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORMQALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORMQALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorMqAlert.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateMonitorMqAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorMqAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorMqAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMonitorMqAlertRequest() = default ;
    CreateMonitorMqAlertRequest(const CreateMonitorMqAlertRequest &) = default ;
    CreateMonitorMqAlertRequest(CreateMonitorMqAlertRequest &&) = default ;
    CreateMonitorMqAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorMqAlertRequest() = default ;
    CreateMonitorMqAlertRequest& operator=(const CreateMonitorMqAlertRequest &) = default ;
    CreateMonitorMqAlertRequest& operator=(CreateMonitorMqAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MonitorMqAlert & getBody() const { DARABONBA_PTR_GET_CONST(body_, MonitorMqAlert) };
    inline MonitorMqAlert getBody() { DARABONBA_PTR_GET(body_, MonitorMqAlert) };
    inline CreateMonitorMqAlertRequest& setBody(const MonitorMqAlert & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMonitorMqAlertRequest& setBody(MonitorMqAlert && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MonitorMqAlert> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
