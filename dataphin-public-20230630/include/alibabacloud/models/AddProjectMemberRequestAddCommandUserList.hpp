// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDPROJECTMEMBERREQUESTADDCOMMANDUSERLIST_HPP_
#define ALIBABACLOUD_MODELS_ADDPROJECTMEMBERREQUESTADDCOMMANDUSERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class AddProjectMemberRequestAddCommandUserList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddProjectMemberRequestAddCommandUserList& obj) { 
      DARABONBA_PTR_TO_JSON(RoleList, roleList_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddProjectMemberRequestAddCommandUserList& obj) { 
      DARABONBA_PTR_FROM_JSON(RoleList, roleList_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddProjectMemberRequestAddCommandUserList() = default ;
    AddProjectMemberRequestAddCommandUserList(const AddProjectMemberRequestAddCommandUserList &) = default ;
    AddProjectMemberRequestAddCommandUserList(AddProjectMemberRequestAddCommandUserList &&) = default ;
    AddProjectMemberRequestAddCommandUserList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddProjectMemberRequestAddCommandUserList() = default ;
    AddProjectMemberRequestAddCommandUserList& operator=(const AddProjectMemberRequestAddCommandUserList &) = default ;
    AddProjectMemberRequestAddCommandUserList& operator=(AddProjectMemberRequestAddCommandUserList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->roleList_ != nullptr
        && this->userId_ != nullptr; };
    // roleList Field Functions 
    bool hasRoleList() const { return this->roleList_ != nullptr;};
    void deleteRoleList() { this->roleList_ = nullptr;};
    inline const vector<int32_t> & roleList() const { DARABONBA_PTR_GET_CONST(roleList_, vector<int32_t>) };
    inline vector<int32_t> roleList() { DARABONBA_PTR_GET(roleList_, vector<int32_t>) };
    inline AddProjectMemberRequestAddCommandUserList& setRoleList(const vector<int32_t> & roleList) { DARABONBA_PTR_SET_VALUE(roleList_, roleList) };
    inline AddProjectMemberRequestAddCommandUserList& setRoleList(vector<int32_t> && roleList) { DARABONBA_PTR_SET_RVALUE(roleList_, roleList) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AddProjectMemberRequestAddCommandUserList& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<int32_t>> roleList_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
