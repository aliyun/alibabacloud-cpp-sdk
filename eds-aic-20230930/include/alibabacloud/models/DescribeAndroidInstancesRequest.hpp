// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANDROIDINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of the tag.
      shared_ptr<string> key_ {};
      // The value of the tag.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->androidInstanceIds_ == nullptr
        && this->androidInstanceName_ == nullptr && this->appManagePolicyId_ == nullptr && this->authorizedUserId_ == nullptr && this->bizRegionId_ == nullptr && this->chargeType_ == nullptr
        && this->instanceGroupId_ == nullptr && this->instanceGroupIds_ == nullptr && this->instanceGroupName_ == nullptr && this->keyPairId_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->officeSiteIds_ == nullptr && this->privateIpAddress_ == nullptr
        && this->qosRuleIds_ == nullptr && this->saleMode_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr; };
    // androidInstanceIds Field Functions 
    bool hasAndroidInstanceIds() const { return this->androidInstanceIds_ != nullptr;};
    void deleteAndroidInstanceIds() { this->androidInstanceIds_ = nullptr;};
    inline const vector<string> & getAndroidInstanceIds() const { DARABONBA_PTR_GET_CONST(androidInstanceIds_, vector<string>) };
    inline vector<string> getAndroidInstanceIds() { DARABONBA_PTR_GET(androidInstanceIds_, vector<string>) };
    inline DescribeAndroidInstancesRequest& setAndroidInstanceIds(const vector<string> & androidInstanceIds) { DARABONBA_PTR_SET_VALUE(androidInstanceIds_, androidInstanceIds) };
    inline DescribeAndroidInstancesRequest& setAndroidInstanceIds(vector<string> && androidInstanceIds) { DARABONBA_PTR_SET_RVALUE(androidInstanceIds_, androidInstanceIds) };


    // androidInstanceName Field Functions 
    bool hasAndroidInstanceName() const { return this->androidInstanceName_ != nullptr;};
    void deleteAndroidInstanceName() { this->androidInstanceName_ = nullptr;};
    inline string getAndroidInstanceName() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceName_, "") };
    inline DescribeAndroidInstancesRequest& setAndroidInstanceName(string androidInstanceName) { DARABONBA_PTR_SET_VALUE(androidInstanceName_, androidInstanceName) };


    // appManagePolicyId Field Functions 
    bool hasAppManagePolicyId() const { return this->appManagePolicyId_ != nullptr;};
    void deleteAppManagePolicyId() { this->appManagePolicyId_ = nullptr;};
    inline string getAppManagePolicyId() const { DARABONBA_PTR_GET_DEFAULT(appManagePolicyId_, "") };
    inline DescribeAndroidInstancesRequest& setAppManagePolicyId(string appManagePolicyId) { DARABONBA_PTR_SET_VALUE(appManagePolicyId_, appManagePolicyId) };


    // authorizedUserId Field Functions 
    bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
    void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
    inline string getAuthorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, "") };
    inline DescribeAndroidInstancesRequest& setAuthorizedUserId(string authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string getBizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline DescribeAndroidInstancesRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeAndroidInstancesRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string getInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline DescribeAndroidInstancesRequest& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & getInstanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> getInstanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline DescribeAndroidInstancesRequest& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline DescribeAndroidInstancesRequest& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


    // instanceGroupName Field Functions 
    bool hasInstanceGroupName() const { return this->instanceGroupName_ != nullptr;};
    void deleteInstanceGroupName() { this->instanceGroupName_ = nullptr;};
    inline string getInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupName_, "") };
    inline DescribeAndroidInstancesRequest& setInstanceGroupName(string instanceGroupName) { DARABONBA_PTR_SET_VALUE(instanceGroupName_, instanceGroupName) };


    // keyPairId Field Functions 
    bool hasKeyPairId() const { return this->keyPairId_ != nullptr;};
    void deleteKeyPairId() { this->keyPairId_ = nullptr;};
    inline string getKeyPairId() const { DARABONBA_PTR_GET_DEFAULT(keyPairId_, "") };
    inline DescribeAndroidInstancesRequest& setKeyPairId(string keyPairId) { DARABONBA_PTR_SET_VALUE(keyPairId_, keyPairId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAndroidInstancesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAndroidInstancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeAndroidInstancesRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeAndroidInstancesRequest& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // officeSiteIds Field Functions 
    bool hasOfficeSiteIds() const { return this->officeSiteIds_ != nullptr;};
    void deleteOfficeSiteIds() { this->officeSiteIds_ = nullptr;};
    inline const vector<string> & getOfficeSiteIds() const { DARABONBA_PTR_GET_CONST(officeSiteIds_, vector<string>) };
    inline vector<string> getOfficeSiteIds() { DARABONBA_PTR_GET(officeSiteIds_, vector<string>) };
    inline DescribeAndroidInstancesRequest& setOfficeSiteIds(const vector<string> & officeSiteIds) { DARABONBA_PTR_SET_VALUE(officeSiteIds_, officeSiteIds) };
    inline DescribeAndroidInstancesRequest& setOfficeSiteIds(vector<string> && officeSiteIds) { DARABONBA_PTR_SET_RVALUE(officeSiteIds_, officeSiteIds) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline DescribeAndroidInstancesRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // qosRuleIds Field Functions 
    bool hasQosRuleIds() const { return this->qosRuleIds_ != nullptr;};
    void deleteQosRuleIds() { this->qosRuleIds_ = nullptr;};
    inline const vector<string> & getQosRuleIds() const { DARABONBA_PTR_GET_CONST(qosRuleIds_, vector<string>) };
    inline vector<string> getQosRuleIds() { DARABONBA_PTR_GET(qosRuleIds_, vector<string>) };
    inline DescribeAndroidInstancesRequest& setQosRuleIds(const vector<string> & qosRuleIds) { DARABONBA_PTR_SET_VALUE(qosRuleIds_, qosRuleIds) };
    inline DescribeAndroidInstancesRequest& setQosRuleIds(vector<string> && qosRuleIds) { DARABONBA_PTR_SET_RVALUE(qosRuleIds_, qosRuleIds) };


    // saleMode Field Functions 
    bool hasSaleMode() const { return this->saleMode_ != nullptr;};
    void deleteSaleMode() { this->saleMode_ = nullptr;};
    inline string getSaleMode() const { DARABONBA_PTR_GET_DEFAULT(saleMode_, "") };
    inline DescribeAndroidInstancesRequest& setSaleMode(string saleMode) { DARABONBA_PTR_SET_VALUE(saleMode_, saleMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAndroidInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeAndroidInstancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeAndroidInstancesRequest::Tag>) };
    inline vector<DescribeAndroidInstancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeAndroidInstancesRequest::Tag>) };
    inline DescribeAndroidInstancesRequest& setTag(const vector<DescribeAndroidInstancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeAndroidInstancesRequest& setTag(vector<DescribeAndroidInstancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The IDs of the instances.
    shared_ptr<vector<string>> androidInstanceIds_ {};
    // The name of the instance.
    shared_ptr<string> androidInstanceName_ {};
    shared_ptr<string> appManagePolicyId_ {};
    shared_ptr<string> authorizedUserId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/2807298.html) operation to query the regions where Cloud Phone is supported.
    shared_ptr<string> bizRegionId_ {};
    // The billing method.
    // 
    // Valid values:
    // 
    // *   PostPaid: pay-as-you-go.
    // *   PrePaid: subscription.
    shared_ptr<string> chargeType_ {};
    // The ID of the instance group.
    shared_ptr<string> instanceGroupId_ {};
    // The IDs of the instance groups.
    shared_ptr<vector<string>> instanceGroupIds_ {};
    // The name of the instance group.
    shared_ptr<string> instanceGroupName_ {};
    // The ID of the bound key pair.
    shared_ptr<string> keyPairId_ {};
    // The maximum number of entries per page. Valid values: 1 to 100. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. If the parameter is left empty, the data is queried from the first entry.
    shared_ptr<string> nextToken_ {};
    // The ID of the node.
    shared_ptr<string> nodeId_ {};
    // The name of the node.
    shared_ptr<string> nodeName_ {};
    shared_ptr<vector<string>> officeSiteIds_ {};
    shared_ptr<string> privateIpAddress_ {};
    shared_ptr<vector<string>> qosRuleIds_ {};
    // The sales mode.
    // 
    // Valid values:
    // 
    // *   Instance: the standard mode.
    // *   Node: the node mode.
    shared_ptr<string> saleMode_ {};
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
    shared_ptr<string> status_ {};
    // The tags of the resources.
    shared_ptr<vector<DescribeAndroidInstancesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
