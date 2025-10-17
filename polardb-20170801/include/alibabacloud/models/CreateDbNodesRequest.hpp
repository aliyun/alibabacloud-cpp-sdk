// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDBNodesRequestDBNode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBNode, DBNode_);
      DARABONBA_PTR_TO_JSON(DBNodeType, DBNodeType_);
      DARABONBA_PTR_TO_JSON(EndpointBindList, endpointBindList_);
      DARABONBA_PTR_TO_JSON(ImciSwitch, imciSwitch_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_TO_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudProvider, cloudProvider_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBNode, DBNode_);
      DARABONBA_PTR_FROM_JSON(DBNodeType, DBNodeType_);
      DARABONBA_PTR_FROM_JSON(EndpointBindList, endpointBindList_);
      DARABONBA_PTR_FROM_JSON(ImciSwitch, imciSwitch_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PlannedEndTime, plannedEndTime_);
      DARABONBA_PTR_FROM_JSON(PlannedStartTime, plannedStartTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateDBNodesRequest() = default ;
    CreateDBNodesRequest(const CreateDBNodesRequest &) = default ;
    CreateDBNodesRequest(CreateDBNodesRequest &&) = default ;
    CreateDBNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBNodesRequest() = default ;
    CreateDBNodesRequest& operator=(const CreateDBNodesRequest &) = default ;
    CreateDBNodesRequest& operator=(CreateDBNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->cloudProvider_ == nullptr && return this->DBClusterId_ == nullptr && return this->DBNode_ == nullptr && return this->DBNodeType_ == nullptr && return this->endpointBindList_ == nullptr
        && return this->imciSwitch_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->plannedEndTime_ == nullptr && return this->plannedStartTime_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBNodesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string cloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline CreateDBNodesRequest& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBNodesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNode Field Functions 
    bool hasDBNode() const { return this->DBNode_ != nullptr;};
    void deleteDBNode() { this->DBNode_ = nullptr;};
    inline const vector<CreateDBNodesRequestDBNode> & DBNode() const { DARABONBA_PTR_GET_CONST(DBNode_, vector<CreateDBNodesRequestDBNode>) };
    inline vector<CreateDBNodesRequestDBNode> DBNode() { DARABONBA_PTR_GET(DBNode_, vector<CreateDBNodesRequestDBNode>) };
    inline CreateDBNodesRequest& setDBNode(const vector<CreateDBNodesRequestDBNode> & DBNode) { DARABONBA_PTR_SET_VALUE(DBNode_, DBNode) };
    inline CreateDBNodesRequest& setDBNode(vector<CreateDBNodesRequestDBNode> && DBNode) { DARABONBA_PTR_SET_RVALUE(DBNode_, DBNode) };


    // DBNodeType Field Functions 
    bool hasDBNodeType() const { return this->DBNodeType_ != nullptr;};
    void deleteDBNodeType() { this->DBNodeType_ = nullptr;};
    inline string DBNodeType() const { DARABONBA_PTR_GET_DEFAULT(DBNodeType_, "") };
    inline CreateDBNodesRequest& setDBNodeType(string DBNodeType) { DARABONBA_PTR_SET_VALUE(DBNodeType_, DBNodeType) };


    // endpointBindList Field Functions 
    bool hasEndpointBindList() const { return this->endpointBindList_ != nullptr;};
    void deleteEndpointBindList() { this->endpointBindList_ = nullptr;};
    inline string endpointBindList() const { DARABONBA_PTR_GET_DEFAULT(endpointBindList_, "") };
    inline CreateDBNodesRequest& setEndpointBindList(string endpointBindList) { DARABONBA_PTR_SET_VALUE(endpointBindList_, endpointBindList) };


    // imciSwitch Field Functions 
    bool hasImciSwitch() const { return this->imciSwitch_ != nullptr;};
    void deleteImciSwitch() { this->imciSwitch_ = nullptr;};
    inline string imciSwitch() const { DARABONBA_PTR_GET_DEFAULT(imciSwitch_, "") };
    inline CreateDBNodesRequest& setImciSwitch(string imciSwitch) { DARABONBA_PTR_SET_VALUE(imciSwitch_, imciSwitch) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBNodesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBNodesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string plannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline CreateDBNodesRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string plannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline CreateDBNodesRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBNodesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBNodesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBNodesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. The token is case-sensitive.
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> cloudProvider_ = nullptr;
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The details of the read-only node.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateDBNodesRequestDBNode>> DBNode_ = nullptr;
    // The node type. Valid values:
    // 
    // *   RO
    // *   STANDBY
    // *   DLNode
    // 
    // Enumerated values:
    // 
    // *   DLNode: AI node
    // *   STANDBY: standby node
    // *   RO: read-only node
    std::shared_ptr<string> DBNodeType_ = nullptr;
    // The ID of the cluster endpoint to which the read-only node is added. If you want to add the read-only node to multiple endpoints at the same time, separate the endpoint IDs with commas (,).
    // > - You can call the [DescribeDBClusterEndpoints](https://help.aliyun.com/document_detail/98205.html) operation to query the details of cluster endpoints, including endpoint IDs.
    // >- You can enter the ID of the default cluster endpoint or a custom cluster endpoint.
    // >- If you leave this parameter empty, the read-only node is added to all cluster endpoints for which the **Automatically Associate New Nodes** feature is enabled. If you set `AutoAddNewNodes` to `Enable`, the Automatically Associate New Nodes feature is enabled.
    std::shared_ptr<string> endpointBindList_ = nullptr;
    // Specifies whether to enable the In-Memory Column Index (IMCI) feature. Default value: OFF. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    // 
    // > This parameter is invalid for a PolarDB for Oracle or PolarDB for PostgreSQL cluster.
    std::shared_ptr<string> imciSwitch_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The latest start time for upgrading the specifications within the scheduled time period. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // >- The value of this parameter must be at least 30 minutes later than the value of PlannedStartTime.
    // >- If you specify `PlannedStartTime` but do not specify PlannedEndTime, the latest start time of the task is set to a value that is calculated by using the following formula: `PlannedEndTime value + 30 minutes`. For example, if you set `PlannedStartTime` to `2021-01-14T09:00:00Z` and you do not specify PlannedEndTime, the latest start time of the task is set to `2021-01-14T09:30:00Z`.
    std::shared_ptr<string> plannedEndTime_ = nullptr;
    // The earliest start time of the scheduled task for adding the read-only node. The scheduled task specifies that the task is run in the required period. Specify the time in the `YYYY-MM-DDThh:mm:ssZ` format. The time must be in UTC.
    // 
    // >- The earliest start time of the scheduled task can be a point in time within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can specify a point in time between `2021-01-14T09:00:00Z` and `2021-01-15T09:00:00Z`.
    // >- If you leave this parameter empty, the task for adding the read-only node is immediately run by default.
    std::shared_ptr<string> plannedStartTime_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
