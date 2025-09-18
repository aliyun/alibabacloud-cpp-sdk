// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGRANTEDTOEXPRESSCONNECTROUTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEGRANTEDTOEXPRESSCONNECTROUTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceGrantedToExpressConnectRouterRequestTagModels.hpp>
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
    virtual bool empty() const override { this->callerType_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->ecrId_ != nullptr && this->instanceId_ != nullptr && this->instanceOwnerId_ != nullptr
        && this->instanceRegionId_ != nullptr && this->instanceType_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->resourceGroupId_ != nullptr
        && this->tagModels_ != nullptr && this->version_ != nullptr; };
    // callerType Field Functions 
    bool hasCallerType() const { return this->callerType_ != nullptr;};
    void deleteCallerType() { this->callerType_ = nullptr;};
    inline string callerType() const { DARABONBA_PTR_GET_DEFAULT(callerType_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setCallerType(string callerType) { DARABONBA_PTR_SET_VALUE(callerType_, callerType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ecrId Field Functions 
    bool hasEcrId() const { return this->ecrId_ != nullptr;};
    void deleteEcrId() { this->ecrId_ = nullptr;};
    inline string ecrId() const { DARABONBA_PTR_GET_DEFAULT(ecrId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setEcrId(string ecrId) { DARABONBA_PTR_SET_VALUE(ecrId_, ecrId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceOwnerId Field Functions 
    bool hasInstanceOwnerId() const { return this->instanceOwnerId_ != nullptr;};
    void deleteInstanceOwnerId() { this->instanceOwnerId_ = nullptr;};
    inline int64_t instanceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(instanceOwnerId_, 0L) };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setInstanceOwnerId(int64_t instanceOwnerId) { DARABONBA_PTR_SET_VALUE(instanceOwnerId_, instanceOwnerId) };


    // instanceRegionId Field Functions 
    bool hasInstanceRegionId() const { return this->instanceRegionId_ != nullptr;};
    void deleteInstanceRegionId() { this->instanceRegionId_ = nullptr;};
    inline string instanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(instanceRegionId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setInstanceRegionId(string instanceRegionId) { DARABONBA_PTR_SET_VALUE(instanceRegionId_, instanceRegionId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tagModels Field Functions 
    bool hasTagModels() const { return this->tagModels_ != nullptr;};
    void deleteTagModels() { this->tagModels_ = nullptr;};
    inline const vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels> & tagModels() const { DARABONBA_PTR_GET_CONST(tagModels_, vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels>) };
    inline vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels> tagModels() { DARABONBA_PTR_GET(tagModels_, vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels>) };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setTagModels(const vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels> & tagModels) { DARABONBA_PTR_SET_VALUE(tagModels_, tagModels) };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setTagModels(vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels> && tagModels) { DARABONBA_PTR_SET_RVALUE(tagModels_, tagModels) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeInstanceGrantedToExpressConnectRouterRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The type of the user account. Valid values:
    // 
    // *   **sub**: a Resource Access Management (RAM) user.
    // *   **parent**: an Alibaba Cloud account.
    std::shared_ptr<string> callerType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run.
    // *   **false** (default): performs a dry run and performs the actual request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The ECR ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> ecrId_ = nullptr;
    // The ID of the network instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the Alibaba Cloud account that owns the network instance.
    std::shared_ptr<int64_t> instanceOwnerId_ = nullptr;
    // The region ID of the network instance.
    std::shared_ptr<string> instanceRegionId_ = nullptr;
    // The type of the network instance. Valid values:
    // 
    // *   **VBR**
    // *   **VPC**
    std::shared_ptr<string> instanceType_ = nullptr;
    // The maximum number of entries to read. Valid values: 1 to 2147483647. Default value: 20.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the resource group to which the network instance belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<DescribeInstanceGrantedToExpressConnectRouterRequestTagModels>> tagModels_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ExpressConnectRouter20230901
#endif
