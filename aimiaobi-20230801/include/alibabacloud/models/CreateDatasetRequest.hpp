// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDatasetRequestDatasetConfig.hpp>
#include <alibabacloud/models/CreateDatasetRequestDocumentHandleConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class CreateDatasetRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_TO_JSON(DocumentHandleConfig, documentHandleConfig_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_TO_JSON(SearchDatasetEnable, searchDatasetEnable_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetConfig, datasetConfig_);
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_FROM_JSON(DocumentHandleConfig, documentHandleConfig_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_FROM_JSON(SearchDatasetEnable, searchDatasetEnable_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDatasetRequest() = default ;
    CreateDatasetRequest(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest(CreateDatasetRequest &&) = default ;
    CreateDatasetRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetRequest() = default ;
    CreateDatasetRequest& operator=(const CreateDatasetRequest &) = default ;
    CreateDatasetRequest& operator=(CreateDatasetRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetConfig_ == nullptr
        && return this->datasetDescription_ == nullptr && return this->datasetName_ == nullptr && return this->datasetType_ == nullptr && return this->documentHandleConfig_ == nullptr && return this->invokeType_ == nullptr
        && return this->searchDatasetEnable_ == nullptr && return this->workspaceId_ == nullptr; };
    // datasetConfig Field Functions 
    bool hasDatasetConfig() const { return this->datasetConfig_ != nullptr;};
    void deleteDatasetConfig() { this->datasetConfig_ = nullptr;};
    inline const CreateDatasetRequestDatasetConfig & datasetConfig() const { DARABONBA_PTR_GET_CONST(datasetConfig_, CreateDatasetRequestDatasetConfig) };
    inline CreateDatasetRequestDatasetConfig datasetConfig() { DARABONBA_PTR_GET(datasetConfig_, CreateDatasetRequestDatasetConfig) };
    inline CreateDatasetRequest& setDatasetConfig(const CreateDatasetRequestDatasetConfig & datasetConfig) { DARABONBA_PTR_SET_VALUE(datasetConfig_, datasetConfig) };
    inline CreateDatasetRequest& setDatasetConfig(CreateDatasetRequestDatasetConfig && datasetConfig) { DARABONBA_PTR_SET_RVALUE(datasetConfig_, datasetConfig) };


    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string datasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline CreateDatasetRequest& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateDatasetRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline string datasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
    inline CreateDatasetRequest& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // documentHandleConfig Field Functions 
    bool hasDocumentHandleConfig() const { return this->documentHandleConfig_ != nullptr;};
    void deleteDocumentHandleConfig() { this->documentHandleConfig_ = nullptr;};
    inline const CreateDatasetRequestDocumentHandleConfig & documentHandleConfig() const { DARABONBA_PTR_GET_CONST(documentHandleConfig_, CreateDatasetRequestDocumentHandleConfig) };
    inline CreateDatasetRequestDocumentHandleConfig documentHandleConfig() { DARABONBA_PTR_GET(documentHandleConfig_, CreateDatasetRequestDocumentHandleConfig) };
    inline CreateDatasetRequest& setDocumentHandleConfig(const CreateDatasetRequestDocumentHandleConfig & documentHandleConfig) { DARABONBA_PTR_SET_VALUE(documentHandleConfig_, documentHandleConfig) };
    inline CreateDatasetRequest& setDocumentHandleConfig(CreateDatasetRequestDocumentHandleConfig && documentHandleConfig) { DARABONBA_PTR_SET_RVALUE(documentHandleConfig_, documentHandleConfig) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string invokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline CreateDatasetRequest& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


    // searchDatasetEnable Field Functions 
    bool hasSearchDatasetEnable() const { return this->searchDatasetEnable_ != nullptr;};
    void deleteSearchDatasetEnable() { this->searchDatasetEnable_ = nullptr;};
    inline int32_t searchDatasetEnable() const { DARABONBA_PTR_GET_DEFAULT(searchDatasetEnable_, 0) };
    inline CreateDatasetRequest& setSearchDatasetEnable(int32_t searchDatasetEnable) { DARABONBA_PTR_SET_VALUE(searchDatasetEnable_, searchDatasetEnable) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDatasetRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<CreateDatasetRequestDatasetConfig> datasetConfig_ = nullptr;
    std::shared_ptr<string> datasetDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<string> datasetType_ = nullptr;
    std::shared_ptr<CreateDatasetRequestDocumentHandleConfig> documentHandleConfig_ = nullptr;
    std::shared_ptr<string> invokeType_ = nullptr;
    std::shared_ptr<int32_t> searchDatasetEnable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
