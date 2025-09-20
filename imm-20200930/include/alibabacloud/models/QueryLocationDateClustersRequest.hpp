// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYLOCATIONDATECLUSTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYLOCATIONDATECLUSTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Address.hpp>
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
  class QueryLocationDateClustersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryLocationDateClustersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(CreateTimeRange, createTimeRange_);
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(LocationDateClusterEndTimeRange, locationDateClusterEndTimeRange_);
      DARABONBA_PTR_TO_JSON(LocationDateClusterLevels, locationDateClusterLevels_);
      DARABONBA_PTR_TO_JSON(LocationDateClusterStartTimeRange, locationDateClusterStartTimeRange_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTimeRange, updateTimeRange_);
    };
    friend void from_json(const Darabonba::Json& j, QueryLocationDateClustersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(CreateTimeRange, createTimeRange_);
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(LocationDateClusterEndTimeRange, locationDateClusterEndTimeRange_);
      DARABONBA_PTR_FROM_JSON(LocationDateClusterLevels, locationDateClusterLevels_);
      DARABONBA_PTR_FROM_JSON(LocationDateClusterStartTimeRange, locationDateClusterStartTimeRange_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTimeRange, updateTimeRange_);
    };
    QueryLocationDateClustersRequest() = default ;
    QueryLocationDateClustersRequest(const QueryLocationDateClustersRequest &) = default ;
    QueryLocationDateClustersRequest(QueryLocationDateClustersRequest &&) = default ;
    QueryLocationDateClustersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryLocationDateClustersRequest() = default ;
    QueryLocationDateClustersRequest& operator=(const QueryLocationDateClustersRequest &) = default ;
    QueryLocationDateClustersRequest& operator=(QueryLocationDateClustersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr
        && this->createTimeRange_ != nullptr && this->customLabels_ != nullptr && this->datasetName_ != nullptr && this->locationDateClusterEndTimeRange_ != nullptr && this->locationDateClusterLevels_ != nullptr
        && this->locationDateClusterStartTimeRange_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->objectId_ != nullptr && this->order_ != nullptr
        && this->projectName_ != nullptr && this->sort_ != nullptr && this->title_ != nullptr && this->updateTimeRange_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline const Address & address() const { DARABONBA_PTR_GET_CONST(address_, Address) };
    inline Address address() { DARABONBA_PTR_GET(address_, Address) };
    inline QueryLocationDateClustersRequest& setAddress(const Address & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
    inline QueryLocationDateClustersRequest& setAddress(Address && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


    // createTimeRange Field Functions 
    bool hasCreateTimeRange() const { return this->createTimeRange_ != nullptr;};
    void deleteCreateTimeRange() { this->createTimeRange_ = nullptr;};
    inline const TimeRange & createTimeRange() const { DARABONBA_PTR_GET_CONST(createTimeRange_, TimeRange) };
    inline TimeRange createTimeRange() { DARABONBA_PTR_GET(createTimeRange_, TimeRange) };
    inline QueryLocationDateClustersRequest& setCreateTimeRange(const TimeRange & createTimeRange) { DARABONBA_PTR_SET_VALUE(createTimeRange_, createTimeRange) };
    inline QueryLocationDateClustersRequest& setCreateTimeRange(TimeRange && createTimeRange) { DARABONBA_PTR_SET_RVALUE(createTimeRange_, createTimeRange) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline string customLabels() const { DARABONBA_PTR_GET_DEFAULT(customLabels_, "") };
    inline QueryLocationDateClustersRequest& setCustomLabels(string customLabels) { DARABONBA_PTR_SET_VALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline QueryLocationDateClustersRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // locationDateClusterEndTimeRange Field Functions 
    bool hasLocationDateClusterEndTimeRange() const { return this->locationDateClusterEndTimeRange_ != nullptr;};
    void deleteLocationDateClusterEndTimeRange() { this->locationDateClusterEndTimeRange_ = nullptr;};
    inline const TimeRange & locationDateClusterEndTimeRange() const { DARABONBA_PTR_GET_CONST(locationDateClusterEndTimeRange_, TimeRange) };
    inline TimeRange locationDateClusterEndTimeRange() { DARABONBA_PTR_GET(locationDateClusterEndTimeRange_, TimeRange) };
    inline QueryLocationDateClustersRequest& setLocationDateClusterEndTimeRange(const TimeRange & locationDateClusterEndTimeRange) { DARABONBA_PTR_SET_VALUE(locationDateClusterEndTimeRange_, locationDateClusterEndTimeRange) };
    inline QueryLocationDateClustersRequest& setLocationDateClusterEndTimeRange(TimeRange && locationDateClusterEndTimeRange) { DARABONBA_PTR_SET_RVALUE(locationDateClusterEndTimeRange_, locationDateClusterEndTimeRange) };


    // locationDateClusterLevels Field Functions 
    bool hasLocationDateClusterLevels() const { return this->locationDateClusterLevels_ != nullptr;};
    void deleteLocationDateClusterLevels() { this->locationDateClusterLevels_ = nullptr;};
    inline const vector<string> & locationDateClusterLevels() const { DARABONBA_PTR_GET_CONST(locationDateClusterLevels_, vector<string>) };
    inline vector<string> locationDateClusterLevels() { DARABONBA_PTR_GET(locationDateClusterLevels_, vector<string>) };
    inline QueryLocationDateClustersRequest& setLocationDateClusterLevels(const vector<string> & locationDateClusterLevels) { DARABONBA_PTR_SET_VALUE(locationDateClusterLevels_, locationDateClusterLevels) };
    inline QueryLocationDateClustersRequest& setLocationDateClusterLevels(vector<string> && locationDateClusterLevels) { DARABONBA_PTR_SET_RVALUE(locationDateClusterLevels_, locationDateClusterLevels) };


    // locationDateClusterStartTimeRange Field Functions 
    bool hasLocationDateClusterStartTimeRange() const { return this->locationDateClusterStartTimeRange_ != nullptr;};
    void deleteLocationDateClusterStartTimeRange() { this->locationDateClusterStartTimeRange_ = nullptr;};
    inline const TimeRange & locationDateClusterStartTimeRange() const { DARABONBA_PTR_GET_CONST(locationDateClusterStartTimeRange_, TimeRange) };
    inline TimeRange locationDateClusterStartTimeRange() { DARABONBA_PTR_GET(locationDateClusterStartTimeRange_, TimeRange) };
    inline QueryLocationDateClustersRequest& setLocationDateClusterStartTimeRange(const TimeRange & locationDateClusterStartTimeRange) { DARABONBA_PTR_SET_VALUE(locationDateClusterStartTimeRange_, locationDateClusterStartTimeRange) };
    inline QueryLocationDateClustersRequest& setLocationDateClusterStartTimeRange(TimeRange && locationDateClusterStartTimeRange) { DARABONBA_PTR_SET_RVALUE(locationDateClusterStartTimeRange_, locationDateClusterStartTimeRange) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QueryLocationDateClustersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QueryLocationDateClustersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline QueryLocationDateClustersRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline QueryLocationDateClustersRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline QueryLocationDateClustersRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline QueryLocationDateClustersRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline QueryLocationDateClustersRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTimeRange Field Functions 
    bool hasUpdateTimeRange() const { return this->updateTimeRange_ != nullptr;};
    void deleteUpdateTimeRange() { this->updateTimeRange_ = nullptr;};
    inline const TimeRange & updateTimeRange() const { DARABONBA_PTR_GET_CONST(updateTimeRange_, TimeRange) };
    inline TimeRange updateTimeRange() { DARABONBA_PTR_GET(updateTimeRange_, TimeRange) };
    inline QueryLocationDateClustersRequest& setUpdateTimeRange(const TimeRange & updateTimeRange) { DARABONBA_PTR_SET_VALUE(updateTimeRange_, updateTimeRange) };
    inline QueryLocationDateClustersRequest& setUpdateTimeRange(TimeRange && updateTimeRange) { DARABONBA_PTR_SET_RVALUE(updateTimeRange_, updateTimeRange) };


  protected:
    // The address information.
    std::shared_ptr<Address> address_ = nullptr;
    // The time range during which the spatiotemporal clusters were generated.
    std::shared_ptr<TimeRange> createTimeRange_ = nullptr;
    // The custom labels, which can be used as query conditions.
    std::shared_ptr<string> customLabels_ = nullptr;
    // The name of the dataset. For more information, see [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The time range during which the latest photo in a cluster was taken.
    std::shared_ptr<TimeRange> locationDateClusterEndTimeRange_ = nullptr;
    // The administrative level of the spatiotemporal clustering groups to be queried.
    std::shared_ptr<vector<string>> locationDateClusterLevels_ = nullptr;
    // The time range during which the earliest photo in a cluster was taken.
    std::shared_ptr<TimeRange> locationDateClusterStartTimeRange_ = nullptr;
    // The number of entries per page. Valid values: [1,100]. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the group that you want to query. Specify this parameter if you want to obtain the information about a specific spatiotemporal clustering group. Otherwise, leave this parameter empty and use other parameters to query the groups that meet the matching conditions.
    std::shared_ptr<string> objectId_ = nullptr;
    // The sorting order.
    // 
    // Default value: asc. Valid values:
    // 
    // *   asc: ascending order.
    // *   desc: descending order.
    std::shared_ptr<string> order_ = nullptr;
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The condition by which the results are sorted.
    // 
    // Valid values:
    // 
    // *   LocationDateClusterEndTime: by the end time of the spatiotemporal clustering groups.
    // *   CreateTime: by the creation time of the spatiotemporal clustering groups.
    // *   UpdateTime: by the update time of the spatiotemporal clustering groups.
    // *   LocationDateClusterStartTime: by the start time of the spatiotemporal clustering groups. This is the default value.
    std::shared_ptr<string> sort_ = nullptr;
    // The title of spatiotemporal clustering. Fuzzy matching is performed.
    std::shared_ptr<string> title_ = nullptr;
    // The time range during which the spatiotemporal clusters were updated.
    std::shared_ptr<TimeRange> updateTimeRange_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
