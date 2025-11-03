// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRIVESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRIVESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDrivesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrivesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrivesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeDrivesRequest() = default ;
    DescribeDrivesRequest(const DescribeDrivesRequest &) = default ;
    DescribeDrivesRequest(DescribeDrivesRequest &&) = default ;
    DescribeDrivesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrivesRequest() = default ;
    DescribeDrivesRequest& operator=(const DescribeDrivesRequest &) = default ;
    DescribeDrivesRequest& operator=(DescribeDrivesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainIds_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr && return this->resourceType_ == nullptr && return this->userId_ == nullptr; };
    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & domainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> domainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline DescribeDrivesRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline DescribeDrivesRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDrivesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDrivesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDrivesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeDrivesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeDrivesRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The IDs of the storage resources.
    std::shared_ptr<vector<string>> domainIds_ = nullptr;
    // The number of entries per page.
    // 
    // *   Maximum value: 500.
    // *   Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the storage resource.
    // 
    // Valid values:
    // 
    // *   NAS: NAS storage
    // *   PDS: PDS storage
    std::shared_ptr<string> resourceType_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
