// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSIONPERMDETAILS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONSUSERPERMISSIONPERMDETAILS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& obj) { 
      DARABONBA_PTR_TO_JSON(PermDetail, permDetail_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(PermDetail, permDetail_);
    };
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails() = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails(const ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails &) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails(ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails &&) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails() = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& operator=(const ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails &) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& operator=(ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->permDetail_ != nullptr; };
    // permDetail Field Functions 
    bool hasPermDetail() const { return this->permDetail_ != nullptr;};
    void deletePermDetail() { this->permDetail_ = nullptr;};
    inline const vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> & permDetail() const { DARABONBA_PTR_GET_CONST(permDetail_, vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>) };
    inline vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> permDetail() { DARABONBA_PTR_GET(permDetail_, vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>) };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& setPermDetail(const vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> & permDetail) { DARABONBA_PTR_SET_VALUE(permDetail_, permDetail) };
    inline ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetails& setPermDetail(vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail> && permDetail) { DARABONBA_PTR_SET_RVALUE(permDetail_, permDetail) };


  protected:
    std::shared_ptr<vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermissionPermDetailsPermDetail>> permDetail_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
