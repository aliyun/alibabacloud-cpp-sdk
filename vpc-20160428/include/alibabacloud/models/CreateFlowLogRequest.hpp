// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFLOWLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFLOWLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateFlowLogRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateFlowLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFlowLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationInterval, aggregationInterval_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TrafficPath, trafficPath_);
      DARABONBA_PTR_TO_JSON(TrafficType, trafficType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFlowLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationInterval, aggregationInterval_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FlowLogName, flowLogName_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TrafficPath, trafficPath_);
      DARABONBA_PTR_FROM_JSON(TrafficType, trafficType_);
    };
    CreateFlowLogRequest() = default ;
    CreateFlowLogRequest(const CreateFlowLogRequest &) = default ;
    CreateFlowLogRequest(CreateFlowLogRequest &&) = default ;
    CreateFlowLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFlowLogRequest() = default ;
    CreateFlowLogRequest& operator=(const CreateFlowLogRequest &) = default ;
    CreateFlowLogRequest& operator=(CreateFlowLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aggregationInterval_ != nullptr
        && this->description_ != nullptr && this->flowLogName_ != nullptr && this->ipVersion_ != nullptr && this->logStoreName_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->projectName_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->resourceType_ != nullptr && this->tag_ != nullptr && this->trafficPath_ != nullptr
        && this->trafficType_ != nullptr; };
    // aggregationInterval Field Functions 
    bool hasAggregationInterval() const { return this->aggregationInterval_ != nullptr;};
    void deleteAggregationInterval() { this->aggregationInterval_ = nullptr;};
    inline int32_t aggregationInterval() const { DARABONBA_PTR_GET_DEFAULT(aggregationInterval_, 0) };
    inline CreateFlowLogRequest& setAggregationInterval(int32_t aggregationInterval) { DARABONBA_PTR_SET_VALUE(aggregationInterval_, aggregationInterval) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFlowLogRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // flowLogName Field Functions 
    bool hasFlowLogName() const { return this->flowLogName_ != nullptr;};
    void deleteFlowLogName() { this->flowLogName_ = nullptr;};
    inline string flowLogName() const { DARABONBA_PTR_GET_DEFAULT(flowLogName_, "") };
    inline CreateFlowLogRequest& setFlowLogName(string flowLogName) { DARABONBA_PTR_SET_VALUE(flowLogName_, flowLogName) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline CreateFlowLogRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // logStoreName Field Functions 
    bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
    void deleteLogStoreName() { this->logStoreName_ = nullptr;};
    inline string logStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
    inline CreateFlowLogRequest& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateFlowLogRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateFlowLogRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateFlowLogRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateFlowLogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateFlowLogRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateFlowLogRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateFlowLogRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateFlowLogRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateFlowLogRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateFlowLogRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateFlowLogRequestTag>) };
    inline vector<CreateFlowLogRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateFlowLogRequestTag>) };
    inline CreateFlowLogRequest& setTag(const vector<CreateFlowLogRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateFlowLogRequest& setTag(vector<CreateFlowLogRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // trafficPath Field Functions 
    bool hasTrafficPath() const { return this->trafficPath_ != nullptr;};
    void deleteTrafficPath() { this->trafficPath_ = nullptr;};
    inline const vector<string> & trafficPath() const { DARABONBA_PTR_GET_CONST(trafficPath_, vector<string>) };
    inline vector<string> trafficPath() { DARABONBA_PTR_GET(trafficPath_, vector<string>) };
    inline CreateFlowLogRequest& setTrafficPath(const vector<string> & trafficPath) { DARABONBA_PTR_SET_VALUE(trafficPath_, trafficPath) };
    inline CreateFlowLogRequest& setTrafficPath(vector<string> && trafficPath) { DARABONBA_PTR_SET_RVALUE(trafficPath_, trafficPath) };


    // trafficType Field Functions 
    bool hasTrafficType() const { return this->trafficType_ != nullptr;};
    void deleteTrafficType() { this->trafficType_ = nullptr;};
    inline string trafficType() const { DARABONBA_PTR_GET_DEFAULT(trafficType_, "") };
    inline CreateFlowLogRequest& setTrafficType(string trafficType) { DARABONBA_PTR_SET_VALUE(trafficType_, trafficType) };


  protected:
    // The sampling interval of the flow log. Unit: seconds. Valid values: **1**, **5**, and **10** (default).
    std::shared_ptr<int32_t> aggregationInterval_ = nullptr;
    // The description of the flow log.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the flow log.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> flowLogName_ = nullptr;
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The name of the Logstore that stores the captured traffic data.
    // 
    // *   The name can contain only lowercase letters, digits, hyphens (-), and underscores (_).
    // *   The name must start and end with a lowercase letter or a digit.
    // *   The name must be 3 to 63 characters in length.
    std::shared_ptr<string> logStoreName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The name of the project that stores the captured traffic data.
    // 
    // *   The name can contain only lowercase letters, digits, and hyphens (-).
    // *   The name must start and end with a lowercase letter or a digit.
    // *   The name must be 3 to 63 characters in length.
    std::shared_ptr<string> projectName_ = nullptr;
    // The ID of the region where you want to create the flow log. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The ID of the resource whose traffic you want to capture.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The type of the resource whose traffic you want to capture. Valid values:
    // 
    // *   **NetworkInterface**: elastic network interface (ENI)
    // *   **VSwitch**: all ENIs in a vSwitch
    // *   **VPC**: all ENIs in a virtual private cloud (VPC)
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The tag of the resource.
    std::shared_ptr<vector<CreateFlowLogRequestTag>> tag_ = nullptr;
    // The scope of the traffic that you want to capture. Valid values:
    // 
    // *   **all**: all traffic.
    // *   **internetGateway**: Internet traffic.
    std::shared_ptr<vector<string>> trafficPath_ = nullptr;
    // The type of traffic that you want to capture. Valid values:
    // 
    // *   **All**: all traffic
    // *   **Allow**: traffic that is allowed
    // *   **Drop**: traffic that is rejected
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
