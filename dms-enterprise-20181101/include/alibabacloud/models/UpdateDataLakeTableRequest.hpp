// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATALAKETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATALAKETABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OpenStructDLTableInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateDataLakeTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataLakeTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(TableInput, tableInput_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataLakeTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(TableInput, tableInput_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDataLakeTableRequest() = default ;
    UpdateDataLakeTableRequest(const UpdateDataLakeTableRequest &) = default ;
    UpdateDataLakeTableRequest(UpdateDataLakeTableRequest &&) = default ;
    UpdateDataLakeTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataLakeTableRequest() = default ;
    UpdateDataLakeTableRequest& operator=(const UpdateDataLakeTableRequest &) = default ;
    UpdateDataLakeTableRequest& operator=(UpdateDataLakeTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->dataRegion_ == nullptr && this->dbName_ == nullptr && this->tableInput_ == nullptr && this->tableName_ == nullptr && this->tid_ == nullptr
        && this->workspaceId_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline UpdateDataLakeTableRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string getDataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline UpdateDataLakeTableRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline UpdateDataLakeTableRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // tableInput Field Functions 
    bool hasTableInput() const { return this->tableInput_ != nullptr;};
    void deleteTableInput() { this->tableInput_ = nullptr;};
    inline const OpenStructDLTableInput & getTableInput() const { DARABONBA_PTR_GET_CONST(tableInput_, OpenStructDLTableInput) };
    inline OpenStructDLTableInput getTableInput() { DARABONBA_PTR_GET(tableInput_, OpenStructDLTableInput) };
    inline UpdateDataLakeTableRequest& setTableInput(const OpenStructDLTableInput & tableInput) { DARABONBA_PTR_SET_VALUE(tableInput_, tableInput) };
    inline UpdateDataLakeTableRequest& setTableInput(OpenStructDLTableInput && tableInput) { DARABONBA_PTR_SET_RVALUE(tableInput_, tableInput) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline UpdateDataLakeTableRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateDataLakeTableRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline UpdateDataLakeTableRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


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
    // The information about the table.
    // 
    // This parameter is required.
    shared_ptr<OpenStructDLTableInput> tableInput_ {};
    // The name of the updated table. If you do not need to update the table name, set the TableName and TableInput parameters to the same value.
    shared_ptr<string> tableName_ {};
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the DMS console and move the pointer over the profile picture in the upper-right corner. For more information, see the [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html) section of the "Manage DMS tenants" topic.
    shared_ptr<int64_t> tid_ {};
    // The workspace ID.
    shared_ptr<int64_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
