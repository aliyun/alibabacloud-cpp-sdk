// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATALAKEPARTITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATALAKEPARTITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataLakePartitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataLakePartitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(IfNotExists, ifNotExists_);
      DARABONBA_PTR_TO_JSON(NeedResult, needResult_);
      DARABONBA_PTR_TO_JSON(PartitionInput, partitionInput_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataLakePartitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(IfNotExists, ifNotExists_);
      DARABONBA_PTR_FROM_JSON(NeedResult, needResult_);
      DARABONBA_PTR_FROM_JSON(PartitionInput, partitionInput_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataLakePartitionRequest() = default ;
    CreateDataLakePartitionRequest(const CreateDataLakePartitionRequest &) = default ;
    CreateDataLakePartitionRequest(CreateDataLakePartitionRequest &&) = default ;
    CreateDataLakePartitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataLakePartitionRequest() = default ;
    CreateDataLakePartitionRequest& operator=(const CreateDataLakePartitionRequest &) = default ;
    CreateDataLakePartitionRequest& operator=(CreateDataLakePartitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogName_ != nullptr
        && this->dataRegion_ != nullptr && this->dbName_ != nullptr && this->ifNotExists_ != nullptr && this->needResult_ != nullptr && this->partitionInput_ != nullptr
        && this->tableName_ != nullptr && this->tid_ != nullptr && this->workspaceId_ != nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline CreateDataLakePartitionRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string dataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline CreateDataLakePartitionRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateDataLakePartitionRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // ifNotExists Field Functions 
    bool hasIfNotExists() const { return this->ifNotExists_ != nullptr;};
    void deleteIfNotExists() { this->ifNotExists_ = nullptr;};
    inline bool ifNotExists() const { DARABONBA_PTR_GET_DEFAULT(ifNotExists_, false) };
    inline CreateDataLakePartitionRequest& setIfNotExists(bool ifNotExists) { DARABONBA_PTR_SET_VALUE(ifNotExists_, ifNotExists) };


    // needResult Field Functions 
    bool hasNeedResult() const { return this->needResult_ != nullptr;};
    void deleteNeedResult() { this->needResult_ = nullptr;};
    inline bool needResult() const { DARABONBA_PTR_GET_DEFAULT(needResult_, false) };
    inline CreateDataLakePartitionRequest& setNeedResult(bool needResult) { DARABONBA_PTR_SET_VALUE(needResult_, needResult) };


    // partitionInput Field Functions 
    bool hasPartitionInput() const { return this->partitionInput_ != nullptr;};
    void deletePartitionInput() { this->partitionInput_ = nullptr;};
    inline const DLPartitionInput & partitionInput() const { DARABONBA_PTR_GET_CONST(partitionInput_, DLPartitionInput) };
    inline DLPartitionInput partitionInput() { DARABONBA_PTR_GET(partitionInput_, DLPartitionInput) };
    inline CreateDataLakePartitionRequest& setPartitionInput(const DLPartitionInput & partitionInput) { DARABONBA_PTR_SET_VALUE(partitionInput_, partitionInput) };
    inline CreateDataLakePartitionRequest& setPartitionInput(DLPartitionInput && partitionInput) { DARABONBA_PTR_SET_RVALUE(partitionInput_, partitionInput) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateDataLakePartitionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataLakePartitionRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline CreateDataLakePartitionRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


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
    std::shared_ptr<DLPartitionInput> partitionInput_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
