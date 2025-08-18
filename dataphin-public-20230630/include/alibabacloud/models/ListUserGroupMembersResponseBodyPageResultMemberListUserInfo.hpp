// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPMEMBERSRESPONSEBODYPAGERESULTMEMBERLISTUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPMEMBERSRESPONSEBODYPAGERESULTMEMBERLISTUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListUserGroupMembersResponseBodyPageResultMemberListUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupMembersResponseBodyPageResultMemberListUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupMembersResponseBodyPageResultMemberListUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    ListUserGroupMembersResponseBodyPageResultMemberListUserInfo() = default ;
    ListUserGroupMembersResponseBodyPageResultMemberListUserInfo(const ListUserGroupMembersResponseBodyPageResultMemberListUserInfo &) = default ;
    ListUserGroupMembersResponseBodyPageResultMemberListUserInfo(ListUserGroupMembersResponseBodyPageResultMemberListUserInfo &&) = default ;
    ListUserGroupMembersResponseBodyPageResultMemberListUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupMembersResponseBodyPageResultMemberListUserInfo() = default ;
    ListUserGroupMembersResponseBodyPageResultMemberListUserInfo& operator=(const ListUserGroupMembersResponseBodyPageResultMemberListUserInfo &) = default ;
    ListUserGroupMembersResponseBodyPageResultMemberListUserInfo& operator=(ListUserGroupMembersResponseBodyPageResultMemberListUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->displayName_ != nullptr && this->id_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline ListUserGroupMembersResponseBodyPageResultMemberListUserInfo& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline ListUserGroupMembersResponseBodyPageResultMemberListUserInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListUserGroupMembersResponseBodyPageResultMemberListUserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> accountName_ = nullptr;
    std::shared_ptr<string> displayName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
