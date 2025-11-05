// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERDISKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDBLOCKSTORAGECLUSTERDISKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDedicatedBlockStorageClusterDisksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedBlockStorageClusterDisksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbscId, dbscId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedBlockStorageClusterDisksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbscId, dbscId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDedicatedBlockStorageClusterDisksRequest() = default ;
    DescribeDedicatedBlockStorageClusterDisksRequest(const DescribeDedicatedBlockStorageClusterDisksRequest &) = default ;
    DescribeDedicatedBlockStorageClusterDisksRequest(DescribeDedicatedBlockStorageClusterDisksRequest &&) = default ;
    DescribeDedicatedBlockStorageClusterDisksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedBlockStorageClusterDisksRequest() = default ;
    DescribeDedicatedBlockStorageClusterDisksRequest& operator=(const DescribeDedicatedBlockStorageClusterDisksRequest &) = default ;
    DescribeDedicatedBlockStorageClusterDisksRequest& operator=(DescribeDedicatedBlockStorageClusterDisksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbscId_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr; };
    // dbscId Field Functions 
    bool hasDbscId() const { return this->dbscId_ != nullptr;};
    void deleteDbscId() { this->dbscId_ = nullptr;};
    inline string dbscId() const { DARABONBA_PTR_GET_DEFAULT(dbscId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksRequest& setDbscId(string dbscId) { DARABONBA_PTR_SET_VALUE(dbscId_, dbscId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeDedicatedBlockStorageClusterDisksRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedBlockStorageClusterDisksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the dedicated block storage cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> dbscId_ = nullptr;
    // The maximum number of entries to return on each page. Maximum value: 500.
    // 
    // Default value: 10.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The query token. Set the value to the NextToken value returned in the previous call to the DescribeDedicatedBlockStorageClusterDisks operation. Leave this parameter empty the first time you call this operation.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region where the dedicated block storage cluster resides. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
