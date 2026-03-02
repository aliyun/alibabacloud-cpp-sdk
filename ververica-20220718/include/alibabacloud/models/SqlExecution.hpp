// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SQLEXECUTION_HPP_
#define ALIBABACLOUD_MODELS_SQLEXECUTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SqlStatement.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class SqlExecution : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SqlExecution& obj) { 
      DARABONBA_PTR_TO_JSON(batchMode, batchMode_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(sessionClusterName, sessionClusterName_);
      DARABONBA_PTR_TO_JSON(sqlExecutionId, sqlExecutionId_);
      DARABONBA_PTR_TO_JSON(sqlFileId, sqlFileId_);
      DARABONBA_PTR_TO_JSON(sqlScript, sqlScript_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(statements, statements_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, SqlExecution& obj) { 
      DARABONBA_PTR_FROM_JSON(batchMode, batchMode_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(sessionClusterName, sessionClusterName_);
      DARABONBA_PTR_FROM_JSON(sqlExecutionId, sqlExecutionId_);
      DARABONBA_PTR_FROM_JSON(sqlFileId, sqlFileId_);
      DARABONBA_PTR_FROM_JSON(sqlScript, sqlScript_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(statements, statements_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    SqlExecution() = default ;
    SqlExecution(const SqlExecution &) = default ;
    SqlExecution(SqlExecution &&) = default ;
    SqlExecution(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SqlExecution() = default ;
    SqlExecution& operator=(const SqlExecution &) = default ;
    SqlExecution& operator=(SqlExecution &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchMode_ == nullptr
        && this->description_ == nullptr && this->message_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->sessionClusterName_ == nullptr
        && this->sqlExecutionId_ == nullptr && this->sqlFileId_ == nullptr && this->sqlScript_ == nullptr && this->state_ == nullptr && this->statements_ == nullptr
        && this->workspace_ == nullptr; };
    // batchMode Field Functions 
    bool hasBatchMode() const { return this->batchMode_ != nullptr;};
    void deleteBatchMode() { this->batchMode_ = nullptr;};
    inline bool getBatchMode() const { DARABONBA_PTR_GET_DEFAULT(batchMode_, false) };
    inline SqlExecution& setBatchMode(bool batchMode) { DARABONBA_PTR_SET_VALUE(batchMode_, batchMode) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SqlExecution& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SqlExecution& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SqlExecution& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline SqlExecution& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // sessionClusterName Field Functions 
    bool hasSessionClusterName() const { return this->sessionClusterName_ != nullptr;};
    void deleteSessionClusterName() { this->sessionClusterName_ = nullptr;};
    inline string getSessionClusterName() const { DARABONBA_PTR_GET_DEFAULT(sessionClusterName_, "") };
    inline SqlExecution& setSessionClusterName(string sessionClusterName) { DARABONBA_PTR_SET_VALUE(sessionClusterName_, sessionClusterName) };


    // sqlExecutionId Field Functions 
    bool hasSqlExecutionId() const { return this->sqlExecutionId_ != nullptr;};
    void deleteSqlExecutionId() { this->sqlExecutionId_ = nullptr;};
    inline string getSqlExecutionId() const { DARABONBA_PTR_GET_DEFAULT(sqlExecutionId_, "") };
    inline SqlExecution& setSqlExecutionId(string sqlExecutionId) { DARABONBA_PTR_SET_VALUE(sqlExecutionId_, sqlExecutionId) };


    // sqlFileId Field Functions 
    bool hasSqlFileId() const { return this->sqlFileId_ != nullptr;};
    void deleteSqlFileId() { this->sqlFileId_ = nullptr;};
    inline string getSqlFileId() const { DARABONBA_PTR_GET_DEFAULT(sqlFileId_, "") };
    inline SqlExecution& setSqlFileId(string sqlFileId) { DARABONBA_PTR_SET_VALUE(sqlFileId_, sqlFileId) };


    // sqlScript Field Functions 
    bool hasSqlScript() const { return this->sqlScript_ != nullptr;};
    void deleteSqlScript() { this->sqlScript_ = nullptr;};
    inline string getSqlScript() const { DARABONBA_PTR_GET_DEFAULT(sqlScript_, "") };
    inline SqlExecution& setSqlScript(string sqlScript) { DARABONBA_PTR_SET_VALUE(sqlScript_, sqlScript) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SqlExecution& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // statements Field Functions 
    bool hasStatements() const { return this->statements_ != nullptr;};
    void deleteStatements() { this->statements_ = nullptr;};
    inline const vector<SqlStatement> & getStatements() const { DARABONBA_PTR_GET_CONST(statements_, vector<SqlStatement>) };
    inline vector<SqlStatement> getStatements() { DARABONBA_PTR_GET(statements_, vector<SqlStatement>) };
    inline SqlExecution& setStatements(const vector<SqlStatement> & statements) { DARABONBA_PTR_SET_VALUE(statements_, statements) };
    inline SqlExecution& setStatements(vector<SqlStatement> && statements) { DARABONBA_PTR_SET_RVALUE(statements_, statements) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string getWorkspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline SqlExecution& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    shared_ptr<bool> batchMode_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> namespace_ {};
    shared_ptr<string> sessionClusterName_ {};
    shared_ptr<string> sqlExecutionId_ {};
    shared_ptr<string> sqlFileId_ {};
    shared_ptr<string> sqlScript_ {};
    shared_ptr<string> state_ {};
    shared_ptr<vector<SqlStatement>> statements_ {};
    shared_ptr<string> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
