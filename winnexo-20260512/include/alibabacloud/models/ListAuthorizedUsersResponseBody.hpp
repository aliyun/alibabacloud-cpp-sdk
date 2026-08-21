// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAuthorizedUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(authMode, authMode_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(authMode, authMode_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListAuthorizedUsersResponseBody() = default ;
    ListAuthorizedUsersResponseBody(const ListAuthorizedUsersResponseBody &) = default ;
    ListAuthorizedUsersResponseBody(ListAuthorizedUsersResponseBody &&) = default ;
    ListAuthorizedUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersResponseBody() = default ;
    ListAuthorizedUsersResponseBody& operator=(const ListAuthorizedUsersResponseBody &) = default ;
    ListAuthorizedUsersResponseBody& operator=(ListAuthorizedUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(expireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(grantedBy, grantedBy_);
        DARABONBA_PTR_TO_JSON(granteeId, granteeId_);
        DARABONBA_PTR_TO_JSON(granteeType, granteeType_);
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(memberCount, memberCount_);
        DARABONBA_PTR_TO_JSON(permissions, permissions_);
        DARABONBA_PTR_TO_JSON(userGroupId, userGroupId_);
        DARABONBA_PTR_TO_JSON(userGroupName, userGroupName_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
        DARABONBA_PTR_TO_JSON(userName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(expireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(grantedBy, grantedBy_);
        DARABONBA_PTR_FROM_JSON(granteeId, granteeId_);
        DARABONBA_PTR_FROM_JSON(granteeType, granteeType_);
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(memberCount, memberCount_);
        DARABONBA_PTR_FROM_JSON(permissions, permissions_);
        DARABONBA_PTR_FROM_JSON(userGroupId, userGroupId_);
        DARABONBA_PTR_FROM_JSON(userGroupName, userGroupName_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
        DARABONBA_PTR_FROM_JSON(userName, userName_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expireDate_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->grantedBy_ == nullptr && this->granteeId_ == nullptr && this->granteeType_ == nullptr
        && this->id_ == nullptr && this->memberCount_ == nullptr && this->permissions_ == nullptr && this->userGroupId_ == nullptr && this->userGroupName_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline int64_t getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
      inline Items& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Items& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Items& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // grantedBy Field Functions 
      bool hasGrantedBy() const { return this->grantedBy_ != nullptr;};
      void deleteGrantedBy() { this->grantedBy_ = nullptr;};
      inline int64_t getGrantedBy() const { DARABONBA_PTR_GET_DEFAULT(grantedBy_, 0L) };
      inline Items& setGrantedBy(int64_t grantedBy) { DARABONBA_PTR_SET_VALUE(grantedBy_, grantedBy) };


      // granteeId Field Functions 
      bool hasGranteeId() const { return this->granteeId_ != nullptr;};
      void deleteGranteeId() { this->granteeId_ = nullptr;};
      inline string getGranteeId() const { DARABONBA_PTR_GET_DEFAULT(granteeId_, "") };
      inline Items& setGranteeId(string granteeId) { DARABONBA_PTR_SET_VALUE(granteeId_, granteeId) };


      // granteeType Field Functions 
      bool hasGranteeType() const { return this->granteeType_ != nullptr;};
      void deleteGranteeType() { this->granteeType_ = nullptr;};
      inline string getGranteeType() const { DARABONBA_PTR_GET_DEFAULT(granteeType_, "") };
      inline Items& setGranteeType(string granteeType) { DARABONBA_PTR_SET_VALUE(granteeType_, granteeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Items& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // memberCount Field Functions 
      bool hasMemberCount() const { return this->memberCount_ != nullptr;};
      void deleteMemberCount() { this->memberCount_ = nullptr;};
      inline int64_t getMemberCount() const { DARABONBA_PTR_GET_DEFAULT(memberCount_, 0L) };
      inline Items& setMemberCount(int64_t memberCount) { DARABONBA_PTR_SET_VALUE(memberCount_, memberCount) };


      // permissions Field Functions 
      bool hasPermissions() const { return this->permissions_ != nullptr;};
      void deletePermissions() { this->permissions_ = nullptr;};
      inline const vector<string> & getPermissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<string>) };
      inline vector<string> getPermissions() { DARABONBA_PTR_GET(permissions_, vector<string>) };
      inline Items& setPermissions(const vector<string> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
      inline Items& setPermissions(vector<string> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline Items& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


      // userGroupName Field Functions 
      bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
      void deleteUserGroupName() { this->userGroupName_ = nullptr;};
      inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
      inline Items& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline Items& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Items& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The authorization expiration timestamp in milliseconds. If not specified, the authorization never expires.
      shared_ptr<int64_t> expireDate_ {};
      // The creation time.
      shared_ptr<string> gmtCreate_ {};
      // The last update time.
      shared_ptr<string> gmtModified_ {};
      // The user ID of the person who granted the authorization.
      shared_ptr<int64_t> grantedBy_ {};
      // The ID of the authorized object.
      shared_ptr<string> granteeId_ {};
      // The authorization object type. Valid values: USER, USER_GROUP.
      shared_ptr<string> granteeType_ {};
      // The Operation logs ID.
      shared_ptr<int64_t> id_ {};
      // The number of members.
      shared_ptr<int64_t> memberCount_ {};
      // The permission member type. Valid values:
      // 
      // - **ORG**: Enterprise.
      // 
      // - **DEPT**: Department.
      // 
      // - **TAG**: Custom tag.
      // 
      // - **CONVERSATION**: Conversation.
      // 
      // - **USER**: User.
      shared_ptr<vector<string>> permissions_ {};
      // The user group ID. This parameter has a value only when granteeType is set to USER_GROUP.
      shared_ptr<string> userGroupId_ {};
      // The user group name.
      shared_ptr<string> userGroupName_ {};
      // The user ID. This parameter has a value only when granteeType is set to USER.
      shared_ptr<int64_t> userId_ {};
      // The username.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->authMode_ == nullptr
        && this->code_ == nullptr && this->items_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // authMode Field Functions 
    bool hasAuthMode() const { return this->authMode_ != nullptr;};
    void deleteAuthMode() { this->authMode_ = nullptr;};
    inline string getAuthMode() const { DARABONBA_PTR_GET_DEFAULT(authMode_, "") };
    inline ListAuthorizedUsersResponseBody& setAuthMode(string authMode) { DARABONBA_PTR_SET_VALUE(authMode_, authMode) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAuthorizedUsersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<ListAuthorizedUsersResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ListAuthorizedUsersResponseBody::Items>) };
    inline vector<ListAuthorizedUsersResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ListAuthorizedUsersResponseBody::Items>) };
    inline ListAuthorizedUsersResponseBody& setItems(const vector<ListAuthorizedUsersResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ListAuthorizedUsersResponseBody& setItems(vector<ListAuthorizedUsersResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAuthorizedUsersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListAuthorizedUsersResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The authentication mode.
    shared_ptr<string> authMode_ {};
    // The status code.
    shared_ptr<string> code_ {};
    // The details.
    shared_ptr<vector<ListAuthorizedUsersResponseBody::Items>> items_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
