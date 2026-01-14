// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYORGANIZATIONROLECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYORGANIZATIONROLECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryOrganizationRoleConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryOrganizationRoleConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryOrganizationRoleConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryOrganizationRoleConfigResponseBody() = default ;
    QueryOrganizationRoleConfigResponseBody(const QueryOrganizationRoleConfigResponseBody &) = default ;
    QueryOrganizationRoleConfigResponseBody(QueryOrganizationRoleConfigResponseBody &&) = default ;
    QueryOrganizationRoleConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryOrganizationRoleConfigResponseBody() = default ;
    QueryOrganizationRoleConfigResponseBody& operator=(const QueryOrganizationRoleConfigResponseBody &) = default ;
    QueryOrganizationRoleConfigResponseBody& operator=(QueryOrganizationRoleConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AuthConfigList, authConfigList_);
        DARABONBA_PTR_TO_JSON(IsSystemRole, isSystemRole_);
        DARABONBA_PTR_TO_JSON(RoleId, roleId_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthConfigList, authConfigList_);
        DARABONBA_PTR_FROM_JSON(IsSystemRole, isSystemRole_);
        DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
        DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AuthConfigList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthConfigList& obj) { 
          DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
        };
        friend void from_json(const Darabonba::Json& j, AuthConfigList& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
        };
        AuthConfigList() = default ;
        AuthConfigList(const AuthConfigList &) = default ;
        AuthConfigList(AuthConfigList &&) = default ;
        AuthConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthConfigList() = default ;
        AuthConfigList& operator=(const AuthConfigList &) = default ;
        AuthConfigList& operator=(AuthConfigList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authKey_ == nullptr; };
        // authKey Field Functions 
        bool hasAuthKey() const { return this->authKey_ != nullptr;};
        void deleteAuthKey() { this->authKey_ = nullptr;};
        inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
        inline AuthConfigList& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


      protected:
        // Permission type:
        // - quick_monitor: Metric Monitoring
        // - subscription: Subscription Management
        // - offline_download: Self-service Data Retrieval
        // - resource_package: Resource Package Management
        // - organization_ask: Organization Access Key/Secret (AK/SK)
        // - developer_openapi: OpenAPI
        // - data_service: Data Service
        // - admin_authorize3rd: Embedded Analysis
        // - component_manage: Custom Component
        // - template_open: Custom Template
        // - custom_driver: Custom Driver (supported only in standalone deployment)
        // - open_platform_custom_plugin: Custom Plugin (supported only in standalone deployment)
        // - enterprise_safety: Enterprise Security
        shared_ptr<string> authKey_ {};
      };

      virtual bool empty() const override { return this->authConfigList_ == nullptr
        && this->isSystemRole_ == nullptr && this->roleId_ == nullptr && this->roleName_ == nullptr; };
      // authConfigList Field Functions 
      bool hasAuthConfigList() const { return this->authConfigList_ != nullptr;};
      void deleteAuthConfigList() { this->authConfigList_ = nullptr;};
      inline const vector<Result::AuthConfigList> & getAuthConfigList() const { DARABONBA_PTR_GET_CONST(authConfigList_, vector<Result::AuthConfigList>) };
      inline vector<Result::AuthConfigList> getAuthConfigList() { DARABONBA_PTR_GET(authConfigList_, vector<Result::AuthConfigList>) };
      inline Result& setAuthConfigList(const vector<Result::AuthConfigList> & authConfigList) { DARABONBA_PTR_SET_VALUE(authConfigList_, authConfigList) };
      inline Result& setAuthConfigList(vector<Result::AuthConfigList> && authConfigList) { DARABONBA_PTR_SET_RVALUE(authConfigList_, authConfigList) };


      // isSystemRole Field Functions 
      bool hasIsSystemRole() const { return this->isSystemRole_ != nullptr;};
      void deleteIsSystemRole() { this->isSystemRole_ = nullptr;};
      inline bool getIsSystemRole() const { DARABONBA_PTR_GET_DEFAULT(isSystemRole_, false) };
      inline Result& setIsSystemRole(bool isSystemRole) { DARABONBA_PTR_SET_VALUE(isSystemRole_, isSystemRole) };


      // roleId Field Functions 
      bool hasRoleId() const { return this->roleId_ != nullptr;};
      void deleteRoleId() { this->roleId_ = nullptr;};
      inline int64_t getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, 0L) };
      inline Result& setRoleId(int64_t roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


      // roleName Field Functions 
      bool hasRoleName() const { return this->roleName_ != nullptr;};
      void deleteRoleName() { this->roleName_ = nullptr;};
      inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
      inline Result& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    protected:
      // List of role permission configurations.
      shared_ptr<vector<Result::AuthConfigList>> authConfigList_ {};
      // Whether it is a predefined role. Possible values:
      // 
      // - true: Yes
      // - false: No
      shared_ptr<bool> isSystemRole_ {};
      // Organization role ID, including predefined roles and custom roles:
      // 
      // - Organization Administrator (predefined role): 111111111
      // - Permission Administrator (predefined role): 111111112
      // - Regular User (predefined role): 111111113
      // - Custom Role: The corresponding role ID of the custom role
      shared_ptr<int64_t> roleId_ {};
      // Role name.
      shared_ptr<string> roleName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryOrganizationRoleConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryOrganizationRoleConfigResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryOrganizationRoleConfigResponseBody::Result) };
    inline QueryOrganizationRoleConfigResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryOrganizationRoleConfigResponseBody::Result) };
    inline QueryOrganizationRoleConfigResponseBody& setResult(const QueryOrganizationRoleConfigResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryOrganizationRoleConfigResponseBody& setResult(QueryOrganizationRoleConfigResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryOrganizationRoleConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Details of the organization role configuration.
    shared_ptr<QueryOrganizationRoleConfigResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Possible values:
    // - true: The request was successful 
    // - false: The request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
