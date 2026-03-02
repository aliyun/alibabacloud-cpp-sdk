// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RoleInfoUpdateCmd.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UpdateRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateRoleRequest() = default ;
    UpdateRoleRequest(const UpdateRoleRequest &) = default ;
    UpdateRoleRequest(UpdateRoleRequest &&) = default ;
    UpdateRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRoleRequest() = default ;
    UpdateRoleRequest& operator=(const UpdateRoleRequest &) = default ;
    UpdateRoleRequest& operator=(UpdateRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const RoleInfoUpdateCmd & getBody() const { DARABONBA_PTR_GET_CONST(body_, RoleInfoUpdateCmd) };
    inline RoleInfoUpdateCmd getBody() { DARABONBA_PTR_GET(body_, RoleInfoUpdateCmd) };
    inline UpdateRoleRequest& setBody(const RoleInfoUpdateCmd & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateRoleRequest& setBody(RoleInfoUpdateCmd && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<RoleInfoUpdateCmd> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
