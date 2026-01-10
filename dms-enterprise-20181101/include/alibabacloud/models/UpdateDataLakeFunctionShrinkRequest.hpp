// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATALAKEFUNCTIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATALAKEFUNCTIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateDataLakeFunctionShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataLakeFunctionShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(FunctionInput, functionInputShrink_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataLakeFunctionShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DataRegion, dataRegion_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(FunctionInput, functionInputShrink_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDataLakeFunctionShrinkRequest() = default ;
    UpdateDataLakeFunctionShrinkRequest(const UpdateDataLakeFunctionShrinkRequest &) = default ;
    UpdateDataLakeFunctionShrinkRequest(UpdateDataLakeFunctionShrinkRequest &&) = default ;
    UpdateDataLakeFunctionShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataLakeFunctionShrinkRequest() = default ;
    UpdateDataLakeFunctionShrinkRequest& operator=(const UpdateDataLakeFunctionShrinkRequest &) = default ;
    UpdateDataLakeFunctionShrinkRequest& operator=(UpdateDataLakeFunctionShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->dataRegion_ == nullptr && this->dbName_ == nullptr && this->functionInputShrink_ == nullptr && this->functionName_ == nullptr && this->tid_ == nullptr
        && this->workspaceId_ == nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline UpdateDataLakeFunctionShrinkRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dataRegion Field Functions 
    bool hasDataRegion() const { return this->dataRegion_ != nullptr;};
    void deleteDataRegion() { this->dataRegion_ = nullptr;};
    inline string getDataRegion() const { DARABONBA_PTR_GET_DEFAULT(dataRegion_, "") };
    inline UpdateDataLakeFunctionShrinkRequest& setDataRegion(string dataRegion) { DARABONBA_PTR_SET_VALUE(dataRegion_, dataRegion) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline UpdateDataLakeFunctionShrinkRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // functionInputShrink Field Functions 
    bool hasFunctionInputShrink() const { return this->functionInputShrink_ != nullptr;};
    void deleteFunctionInputShrink() { this->functionInputShrink_ = nullptr;};
    inline string getFunctionInputShrink() const { DARABONBA_PTR_GET_DEFAULT(functionInputShrink_, "") };
    inline UpdateDataLakeFunctionShrinkRequest& setFunctionInputShrink(string functionInputShrink) { DARABONBA_PTR_SET_VALUE(functionInputShrink_, functionInputShrink) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline UpdateDataLakeFunctionShrinkRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateDataLakeFunctionShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline UpdateDataLakeFunctionShrinkRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The catalog name.
    // 
    // This parameter is required.
    shared_ptr<string> catalogName_ {};
    // The region where the data lake resides.
    // 
    // This parameter is required.
    shared_ptr<string> dataRegion_ {};
    // The name of the database that you want to query.
    // 
    // This parameter is required.
    shared_ptr<string> dbName_ {};
    // The details about the function.
    // 
    // This parameter is required.
    shared_ptr<string> functionInputShrink_ {};
    // The function name.
    // 
    // This parameter is required.
    shared_ptr<string> functionName_ {};
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
