// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMEMBERRESPONSEBODYMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEMEMBERRESPONSEBODYMEMBERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateMemberResponseBodyMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMemberResponseBodyMembers& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMemberResponseBodyMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    CreateMemberResponseBodyMembers() = default ;
    CreateMemberResponseBodyMembers(const CreateMemberResponseBodyMembers &) = default ;
    CreateMemberResponseBodyMembers(CreateMemberResponseBodyMembers &&) = default ;
    CreateMemberResponseBodyMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMemberResponseBodyMembers() = default ;
    CreateMemberResponseBodyMembers& operator=(const CreateMemberResponseBodyMembers &) = default ;
    CreateMemberResponseBodyMembers& operator=(CreateMemberResponseBodyMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayName_ == nullptr
        && return this->memberId_ == nullptr && return this->roles_ == nullptr && return this->userId_ == nullptr; };
    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateMemberResponseBodyMembers& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline CreateMemberResponseBodyMembers& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline const vector<string> & roles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
    inline vector<string> roles() { DARABONBA_PTR_GET(roles_, vector<string>) };
    inline CreateMemberResponseBodyMembers& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
    inline CreateMemberResponseBodyMembers& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline CreateMemberResponseBodyMembers& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The display name.
    std::shared_ptr<string> displayName_ = nullptr;
    // The member ID.
    std::shared_ptr<string> memberId_ = nullptr;
    // The list of roles.
    std::shared_ptr<vector<string>> roles_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
