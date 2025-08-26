// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATALAKEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATALAKEFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DLFunctionInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class UpdateDataLakeFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataLakeFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(FunctionInput, functionInput_);
      DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataLakeFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(FunctionInput, functionInput_);
      DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDataLakeFunctionRequest() = default ;
    UpdateDataLakeFunctionRequest(const UpdateDataLakeFunctionRequest &) = default ;
    UpdateDataLakeFunctionRequest(UpdateDataLakeFunctionRequest &&) = default ;
    UpdateDataLakeFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataLakeFunctionRequest() = default ;
    UpdateDataLakeFunctionRequest& operator=(const UpdateDataLakeFunctionRequest &) = default ;
    UpdateDataLakeFunctionRequest& operator=(UpdateDataLakeFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->catalogName_ != nullptr
        && this->dbName_ != nullptr && this->functionInput_ != nullptr && this->functionName_ != nullptr && this->tid_ != nullptr && this->workspaceId_ != nullptr; };
    // catalogName Field Functions 
    bool hasCatalogName() const { return this->catalogName_ != nullptr;};
    void deleteCatalogName() { this->catalogName_ = nullptr;};
    inline string catalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
    inline UpdateDataLakeFunctionRequest& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline UpdateDataLakeFunctionRequest& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // functionInput Field Functions 
    bool hasFunctionInput() const { return this->functionInput_ != nullptr;};
    void deleteFunctionInput() { this->functionInput_ = nullptr;};
    inline const DLFunctionInput & functionInput() const { DARABONBA_PTR_GET_CONST(functionInput_, DLFunctionInput) };
    inline DLFunctionInput functionInput() { DARABONBA_PTR_GET(functionInput_, DLFunctionInput) };
    inline UpdateDataLakeFunctionRequest& setFunctionInput(const DLFunctionInput & functionInput) { DARABONBA_PTR_SET_VALUE(functionInput_, functionInput) };
    inline UpdateDataLakeFunctionRequest& setFunctionInput(DLFunctionInput && functionInput) { DARABONBA_PTR_SET_RVALUE(functionInput_, functionInput) };


    // functionName Field Functions 
    bool hasFunctionName() const { return this->functionName_ != nullptr;};
    void deleteFunctionName() { this->functionName_ = nullptr;};
    inline string functionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
    inline UpdateDataLakeFunctionRequest& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateDataLakeFunctionRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline UpdateDataLakeFunctionRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> catalogName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> dbName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<DLFunctionInput> functionInput_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> functionName_ = nullptr;
    std::shared_ptr<int64_t> tid_ = nullptr;
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
