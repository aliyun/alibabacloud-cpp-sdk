// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEDATALAKEPARTITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEDATALAKEPARTITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DLPartitionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class BatchCreateDataLakePartitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateDataLakePartitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(IfNotExists, ifNotExists_);
      DARABONBA_PTR_TO_JSON(NeedResult, needResult_);
      DARABONBA_PTR_TO_JSON(PartitionInputs, partitionInputs_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateDataLakePartitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(IfNotExists, ifNotExists_);
      DARABONBA_PTR_FROM_JSON(NeedResult, needResult_);
      DARABONBA_PTR_FROM_JSON(PartitionInputs, partitionInputs_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    BatchCreateDataLakePartitionsRequest() = default ;
    BatchCreateDataLakePartitionsRequest(const BatchCreateDataLakePartitionsRequest &) = default ;
    BatchCreateDataLakePartitionsRequest(BatchCreateDataLakePartitionsRequest &&) = default ;
    BatchCreateDataLakePartitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateDataLakePartitionsRequest() = default ;
    BatchCreateDataLakePartitionsRequest& operator=(const BatchCreateDataLakePartitionsRequest &) = default ;
    BatchCreateDataLakePartitionsRequest& operator=(BatchCreateDataLakePartitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogName_ != nullptr
        && this->dataRegion_ != nullptr && this->dbName_ != nullptr && this->ifNotExists_ != nullptr && this->needResult_ != nullptr && this->partitionInputs_ != nullptr
        && this->tableName_ != nullptr && this->tid_ != nullptr && this->workspaceId_ != nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline BatchCreateDataLakePartitionsRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string dataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline BatchCreateDataLakePartitionsRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline BatchCreateDataLakePartitionsRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // ifNotExists Field Functions 
    bool hasIfNotExists() const { return this->ifNotExists_ != nullptr;};
    void deleteIfNotExists() { this->ifNotExists_ = nullptr;};
    inline bool ifNotExists() const { DARABONBA_PTR_GET_DEFAULT(ifNotExists_, false) };
    inline BatchCreateDataLakePartitionsRequest& setIfNotExists(bool ifNotExists) { DARABONBA_PTR_SET_VALUE(ifNotExists_, ifNotExists) };


    // needResult Field Functions 
    bool hasNeedResult() const { return this->needResult_ != nullptr;};
    void deleteNeedResult() { this->needResult_ = nullptr;};
    inline bool needResult() const { DARABONBA_PTR_GET_DEFAULT(needResult_, false) };
    inline BatchCreateDataLakePartitionsRequest& setNeedResult(bool needResult) { DARABONBA_PTR_SET_VALUE(needResult_, needResult) };


    // partitionInputs Field Functions 
    bool hasPartitionInputs() const { return this->partitionInputs_ != nullptr;};
    void deletePartitionInputs() { this->partitionInputs_ = nullptr;};
    inline const vector<DLPartitionInput> & partitionInputs() const { DARABONBA_PTR_GET_CONST(partitionInputs_, vector<DLPartitionInput>) };
    inline vector<DLPartitionInput> partitionInputs() { DARABONBA_PTR_GET(partitionInputs_, vector<DLPartitionInput>) };
    inline BatchCreateDataLakePartitionsRequest& setPartitionInputs(const vector<DLPartitionInput> & partitionInputs) { DARABONBA_PTR_SET_VALUE(partitionInputs_, partitionInputs) };
    inline BatchCreateDataLakePartitionsRequest& setPartitionInputs(vector<DLPartitionInput> && partitionInputs) { DARABONBA_PTR_SET_RVALUE(partitionInputs_, partitionInputs) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline BatchCreateDataLakePartitionsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline BatchCreateDataLakePartitionsRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline BatchCreateDataLakePartitionsRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> catalogName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataRegion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<bool> ifNotExists_ = nullptr;
    std::shared_ptr<bool> needResult_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<DLPartitionInput>> partitionInputs_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
