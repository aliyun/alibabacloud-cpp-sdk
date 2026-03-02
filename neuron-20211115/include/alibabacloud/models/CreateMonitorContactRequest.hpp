// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorContact.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateMonitorContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMonitorContactRequest() = default ;
    CreateMonitorContactRequest(const CreateMonitorContactRequest &) = default ;
    CreateMonitorContactRequest(CreateMonitorContactRequest &&) = default ;
    CreateMonitorContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorContactRequest() = default ;
    CreateMonitorContactRequest& operator=(const CreateMonitorContactRequest &) = default ;
    CreateMonitorContactRequest& operator=(CreateMonitorContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MonitorContact & getBody() const { DARABONBA_PTR_GET_CONST(body_, MonitorContact) };
    inline MonitorContact getBody() { DARABONBA_PTR_GET(body_, MonitorContact) };
    inline CreateMonitorContactRequest& setBody(const MonitorContact & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMonitorContactRequest& setBody(MonitorContact && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MonitorContact> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
