// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCEUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCEUSERPERMISSIONSRESPONSEBODYUSERPERMISSIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListInstanceUserPermissionsResponseBodyUserPermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceUserPermissionsResponseBodyUserPermissions& obj) { 
      DARABONBA_PTR_TO_JSON(UserPermission, userPermission_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceUserPermissionsResponseBodyUserPermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(UserPermission, userPermission_);
    };
    ListInstanceUserPermissionsResponseBodyUserPermissions() = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissions(const ListInstanceUserPermissionsResponseBodyUserPermissions &) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissions(ListInstanceUserPermissionsResponseBodyUserPermissions &&) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceUserPermissionsResponseBodyUserPermissions() = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissions& operator=(const ListInstanceUserPermissionsResponseBodyUserPermissions &) = default ;
    ListInstanceUserPermissionsResponseBodyUserPermissions& operator=(ListInstanceUserPermissionsResponseBodyUserPermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->userPermission_ != nullptr; };
    // userPermission Field Functions 
    bool hasUserPermission() const { return this->userPermission_ != nullptr;};
    void deleteUserPermission() { this->userPermission_ = nullptr;};
    inline const vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission> & userPermission() const { DARABONBA_PTR_GET_CONST(userPermission_, vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission>) };
    inline vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission> userPermission() { DARABONBA_PTR_GET(userPermission_, vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission>) };
    inline ListInstanceUserPermissionsResponseBodyUserPermissions& setUserPermission(const vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission> & userPermission) { DARABONBA_PTR_SET_VALUE(userPermission_, userPermission) };
    inline ListInstanceUserPermissionsResponseBodyUserPermissions& setUserPermission(vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission> && userPermission) { DARABONBA_PTR_SET_RVALUE(userPermission_, userPermission) };


  protected:
    std::shared_ptr<vector<Models::ListInstanceUserPermissionsResponseBodyUserPermissionsUserPermission>> userPermission_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
