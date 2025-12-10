// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRINCIPALPRIVILEGESET_HPP_
#define ALIBABACLOUD_MODELS_PRINCIPALPRIVILEGESET_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/PrivilegeGrantInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class PrincipalPrivilegeSet : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrincipalPrivilegeSet& obj) { 
      DARABONBA_PTR_TO_JSON(GroupPrivileges, groupPrivileges_);
      DARABONBA_PTR_TO_JSON(RolePrivileges, rolePrivileges_);
      DARABONBA_PTR_TO_JSON(UserPrivileges, userPrivileges_);
    };
    friend void from_json(const Darabonba::Json& j, PrincipalPrivilegeSet& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupPrivileges, groupPrivileges_);
      DARABONBA_PTR_FROM_JSON(RolePrivileges, rolePrivileges_);
      DARABONBA_PTR_FROM_JSON(UserPrivileges, userPrivileges_);
    };
    PrincipalPrivilegeSet() = default ;
    PrincipalPrivilegeSet(const PrincipalPrivilegeSet &) = default ;
    PrincipalPrivilegeSet(PrincipalPrivilegeSet &&) = default ;
    PrincipalPrivilegeSet(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrincipalPrivilegeSet() = default ;
    PrincipalPrivilegeSet& operator=(const PrincipalPrivilegeSet &) = default ;
    PrincipalPrivilegeSet& operator=(PrincipalPrivilegeSet &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupPrivileges_ == nullptr
        && return this->rolePrivileges_ == nullptr && return this->userPrivileges_ == nullptr; };
    // groupPrivileges Field Functions 
    bool hasGroupPrivileges() const { return this->groupPrivileges_ != nullptr;};
    void deleteGroupPrivileges() { this->groupPrivileges_ = nullptr;};
    inline const map<string, vector<PrivilegeGrantInfo>> & groupPrivileges() const { DARABONBA_PTR_GET_CONST(groupPrivileges_, map<string, vector<PrivilegeGrantInfo>>) };
    inline map<string, vector<PrivilegeGrantInfo>> groupPrivileges() { DARABONBA_PTR_GET(groupPrivileges_, map<string, vector<PrivilegeGrantInfo>>) };
    inline PrincipalPrivilegeSet& setGroupPrivileges(const map<string, vector<PrivilegeGrantInfo>> & groupPrivileges) { DARABONBA_PTR_SET_VALUE(groupPrivileges_, groupPrivileges) };
    inline PrincipalPrivilegeSet& setGroupPrivileges(map<string, vector<PrivilegeGrantInfo>> && groupPrivileges) { DARABONBA_PTR_SET_RVALUE(groupPrivileges_, groupPrivileges) };


    // rolePrivileges Field Functions 
    bool hasRolePrivileges() const { return this->rolePrivileges_ != nullptr;};
    void deleteRolePrivileges() { this->rolePrivileges_ = nullptr;};
    inline const map<string, vector<PrivilegeGrantInfo>> & rolePrivileges() const { DARABONBA_PTR_GET_CONST(rolePrivileges_, map<string, vector<PrivilegeGrantInfo>>) };
    inline map<string, vector<PrivilegeGrantInfo>> rolePrivileges() { DARABONBA_PTR_GET(rolePrivileges_, map<string, vector<PrivilegeGrantInfo>>) };
    inline PrincipalPrivilegeSet& setRolePrivileges(const map<string, vector<PrivilegeGrantInfo>> & rolePrivileges) { DARABONBA_PTR_SET_VALUE(rolePrivileges_, rolePrivileges) };
    inline PrincipalPrivilegeSet& setRolePrivileges(map<string, vector<PrivilegeGrantInfo>> && rolePrivileges) { DARABONBA_PTR_SET_RVALUE(rolePrivileges_, rolePrivileges) };


    // userPrivileges Field Functions 
    bool hasUserPrivileges() const { return this->userPrivileges_ != nullptr;};
    void deleteUserPrivileges() { this->userPrivileges_ = nullptr;};
    inline const map<string, vector<PrivilegeGrantInfo>> & userPrivileges() const { DARABONBA_PTR_GET_CONST(userPrivileges_, map<string, vector<PrivilegeGrantInfo>>) };
    inline map<string, vector<PrivilegeGrantInfo>> userPrivileges() { DARABONBA_PTR_GET(userPrivileges_, map<string, vector<PrivilegeGrantInfo>>) };
    inline PrincipalPrivilegeSet& setUserPrivileges(const map<string, vector<PrivilegeGrantInfo>> & userPrivileges) { DARABONBA_PTR_SET_VALUE(userPrivileges_, userPrivileges) };
    inline PrincipalPrivilegeSet& setUserPrivileges(map<string, vector<PrivilegeGrantInfo>> && userPrivileges) { DARABONBA_PTR_SET_RVALUE(userPrivileges_, userPrivileges) };


  protected:
    std::shared_ptr<map<string, vector<PrivilegeGrantInfo>>> groupPrivileges_ = nullptr;
    std::shared_ptr<map<string, vector<PrivilegeGrantInfo>>> rolePrivileges_ = nullptr;
    std::shared_ptr<map<string, vector<PrivilegeGrantInfo>>> userPrivileges_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
