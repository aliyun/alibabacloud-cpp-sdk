// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETDOCUMENTSREQUEST_HPP_
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
  class ListDatasetDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(ExcludeFields, excludeFields_);
      DARABONBA_PTR_TO_JSON(IncludeFields, includeFields_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(ExcludeFields, excludeFields_);
      DARABONBA_PTR_FROM_JSON(IncludeFields, includeFields_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDatasetDocumentsRequest() = default ;
    ListDatasetDocumentsRequest(const ListDatasetDocumentsRequest &) = default ;
    ListDatasetDocumentsRequest(ListDatasetDocumentsRequest &&) = default ;
    ListDatasetDocumentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetDocumentsRequest() = default ;
    ListDatasetDocumentsRequest& operator=(const ListDatasetDocumentsRequest &) = default ;
    ListDatasetDocumentsRequest& operator=(ListDatasetDocumentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetDescription_ != nullptr
        && this->datasetId_ != nullptr && this->datasetName_ != nullptr && this->docType_ != nullptr && this->excludeFields_ != nullptr && this->includeFields_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->query_ != nullptr && this->status_ != nullptr && this->workspaceId_ != nullptr; };
    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string datasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline ListDatasetDocumentsRequest& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline ListDatasetDocumentsRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline ListDatasetDocumentsRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline ListDatasetDocumentsRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // excludeFields Field Functions 
    bool hasExcludeFields() const { return this->excludeFields_ != nullptr;};
    void deleteExcludeFields() { this->excludeFields_ = nullptr;};
    inline const vector<string> & excludeFields() const { DARABONBA_PTR_GET_CONST(excludeFields_, vector<string>) };
    inline vector<string> excludeFields() { DARABONBA_PTR_GET(excludeFields_, vector<string>) };
    inline ListDatasetDocumentsRequest& setExcludeFields(const vector<string> & excludeFields) { DARABONBA_PTR_SET_VALUE(excludeFields_, excludeFields) };
    inline ListDatasetDocumentsRequest& setExcludeFields(vector<string> && excludeFields) { DARABONBA_PTR_SET_RVALUE(excludeFields_, excludeFields) };


    // includeFields Field Functions 
    bool hasIncludeFields() const { return this->includeFields_ != nullptr;};
    void deleteIncludeFields() { this->includeFields_ = nullptr;};
    inline const vector<string> & includeFields() const { DARABONBA_PTR_GET_CONST(includeFields_, vector<string>) };
    inline vector<string> includeFields() { DARABONBA_PTR_GET(includeFields_, vector<string>) };
    inline ListDatasetDocumentsRequest& setIncludeFields(const vector<string> & includeFields) { DARABONBA_PTR_SET_VALUE(includeFields_, includeFields) };
    inline ListDatasetDocumentsRequest& setIncludeFields(vector<string> && includeFields) { DARABONBA_PTR_SET_RVALUE(includeFields_, includeFields) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetDocumentsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetDocumentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListDatasetDocumentsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDatasetDocumentsRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDatasetDocumentsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> datasetDescription_ = nullptr;
    std::shared_ptr<int64_t> datasetId_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<string> docType_ = nullptr;
    std::shared_ptr<vector<string>> excludeFields_ = nullptr;
    std::shared_ptr<vector<string>> includeFields_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
