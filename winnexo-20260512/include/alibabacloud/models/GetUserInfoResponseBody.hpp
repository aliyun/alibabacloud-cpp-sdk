// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERINFORESPONSEBODY_HPP_
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
  class GetUserInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(avatar, avatar_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(crmType, crmType_);
      DARABONBA_PTR_TO_JSON(isAdmin, isAdmin_);
      DARABONBA_PTR_TO_JSON(isSystemTenant, isSystemTenant_);
      DARABONBA_PTR_TO_JSON(languagePreference, languagePreference_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(offering, offering_);
      DARABONBA_PTR_TO_JSON(parsedOffering, parsedOffering_);
      DARABONBA_PTR_TO_JSON(profileRole, profileRole_);
      DARABONBA_PTR_TO_JSON(profileRoleInfo, profileRoleInfo_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(selfIntroduction, selfIntroduction_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(tenantList, tenantList_);
      DARABONBA_PTR_TO_JSON(tenantName, tenantName_);
      DARABONBA_PTR_TO_JSON(tenantType, tenantType_);
      DARABONBA_PTR_TO_JSON(userCode, userCode_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(avatar, avatar_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(crmType, crmType_);
      DARABONBA_PTR_FROM_JSON(isAdmin, isAdmin_);
      DARABONBA_PTR_FROM_JSON(isSystemTenant, isSystemTenant_);
      DARABONBA_PTR_FROM_JSON(languagePreference, languagePreference_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(offering, offering_);
      DARABONBA_PTR_FROM_JSON(parsedOffering, parsedOffering_);
      DARABONBA_PTR_FROM_JSON(profileRole, profileRole_);
      DARABONBA_PTR_FROM_JSON(profileRoleInfo, profileRoleInfo_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(selfIntroduction, selfIntroduction_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(tenantList, tenantList_);
      DARABONBA_PTR_FROM_JSON(tenantName, tenantName_);
      DARABONBA_PTR_FROM_JSON(tenantType, tenantType_);
      DARABONBA_PTR_FROM_JSON(userCode, userCode_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GetUserInfoResponseBody() = default ;
    GetUserInfoResponseBody(const GetUserInfoResponseBody &) = default ;
    GetUserInfoResponseBody(GetUserInfoResponseBody &&) = default ;
    GetUserInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserInfoResponseBody() = default ;
    GetUserInfoResponseBody& operator=(const GetUserInfoResponseBody &) = default ;
    GetUserInfoResponseBody& operator=(GetUserInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantList& obj) { 
        DARABONBA_PTR_TO_JSON(crmType, crmType_);
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(tenantName, tenantName_);
        DARABONBA_PTR_TO_JSON(tenantType, tenantType_);
      };
      friend void from_json(const Darabonba::Json& j, TenantList& obj) { 
        DARABONBA_PTR_FROM_JSON(crmType, crmType_);
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(tenantName, tenantName_);
        DARABONBA_PTR_FROM_JSON(tenantType, tenantType_);
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
      virtual bool empty() const override { return this->crmType_ == nullptr
        && this->tenantId_ == nullptr && this->tenantName_ == nullptr && this->tenantType_ == nullptr; };
      // crmType Field Functions 
      bool hasCrmType() const { return this->crmType_ != nullptr;};
      void deleteCrmType() { this->crmType_ = nullptr;};
      inline string getCrmType() const { DARABONBA_PTR_GET_DEFAULT(crmType_, "") };
      inline TenantList& setCrmType(string crmType) { DARABONBA_PTR_SET_VALUE(crmType_, crmType) };


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


      // tenantType Field Functions 
      bool hasTenantType() const { return this->tenantType_ != nullptr;};
      void deleteTenantType() { this->tenantType_ = nullptr;};
      inline string getTenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
      inline TenantList& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    protected:
      // CRM 类型
      shared_ptr<string> crmType_ {};
      // 租户ID
      shared_ptr<int64_t> tenantId_ {};
      // 租户名称
      shared_ptr<string> tenantName_ {};
      // 租户类型
      shared_ptr<string> tenantType_ {};
    };

    virtual bool empty() const override { return this->avatar_ == nullptr
        && this->code_ == nullptr && this->crmType_ == nullptr && this->isAdmin_ == nullptr && this->isSystemTenant_ == nullptr && this->languagePreference_ == nullptr
        && this->message_ == nullptr && this->name_ == nullptr && this->offering_ == nullptr && this->parsedOffering_ == nullptr && this->profileRole_ == nullptr
        && this->profileRoleInfo_ == nullptr && this->requestId_ == nullptr && this->selfIntroduction_ == nullptr && this->tenantId_ == nullptr && this->tenantList_ == nullptr
        && this->tenantName_ == nullptr && this->tenantType_ == nullptr && this->userCode_ == nullptr && this->userId_ == nullptr; };
    // avatar Field Functions 
    bool hasAvatar() const { return this->avatar_ != nullptr;};
    void deleteAvatar() { this->avatar_ = nullptr;};
    inline string getAvatar() const { DARABONBA_PTR_GET_DEFAULT(avatar_, "") };
    inline GetUserInfoResponseBody& setAvatar(string avatar) { DARABONBA_PTR_SET_VALUE(avatar_, avatar) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // crmType Field Functions 
    bool hasCrmType() const { return this->crmType_ != nullptr;};
    void deleteCrmType() { this->crmType_ = nullptr;};
    inline string getCrmType() const { DARABONBA_PTR_GET_DEFAULT(crmType_, "") };
    inline GetUserInfoResponseBody& setCrmType(string crmType) { DARABONBA_PTR_SET_VALUE(crmType_, crmType) };


    // isAdmin Field Functions 
    bool hasIsAdmin() const { return this->isAdmin_ != nullptr;};
    void deleteIsAdmin() { this->isAdmin_ = nullptr;};
    inline bool getIsAdmin() const { DARABONBA_PTR_GET_DEFAULT(isAdmin_, false) };
    inline GetUserInfoResponseBody& setIsAdmin(bool isAdmin) { DARABONBA_PTR_SET_VALUE(isAdmin_, isAdmin) };


    // isSystemTenant Field Functions 
    bool hasIsSystemTenant() const { return this->isSystemTenant_ != nullptr;};
    void deleteIsSystemTenant() { this->isSystemTenant_ = nullptr;};
    inline bool getIsSystemTenant() const { DARABONBA_PTR_GET_DEFAULT(isSystemTenant_, false) };
    inline GetUserInfoResponseBody& setIsSystemTenant(bool isSystemTenant) { DARABONBA_PTR_SET_VALUE(isSystemTenant_, isSystemTenant) };


    // languagePreference Field Functions 
    bool hasLanguagePreference() const { return this->languagePreference_ != nullptr;};
    void deleteLanguagePreference() { this->languagePreference_ = nullptr;};
    inline string getLanguagePreference() const { DARABONBA_PTR_GET_DEFAULT(languagePreference_, "") };
    inline GetUserInfoResponseBody& setLanguagePreference(string languagePreference) { DARABONBA_PTR_SET_VALUE(languagePreference_, languagePreference) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetUserInfoResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // offering Field Functions 
    bool hasOffering() const { return this->offering_ != nullptr;};
    void deleteOffering() { this->offering_ = nullptr;};
    inline string getOffering() const { DARABONBA_PTR_GET_DEFAULT(offering_, "") };
    inline GetUserInfoResponseBody& setOffering(string offering) { DARABONBA_PTR_SET_VALUE(offering_, offering) };


    // parsedOffering Field Functions 
    bool hasParsedOffering() const { return this->parsedOffering_ != nullptr;};
    void deleteParsedOffering() { this->parsedOffering_ = nullptr;};
    inline string getParsedOffering() const { DARABONBA_PTR_GET_DEFAULT(parsedOffering_, "") };
    inline GetUserInfoResponseBody& setParsedOffering(string parsedOffering) { DARABONBA_PTR_SET_VALUE(parsedOffering_, parsedOffering) };


    // profileRole Field Functions 
    bool hasProfileRole() const { return this->profileRole_ != nullptr;};
    void deleteProfileRole() { this->profileRole_ = nullptr;};
    inline string getProfileRole() const { DARABONBA_PTR_GET_DEFAULT(profileRole_, "") };
    inline GetUserInfoResponseBody& setProfileRole(string profileRole) { DARABONBA_PTR_SET_VALUE(profileRole_, profileRole) };


    // profileRoleInfo Field Functions 
    bool hasProfileRoleInfo() const { return this->profileRoleInfo_ != nullptr;};
    void deleteProfileRoleInfo() { this->profileRoleInfo_ = nullptr;};
    inline string getProfileRoleInfo() const { DARABONBA_PTR_GET_DEFAULT(profileRoleInfo_, "") };
    inline GetUserInfoResponseBody& setProfileRoleInfo(string profileRoleInfo) { DARABONBA_PTR_SET_VALUE(profileRoleInfo_, profileRoleInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // selfIntroduction Field Functions 
    bool hasSelfIntroduction() const { return this->selfIntroduction_ != nullptr;};
    void deleteSelfIntroduction() { this->selfIntroduction_ = nullptr;};
    inline string getSelfIntroduction() const { DARABONBA_PTR_GET_DEFAULT(selfIntroduction_, "") };
    inline GetUserInfoResponseBody& setSelfIntroduction(string selfIntroduction) { DARABONBA_PTR_SET_VALUE(selfIntroduction_, selfIntroduction) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetUserInfoResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantList Field Functions 
    bool hasTenantList() const { return this->tenantList_ != nullptr;};
    void deleteTenantList() { this->tenantList_ = nullptr;};
    inline const vector<GetUserInfoResponseBody::TenantList> & getTenantList() const { DARABONBA_PTR_GET_CONST(tenantList_, vector<GetUserInfoResponseBody::TenantList>) };
    inline vector<GetUserInfoResponseBody::TenantList> getTenantList() { DARABONBA_PTR_GET(tenantList_, vector<GetUserInfoResponseBody::TenantList>) };
    inline GetUserInfoResponseBody& setTenantList(const vector<GetUserInfoResponseBody::TenantList> & tenantList) { DARABONBA_PTR_SET_VALUE(tenantList_, tenantList) };
    inline GetUserInfoResponseBody& setTenantList(vector<GetUserInfoResponseBody::TenantList> && tenantList) { DARABONBA_PTR_SET_RVALUE(tenantList_, tenantList) };


    // tenantName Field Functions 
    bool hasTenantName() const { return this->tenantName_ != nullptr;};
    void deleteTenantName() { this->tenantName_ = nullptr;};
    inline string getTenantName() const { DARABONBA_PTR_GET_DEFAULT(tenantName_, "") };
    inline GetUserInfoResponseBody& setTenantName(string tenantName) { DARABONBA_PTR_SET_VALUE(tenantName_, tenantName) };


    // tenantType Field Functions 
    bool hasTenantType() const { return this->tenantType_ != nullptr;};
    void deleteTenantType() { this->tenantType_ = nullptr;};
    inline string getTenantType() const { DARABONBA_PTR_GET_DEFAULT(tenantType_, "") };
    inline GetUserInfoResponseBody& setTenantType(string tenantType) { DARABONBA_PTR_SET_VALUE(tenantType_, tenantType) };


    // userCode Field Functions 
    bool hasUserCode() const { return this->userCode_ != nullptr;};
    void deleteUserCode() { this->userCode_ = nullptr;};
    inline string getUserCode() const { DARABONBA_PTR_GET_DEFAULT(userCode_, "") };
    inline GetUserInfoResponseBody& setUserCode(string userCode) { DARABONBA_PTR_SET_VALUE(userCode_, userCode) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetUserInfoResponseBody& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // 用户头像URL
    shared_ptr<string> avatar_ {};
    // 业务状态码：成功为 200，失败为后端错误码（ERR.* / InvalidParameter.*）
    shared_ptr<string> code_ {};
    // CRM 类型
    shared_ptr<string> crmType_ {};
    // 是否为超级管理员
    shared_ptr<bool> isAdmin_ {};
    // 当前登录租户是否为系统租户（tenantId=10000）
    shared_ptr<bool> isSystemTenant_ {};
    // 用户语言偏好
    shared_ptr<string> languagePreference_ {};
    // 错误描述，成功时为空
    shared_ptr<string> message_ {};
    // 文件名
    shared_ptr<string> name_ {};
    // 用户服务描述
    shared_ptr<string> offering_ {};
    // 用户服务解析结果（JSON格式）
    shared_ptr<string> parsedOffering_ {};
    // 用户角色
    shared_ptr<string> profileRole_ {};
    // 用户角色描述（当profileRole为Others时使用）
    shared_ptr<string> profileRoleInfo_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
    // 用户自我介绍
    shared_ptr<string> selfIntroduction_ {};
    // 当前租户ID
    shared_ptr<int64_t> tenantId_ {};
    shared_ptr<vector<GetUserInfoResponseBody::TenantList>> tenantList_ {};
    // 当前租户名称
    shared_ptr<string> tenantName_ {};
    // 租户类型
    shared_ptr<string> tenantType_ {};
    // 用户代码
    shared_ptr<string> userCode_ {};
    // 用户ID
    shared_ptr<int64_t> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
