// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class DeleteRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(rolePrincipal, rolePrincipal_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(rolePrincipal, rolePrincipal_);
    };
    DeleteRoleRequest() = default ;
    DeleteRoleRequest(const DeleteRoleRequest &) = default ;
    DeleteRoleRequest(DeleteRoleRequest &&) = default ;
    DeleteRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRoleRequest() = default ;
    DeleteRoleRequest& operator=(const DeleteRoleRequest &) = default ;
    DeleteRoleRequest& operator=(DeleteRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rolePrincipal_ != nullptr; };
    // rolePrincipal Field Functions 
    bool hasRolePrincipal() const { return this->rolePrincipal_ != nullptr;};
    void deleteRolePrincipal() { this->rolePrincipal_ = nullptr;};
    inline string rolePrincipal() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipal_, "") };
    inline DeleteRoleRequest& setRolePrincipal(string rolePrincipal) { DARABONBA_PTR_SET_VALUE(rolePrincipal_, rolePrincipal) };


  protected:
    std::shared_ptr<string> rolePrincipal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
