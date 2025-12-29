// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATASETDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATASETDOCUMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SearchDatasetDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDatasetDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Extend1, extend1_);
      DARABONBA_PTR_TO_JSON(IncludeContent, includeContent_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDatasetDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
      DARABONBA_PTR_FROM_JSON(IncludeContent, includeContent_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SearchDatasetDocumentsRequest() = default ;
    SearchDatasetDocumentsRequest(const SearchDatasetDocumentsRequest &) = default ;
    SearchDatasetDocumentsRequest(SearchDatasetDocumentsRequest &&) = default ;
    SearchDatasetDocumentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDatasetDocumentsRequest() = default ;
    SearchDatasetDocumentsRequest& operator=(const SearchDatasetDocumentsRequest &) = default ;
    SearchDatasetDocumentsRequest& operator=(SearchDatasetDocumentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetId_ == nullptr
        && this->datasetName_ == nullptr && this->extend1_ == nullptr && this->includeContent_ == nullptr && this->pageSize_ == nullptr && this->query_ == nullptr
        && this->workspaceId_ == nullptr; };
    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline SearchDatasetDocumentsRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline SearchDatasetDocumentsRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // extend1 Field Functions 
    bool hasExtend1() const { return this->extend1_ != nullptr;};
    void deleteExtend1() { this->extend1_ = nullptr;};
    inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
    inline SearchDatasetDocumentsRequest& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


    // includeContent Field Functions 
    bool hasIncludeContent() const { return this->includeContent_ != nullptr;};
    void deleteIncludeContent() { this->includeContent_ = nullptr;};
    inline bool getIncludeContent() const { DARABONBA_PTR_GET_DEFAULT(includeContent_, false) };
    inline SearchDatasetDocumentsRequest& setIncludeContent(bool includeContent) { DARABONBA_PTR_SET_VALUE(includeContent_, includeContent) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline SearchDatasetDocumentsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchDatasetDocumentsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SearchDatasetDocumentsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<int64_t> datasetId_ {};
    shared_ptr<string> datasetName_ {};
    shared_ptr<string> extend1_ {};
    shared_ptr<bool> includeContent_ {};
    shared_ptr<string> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
