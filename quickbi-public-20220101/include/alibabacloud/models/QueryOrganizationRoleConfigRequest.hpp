// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGANIZATIONROLECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGANIZATIONROLECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryOrganizationRoleConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrganizationRoleConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RoleId, roleId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrganizationRoleConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
    };
    QueryOrganizationRoleConfigRequest() = default ;
    QueryOrganizationRoleConfigRequest(const QueryOrganizationRoleConfigRequest &) = default ;
    QueryOrganizationRoleConfigRequest(QueryOrganizationRoleConfigRequest &&) = default ;
    QueryOrganizationRoleConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrganizationRoleConfigRequest() = default ;
    QueryOrganizationRoleConfigRequest& operator=(const QueryOrganizationRoleConfigRequest &) = default ;
    QueryOrganizationRoleConfigRequest& operator=(QueryOrganizationRoleConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleId_ == nullptr; };
    // roleId Field Functions 
    bool hasRoleId() const { return this->roleId_ != nullptr;};
    void deleteRoleId() { this->roleId_ = nullptr;};
    inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
    inline QueryOrganizationRoleConfigRequest& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


  protected:
    // Organization role ID, including predefined roles and custom roles:
    // 
    // - Organization Administrator (predefined role): 111111111
    // - Permission Administrator (predefined role): 111111112
    // - Regular User (predefined role): 111111113
    // - Custom Role: The corresponding role ID of the custom role
    // 
    // This parameter is required.
    shared_ptr<int64_t> roleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
