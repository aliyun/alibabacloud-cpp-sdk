// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCTASKREQUEST_HPP_
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
  class ExecuteAdHocTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdHocTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecuteCommand, executeCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdHocTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecuteCommand, executeCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ExecuteAdHocTaskRequest() = default ;
    ExecuteAdHocTaskRequest(const ExecuteAdHocTaskRequest &) = default ;
    ExecuteAdHocTaskRequest(ExecuteAdHocTaskRequest &&) = default ;
    ExecuteAdHocTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdHocTaskRequest() = default ;
    ExecuteAdHocTaskRequest& operator=(const ExecuteAdHocTaskRequest &) = default ;
    ExecuteAdHocTaskRequest& operator=(ExecuteAdHocTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExecuteCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExecuteCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_TO_JSON(ParamList, paramList_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, ExecuteCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_FROM_JSON(ParamList, paramList_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      ExecuteCommand() = default ;
      ExecuteCommand(const ExecuteCommand &) = default ;
      ExecuteCommand(ExecuteCommand &&) = default ;
      ExecuteCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExecuteCommand() = default ;
      ExecuteCommand& operator=(const ExecuteCommand &) = default ;
      ExecuteCommand& operator=(ExecuteCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ParamList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ParamList& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, ParamList& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        ParamList() = default ;
        ParamList(const ParamList &) = default ;
        ParamList(ParamList &&) = default ;
        ParamList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ParamList() = default ;
        ParamList& operator=(const ParamList &) = default ;
        ParamList& operator=(ParamList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline ParamList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline ParamList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // This parameter is required.
        shared_ptr<string> key_ {};
        // This parameter is required.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->dataSourceCatalog_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceSchema_ == nullptr && this->operatorType_ == nullptr && this->paramList_ == nullptr
        && this->projectId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ExecuteCommand& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // dataSourceCatalog Field Functions 
      bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
      void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
      inline string getDataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
      inline ExecuteCommand& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
      inline ExecuteCommand& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceSchema Field Functions 
      bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
      void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
      inline string getDataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
      inline ExecuteCommand& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


      // operatorType Field Functions 
      bool hasOperatorType() const { return this->operatorType_ != nullptr;};
      void deleteOperatorType() { this->operatorType_ = nullptr;};
      inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
      inline ExecuteCommand& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


      // paramList Field Functions 
      bool hasParamList() const { return this->paramList_ != nullptr;};
      void deleteParamList() { this->paramList_ = nullptr;};
      inline const vector<ExecuteCommand::ParamList> & getParamList() const { DARABONBA_PTR_GET_CONST(paramList_, vector<ExecuteCommand::ParamList>) };
      inline vector<ExecuteCommand::ParamList> getParamList() { DARABONBA_PTR_GET(paramList_, vector<ExecuteCommand::ParamList>) };
      inline ExecuteCommand& setParamList(const vector<ExecuteCommand::ParamList> & paramList) { DARABONBA_PTR_SET_VALUE(paramList_, paramList) };
      inline ExecuteCommand& setParamList(vector<ExecuteCommand::ParamList> && paramList) { DARABONBA_PTR_SET_RVALUE(paramList_, paramList) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline ExecuteCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // This parameter is required.
      shared_ptr<string> code_ {};
      shared_ptr<string> dataSourceCatalog_ {};
      shared_ptr<int64_t> dataSourceId_ {};
      shared_ptr<string> dataSourceSchema_ {};
      // This parameter is required.
      shared_ptr<string> operatorType_ {};
      shared_ptr<vector<ExecuteCommand::ParamList>> paramList_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->executeCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // executeCommand Field Functions 
    bool hasExecuteCommand() const { return this->executeCommand_ != nullptr;};
    void deleteExecuteCommand() { this->executeCommand_ = nullptr;};
    inline const ExecuteAdHocTaskRequest::ExecuteCommand & getExecuteCommand() const { DARABONBA_PTR_GET_CONST(executeCommand_, ExecuteAdHocTaskRequest::ExecuteCommand) };
    inline ExecuteAdHocTaskRequest::ExecuteCommand getExecuteCommand() { DARABONBA_PTR_GET(executeCommand_, ExecuteAdHocTaskRequest::ExecuteCommand) };
    inline ExecuteAdHocTaskRequest& setExecuteCommand(const ExecuteAdHocTaskRequest::ExecuteCommand & executeCommand) { DARABONBA_PTR_SET_VALUE(executeCommand_, executeCommand) };
    inline ExecuteAdHocTaskRequest& setExecuteCommand(ExecuteAdHocTaskRequest::ExecuteCommand && executeCommand) { DARABONBA_PTR_SET_RVALUE(executeCommand_, executeCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ExecuteAdHocTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<ExecuteAdHocTaskRequest::ExecuteCommand> executeCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
