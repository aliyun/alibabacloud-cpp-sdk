// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDWORKSPACEMEMBERSREQUESTMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_ADDWORKSPACEMEMBERSREQUESTMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddWorkspaceMembersRequestMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddWorkspaceMembersRequestMembers& obj) { 
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(MemberType, memberType_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, AddWorkspaceMembersRequestMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    AddWorkspaceMembersRequestMembers() = default ;
    AddWorkspaceMembersRequestMembers(const AddWorkspaceMembersRequestMembers &) = default ;
    AddWorkspaceMembersRequestMembers(AddWorkspaceMembersRequestMembers &&) = default ;
    AddWorkspaceMembersRequestMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddWorkspaceMembersRequestMembers() = default ;
    AddWorkspaceMembersRequestMembers& operator=(const AddWorkspaceMembersRequestMembers &) = default ;
    AddWorkspaceMembersRequestMembers& operator=(AddWorkspaceMembersRequestMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->memberId_ != nullptr
        && this->memberType_ != nullptr && this->roleType_ != nullptr; };
    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline AddWorkspaceMembersRequestMembers& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // memberType Field Functions 
    bool hasMemberType() const { return this->memberType_ != nullptr;};
    void deleteMemberType() { this->memberType_ = nullptr;};
    inline string memberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
    inline AddWorkspaceMembersRequestMembers& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string roleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline AddWorkspaceMembersRequestMembers& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    std::shared_ptr<string> memberId_ = nullptr;
    std::shared_ptr<string> memberType_ = nullptr;
    std::shared_ptr<string> roleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
