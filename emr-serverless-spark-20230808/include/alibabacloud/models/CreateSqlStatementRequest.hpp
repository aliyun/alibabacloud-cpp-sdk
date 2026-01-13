// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLSTATEMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLSTATEMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateSqlStatementRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSqlStatementRequest& obj) { 
      DARABONBA_PTR_TO_JSON(codeContent, codeContent_);
      DARABONBA_PTR_TO_JSON(defaultCatalog, defaultCatalog_);
      DARABONBA_PTR_TO_JSON(defaultDatabase, defaultDatabase_);
      DARABONBA_PTR_TO_JSON(limit, limit_);
      DARABONBA_PTR_TO_JSON(sqlComputeId, sqlComputeId_);
      DARABONBA_PTR_TO_JSON(taskBizId, taskBizId_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSqlStatementRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(codeContent, codeContent_);
      DARABONBA_PTR_FROM_JSON(defaultCatalog, defaultCatalog_);
      DARABONBA_PTR_FROM_JSON(defaultDatabase, defaultDatabase_);
      DARABONBA_PTR_FROM_JSON(limit, limit_);
      DARABONBA_PTR_FROM_JSON(sqlComputeId, sqlComputeId_);
      DARABONBA_PTR_FROM_JSON(taskBizId, taskBizId_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    CreateSqlStatementRequest() = default ;
    CreateSqlStatementRequest(const CreateSqlStatementRequest &) = default ;
    CreateSqlStatementRequest(CreateSqlStatementRequest &&) = default ;
    CreateSqlStatementRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSqlStatementRequest() = default ;
    CreateSqlStatementRequest& operator=(const CreateSqlStatementRequest &) = default ;
    CreateSqlStatementRequest& operator=(CreateSqlStatementRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeContent_ == nullptr
        && this->defaultCatalog_ == nullptr && this->defaultDatabase_ == nullptr && this->limit_ == nullptr && this->sqlComputeId_ == nullptr && this->taskBizId_ == nullptr
        && this->regionId_ == nullptr; };
    // codeContent Field Functions 
    bool hasCodeContent() const { return this->codeContent_ != nullptr;};
    void deleteCodeContent() { this->codeContent_ = nullptr;};
    inline string getCodeContent() const { DARABONBA_PTR_GET_DEFAULT(codeContent_, "") };
    inline CreateSqlStatementRequest& setCodeContent(string codeContent) { DARABONBA_PTR_SET_VALUE(codeContent_, codeContent) };


    // defaultCatalog Field Functions 
    bool hasDefaultCatalog() const { return this->defaultCatalog_ != nullptr;};
    void deleteDefaultCatalog() { this->defaultCatalog_ = nullptr;};
    inline string getDefaultCatalog() const { DARABONBA_PTR_GET_DEFAULT(defaultCatalog_, "") };
    inline CreateSqlStatementRequest& setDefaultCatalog(string defaultCatalog) { DARABONBA_PTR_SET_VALUE(defaultCatalog_, defaultCatalog) };


    // defaultDatabase Field Functions 
    bool hasDefaultDatabase() const { return this->defaultDatabase_ != nullptr;};
    void deleteDefaultDatabase() { this->defaultDatabase_ = nullptr;};
    inline string getDefaultDatabase() const { DARABONBA_PTR_GET_DEFAULT(defaultDatabase_, "") };
    inline CreateSqlStatementRequest& setDefaultDatabase(string defaultDatabase) { DARABONBA_PTR_SET_VALUE(defaultDatabase_, defaultDatabase) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline CreateSqlStatementRequest& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // sqlComputeId Field Functions 
    bool hasSqlComputeId() const { return this->sqlComputeId_ != nullptr;};
    void deleteSqlComputeId() { this->sqlComputeId_ = nullptr;};
    inline string getSqlComputeId() const { DARABONBA_PTR_GET_DEFAULT(sqlComputeId_, "") };
    inline CreateSqlStatementRequest& setSqlComputeId(string sqlComputeId) { DARABONBA_PTR_SET_VALUE(sqlComputeId_, sqlComputeId) };


    // taskBizId Field Functions 
    bool hasTaskBizId() const { return this->taskBizId_ != nullptr;};
    void deleteTaskBizId() { this->taskBizId_ = nullptr;};
    inline string getTaskBizId() const { DARABONBA_PTR_GET_DEFAULT(taskBizId_, "") };
    inline CreateSqlStatementRequest& setTaskBizId(string taskBizId) { DARABONBA_PTR_SET_VALUE(taskBizId_, taskBizId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSqlStatementRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The SQL code. You can specify one or more SQL statements.
    shared_ptr<string> codeContent_ {};
    // The default Data Lake Formation (DLF) catalog ID.
    shared_ptr<string> defaultCatalog_ {};
    // The name of the default database.
    shared_ptr<string> defaultDatabase_ {};
    // The maximum number of entries to return. Valid values: 1 to 10000.
    shared_ptr<int32_t> limit_ {};
    // The SQL session ID. You can create an SQL session in the workspace created in EMR Serverless Spark.
    shared_ptr<string> sqlComputeId_ {};
    shared_ptr<string> taskBizId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
