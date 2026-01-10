// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATALAKETABLESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATALAKETABLESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataLakeTableShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataLakeTableShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(TableInput, tableInputShrink_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataLakeTableShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(TableInput, tableInputShrink_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataLakeTableShrinkRequest() = default ;
    CreateDataLakeTableShrinkRequest(const CreateDataLakeTableShrinkRequest &) = default ;
    CreateDataLakeTableShrinkRequest(CreateDataLakeTableShrinkRequest &&) = default ;
    CreateDataLakeTableShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataLakeTableShrinkRequest() = default ;
    CreateDataLakeTableShrinkRequest& operator=(const CreateDataLakeTableShrinkRequest &) = default ;
    CreateDataLakeTableShrinkRequest& operator=(CreateDataLakeTableShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->dataRegion_ == nullptr && this->dbName_ == nullptr && this->tableInputShrink_ == nullptr && this->tid_ == nullptr && this->workspaceId_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline CreateDataLakeTableShrinkRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string getDataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline CreateDataLakeTableShrinkRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateDataLakeTableShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // tableInputShrink Field Functions 
    bool hasTableInputShrink() const { return this->tableInputShrink_ != nullptr;};
    void deleteTableInputShrink() { this->tableInputShrink_ = nullptr;};
    inline string getTableInputShrink() const { DARABONBA_PTR_GET_DEFAULT(tableInputShrink_, "") };
    inline CreateDataLakeTableShrinkRequest& setTableInputShrink(string tableInputShrink) { DARABONBA_PTR_SET_VALUE(tableInputShrink_, tableInputShrink) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataLakeTableShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline CreateDataLakeTableShrinkRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


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
    shared_ptr<string> tableInputShrink_ {};
    // The ID of the tenant.
    // 
    // > You can move the pointer over the profile picture in the upper-right corner of the DMS console to obtain the tenant ID.
    shared_ptr<int64_t> tid_ {};
    // The workspace ID.
    shared_ptr<int64_t> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
