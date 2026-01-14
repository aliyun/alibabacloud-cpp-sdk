// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUDITLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUDITLOGRESPONSEBODY_HPP_
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
  class QueryAuditLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuditLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuditLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAuditLogResponseBody() = default ;
    QueryAuditLogResponseBody(const QueryAuditLogResponseBody &) = default ;
    QueryAuditLogResponseBody(QueryAuditLogResponseBody &&) = default ;
    QueryAuditLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuditLogResponseBody() = default ;
    QueryAuditLogResponseBody& operator=(const QueryAuditLogResponseBody &) = default ;
    QueryAuditLogResponseBody& operator=(QueryAuditLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(OperatorAccountName, operatorAccountName_);
        DARABONBA_PTR_TO_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_TO_JSON(TargetId, targetId_);
        DARABONBA_PTR_TO_JSON(TargetName, targetName_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(OperatorAccountName, operatorAccountName_);
        DARABONBA_PTR_FROM_JSON(OperatorName, operatorName_);
        DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_FROM_JSON(TargetId, targetId_);
        DARABONBA_PTR_FROM_JSON(TargetName, targetName_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
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
      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->operatorAccountName_ == nullptr && this->operatorName_ == nullptr && this->operatorType_ == nullptr && this->targetId_ == nullptr && this->targetName_ == nullptr
        && this->targetType_ == nullptr && this->workspaceId_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Result& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // operatorAccountName Field Functions 
      bool hasOperatorAccountName() const { return this->operatorAccountName_ != nullptr;};
      void deleteOperatorAccountName() { this->operatorAccountName_ = nullptr;};
      inline string getOperatorAccountName() const { DARABONBA_PTR_GET_DEFAULT(operatorAccountName_, "") };
      inline Result& setOperatorAccountName(string operatorAccountName) { DARABONBA_PTR_SET_VALUE(operatorAccountName_, operatorAccountName) };


      // operatorName Field Functions 
      bool hasOperatorName() const { return this->operatorName_ != nullptr;};
      void deleteOperatorName() { this->operatorName_ = nullptr;};
      inline string getOperatorName() const { DARABONBA_PTR_GET_DEFAULT(operatorName_, "") };
      inline Result& setOperatorName(string operatorName) { DARABONBA_PTR_SET_VALUE(operatorName_, operatorName) };


      // operatorType Field Functions 
      bool hasOperatorType() const { return this->operatorType_ != nullptr;};
      void deleteOperatorType() { this->operatorType_ = nullptr;};
      inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
      inline Result& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


      // targetId Field Functions 
      bool hasTargetId() const { return this->targetId_ != nullptr;};
      void deleteTargetId() { this->targetId_ = nullptr;};
      inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
      inline Result& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


      // targetName Field Functions 
      bool hasTargetName() const { return this->targetName_ != nullptr;};
      void deleteTargetName() { this->targetName_ = nullptr;};
      inline string getTargetName() const { DARABONBA_PTR_GET_DEFAULT(targetName_, "") };
      inline Result& setTargetName(string targetName) { DARABONBA_PTR_SET_VALUE(targetName_, targetName) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline Result& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Result& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // Log time.
      shared_ptr<string> gmtCreate_ {};
      // Operator account.
      shared_ptr<string> operatorAccountName_ {};
      // Operator\\"s nickname.
      shared_ptr<string> operatorName_ {};
      // Operation type.
      shared_ptr<string> operatorType_ {};
      // Target ID.
      shared_ptr<string> targetId_ {};
      // Target name.
      shared_ptr<string> targetName_ {};
      // Target type.
      shared_ptr<string> targetType_ {};
      // Workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAuditLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryAuditLogResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryAuditLogResponseBody::Result>) };
    inline vector<QueryAuditLogResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryAuditLogResponseBody::Result>) };
    inline QueryAuditLogResponseBody& setResult(const vector<QueryAuditLogResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryAuditLogResponseBody& setResult(vector<QueryAuditLogResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAuditLogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // Array of logs.
    shared_ptr<vector<QueryAuditLogResponseBody::Result>> result_ {};
    // Indicates whether the request was successful. Possible values: 
    // - true: The request succeeded 
    // - false: The request failed
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
