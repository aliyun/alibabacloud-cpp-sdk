// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEMEMBERSRESPONSEBODYRESOURCEMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEMEMBERSRESPONSEBODYRESOURCEMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListResourceMembersResponseBodyResourceMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceMembersResponseBodyResourceMembers& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(roleName, roleName_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceMembersResponseBodyResourceMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(roleName, roleName_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    ListResourceMembersResponseBodyResourceMembers() = default ;
    ListResourceMembersResponseBodyResourceMembers(const ListResourceMembersResponseBodyResourceMembers &) = default ;
    ListResourceMembersResponseBodyResourceMembers(ListResourceMembersResponseBodyResourceMembers &&) = default ;
    ListResourceMembersResponseBodyResourceMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceMembersResponseBodyResourceMembers() = default ;
    ListResourceMembersResponseBodyResourceMembers& operator=(const ListResourceMembersResponseBodyResourceMembers &) = default ;
    ListResourceMembersResponseBodyResourceMembers& operator=(ListResourceMembersResponseBodyResourceMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->roleName_ == nullptr && return this->username_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListResourceMembersResponseBodyResourceMembers& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ListResourceMembersResponseBodyResourceMembers& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline ListResourceMembersResponseBodyResourceMembers& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> accountId_ = nullptr;
    std::shared_ptr<string> roleName_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
