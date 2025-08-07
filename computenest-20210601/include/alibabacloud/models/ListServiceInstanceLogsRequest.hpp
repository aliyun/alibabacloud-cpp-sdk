// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCELOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCELOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstanceLogsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(LogSource, logSource_);
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(LogSource, logSource_);
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    ListServiceInstanceLogsRequest() = default ;
    ListServiceInstanceLogsRequest(const ListServiceInstanceLogsRequest &) = default ;
    ListServiceInstanceLogsRequest(ListServiceInstanceLogsRequest &&) = default ;
    ListServiceInstanceLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceLogsRequest() = default ;
    ListServiceInstanceLogsRequest& operator=(const ListServiceInstanceLogsRequest &) = default ;
    ListServiceInstanceLogsRequest& operator=(ListServiceInstanceLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->logSource_ != nullptr && this->logstore_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->regionId_ != nullptr
        && this->serviceInstanceId_ != nullptr && this->sortOrder_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListServiceInstanceLogsRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListServiceInstanceLogsRequestFilter>) };
    inline vector<ListServiceInstanceLogsRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<ListServiceInstanceLogsRequestFilter>) };
    inline ListServiceInstanceLogsRequest& setFilter(const vector<ListServiceInstanceLogsRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListServiceInstanceLogsRequest& setFilter(vector<ListServiceInstanceLogsRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // logSource Field Functions 
    bool hasLogSource() const { return this->logSource_ != nullptr;};
    void deleteLogSource() { this->logSource_ = nullptr;};
    inline string logSource() const { DARABONBA_PTR_GET_DEFAULT(logSource_, "") };
    inline ListServiceInstanceLogsRequest& setLogSource(string logSource) { DARABONBA_PTR_SET_VALUE(logSource_, logSource) };


    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline ListServiceInstanceLogsRequest& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceLogsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceLogsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServiceInstanceLogsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ListServiceInstanceLogsRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string sortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListServiceInstanceLogsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // The filters.
    std::shared_ptr<vector<ListServiceInstanceLogsRequestFilter>> filter_ = nullptr;
    // The log source. When this field is empty, query logs with the source set to computeNest and ros. Valid values:
    // 
    // computeNest : logs of the deployment and upgrade of the service instance.
    // application: logs generated by the application.
    // actionTrail: logs generated by ActionTrail.
    // compliancePack: Logs originating from the compliance package.
    // ros: Logs originating from ROS.
    // meteringData：Logs originating from the pay-as-you-go model.
    std::shared_ptr<string> logSource_ = nullptr;
    // The Logstore. You must specify this parameter if you set LogSource to application.
    std::shared_ptr<string> logstore_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID. Valid values:
    // 
    // *   cn-hangzhou: China (Hangzhou).
    // *   ap-southeast-1: Singapore.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the service instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // The order in which you want to sort the results. Valid values:
    // 
    // *   Ascending
    // *   (Default) Descending
    std::shared_ptr<string> sortOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
