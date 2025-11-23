// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSERROLEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSERROLEIDLIST_HPP_
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
  class GetUserResponseBodyUserRoleIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyUserRoleIdList& obj) { 
      DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyUserRoleIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
    };
    GetUserResponseBodyUserRoleIdList() = default ;
    GetUserResponseBodyUserRoleIdList(const GetUserResponseBodyUserRoleIdList &) = default ;
    GetUserResponseBodyUserRoleIdList(GetUserResponseBodyUserRoleIdList &&) = default ;
    GetUserResponseBodyUserRoleIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyUserRoleIdList() = default ;
    GetUserResponseBodyUserRoleIdList& operator=(const GetUserResponseBodyUserRoleIdList &) = default ;
    GetUserResponseBodyUserRoleIdList& operator=(GetUserResponseBodyUserRoleIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roleIds_ == nullptr; };
    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline const vector<int32_t> & roleIds() const { DARABONBA_PTR_GET_CONST(roleIds_, vector<int32_t>) };
    inline vector<int32_t> roleIds() { DARABONBA_PTR_GET(roleIds_, vector<int32_t>) };
    inline GetUserResponseBodyUserRoleIdList& setRoleIds(const vector<int32_t> & roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };
    inline GetUserResponseBodyUserRoleIdList& setRoleIds(vector<int32_t> && roleIds) { DARABONBA_PTR_SET_RVALUE(roleIds_, roleIds) };


  protected:
    std::shared_ptr<vector<int32_t>> roleIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
