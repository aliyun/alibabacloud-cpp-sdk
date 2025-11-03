// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeAutoSnapshotPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeAutoSnapshotPolicyRequest() = default ;
    DescribeAutoSnapshotPolicyRequest(const DescribeAutoSnapshotPolicyRequest &) = default ;
    DescribeAutoSnapshotPolicyRequest(DescribeAutoSnapshotPolicyRequest &&) = default ;
    DescribeAutoSnapshotPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPolicyRequest() = default ;
    DescribeAutoSnapshotPolicyRequest& operator=(const DescribeAutoSnapshotPolicyRequest &) = default ;
    DescribeAutoSnapshotPolicyRequest& operator=(DescribeAutoSnapshotPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->policyId_ == nullptr && return this->policyName_ == nullptr && return this->regionId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAutoSnapshotPolicyRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAutoSnapshotPolicyRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribeAutoSnapshotPolicyRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyName Field Functions 
    bool hasPolicyName() const { return this->policyName_ != nullptr;};
    void deletePolicyName() { this->policyName_ = nullptr;};
    inline string policyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
    inline DescribeAutoSnapshotPolicyRequest& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAutoSnapshotPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The number of entries per page.
    // 
    // *   Maximum value: 50.
    // *   Default value: 50.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the next query. If this parameter is left empty, all results are returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the automatic snapshot policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // The name of the automatic snapshot policy.
    std::shared_ptr<string> policyName_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
