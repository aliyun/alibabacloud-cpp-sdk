// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSRESPONSEBODY_HPP_
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
  class ListUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    ListUsersResponseBody() = default ;
    ListUsersResponseBody(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody(ListUsersResponseBody &&) = default ;
    ListUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersResponseBody() = default ;
    ListUsersResponseBody& operator=(const ListUsersResponseBody &) = default ;
    ListUsersResponseBody& operator=(ListUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserList& obj) { 
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, UserList& obj) { 
        DARABONBA_PTR_FROM_JSON(User, user_);
      };
      UserList() = default ;
      UserList(const UserList &) = default ;
      UserList(UserList &&) = default ;
      UserList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserList() = default ;
      UserList& operator=(const UserList &) = default ;
      UserList& operator=(UserList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class User : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const User& obj) { 
          DARABONBA_PTR_TO_JSON(CurExecuteCount, curExecuteCount_);
          DARABONBA_PTR_TO_JSON(CurResultCount, curResultCount_);
          DARABONBA_PTR_TO_JSON(DingRobot, dingRobot_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(LastLoginTime, lastLoginTime_);
          DARABONBA_PTR_TO_JSON(MaxExecuteCount, maxExecuteCount_);
          DARABONBA_PTR_TO_JSON(MaxResultCount, maxResultCount_);
          DARABONBA_PTR_TO_JSON(Mobile, mobile_);
          DARABONBA_PTR_TO_JSON(NickName, nickName_);
          DARABONBA_PTR_TO_JSON(NotificationMode, notificationMode_);
          DARABONBA_PTR_TO_JSON(ParentUid, parentUid_);
          DARABONBA_PTR_TO_JSON(RoleIdList, roleIdList_);
          DARABONBA_PTR_TO_JSON(RoleNameList, roleNameList_);
          DARABONBA_PTR_TO_JSON(SignatureMethod, signatureMethod_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Uid, uid_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(Webhook, webhook_);
        };
        friend void from_json(const Darabonba::Json& j, User& obj) { 
          DARABONBA_PTR_FROM_JSON(CurExecuteCount, curExecuteCount_);
          DARABONBA_PTR_FROM_JSON(CurResultCount, curResultCount_);
          DARABONBA_PTR_FROM_JSON(DingRobot, dingRobot_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(LastLoginTime, lastLoginTime_);
          DARABONBA_PTR_FROM_JSON(MaxExecuteCount, maxExecuteCount_);
          DARABONBA_PTR_FROM_JSON(MaxResultCount, maxResultCount_);
          DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
          DARABONBA_PTR_FROM_JSON(NickName, nickName_);
          DARABONBA_PTR_FROM_JSON(NotificationMode, notificationMode_);
          DARABONBA_PTR_FROM_JSON(ParentUid, parentUid_);
          DARABONBA_PTR_FROM_JSON(RoleIdList, roleIdList_);
          DARABONBA_PTR_FROM_JSON(RoleNameList, roleNameList_);
          DARABONBA_PTR_FROM_JSON(SignatureMethod, signatureMethod_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Uid, uid_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
        };
        User() = default ;
        User(const User &) = default ;
        User(User &&) = default ;
        User(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~User() = default ;
        User& operator=(const User &) = default ;
        User& operator=(User &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RoleNameList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoleNameList& obj) { 
            DARABONBA_PTR_TO_JSON(RoleNames, roleNames_);
          };
          friend void from_json(const Darabonba::Json& j, RoleNameList& obj) { 
            DARABONBA_PTR_FROM_JSON(RoleNames, roleNames_);
          };
          RoleNameList() = default ;
          RoleNameList(const RoleNameList &) = default ;
          RoleNameList(RoleNameList &&) = default ;
          RoleNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoleNameList() = default ;
          RoleNameList& operator=(const RoleNameList &) = default ;
          RoleNameList& operator=(RoleNameList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->roleNames_ == nullptr; };
          // roleNames Field Functions 
          bool hasRoleNames() const { return this->roleNames_ != nullptr;};
          void deleteRoleNames() { this->roleNames_ = nullptr;};
          inline const vector<string> & getRoleNames() const { DARABONBA_PTR_GET_CONST(roleNames_, vector<string>) };
          inline vector<string> getRoleNames() { DARABONBA_PTR_GET(roleNames_, vector<string>) };
          inline RoleNameList& setRoleNames(const vector<string> & roleNames) { DARABONBA_PTR_SET_VALUE(roleNames_, roleNames) };
          inline RoleNameList& setRoleNames(vector<string> && roleNames) { DARABONBA_PTR_SET_RVALUE(roleNames_, roleNames) };


        protected:
          shared_ptr<vector<string>> roleNames_ {};
        };

        class RoleIdList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoleIdList& obj) { 
            DARABONBA_PTR_TO_JSON(RoleIds, roleIds_);
          };
          friend void from_json(const Darabonba::Json& j, RoleIdList& obj) { 
            DARABONBA_PTR_FROM_JSON(RoleIds, roleIds_);
          };
          RoleIdList() = default ;
          RoleIdList(const RoleIdList &) = default ;
          RoleIdList(RoleIdList &&) = default ;
          RoleIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoleIdList() = default ;
          RoleIdList& operator=(const RoleIdList &) = default ;
          RoleIdList& operator=(RoleIdList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->roleIds_ == nullptr; };
          // roleIds Field Functions 
          bool hasRoleIds() const { return this->roleIds_ != nullptr;};
          void deleteRoleIds() { this->roleIds_ = nullptr;};
          inline const vector<int32_t> & getRoleIds() const { DARABONBA_PTR_GET_CONST(roleIds_, vector<int32_t>) };
          inline vector<int32_t> getRoleIds() { DARABONBA_PTR_GET(roleIds_, vector<int32_t>) };
          inline RoleIdList& setRoleIds(const vector<int32_t> & roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };
          inline RoleIdList& setRoleIds(vector<int32_t> && roleIds) { DARABONBA_PTR_SET_RVALUE(roleIds_, roleIds) };


        protected:
          shared_ptr<vector<int32_t>> roleIds_ {};
        };

        virtual bool empty() const override { return this->curExecuteCount_ == nullptr
        && this->curResultCount_ == nullptr && this->dingRobot_ == nullptr && this->email_ == nullptr && this->lastLoginTime_ == nullptr && this->maxExecuteCount_ == nullptr
        && this->maxResultCount_ == nullptr && this->mobile_ == nullptr && this->nickName_ == nullptr && this->notificationMode_ == nullptr && this->parentUid_ == nullptr
        && this->roleIdList_ == nullptr && this->roleNameList_ == nullptr && this->signatureMethod_ == nullptr && this->state_ == nullptr && this->uid_ == nullptr
        && this->userId_ == nullptr && this->webhook_ == nullptr; };
        // curExecuteCount Field Functions 
        bool hasCurExecuteCount() const { return this->curExecuteCount_ != nullptr;};
        void deleteCurExecuteCount() { this->curExecuteCount_ = nullptr;};
        inline int64_t getCurExecuteCount() const { DARABONBA_PTR_GET_DEFAULT(curExecuteCount_, 0L) };
        inline User& setCurExecuteCount(int64_t curExecuteCount) { DARABONBA_PTR_SET_VALUE(curExecuteCount_, curExecuteCount) };


        // curResultCount Field Functions 
        bool hasCurResultCount() const { return this->curResultCount_ != nullptr;};
        void deleteCurResultCount() { this->curResultCount_ = nullptr;};
        inline int64_t getCurResultCount() const { DARABONBA_PTR_GET_DEFAULT(curResultCount_, 0L) };
        inline User& setCurResultCount(int64_t curResultCount) { DARABONBA_PTR_SET_VALUE(curResultCount_, curResultCount) };


        // dingRobot Field Functions 
        bool hasDingRobot() const { return this->dingRobot_ != nullptr;};
        void deleteDingRobot() { this->dingRobot_ = nullptr;};
        inline string getDingRobot() const { DARABONBA_PTR_GET_DEFAULT(dingRobot_, "") };
        inline User& setDingRobot(string dingRobot) { DARABONBA_PTR_SET_VALUE(dingRobot_, dingRobot) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline User& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // lastLoginTime Field Functions 
        bool hasLastLoginTime() const { return this->lastLoginTime_ != nullptr;};
        void deleteLastLoginTime() { this->lastLoginTime_ = nullptr;};
        inline string getLastLoginTime() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTime_, "") };
        inline User& setLastLoginTime(string lastLoginTime) { DARABONBA_PTR_SET_VALUE(lastLoginTime_, lastLoginTime) };


        // maxExecuteCount Field Functions 
        bool hasMaxExecuteCount() const { return this->maxExecuteCount_ != nullptr;};
        void deleteMaxExecuteCount() { this->maxExecuteCount_ = nullptr;};
        inline int64_t getMaxExecuteCount() const { DARABONBA_PTR_GET_DEFAULT(maxExecuteCount_, 0L) };
        inline User& setMaxExecuteCount(int64_t maxExecuteCount) { DARABONBA_PTR_SET_VALUE(maxExecuteCount_, maxExecuteCount) };


        // maxResultCount Field Functions 
        bool hasMaxResultCount() const { return this->maxResultCount_ != nullptr;};
        void deleteMaxResultCount() { this->maxResultCount_ = nullptr;};
        inline int64_t getMaxResultCount() const { DARABONBA_PTR_GET_DEFAULT(maxResultCount_, 0L) };
        inline User& setMaxResultCount(int64_t maxResultCount) { DARABONBA_PTR_SET_VALUE(maxResultCount_, maxResultCount) };


        // mobile Field Functions 
        bool hasMobile() const { return this->mobile_ != nullptr;};
        void deleteMobile() { this->mobile_ = nullptr;};
        inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
        inline User& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


        // nickName Field Functions 
        bool hasNickName() const { return this->nickName_ != nullptr;};
        void deleteNickName() { this->nickName_ = nullptr;};
        inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
        inline User& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


        // notificationMode Field Functions 
        bool hasNotificationMode() const { return this->notificationMode_ != nullptr;};
        void deleteNotificationMode() { this->notificationMode_ = nullptr;};
        inline string getNotificationMode() const { DARABONBA_PTR_GET_DEFAULT(notificationMode_, "") };
        inline User& setNotificationMode(string notificationMode) { DARABONBA_PTR_SET_VALUE(notificationMode_, notificationMode) };


        // parentUid Field Functions 
        bool hasParentUid() const { return this->parentUid_ != nullptr;};
        void deleteParentUid() { this->parentUid_ = nullptr;};
        inline string getParentUid() const { DARABONBA_PTR_GET_DEFAULT(parentUid_, "") };
        inline User& setParentUid(string parentUid) { DARABONBA_PTR_SET_VALUE(parentUid_, parentUid) };


        // roleIdList Field Functions 
        bool hasRoleIdList() const { return this->roleIdList_ != nullptr;};
        void deleteRoleIdList() { this->roleIdList_ = nullptr;};
        inline const User::RoleIdList & getRoleIdList() const { DARABONBA_PTR_GET_CONST(roleIdList_, User::RoleIdList) };
        inline User::RoleIdList getRoleIdList() { DARABONBA_PTR_GET(roleIdList_, User::RoleIdList) };
        inline User& setRoleIdList(const User::RoleIdList & roleIdList) { DARABONBA_PTR_SET_VALUE(roleIdList_, roleIdList) };
        inline User& setRoleIdList(User::RoleIdList && roleIdList) { DARABONBA_PTR_SET_RVALUE(roleIdList_, roleIdList) };


        // roleNameList Field Functions 
        bool hasRoleNameList() const { return this->roleNameList_ != nullptr;};
        void deleteRoleNameList() { this->roleNameList_ = nullptr;};
        inline const User::RoleNameList & getRoleNameList() const { DARABONBA_PTR_GET_CONST(roleNameList_, User::RoleNameList) };
        inline User::RoleNameList getRoleNameList() { DARABONBA_PTR_GET(roleNameList_, User::RoleNameList) };
        inline User& setRoleNameList(const User::RoleNameList & roleNameList) { DARABONBA_PTR_SET_VALUE(roleNameList_, roleNameList) };
        inline User& setRoleNameList(User::RoleNameList && roleNameList) { DARABONBA_PTR_SET_RVALUE(roleNameList_, roleNameList) };


        // signatureMethod Field Functions 
        bool hasSignatureMethod() const { return this->signatureMethod_ != nullptr;};
        void deleteSignatureMethod() { this->signatureMethod_ = nullptr;};
        inline string getSignatureMethod() const { DARABONBA_PTR_GET_DEFAULT(signatureMethod_, "") };
        inline User& setSignatureMethod(string signatureMethod) { DARABONBA_PTR_SET_VALUE(signatureMethod_, signatureMethod) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline User& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // uid Field Functions 
        bool hasUid() const { return this->uid_ != nullptr;};
        void deleteUid() { this->uid_ = nullptr;};
        inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
        inline User& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline User& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // webhook Field Functions 
        bool hasWebhook() const { return this->webhook_ != nullptr;};
        void deleteWebhook() { this->webhook_ = nullptr;};
        inline string getWebhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
        inline User& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


      protected:
        // The number of queries that were performed on the current day.
        shared_ptr<int64_t> curExecuteCount_ {};
        // The number of rows that were queried on the current day.
        shared_ptr<int64_t> curResultCount_ {};
        // The DingTalk chatbot URL that is used to receive notifications.
        // 
        // > 
        // 
        // *   The system returns this parameter if you have set a DingTalk chatbot URL in the console. To set a DingTalk chatbot URL in the console, move the pointer over the profile picture in the upper-right corner and click the Edit icon next to **Notice**.
        // 
        // *   The system does not return this parameter if you have not set a DingTalk chatbot URL.
        shared_ptr<string> dingRobot_ {};
        // The email address that is used to receive notifications.
        // 
        // > 
        // 
        // *   The system returns this parameter if you have set an email address in the console. To set an email address in the console, move the pointer over the profile picture in the upper-right corner and click the Edit icon next to **Notice**.
        // 
        // *   The system does not return this parameter if you have not set an email address.
        shared_ptr<string> email_ {};
        // The time when the user last logged on to the console.
        shared_ptr<string> lastLoginTime_ {};
        // The maximum number of queries that can be performed on the current day.
        shared_ptr<int64_t> maxExecuteCount_ {};
        // The maximum number of rows that can be queried on the current day.
        shared_ptr<int64_t> maxResultCount_ {};
        // The mobile phone number of the user.
        // 
        // > 
        // 
        // *   The system returns this parameter if you have set a mobile phone number in the console. To set a mobile phone number in the console, move the pointer over the profile picture in the upper-right corner and click the Edit icon next to **Notice**.
        // 
        // *   The system does not return this parameter if you have not set a mobile phone number.
        shared_ptr<string> mobile_ {};
        // The nickname of the user.
        shared_ptr<string> nickName_ {};
        // The notification method. The system returns one or more values. Valid values:
        // 
        // *   **SMS**: text message
        // *   **EMAIL**: email.
        // *   **DINGDING**: DingTalk.
        // *   **DINGROBOT**: DingTalk chatbot.
        // *   **WEBHOOK**: webhook.
        shared_ptr<string> notificationMode_ {};
        // The ID of the Alibaba Cloud account of the user.
        shared_ptr<string> parentUid_ {};
        // The IDs of the roles.
        shared_ptr<User::RoleIdList> roleIdList_ {};
        // The names of roles.
        shared_ptr<User::RoleNameList> roleNameList_ {};
        // The signature method that is used to secure connections when a webhook URL is used. Valid values:
        // 
        // *   **NONE**: no signature.
        // *   **HMAC_SHA1**: HMAC_SHA1.
        shared_ptr<string> signatureMethod_ {};
        // The status of the user. Valid values:
        // 
        // *   **NORMAL**: The user is normal.
        // *   **DISABLE**: The user is disabled.
        // *   **DELETE**: The user is deleted.
        shared_ptr<string> state_ {};
        // The ID of the Alibaba Cloud account.
        shared_ptr<string> uid_ {};
        // The ID of the user.
        shared_ptr<string> userId_ {};
        // The webhook URL that is used to receive notifications.
        // 
        // > 
        // 
        // *   If you have set a webhook URL, DMS sends notifications to the specified URL.
        // 
        // *   The system does not return this parameter if you have not set a webhook URL.
        shared_ptr<string> webhook_ {};
      };

      virtual bool empty() const override { return this->user_ == nullptr; };
      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline const vector<UserList::User> & getUser() const { DARABONBA_PTR_GET_CONST(user_, vector<UserList::User>) };
      inline vector<UserList::User> getUser() { DARABONBA_PTR_GET(user_, vector<UserList::User>) };
      inline UserList& setUser(const vector<UserList::User> & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
      inline UserList& setUser(vector<UserList::User> && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


    protected:
      shared_ptr<vector<UserList::User>> user_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr && this->userList_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListUsersResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListUsersResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListUsersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUsersResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const ListUsersResponseBody::UserList & getUserList() const { DARABONBA_PTR_GET_CONST(userList_, ListUsersResponseBody::UserList) };
    inline ListUsersResponseBody::UserList getUserList() { DARABONBA_PTR_GET(userList_, ListUsersResponseBody::UserList) };
    inline ListUsersResponseBody& setUserList(const ListUsersResponseBody::UserList & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline ListUsersResponseBody& setUserList(ListUsersResponseBody::UserList && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
    // The details of users.
    shared_ptr<ListUsersResponseBody::UserList> userList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
