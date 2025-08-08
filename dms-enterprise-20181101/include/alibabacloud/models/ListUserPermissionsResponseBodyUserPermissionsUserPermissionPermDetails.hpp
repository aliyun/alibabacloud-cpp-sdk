// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSIONPERMDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSIONPERMDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& obj) { 
      DARABONBA_PTR_TO_JSON(PermDetail, permDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(PermDetail, permDetail_);
    };
    ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails() = default ;
    ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails(const ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails &) = default ;
    ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails(ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails &&) = default ;
    ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails() = default ;
    ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& operator=(const ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails &) = default ;
    ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& operator=(ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->permDetail_ != nullptr; };
    // permDetail Field Functions 
    bool hasPermDetail() const { return this->permDetail_ != nullptr;};
    void deletePermDetail() { this->permDetail_ = nullptr;};
    inline const vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> & permDetail() const { DARABONBA_PTR_GET_CONST(permDetail_, vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>) };
    inline vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> permDetail() { DARABONBA_PTR_GET(permDetail_, vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>) };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& setPermDetail(const vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> & permDetail) { DARABONBA_PTR_SET_VALUE(permDetail_, permDetail) };
    inline ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& setPermDetail(vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> && permDetail) { DARABONBA_PTR_SET_RVALUE(permDetail_, permDetail) };


  protected:
    std::shared_ptr<vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>> permDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
