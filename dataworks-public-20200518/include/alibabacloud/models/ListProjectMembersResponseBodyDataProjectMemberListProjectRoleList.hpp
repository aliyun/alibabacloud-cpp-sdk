// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYDATAPROJECTMEMBERLISTPROJECTROLELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROJECTMEMBERSRESPONSEBODYDATAPROJECTMEMBERLISTPROJECTROLELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectRoleCode, projectRoleCode_);
      DARABONBA_PTR_TO_JSON(ProjectRoleId, projectRoleId_);
      DARABONBA_PTR_TO_JSON(ProjectRoleName, projectRoleName_);
      DARABONBA_PTR_TO_JSON(ProjectRoleType, projectRoleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectRoleCode, projectRoleCode_);
      DARABONBA_PTR_FROM_JSON(ProjectRoleId, projectRoleId_);
      DARABONBA_PTR_FROM_JSON(ProjectRoleName, projectRoleName_);
      DARABONBA_PTR_FROM_JSON(ProjectRoleType, projectRoleType_);
    };
    ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList() = default ;
    ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList(const ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList &) = default ;
    ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList(ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList &&) = default ;
    ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList() = default ;
    ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList& operator=(const ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList &) = default ;
    ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList& operator=(ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectRoleCode_ != nullptr
        && this->projectRoleId_ != nullptr && this->projectRoleName_ != nullptr && this->projectRoleType_ != nullptr; };
    // projectRoleCode Field Functions 
    bool hasProjectRoleCode() const { return this->projectRoleCode_ != nullptr;};
    void deleteProjectRoleCode() { this->projectRoleCode_ = nullptr;};
    inline string projectRoleCode() const { DARABONBA_PTR_GET_DEFAULT(projectRoleCode_, "") };
    inline ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList& setProjectRoleCode(string projectRoleCode) { DARABONBA_PTR_SET_VALUE(projectRoleCode_, projectRoleCode) };


    // projectRoleId Field Functions 
    bool hasProjectRoleId() const { return this->projectRoleId_ != nullptr;};
    void deleteProjectRoleId() { this->projectRoleId_ = nullptr;};
    inline int32_t projectRoleId() const { DARABONBA_PTR_GET_DEFAULT(projectRoleId_, 0) };
    inline ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList& setProjectRoleId(int32_t projectRoleId) { DARABONBA_PTR_SET_VALUE(projectRoleId_, projectRoleId) };


    // projectRoleName Field Functions 
    bool hasProjectRoleName() const { return this->projectRoleName_ != nullptr;};
    void deleteProjectRoleName() { this->projectRoleName_ = nullptr;};
    inline string projectRoleName() const { DARABONBA_PTR_GET_DEFAULT(projectRoleName_, "") };
    inline ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList& setProjectRoleName(string projectRoleName) { DARABONBA_PTR_SET_VALUE(projectRoleName_, projectRoleName) };


    // projectRoleType Field Functions 
    bool hasProjectRoleType() const { return this->projectRoleType_ != nullptr;};
    void deleteProjectRoleType() { this->projectRoleType_ = nullptr;};
    inline string projectRoleType() const { DARABONBA_PTR_GET_DEFAULT(projectRoleType_, "") };
    inline ListProjectMembersResponseBodyDataProjectMemberListProjectRoleList& setProjectRoleType(string projectRoleType) { DARABONBA_PTR_SET_VALUE(projectRoleType_, projectRoleType) };


  protected:
    // The code of the role. DataWorks provides built-in roles and allows you to create custom roles based on your business requirements. For more information about roles, see [Overview of users, roles, and permissions](https://help.aliyun.com/document_detail/295463.html).
    std::shared_ptr<string> projectRoleCode_ = nullptr;
    // The role ID.
    std::shared_ptr<int32_t> projectRoleId_ = nullptr;
    // The name of the role. DataWorks provides built-in roles and allows you to create custom roles based on your business requirements. For more information about roles, see [Overview of users, roles, and permissions](https://help.aliyun.com/document_detail/295463.html).
    std::shared_ptr<string> projectRoleName_ = nullptr;
    // The type of the role. Valid values:
    // 
    // *   0: SYSTEM, which indicates that the role is a built-in role.
    // *   2: USER_CUSTOM, which indicates that the role is a custom role.
    std::shared_ptr<string> projectRoleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
