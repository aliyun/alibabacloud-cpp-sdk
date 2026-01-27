// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPAIRDRILLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPAIRDRILLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribePairDrillsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePairDrillsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DrillId, drillId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PairId, pairId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePairDrillsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DrillId, drillId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PairId, pairId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribePairDrillsRequest() = default ;
    DescribePairDrillsRequest(const DescribePairDrillsRequest &) = default ;
    DescribePairDrillsRequest(DescribePairDrillsRequest &&) = default ;
    DescribePairDrillsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePairDrillsRequest() = default ;
    DescribePairDrillsRequest& operator=(const DescribePairDrillsRequest &) = default ;
    DescribePairDrillsRequest& operator=(DescribePairDrillsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->drillId_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->pairId_ == nullptr
        && this->regionId_ == nullptr; };
    // drillId Field Functions 
    bool hasDrillId() const { return this->drillId_ != nullptr;};
    void deleteDrillId() { this->drillId_ = nullptr;};
    inline string getDrillId() const { DARABONBA_PTR_GET_DEFAULT(drillId_, "") };
    inline DescribePairDrillsRequest& setDrillId(string drillId) { DARABONBA_PTR_SET_VALUE(drillId_, drillId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribePairDrillsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePairDrillsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePairDrillsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePairDrillsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pairId Field Functions 
    bool hasPairId() const { return this->pairId_ != nullptr;};
    void deletePairId() { this->pairId_ = nullptr;};
    inline string getPairId() const { DARABONBA_PTR_GET_DEFAULT(pairId_, "") };
    inline DescribePairDrillsRequest& setPairId(string pairId) { DARABONBA_PTR_SET_VALUE(pairId_, pairId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePairDrillsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the drill.
    shared_ptr<string> drillId_ {};
    // The maximum number of entries to be returned. You can use this parameter together with NextToken.
    // 
    // Valid values: 1 to 500.
    // 
    // Default value: 10.
    shared_ptr<int64_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. Set the value to the NextToken value returned in the previous call to the DescribeDiskReplicaPairs operation. Leave this parameter empty the first time you call this operation. When you specify NextToken, the PageSize and PageNumber request parameters do not take effect and the TotalCount response parameter is invalid.
    shared_ptr<string> nextToken_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the replication pair. You can call the [DescribeDiskReplicaPairs](https://help.aliyun.com/document_detail/354206.html) operation to query a list of asynchronous replication pairs, including replication pair IDs.
    // 
    // This parameter is required.
    shared_ptr<string> pairId_ {};
    // The region ID of the primary or secondary disk in the async replication pair. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/354276.html) operation to query the most recent list of regions in which async replication is supported.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
