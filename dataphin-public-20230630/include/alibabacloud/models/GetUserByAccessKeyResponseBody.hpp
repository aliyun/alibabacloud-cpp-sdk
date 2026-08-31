// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERBYACCESSKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERBYACCESSKEYRESPONSEBODY_HPP_
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
  class GetUserByAccessKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserByAccessKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserByAccessKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetUserByAccessKeyResponseBody() = default ;
    GetUserByAccessKeyResponseBody(const GetUserByAccessKeyResponseBody &) = default ;
    GetUserByAccessKeyResponseBody(GetUserByAccessKeyResponseBody &&) = default ;
    GetUserByAccessKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserByAccessKeyResponseBody() = default ;
    GetUserByAccessKeyResponseBody& operator=(const GetUserByAccessKeyResponseBody &) = default ;
    GetUserByAccessKeyResponseBody& operator=(GetUserByAccessKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Mail, mail_);
        DARABONBA_PTR_TO_JSON(NickName, nickName_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(SourceUserId, sourceUserId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TenantRoles, tenantRoles_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Mail, mail_);
        DARABONBA_PTR_FROM_JSON(NickName, nickName_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(SourceUserId, sourceUserId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TenantRoles, tenantRoles_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TenantRoles : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TenantRoles& obj) { 
          DARABONBA_PTR_TO_JSON(RoleKey, roleKey_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        };
        friend void from_json(const Darabonba::Json& j, TenantRoles& obj) { 
          DARABONBA_PTR_FROM_JSON(RoleKey, roleKey_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        };
        TenantRoles() = default ;
        TenantRoles(const TenantRoles &) = default ;
        TenantRoles(TenantRoles &&) = default ;
        TenantRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TenantRoles() = default ;
        TenantRoles& operator=(const TenantRoles &) = default ;
        TenantRoles& operator=(TenantRoles &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->roleKey_ == nullptr
        && this->roleName_ == nullptr; };
        // roleKey Field Functions 
        bool hasRoleKey() const { return this->roleKey_ != nullptr;};
        void deleteRoleKey() { this->roleKey_ = nullptr;};
        inline string getRoleKey() const { DARABONBA_PTR_GET_DEFAULT(roleKey_, "") };
        inline TenantRoles& setRoleKey(string roleKey) { DARABONBA_PTR_SET_VALUE(roleKey_, roleKey) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline TenantRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      protected:
        // The role identifier, such as SUPER_ADMIN or COMMON_USER.
        shared_ptr<string> roleKey_ {};
        // The role name.
        shared_ptr<string> roleName_ {};
      };

      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->id_ == nullptr && this->mail_ == nullptr && this->nickName_ == nullptr && this->sourceType_ == nullptr && this->sourceUserId_ == nullptr
        && this->status_ == nullptr && this->tenantRoles_ == nullptr && this->userName_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline UserInfo& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // mail Field Functions 
      bool hasMail() const { return this->mail_ != nullptr;};
      void deleteMail() { this->mail_ = nullptr;};
      inline string getMail() const { DARABONBA_PTR_GET_DEFAULT(mail_, "") };
      inline UserInfo& setMail(string mail) { DARABONBA_PTR_SET_VALUE(mail_, mail) };


      // nickName Field Functions 
      bool hasNickName() const { return this->nickName_ != nullptr;};
      void deleteNickName() { this->nickName_ = nullptr;};
      inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
      inline UserInfo& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline UserInfo& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // sourceUserId Field Functions 
      bool hasSourceUserId() const { return this->sourceUserId_ != nullptr;};
      void deleteSourceUserId() { this->sourceUserId_ = nullptr;};
      inline string getSourceUserId() const { DARABONBA_PTR_GET_DEFAULT(sourceUserId_, "") };
      inline UserInfo& setSourceUserId(string sourceUserId) { DARABONBA_PTR_SET_VALUE(sourceUserId_, sourceUserId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline UserInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tenantRoles Field Functions 
      bool hasTenantRoles() const { return this->tenantRoles_ != nullptr;};
      void deleteTenantRoles() { this->tenantRoles_ = nullptr;};
      inline const vector<UserInfo::TenantRoles> & getTenantRoles() const { DARABONBA_PTR_GET_CONST(tenantRoles_, vector<UserInfo::TenantRoles>) };
      inline vector<UserInfo::TenantRoles> getTenantRoles() { DARABONBA_PTR_GET(tenantRoles_, vector<UserInfo::TenantRoles>) };
      inline UserInfo& setTenantRoles(const vector<UserInfo::TenantRoles> & tenantRoles) { DARABONBA_PTR_SET_VALUE(tenantRoles_, tenantRoles) };
      inline UserInfo& setTenantRoles(vector<UserInfo::TenantRoles> && tenantRoles) { DARABONBA_PTR_SET_RVALUE(tenantRoles_, tenantRoles) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline UserInfo& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The display name of the user.
      shared_ptr<string> displayName_ {};
      // The Dataphin user ID.
      shared_ptr<string> id_ {};
      // The email address of the user.
      shared_ptr<string> mail_ {};
      // The nickname of the user.
      shared_ptr<string> nickName_ {};
      // The account source type, such as ALIYUN_OAUTH2, PUBLICCLOUD_OAUTH2, BUC, or APSARA.
      shared_ptr<string> sourceType_ {};
      // The source account ID of the user during SSO integration.
      shared_ptr<string> sourceUserId_ {};
      // The tenant member status. Valid values:
      // - NORMAL: Normal.
      // - DEACTIVATE: Deactivated.
      // - DELETE: Deleted.
      shared_ptr<string> status_ {};
      // The list of tenant-level roles assigned to the AK/SK owner in the current tenant.
      shared_ptr<vector<UserInfo::TenantRoles>> tenantRoles_ {};
      // The username of the account.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->userInfo_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserByAccessKeyResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetUserByAccessKeyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserByAccessKeyResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserByAccessKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserByAccessKeyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetUserByAccessKeyResponseBody::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetUserByAccessKeyResponseBody::UserInfo) };
    inline GetUserByAccessKeyResponseBody::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, GetUserByAccessKeyResponseBody::UserInfo) };
    inline GetUserByAccessKeyResponseBody& setUserInfo(const GetUserByAccessKeyResponseBody::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetUserByAccessKeyResponseBody& setUserInfo(GetUserByAccessKeyResponseBody::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // The error code. A value of OK indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The HTTP status code returned by the backend.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message returned for the request.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The user information.
    shared_ptr<GetUserByAccessKeyResponseBody::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
