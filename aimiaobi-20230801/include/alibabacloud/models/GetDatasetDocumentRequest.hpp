// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETDOCUMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETDOCUMENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetDatasetDocumentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetDocumentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_TO_JSON(IncludeFields, includeFields_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetDocumentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_FROM_JSON(IncludeFields, includeFields_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetDatasetDocumentRequest() = default ;
    GetDatasetDocumentRequest(const GetDatasetDocumentRequest &) = default ;
    GetDatasetDocumentRequest(GetDatasetDocumentRequest &&) = default ;
    GetDatasetDocumentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetDocumentRequest() = default ;
    GetDatasetDocumentRequest& operator=(const GetDatasetDocumentRequest &) = default ;
    GetDatasetDocumentRequest& operator=(GetDatasetDocumentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->datasetName_ == nullptr && this->docId_ == nullptr && this->docUuid_ == nullptr && this->includeFields_ == nullptr && this->workspaceId_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline GetDatasetDocumentRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline GetDatasetDocumentRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GetDatasetDocumentRequest& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline GetDatasetDocumentRequest& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


    // includeFields Field Functions 
    bool hasIncludeFields() const { return this->includeFields_ != nullptr;};
    void deleteIncludeFields() { this->includeFields_ = nullptr;};
    inline const vector<string> & getIncludeFields() const { DARABONBA_PTR_GET_CONST(includeFields_, vector<string>) };
    inline vector<string> getIncludeFields() { DARABONBA_PTR_GET(includeFields_, vector<string>) };
    inline GetDatasetDocumentRequest& setIncludeFields(const vector<string> & includeFields) { DARABONBA_PTR_SET_VALUE(includeFields_, includeFields) };
    inline GetDatasetDocumentRequest& setIncludeFields(vector<string> && includeFields) { DARABONBA_PTR_SET_RVALUE(includeFields_, includeFields) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetDatasetDocumentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int64_t> datasetId_ {};
    shared_ptr<string> datasetName_ {};
    shared_ptr<string> docId_ {};
    shared_ptr<string> docUuid_ {};
    shared_ptr<vector<string>> includeFields_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
