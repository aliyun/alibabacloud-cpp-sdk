// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPMEMBERSRESPONSEBODYPAGERESULTMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPMEMBERSRESPONSEBODYPAGERESULTMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListUserGroupMembersResponseBodyPageResultMemberListCreator.hpp>
#include <alibabacloud/models/ListUserGroupMembersResponseBodyPageResultMemberListUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListUserGroupMembersResponseBodyPageResultMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupMembersResponseBodyPageResultMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_TO_JSON(UserRole, userRole_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupMembersResponseBodyPageResultMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
      DARABONBA_PTR_FROM_JSON(UserRole, userRole_);
    };
    ListUserGroupMembersResponseBodyPageResultMemberList() = default ;
    ListUserGroupMembersResponseBodyPageResultMemberList(const ListUserGroupMembersResponseBodyPageResultMemberList &) = default ;
    ListUserGroupMembersResponseBodyPageResultMemberList(ListUserGroupMembersResponseBodyPageResultMemberList &&) = default ;
    ListUserGroupMembersResponseBodyPageResultMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupMembersResponseBodyPageResultMemberList() = default ;
    ListUserGroupMembersResponseBodyPageResultMemberList& operator=(const ListUserGroupMembersResponseBodyPageResultMemberList &) = default ;
    ListUserGroupMembersResponseBodyPageResultMemberList& operator=(ListUserGroupMembersResponseBodyPageResultMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->id_ == nullptr && return this->userGroupId_ == nullptr && return this->userInfo_ == nullptr && return this->userRole_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline const Models::ListUserGroupMembersResponseBodyPageResultMemberListCreator & creator() const { DARABONBA_PTR_GET_CONST(creator_, Models::ListUserGroupMembersResponseBodyPageResultMemberListCreator) };
    inline Models::ListUserGroupMembersResponseBodyPageResultMemberListCreator creator() { DARABONBA_PTR_GET(creator_, Models::ListUserGroupMembersResponseBodyPageResultMemberListCreator) };
    inline ListUserGroupMembersResponseBodyPageResultMemberList& setCreator(const Models::ListUserGroupMembersResponseBodyPageResultMemberListCreator & creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };
    inline ListUserGroupMembersResponseBodyPageResultMemberList& setCreator(Models::ListUserGroupMembersResponseBodyPageResultMemberListCreator && creator) { DARABONBA_PTR_SET_RVALUE(creator_, creator) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ListUserGroupMembersResponseBodyPageResultMemberList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListUserGroupMembersResponseBodyPageResultMemberList& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline ListUserGroupMembersResponseBodyPageResultMemberList& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const Models::ListUserGroupMembersResponseBodyPageResultMemberListUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, Models::ListUserGroupMembersResponseBodyPageResultMemberListUserInfo) };
    inline Models::ListUserGroupMembersResponseBodyPageResultMemberListUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, Models::ListUserGroupMembersResponseBodyPageResultMemberListUserInfo) };
    inline ListUserGroupMembersResponseBodyPageResultMemberList& setUserInfo(const Models::ListUserGroupMembersResponseBodyPageResultMemberListUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListUserGroupMembersResponseBodyPageResultMemberList& setUserInfo(Models::ListUserGroupMembersResponseBodyPageResultMemberListUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


    // userRole Field Functions 
    bool hasUserRole() const { return this->userRole_ != nullptr;};
    void deleteUserRole() { this->userRole_ = nullptr;};
    inline string userRole() const { DARABONBA_PTR_GET_DEFAULT(userRole_, "") };
    inline ListUserGroupMembersResponseBodyPageResultMemberList& setUserRole(string userRole) { DARABONBA_PTR_SET_VALUE(userRole_, userRole) };


  protected:
    std::shared_ptr<Models::ListUserGroupMembersResponseBodyPageResultMemberListCreator> creator_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> userGroupId_ = nullptr;
    std::shared_ptr<Models::ListUserGroupMembersResponseBodyPageResultMemberListUserInfo> userInfo_ = nullptr;
    std::shared_ptr<string> userRole_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
