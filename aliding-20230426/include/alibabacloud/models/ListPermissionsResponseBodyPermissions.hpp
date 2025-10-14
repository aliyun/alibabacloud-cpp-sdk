// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODYPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODYPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPermissionsResponseBodyPermissionsMember.hpp>
#include <alibabacloud/models/ListPermissionsResponseBodyPermissionsRole.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListPermissionsResponseBodyPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsResponseBodyPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_TO_JSON(Member, member_);
      DARABONBA_PTR_TO_JSON(Role, role_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsResponseBodyPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(DentryUuid, dentryUuid_);
      DARABONBA_PTR_FROM_JSON(Member, member_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
    };
    ListPermissionsResponseBodyPermissions() = default ;
    ListPermissionsResponseBodyPermissions(const ListPermissionsResponseBodyPermissions &) = default ;
    ListPermissionsResponseBodyPermissions(ListPermissionsResponseBodyPermissions &&) = default ;
    ListPermissionsResponseBodyPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPermissionsResponseBodyPermissions() = default ;
    ListPermissionsResponseBodyPermissions& operator=(const ListPermissionsResponseBodyPermissions &) = default ;
    ListPermissionsResponseBodyPermissions& operator=(ListPermissionsResponseBodyPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dentryUuid_ == nullptr
        && return this->member_ == nullptr && return this->role_ == nullptr; };
    // dentryUuid Field Functions 
    bool hasDentryUuid() const { return this->dentryUuid_ != nullptr;};
    void deleteDentryUuid() { this->dentryUuid_ = nullptr;};
    inline string dentryUuid() const { DARABONBA_PTR_GET_DEFAULT(dentryUuid_, "") };
    inline ListPermissionsResponseBodyPermissions& setDentryUuid(string dentryUuid) { DARABONBA_PTR_SET_VALUE(dentryUuid_, dentryUuid) };


    // member Field Functions 
    bool hasMember() const { return this->member_ != nullptr;};
    void deleteMember() { this->member_ = nullptr;};
    inline const Models::ListPermissionsResponseBodyPermissionsMember & member() const { DARABONBA_PTR_GET_CONST(member_, Models::ListPermissionsResponseBodyPermissionsMember) };
    inline Models::ListPermissionsResponseBodyPermissionsMember member() { DARABONBA_PTR_GET(member_, Models::ListPermissionsResponseBodyPermissionsMember) };
    inline ListPermissionsResponseBodyPermissions& setMember(const Models::ListPermissionsResponseBodyPermissionsMember & member) { DARABONBA_PTR_SET_VALUE(member_, member) };
    inline ListPermissionsResponseBodyPermissions& setMember(Models::ListPermissionsResponseBodyPermissionsMember && member) { DARABONBA_PTR_SET_RVALUE(member_, member) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline const Models::ListPermissionsResponseBodyPermissionsRole & role() const { DARABONBA_PTR_GET_CONST(role_, Models::ListPermissionsResponseBodyPermissionsRole) };
    inline Models::ListPermissionsResponseBodyPermissionsRole role() { DARABONBA_PTR_GET(role_, Models::ListPermissionsResponseBodyPermissionsRole) };
    inline ListPermissionsResponseBodyPermissions& setRole(const Models::ListPermissionsResponseBodyPermissionsRole & role) { DARABONBA_PTR_SET_VALUE(role_, role) };
    inline ListPermissionsResponseBodyPermissions& setRole(Models::ListPermissionsResponseBodyPermissionsRole && role) { DARABONBA_PTR_SET_RVALUE(role_, role) };


  protected:
    std::shared_ptr<string> dentryUuid_ = nullptr;
    std::shared_ptr<Models::ListPermissionsResponseBodyPermissionsMember> member_ = nullptr;
    std::shared_ptr<Models::ListPermissionsResponseBodyPermissionsRole> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
