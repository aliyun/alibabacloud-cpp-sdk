// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATALAKEPARTITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATALAKEPARTITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DLPartitionInput.hpp>
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
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->dataRegion_ == nullptr && this->dbName_ == nullptr && this->ifNotExists_ == nullptr && this->needResult_ == nullptr && this->partitionInput_ == nullptr
        && this->tableName_ == nullptr && this->tid_ == nullptr && this->workspaceId_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline CreateDataLakePartitionRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string getDataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline CreateDataLakePartitionRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateDataLakePartitionRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // ifNotExists Field Functions 
    bool hasIfNotExists() const { return this->ifNotExists_ != nullptr;};
    void deleteIfNotExists() { this->ifNotExists_ = nullptr;};
    inline bool getIfNotExists() const { DARABONBA_PTR_GET_DEFAULT(ifNotExists_, false) };
    inline CreateDataLakePartitionRequest& setIfNotExists(bool ifNotExists) { DARABONBA_PTR_SET_VALUE(ifNotExists_, ifNotExists) };


    // needResult Field Functions 
    bool hasNeedResult() const { return this->needResult_ != nullptr;};
    void deleteNeedResult() { this->needResult_ = nullptr;};
    inline bool getNeedResult() const { DARABONBA_PTR_GET_DEFAULT(needResult_, false) };
    inline CreateDataLakePartitionRequest& setNeedResult(bool needResult) { DARABONBA_PTR_SET_VALUE(needResult_, needResult) };


    // partitionInput Field Functions 
    bool hasPartitionInput() const { return this->partitionInput_ != nullptr;};
    void deletePartitionInput() { this->partitionInput_ = nullptr;};
    inline const DLPartitionInput & getPartitionInput() const { DARABONBA_PTR_GET_CONST(partitionInput_, DLPartitionInput) };
    inline DLPartitionInput getPartitionInput() { DARABONBA_PTR_GET(partitionInput_, DLPartitionInput) };
    inline CreateDataLakePartitionRequest& setPartitionInput(const DLPartitionInput & partitionInput) { DARABONBA_PTR_SET_VALUE(partitionInput_, partitionInput) };
    inline CreateDataLakePartitionRequest& setPartitionInput(DLPartitionInput && partitionInput) { DARABONBA_PTR_SET_RVALUE(partitionInput_, partitionInput) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline CreateDataLakePartitionRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataLakePartitionRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline CreateDataLakePartitionRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


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
    // Specifies whether to ignore the exception if the name of the created partition is the same as the name of an existing partition.
    shared_ptr<bool> ifNotExists_ {};
    // Specifies whether to return information about the created partition. If the value is true, the Partition parameter is returned. Valid values:
    // 
    // *   true: returns information about the created partition.
    // *   false: does not return information about the created partition.
    shared_ptr<bool> needResult_ {};
    // The information about the created partition.
    // 
    // This parameter is required.
    shared_ptr<DLPartitionInput> partitionInput_ {};
    // The name of the table
    // 
    // This parameter is required.
    shared_ptr<string> tableName_ {};
    // The ID of the tenant.
    // 
    // > To view the tenant ID, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
    // The workspace ID.
    shared_ptr<int64_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
