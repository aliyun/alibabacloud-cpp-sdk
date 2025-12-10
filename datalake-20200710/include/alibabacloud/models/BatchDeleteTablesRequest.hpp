// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETETABLESREQUEST_HPP_
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
  class BatchDeleteTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IfExists, ifExists_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IfExists, ifExists_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
    };
    BatchDeleteTablesRequest() = default ;
    BatchDeleteTablesRequest(const BatchDeleteTablesRequest &) = default ;
    BatchDeleteTablesRequest(BatchDeleteTablesRequest &&) = default ;
    BatchDeleteTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteTablesRequest() = default ;
    BatchDeleteTablesRequest& operator=(const BatchDeleteTablesRequest &) = default ;
    BatchDeleteTablesRequest& operator=(BatchDeleteTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->ifExists_ == nullptr && return this->tableNames_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline BatchDeleteTablesRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline BatchDeleteTablesRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // ifExists Field Functions 
    bool hasIfExists() const { return this->ifExists_ != nullptr;};
    void deleteIfExists() { this->ifExists_ = nullptr;};
    inline bool ifExists() const { DARABONBA_PTR_GET_DEFAULT(ifExists_, false) };
    inline BatchDeleteTablesRequest& setIfExists(bool ifExists) { DARABONBA_PTR_SET_VALUE(ifExists_, ifExists) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const vector<string> & tableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
    inline vector<string> tableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
    inline BatchDeleteTablesRequest& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline BatchDeleteTablesRequest& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


  protected:
    // The ID of the data directory.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The name of a database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to ignore errors if the partition with the specified name has been deleted.
    std::shared_ptr<bool> ifExists_ = nullptr;
    // The list of data table names.
    std::shared_ptr<vector<string>> tableNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
