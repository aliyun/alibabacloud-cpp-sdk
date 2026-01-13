// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class GetInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ElasticVCUUpperLimit, elasticVCUUpperLimit_);
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceSpecification, instanceSpecification_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(IsMultiAZ, isMultiAZ_);
      DARABONBA_PTR_TO_JSON(Network, network_);
      DARABONBA_PTR_TO_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_TO_JSON(NetworkTypeACL, networkTypeACL_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SPInstanceId, SPInstanceId_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      DARABONBA_PTR_TO_JSON(TableQuota, tableQuota_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VCUQuota, VCUQuota_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ElasticVCUUpperLimit, elasticVCUUpperLimit_);
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceSpecification, instanceSpecification_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(IsMultiAZ, isMultiAZ_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
      DARABONBA_PTR_FROM_JSON(NetworkSourceACL, networkSourceACL_);
      DARABONBA_PTR_FROM_JSON(NetworkTypeACL, networkTypeACL_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(PolicyVersion, policyVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SPInstanceId, SPInstanceId_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      DARABONBA_PTR_FROM_JSON(TableQuota, tableQuota_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VCUQuota, VCUQuota_);
    };
    GetInstanceResponseBody() = default ;
    GetInstanceResponseBody(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody(GetInstanceResponseBody &&) = default ;
    GetInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBody() = default ;
    GetInstanceResponseBody& operator=(const GetInstanceResponseBody &) = default ;
    GetInstanceResponseBody& operator=(GetInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->tagKey_ == nullptr && this->tagValue_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // (Deprecated) The tag key.
      shared_ptr<string> tagKey_ {};
      // (Deprecated) The tag value.
      shared_ptr<string> tagValue_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->createTime_ == nullptr && this->elasticVCUUpperLimit_ == nullptr && this->instanceDescription_ == nullptr && this->instanceName_ == nullptr && this->instanceSpecification_ == nullptr
        && this->instanceStatus_ == nullptr && this->isMultiAZ_ == nullptr && this->network_ == nullptr && this->networkSourceACL_ == nullptr && this->networkTypeACL_ == nullptr
        && this->paymentType_ == nullptr && this->policy_ == nullptr && this->policyVersion_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->SPInstanceId_ == nullptr && this->storageType_ == nullptr && this->tableQuota_ == nullptr && this->tags_ == nullptr
        && this->userId_ == nullptr && this->VCUQuota_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline GetInstanceResponseBody& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetInstanceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // elasticVCUUpperLimit Field Functions 
    bool hasElasticVCUUpperLimit() const { return this->elasticVCUUpperLimit_ != nullptr;};
    void deleteElasticVCUUpperLimit() { this->elasticVCUUpperLimit_ = nullptr;};
    inline float getElasticVCUUpperLimit() const { DARABONBA_PTR_GET_DEFAULT(elasticVCUUpperLimit_, 0.0) };
    inline GetInstanceResponseBody& setElasticVCUUpperLimit(float elasticVCUUpperLimit) { DARABONBA_PTR_SET_VALUE(elasticVCUUpperLimit_, elasticVCUUpperLimit) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline GetInstanceResponseBody& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetInstanceResponseBody& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceSpecification Field Functions 
    bool hasInstanceSpecification() const { return this->instanceSpecification_ != nullptr;};
    void deleteInstanceSpecification() { this->instanceSpecification_ = nullptr;};
    inline string getInstanceSpecification() const { DARABONBA_PTR_GET_DEFAULT(instanceSpecification_, "") };
    inline GetInstanceResponseBody& setInstanceSpecification(string instanceSpecification) { DARABONBA_PTR_SET_VALUE(instanceSpecification_, instanceSpecification) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline GetInstanceResponseBody& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // isMultiAZ Field Functions 
    bool hasIsMultiAZ() const { return this->isMultiAZ_ != nullptr;};
    void deleteIsMultiAZ() { this->isMultiAZ_ = nullptr;};
    inline bool getIsMultiAZ() const { DARABONBA_PTR_GET_DEFAULT(isMultiAZ_, false) };
    inline GetInstanceResponseBody& setIsMultiAZ(bool isMultiAZ) { DARABONBA_PTR_SET_VALUE(isMultiAZ_, isMultiAZ) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
    inline GetInstanceResponseBody& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


    // networkSourceACL Field Functions 
    bool hasNetworkSourceACL() const { return this->networkSourceACL_ != nullptr;};
    void deleteNetworkSourceACL() { this->networkSourceACL_ = nullptr;};
    inline const vector<string> & getNetworkSourceACL() const { DARABONBA_PTR_GET_CONST(networkSourceACL_, vector<string>) };
    inline vector<string> getNetworkSourceACL() { DARABONBA_PTR_GET(networkSourceACL_, vector<string>) };
    inline GetInstanceResponseBody& setNetworkSourceACL(const vector<string> & networkSourceACL) { DARABONBA_PTR_SET_VALUE(networkSourceACL_, networkSourceACL) };
    inline GetInstanceResponseBody& setNetworkSourceACL(vector<string> && networkSourceACL) { DARABONBA_PTR_SET_RVALUE(networkSourceACL_, networkSourceACL) };


    // networkTypeACL Field Functions 
    bool hasNetworkTypeACL() const { return this->networkTypeACL_ != nullptr;};
    void deleteNetworkTypeACL() { this->networkTypeACL_ = nullptr;};
    inline const vector<string> & getNetworkTypeACL() const { DARABONBA_PTR_GET_CONST(networkTypeACL_, vector<string>) };
    inline vector<string> getNetworkTypeACL() { DARABONBA_PTR_GET(networkTypeACL_, vector<string>) };
    inline GetInstanceResponseBody& setNetworkTypeACL(const vector<string> & networkTypeACL) { DARABONBA_PTR_SET_VALUE(networkTypeACL_, networkTypeACL) };
    inline GetInstanceResponseBody& setNetworkTypeACL(vector<string> && networkTypeACL) { DARABONBA_PTR_SET_RVALUE(networkTypeACL_, networkTypeACL) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetInstanceResponseBody& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetInstanceResponseBody& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // policyVersion Field Functions 
    bool hasPolicyVersion() const { return this->policyVersion_ != nullptr;};
    void deletePolicyVersion() { this->policyVersion_ = nullptr;};
    inline int64_t getPolicyVersion() const { DARABONBA_PTR_GET_DEFAULT(policyVersion_, 0L) };
    inline GetInstanceResponseBody& setPolicyVersion(int64_t policyVersion) { DARABONBA_PTR_SET_VALUE(policyVersion_, policyVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetInstanceResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // SPInstanceId Field Functions 
    bool hasSPInstanceId() const { return this->SPInstanceId_ != nullptr;};
    void deleteSPInstanceId() { this->SPInstanceId_ = nullptr;};
    inline string getSPInstanceId() const { DARABONBA_PTR_GET_DEFAULT(SPInstanceId_, "") };
    inline GetInstanceResponseBody& setSPInstanceId(string SPInstanceId) { DARABONBA_PTR_SET_VALUE(SPInstanceId_, SPInstanceId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline GetInstanceResponseBody& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tableQuota Field Functions 
    bool hasTableQuota() const { return this->tableQuota_ != nullptr;};
    void deleteTableQuota() { this->tableQuota_ = nullptr;};
    inline int32_t getTableQuota() const { DARABONBA_PTR_GET_DEFAULT(tableQuota_, 0) };
    inline GetInstanceResponseBody& setTableQuota(int32_t tableQuota) { DARABONBA_PTR_SET_VALUE(tableQuota_, tableQuota) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetInstanceResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetInstanceResponseBody::Tags>) };
    inline vector<GetInstanceResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetInstanceResponseBody::Tags>) };
    inline GetInstanceResponseBody& setTags(const vector<GetInstanceResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetInstanceResponseBody& setTags(vector<GetInstanceResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetInstanceResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // VCUQuota Field Functions 
    bool hasVCUQuota() const { return this->VCUQuota_ != nullptr;};
    void deleteVCUQuota() { this->VCUQuota_ = nullptr;};
    inline int32_t getVCUQuota() const { DARABONBA_PTR_GET_DEFAULT(VCUQuota_, 0) };
    inline GetInstanceResponseBody& setVCUQuota(int32_t VCUQuota) { DARABONBA_PTR_SET_VALUE(VCUQuota_, VCUQuota) };


  protected:
    // The instance alias.
    shared_ptr<string> aliasName_ {};
    // The time when the instance was created.
    shared_ptr<string> createTime_ {};
    // The upper limit for the VCUs of the instance.
    shared_ptr<float> elasticVCUUpperLimit_ {};
    // The description of the instance.
    shared_ptr<string> instanceDescription_ {};
    // The name of the instance.
    shared_ptr<string> instanceName_ {};
    // The type of the instance.
    // 
    // *   SSD: high-performance instance
    // *   HYBRID: capacity instance
    shared_ptr<string> instanceSpecification_ {};
    // The status of the instance.
    // 
    // *   normal: The instance works as expected.
    // *   forbidden: The instance is disabled.
    // *   Deleting: The instance is being deleted.
    shared_ptr<string> instanceStatus_ {};
    // Indicates whether zone-redundant storage (ZRS) is enabled for the instance.
    // 
    // *   true: ZRS is enabled for the instance.
    // *   false: Locally redundant storage (LRS) is enabled for the instance.
    shared_ptr<bool> isMultiAZ_ {};
    // The network type of the instance. Valid values:
    // 
    // *   VPC: The instance can be accessed only over the bound virtual private clouds (VPCs).
    // *   VPC_CONSOLE: The instance can be accessed from the Tablestore console or over the bound VPCs.
    // *   NORMAL: The instance can be accessed from networks of the custom types.
    shared_ptr<string> network_ {};
    // The sources of the network from which access is allowed. Valid value:
    // 
    // TRUST_PROXY: console
    shared_ptr<vector<string>> networkSourceACL_ {};
    // The types of the network from which access is allowed. Valid values:
    // 
    // *   CLASSIC: the classic network
    // *   INTERNET: the Internet
    // *   VPC: VPCs
    shared_ptr<vector<string>> networkTypeACL_ {};
    // The billing method. Valid values:
    // 
    // *   Subscription: subscription
    // *   PayAsYouGo: pay-as-you-go
    shared_ptr<string> paymentType_ {};
    // The instance policy.
    shared_ptr<string> policy_ {};
    // The version of the instance policy.
    shared_ptr<int64_t> policyVersion_ {};
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The request ID, which can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The ID of the instance.
    shared_ptr<string> SPInstanceId_ {};
    // The storage type.
    // 
    // *   SSD: high-performance
    // *   HYBRID: capacity
    shared_ptr<string> storageType_ {};
    // The total number of tables in the instance.
    shared_ptr<int32_t> tableQuota_ {};
    // The tags of the instance.
    shared_ptr<vector<GetInstanceResponseBody::Tags>> tags_ {};
    // The user ID.
    shared_ptr<string> userId_ {};
    // The VCU quota.
    shared_ptr<int32_t> VCUQuota_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
