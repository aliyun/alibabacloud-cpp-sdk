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
      DARABONBA_PTR_TO_JSON(CategoryUuids, categoryUuids_);
      DARABONBA_PTR_TO_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_TO_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_TO_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DocIds, docIds_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(DocUuids, docUuids_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ExcludeFields, excludeFields_);
      DARABONBA_PTR_TO_JSON(Extend1, extend1_);
      DARABONBA_PTR_TO_JSON(Extend2, extend2_);
      DARABONBA_PTR_TO_JSON(Extend3, extend3_);
      DARABONBA_PTR_TO_JSON(IncludeFields, includeFields_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetDocumentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryUuids, categoryUuids_);
      DARABONBA_PTR_FROM_JSON(CreateTimeEnd, createTimeEnd_);
      DARABONBA_PTR_FROM_JSON(CreateTimeStart, createTimeStart_);
      DARABONBA_PTR_FROM_JSON(DatasetDescription, datasetDescription_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DocIds, docIds_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(DocUuids, docUuids_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ExcludeFields, excludeFields_);
      DARABONBA_PTR_FROM_JSON(Extend1, extend1_);
      DARABONBA_PTR_FROM_JSON(Extend2, extend2_);
      DARABONBA_PTR_FROM_JSON(Extend3, extend3_);
      DARABONBA_PTR_FROM_JSON(IncludeFields, includeFields_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
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
    virtual bool empty() const override { return this->categoryUuids_ == nullptr
        && this->createTimeEnd_ == nullptr && this->createTimeStart_ == nullptr && this->datasetDescription_ == nullptr && this->datasetId_ == nullptr && this->datasetName_ == nullptr
        && this->docIds_ == nullptr && this->docType_ == nullptr && this->docUuids_ == nullptr && this->endTime_ == nullptr && this->excludeFields_ == nullptr
        && this->extend1_ == nullptr && this->extend2_ == nullptr && this->extend3_ == nullptr && this->includeFields_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->query_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->title_ == nullptr && this->workspaceId_ == nullptr; };
    // categoryUuids Field Functions 
    bool hasCategoryUuids() const { return this->categoryUuids_ != nullptr;};
    void deleteCategoryUuids() { this->categoryUuids_ = nullptr;};
    inline const vector<string> & getCategoryUuids() const { DARABONBA_PTR_GET_CONST(categoryUuids_, vector<string>) };
    inline vector<string> getCategoryUuids() { DARABONBA_PTR_GET(categoryUuids_, vector<string>) };
    inline ListDatasetDocumentsRequest& setCategoryUuids(const vector<string> & categoryUuids) { DARABONBA_PTR_SET_VALUE(categoryUuids_, categoryUuids) };
    inline ListDatasetDocumentsRequest& setCategoryUuids(vector<string> && categoryUuids) { DARABONBA_PTR_SET_RVALUE(categoryUuids_, categoryUuids) };


    // createTimeEnd Field Functions 
    bool hasCreateTimeEnd() const { return this->createTimeEnd_ != nullptr;};
    void deleteCreateTimeEnd() { this->createTimeEnd_ = nullptr;};
    inline int64_t getCreateTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(createTimeEnd_, 0L) };
    inline ListDatasetDocumentsRequest& setCreateTimeEnd(int64_t createTimeEnd) { DARABONBA_PTR_SET_VALUE(createTimeEnd_, createTimeEnd) };


    // createTimeStart Field Functions 
    bool hasCreateTimeStart() const { return this->createTimeStart_ != nullptr;};
    void deleteCreateTimeStart() { this->createTimeStart_ = nullptr;};
    inline int64_t getCreateTimeStart() const { DARABONBA_PTR_GET_DEFAULT(createTimeStart_, 0L) };
    inline ListDatasetDocumentsRequest& setCreateTimeStart(int64_t createTimeStart) { DARABONBA_PTR_SET_VALUE(createTimeStart_, createTimeStart) };


    // datasetDescription Field Functions 
    bool hasDatasetDescription() const { return this->datasetDescription_ != nullptr;};
    void deleteDatasetDescription() { this->datasetDescription_ = nullptr;};
    inline string getDatasetDescription() const { DARABONBA_PTR_GET_DEFAULT(datasetDescription_, "") };
    inline ListDatasetDocumentsRequest& setDatasetDescription(string datasetDescription) { DARABONBA_PTR_SET_VALUE(datasetDescription_, datasetDescription) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline int64_t getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, 0L) };
    inline ListDatasetDocumentsRequest& setDatasetId(int64_t datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline ListDatasetDocumentsRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // docIds Field Functions 
    bool hasDocIds() const { return this->docIds_ != nullptr;};
    void deleteDocIds() { this->docIds_ = nullptr;};
    inline const vector<string> & getDocIds() const { DARABONBA_PTR_GET_CONST(docIds_, vector<string>) };
    inline vector<string> getDocIds() { DARABONBA_PTR_GET(docIds_, vector<string>) };
    inline ListDatasetDocumentsRequest& setDocIds(const vector<string> & docIds) { DARABONBA_PTR_SET_VALUE(docIds_, docIds) };
    inline ListDatasetDocumentsRequest& setDocIds(vector<string> && docIds) { DARABONBA_PTR_SET_RVALUE(docIds_, docIds) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string getDocType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline ListDatasetDocumentsRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // docUuids Field Functions 
    bool hasDocUuids() const { return this->docUuids_ != nullptr;};
    void deleteDocUuids() { this->docUuids_ = nullptr;};
    inline const vector<string> & getDocUuids() const { DARABONBA_PTR_GET_CONST(docUuids_, vector<string>) };
    inline vector<string> getDocUuids() { DARABONBA_PTR_GET(docUuids_, vector<string>) };
    inline ListDatasetDocumentsRequest& setDocUuids(const vector<string> & docUuids) { DARABONBA_PTR_SET_VALUE(docUuids_, docUuids) };
    inline ListDatasetDocumentsRequest& setDocUuids(vector<string> && docUuids) { DARABONBA_PTR_SET_RVALUE(docUuids_, docUuids) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListDatasetDocumentsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // excludeFields Field Functions 
    bool hasExcludeFields() const { return this->excludeFields_ != nullptr;};
    void deleteExcludeFields() { this->excludeFields_ = nullptr;};
    inline const vector<string> & getExcludeFields() const { DARABONBA_PTR_GET_CONST(excludeFields_, vector<string>) };
    inline vector<string> getExcludeFields() { DARABONBA_PTR_GET(excludeFields_, vector<string>) };
    inline ListDatasetDocumentsRequest& setExcludeFields(const vector<string> & excludeFields) { DARABONBA_PTR_SET_VALUE(excludeFields_, excludeFields) };
    inline ListDatasetDocumentsRequest& setExcludeFields(vector<string> && excludeFields) { DARABONBA_PTR_SET_RVALUE(excludeFields_, excludeFields) };


    // extend1 Field Functions 
    bool hasExtend1() const { return this->extend1_ != nullptr;};
    void deleteExtend1() { this->extend1_ = nullptr;};
    inline string getExtend1() const { DARABONBA_PTR_GET_DEFAULT(extend1_, "") };
    inline ListDatasetDocumentsRequest& setExtend1(string extend1) { DARABONBA_PTR_SET_VALUE(extend1_, extend1) };


    // extend2 Field Functions 
    bool hasExtend2() const { return this->extend2_ != nullptr;};
    void deleteExtend2() { this->extend2_ = nullptr;};
    inline string getExtend2() const { DARABONBA_PTR_GET_DEFAULT(extend2_, "") };
    inline ListDatasetDocumentsRequest& setExtend2(string extend2) { DARABONBA_PTR_SET_VALUE(extend2_, extend2) };


    // extend3 Field Functions 
    bool hasExtend3() const { return this->extend3_ != nullptr;};
    void deleteExtend3() { this->extend3_ = nullptr;};
    inline string getExtend3() const { DARABONBA_PTR_GET_DEFAULT(extend3_, "") };
    inline ListDatasetDocumentsRequest& setExtend3(string extend3) { DARABONBA_PTR_SET_VALUE(extend3_, extend3) };


    // includeFields Field Functions 
    bool hasIncludeFields() const { return this->includeFields_ != nullptr;};
    void deleteIncludeFields() { this->includeFields_ = nullptr;};
    inline const vector<string> & getIncludeFields() const { DARABONBA_PTR_GET_CONST(includeFields_, vector<string>) };
    inline vector<string> getIncludeFields() { DARABONBA_PTR_GET(includeFields_, vector<string>) };
    inline ListDatasetDocumentsRequest& setIncludeFields(const vector<string> & includeFields) { DARABONBA_PTR_SET_VALUE(includeFields_, includeFields) };
    inline ListDatasetDocumentsRequest& setIncludeFields(vector<string> && includeFields) { DARABONBA_PTR_SET_RVALUE(includeFields_, includeFields) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDatasetDocumentsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetDocumentsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ListDatasetDocumentsRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDatasetDocumentsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListDatasetDocumentsRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListDatasetDocumentsRequest& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListDatasetDocumentsRequest& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListDatasetDocumentsRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDatasetDocumentsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<string>> categoryUuids_ {};
    shared_ptr<int64_t> createTimeEnd_ {};
    shared_ptr<int64_t> createTimeStart_ {};
    shared_ptr<string> datasetDescription_ {};
    shared_ptr<int64_t> datasetId_ {};
    shared_ptr<string> datasetName_ {};
    shared_ptr<vector<string>> docIds_ {};
    shared_ptr<string> docType_ {};
    shared_ptr<vector<string>> docUuids_ {};
    shared_ptr<int64_t> endTime_ {};
    shared_ptr<vector<string>> excludeFields_ {};
    shared_ptr<string> extend1_ {};
    shared_ptr<string> extend2_ {};
    shared_ptr<string> extend3_ {};
    shared_ptr<vector<string>> includeFields_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> query_ {};
    shared_ptr<int64_t> startTime_ {};
    shared_ptr<int32_t> status_ {};
    shared_ptr<vector<string>> tags_ {};
    shared_ptr<string> title_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
