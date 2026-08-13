// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERINFORESPONSEBODY_HPP_
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
  class UpdateUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(user, user_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(user, user_);
    };
    UpdateUserInfoResponseBody() = default ;
    UpdateUserInfoResponseBody(const UpdateUserInfoResponseBody &) = default ;
    UpdateUserInfoResponseBody(UpdateUserInfoResponseBody &&) = default ;
    UpdateUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserInfoResponseBody() = default ;
    UpdateUserInfoResponseBody& operator=(const UpdateUserInfoResponseBody &) = default ;
    UpdateUserInfoResponseBody& operator=(UpdateUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
        DARABONBA_PTR_TO_JSON(avatar, avatar_);
        DARABONBA_PTR_TO_JSON(isAdmin, isAdmin_);
        DARABONBA_PTR_TO_JSON(isSystemTenant, isSystemTenant_);
        DARABONBA_PTR_TO_JSON(languagePreference, languagePreference_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(offering, offering_);
        DARABONBA_PTR_TO_JSON(parsedOffering, parsedOffering_);
        DARABONBA_PTR_TO_JSON(profileRole, profileRole_);
        DARABONBA_PTR_TO_JSON(profileRoleInfo, profileRoleInfo_);
        DARABONBA_PTR_TO_JSON(selfIntroduction, selfIntroduction_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(tenantList, tenantList_);
        DARABONBA_PTR_TO_JSON(tenantName, tenantName_);
        DARABONBA_PTR_TO_JSON(userCode, userCode_);
        DARABONBA_PTR_TO_JSON(userId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, User& obj) { 
        DARABONBA_PTR_FROM_JSON(avatar, avatar_);
        DARABONBA_PTR_FROM_JSON(isAdmin, isAdmin_);
        DARABONBA_PTR_FROM_JSON(isSystemTenant, isSystemTenant_);
        DARABONBA_PTR_FROM_JSON(languagePreference, languagePreference_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(offering, offering_);
        DARABONBA_PTR_FROM_JSON(parsedOffering, parsedOffering_);
        DARABONBA_PTR_FROM_JSON(profileRole, profileRole_);
        DARABONBA_PTR_FROM_JSON(profileRoleInfo, profileRoleInfo_);
        DARABONBA_PTR_FROM_JSON(selfIntroduction, selfIntroduction_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(tenantList, tenantList_);
        DARABONBA_PTR_FROM_JSON(tenantName, tenantName_);
        DARABONBA_PTR_FROM_JSON(userCode, userCode_);
        DARABONBA_PTR_FROM_JSON(userId, userId_);
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
      class TenantList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TenantList& obj) { 
          DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(tenantName, tenantName_);
        };
        friend void from_json(const Darabonba::Json& j, TenantList& obj) { 
          DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(tenantName, tenantName_);
        };
        TenantList() = default ;
        TenantList(const TenantList &) = default ;
        TenantList(TenantList &&) = default ;
        TenantList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TenantList() = default ;
        TenantList& operator=(const TenantList &) = default ;
        TenantList& operator=(TenantList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tenantId_ == nullptr
        && this->tenantName_ == nullptr; };
        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
        inline TenantList& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // tenantName Field Functions 
        bool hasTenantName() const { return this->tenantName_ != nullptr;};
        void deleteTenantName() { this->tenantName_ = nullptr;};
        inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
        inline TenantList& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


      protected:
        // 租户ID
        shared_ptr<int64_t> tenantId_ {};
        // 租户名称
        shared_ptr<string> tenantName_ {};
      };

      virtual bool empty() const override { return this->avatar_ == nullptr
        && this->isAdmin_ == nullptr && this->isSystemTenant_ == nullptr && this->languagePreference_ == nullptr && this->name_ == nullptr && this->offering_ == nullptr
        && this->parsedOffering_ == nullptr && this->profileRole_ == nullptr && this->profileRoleInfo_ == nullptr && this->selfIntroduction_ == nullptr && this->tenantId_ == nullptr
        && this->tenantList_ == nullptr && this->tenantName_ == nullptr && this->userCode_ == nullptr && this->userId_ == nullptr; };
      // avatar Field Functions 
      bool hasAvatar() const { return this->avatar_ != nullptr;};
      void deleteAvatar() { this->avatar_ = nullptr;};
      inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
      inline User& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


      // isAdmin Field Functions 
      bool hasIsAdmin() const { return this->isAdmin_ != nullptr;};
      void deleteIsAdmin() { this->isAdmin_ = nullptr;};
      inline bool getIsAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAdmin_, false) };
      inline User& setIsAdmin(bool isAdmin) { DARABONBA_PTR_SET_VALUE(isAdmin_, isAdmin) };


      // isSystemTenant Field Functions 
      bool hasIsSystemTenant() const { return this->isSystemTenant_ != nullptr;};
      void deleteIsSystemTenant() { this->isSystemTenant_ = nullptr;};
      inline bool getIsSystemTenant() const { DARABONBA_PTR_GET_DEFAULT(isSystemTenant_, false) };
      inline User& setIsSystemTenant(bool isSystemTenant) { DARABONBA_PTR_SET_VALUE(isSystemTenant_, isSystemTenant) };


      // languagePreference Field Functions 
      bool hasLanguagePreference() const { return this->languagePreference_ != nullptr;};
      void deleteLanguagePreference() { this->languagePreference_ = nullptr;};
      inline string getLanguagePreference() const { DARABONBA_PTR_GET_DEFAULT(languagePreference_, "") };
      inline User& setLanguagePreference(string languagePreference) { DARABONBA_PTR_SET_VALUE(languagePreference_, languagePreference) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline User& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // offering Field Functions 
      bool hasOffering() const { return this->offering_ != nullptr;};
      void deleteOffering() { this->offering_ = nullptr;};
      inline string getOffering() const { DARABONBA_PTR_GET_DEFAULT(offering_, "") };
      inline User& setOffering(string offering) { DARABONBA_PTR_SET_VALUE(offering_, offering) };


      // parsedOffering Field Functions 
      bool hasParsedOffering() const { return this->parsedOffering_ != nullptr;};
      void deleteParsedOffering() { this->parsedOffering_ = nullptr;};
      inline string getParsedOffering() const { DARABONBA_PTR_GET_DEFAULT(parsedOffering_, "") };
      inline User& setParsedOffering(string parsedOffering) { DARABONBA_PTR_SET_VALUE(parsedOffering_, parsedOffering) };


      // profileRole Field Functions 
      bool hasProfileRole() const { return this->profileRole_ != nullptr;};
      void deleteProfileRole() { this->profileRole_ = nullptr;};
      inline string getProfileRole() const { DARABONBA_PTR_GET_DEFAULT(profileRole_, "") };
      inline User& setProfileRole(string profileRole) { DARABONBA_PTR_SET_VALUE(profileRole_, profileRole) };


      // profileRoleInfo Field Functions 
      bool hasProfileRoleInfo() const { return this->profileRoleInfo_ != nullptr;};
      void deleteProfileRoleInfo() { this->profileRoleInfo_ = nullptr;};
      inline string getProfileRoleInfo() const { DARABONBA_PTR_GET_DEFAULT(profileRoleInfo_, "") };
      inline User& setProfileRoleInfo(string profileRoleInfo) { DARABONBA_PTR_SET_VALUE(profileRoleInfo_, profileRoleInfo) };


      // selfIntroduction Field Functions 
      bool hasSelfIntroduction() const { return this->selfIntroduction_ != nullptr;};
      void deleteSelfIntroduction() { this->selfIntroduction_ = nullptr;};
      inline string getSelfIntroduction() const { DARABONBA_PTR_GET_DEFAULT(selfIntroduction_, "") };
      inline User& setSelfIntroduction(string selfIntroduction) { DARABONBA_PTR_SET_VALUE(selfIntroduction_, selfIntroduction) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
      inline User& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // tenantList Field Functions 
      bool hasTenantList() const { return this->tenantList_ != nullptr;};
      void deleteTenantList() { this->tenantList_ = nullptr;};
      inline const vector<User::TenantList> & getTenantList() const { DARABONBA_PTR_GET_CONST(tenantList_, vector<User::TenantList>) };
      inline vector<User::TenantList> getTenantList() { DARABONBA_PTR_GET(tenantList_, vector<User::TenantList>) };
      inline User& setTenantList(const vector<User::TenantList> & tenantList) { DARABONBA_PTR_SET_VALUE(tenantList_, tenantList) };
      inline User& setTenantList(vector<User::TenantList> && tenantList) { DARABONBA_PTR_SET_RVALUE(tenantList_, tenantList) };


      // tenantName Field Functions 
      bool hasTenantName() const { return this->tenantName_ != nullptr;};
      void deleteTenantName() { this->tenantName_ = nullptr;};
      inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
      inline User& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


      // userCode Field Functions 
      bool hasUserCode() const { return this->userCode_ != nullptr;};
      void deleteUserCode() { this->userCode_ = nullptr;};
      inline string getUserCode() const { DARABONBA_PTR_GET_DEFAULT(userCode_, "") };
      inline User& setUserCode(string userCode) { DARABONBA_PTR_SET_VALUE(userCode_, userCode) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
      inline User& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // 用户头像URL
      shared_ptr<string> avatar_ {};
      // 是否为超级管理员
      shared_ptr<bool> isAdmin_ {};
      // 当前登录租户是否为系统租户
      shared_ptr<bool> isSystemTenant_ {};
      // 用户语言偏好
      shared_ptr<string> languagePreference_ {};
      // 文件名
      shared_ptr<string> name_ {};
      // 用户服务描述
      shared_ptr<string> offering_ {};
      // 用户服务解析结果（JSON格式）
      shared_ptr<string> parsedOffering_ {};
      // 用户角色
      shared_ptr<string> profileRole_ {};
      // 用户角色描述
      shared_ptr<string> profileRoleInfo_ {};
      // 用户自我介绍
      shared_ptr<string> selfIntroduction_ {};
      // 当前租户ID
      shared_ptr<int64_t> tenantId_ {};
      shared_ptr<vector<User::TenantList>> tenantList_ {};
      // 当前租户名称
      shared_ptr<string> tenantName_ {};
      // 用户代码
      shared_ptr<string> userCode_ {};
      // 用户ID
      shared_ptr<int64_t> userId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->user_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateUserInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateUserInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const UpdateUserInfoResponseBody::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, UpdateUserInfoResponseBody::User) };
    inline UpdateUserInfoResponseBody::User getUser() { DARABONBA_PTR_GET(user_, UpdateUserInfoResponseBody::User) };
    inline UpdateUserInfoResponseBody& setUser(const UpdateUserInfoResponseBody::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline UpdateUserInfoResponseBody& setUser(UpdateUserInfoResponseBody::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    shared_ptr<UpdateUserInfoResponseBody::User> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
