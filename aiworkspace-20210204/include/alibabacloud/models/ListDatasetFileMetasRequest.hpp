// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASETFILEMETASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASETFILEMETASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListDatasetFileMetasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDatasetFileMetasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetFileMetaIds, datasetFileMetaIds_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(EndFileUpdateTime, endFileUpdateTime_);
      DARABONBA_PTR_TO_JSON(EndTagUpdateTime, endTagUpdateTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryContentTypeIncludeAny, queryContentTypeIncludeAny_);
      DARABONBA_PTR_TO_JSON(QueryExpression, queryExpression_);
      DARABONBA_PTR_TO_JSON(QueryFileDir, queryFileDir_);
      DARABONBA_PTR_TO_JSON(QueryFileName, queryFileName_);
      DARABONBA_PTR_TO_JSON(QueryFileTypeIncludeAny, queryFileTypeIncludeAny_);
      DARABONBA_PTR_TO_JSON(QueryImage, queryImage_);
      DARABONBA_PTR_TO_JSON(QueryTagsExclude, queryTagsExclude_);
      DARABONBA_PTR_TO_JSON(QueryTagsIncludeAll, queryTagsIncludeAll_);
      DARABONBA_PTR_TO_JSON(QueryTagsIncludeAny, queryTagsIncludeAny_);
      DARABONBA_PTR_TO_JSON(QueryText, queryText_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(QueryVideo, queryVideo_);
      DARABONBA_PTR_TO_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(StartFileUpdateTime, startFileUpdateTime_);
      DARABONBA_PTR_TO_JSON(StartTagUpdateTime, startTagUpdateTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(ThumbnailMode, thumbnailMode_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDatasetFileMetasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetFileMetaIds, datasetFileMetaIds_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(EndFileUpdateTime, endFileUpdateTime_);
      DARABONBA_PTR_FROM_JSON(EndTagUpdateTime, endTagUpdateTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryContentTypeIncludeAny, queryContentTypeIncludeAny_);
      DARABONBA_PTR_FROM_JSON(QueryExpression, queryExpression_);
      DARABONBA_PTR_FROM_JSON(QueryFileDir, queryFileDir_);
      DARABONBA_PTR_FROM_JSON(QueryFileName, queryFileName_);
      DARABONBA_PTR_FROM_JSON(QueryFileTypeIncludeAny, queryFileTypeIncludeAny_);
      DARABONBA_PTR_FROM_JSON(QueryImage, queryImage_);
      DARABONBA_PTR_FROM_JSON(QueryTagsExclude, queryTagsExclude_);
      DARABONBA_PTR_FROM_JSON(QueryTagsIncludeAll, queryTagsIncludeAll_);
      DARABONBA_PTR_FROM_JSON(QueryTagsIncludeAny, queryTagsIncludeAny_);
      DARABONBA_PTR_FROM_JSON(QueryText, queryText_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(QueryVideo, queryVideo_);
      DARABONBA_PTR_FROM_JSON(ScoreThreshold, scoreThreshold_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(StartFileUpdateTime, startFileUpdateTime_);
      DARABONBA_PTR_FROM_JSON(StartTagUpdateTime, startTagUpdateTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(ThumbnailMode, thumbnailMode_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListDatasetFileMetasRequest() = default ;
    ListDatasetFileMetasRequest(const ListDatasetFileMetasRequest &) = default ;
    ListDatasetFileMetasRequest(ListDatasetFileMetasRequest &&) = default ;
    ListDatasetFileMetasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDatasetFileMetasRequest() = default ;
    ListDatasetFileMetasRequest& operator=(const ListDatasetFileMetasRequest &) = default ;
    ListDatasetFileMetasRequest& operator=(ListDatasetFileMetasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetFileMetaIds_ == nullptr
        && this->datasetVersion_ == nullptr && this->endFileUpdateTime_ == nullptr && this->endTagUpdateTime_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->order_ == nullptr && this->pageSize_ == nullptr && this->queryContentTypeIncludeAny_ == nullptr && this->queryExpression_ == nullptr && this->queryFileDir_ == nullptr
        && this->queryFileName_ == nullptr && this->queryFileTypeIncludeAny_ == nullptr && this->queryImage_ == nullptr && this->queryTagsExclude_ == nullptr && this->queryTagsIncludeAll_ == nullptr
        && this->queryTagsIncludeAny_ == nullptr && this->queryText_ == nullptr && this->queryType_ == nullptr && this->queryVideo_ == nullptr && this->scoreThreshold_ == nullptr
        && this->sortBy_ == nullptr && this->startFileUpdateTime_ == nullptr && this->startTagUpdateTime_ == nullptr && this->status_ == nullptr && this->thumbnailMode_ == nullptr
        && this->topK_ == nullptr && this->workspaceId_ == nullptr; };
    // datasetFileMetaIds Field Functions 
    bool hasDatasetFileMetaIds() const { return this->datasetFileMetaIds_ != nullptr;};
    void deleteDatasetFileMetaIds() { this->datasetFileMetaIds_ = nullptr;};
    inline const vector<string> & getDatasetFileMetaIds() const { DARABONBA_PTR_GET_CONST(datasetFileMetaIds_, vector<string>) };
    inline vector<string> getDatasetFileMetaIds() { DARABONBA_PTR_GET(datasetFileMetaIds_, vector<string>) };
    inline ListDatasetFileMetasRequest& setDatasetFileMetaIds(const vector<string> & datasetFileMetaIds) { DARABONBA_PTR_SET_VALUE(datasetFileMetaIds_, datasetFileMetaIds) };
    inline ListDatasetFileMetasRequest& setDatasetFileMetaIds(vector<string> && datasetFileMetaIds) { DARABONBA_PTR_SET_RVALUE(datasetFileMetaIds_, datasetFileMetaIds) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string getDatasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline ListDatasetFileMetasRequest& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // endFileUpdateTime Field Functions 
    bool hasEndFileUpdateTime() const { return this->endFileUpdateTime_ != nullptr;};
    void deleteEndFileUpdateTime() { this->endFileUpdateTime_ = nullptr;};
    inline string getEndFileUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(endFileUpdateTime_, "") };
    inline ListDatasetFileMetasRequest& setEndFileUpdateTime(string endFileUpdateTime) { DARABONBA_PTR_SET_VALUE(endFileUpdateTime_, endFileUpdateTime) };


    // endTagUpdateTime Field Functions 
    bool hasEndTagUpdateTime() const { return this->endTagUpdateTime_ != nullptr;};
    void deleteEndTagUpdateTime() { this->endTagUpdateTime_ = nullptr;};
    inline string getEndTagUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(endTagUpdateTime_, "") };
    inline ListDatasetFileMetasRequest& setEndTagUpdateTime(string endTagUpdateTime) { DARABONBA_PTR_SET_VALUE(endTagUpdateTime_, endTagUpdateTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDatasetFileMetasRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDatasetFileMetasRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListDatasetFileMetasRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDatasetFileMetasRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryContentTypeIncludeAny Field Functions 
    bool hasQueryContentTypeIncludeAny() const { return this->queryContentTypeIncludeAny_ != nullptr;};
    void deleteQueryContentTypeIncludeAny() { this->queryContentTypeIncludeAny_ = nullptr;};
    inline const vector<string> & getQueryContentTypeIncludeAny() const { DARABONBA_PTR_GET_CONST(queryContentTypeIncludeAny_, vector<string>) };
    inline vector<string> getQueryContentTypeIncludeAny() { DARABONBA_PTR_GET(queryContentTypeIncludeAny_, vector<string>) };
    inline ListDatasetFileMetasRequest& setQueryContentTypeIncludeAny(const vector<string> & queryContentTypeIncludeAny) { DARABONBA_PTR_SET_VALUE(queryContentTypeIncludeAny_, queryContentTypeIncludeAny) };
    inline ListDatasetFileMetasRequest& setQueryContentTypeIncludeAny(vector<string> && queryContentTypeIncludeAny) { DARABONBA_PTR_SET_RVALUE(queryContentTypeIncludeAny_, queryContentTypeIncludeAny) };


    // queryExpression Field Functions 
    bool hasQueryExpression() const { return this->queryExpression_ != nullptr;};
    void deleteQueryExpression() { this->queryExpression_ = nullptr;};
    inline string getQueryExpression() const { DARABONBA_PTR_GET_DEFAULT(queryExpression_, "") };
    inline ListDatasetFileMetasRequest& setQueryExpression(string queryExpression) { DARABONBA_PTR_SET_VALUE(queryExpression_, queryExpression) };


    // queryFileDir Field Functions 
    bool hasQueryFileDir() const { return this->queryFileDir_ != nullptr;};
    void deleteQueryFileDir() { this->queryFileDir_ = nullptr;};
    inline string getQueryFileDir() const { DARABONBA_PTR_GET_DEFAULT(queryFileDir_, "") };
    inline ListDatasetFileMetasRequest& setQueryFileDir(string queryFileDir) { DARABONBA_PTR_SET_VALUE(queryFileDir_, queryFileDir) };


    // queryFileName Field Functions 
    bool hasQueryFileName() const { return this->queryFileName_ != nullptr;};
    void deleteQueryFileName() { this->queryFileName_ = nullptr;};
    inline string getQueryFileName() const { DARABONBA_PTR_GET_DEFAULT(queryFileName_, "") };
    inline ListDatasetFileMetasRequest& setQueryFileName(string queryFileName) { DARABONBA_PTR_SET_VALUE(queryFileName_, queryFileName) };


    // queryFileTypeIncludeAny Field Functions 
    bool hasQueryFileTypeIncludeAny() const { return this->queryFileTypeIncludeAny_ != nullptr;};
    void deleteQueryFileTypeIncludeAny() { this->queryFileTypeIncludeAny_ = nullptr;};
    inline const vector<string> & getQueryFileTypeIncludeAny() const { DARABONBA_PTR_GET_CONST(queryFileTypeIncludeAny_, vector<string>) };
    inline vector<string> getQueryFileTypeIncludeAny() { DARABONBA_PTR_GET(queryFileTypeIncludeAny_, vector<string>) };
    inline ListDatasetFileMetasRequest& setQueryFileTypeIncludeAny(const vector<string> & queryFileTypeIncludeAny) { DARABONBA_PTR_SET_VALUE(queryFileTypeIncludeAny_, queryFileTypeIncludeAny) };
    inline ListDatasetFileMetasRequest& setQueryFileTypeIncludeAny(vector<string> && queryFileTypeIncludeAny) { DARABONBA_PTR_SET_RVALUE(queryFileTypeIncludeAny_, queryFileTypeIncludeAny) };


    // queryImage Field Functions 
    bool hasQueryImage() const { return this->queryImage_ != nullptr;};
    void deleteQueryImage() { this->queryImage_ = nullptr;};
    inline string getQueryImage() const { DARABONBA_PTR_GET_DEFAULT(queryImage_, "") };
    inline ListDatasetFileMetasRequest& setQueryImage(string queryImage) { DARABONBA_PTR_SET_VALUE(queryImage_, queryImage) };


    // queryTagsExclude Field Functions 
    bool hasQueryTagsExclude() const { return this->queryTagsExclude_ != nullptr;};
    void deleteQueryTagsExclude() { this->queryTagsExclude_ = nullptr;};
    inline const vector<string> & getQueryTagsExclude() const { DARABONBA_PTR_GET_CONST(queryTagsExclude_, vector<string>) };
    inline vector<string> getQueryTagsExclude() { DARABONBA_PTR_GET(queryTagsExclude_, vector<string>) };
    inline ListDatasetFileMetasRequest& setQueryTagsExclude(const vector<string> & queryTagsExclude) { DARABONBA_PTR_SET_VALUE(queryTagsExclude_, queryTagsExclude) };
    inline ListDatasetFileMetasRequest& setQueryTagsExclude(vector<string> && queryTagsExclude) { DARABONBA_PTR_SET_RVALUE(queryTagsExclude_, queryTagsExclude) };


    // queryTagsIncludeAll Field Functions 
    bool hasQueryTagsIncludeAll() const { return this->queryTagsIncludeAll_ != nullptr;};
    void deleteQueryTagsIncludeAll() { this->queryTagsIncludeAll_ = nullptr;};
    inline const vector<string> & getQueryTagsIncludeAll() const { DARABONBA_PTR_GET_CONST(queryTagsIncludeAll_, vector<string>) };
    inline vector<string> getQueryTagsIncludeAll() { DARABONBA_PTR_GET(queryTagsIncludeAll_, vector<string>) };
    inline ListDatasetFileMetasRequest& setQueryTagsIncludeAll(const vector<string> & queryTagsIncludeAll) { DARABONBA_PTR_SET_VALUE(queryTagsIncludeAll_, queryTagsIncludeAll) };
    inline ListDatasetFileMetasRequest& setQueryTagsIncludeAll(vector<string> && queryTagsIncludeAll) { DARABONBA_PTR_SET_RVALUE(queryTagsIncludeAll_, queryTagsIncludeAll) };


    // queryTagsIncludeAny Field Functions 
    bool hasQueryTagsIncludeAny() const { return this->queryTagsIncludeAny_ != nullptr;};
    void deleteQueryTagsIncludeAny() { this->queryTagsIncludeAny_ = nullptr;};
    inline const vector<string> & getQueryTagsIncludeAny() const { DARABONBA_PTR_GET_CONST(queryTagsIncludeAny_, vector<string>) };
    inline vector<string> getQueryTagsIncludeAny() { DARABONBA_PTR_GET(queryTagsIncludeAny_, vector<string>) };
    inline ListDatasetFileMetasRequest& setQueryTagsIncludeAny(const vector<string> & queryTagsIncludeAny) { DARABONBA_PTR_SET_VALUE(queryTagsIncludeAny_, queryTagsIncludeAny) };
    inline ListDatasetFileMetasRequest& setQueryTagsIncludeAny(vector<string> && queryTagsIncludeAny) { DARABONBA_PTR_SET_RVALUE(queryTagsIncludeAny_, queryTagsIncludeAny) };


    // queryText Field Functions 
    bool hasQueryText() const { return this->queryText_ != nullptr;};
    void deleteQueryText() { this->queryText_ = nullptr;};
    inline string getQueryText() const { DARABONBA_PTR_GET_DEFAULT(queryText_, "") };
    inline ListDatasetFileMetasRequest& setQueryText(string queryText) { DARABONBA_PTR_SET_VALUE(queryText_, queryText) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline ListDatasetFileMetasRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // queryVideo Field Functions 
    bool hasQueryVideo() const { return this->queryVideo_ != nullptr;};
    void deleteQueryVideo() { this->queryVideo_ = nullptr;};
    inline string getQueryVideo() const { DARABONBA_PTR_GET_DEFAULT(queryVideo_, "") };
    inline ListDatasetFileMetasRequest& setQueryVideo(string queryVideo) { DARABONBA_PTR_SET_VALUE(queryVideo_, queryVideo) };


    // scoreThreshold Field Functions 
    bool hasScoreThreshold() const { return this->scoreThreshold_ != nullptr;};
    void deleteScoreThreshold() { this->scoreThreshold_ = nullptr;};
    inline float getScoreThreshold() const { DARABONBA_PTR_GET_DEFAULT(scoreThreshold_, 0.0) };
    inline ListDatasetFileMetasRequest& setScoreThreshold(float scoreThreshold) { DARABONBA_PTR_SET_VALUE(scoreThreshold_, scoreThreshold) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDatasetFileMetasRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // startFileUpdateTime Field Functions 
    bool hasStartFileUpdateTime() const { return this->startFileUpdateTime_ != nullptr;};
    void deleteStartFileUpdateTime() { this->startFileUpdateTime_ = nullptr;};
    inline string getStartFileUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(startFileUpdateTime_, "") };
    inline ListDatasetFileMetasRequest& setStartFileUpdateTime(string startFileUpdateTime) { DARABONBA_PTR_SET_VALUE(startFileUpdateTime_, startFileUpdateTime) };


    // startTagUpdateTime Field Functions 
    bool hasStartTagUpdateTime() const { return this->startTagUpdateTime_ != nullptr;};
    void deleteStartTagUpdateTime() { this->startTagUpdateTime_ = nullptr;};
    inline string getStartTagUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(startTagUpdateTime_, "") };
    inline ListDatasetFileMetasRequest& setStartTagUpdateTime(string startTagUpdateTime) { DARABONBA_PTR_SET_VALUE(startTagUpdateTime_, startTagUpdateTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDatasetFileMetasRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // thumbnailMode Field Functions 
    bool hasThumbnailMode() const { return this->thumbnailMode_ != nullptr;};
    void deleteThumbnailMode() { this->thumbnailMode_ = nullptr;};
    inline string getThumbnailMode() const { DARABONBA_PTR_GET_DEFAULT(thumbnailMode_, "") };
    inline ListDatasetFileMetasRequest& setThumbnailMode(string thumbnailMode) { DARABONBA_PTR_SET_VALUE(thumbnailMode_, thumbnailMode) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline ListDatasetFileMetasRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListDatasetFileMetasRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The list of metadata IDs to query.
    shared_ptr<vector<string>> datasetFileMetaIds_ {};
    // The dataset version name.
    // 
    // This parameter is required.
    shared_ptr<string> datasetVersion_ {};
    // The end time of the file update time range for the query. Specify the time in the ISO 8601 standard in UTC.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> endFileUpdateTime_ {};
    // The end time of the tag last update time range for the query. Specify the time in the ISO 8601 standard in UTC.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> endTagUpdateTime_ {};
    // The maximum number of results to return per query when NextToken is used. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination cursor.
    // > 
    // > If this parameter is not specified, the first page of data is returned. If this parameter has a return value, it indicates that there is a next page. You can use the returned NextToken as a parameter to request the next page of data until Null is returned, which indicates that all data is retrieved.
    shared_ptr<string> nextToken_ {};
    // The ascending or descending order for the specified sorting field in a paged query. This parameter is used together with SortBy during paging. Default value: DESC. Valid values:
    // - ASC: Ascending order.
    // - DESC: Descending order.
    shared_ptr<string> order_ {};
    // The number of entries per page. If MaxResults is also specified, MaxResults prevails.
    // > This parameter will soon be offline. We recommend that you use NextToken and MaxResults for paging in paged query operations.
    shared_ptr<int32_t> pageSize_ {};
    // The search condition for "including any of the following file content types". You can select multiple file content types, and the search results only need to meet one of them. If this parameter is empty, this condition is not applied. Separate multiple file content types with commas.
    shared_ptr<vector<string>> queryContentTypeIncludeAny_ {};
    // The query statement (DSL) is a domain-specific language used to express complex search conditions. It supports grouping, Boolean logic (AND/OR/NOT), range comparison (>, >=, <, <=), property existence (HAS/NOT HAS), token matching (:), and exact matching (=), and is suitable for advanced search scenarios.
    // It is generally used for complex advanced search conditions.
    // <notice>To avoid conflicts, do not mix this query statement with other query parameters.</notice>
    shared_ptr<string> queryExpression_ {};
    // The file directory search condition. Fuzzy search is supported.
    shared_ptr<string> queryFileDir_ {};
    // The file name search condition. Fuzzy search is supported.
    shared_ptr<string> queryFileName_ {};
    // The search condition for "including any of the following file types". You can select multiple file types, and the search results only need to meet one of them. If this parameter is empty, this condition is not applied. Separate multiple file types with commas.
    shared_ptr<vector<string>> queryFileTypeIncludeAny_ {};
    // The image information for image-to-image search.
    // * Supports passing an OSS URL that allows public network access for the image. Format: oss://{bucket_name}/{object_path}. bucket_name is the bucket name, and object_path is the path of the file in the bucket.
    // > This parameter takes effect only when QueryType is set to VECTOR or MIX.
    shared_ptr<string> queryImage_ {};
    // The search condition for "excluding the following tags". You can select multiple tags, and the search results must not contain these tags. If this parameter is empty, this condition is not applied.
    // > This parameter takes effect only when QueryType is set to TAG or MIX.
    shared_ptr<vector<string>> queryTagsExclude_ {};
    // The search condition for "including all of the following tags". You can select multiple tags, and the search results must meet all these tags simultaneously. If this parameter is empty, this condition is not applied. Separate multiple tags with commas.
    // > This parameter takes effect only when QueryType is set to TAG or MIX. When QueryType is set to TAG, QueryText is added to this condition.
    shared_ptr<vector<string>> queryTagsIncludeAll_ {};
    // The search condition for "including any of the following tags". You can select multiple tags, and the search results only need to meet one of them. If this parameter is empty, this condition is not applied. Separate multiple tags with commas.
    // > This parameter takes effect only when QueryType is set to TAG or MIX.
    shared_ptr<vector<string>> queryTagsIncludeAny_ {};
    // The text content to search.
    shared_ptr<string> queryText_ {};
    // The retrieve type. Valid values:
    // * MIX: Hybrid retrieve. This is the default value.
    // * TAG: Label-only retrieve.
    // * VECTOR: AISearch-only retrieve.
    shared_ptr<string> queryType_ {};
    // The video file information for video search.
    // * Supports passing an OSS URL that allows public network access for the video. Format: oss://{bucket_name}/{object_path}. bucket_name is the bucket name, and object_path is the path of the file in the bucket.
    // > This parameter takes effect only when QueryType is set to VECTOR or MIX.
    shared_ptr<string> queryVideo_ {};
    // The similarity score threshold for filtering. Only results with a score greater than ScoreThreshold are returned.
    // > This parameter takes effect only when QueryType is set to VECTOR or MIX.
    shared_ptr<float> scoreThreshold_ {};
    // The sorting field for paged query. If this parameter is not specified, the results are sorted by retrieve relevance in descending order during paging. Valid values:
    // * FileCreateTime: Sort by file creation time.
    // * FileUpdateTime: Sort by file last modification time.
    shared_ptr<string> sortBy_ {};
    // The start time of the file update time range for the query. Specify the time in the ISO 8601 standard in UTC.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> startFileUpdateTime_ {};
    // The start time of the tag last update time range for the query. Specify the time in the ISO 8601 standard in UTC.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
    shared_ptr<string> startTagUpdateTime_ {};
    // The metadata status to query. Valid values:
    // * ACTIVE: Query only undeleted data. This is the default value.
    // * ALL: Query all data.
    // * DELETED: Query only logically deleted data.
    shared_ptr<string> status_ {};
    // The thumbnail mode for images. Currently, only OSS files support thumbnails. Valid values:
    // - Proportional scaling: p_{percentage}. percentage indicates the expected scaling ratio. Valid values: [1, 100]. Example: p_50 indicates that the thumbnail size is 50% of the original file size.
    // - Fixed width and adaptive height: w_{width}. width indicates the expected image width. Valid values: [1, 16384]. Example: w_200 indicates that the image width is fixed at 200 pixels and the height is adaptively scaled.
    // - Fixed height and adaptive width: h_{height}. height indicates the expected image height. Valid values: [1, 16384]. Example: h_100 indicates that the image height is fixed at 100 pixels and the width is adaptively scaled.
    // - Fixed width and height with padding: m_pad,w_{width},h_{height},color_{RGB}. m_pad indicates that the image is scaled to the maximum size within the specified w and h rectangle. RGB specifies the color used to fill the blank space in the center. If this parameter is not specified, white is used by default. width indicates the expected image width, and height indicates the expected image height. Valid values of width and height: [1, 16384]. Example:
    // - Fixed width and height with center cropping: m_fill,w_{width},h_{height}. m_fill indicates that the image is proportionally scaled to the minimum size that extends beyond the specified w and h rectangle, and the excess part is center-cropped. width indicates the expected image width, and height indicates the expected image height. Valid values of width and height: [1, 16384]. Example: m_fill,w_100,h_100 indicates that the image width and height are both fixed at 100 pixels for center cropping and scaling.
    // - Forced width and height scaling: m_fixed,w_{width},h_{height}. width indicates the expected image width, and height indicates the expected image height. Valid values of width and height: [1, 16384]. Example: m_fixed,w_100,h_100 indicates that the image width and height are both fixed at 100 pixels for forced scaling.
    shared_ptr<string> thumbnailMode_ {};
    // The number of search results to return. A maximum of TopK search results are returned.
    // > This parameter takes effect only when QueryType is set to VECTOR or MIX.
    shared_ptr<int32_t> topK_ {};
    // The ID of the workspace to which the dataset belongs. For more information about how to obtain the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
