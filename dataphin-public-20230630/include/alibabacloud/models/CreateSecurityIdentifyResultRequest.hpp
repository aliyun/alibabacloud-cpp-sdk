// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYIDENTIFYRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYIDENTIFYRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateSecurityIdentifyResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityIdentifyResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityIdentifyResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    CreateSecurityIdentifyResultRequest() = default ;
    CreateSecurityIdentifyResultRequest(const CreateSecurityIdentifyResultRequest &) = default ;
    CreateSecurityIdentifyResultRequest(CreateSecurityIdentifyResultRequest &&) = default ;
    CreateSecurityIdentifyResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityIdentifyResultRequest() = default ;
    CreateSecurityIdentifyResultRequest& operator=(const CreateSecurityIdentifyResultRequest &) = default ;
    CreateSecurityIdentifyResultRequest& operator=(CreateSecurityIdentifyResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(ClassifyId, classifyId_);
        DARABONBA_PTR_TO_JSON(ConflictStrategy, conflictStrategy_);
        DARABONBA_PTR_TO_JSON(DatasourceEnv, datasourceEnv_);
        DARABONBA_PTR_TO_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
        DARABONBA_PTR_TO_JSON(IsDatasourceTable, isDatasourceTable_);
        DARABONBA_PTR_TO_JSON(TableCatalog, tableCatalog_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(ClassifyId, classifyId_);
        DARABONBA_PTR_FROM_JSON(ConflictStrategy, conflictStrategy_);
        DARABONBA_PTR_FROM_JSON(DatasourceEnv, datasourceEnv_);
        DARABONBA_PTR_FROM_JSON(DatasourceName, datasourceName_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
        DARABONBA_PTR_FROM_JSON(IsDatasourceTable, isDatasourceTable_);
        DARABONBA_PTR_FROM_JSON(TableCatalog, tableCatalog_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->classifyId_ == nullptr
        && this->conflictStrategy_ == nullptr && this->datasourceEnv_ == nullptr && this->datasourceName_ == nullptr && this->enable_ == nullptr && this->fieldName_ == nullptr
        && this->isDatasourceTable_ == nullptr && this->tableCatalog_ == nullptr && this->tableName_ == nullptr; };
      // classifyId Field Functions 
      bool hasClassifyId() const { return this->classifyId_ != nullptr;};
      void deleteClassifyId() { this->classifyId_ = nullptr;};
      inline int64_t getClassifyId() const { DARABONBA_PTR_GET_DEFAULT(classifyId_, 0L) };
      inline CreateCommand& setClassifyId(int64_t classifyId) { DARABONBA_PTR_SET_VALUE(classifyId_, classifyId) };


      // conflictStrategy Field Functions 
      bool hasConflictStrategy() const { return this->conflictStrategy_ != nullptr;};
      void deleteConflictStrategy() { this->conflictStrategy_ = nullptr;};
      inline string getConflictStrategy() const { DARABONBA_PTR_GET_DEFAULT(conflictStrategy_, "") };
      inline CreateCommand& setConflictStrategy(string conflictStrategy) { DARABONBA_PTR_SET_VALUE(conflictStrategy_, conflictStrategy) };


      // datasourceEnv Field Functions 
      bool hasDatasourceEnv() const { return this->datasourceEnv_ != nullptr;};
      void deleteDatasourceEnv() { this->datasourceEnv_ = nullptr;};
      inline string getDatasourceEnv() const { DARABONBA_PTR_GET_DEFAULT(datasourceEnv_, "") };
      inline CreateCommand& setDatasourceEnv(string datasourceEnv) { DARABONBA_PTR_SET_VALUE(datasourceEnv_, datasourceEnv) };


      // datasourceName Field Functions 
      bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
      void deleteDatasourceName() { this->datasourceName_ = nullptr;};
      inline string getDatasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
      inline CreateCommand& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline CreateCommand& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // fieldName Field Functions 
      bool hasFieldName() const { return this->fieldName_ != nullptr;};
      void deleteFieldName() { this->fieldName_ = nullptr;};
      inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
      inline CreateCommand& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


      // isDatasourceTable Field Functions 
      bool hasIsDatasourceTable() const { return this->isDatasourceTable_ != nullptr;};
      void deleteIsDatasourceTable() { this->isDatasourceTable_ = nullptr;};
      inline bool getIsDatasourceTable() const { DARABONBA_PTR_GET_DEFAULT(isDatasourceTable_, false) };
      inline CreateCommand& setIsDatasourceTable(bool isDatasourceTable) { DARABONBA_PTR_SET_VALUE(isDatasourceTable_, isDatasourceTable) };


      // tableCatalog Field Functions 
      bool hasTableCatalog() const { return this->tableCatalog_ != nullptr;};
      void deleteTableCatalog() { this->tableCatalog_ = nullptr;};
      inline string getTableCatalog() const { DARABONBA_PTR_GET_DEFAULT(tableCatalog_, "") };
      inline CreateCommand& setTableCatalog(string tableCatalog) { DARABONBA_PTR_SET_VALUE(tableCatalog_, tableCatalog) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline CreateCommand& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // This parameter is required.
      shared_ptr<int64_t> classifyId_ {};
      // This parameter is required.
      shared_ptr<string> conflictStrategy_ {};
      shared_ptr<string> datasourceEnv_ {};
      shared_ptr<string> datasourceName_ {};
      shared_ptr<bool> enable_ {};
      // This parameter is required.
      shared_ptr<string> fieldName_ {};
      shared_ptr<bool> isDatasourceTable_ {};
      // This parameter is required.
      shared_ptr<string> tableCatalog_ {};
      // This parameter is required.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateSecurityIdentifyResultRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateSecurityIdentifyResultRequest::CreateCommand) };
    inline CreateSecurityIdentifyResultRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateSecurityIdentifyResultRequest::CreateCommand) };
    inline CreateSecurityIdentifyResultRequest& setCreateCommand(const CreateSecurityIdentifyResultRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateSecurityIdentifyResultRequest& setCreateCommand(CreateSecurityIdentifyResultRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateSecurityIdentifyResultRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<CreateSecurityIdentifyResultRequest::CreateCommand> createCommand_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
