// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATETABLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATETABLESREQUEST_HPP_
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
  class BatchUpdateTablesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateTablesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(IsAsync, isAsync_);
      DARABONBA_PTR_TO_JSON(TableInputs, tableInputs_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateTablesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(IsAsync, isAsync_);
      DARABONBA_PTR_FROM_JSON(TableInputs, tableInputs_);
    };
    BatchUpdateTablesRequest() = default ;
    BatchUpdateTablesRequest(const BatchUpdateTablesRequest &) = default ;
    BatchUpdateTablesRequest(BatchUpdateTablesRequest &&) = default ;
    BatchUpdateTablesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateTablesRequest() = default ;
    BatchUpdateTablesRequest& operator=(const BatchUpdateTablesRequest &) = default ;
    BatchUpdateTablesRequest& operator=(BatchUpdateTablesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->databaseName_ == nullptr && return this->isAsync_ == nullptr && return this->tableInputs_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline BatchUpdateTablesRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline BatchUpdateTablesRequest& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // isAsync Field Functions 
    bool hasIsAsync() const { return this->isAsync_ != nullptr;};
    void deleteIsAsync() { this->isAsync_ = nullptr;};
    inline bool isAsync() const { DARABONBA_PTR_GET_DEFAULT(isAsync_, false) };
    inline BatchUpdateTablesRequest& setIsAsync(bool isAsync) { DARABONBA_PTR_SET_VALUE(isAsync_, isAsync) };


    // tableInputs Field Functions 
    bool hasTableInputs() const { return this->tableInputs_ != nullptr;};
    void deleteTableInputs() { this->tableInputs_ = nullptr;};
    inline const vector<TableInput> & tableInputs() const { DARABONBA_PTR_GET_CONST(tableInputs_, vector<TableInput>) };
    inline vector<TableInput> tableInputs() { DARABONBA_PTR_GET(tableInputs_, vector<TableInput>) };
    inline BatchUpdateTablesRequest& setTableInputs(const vector<TableInput> & tableInputs) { DARABONBA_PTR_SET_VALUE(tableInputs_, tableInputs) };
    inline BatchUpdateTablesRequest& setTableInputs(vector<TableInput> && tableInputs) { DARABONBA_PTR_SET_RVALUE(tableInputs_, tableInputs) };


  protected:
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The database name.
    std::shared_ptr<string> databaseName_ = nullptr;
    // Specifies whether to asynchronously update the data table. Valid values:
    // 
    // *   true: The operation is asynchronously called. The update result is immediately returned. You can query the task status by taskid in the returned results.
    // *   false: The operation is synchronously called. The update result is returned after the background task is complete. If the execution of the background task requires an extended period of time, a timeout occurs.
    std::shared_ptr<bool> isAsync_ = nullptr;
    // The details about the updated data table.
    std::shared_ptr<vector<TableInput>> tableInputs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
