// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class ListComputeJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Search, search_);
      DARABONBA_PTR_TO_JSON(SortDirection, sortDirection_);
      DARABONBA_PTR_TO_JSON(SortField, sortField_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Search, search_);
      DARABONBA_PTR_FROM_JSON(SortDirection, sortDirection_);
      DARABONBA_PTR_FROM_JSON(SortField, sortField_);
    };
    ListComputeJobsRequest() = default ;
    ListComputeJobsRequest(const ListComputeJobsRequest &) = default ;
    ListComputeJobsRequest(ListComputeJobsRequest &&) = default ;
    ListComputeJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeJobsRequest() = default ;
    ListComputeJobsRequest& operator=(const ListComputeJobsRequest &) = default ;
    ListComputeJobsRequest& operator=(ListComputeJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->search_ == nullptr && this->sortDirection_ == nullptr
        && this->sortField_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListComputeJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListComputeJobsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListComputeJobsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListComputeJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // search Field Functions 
    bool hasSearch() const { return this->search_ != nullptr;};
    void deleteSearch() { this->search_ = nullptr;};
    inline string getSearch() const { DARABONBA_PTR_GET_DEFAULT(search_, "") };
    inline ListComputeJobsRequest& setSearch(string search) { DARABONBA_PTR_SET_VALUE(search_, search) };


    // sortDirection Field Functions 
    bool hasSortDirection() const { return this->sortDirection_ != nullptr;};
    void deleteSortDirection() { this->sortDirection_ = nullptr;};
    inline string getSortDirection() const { DARABONBA_PTR_GET_DEFAULT(sortDirection_, "") };
    inline ListComputeJobsRequest& setSortDirection(string sortDirection) { DARABONBA_PTR_SET_VALUE(sortDirection_, sortDirection) };


    // sortField Field Functions 
    bool hasSortField() const { return this->sortField_ != nullptr;};
    void deleteSortField() { this->sortField_ = nullptr;};
    inline string getSortField() const { DARABONBA_PTR_GET_DEFAULT(sortField_, "") };
    inline ListComputeJobsRequest& setSortField(string sortField) { DARABONBA_PTR_SET_VALUE(sortField_, sortField) };


  protected:
    // The compute instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The maximum number of jobs to return in the current request. Default value: 10. Maximum value: 1000. If you set this parameter to 0, the default value is used.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Do not specify this parameter in the first request. For subsequent requests, use the `NextToken` value returned in the previous response.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The keyword used to search for jobs by name or remark.
    shared_ptr<string> search_ {};
    // The sort direction. The value is not case-sensitive. Valid values: `ASC` and `DESC`.
    shared_ptr<string> sortDirection_ {};
    // The sort field. Valid values: `createTime`, `cuReserved`, `cuLimit`, `cuUsed`, `status`, and `jobName`.
    shared_ptr<string> sortField_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
