// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSERROLENAMELIST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSERROLENAMELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetUserResponseBodyUserRoleNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyUserRoleNameList& obj) { 
      DARABONBA_PTR_TO_JSON(RoleNames, roleNames_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyUserRoleNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleNames, roleNames_);
    };
    GetUserResponseBodyUserRoleNameList() = default ;
    GetUserResponseBodyUserRoleNameList(const GetUserResponseBodyUserRoleNameList &) = default ;
    GetUserResponseBodyUserRoleNameList(GetUserResponseBodyUserRoleNameList &&) = default ;
    GetUserResponseBodyUserRoleNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyUserRoleNameList() = default ;
    GetUserResponseBodyUserRoleNameList& operator=(const GetUserResponseBodyUserRoleNameList &) = default ;
    GetUserResponseBodyUserRoleNameList& operator=(GetUserResponseBodyUserRoleNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleNames_ == nullptr; };
    // roleNames Field Functions 
    bool hasRoleNames() const { return this->roleNames_ != nullptr;};
    void deleteRoleNames() { this->roleNames_ = nullptr;};
    inline const vector<string> & roleNames() const { DARABONBA_PTR_GET_CONST(roleNames_, vector<string>) };
    inline vector<string> roleNames() { DARABONBA_PTR_GET(roleNames_, vector<string>) };
    inline GetUserResponseBodyUserRoleNameList& setRoleNames(const vector<string> & roleNames) { DARABONBA_PTR_SET_VALUE(roleNames_, roleNames) };
    inline GetUserResponseBodyUserRoleNameList& setRoleNames(vector<string> && roleNames) { DARABONBA_PTR_SET_RVALUE(roleNames_, roleNames) };


  protected:
    std::shared_ptr<vector<string>> roleNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
