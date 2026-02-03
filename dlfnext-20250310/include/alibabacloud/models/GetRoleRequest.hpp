// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class GetRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(rolePrincipal, rolePrincipal_);
    };
    friend void from_json(const Darabonba::Json& j, GetRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(rolePrincipal, rolePrincipal_);
    };
    GetRoleRequest() = default ;
    GetRoleRequest(const GetRoleRequest &) = default ;
    GetRoleRequest(GetRoleRequest &&) = default ;
    GetRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRoleRequest() = default ;
    GetRoleRequest& operator=(const GetRoleRequest &) = default ;
    GetRoleRequest& operator=(GetRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->rolePrincipal_ == nullptr; };
    // rolePrincipal Field Functions 
    bool hasRolePrincipal() const { return this->rolePrincipal_ != nullptr;};
    void deleteRolePrincipal() { this->rolePrincipal_ = nullptr;};
    inline string getRolePrincipal() const { DARABONBA_PTR_GET_DEFAULT(rolePrincipal_, "") };
    inline GetRoleRequest& setRolePrincipal(string rolePrincipal) { DARABONBA_PTR_SET_VALUE(rolePrincipal_, rolePrincipal) };


  protected:
    shared_ptr<string> rolePrincipal_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
