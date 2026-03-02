// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Role.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class CreateRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateRoleRequest() = default ;
    CreateRoleRequest(const CreateRoleRequest &) = default ;
    CreateRoleRequest(CreateRoleRequest &&) = default ;
    CreateRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRoleRequest() = default ;
    CreateRoleRequest& operator=(const CreateRoleRequest &) = default ;
    CreateRoleRequest& operator=(CreateRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const Role & getBody() const { DARABONBA_PTR_GET_CONST(body_, Role) };
    inline Role getBody() { DARABONBA_PTR_GET(body_, Role) };
    inline CreateRoleRequest& setBody(const Role & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateRoleRequest& setBody(Role && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<Role> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
