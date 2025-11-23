// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATALAKETABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATALAKETABLEREQUEST_HPP_
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
  class CreateDataLakeTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataLakeTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(TableInput, tableInput_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataLakeTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(TableInput, tableInput_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDataLakeTableRequest() = default ;
    CreateDataLakeTableRequest(const CreateDataLakeTableRequest &) = default ;
    CreateDataLakeTableRequest(CreateDataLakeTableRequest &&) = default ;
    CreateDataLakeTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataLakeTableRequest() = default ;
    CreateDataLakeTableRequest& operator=(const CreateDataLakeTableRequest &) = default ;
    CreateDataLakeTableRequest& operator=(CreateDataLakeTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && return this->dataRegion_ == nullptr && return this->dbName_ == nullptr && return this->tableInput_ == nullptr && return this->tid_ == nullptr && return this->workspaceId_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline CreateDataLakeTableRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string dataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline CreateDataLakeTableRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline CreateDataLakeTableRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // tableInput Field Functions 
    bool hasTableInput() const { return this->tableInput_ != nullptr;};
    void deleteTableInput() { this->tableInput_ = nullptr;};
    inline const OpenStructDLTableInput & tableInput() const { DARABONBA_PTR_GET_CONST(tableInput_, OpenStructDLTableInput) };
    inline OpenStructDLTableInput tableInput() { DARABONBA_PTR_GET(tableInput_, OpenStructDLTableInput) };
    inline CreateDataLakeTableRequest& setTableInput(const OpenStructDLTableInput & tableInput) { DARABONBA_PTR_SET_VALUE(tableInput_, tableInput) };
    inline CreateDataLakeTableRequest& setTableInput(OpenStructDLTableInput && tableInput) { DARABONBA_PTR_SET_RVALUE(tableInput_, tableInput) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreateDataLakeTableRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline CreateDataLakeTableRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the data catalog.
    // 
    // This parameter is required.
    std::shared_ptr<string> catalogName_ = nullptr;
    // The region where the data lake resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> dataRegion_ = nullptr;
    // The database name.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // The information about the table.
    // 
    // This parameter is required.
    std::shared_ptr<OpenStructDLTableInput> tableInput_ = nullptr;
    // The ID of the tenant.
    // 
    // > You can move the pointer over the profile picture in the upper-right corner of the DMS console to obtain the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The workspace ID.
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
