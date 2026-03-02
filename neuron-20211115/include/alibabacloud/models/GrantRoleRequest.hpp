// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RoleGrantCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class GrantRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, GrantRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    GrantRoleRequest() = default ;
    GrantRoleRequest(const GrantRoleRequest &) = default ;
    GrantRoleRequest(GrantRoleRequest &&) = default ;
    GrantRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantRoleRequest() = default ;
    GrantRoleRequest& operator=(const GrantRoleRequest &) = default ;
    GrantRoleRequest& operator=(GrantRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RoleGrantCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, RoleGrantCmd) };
    inline RoleGrantCmd getBody() { DARABONBA_PTR_GET(body_, RoleGrantCmd) };
    inline GrantRoleRequest& setBody(const RoleGrantCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline GrantRoleRequest& setBody(RoleGrantCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<RoleGrantCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
