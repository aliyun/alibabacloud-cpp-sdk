// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETTABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETTABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchGetTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
    };
    BatchGetTablesRequest() = default ;
    BatchGetTablesRequest(const BatchGetTablesRequest &) = default ;
    BatchGetTablesRequest(BatchGetTablesRequest &&) = default ;
    BatchGetTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetTablesRequest() = default ;
    BatchGetTablesRequest& operator=(const BatchGetTablesRequest &) = default ;
    BatchGetTablesRequest& operator=(BatchGetTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->tableNames_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline BatchGetTablesRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline BatchGetTablesRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const vector<string> & tableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
    inline vector<string> tableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
    inline BatchGetTablesRequest& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline BatchGetTablesRequest& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The name of the data table.
    std::shared_ptr<vector<string>> tableNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
