// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGRANTEDTOEXPRESSCONNECTROUTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGRANTEDTOEXPRESSCONNECTROUTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ExpressConnectRouter20230901
{
namespace Models
{
  class DescribeInstanceGrantedToExpressConnectRouterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceGrantedToExpressConnectRouterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallerType, callerType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EcrId, ecrId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_TO_JSON(InstanceRegionId, instanceRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(TagModels, tagModels_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceGrantedToExpressConnectRouterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallerType, callerType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EcrId, ecrId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceOwnerId, instanceOwnerId_);
      DARABONBA_PTR_FROM_JSON(InstanceRegionId, instanceRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(TagModels, tagModels_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    DescribeInstanceGrantedToExpressConnectRouterRequest() = default ;
    DescribeInstanceGrantedToExpressConnectRouterRequest(const DescribeInstanceGrantedToExpressConnectRouterRequest &) = default ;
    DescribeInstanceGrantedToExpressConnectRouterRequest(DescribeInstanceGrantedToExpressConnectRouterRequest &&) = default ;
    DescribeInstanceGrantedToExpressConnectRouterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceGrantedToExpressConnectRouterRequest() = default ;
    DescribeInstanceGrantedToExpressConnectRouterRequest& operator=(const DescribeInstanceGrantedToExpressConnectRouterRequest &) = default ;
    DescribeInstanceGrantedToExpressConnectRouterRequest& operator=(DescribeInstanceGrantedToExpressConnectRouterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagModels& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, TagModels& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      TagModels() = default ;
      TagModels(const TagModels &) = default ;
      TagModels(TagModels &&) = default ;
      TagModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagModels() = default ;
      TagModels& operator=(const TagModels &) = default ;
      TagModels& operator=(TagModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline TagModels& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline TagModels& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The tag key of the resource. You can specify up to 20 tag keys. If you specify this parameter, you cannot specify an empty string.
      // 
      // The tag key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> tagKey_ {};
      // The tag value of the resource. You can specify up to 20 tag values. If you specify this parameter, you cannot specify an empty string.
      // 
      // The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->callerType_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->ecrId_ == nullptr && this->instanceId_ == nullptr && this->instanceOwnerId_ == nullptr
        && this->instanceRegionId_ == nullptr && this->instanceType_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceGroupId_ == nullptr
        && this->tagModels_ == nullptr && this->version_ == nullptr; };
    // callerType Field Functions 
    bool hasCallerType() const { return this->callerType_ != nullptr;};
    void deleteCallerType() { this->callerType_ = nullptr;};
    inline string getCallerType() const { DARABONBA_PTR_GET_DEFAULT(callerType_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setCallerType(string callerType) { DARABONBA_PTR_SET_VALUE(callerType_, callerType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string getEcrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t getInstanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


    // instanceRegionId Field Functions 
    bool hasInstanceRegionId() const { return this->instanceRegionId_ != nullptr;};
    void deleteInstanceRegionId() { this->instanceRegionId_ = nullptr;};
    inline string getInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(instanceRegionId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setInstanceRegionId(string instanceRegionId) { DARABONBA_PTR_SET_VALUE(instanceRegionId_, instanceRegionId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tagModels Field Functions 
    bool hasTagModels() const { return this->tagModels_ != nullptr;};
    void deleteTagModels() { this->tagModels_ = nullptr;};
    inline const vector<DescribeInstanceGrantedToExpressConnectRouterRequest::TagModels> & getTagModels() const { DARABONBA_PTR_GET_CONST(tagModels_, vector<DescribeInstanceGrantedToExpressConnectRouterRequest::TagModels>) };
    inline vector<DescribeInstanceGrantedToExpressConnectRouterRequest::TagModels> getTagModels() { DARABONBA_PTR_GET(tagModels_, vector<DescribeInstanceGrantedToExpressConnectRouterRequest::TagModels>) };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setTagModels(const vector<DescribeInstanceGrantedToExpressConnectRouterRequest::TagModels> & tagModels) { DARABONBA_PTR_SET_VALUE(tagModels_, tagModels) };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setTagModels(vector<DescribeInstanceGrantedToExpressConnectRouterRequest::TagModels> && tagModels) { DARABONBA_PTR_SET_RVALUE(tagModels_, tagModels) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The type of the caller. Valid values:
    // 
    // - ECR
    // - OTHER
    // 
    // Default value: ECR.
    shared_ptr<string> callerType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the parameter value from your client to ensure that the value is unique across different requests. The ClientToken parameter supports only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run. The request is checked but EPS resources are not modified.
    // 
    // - **false** (default): sends a normal request.
    shared_ptr<bool> dryRun_ {};
    // The instance ID of the Express Connect Router (ECR).
    // 
    // This parameter is required.
    shared_ptr<string> ecrId_ {};
    // The ID of the authorized instance.
    shared_ptr<string> instanceId_ {};
    // The ID of the Alibaba Cloud account to which the authorized network instance belongs.
    shared_ptr<int64_t> instanceOwnerId_ {};
    // The region where the authorized network instance resides.
    shared_ptr<string> instanceRegionId_ {};
    // The type of the network instance. Valid values:
    // - **VBR**: VBR instance.
    // - **VPC**: VPC instance.
    shared_ptr<string> instanceType_ {};
    // The maximum number of entries to return. Valid values: 1 to 2147483647. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Valid values:
    // 
    // - If this is the first query or no next query is available, leave this parameter empty.
    // - If a next query is available, set the value to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The list of tags.
    shared_ptr<vector<DescribeInstanceGrantedToExpressConnectRouterRequest::TagModels>> tagModels_ {};
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
