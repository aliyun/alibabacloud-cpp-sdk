// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSTORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSTORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TimeRange.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class QueryStoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryStoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeRange, createTimeRange_);
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(FigureClusterIds, figureClusterIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(StoryEndTimeRange, storyEndTimeRange_);
      DARABONBA_PTR_TO_JSON(StoryName, storyName_);
      DARABONBA_PTR_TO_JSON(StoryStartTimeRange, storyStartTimeRange_);
      DARABONBA_PTR_TO_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_TO_JSON(StoryType, storyType_);
      DARABONBA_PTR_TO_JSON(WithEmptyStories, withEmptyStories_);
    };
    friend void from_json(const Darabonba::Json& j, QueryStoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeRange, createTimeRange_);
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(FigureClusterIds, figureClusterIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(StoryEndTimeRange, storyEndTimeRange_);
      DARABONBA_PTR_FROM_JSON(StoryName, storyName_);
      DARABONBA_PTR_FROM_JSON(StoryStartTimeRange, storyStartTimeRange_);
      DARABONBA_PTR_FROM_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_FROM_JSON(StoryType, storyType_);
      DARABONBA_PTR_FROM_JSON(WithEmptyStories, withEmptyStories_);
    };
    QueryStoriesRequest() = default ;
    QueryStoriesRequest(const QueryStoriesRequest &) = default ;
    QueryStoriesRequest(QueryStoriesRequest &&) = default ;
    QueryStoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryStoriesRequest() = default ;
    QueryStoriesRequest& operator=(const QueryStoriesRequest &) = default ;
    QueryStoriesRequest& operator=(QueryStoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimeRange_ != nullptr
        && this->customLabels_ != nullptr && this->datasetName_ != nullptr && this->figureClusterIds_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->objectId_ != nullptr && this->order_ != nullptr && this->projectName_ != nullptr && this->sort_ != nullptr && this->storyEndTimeRange_ != nullptr
        && this->storyName_ != nullptr && this->storyStartTimeRange_ != nullptr && this->storySubType_ != nullptr && this->storyType_ != nullptr && this->withEmptyStories_ != nullptr; };
    // createTimeRange Field Functions 
    bool hasCreateTimeRange() const { return this->createTimeRange_ != nullptr;};
    void deleteCreateTimeRange() { this->createTimeRange_ = nullptr;};
    inline const TimeRange & createTimeRange() const { DARABONBA_PTR_GET_CONST(createTimeRange_, TimeRange) };
    inline TimeRange createTimeRange() { DARABONBA_PTR_GET(createTimeRange_, TimeRange) };
    inline QueryStoriesRequest& setCreateTimeRange(const TimeRange & createTimeRange) { DARABONBA_PTR_SET_VALUE(createTimeRange_, createTimeRange) };
    inline QueryStoriesRequest& setCreateTimeRange(TimeRange && createTimeRange) { DARABONBA_PTR_SET_RVALUE(createTimeRange_, createTimeRange) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline string customLabels() const { DARABONBA_PTR_GET_DEFAULT(customLabels_, "") };
    inline QueryStoriesRequest& setCustomLabels(string customLabels) { DARABONBA_PTR_SET_VALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline QueryStoriesRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // figureClusterIds Field Functions 
    bool hasFigureClusterIds() const { return this->figureClusterIds_ != nullptr;};
    void deleteFigureClusterIds() { this->figureClusterIds_ = nullptr;};
    inline const vector<string> & figureClusterIds() const { DARABONBA_PTR_GET_CONST(figureClusterIds_, vector<string>) };
    inline vector<string> figureClusterIds() { DARABONBA_PTR_GET(figureClusterIds_, vector<string>) };
    inline QueryStoriesRequest& setFigureClusterIds(const vector<string> & figureClusterIds) { DARABONBA_PTR_SET_VALUE(figureClusterIds_, figureClusterIds) };
    inline QueryStoriesRequest& setFigureClusterIds(vector<string> && figureClusterIds) { DARABONBA_PTR_SET_RVALUE(figureClusterIds_, figureClusterIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline QueryStoriesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryStoriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline QueryStoriesRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline QueryStoriesRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline QueryStoriesRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline QueryStoriesRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // storyEndTimeRange Field Functions 
    bool hasStoryEndTimeRange() const { return this->storyEndTimeRange_ != nullptr;};
    void deleteStoryEndTimeRange() { this->storyEndTimeRange_ = nullptr;};
    inline const TimeRange & storyEndTimeRange() const { DARABONBA_PTR_GET_CONST(storyEndTimeRange_, TimeRange) };
    inline TimeRange storyEndTimeRange() { DARABONBA_PTR_GET(storyEndTimeRange_, TimeRange) };
    inline QueryStoriesRequest& setStoryEndTimeRange(const TimeRange & storyEndTimeRange) { DARABONBA_PTR_SET_VALUE(storyEndTimeRange_, storyEndTimeRange) };
    inline QueryStoriesRequest& setStoryEndTimeRange(TimeRange && storyEndTimeRange) { DARABONBA_PTR_SET_RVALUE(storyEndTimeRange_, storyEndTimeRange) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string storyName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline QueryStoriesRequest& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


    // storyStartTimeRange Field Functions 
    bool hasStoryStartTimeRange() const { return this->storyStartTimeRange_ != nullptr;};
    void deleteStoryStartTimeRange() { this->storyStartTimeRange_ = nullptr;};
    inline const TimeRange & storyStartTimeRange() const { DARABONBA_PTR_GET_CONST(storyStartTimeRange_, TimeRange) };
    inline TimeRange storyStartTimeRange() { DARABONBA_PTR_GET(storyStartTimeRange_, TimeRange) };
    inline QueryStoriesRequest& setStoryStartTimeRange(const TimeRange & storyStartTimeRange) { DARABONBA_PTR_SET_VALUE(storyStartTimeRange_, storyStartTimeRange) };
    inline QueryStoriesRequest& setStoryStartTimeRange(TimeRange && storyStartTimeRange) { DARABONBA_PTR_SET_RVALUE(storyStartTimeRange_, storyStartTimeRange) };


    // storySubType Field Functions 
    bool hasStorySubType() const { return this->storySubType_ != nullptr;};
    void deleteStorySubType() { this->storySubType_ = nullptr;};
    inline string storySubType() const { DARABONBA_PTR_GET_DEFAULT(storySubType_, "") };
    inline QueryStoriesRequest& setStorySubType(string storySubType) { DARABONBA_PTR_SET_VALUE(storySubType_, storySubType) };


    // storyType Field Functions 
    bool hasStoryType() const { return this->storyType_ != nullptr;};
    void deleteStoryType() { this->storyType_ = nullptr;};
    inline string storyType() const { DARABONBA_PTR_GET_DEFAULT(storyType_, "") };
    inline QueryStoriesRequest& setStoryType(string storyType) { DARABONBA_PTR_SET_VALUE(storyType_, storyType) };


    // withEmptyStories Field Functions 
    bool hasWithEmptyStories() const { return this->withEmptyStories_ != nullptr;};
    void deleteWithEmptyStories() { this->withEmptyStories_ = nullptr;};
    inline bool withEmptyStories() const { DARABONBA_PTR_GET_DEFAULT(withEmptyStories_, false) };
    inline QueryStoriesRequest& setWithEmptyStories(bool withEmptyStories) { DARABONBA_PTR_SET_VALUE(withEmptyStories_, withEmptyStories) };


  protected:
    // The time range in which stories were created.
    std::shared_ptr<TimeRange> createTimeRange_ = nullptr;
    // The custom labels in key-value pairs.
    std::shared_ptr<string> customLabels_ = nullptr;
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The IDs of the face clusters.
    std::shared_ptr<vector<string>> figureClusterIds_ = nullptr;
    // The maximum number of entries to return. Valid values: 1 to 100. Default value: 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If you do not specify this token in the next request, results are returned from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the story.
    std::shared_ptr<string> objectId_ = nullptr;
    // The sort order. Valid values:
    // 
    // *   asc: in ascending order.
    // *   desc: in descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The sort field. Valid values:
    // 
    // *   CreateTime: sorts by story creation time.
    // *   StoryName: sorts by story name.
    // *   StoryStartTime: sorts by story start time.
    // *   StoryEndTime: sorts by story end time.
    std::shared_ptr<string> sort_ = nullptr;
    // The time range for the creation time of the last photo or video in the story.
    std::shared_ptr<TimeRange> storyEndTimeRange_ = nullptr;
    // The name of the story.
    std::shared_ptr<string> storyName_ = nullptr;
    // The time range for the creation time of the first photo or video in the story.
    std::shared_ptr<TimeRange> storyStartTimeRange_ = nullptr;
    // The subtype of the story. For a list of valid values, see [Story types and subtypes](https://help.aliyun.com/document_detail/2743998.html).
    std::shared_ptr<string> storySubType_ = nullptr;
    // The type of the story. For a list of valid values, see [Story types and subtypes](https://help.aliyun.com/document_detail/2743998.html).
    std::shared_ptr<string> storyType_ = nullptr;
    // Specifies whether to return empty stories. Valid values:
    // 
    // *   true (The default value)
    // *   false
    std::shared_ptr<bool> withEmptyStories_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
