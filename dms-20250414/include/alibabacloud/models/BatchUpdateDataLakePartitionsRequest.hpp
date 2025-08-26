// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEDATALAKEPARTITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEDATALAKEPARTITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DLPartitionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class BatchUpdateDataLakePartitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateDataLakePartitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(PartitionInputs, partitionInputs_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateDataLakePartitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(PartitionInputs, partitionInputs_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    BatchUpdateDataLakePartitionsRequest() = default ;
    BatchUpdateDataLakePartitionsRequest(const BatchUpdateDataLakePartitionsRequest &) = default ;
    BatchUpdateDataLakePartitionsRequest(BatchUpdateDataLakePartitionsRequest &&) = default ;
    BatchUpdateDataLakePartitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateDataLakePartitionsRequest() = default ;
    BatchUpdateDataLakePartitionsRequest& operator=(const BatchUpdateDataLakePartitionsRequest &) = default ;
    BatchUpdateDataLakePartitionsRequest& operator=(BatchUpdateDataLakePartitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogName_ != nullptr
        && this->dbName_ != nullptr && this->partitionInputs_ != nullptr && this->tableName_ != nullptr && this->tid_ != nullptr && this->workspaceId_ != nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline BatchUpdateDataLakePartitionsRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline BatchUpdateDataLakePartitionsRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // partitionInputs Field Functions 
    bool hasPartitionInputs() const { return this->partitionInputs_ != nullptr;};
    void deletePartitionInputs() { this->partitionInputs_ = nullptr;};
    inline const vector<DLPartitionInput> & partitionInputs() const { DARABONBA_PTR_GET_CONST(partitionInputs_, vector<DLPartitionInput>) };
    inline vector<DLPartitionInput> partitionInputs() { DARABONBA_PTR_GET(partitionInputs_, vector<DLPartitionInput>) };
    inline BatchUpdateDataLakePartitionsRequest& setPartitionInputs(const vector<DLPartitionInput> & partitionInputs) { DARABONBA_PTR_SET_VALUE(partitionInputs_, partitionInputs) };
    inline BatchUpdateDataLakePartitionsRequest& setPartitionInputs(vector<DLPartitionInput> && partitionInputs) { DARABONBA_PTR_SET_RVALUE(partitionInputs_, partitionInputs) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline BatchUpdateDataLakePartitionsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline BatchUpdateDataLakePartitionsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline BatchUpdateDataLakePartitionsRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> catalogName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DLPartitionInput>> partitionInputs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
