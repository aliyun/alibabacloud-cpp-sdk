// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListServiceInstanceResourcesRequestFilters.hpp>
#include <alibabacloud/models/ListServiceInstanceResourcesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceResourceType, serviceInstanceResourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceResourceType, serviceInstanceResourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListServiceInstanceResourcesRequest() = default ;
    ListServiceInstanceResourcesRequest(const ListServiceInstanceResourcesRequest &) = default ;
    ListServiceInstanceResourcesRequest(ListServiceInstanceResourcesRequest &&) = default ;
    ListServiceInstanceResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceResourcesRequest() = default ;
    ListServiceInstanceResourcesRequest& operator=(const ListServiceInstanceResourcesRequest &) = default ;
    ListServiceInstanceResourcesRequest& operator=(ListServiceInstanceResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filters_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->regionId_ != nullptr && this->serviceInstanceId_ != nullptr && this->serviceInstanceResourceType_ != nullptr
        && this->tag_ != nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListServiceInstanceResourcesRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListServiceInstanceResourcesRequestFilters>) };
    inline vector<ListServiceInstanceResourcesRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<ListServiceInstanceResourcesRequestFilters>) };
    inline ListServiceInstanceResourcesRequest& setFilters(const vector<ListServiceInstanceResourcesRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListServiceInstanceResourcesRequest& setFilters(vector<ListServiceInstanceResourcesRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServiceInstanceResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ListServiceInstanceResourcesRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceInstanceResourceType Field Functions 
    bool hasServiceInstanceResourceType() const { return this->serviceInstanceResourceType_ != nullptr;};
    void deleteServiceInstanceResourceType() { this->serviceInstanceResourceType_ = nullptr;};
    inline string serviceInstanceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceResourceType_, "") };
    inline ListServiceInstanceResourcesRequest& setServiceInstanceResourceType(string serviceInstanceResourceType) { DARABONBA_PTR_SET_VALUE(serviceInstanceResourceType_, serviceInstanceResourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListServiceInstanceResourcesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListServiceInstanceResourcesRequestTag>) };
    inline vector<ListServiceInstanceResourcesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListServiceInstanceResourcesRequestTag>) };
    inline ListServiceInstanceResourcesRequest& setTag(const vector<ListServiceInstanceResourcesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListServiceInstanceResourcesRequest& setTag(vector<ListServiceInstanceResourcesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The filter conditions. Vaild values:
    // 
    // - ExpireTimeStart：
    // Query start time for Subscription resource expiration.
    // <notice>Notice Note: Only supports querying service instances on private deployments.>Notice: 
    // 
    // - ExpireTimeEnd：Query end time for Subscription resource expiration.
    // <notice>Notice Note: Only supports querying service instances on private deployments.>Notice: 
    // 
    // - PayType：The billing method of the read-only instance. 
    // <notice>Notice Note: Only supports querying service instances on private deployments.<notice> 
    // 
    //    Valid values:
    // 
    //    - PayAsYouGo
    // 
    //    - Subscription
    // 
    // - ResourceARN：The Alibaba Cloud Resource Name (ARN) of a resource.
    std::shared_ptr<vector<ListServiceInstanceResourcesRequestFilters>> filters_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the next query. Valid values:
    // 
    // *   If **NextToken** is not returned, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID. Valid values:
    // 
    // *   cn-hangzhou: China (Hangzhou).
    // *   ap-southeast-1: Singapore.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the service instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
    // Service Instance resource type，include AliyunResource and ContainerResource.
    std::shared_ptr<string> serviceInstanceResourceType_ = nullptr;
    // The tag key and value.
    std::shared_ptr<vector<ListServiceInstanceResourcesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
