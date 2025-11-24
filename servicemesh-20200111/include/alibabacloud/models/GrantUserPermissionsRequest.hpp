// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTUSERPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTUSERPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GrantUserPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantUserPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(SubAccountUserId, subAccountUserId_);
      DARABONBA_PTR_TO_JSON(SubAccountUserIds, subAccountUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, GrantUserPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(SubAccountUserId, subAccountUserId_);
      DARABONBA_PTR_FROM_JSON(SubAccountUserIds, subAccountUserIds_);
    };
    GrantUserPermissionsRequest() = default ;
    GrantUserPermissionsRequest(const GrantUserPermissionsRequest &) = default ;
    GrantUserPermissionsRequest(GrantUserPermissionsRequest &&) = default ;
    GrantUserPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantUserPermissionsRequest() = default ;
    GrantUserPermissionsRequest& operator=(const GrantUserPermissionsRequest &) = default ;
    GrantUserPermissionsRequest& operator=(GrantUserPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permissions_ == nullptr
        && return this->subAccountUserId_ == nullptr && return this->subAccountUserIds_ == nullptr; };
    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline string permissions() const { DARABONBA_PTR_GET_DEFAULT(permissions_, "") };
    inline GrantUserPermissionsRequest& setPermissions(string permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };


    // subAccountUserId Field Functions 
    bool hasSubAccountUserId() const { return this->subAccountUserId_ != nullptr;};
    void deleteSubAccountUserId() { this->subAccountUserId_ = nullptr;};
    inline string subAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(subAccountUserId_, "") };
    inline GrantUserPermissionsRequest& setSubAccountUserId(string subAccountUserId) { DARABONBA_PTR_SET_VALUE(subAccountUserId_, subAccountUserId) };


    // subAccountUserIds Field Functions 
    bool hasSubAccountUserIds() const { return this->subAccountUserIds_ != nullptr;};
    void deleteSubAccountUserIds() { this->subAccountUserIds_ = nullptr;};
    inline const vector<string> & subAccountUserIds() const { DARABONBA_PTR_GET_CONST(subAccountUserIds_, vector<string>) };
    inline vector<string> subAccountUserIds() { DARABONBA_PTR_GET(subAccountUserIds_, vector<string>) };
    inline GrantUserPermissionsRequest& setSubAccountUserIds(const vector<string> & subAccountUserIds) { DARABONBA_PTR_SET_VALUE(subAccountUserIds_, subAccountUserIds) };
    inline GrantUserPermissionsRequest& setSubAccountUserIds(vector<string> && subAccountUserIds) { DARABONBA_PTR_SET_RVALUE(subAccountUserIds_, subAccountUserIds) };


  protected:
    // The permissions that are granted to an entity. The content is a string that consists of JSON arrays. You must specify all permissions that you want to grant to an entity. You can add or remove permissions by modifying the content. Field definition of the sample code:
    // 
    // *   `IsCustom`: a parameter that is required by the system. Set the value to `true`.
    // *   `Cluster`: the ID of the Service Mesh (ASM) instance.
    // *   `RoleName`: the name of the permissions. Valid values: `istio-admin`, `istio-ops`, and `istio-readonly`. A value of istio-admin indicates the permissions of ASM administrators. A value of istio-ops indicates the permissions of ASM restricted users. A value of istio-readonly indicates the read-only permissions.
    // *   `IsRamRole`: the entity to which you want to grant the permissions. To grant the permissions to a RAM role, set the value to `true`. Otherwise, set the value to `false`.
    std::shared_ptr<string> permissions_ = nullptr;
    // The ID of the RAM user or RAM role.
    std::shared_ptr<string> subAccountUserId_ = nullptr;
    // The IDs of RAM users or RAM roles. You can grant permissions to multiple users at a time.
    std::shared_ptr<vector<string>> subAccountUserIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
