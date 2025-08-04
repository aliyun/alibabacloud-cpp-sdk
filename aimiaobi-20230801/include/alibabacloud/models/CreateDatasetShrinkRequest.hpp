// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class CreateDatasetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetConfig, datasetConfigShrink_);
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_TO_JSON(DocumentHandleConfig, documentHandleConfigShrink_);
      DARABONBA_PTR_TO_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_TO_JSON(SearchDatasetEnable, searchDatasetEnable_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetConfig, datasetConfigShrink_);
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DatasetType, datasetType_);
      DARABONBA_PTR_FROM_JSON(DocumentHandleConfig, documentHandleConfigShrink_);
      DARABONBA_PTR_FROM_JSON(InvokeType, invokeType_);
      DARABONBA_PTR_FROM_JSON(SearchDatasetEnable, searchDatasetEnable_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDatasetShrinkRequest() = default ;
    CreateDatasetShrinkRequest(const CreateDatasetShrinkRequest &) = default ;
    CreateDatasetShrinkRequest(CreateDatasetShrinkRequest &&) = default ;
    CreateDatasetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetShrinkRequest() = default ;
    CreateDatasetShrinkRequest& operator=(const CreateDatasetShrinkRequest &) = default ;
    CreateDatasetShrinkRequest& operator=(CreateDatasetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetConfigShrink_ != nullptr
        && this->datasetDescription_ != nullptr && this->datasetName_ != nullptr && this->datasetType_ != nullptr && this->documentHandleConfigShrink_ != nullptr && this->invokeType_ != nullptr
        && this->searchDatasetEnable_ != nullptr && this->workspaceId_ != nullptr; };
    // datasetConfigShrink Field Functions 
    bool hasDatasetConfigShrink() const { return this->datasetConfigShrink_ != nullptr;};
    void deleteDatasetConfigShrink() { this->datasetConfigShrink_ = nullptr;};
    inline string datasetConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(datasetConfigShrink_, "") };
    inline CreateDatasetShrinkRequest& setDatasetConfigShrink(string datasetConfigShrink) { DARABONBA_PTR_SET_VALUE(datasetConfigShrink_, datasetConfigShrink) };


    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string datasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline CreateDatasetShrinkRequest& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateDatasetShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // datasetType Field Functions 
    bool hasDatasetType() const { return this->datasetType_ != nullptr;};
    void deleteDatasetType() { this->datasetType_ = nullptr;};
    inline string datasetType() const { DARABONBA_PTR_GET_DEFAULT(datasetType_, "") };
    inline CreateDatasetShrinkRequest& setDatasetType(string datasetType) { DARABONBA_PTR_SET_VALUE(datasetType_, datasetType) };


    // documentHandleConfigShrink Field Functions 
    bool hasDocumentHandleConfigShrink() const { return this->documentHandleConfigShrink_ != nullptr;};
    void deleteDocumentHandleConfigShrink() { this->documentHandleConfigShrink_ = nullptr;};
    inline string documentHandleConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(documentHandleConfigShrink_, "") };
    inline CreateDatasetShrinkRequest& setDocumentHandleConfigShrink(string documentHandleConfigShrink) { DARABONBA_PTR_SET_VALUE(documentHandleConfigShrink_, documentHandleConfigShrink) };


    // invokeType Field Functions 
    bool hasInvokeType() const { return this->invokeType_ != nullptr;};
    void deleteInvokeType() { this->invokeType_ = nullptr;};
    inline string invokeType() const { DARABONBA_PTR_GET_DEFAULT(invokeType_, "") };
    inline CreateDatasetShrinkRequest& setInvokeType(string invokeType) { DARABONBA_PTR_SET_VALUE(invokeType_, invokeType) };


    // searchDatasetEnable Field Functions 
    bool hasSearchDatasetEnable() const { return this->searchDatasetEnable_ != nullptr;};
    void deleteSearchDatasetEnable() { this->searchDatasetEnable_ = nullptr;};
    inline int32_t searchDatasetEnable() const { DARABONBA_PTR_GET_DEFAULT(searchDatasetEnable_, 0) };
    inline CreateDatasetShrinkRequest& setSearchDatasetEnable(int32_t searchDatasetEnable) { DARABONBA_PTR_SET_VALUE(searchDatasetEnable_, searchDatasetEnable) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDatasetShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> datasetConfigShrink_ = nullptr;
    std::shared_ptr<string> datasetDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<string> datasetType_ = nullptr;
    std::shared_ptr<string> documentHandleConfigShrink_ = nullptr;
    std::shared_ptr<string> invokeType_ = nullptr;
    std::shared_ptr<int32_t> searchDatasetEnable_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
