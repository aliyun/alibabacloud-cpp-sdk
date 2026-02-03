// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHDATASETDOCUMENTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHDATASETDOCUMENTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SearchDatasetDocumentsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchDatasetDocumentsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryUuids, categoryUuidsShrink_);
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DocIds, docIdsShrink_);
      DARABONBA_PTR_TO_JSON(DocTypes, docTypesShrink_);
      DARABONBA_PTR_TO_JSON(DocUuids, docUuidsShrink_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Extend1, extend1_);
      DARABONBA_PTR_TO_JSON(Extend2, extend2_);
      DARABONBA_PTR_TO_JSON(Extend3, extend3_);
      DARABONBA_PTR_TO_JSON(IncludeContent, includeContent_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchDatasetDocumentsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryUuids, categoryUuidsShrink_);
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DocIds, docIdsShrink_);
      DARABONBA_PTR_FROM_JSON(DocTypes, docTypesShrink_);
      DARABONBA_PTR_FROM_JSON(DocUuids, docUuidsShrink_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
      DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
      DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
      DARABONBA_PTR_FROM_JSON(IncludeContent, includeContent_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SearchDatasetDocumentsShrinkRequest() = default ;
    SearchDatasetDocumentsShrinkRequest(const SearchDatasetDocumentsShrinkRequest &) = default ;
    SearchDatasetDocumentsShrinkRequest(SearchDatasetDocumentsShrinkRequest &&) = default ;
    SearchDatasetDocumentsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchDatasetDocumentsShrinkRequest() = default ;
    SearchDatasetDocumentsShrinkRequest& operator=(const SearchDatasetDocumentsShrinkRequest &) = default ;
    SearchDatasetDocumentsShrinkRequest& operator=(SearchDatasetDocumentsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryUuidsShrink_ == nullptr
        && this->createTimeEnd_ == nullptr && this->createTimeStart_ == nullptr && this->datasetId_ == nullptr && this->datasetName_ == nullptr && this->docIdsShrink_ == nullptr
        && this->docTypesShrink_ == nullptr && this->docUuidsShrink_ == nullptr && this->endTime_ == nullptr && this->extend1_ == nullptr && this->extend2_ == nullptr
        && this->extend3_ == nullptr && this->includeContent_ == nullptr && this->pageSize_ == nullptr && this->query_ == nullptr && this->searchMode_ == nullptr
        && this->startTime_ == nullptr && this->tagsShrink_ == nullptr && this->workspaceId_ == nullptr; };
    // categoryUuidsShrink Field Functions 
    bool hasCategoryUuidsShrink() const { return this->categoryUuidsShrink_ != nullptr;};
    void deleteCategoryUuidsShrink() { this->categoryUuidsShrink_ = nullptr;};
    inline string getCategoryUuidsShrink() const { DARABONBA_PTR_GET_DEFAULT(categoryUuidsShrink_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setCategoryUuidsShrink(string categoryUuidsShrink) { DARABONBA_PTR_SET_VALUE(categoryUuidsShrink_, categoryUuidsShrink) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline int64_t getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, 0L) };
    inline SearchDatasetDocumentsShrinkRequest& setCreateTimeEnd(int64_t createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline int64_t getCreateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, 0L) };
    inline SearchDatasetDocumentsShrinkRequest& setCreateTimeStart(int64_t createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline SearchDatasetDocumentsShrinkRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // docIdsShrink Field Functions 
    bool hasDocIdsShrink() const { return this->docIdsShrink_ != nullptr;};
    void deleteDocIdsShrink() { this->docIdsShrink_ = nullptr;};
    inline string getDocIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(docIdsShrink_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setDocIdsShrink(string docIdsShrink) { DARABONBA_PTR_SET_VALUE(docIdsShrink_, docIdsShrink) };


    // docTypesShrink Field Functions 
    bool hasDocTypesShrink() const { return this->docTypesShrink_ != nullptr;};
    void deleteDocTypesShrink() { this->docTypesShrink_ = nullptr;};
    inline string getDocTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(docTypesShrink_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setDocTypesShrink(string docTypesShrink) { DARABONBA_PTR_SET_VALUE(docTypesShrink_, docTypesShrink) };


    // docUuidsShrink Field Functions 
    bool hasDocUuidsShrink() const { return this->docUuidsShrink_ != nullptr;};
    void deleteDocUuidsShrink() { this->docUuidsShrink_ = nullptr;};
    inline string getDocUuidsShrink() const { DARABONBA_PTR_GET_DEFAULT(docUuidsShrink_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setDocUuidsShrink(string docUuidsShrink) { DARABONBA_PTR_SET_VALUE(docUuidsShrink_, docUuidsShrink) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline SearchDatasetDocumentsShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // extend1 Field Functions 
    bool hasExtend1() const { return this->extend1_ != nullptr;};
    void deleteExtend1() { this->extend1_ = nullptr;};
    inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


    // extend2 Field Functions 
    bool hasExtend2() const { return this->extend2_ != nullptr;};
    void deleteExtend2() { this->extend2_ = nullptr;};
    inline string getExtend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


    // extend3 Field Functions 
    bool hasExtend3() const { return this->extend3_ != nullptr;};
    void deleteExtend3() { this->extend3_ = nullptr;};
    inline string getExtend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


    // includeContent Field Functions 
    bool hasIncludeContent() const { return this->includeContent_ != nullptr;};
    void deleteIncludeContent() { this->includeContent_ = nullptr;};
    inline bool getIncludeContent() const { DARABONBA_PTR_GET_DEFAULT(includeContent_, false) };
    inline SearchDatasetDocumentsShrinkRequest& setIncludeContent(bool includeContent) { DARABONBA_PTR_SET_VALUE(includeContent_, includeContent) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline SearchDatasetDocumentsShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string getTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SearchDatasetDocumentsShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> categoryUuidsShrink_ {};
    shared_ptr<int64_t> createTimeEnd_ {};
    shared_ptr<int64_t> createTimeStart_ {};
    shared_ptr<int64_t> datasetId_ {};
    shared_ptr<string> datasetName_ {};
    shared_ptr<string> docIdsShrink_ {};
    shared_ptr<string> docTypesShrink_ {};
    shared_ptr<string> docUuidsShrink_ {};
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
    shared_ptr<string> tagsShrink_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
