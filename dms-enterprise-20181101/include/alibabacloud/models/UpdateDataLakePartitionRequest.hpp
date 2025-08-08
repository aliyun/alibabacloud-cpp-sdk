// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATALAKEPARTITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATALAKEPARTITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateDataLakePartitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataLakePartitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(PartitionInput, partitionInput_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataLakePartitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(PartitionInput, partitionInput_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDataLakePartitionRequest() = default ;
    UpdateDataLakePartitionRequest(const UpdateDataLakePartitionRequest &) = default ;
    UpdateDataLakePartitionRequest(UpdateDataLakePartitionRequest &&) = default ;
    UpdateDataLakePartitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataLakePartitionRequest() = default ;
    UpdateDataLakePartitionRequest& operator=(const UpdateDataLakePartitionRequest &) = default ;
    UpdateDataLakePartitionRequest& operator=(UpdateDataLakePartitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogName_ != nullptr
        && this->dataRegion_ != nullptr && this->dbName_ != nullptr && this->partitionInput_ != nullptr && this->tableName_ != nullptr && this->tid_ != nullptr
        && this->workspaceId_ != nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline UpdateDataLakePartitionRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string dataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline UpdateDataLakePartitionRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline UpdateDataLakePartitionRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // partitionInput Field Functions 
    bool hasPartitionInput() const { return this->partitionInput_ != nullptr;};
    void deletePartitionInput() { this->partitionInput_ = nullptr;};
    inline const DLPartitionInput & partitionInput() const { DARABONBA_PTR_GET_CONST(partitionInput_, DLPartitionInput) };
    inline DLPartitionInput partitionInput() { DARABONBA_PTR_GET(partitionInput_, DLPartitionInput) };
    inline UpdateDataLakePartitionRequest& setPartitionInput(const DLPartitionInput & partitionInput) { DARABONBA_PTR_SET_VALUE(partitionInput_, partitionInput) };
    inline UpdateDataLakePartitionRequest& setPartitionInput(DLPartitionInput && partitionInput) { DARABONBA_PTR_SET_RVALUE(partitionInput_, partitionInput) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline UpdateDataLakePartitionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateDataLakePartitionRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline UpdateDataLakePartitionRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> catalogName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dataRegion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
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
