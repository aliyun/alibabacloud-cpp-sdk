// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFIGURECLUSTERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFIGURECLUSTERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class QueryFigureClustersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFigureClustersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimeRange, createTimeRangeShrink_);
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(UpdateTimeRange, updateTimeRangeShrink_);
      DARABONBA_PTR_TO_JSON(WithTotalCount, withTotalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFigureClustersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimeRange, createTimeRangeShrink_);
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(UpdateTimeRange, updateTimeRangeShrink_);
      DARABONBA_PTR_FROM_JSON(WithTotalCount, withTotalCount_);
    };
    QueryFigureClustersShrinkRequest() = default ;
    QueryFigureClustersShrinkRequest(const QueryFigureClustersShrinkRequest &) = default ;
    QueryFigureClustersShrinkRequest(QueryFigureClustersShrinkRequest &&) = default ;
    QueryFigureClustersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFigureClustersShrinkRequest() = default ;
    QueryFigureClustersShrinkRequest& operator=(const QueryFigureClustersShrinkRequest &) = default ;
    QueryFigureClustersShrinkRequest& operator=(QueryFigureClustersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTimeRangeShrink_ == nullptr
        && return this->customLabels_ == nullptr && return this->datasetName_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->order_ == nullptr
        && return this->projectName_ == nullptr && return this->sort_ == nullptr && return this->updateTimeRangeShrink_ == nullptr && return this->withTotalCount_ == nullptr; };
    // createTimeRangeShrink Field Functions 
    bool hasCreateTimeRangeShrink() const { return this->createTimeRangeShrink_ != nullptr;};
    void deleteCreateTimeRangeShrink() { this->createTimeRangeShrink_ = nullptr;};
    inline string createTimeRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(createTimeRangeShrink_, "") };
    inline QueryFigureClustersShrinkRequest& setCreateTimeRangeShrink(string createTimeRangeShrink) { DARABONBA_PTR_SET_VALUE(createTimeRangeShrink_, createTimeRangeShrink) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline string customLabels() const { DARABONBA_PTR_GET_DEFAULT(customLabels_, "") };
    inline QueryFigureClustersShrinkRequest& setCustomLabels(string customLabels) { DARABONBA_PTR_SET_VALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline QueryFigureClustersShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline QueryFigureClustersShrinkRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryFigureClustersShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline QueryFigureClustersShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline QueryFigureClustersShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline QueryFigureClustersShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // updateTimeRangeShrink Field Functions 
    bool hasUpdateTimeRangeShrink() const { return this->updateTimeRangeShrink_ != nullptr;};
    void deleteUpdateTimeRangeShrink() { this->updateTimeRangeShrink_ = nullptr;};
    inline string updateTimeRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(updateTimeRangeShrink_, "") };
    inline QueryFigureClustersShrinkRequest& setUpdateTimeRangeShrink(string updateTimeRangeShrink) { DARABONBA_PTR_SET_VALUE(updateTimeRangeShrink_, updateTimeRangeShrink) };


    // withTotalCount Field Functions 
    bool hasWithTotalCount() const { return this->withTotalCount_ != nullptr;};
    void deleteWithTotalCount() { this->withTotalCount_ = nullptr;};
    inline bool withTotalCount() const { DARABONBA_PTR_GET_DEFAULT(withTotalCount_, false) };
    inline QueryFigureClustersShrinkRequest& setWithTotalCount(bool withTotalCount) { DARABONBA_PTR_SET_VALUE(withTotalCount_, withTotalCount) };


  protected:
    // The time range within which the face group was created.
    std::shared_ptr<string> createTimeRangeShrink_ = nullptr;
    // The custom labels, which can be used as query conditions.
    std::shared_ptr<string> customLabels_ = nullptr;
    // The name of the dataset. You can obtain the name of the dataset from the response of the [CreateDataset](https://help.aliyun.com/document_detail/478160.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The maximum number of entries to return. Valid values: 0 to 100. Default value: 100.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The sort order. Default value: asc.
    // 
    // Valid values:
    // 
    // *   asc: ascending order.
    // *   desc: descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The sort field. If you leave this parameter empty, the group ID is used as the sort field.
    // 
    // Valid values:
    // 
    // *   ImageCount: the number of images.
    // *   VideoCount: the number of videos.
    // *   ProjectName: the name of the project.
    // *   DatasetName: the name of the dataset.
    // *   CreateTime: the point in time when the group is created.
    // *   UpdateTime: the most recent point in time when the group is updated.
    // *   Gender: the gender.
    // *   FaceCount: the number of faces.
    // *   GroupName: the name of the group.
    std::shared_ptr<string> sort_ = nullptr;
    // The time range within which the face group was last updated.
    std::shared_ptr<string> updateTimeRangeShrink_ = nullptr;
    // Specifies whether to return the total number of face groups that match the current query conditions. Default value: false.
    std::shared_ptr<bool> withTotalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
