// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETFILEMETASSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETFILEMETASSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListDatasetFileMetasShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetFileMetasShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(EndFileUpdateTime, endFileUpdateTime_);
      DARABONBA_PTR_TO_JSON(EndTagUpdateTime, endTagUpdateTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryContentTypeIncludeAny, queryContentTypeIncludeAnyShrink_);
      DARABONBA_PTR_TO_JSON(QueryExpression, queryExpression_);
      DARABONBA_PTR_TO_JSON(QueryFileDir, queryFileDir_);
      DARABONBA_PTR_TO_JSON(QueryFileName, queryFileName_);
      DARABONBA_PTR_TO_JSON(QueryFileTypeIncludeAny, queryFileTypeIncludeAnyShrink_);
      DARABONBA_PTR_TO_JSON(QueryImage, queryImage_);
      DARABONBA_PTR_TO_JSON(QueryTagsExclude, queryTagsExcludeShrink_);
      DARABONBA_PTR_TO_JSON(QueryTagsIncludeAll, queryTagsIncludeAllShrink_);
      DARABONBA_PTR_TO_JSON(QueryTagsIncludeAny, queryTagsIncludeAnyShrink_);
      DARABONBA_PTR_TO_JSON(QueryText, queryText_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartFileUpdateTime, startFileUpdateTime_);
      DARABONBA_PTR_TO_JSON(StartTagUpdateTime, startTagUpdateTime_);
      DARABONBA_PTR_TO_JSON(ThumbnailMode, thumbnailMode_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetFileMetasShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(EndFileUpdateTime, endFileUpdateTime_);
      DARABONBA_PTR_FROM_JSON(EndTagUpdateTime, endTagUpdateTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryContentTypeIncludeAny, queryContentTypeIncludeAnyShrink_);
      DARABONBA_PTR_FROM_JSON(QueryExpression, queryExpression_);
      DARABONBA_PTR_FROM_JSON(QueryFileDir, queryFileDir_);
      DARABONBA_PTR_FROM_JSON(QueryFileName, queryFileName_);
      DARABONBA_PTR_FROM_JSON(QueryFileTypeIncludeAny, queryFileTypeIncludeAnyShrink_);
      DARABONBA_PTR_FROM_JSON(QueryImage, queryImage_);
      DARABONBA_PTR_FROM_JSON(QueryTagsExclude, queryTagsExcludeShrink_);
      DARABONBA_PTR_FROM_JSON(QueryTagsIncludeAll, queryTagsIncludeAllShrink_);
      DARABONBA_PTR_FROM_JSON(QueryTagsIncludeAny, queryTagsIncludeAnyShrink_);
      DARABONBA_PTR_FROM_JSON(QueryText, queryText_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartFileUpdateTime, startFileUpdateTime_);
      DARABONBA_PTR_FROM_JSON(StartTagUpdateTime, startTagUpdateTime_);
      DARABONBA_PTR_FROM_JSON(ThumbnailMode, thumbnailMode_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDatasetFileMetasShrinkRequest() = default ;
    ListDatasetFileMetasShrinkRequest(const ListDatasetFileMetasShrinkRequest &) = default ;
    ListDatasetFileMetasShrinkRequest(ListDatasetFileMetasShrinkRequest &&) = default ;
    ListDatasetFileMetasShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetFileMetasShrinkRequest() = default ;
    ListDatasetFileMetasShrinkRequest& operator=(const ListDatasetFileMetasShrinkRequest &) = default ;
    ListDatasetFileMetasShrinkRequest& operator=(ListDatasetFileMetasShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetVersion_ == nullptr
        && return this->endFileUpdateTime_ == nullptr && return this->endTagUpdateTime_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->order_ == nullptr
        && return this->pageSize_ == nullptr && return this->queryContentTypeIncludeAnyShrink_ == nullptr && return this->queryExpression_ == nullptr && return this->queryFileDir_ == nullptr && return this->queryFileName_ == nullptr
        && return this->queryFileTypeIncludeAnyShrink_ == nullptr && return this->queryImage_ == nullptr && return this->queryTagsExcludeShrink_ == nullptr && return this->queryTagsIncludeAllShrink_ == nullptr && return this->queryTagsIncludeAnyShrink_ == nullptr
        && return this->queryText_ == nullptr && return this->queryType_ == nullptr && return this->scoreThreshold_ == nullptr && return this->sortBy_ == nullptr && return this->startFileUpdateTime_ == nullptr
        && return this->startTagUpdateTime_ == nullptr && return this->thumbnailMode_ == nullptr && return this->topK_ == nullptr && return this->workspaceId_ == nullptr; };
    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string datasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline ListDatasetFileMetasShrinkRequest& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // endFileUpdateTime Field Functions 
    bool hasEndFileUpdateTime() const { return this->endFileUpdateTime_ != nullptr;};
    void deleteEndFileUpdateTime() { this->endFileUpdateTime_ = nullptr;};
    inline string endFileUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(endFileUpdateTime_, "") };
    inline ListDatasetFileMetasShrinkRequest& setEndFileUpdateTime(string endFileUpdateTime) { DARABONBA_PTR_SET_VALUE(endFileUpdateTime_, endFileUpdateTime) };


    // endTagUpdateTime Field Functions 
    bool hasEndTagUpdateTime() const { return this->endTagUpdateTime_ != nullptr;};
    void deleteEndTagUpdateTime() { this->endTagUpdateTime_ = nullptr;};
    inline string endTagUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(endTagUpdateTime_, "") };
    inline ListDatasetFileMetasShrinkRequest& setEndTagUpdateTime(string endTagUpdateTime) { DARABONBA_PTR_SET_VALUE(endTagUpdateTime_, endTagUpdateTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDatasetFileMetasShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDatasetFileMetasShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDatasetFileMetasShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetFileMetasShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryContentTypeIncludeAnyShrink Field Functions 
    bool hasQueryContentTypeIncludeAnyShrink() const { return this->queryContentTypeIncludeAnyShrink_ != nullptr;};
    void deleteQueryContentTypeIncludeAnyShrink() { this->queryContentTypeIncludeAnyShrink_ = nullptr;};
    inline string queryContentTypeIncludeAnyShrink() const { DARABONBA_PTR_GET_DEFAULT(queryContentTypeIncludeAnyShrink_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryContentTypeIncludeAnyShrink(string queryContentTypeIncludeAnyShrink) { DARABONBA_PTR_SET_VALUE(queryContentTypeIncludeAnyShrink_, queryContentTypeIncludeAnyShrink) };


    // queryExpression Field Functions 
    bool hasQueryExpression() const { return this->queryExpression_ != nullptr;};
    void deleteQueryExpression() { this->queryExpression_ = nullptr;};
    inline string queryExpression() const { DARABONBA_PTR_GET_DEFAULT(queryExpression_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryExpression(string queryExpression) { DARABONBA_PTR_SET_VALUE(queryExpression_, queryExpression) };


    // queryFileDir Field Functions 
    bool hasQueryFileDir() const { return this->queryFileDir_ != nullptr;};
    void deleteQueryFileDir() { this->queryFileDir_ = nullptr;};
    inline string queryFileDir() const { DARABONBA_PTR_GET_DEFAULT(queryFileDir_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryFileDir(string queryFileDir) { DARABONBA_PTR_SET_VALUE(queryFileDir_, queryFileDir) };


    // queryFileName Field Functions 
    bool hasQueryFileName() const { return this->queryFileName_ != nullptr;};
    void deleteQueryFileName() { this->queryFileName_ = nullptr;};
    inline string queryFileName() const { DARABONBA_PTR_GET_DEFAULT(queryFileName_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryFileName(string queryFileName) { DARABONBA_PTR_SET_VALUE(queryFileName_, queryFileName) };


    // queryFileTypeIncludeAnyShrink Field Functions 
    bool hasQueryFileTypeIncludeAnyShrink() const { return this->queryFileTypeIncludeAnyShrink_ != nullptr;};
    void deleteQueryFileTypeIncludeAnyShrink() { this->queryFileTypeIncludeAnyShrink_ = nullptr;};
    inline string queryFileTypeIncludeAnyShrink() const { DARABONBA_PTR_GET_DEFAULT(queryFileTypeIncludeAnyShrink_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryFileTypeIncludeAnyShrink(string queryFileTypeIncludeAnyShrink) { DARABONBA_PTR_SET_VALUE(queryFileTypeIncludeAnyShrink_, queryFileTypeIncludeAnyShrink) };


    // queryImage Field Functions 
    bool hasQueryImage() const { return this->queryImage_ != nullptr;};
    void deleteQueryImage() { this->queryImage_ = nullptr;};
    inline string queryImage() const { DARABONBA_PTR_GET_DEFAULT(queryImage_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryImage(string queryImage) { DARABONBA_PTR_SET_VALUE(queryImage_, queryImage) };


    // queryTagsExcludeShrink Field Functions 
    bool hasQueryTagsExcludeShrink() const { return this->queryTagsExcludeShrink_ != nullptr;};
    void deleteQueryTagsExcludeShrink() { this->queryTagsExcludeShrink_ = nullptr;};
    inline string queryTagsExcludeShrink() const { DARABONBA_PTR_GET_DEFAULT(queryTagsExcludeShrink_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryTagsExcludeShrink(string queryTagsExcludeShrink) { DARABONBA_PTR_SET_VALUE(queryTagsExcludeShrink_, queryTagsExcludeShrink) };


    // queryTagsIncludeAllShrink Field Functions 
    bool hasQueryTagsIncludeAllShrink() const { return this->queryTagsIncludeAllShrink_ != nullptr;};
    void deleteQueryTagsIncludeAllShrink() { this->queryTagsIncludeAllShrink_ = nullptr;};
    inline string queryTagsIncludeAllShrink() const { DARABONBA_PTR_GET_DEFAULT(queryTagsIncludeAllShrink_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryTagsIncludeAllShrink(string queryTagsIncludeAllShrink) { DARABONBA_PTR_SET_VALUE(queryTagsIncludeAllShrink_, queryTagsIncludeAllShrink) };


    // queryTagsIncludeAnyShrink Field Functions 
    bool hasQueryTagsIncludeAnyShrink() const { return this->queryTagsIncludeAnyShrink_ != nullptr;};
    void deleteQueryTagsIncludeAnyShrink() { this->queryTagsIncludeAnyShrink_ = nullptr;};
    inline string queryTagsIncludeAnyShrink() const { DARABONBA_PTR_GET_DEFAULT(queryTagsIncludeAnyShrink_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryTagsIncludeAnyShrink(string queryTagsIncludeAnyShrink) { DARABONBA_PTR_SET_VALUE(queryTagsIncludeAnyShrink_, queryTagsIncludeAnyShrink) };


    // queryText Field Functions 
    bool hasQueryText() const { return this->queryText_ != nullptr;};
    void deleteQueryText() { this->queryText_ = nullptr;};
    inline string queryText() const { DARABONBA_PTR_GET_DEFAULT(queryText_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryText(string queryText) { DARABONBA_PTR_SET_VALUE(queryText_, queryText) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline ListDatasetFileMetasShrinkRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline float scoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0.0) };
    inline ListDatasetFileMetasShrinkRequest& setScoreThreshold(float scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDatasetFileMetasShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startFileUpdateTime Field Functions 
    bool hasStartFileUpdateTime() const { return this->startFileUpdateTime_ != nullptr;};
    void deleteStartFileUpdateTime() { this->startFileUpdateTime_ = nullptr;};
    inline string startFileUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(startFileUpdateTime_, "") };
    inline ListDatasetFileMetasShrinkRequest& setStartFileUpdateTime(string startFileUpdateTime) { DARABONBA_PTR_SET_VALUE(startFileUpdateTime_, startFileUpdateTime) };


    // startTagUpdateTime Field Functions 
    bool hasStartTagUpdateTime() const { return this->startTagUpdateTime_ != nullptr;};
    void deleteStartTagUpdateTime() { this->startTagUpdateTime_ = nullptr;};
    inline string startTagUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(startTagUpdateTime_, "") };
    inline ListDatasetFileMetasShrinkRequest& setStartTagUpdateTime(string startTagUpdateTime) { DARABONBA_PTR_SET_VALUE(startTagUpdateTime_, startTagUpdateTime) };


    // thumbnailMode Field Functions 
    bool hasThumbnailMode() const { return this->thumbnailMode_ != nullptr;};
    void deleteThumbnailMode() { this->thumbnailMode_ = nullptr;};
    inline string thumbnailMode() const { DARABONBA_PTR_GET_DEFAULT(thumbnailMode_, "") };
    inline ListDatasetFileMetasShrinkRequest& setThumbnailMode(string thumbnailMode) { DARABONBA_PTR_SET_VALUE(thumbnailMode_, thumbnailMode) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t topK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline ListDatasetFileMetasShrinkRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDatasetFileMetasShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The dataset version.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetVersion_ = nullptr;
    // The update time range to query. The end time. The time follows the ISO 8601 standard. This parameter is valid only when QueryType is set to TAG.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> endFileUpdateTime_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> endTagUpdateTime_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token.
    // 
    // >  If you do not configure this parameter, the data on the first page is returned. A return value other than Null of this parameter indicates that not all entries have been returned. You can use this value as an input parameter to obtain entries on the next page. The value Null indicates that all query results have been returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The order in which the entries are sorted by the specific field on the returned page. This parameter must be used together with SortBy. Default value: ASC.
    // 
    // *   ASC
    // *   DESC
    std::shared_ptr<string> order_ = nullptr;
    // The number of entries per page. Default value: 10. Maximum value: 1000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> queryContentTypeIncludeAnyShrink_ = nullptr;
    std::shared_ptr<string> queryExpression_ = nullptr;
    std::shared_ptr<string> queryFileDir_ = nullptr;
    std::shared_ptr<string> queryFileName_ = nullptr;
    std::shared_ptr<string> queryFileTypeIncludeAnyShrink_ = nullptr;
    std::shared_ptr<string> queryImage_ = nullptr;
    std::shared_ptr<string> queryTagsExcludeShrink_ = nullptr;
    std::shared_ptr<string> queryTagsIncludeAllShrink_ = nullptr;
    std::shared_ptr<string> queryTagsIncludeAnyShrink_ = nullptr;
    // The text content to be queried.
    std::shared_ptr<string> queryText_ = nullptr;
    // The retrieval type.
    // 
    // *   TAG (default)
    // *   VECTOR
    std::shared_ptr<string> queryType_ = nullptr;
    // The similarity score. Only dataset files whose similarity score is greater than the value of ScoreThreshold are returned. This parameter is valid only when QueryType is set to VECTOR.
    std::shared_ptr<float> scoreThreshold_ = nullptr;
    // The field used to sort the results. Default value: GmtCreateTime. Valid values:
    // 
    // *   FileCreateTime (default): The results are sorted by the time when the file is created.
    // *   FileUpdateTime: The results are sorted by the time when the file is last modified.
    std::shared_ptr<string> sortBy_ = nullptr;
    // The update time range to query. The start time. The time follows the ISO 8601 standard. This parameter is valid only when QueryType is set to TAG.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> startFileUpdateTime_ = nullptr;
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    std::shared_ptr<string> startTagUpdateTime_ = nullptr;
    std::shared_ptr<string> thumbnailMode_ = nullptr;
    // The number of search results to return. A maximum of Top K search results can be returned. This parameter is valid only when QueryType is set to VECTOR.
    std::shared_ptr<int32_t> topK_ = nullptr;
    // The ID of the workspace to which the dataset belongs. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
