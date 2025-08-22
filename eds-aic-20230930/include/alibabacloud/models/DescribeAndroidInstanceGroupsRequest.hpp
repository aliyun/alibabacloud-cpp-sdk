// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAndroidInstanceGroupsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstanceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstanceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_TO_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstanceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyGroupId, policyGroupId_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeAndroidInstanceGroupsRequest() = default ;
    DescribeAndroidInstanceGroupsRequest(const DescribeAndroidInstanceGroupsRequest &) = default ;
    DescribeAndroidInstanceGroupsRequest(DescribeAndroidInstanceGroupsRequest &&) = default ;
    DescribeAndroidInstanceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstanceGroupsRequest() = default ;
    DescribeAndroidInstanceGroupsRequest& operator=(const DescribeAndroidInstanceGroupsRequest &) = default ;
    DescribeAndroidInstanceGroupsRequest& operator=(DescribeAndroidInstanceGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizRegionId_ != nullptr
        && this->chargeType_ != nullptr && this->instanceGroupIds_ != nullptr && this->instanceGroupName_ != nullptr && this->keyPairId_ != nullptr && this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->policyGroupId_ != nullptr && this->saleMode_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr; };
    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & instanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> instanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline DescribeAndroidInstanceGroupsRequest& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline DescribeAndroidInstanceGroupsRequest& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


    // instanceGroupName Field Functions 
    bool hasInstanceGroupName() const { return this->instanceGroupName_ != nullptr;};
    void deleteInstanceGroupName() { this->instanceGroupName_ = nullptr;};
    inline string instanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupName_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setInstanceGroupName(string instanceGroupName) { DARABONBA_PTR_SET_VALUE(instanceGroupName_, instanceGroupName) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAndroidInstanceGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyGroupId Field Functions 
    bool hasPolicyGroupId() const { return this->policyGroupId_ != nullptr;};
    void deletePolicyGroupId() { this->policyGroupId_ = nullptr;};
    inline string policyGroupId() const { DARABONBA_PTR_GET_DEFAULT(policyGroupId_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setPolicyGroupId(string policyGroupId) { DARABONBA_PTR_SET_VALUE(policyGroupId_, policyGroupId) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string saleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAndroidInstanceGroupsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<DescribeAndroidInstanceGroupsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DescribeAndroidInstanceGroupsRequestTags>) };
    inline vector<DescribeAndroidInstanceGroupsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<DescribeAndroidInstanceGroupsRequestTags>) };
    inline DescribeAndroidInstanceGroupsRequest& setTags(const vector<DescribeAndroidInstanceGroupsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAndroidInstanceGroupsRequest& setTags(vector<DescribeAndroidInstanceGroupsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the region.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PrePaid: subscription
    // *   PostPaid: pay-as-you-go
    std::shared_ptr<string> chargeType_ = nullptr;
    // The IDs of the instance groups.
    std::shared_ptr<vector<string>> instanceGroupIds_ = nullptr;
    // The name of the instance group. Instance groups support fuzzy search by name.
    std::shared_ptr<string> instanceGroupName_ = nullptr;
    // The ID of the key pair.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The maximum number of entries per page. Value range: 0 to 100. Default value: 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyGroupId_ = nullptr;
    // The purchase mode of cloud phone instances.
    // 
    // Valid values:
    // 
    // *   Instance (default): the instance group mode.
    // *   Node: the matrix mode [whitelisted].
    std::shared_ptr<string> saleMode_ = nullptr;
    // The status of the instance group.
    // 
    // Valid values:
    // 
    // *   UPDATING_FAILED: The image update for the instance group failed.
    // *   FAILED: The instance group failed to be created.
    // *   RUNNING: The instance group is available.
    // *   EXPIRED: The instance group expired.
    // *   DELETING: The instance group is being deleted.
    // *   DELETED: The instance group is deleted.
    // *   UPDATING: The instance group is undergoing an image update.
    // *   CREATING: The instance group is being created.
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<DescribeAndroidInstanceGroupsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
