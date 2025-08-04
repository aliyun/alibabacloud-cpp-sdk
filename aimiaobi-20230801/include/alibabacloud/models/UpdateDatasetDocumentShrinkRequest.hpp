// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETDOCUMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETDOCUMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetDocumentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetDocumentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Document, documentShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetDocumentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Document, documentShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDatasetDocumentShrinkRequest() = default ;
    UpdateDatasetDocumentShrinkRequest(const UpdateDatasetDocumentShrinkRequest &) = default ;
    UpdateDatasetDocumentShrinkRequest(UpdateDatasetDocumentShrinkRequest &&) = default ;
    UpdateDatasetDocumentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetDocumentShrinkRequest() = default ;
    UpdateDatasetDocumentShrinkRequest& operator=(const UpdateDatasetDocumentShrinkRequest &) = default ;
    UpdateDatasetDocumentShrinkRequest& operator=(UpdateDatasetDocumentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetId_ != nullptr
        && this->datasetName_ != nullptr && this->documentShrink_ != nullptr && this->workspaceId_ != nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline UpdateDatasetDocumentShrinkRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateDatasetDocumentShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // documentShrink Field Functions 
    bool hasDocumentShrink() const { return this->documentShrink_ != nullptr;};
    void deleteDocumentShrink() { this->documentShrink_ = nullptr;};
    inline string documentShrink() const { DARABONBA_PTR_GET_DEFAULT(documentShrink_, "") };
    inline UpdateDatasetDocumentShrinkRequest& setDocumentShrink(string documentShrink) { DARABONBA_PTR_SET_VALUE(documentShrink_, documentShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateDatasetDocumentShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int64_t> datasetId_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> documentShrink_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
