// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PARSEBATCHTASKDEPENDENCYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ParseBatchTaskDependencyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ParseBatchTaskDependencyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(ParseCommand, parseCommand_);
    };
    friend void from_json(const Darabonba::Json& j, ParseBatchTaskDependencyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(ParseCommand, parseCommand_);
    };
    ParseBatchTaskDependencyRequest() = default ;
    ParseBatchTaskDependencyRequest(const ParseBatchTaskDependencyRequest &) = default ;
    ParseBatchTaskDependencyRequest(ParseBatchTaskDependencyRequest &&) = default ;
    ParseBatchTaskDependencyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ParseBatchTaskDependencyRequest() = default ;
    ParseBatchTaskDependencyRequest& operator=(const ParseBatchTaskDependencyRequest &) = default ;
    ParseBatchTaskDependencyRequest& operator=(ParseBatchTaskDependencyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParseCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParseCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_TO_JSON(IncludeAllInputTables, includeAllInputTables_);
        DARABONBA_PTR_TO_JSON(NeedQueryLineages, needQueryLineages_);
        DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, ParseCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_FROM_JSON(IncludeAllInputTables, includeAllInputTables_);
        DARABONBA_PTR_FROM_JSON(NeedQueryLineages, needQueryLineages_);
        DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      ParseCommand() = default ;
      ParseCommand(const ParseCommand &) = default ;
      ParseCommand(ParseCommand &&) = default ;
      ParseCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParseCommand() = default ;
      ParseCommand& operator=(const ParseCommand &) = default ;
      ParseCommand& operator=(ParseCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->dataSourceCatalog_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceSchema_ == nullptr && this->includeAllInputTables_ == nullptr && this->needQueryLineages_ == nullptr
        && this->operatorType_ == nullptr && this->projectId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ParseCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // dataSourceCatalog Field Functions 
      bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
      void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
      inline string getDataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
      inline ParseCommand& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
      inline ParseCommand& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceSchema Field Functions 
      bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
      void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
      inline string getDataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
      inline ParseCommand& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


      // includeAllInputTables Field Functions 
      bool hasIncludeAllInputTables() const { return this->includeAllInputTables_ != nullptr;};
      void deleteIncludeAllInputTables() { this->includeAllInputTables_ = nullptr;};
      inline bool getIncludeAllInputTables() const { DARABONBA_PTR_GET_DEFAULT(includeAllInputTables_, false) };
      inline ParseCommand& setIncludeAllInputTables(bool includeAllInputTables) { DARABONBA_PTR_SET_VALUE(includeAllInputTables_, includeAllInputTables) };


      // needQueryLineages Field Functions 
      bool hasNeedQueryLineages() const { return this->needQueryLineages_ != nullptr;};
      void deleteNeedQueryLineages() { this->needQueryLineages_ = nullptr;};
      inline bool getNeedQueryLineages() const { DARABONBA_PTR_GET_DEFAULT(needQueryLineages_, false) };
      inline ParseCommand& setNeedQueryLineages(bool needQueryLineages) { DARABONBA_PTR_SET_VALUE(needQueryLineages_, needQueryLineages) };


      // operatorType Field Functions 
      bool hasOperatorType() const { return this->operatorType_ != nullptr;};
      void deleteOperatorType() { this->operatorType_ = nullptr;};
      inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
      inline ParseCommand& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ParseCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<string> code_ {};
      shared_ptr<string> dataSourceCatalog_ {};
      shared_ptr<int64_t> dataSourceId_ {};
      shared_ptr<string> dataSourceSchema_ {};
      shared_ptr<bool> includeAllInputTables_ {};
      shared_ptr<bool> needQueryLineages_ {};
      // This parameter is required.
      shared_ptr<string> operatorType_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->parseCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ParseBatchTaskDependencyRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // parseCommand Field Functions 
    bool hasParseCommand() const { return this->parseCommand_ != nullptr;};
    void deleteParseCommand() { this->parseCommand_ = nullptr;};
    inline const ParseBatchTaskDependencyRequest::ParseCommand & getParseCommand() const { DARABONBA_PTR_GET_CONST(parseCommand_, ParseBatchTaskDependencyRequest::ParseCommand) };
    inline ParseBatchTaskDependencyRequest::ParseCommand getParseCommand() { DARABONBA_PTR_GET(parseCommand_, ParseBatchTaskDependencyRequest::ParseCommand) };
    inline ParseBatchTaskDependencyRequest& setParseCommand(const ParseBatchTaskDependencyRequest::ParseCommand & parseCommand) { DARABONBA_PTR_SET_VALUE(parseCommand_, parseCommand) };
    inline ParseBatchTaskDependencyRequest& setParseCommand(ParseBatchTaskDependencyRequest::ParseCommand && parseCommand) { DARABONBA_PTR_SET_RVALUE(parseCommand_, parseCommand) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<ParseBatchTaskDependencyRequest::ParseCommand> parseCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
