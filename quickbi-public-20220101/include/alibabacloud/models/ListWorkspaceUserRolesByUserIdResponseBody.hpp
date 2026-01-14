// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEUSERROLESBYUSERIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEUSERROLESBYUSERIDRESPONSEBODY_HPP_
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
  class ListWorkspaceUserRolesByUserIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceUserRolesByUserIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceUserRolesByUserIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListWorkspaceUserRolesByUserIdResponseBody() = default ;
    ListWorkspaceUserRolesByUserIdResponseBody(const ListWorkspaceUserRolesByUserIdResponseBody &) = default ;
    ListWorkspaceUserRolesByUserIdResponseBody(ListWorkspaceUserRolesByUserIdResponseBody &&) = default ;
    ListWorkspaceUserRolesByUserIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceUserRolesByUserIdResponseBody() = default ;
    ListWorkspaceUserRolesByUserIdResponseBody& operator=(const ListWorkspaceUserRolesByUserIdResponseBody &) = default ;
    ListWorkspaceUserRolesByUserIdResponseBody& operator=(ListWorkspaceUserRolesByUserIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(RoleModel, roleModel_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(RoleModel, roleModel_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
        DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
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
      class RoleModel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoleModel& obj) { 
          DARABONBA_PTR_TO_JSON(RoleCode, roleCode_);
          DARABONBA_PTR_TO_JSON(RoleId, roleId_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        };
        friend void from_json(const Darabonba::Json& j, RoleModel& obj) { 
          DARABONBA_PTR_FROM_JSON(RoleCode, roleCode_);
          DARABONBA_PTR_FROM_JSON(RoleId, roleId_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        };
        RoleModel() = default ;
        RoleModel(const RoleModel &) = default ;
        RoleModel(RoleModel &&) = default ;
        RoleModel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoleModel() = default ;
        RoleModel& operator=(const RoleModel &) = default ;
        RoleModel& operator=(RoleModel &&) = default ;
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
        inline RoleModel& setRoleCode(string roleCode) { DARABONBA_PTR_SET_VALUE(roleCode_, roleCode) };


        // roleId Field Functions 
        bool hasRoleId() const { return this->roleId_ != nullptr;};
        void deleteRoleId() { this->roleId_ = nullptr;};
        inline string getRoleId() const { DARABONBA_PTR_GET_DEFAULT(roleId_, "") };
        inline RoleModel& setRoleId(string roleId) { DARABONBA_PTR_SET_VALUE(roleId_, roleId) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline RoleModel& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      protected:
        shared_ptr<string> roleCode_ {};
        shared_ptr<string> roleId_ {};
        shared_ptr<string> roleName_ {};
      };

      virtual bool empty() const override { return this->roleModel_ == nullptr
        && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
      // roleModel Field Functions 
      bool hasRoleModel() const { return this->roleModel_ != nullptr;};
      void deleteRoleModel() { this->roleModel_ = nullptr;};
      inline const Result::RoleModel & getRoleModel() const { DARABONBA_PTR_GET_CONST(roleModel_, Result::RoleModel) };
      inline Result::RoleModel getRoleModel() { DARABONBA_PTR_GET(roleModel_, Result::RoleModel) };
      inline Result& setRoleModel(const Result::RoleModel & roleModel) { DARABONBA_PTR_SET_VALUE(roleModel_, roleModel) };
      inline Result& setRoleModel(Result::RoleModel && roleModel) { DARABONBA_PTR_SET_RVALUE(roleModel_, roleModel) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Result& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    protected:
      shared_ptr<Result::RoleModel> roleModel_ {};
      shared_ptr<string> workspaceId_ {};
      shared_ptr<string> workspaceName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspaceUserRolesByUserIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListWorkspaceUserRolesByUserIdResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListWorkspaceUserRolesByUserIdResponseBody::Result>) };
    inline vector<ListWorkspaceUserRolesByUserIdResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListWorkspaceUserRolesByUserIdResponseBody::Result>) };
    inline ListWorkspaceUserRolesByUserIdResponseBody& setResult(const vector<ListWorkspaceUserRolesByUserIdResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListWorkspaceUserRolesByUserIdResponseBody& setResult(vector<ListWorkspaceUserRolesByUserIdResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListWorkspaceUserRolesByUserIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> requestId_ {};
    // This parameter is required.
    shared_ptr<vector<ListWorkspaceUserRolesByUserIdResponseBody::Result>> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
