// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKPACKAGESREQUEST_HPP_
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
  class DescribeNetworkPackagesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkPackagesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkPackagesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeNetworkPackagesRequest() = default ;
    DescribeNetworkPackagesRequest(const DescribeNetworkPackagesRequest &) = default ;
    DescribeNetworkPackagesRequest(DescribeNetworkPackagesRequest &&) = default ;
    DescribeNetworkPackagesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkPackagesRequest() = default ;
    DescribeNetworkPackagesRequest& operator=(const DescribeNetworkPackagesRequest &) = default ;
    DescribeNetworkPackagesRequest& operator=(DescribeNetworkPackagesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->internetChargeType_ != nullptr
        && this->maxResults_ != nullptr && this->networkPackageId_ != nullptr && this->nextToken_ != nullptr && this->regionId_ != nullptr; };
    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string internetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline DescribeNetworkPackagesRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNetworkPackagesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline const vector<string> & networkPackageId() const { DARABONBA_PTR_GET_CONST(networkPackageId_, vector<string>) };
    inline vector<string> networkPackageId() { DARABONBA_PTR_GET(networkPackageId_, vector<string>) };
    inline DescribeNetworkPackagesRequest& setNetworkPackageId(const vector<string> & networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };
    inline DescribeNetworkPackagesRequest& setNetworkPackageId(vector<string> && networkPackageId) { DARABONBA_PTR_SET_RVALUE(networkPackageId_, networkPackageId) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNetworkPackagesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeNetworkPackagesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The charge type of the pay-as-you-go premium bandwidth plan.
    // 
    // Valid values:
    // 
    // *   PayByTraffic: charges by data transfer.
    // 
    // *   PayByBandwidth: charges by fixed bandwidth.
    std::shared_ptr<string> internetChargeType_ = nullptr;
    // The number of entries to return on each page.
    // 
    // *   Maximum value: 100
    // *   Default value: 10
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The ID of the premium bandwidth plan. You can specify 1 to 100 IDs.
    std::shared_ptr<vector<string>> networkPackageId_ = nullptr;
    // The token that determines the start point of the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
