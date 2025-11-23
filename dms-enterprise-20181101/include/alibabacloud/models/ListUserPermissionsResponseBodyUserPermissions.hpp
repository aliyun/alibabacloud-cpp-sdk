// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserPermissionsResponseBodyUserPermissionsUserPermission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListUserPermissionsResponseBodyUserPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPermissionsResponseBodyUserPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(UserPermission, userPermission_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPermissionsResponseBodyUserPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPermission, userPermission_);
    };
    ListUserPermissionsResponseBodyUserPermissions() = default ;
    ListUserPermissionsResponseBodyUserPermissions(const ListUserPermissionsResponseBodyUserPermissions &) = default ;
    ListUserPermissionsResponseBodyUserPermissions(ListUserPermissionsResponseBodyUserPermissions &&) = default ;
    ListUserPermissionsResponseBodyUserPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPermissionsResponseBodyUserPermissions() = default ;
    ListUserPermissionsResponseBodyUserPermissions& operator=(const ListUserPermissionsResponseBodyUserPermissions &) = default ;
    ListUserPermissionsResponseBodyUserPermissions& operator=(ListUserPermissionsResponseBodyUserPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userPermission_ == nullptr; };
    // userPermission Field Functions 
    bool hasUserPermission() const { return this->userPermission_ != nullptr;};
    void deleteUserPermission() { this->userPermission_ = nullptr;};
    inline const vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermission> & userPermission() const { DARABONBA_PTR_GET_CONST(userPermission_, vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermission>) };
    inline vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermission> userPermission() { DARABONBA_PTR_GET(userPermission_, vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermission>) };
    inline ListUserPermissionsResponseBodyUserPermissions& setUserPermission(const vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermission> & userPermission) { DARABONBA_PTR_SET_VALUE(userPermission_, userPermission) };
    inline ListUserPermissionsResponseBodyUserPermissions& setUserPermission(vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermission> && userPermission) { DARABONBA_PTR_SET_RVALUE(userPermission_, userPermission) };


  protected:
    std::shared_ptr<vector<Models::ListUserPermissionsResponseBodyUserPermissionsUserPermission>> userPermission_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
