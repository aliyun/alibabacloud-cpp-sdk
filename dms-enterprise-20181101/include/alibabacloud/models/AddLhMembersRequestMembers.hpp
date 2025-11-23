// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLHMEMBERSREQUESTMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_ADDLHMEMBERSREQUESTMEMBERS_HPP_
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
  class AddLhMembersRequestMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLhMembersRequestMembers& obj) { 
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AddLhMembersRequestMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AddLhMembersRequestMembers() = default ;
    AddLhMembersRequestMembers(const AddLhMembersRequestMembers &) = default ;
    AddLhMembersRequestMembers(AddLhMembersRequestMembers &&) = default ;
    AddLhMembersRequestMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLhMembersRequestMembers() = default ;
    AddLhMembersRequestMembers& operator=(const AddLhMembersRequestMembers &) = default ;
    AddLhMembersRequestMembers& operator=(AddLhMembersRequestMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->roles_ == nullptr
        && return this->userId_ == nullptr; };
    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<string> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
    inline vector<string> roles() { DARABONBA_PTR_GET(roles_, vector<string>) };
    inline AddLhMembersRequestMembers& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline AddLhMembersRequestMembers& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline AddLhMembersRequestMembers& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The role. Valid values:
    // 
    // *   **ADMIN**: workspace administrator. You can add a workspace administrator only as a DMS administrator or a DBA.
    // *   **MEMBER**: workspace member.
    // *   **DEVELOPER**: task flow developer. Only a workspace member can be added as a task flow developer.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> roles_ = nullptr;
    // The ID of the user to be added. You can call the [ListUsers](https://help.aliyun.com/document_detail/141938.html) or [GetUser](https://help.aliyun.com/document_detail/147098.html) operation to obtain the user ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
