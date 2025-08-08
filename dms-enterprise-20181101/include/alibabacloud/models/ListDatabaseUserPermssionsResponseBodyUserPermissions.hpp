// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATABASEUSERPERMSSIONSRESPONSEBODYUSERPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTDATABASEUSERPERMSSIONSRESPONSEBODYUSERPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDatabaseUserPermssionsResponseBodyUserPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatabaseUserPermssionsResponseBodyUserPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(UserPermission, userPermission_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatabaseUserPermssionsResponseBodyUserPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPermission, userPermission_);
    };
    ListDatabaseUserPermssionsResponseBodyUserPermissions() = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissions(const ListDatabaseUserPermssionsResponseBodyUserPermissions &) = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissions(ListDatabaseUserPermssionsResponseBodyUserPermissions &&) = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatabaseUserPermssionsResponseBodyUserPermissions() = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissions& operator=(const ListDatabaseUserPermssionsResponseBodyUserPermissions &) = default ;
    ListDatabaseUserPermssionsResponseBodyUserPermissions& operator=(ListDatabaseUserPermssionsResponseBodyUserPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userPermission_ != nullptr; };
    // userPermission Field Functions 
    bool hasUserPermission() const { return this->userPermission_ != nullptr;};
    void deleteUserPermission() { this->userPermission_ = nullptr;};
    inline const vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission> & userPermission() const { DARABONBA_PTR_GET_CONST(userPermission_, vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission>) };
    inline vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission> userPermission() { DARABONBA_PTR_GET(userPermission_, vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission>) };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissions& setUserPermission(const vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission> & userPermission) { DARABONBA_PTR_SET_VALUE(userPermission_, userPermission) };
    inline ListDatabaseUserPermssionsResponseBodyUserPermissions& setUserPermission(vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission> && userPermission) { DARABONBA_PTR_SET_RVALUE(userPermission_, userPermission) };


  protected:
    std::shared_ptr<vector<Models::ListDatabaseUserPermssionsResponseBodyUserPermissionsUserPermission>> userPermission_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
