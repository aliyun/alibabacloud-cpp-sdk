// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MonitorGroupMemberCreateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateMonitorGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateMonitorGroupMemberRequest() = default ;
    CreateMonitorGroupMemberRequest(const CreateMonitorGroupMemberRequest &) = default ;
    CreateMonitorGroupMemberRequest(CreateMonitorGroupMemberRequest &&) = default ;
    CreateMonitorGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorGroupMemberRequest() = default ;
    CreateMonitorGroupMemberRequest& operator=(const CreateMonitorGroupMemberRequest &) = default ;
    CreateMonitorGroupMemberRequest& operator=(CreateMonitorGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const MonitorGroupMemberCreateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, MonitorGroupMemberCreateCmd) };
    inline MonitorGroupMemberCreateCmd getBody() { DARABONBA_PTR_GET(body_, MonitorGroupMemberCreateCmd) };
    inline CreateMonitorGroupMemberRequest& setBody(const MonitorGroupMemberCreateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateMonitorGroupMemberRequest& setBody(MonitorGroupMemberCreateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<MonitorGroupMemberCreateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
