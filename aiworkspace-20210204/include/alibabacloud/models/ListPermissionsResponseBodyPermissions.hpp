// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODYPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTPERMISSIONSRESPONSEBODYPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPermissionsResponseBodyPermissionsPermissionRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListPermissionsResponseBodyPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPermissionsResponseBodyPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(PermissionCode, permissionCode_);
      DARABONBA_PTR_TO_JSON(PermissionRules, permissionRules_);
    };
    friend void from_json(const Darabonba::Json& j, ListPermissionsResponseBodyPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(PermissionCode, permissionCode_);
      DARABONBA_PTR_FROM_JSON(PermissionRules, permissionRules_);
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
    virtual bool empty() const override { this->permissionCode_ != nullptr
        && this->permissionRules_ != nullptr; };
    // permissionCode Field Functions 
    bool hasPermissionCode() const { return this->permissionCode_ != nullptr;};
    void deletePermissionCode() { this->permissionCode_ = nullptr;};
    inline string permissionCode() const { DARABONBA_PTR_GET_DEFAULT(permissionCode_, "") };
    inline ListPermissionsResponseBodyPermissions& setPermissionCode(string permissionCode) { DARABONBA_PTR_SET_VALUE(permissionCode_, permissionCode) };


    // permissionRules Field Functions 
    bool hasPermissionRules() const { return this->permissionRules_ != nullptr;};
    void deletePermissionRules() { this->permissionRules_ = nullptr;};
    inline const vector<Models::ListPermissionsResponseBodyPermissionsPermissionRules> & permissionRules() const { DARABONBA_PTR_GET_CONST(permissionRules_, vector<Models::ListPermissionsResponseBodyPermissionsPermissionRules>) };
    inline vector<Models::ListPermissionsResponseBodyPermissionsPermissionRules> permissionRules() { DARABONBA_PTR_GET(permissionRules_, vector<Models::ListPermissionsResponseBodyPermissionsPermissionRules>) };
    inline ListPermissionsResponseBodyPermissions& setPermissionRules(const vector<Models::ListPermissionsResponseBodyPermissionsPermissionRules> & permissionRules) { DARABONBA_PTR_SET_VALUE(permissionRules_, permissionRules) };
    inline ListPermissionsResponseBodyPermissions& setPermissionRules(vector<Models::ListPermissionsResponseBodyPermissionsPermissionRules> && permissionRules) { DARABONBA_PTR_SET_RVALUE(permissionRules_, permissionRules) };


  protected:
    // The permission name, which is unique in a region. For more information about permissions, see [Appendix: Roles and permissions](https://help.aliyun.com/document_detail/2840449.html). The example value PaiDLC:GetTensorboard indicates the permission to view details about a TensorBoard job on the Deep Learning Containers (DLC) page.
    std::shared_ptr<string> permissionCode_ = nullptr;
    // The permission rules.
    std::shared_ptr<vector<Models::ListPermissionsResponseBodyPermissionsPermissionRules>> permissionRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
