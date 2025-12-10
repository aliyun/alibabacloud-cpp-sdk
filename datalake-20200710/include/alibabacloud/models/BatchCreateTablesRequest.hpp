// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATETABLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TableInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchCreateTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IfNotExists, ifNotExists_);
      DARABONBA_PTR_TO_JSON(TableInputs, tableInputs_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IfNotExists, ifNotExists_);
      DARABONBA_PTR_FROM_JSON(TableInputs, tableInputs_);
    };
    BatchCreateTablesRequest() = default ;
    BatchCreateTablesRequest(const BatchCreateTablesRequest &) = default ;
    BatchCreateTablesRequest(BatchCreateTablesRequest &&) = default ;
    BatchCreateTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateTablesRequest() = default ;
    BatchCreateTablesRequest& operator=(const BatchCreateTablesRequest &) = default ;
    BatchCreateTablesRequest& operator=(BatchCreateTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->ifNotExists_ == nullptr && return this->tableInputs_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline BatchCreateTablesRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline BatchCreateTablesRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // ifNotExists Field Functions 
    bool hasIfNotExists() const { return this->ifNotExists_ != nullptr;};
    void deleteIfNotExists() { this->ifNotExists_ = nullptr;};
    inline bool ifNotExists() const { DARABONBA_PTR_GET_DEFAULT(ifNotExists_, false) };
    inline BatchCreateTablesRequest& setIfNotExists(bool ifNotExists) { DARABONBA_PTR_SET_VALUE(ifNotExists_, ifNotExists) };


    // tableInputs Field Functions 
    bool hasTableInputs() const { return this->tableInputs_ != nullptr;};
    void deleteTableInputs() { this->tableInputs_ = nullptr;};
    inline const vector<TableInput> & tableInputs() const { DARABONBA_PTR_GET_CONST(tableInputs_, vector<TableInput>) };
    inline vector<TableInput> tableInputs() { DARABONBA_PTR_GET(tableInputs_, vector<TableInput>) };
    inline BatchCreateTablesRequest& setTableInputs(const vector<TableInput> & tableInputs) { DARABONBA_PTR_SET_VALUE(tableInputs_, tableInputs) };
    inline BatchCreateTablesRequest& setTableInputs(vector<TableInput> && tableInputs) { DARABONBA_PTR_SET_RVALUE(tableInputs_, tableInputs) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to ignore errors if the table name already exists.
    std::shared_ptr<bool> ifNotExists_ = nullptr;
    // The list of data tables.
    std::shared_ptr<vector<TableInput>> tableInputs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
