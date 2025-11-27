// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLOCATIONDATECLUSTERSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYLOCATIONDATECLUSTERSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class QueryLocationDateClustersShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLocationDateClustersShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, addressShrink_);
      DARABONBA_PTR_TO_JSON(CreateTimeRange, createTimeRangeShrink_);
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(LocationDateClusterEndTimeRange, locationDateClusterEndTimeRangeShrink_);
      DARABONBA_PTR_TO_JSON(LocationDateClusterLevels, locationDateClusterLevelsShrink_);
      DARABONBA_PTR_TO_JSON(LocationDateClusterStartTimeRange, locationDateClusterStartTimeRangeShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTimeRange, updateTimeRangeShrink_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLocationDateClustersShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, addressShrink_);
      DARABONBA_PTR_FROM_JSON(CreateTimeRange, createTimeRangeShrink_);
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(LocationDateClusterEndTimeRange, locationDateClusterEndTimeRangeShrink_);
      DARABONBA_PTR_FROM_JSON(LocationDateClusterLevels, locationDateClusterLevelsShrink_);
      DARABONBA_PTR_FROM_JSON(LocationDateClusterStartTimeRange, locationDateClusterStartTimeRangeShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTimeRange, updateTimeRangeShrink_);
    };
    QueryLocationDateClustersShrinkRequest() = default ;
    QueryLocationDateClustersShrinkRequest(const QueryLocationDateClustersShrinkRequest &) = default ;
    QueryLocationDateClustersShrinkRequest(QueryLocationDateClustersShrinkRequest &&) = default ;
    QueryLocationDateClustersShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLocationDateClustersShrinkRequest() = default ;
    QueryLocationDateClustersShrinkRequest& operator=(const QueryLocationDateClustersShrinkRequest &) = default ;
    QueryLocationDateClustersShrinkRequest& operator=(QueryLocationDateClustersShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressShrink_ == nullptr
        && return this->createTimeRangeShrink_ == nullptr && return this->customLabels_ == nullptr && return this->datasetName_ == nullptr && return this->locationDateClusterEndTimeRangeShrink_ == nullptr && return this->locationDateClusterLevelsShrink_ == nullptr
        && return this->locationDateClusterStartTimeRangeShrink_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->objectId_ == nullptr && return this->order_ == nullptr
        && return this->projectName_ == nullptr && return this->sort_ == nullptr && return this->title_ == nullptr && return this->updateTimeRangeShrink_ == nullptr; };
    // addressShrink Field Functions 
    bool hasAddressShrink() const { return this->addressShrink_ != nullptr;};
    void deleteAddressShrink() { this->addressShrink_ = nullptr;};
    inline string addressShrink() const { DARABONBA_PTR_GET_DEFAULT(addressShrink_, "") };
    inline QueryLocationDateClustersShrinkRequest& setAddressShrink(string addressShrink) { DARABONBA_PTR_SET_VALUE(addressShrink_, addressShrink) };


    // createTimeRangeShrink Field Functions 
    bool hasCreateTimeRangeShrink() const { return this->createTimeRangeShrink_ != nullptr;};
    void deleteCreateTimeRangeShrink() { this->createTimeRangeShrink_ = nullptr;};
    inline string createTimeRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(createTimeRangeShrink_, "") };
    inline QueryLocationDateClustersShrinkRequest& setCreateTimeRangeShrink(string createTimeRangeShrink) { DARABONBA_PTR_SET_VALUE(createTimeRangeShrink_, createTimeRangeShrink) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline string customLabels() const { DARABONBA_PTR_GET_DEFAULT(customLabels_, "") };
    inline QueryLocationDateClustersShrinkRequest& setCustomLabels(string customLabels) { DARABONBA_PTR_SET_VALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline QueryLocationDateClustersShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // locationDateClusterEndTimeRangeShrink Field Functions 
    bool hasLocationDateClusterEndTimeRangeShrink() const { return this->locationDateClusterEndTimeRangeShrink_ != nullptr;};
    void deleteLocationDateClusterEndTimeRangeShrink() { this->locationDateClusterEndTimeRangeShrink_ = nullptr;};
    inline string locationDateClusterEndTimeRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(locationDateClusterEndTimeRangeShrink_, "") };
    inline QueryLocationDateClustersShrinkRequest& setLocationDateClusterEndTimeRangeShrink(string locationDateClusterEndTimeRangeShrink) { DARABONBA_PTR_SET_VALUE(locationDateClusterEndTimeRangeShrink_, locationDateClusterEndTimeRangeShrink) };


    // locationDateClusterLevelsShrink Field Functions 
    bool hasLocationDateClusterLevelsShrink() const { return this->locationDateClusterLevelsShrink_ != nullptr;};
    void deleteLocationDateClusterLevelsShrink() { this->locationDateClusterLevelsShrink_ = nullptr;};
    inline string locationDateClusterLevelsShrink() const { DARABONBA_PTR_GET_DEFAULT(locationDateClusterLevelsShrink_, "") };
    inline QueryLocationDateClustersShrinkRequest& setLocationDateClusterLevelsShrink(string locationDateClusterLevelsShrink) { DARABONBA_PTR_SET_VALUE(locationDateClusterLevelsShrink_, locationDateClusterLevelsShrink) };


    // locationDateClusterStartTimeRangeShrink Field Functions 
    bool hasLocationDateClusterStartTimeRangeShrink() const { return this->locationDateClusterStartTimeRangeShrink_ != nullptr;};
    void deleteLocationDateClusterStartTimeRangeShrink() { this->locationDateClusterStartTimeRangeShrink_ = nullptr;};
    inline string locationDateClusterStartTimeRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(locationDateClusterStartTimeRangeShrink_, "") };
    inline QueryLocationDateClustersShrinkRequest& setLocationDateClusterStartTimeRangeShrink(string locationDateClusterStartTimeRangeShrink) { DARABONBA_PTR_SET_VALUE(locationDateClusterStartTimeRangeShrink_, locationDateClusterStartTimeRangeShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryLocationDateClustersShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryLocationDateClustersShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline QueryLocationDateClustersShrinkRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline QueryLocationDateClustersShrinkRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline QueryLocationDateClustersShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline QueryLocationDateClustersShrinkRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryLocationDateClustersShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTimeRangeShrink Field Functions 
    bool hasUpdateTimeRangeShrink() const { return this->updateTimeRangeShrink_ != nullptr;};
    void deleteUpdateTimeRangeShrink() { this->updateTimeRangeShrink_ = nullptr;};
    inline string updateTimeRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(updateTimeRangeShrink_, "") };
    inline QueryLocationDateClustersShrinkRequest& setUpdateTimeRangeShrink(string updateTimeRangeShrink) { DARABONBA_PTR_SET_VALUE(updateTimeRangeShrink_, updateTimeRangeShrink) };


  protected:
    // The address information.
    std::shared_ptr<string> addressShrink_ = nullptr;
    // The time range during which the spatiotemporal clusters were generated.
    std::shared_ptr<string> createTimeRangeShrink_ = nullptr;
    // The custom labels.
    std::shared_ptr<string> customLabels_ = nullptr;
    // The name of the dataset. For information about how to create a dataset, see [CreateDataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The time range during which the latest photo in a cluster was taken.
    std::shared_ptr<string> locationDateClusterEndTimeRangeShrink_ = nullptr;
    // The container for the administrative division level of the spatiotemporal clusters to be queried.
    std::shared_ptr<string> locationDateClusterLevelsShrink_ = nullptr;
    // The time range during which the earliest photo in a cluster was taken.
    std::shared_ptr<string> locationDateClusterStartTimeRangeShrink_ = nullptr;
    // The number of entries per page. Valid values: [1,100]. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the cluster that you want to query. Specify this parameter if you want to query a specific spatiotemporal cluster. Otherwise, leave this parameter empty to query spatiotemporal clusters that meet the specified conditions.
    std::shared_ptr<string> objectId_ = nullptr;
    // The order that you use to sort the query results.
    // 
    // Valid values:
    // 
    // *   asc: ascending order. This is the default value.
    // *   desc: descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The field that you use to sort the query results.
    // 
    // Valid values:
    // 
    // *   LocationDateClusterEndTime: by the time at which the latest photo in a cluster was taken.
    // *   CreateTime: by the creation time of a spatiotemporal cluster.
    // *   UpdateTime: by the update time of a spatiotemporal cluster.
    // *   LocationDateClusterStartTime: by the time at which the earliest photo in a cluster was taken. This is the default value.
    std::shared_ptr<string> sort_ = nullptr;
    // The characters that are included in the titles of spatiotemporal clusters to be queried. Matches are found by using fuzzy matching.
    std::shared_ptr<string> title_ = nullptr;
    // The time range during which the spatiotemporal clusters were updated.
    std::shared_ptr<string> updateTimeRangeShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
