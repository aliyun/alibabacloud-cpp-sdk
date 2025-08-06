// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAndroidInstancesRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeAndroidInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAndroidInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_TO_JSON(AndroidInstanceName, androidInstanceName_);
      DARABONBA_PTR_TO_JSON(AppManagePolicyId, appManagePolicyId_);
      DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_TO_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_TO_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteIds, officeSiteIds_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(QosRuleIds, qosRuleIds_);
      DARABONBA_PTR_TO_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAndroidInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidInstanceIds, androidInstanceIds_);
      DARABONBA_PTR_FROM_JSON(AndroidInstanceName, androidInstanceName_);
      DARABONBA_PTR_FROM_JSON(AppManagePolicyId, appManagePolicyId_);
      DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupName, instanceGroupName_);
      DARABONBA_PTR_FROM_JSON(KeyPairId, keyPairId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteIds, officeSiteIds_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(QosRuleIds, qosRuleIds_);
      DARABONBA_PTR_FROM_JSON(SaleMode, saleMode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeAndroidInstancesRequest() = default ;
    DescribeAndroidInstancesRequest(const DescribeAndroidInstancesRequest &) = default ;
    DescribeAndroidInstancesRequest(DescribeAndroidInstancesRequest &&) = default ;
    DescribeAndroidInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAndroidInstancesRequest() = default ;
    DescribeAndroidInstancesRequest& operator=(const DescribeAndroidInstancesRequest &) = default ;
    DescribeAndroidInstancesRequest& operator=(DescribeAndroidInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->androidInstanceIds_ != nullptr
        && this->androidInstanceName_ != nullptr && this->appManagePolicyId_ != nullptr && this->authorizedUserId_ != nullptr && this->bizRegionId_ != nullptr && this->chargeType_ != nullptr
        && this->instanceGroupId_ != nullptr && this->instanceGroupIds_ != nullptr && this->instanceGroupName_ != nullptr && this->keyPairId_ != nullptr && this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->officeSiteIds_ != nullptr && this->privateIpAddress_ != nullptr
        && this->qosRuleIds_ != nullptr && this->saleMode_ != nullptr && this->status_ != nullptr && this->tag_ != nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & androidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> androidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline DescribeAndroidInstancesRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline DescribeAndroidInstancesRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // androidInstanceName Field Functions 
    bool hasAndroidInstanceName() const { return this->androidInstanceName_ != nullptr;};
    void deleteAndroidInstanceName() { this->androidInstanceName_ = nullptr;};
    inline string androidInstanceName() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceName_, "") };
    inline DescribeAndroidInstancesRequest& setAndroidInstanceName(string androidInstanceName) { DARABONBA_PTR_SET_VALUE(androidInstanceName_, androidInstanceName) };


    // appManagePolicyId Field Functions 
    bool hasAppManagePolicyId() const { return this->appManagePolicyId_ != nullptr;};
    void deleteAppManagePolicyId() { this->appManagePolicyId_ = nullptr;};
    inline string appManagePolicyId() const { DARABONBA_PTR_GET_DEFAULT(appManagePolicyId_, "") };
    inline DescribeAndroidInstancesRequest& setAppManagePolicyId(string appManagePolicyId) { DARABONBA_PTR_SET_VALUE(appManagePolicyId_, appManagePolicyId) };


    // authorizedUserId Field Functions 
    bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
    void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
    inline string authorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, "") };
    inline DescribeAndroidInstancesRequest& setAuthorizedUserId(string authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeAndroidInstancesRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeAndroidInstancesRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string instanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline DescribeAndroidInstancesRequest& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & instanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> instanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline DescribeAndroidInstancesRequest& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline DescribeAndroidInstancesRequest& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


    // instanceGroupName Field Functions 
    bool hasInstanceGroupName() const { return this->instanceGroupName_ != nullptr;};
    void deleteInstanceGroupName() { this->instanceGroupName_ = nullptr;};
    inline string instanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupName_, "") };
    inline DescribeAndroidInstancesRequest& setInstanceGroupName(string instanceGroupName) { DARABONBA_PTR_SET_VALUE(instanceGroupName_, instanceGroupName) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string keyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline DescribeAndroidInstancesRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAndroidInstancesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAndroidInstancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeAndroidInstancesRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeAndroidInstancesRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // officeSiteIds Field Functions 
    bool hasOfficeSiteIds() const { return this->officeSiteIds_ != nullptr;};
    void deleteOfficeSiteIds() { this->officeSiteIds_ = nullptr;};
    inline const vector<string> & officeSiteIds() const { DARABONBA_PTR_GET_CONST(officeSiteIds_, vector<string>) };
    inline vector<string> officeSiteIds() { DARABONBA_PTR_GET(officeSiteIds_, vector<string>) };
    inline DescribeAndroidInstancesRequest& setOfficeSiteIds(const vector<string> & officeSiteIds) { DARABONBA_PTR_SET_VALUE(officeSiteIds_, officeSiteIds) };
    inline DescribeAndroidInstancesRequest& setOfficeSiteIds(vector<string> && officeSiteIds) { DARABONBA_PTR_SET_RVALUE(officeSiteIds_, officeSiteIds) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string privateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeAndroidInstancesRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // qosRuleIds Field Functions 
    bool hasQosRuleIds() const { return this->qosRuleIds_ != nullptr;};
    void deleteQosRuleIds() { this->qosRuleIds_ = nullptr;};
    inline const vector<string> & qosRuleIds() const { DARABONBA_PTR_GET_CONST(qosRuleIds_, vector<string>) };
    inline vector<string> qosRuleIds() { DARABONBA_PTR_GET(qosRuleIds_, vector<string>) };
    inline DescribeAndroidInstancesRequest& setQosRuleIds(const vector<string> & qosRuleIds) { DARABONBA_PTR_SET_VALUE(qosRuleIds_, qosRuleIds) };
    inline DescribeAndroidInstancesRequest& setQosRuleIds(vector<string> && qosRuleIds) { DARABONBA_PTR_SET_RVALUE(qosRuleIds_, qosRuleIds) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string saleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline DescribeAndroidInstancesRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAndroidInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeAndroidInstancesRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeAndroidInstancesRequestTag>) };
    inline vector<DescribeAndroidInstancesRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeAndroidInstancesRequestTag>) };
    inline DescribeAndroidInstancesRequest& setTag(const vector<DescribeAndroidInstancesRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeAndroidInstancesRequest& setTag(vector<DescribeAndroidInstancesRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of the instances.
    std::shared_ptr<vector<string>> androidInstanceIds_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> androidInstanceName_ = nullptr;
    std::shared_ptr<string> appManagePolicyId_ = nullptr;
    std::shared_ptr<string> authorizedUserId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/2807298.html) operation to query the regions where Cloud Phone is supported.
    std::shared_ptr<string> bizRegionId_ = nullptr;
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go.
    // *   PrePaid: subscription.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> instanceGroupId_ = nullptr;
    // The IDs of the instance groups.
    std::shared_ptr<vector<string>> instanceGroupIds_ = nullptr;
    // The name of the instance group.
    std::shared_ptr<string> instanceGroupName_ = nullptr;
    // The ID of the bound key pair.
    std::shared_ptr<string> keyPairId_ = nullptr;
    // The maximum number of entries per page. Valid values: 1 to 100. Default value: 100.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. If the parameter is left empty, the data is queried from the first entry.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<vector<string>> officeSiteIds_ = nullptr;
    std::shared_ptr<string> privateIpAddress_ = nullptr;
    std::shared_ptr<vector<string>> qosRuleIds_ = nullptr;
    // The sales mode.
    // 
    // Valid values:
    // 
    // *   Instance: the standard mode.
    // *   Node: the node mode.
    std::shared_ptr<string> saleMode_ = nullptr;
    // The state of the instance.
    // 
    // Valid values:
    // 
    // *   BACKUPING: The instance is being backed up.
    // *   STARTING: The instance is being started.
    // *   RUNNING: The instance group is available.
    // *   DELETING: The instance is being deleted.
    // *   BACKUP_FAILED: The backup operation failed.
    // *   DELETED: The instance is deleted.
    // *   FAILED: The instance failed to be created.
    // *   STOPPED: The instance is stopped.
    // *   RECOVERING: The instance has an ongoing file recovery task.
    // *   UNAVAILABLE: The instance has an exception.
    // *   REBOOTING: The instance is being restarted.
    // *   RESETTING: The instance is being reset.
    // *   STOPPING: The instance is being stopped.
    // *   RECOVER_FAILED: The file recovery task failed.
    // *   CREATING: The instance is being created.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the resources.
    std::shared_ptr<vector<DescribeAndroidInstancesRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
