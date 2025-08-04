// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDATASETDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDATASETDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddDatasetDocumentRequestDocument.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AddDatasetDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDatasetDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Document, document_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddDatasetDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Document, document_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AddDatasetDocumentRequest() = default ;
    AddDatasetDocumentRequest(const AddDatasetDocumentRequest &) = default ;
    AddDatasetDocumentRequest(AddDatasetDocumentRequest &&) = default ;
    AddDatasetDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDatasetDocumentRequest() = default ;
    AddDatasetDocumentRequest& operator=(const AddDatasetDocumentRequest &) = default ;
    AddDatasetDocumentRequest& operator=(AddDatasetDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetId_ != nullptr
        && this->datasetName_ != nullptr && this->document_ != nullptr && this->workspaceId_ != nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline AddDatasetDocumentRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline AddDatasetDocumentRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline const AddDatasetDocumentRequestDocument & document() const { DARABONBA_PTR_GET_CONST(document_, AddDatasetDocumentRequestDocument) };
    inline AddDatasetDocumentRequestDocument document() { DARABONBA_PTR_GET(document_, AddDatasetDocumentRequestDocument) };
    inline AddDatasetDocumentRequest& setDocument(const AddDatasetDocumentRequestDocument & document) { DARABONBA_PTR_SET_VALUE(document_, document) };
    inline AddDatasetDocumentRequest& setDocument(AddDatasetDocumentRequestDocument && document) { DARABONBA_PTR_SET_RVALUE(document_, document) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AddDatasetDocumentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<int64_t> datasetId_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<AddDatasetDocumentRequestDocument> document_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
