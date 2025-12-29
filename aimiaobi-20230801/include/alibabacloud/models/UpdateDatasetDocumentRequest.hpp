// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateDatasetDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Document, document_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Document, document_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDatasetDocumentRequest() = default ;
    UpdateDatasetDocumentRequest(const UpdateDatasetDocumentRequest &) = default ;
    UpdateDatasetDocumentRequest(UpdateDatasetDocumentRequest &&) = default ;
    UpdateDatasetDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetDocumentRequest() = default ;
    UpdateDatasetDocumentRequest& operator=(const UpdateDatasetDocumentRequest &) = default ;
    UpdateDatasetDocumentRequest& operator=(UpdateDatasetDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Document : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Document& obj) { 
        DARABONBA_PTR_TO_JSON(DocId, docId_);
        DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Document& obj) { 
        DARABONBA_PTR_FROM_JSON(DocId, docId_);
        DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
      };
      Document() = default ;
      Document(const Document &) = default ;
      Document(Document &&) = default ;
      Document(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Document() = default ;
      Document& operator=(const Document &) = default ;
      Document& operator=(Document &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->title_ == nullptr; };
      // docId Field Functions 
      bool hasDocId() const { return this->docId_ != nullptr;};
      void deleteDocId() { this->docId_ = nullptr;};
      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
      inline Document& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


      // docUuid Field Functions 
      bool hasDocUuid() const { return this->docUuid_ != nullptr;};
      void deleteDocUuid() { this->docUuid_ = nullptr;};
      inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
      inline Document& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Document& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> docId_ {};
      shared_ptr<string> docUuid_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->datasetName_ == nullptr && this->document_ == nullptr && this->workspaceId_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline UpdateDatasetDocumentRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateDatasetDocumentRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // document Field Functions 
    bool hasDocument() const { return this->document_ != nullptr;};
    void deleteDocument() { this->document_ = nullptr;};
    inline const UpdateDatasetDocumentRequest::Document & getDocument() const { DARABONBA_PTR_GET_CONST(document_, UpdateDatasetDocumentRequest::Document) };
    inline UpdateDatasetDocumentRequest::Document getDocument() { DARABONBA_PTR_GET(document_, UpdateDatasetDocumentRequest::Document) };
    inline UpdateDatasetDocumentRequest& setDocument(const UpdateDatasetDocumentRequest::Document & document) { DARABONBA_PTR_SET_VALUE(document_, document) };
    inline UpdateDatasetDocumentRequest& setDocument(UpdateDatasetDocumentRequest::Document && document) { DARABONBA_PTR_SET_RVALUE(document_, document) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateDatasetDocumentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int64_t> datasetId_ {};
    shared_ptr<string> datasetName_ {};
    // This parameter is required.
    shared_ptr<UpdateDatasetDocumentRequest::Document> document_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
