// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATASETDOCUMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATASETDOCUMENTSREQUEST_HPP_
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
  class SearchDatasetDocumentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDatasetDocumentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryUuids, categoryUuids_);
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DocIds, docIds_);
      DARABONBA_PTR_TO_JSON(DocTypes, docTypes_);
      DARABONBA_PTR_TO_JSON(DocUuids, docUuids_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Extend1, extend1_);
      DARABONBA_PTR_TO_JSON(Extend2, extend2_);
      DARABONBA_PTR_TO_JSON(Extend3, extend3_);
      DARABONBA_PTR_TO_JSON(IncludeContent, includeContent_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDatasetDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryUuids, categoryUuids_);
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DocIds, docIds_);
      DARABONBA_PTR_FROM_JSON(DocTypes, docTypes_);
      DARABONBA_PTR_FROM_JSON(DocUuids, docUuids_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
      DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
      DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
      DARABONBA_PTR_FROM_JSON(IncludeContent, includeContent_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
    virtual bool empty() const override { return this->categoryUuids_ == nullptr
        && this->createTimeEnd_ == nullptr && this->createTimeStart_ == nullptr && this->datasetId_ == nullptr && this->datasetName_ == nullptr && this->docIds_ == nullptr
        && this->docTypes_ == nullptr && this->docUuids_ == nullptr && this->endTime_ == nullptr && this->extend1_ == nullptr && this->extend2_ == nullptr
        && this->extend3_ == nullptr && this->includeContent_ == nullptr && this->pageSize_ == nullptr && this->query_ == nullptr && this->searchMode_ == nullptr
        && this->startTime_ == nullptr && this->tags_ == nullptr && this->workspaceId_ == nullptr; };
    // categoryUuids Field Functions 
    bool hasCategoryUuids() const { return this->categoryUuids_ != nullptr;};
    void deleteCategoryUuids() { this->categoryUuids_ = nullptr;};
    inline const vector<string> & getCategoryUuids() const { DARABONBA_PTR_GET_CONST(categoryUuids_, vector<string>) };
    inline vector<string> getCategoryUuids() { DARABONBA_PTR_GET(categoryUuids_, vector<string>) };
    inline SearchDatasetDocumentsRequest& setCategoryUuids(const vector<string> & categoryUuids) { DARABONBA_PTR_SET_VALUE(categoryUuids_, categoryUuids) };
    inline SearchDatasetDocumentsRequest& setCategoryUuids(vector<string> && categoryUuids) { DARABONBA_PTR_SET_RVALUE(categoryUuids_, categoryUuids) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline int64_t getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, 0L) };
    inline SearchDatasetDocumentsRequest& setCreateTimeEnd(int64_t createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline int64_t getCreateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, 0L) };
    inline SearchDatasetDocumentsRequest& setCreateTimeStart(int64_t createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


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


    // docIds Field Functions 
    bool hasDocIds() const { return this->docIds_ != nullptr;};
    void deleteDocIds() { this->docIds_ = nullptr;};
    inline const vector<string> & getDocIds() const { DARABONBA_PTR_GET_CONST(docIds_, vector<string>) };
    inline vector<string> getDocIds() { DARABONBA_PTR_GET(docIds_, vector<string>) };
    inline SearchDatasetDocumentsRequest& setDocIds(const vector<string> & docIds) { DARABONBA_PTR_SET_VALUE(docIds_, docIds) };
    inline SearchDatasetDocumentsRequest& setDocIds(vector<string> && docIds) { DARABONBA_PTR_SET_RVALUE(docIds_, docIds) };


    // docTypes Field Functions 
    bool hasDocTypes() const { return this->docTypes_ != nullptr;};
    void deleteDocTypes() { this->docTypes_ = nullptr;};
    inline const vector<string> & getDocTypes() const { DARABONBA_PTR_GET_CONST(docTypes_, vector<string>) };
    inline vector<string> getDocTypes() { DARABONBA_PTR_GET(docTypes_, vector<string>) };
    inline SearchDatasetDocumentsRequest& setDocTypes(const vector<string> & docTypes) { DARABONBA_PTR_SET_VALUE(docTypes_, docTypes) };
    inline SearchDatasetDocumentsRequest& setDocTypes(vector<string> && docTypes) { DARABONBA_PTR_SET_RVALUE(docTypes_, docTypes) };


    // docUuids Field Functions 
    bool hasDocUuids() const { return this->docUuids_ != nullptr;};
    void deleteDocUuids() { this->docUuids_ = nullptr;};
    inline const vector<string> & getDocUuids() const { DARABONBA_PTR_GET_CONST(docUuids_, vector<string>) };
    inline vector<string> getDocUuids() { DARABONBA_PTR_GET(docUuids_, vector<string>) };
    inline SearchDatasetDocumentsRequest& setDocUuids(const vector<string> & docUuids) { DARABONBA_PTR_SET_VALUE(docUuids_, docUuids) };
    inline SearchDatasetDocumentsRequest& setDocUuids(vector<string> && docUuids) { DARABONBA_PTR_SET_RVALUE(docUuids_, docUuids) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SearchDatasetDocumentsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // extend1 Field Functions 
    bool hasExtend1() const { return this->extend1_ != nullptr;};
    void deleteExtend1() { this->extend1_ = nullptr;};
    inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
    inline SearchDatasetDocumentsRequest& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


    // extend2 Field Functions 
    bool hasExtend2() const { return this->extend2_ != nullptr;};
    void deleteExtend2() { this->extend2_ = nullptr;};
    inline string getExtend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
    inline SearchDatasetDocumentsRequest& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


    // extend3 Field Functions 
    bool hasExtend3() const { return this->extend3_ != nullptr;};
    void deleteExtend3() { this->extend3_ = nullptr;};
    inline string getExtend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
    inline SearchDatasetDocumentsRequest& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


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


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline SearchDatasetDocumentsRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SearchDatasetDocumentsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline SearchDatasetDocumentsRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline SearchDatasetDocumentsRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SearchDatasetDocumentsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<string>> categoryUuids_ {};
    shared_ptr<int64_t> createTimeEnd_ {};
    shared_ptr<int64_t> createTimeStart_ {};
    shared_ptr<int64_t> datasetId_ {};
    shared_ptr<string> datasetName_ {};
    shared_ptr<vector<string>> docIds_ {};
    shared_ptr<vector<string>> docTypes_ {};
    shared_ptr<vector<string>> docUuids_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<string> extend1_ {};
    shared_ptr<string> extend2_ {};
    shared_ptr<string> extend3_ {};
    shared_ptr<bool> includeContent_ {};
    shared_ptr<string> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<string> searchMode_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<vector<string>> tags_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
