// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEDATALAKEPARTITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEDATALAKEPARTITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class BatchDeleteDataLakePartitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteDataLakePartitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(IfExists, ifExists_);
      DARABONBA_PTR_TO_JSON(PartitionValuesList, partitionValuesList_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteDataLakePartitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(IfExists, ifExists_);
      DARABONBA_PTR_FROM_JSON(PartitionValuesList, partitionValuesList_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    BatchDeleteDataLakePartitionsRequest() = default ;
    BatchDeleteDataLakePartitionsRequest(const BatchDeleteDataLakePartitionsRequest &) = default ;
    BatchDeleteDataLakePartitionsRequest(BatchDeleteDataLakePartitionsRequest &&) = default ;
    BatchDeleteDataLakePartitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteDataLakePartitionsRequest() = default ;
    BatchDeleteDataLakePartitionsRequest& operator=(const BatchDeleteDataLakePartitionsRequest &) = default ;
    BatchDeleteDataLakePartitionsRequest& operator=(BatchDeleteDataLakePartitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->dataRegion_ == nullptr && this->dbName_ == nullptr && this->ifExists_ == nullptr && this->partitionValuesList_ == nullptr && this->tableName_ == nullptr
        && this->tid_ == nullptr && this->workspaceId_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline BatchDeleteDataLakePartitionsRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string getDataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline BatchDeleteDataLakePartitionsRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline BatchDeleteDataLakePartitionsRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // ifExists Field Functions 
    bool hasIfExists() const { return this->ifExists_ != nullptr;};
    void deleteIfExists() { this->ifExists_ = nullptr;};
    inline bool getIfExists() const { DARABONBA_PTR_GET_DEFAULT(ifExists_, false) };
    inline BatchDeleteDataLakePartitionsRequest& setIfExists(bool ifExists) { DARABONBA_PTR_SET_VALUE(ifExists_, ifExists) };


    // partitionValuesList Field Functions 
    bool hasPartitionValuesList() const { return this->partitionValuesList_ != nullptr;};
    void deletePartitionValuesList() { this->partitionValuesList_ = nullptr;};
    inline const vector<vector<string>> & getPartitionValuesList() const { DARABONBA_PTR_GET_CONST(partitionValuesList_, vector<vector<string>>) };
    inline vector<vector<string>> getPartitionValuesList() { DARABONBA_PTR_GET(partitionValuesList_, vector<vector<string>>) };
    inline BatchDeleteDataLakePartitionsRequest& setPartitionValuesList(const vector<vector<string>> & partitionValuesList) { DARABONBA_PTR_SET_VALUE(partitionValuesList_, partitionValuesList) };
    inline BatchDeleteDataLakePartitionsRequest& setPartitionValuesList(vector<vector<string>> && partitionValuesList) { DARABONBA_PTR_SET_RVALUE(partitionValuesList_, partitionValuesList) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline BatchDeleteDataLakePartitionsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline BatchDeleteDataLakePartitionsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline BatchDeleteDataLakePartitionsRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the data catalog.
    // 
    // This parameter is required.
    shared_ptr<string> catalogName_ {};
    // The region where the data lake resides.
    // 
    // This parameter is required.
    shared_ptr<string> dataRegion_ {};
    // The database name.
    // 
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // Specifies whether to ignore the exception if the partition that you want to delete does not exist.
    shared_ptr<bool> ifExists_ {};
    // The values in a partition key column.
    // 
    // This parameter is required.
    shared_ptr<vector<vector<string>>> partitionValuesList_ {};
    // The table name.
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
    // The ID of the tenant.
    // 
    // > To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
    // The workspace ID.
    shared_ptr<int64_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
