// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEUSERPERMSSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSIONPERMDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEUSERPERMSSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSIONPERMDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails& obj) { 
      DARABONBA_PTR_TO_JSON(PermDetail, permDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(PermDetail, permDetail_);
    };
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails() = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails(const ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails &) = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails(ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails &&) = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails() = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails& operator=(const ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails &) = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails& operator=(ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permDetail_ == nullptr; };
    // permDetail Field Functions 
    bool hasPermDetail() const { return this->permDetail_ != nullptr;};
    void deletePermDetail() { this->permDetail_ = nullptr;};
    inline const vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> & permDetail() const { DARABONBA_PTR_GET_CONST(permDetail_, vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>) };
    inline vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> permDetail() { DARABONBA_PTR_GET(permDetail_, vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>) };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails& setPermDetail(const vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> & permDetail) { DARABONBA_PTR_SET_VALUE(permDetail_, permDetail) };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetails& setPermDetail(vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> && permDetail) { DARABONBA_PTR_SET_RVALUE(permDetail_, permDetail) };


  protected:
    std::shared_ptr<vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>> permDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
