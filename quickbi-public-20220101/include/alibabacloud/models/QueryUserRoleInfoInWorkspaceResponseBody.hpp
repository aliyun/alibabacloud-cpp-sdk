// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERROLEINFOINWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERROLEINFOINWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserRoleInfoInWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserRoleInfoInWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserRoleInfoInWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUserRoleInfoInWorkspaceResponseBody() = default ;
    QueryUserRoleInfoInWorkspaceResponseBody(const QueryUserRoleInfoInWorkspaceResponseBody &) = default ;
    QueryUserRoleInfoInWorkspaceResponseBody(QueryUserRoleInfoInWorkspaceResponseBody &&) = default ;
    QueryUserRoleInfoInWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserRoleInfoInWorkspaceResponseBody() = default ;
    QueryUserRoleInfoInWorkspaceResponseBody& operator=(const QueryUserRoleInfoInWorkspaceResponseBody &) = default ;
    QueryUserRoleInfoInWorkspaceResponseBody& operator=(QueryUserRoleInfoInWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
        DARABONBA_PTR_TO_JSON(RoleId, roleId_);
        DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
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
      virtual bool empty() const override { return this->roleCode_ == nullptr
        && this->roleId_ == nullptr && this->roleName_ == nullptr; };
      // roleCode Field Functions 
      bool hasRoleCode() const { return this->roleCode_ != nullptr;};
      void deleteRoleCode() { this->roleCode_ = nullptr;};
      inline string getRoleCode() const { DARABONBA_PTR_GET_DEFAULT(roleCode_, "") };
      inline Result& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


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
      // Preset role code.
      shared_ptr<string> roleCode_ {};
      // Preset role ID. Possible values:
      // - 25: Space Administrator
      // - 26: Space Developer
      // - 27: Space Analyst
      // - 30: Space Viewer
      shared_ptr<int64_t> roleId_ {};
      // Preset role name.
      shared_ptr<string> roleName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserRoleInfoInWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryUserRoleInfoInWorkspaceResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryUserRoleInfoInWorkspaceResponseBody::Result) };
    inline QueryUserRoleInfoInWorkspaceResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryUserRoleInfoInWorkspaceResponseBody::Result) };
    inline QueryUserRoleInfoInWorkspaceResponseBody& setResult(const QueryUserRoleInfoInWorkspaceResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryUserRoleInfoInWorkspaceResponseBody& setResult(QueryUserRoleInfoInWorkspaceResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUserRoleInfoInWorkspaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Preset space role information of the user.
    shared_ptr<QueryUserRoleInfoInWorkspaceResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: The request succeeded.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
