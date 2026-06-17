// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(AutoUseCoupon, autoUseCoupon_);
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
      DARABONBA_PTR_TO_JSON(PromotionCode, promotionCode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUseCoupon, autoUseCoupon_);
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
      DARABONBA_PTR_FROM_JSON(PromotionCode, promotionCode_);
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
    class DBNode : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DBNode& obj) { 
        DARABONBA_PTR_TO_JSON(TargetClass, targetClass_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, DBNode& obj) { 
        DARABONBA_PTR_FROM_JSON(TargetClass, targetClass_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      DBNode() = default ;
      DBNode(const DBNode &) = default ;
      DBNode(DBNode &&) = default ;
      DBNode(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DBNode() = default ;
      DBNode& operator=(const DBNode &) = default ;
      DBNode& operator=(DBNode &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->targetClass_ == nullptr
        && this->zoneId_ == nullptr; };
      // targetClass Field Functions 
      bool hasTargetClass() const { return this->targetClass_ != nullptr;};
      void deleteTargetClass() { this->targetClass_ = nullptr;};
      inline string getTargetClass() const { DARABONBA_PTR_GET_DEFAULT(targetClass_, "") };
      inline DBNode& setTargetClass(string targetClass) { DARABONBA_PTR_SET_VALUE(targetClass_, targetClass) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline DBNode& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The specifications of the new node. The specifications must be the same as those of the existing nodes in the cluster. For more information, see the following topics:
      // 
      // - PolarDB for MySQL: [compute node specifications](https://help.aliyun.com/document_detail/102542.html).
      // 
      // - PolarDB for PostgreSQL (Oracle Compatible): [compute node specifications](https://help.aliyun.com/document_detail/207921.html).
      // 
      // - PolarDB for PostgreSQL: [compute node specifications](https://help.aliyun.com/document_detail/209380.html).
      // 
      // > * You must specify either `DBNode.N.ZoneId` or `DBNode.N.TargetClass`. `N` is an integer that starts from 1. The maximum value of `N` is 16 minus the number of existing nodes.
      // >
      // > * For PolarDB for MySQL clusters, you can add multiple read-only nodes in a single request, up to a total of 15 read-only nodes.
      // >
      // > * This parameter is required for PolarDB for PostgreSQL (Oracle Compatible) and PolarDB for PostgreSQL clusters, but optional for PolarDB for MySQL clusters.
      shared_ptr<string> targetClass_ {};
      // The ID of the zone for the new node. This zone must be the same as the zone of the existing nodes. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/98041.html) operation to query zone IDs.
      // 
      // > - You must specify either `DBNode.N.ZoneId` or `DBNode.N.TargetClass`. `N` is an integer that starts from 1. The maximum value of `N` is 16 minus the number of existing nodes.
      // >
      // > - For PolarDB for MySQL clusters, you can add multiple read-only nodes in a single request, up to a total of 15 read-only nodes.
      // >
      // > - This parameter is required for PolarDB for PostgreSQL (Oracle Compatible) and PolarDB for PostgreSQL clusters, but optional for PolarDB for MySQL clusters.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->autoUseCoupon_ == nullptr
        && this->clientToken_ == nullptr && this->cloudProvider_ == nullptr && this->DBClusterId_ == nullptr && this->DBNode_ == nullptr && this->DBNodeType_ == nullptr
        && this->endpointBindList_ == nullptr && this->imciSwitch_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->plannedEndTime_ == nullptr
        && this->plannedStartTime_ == nullptr && this->promotionCode_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // autoUseCoupon Field Functions 
    bool hasAutoUseCoupon() const { return this->autoUseCoupon_ != nullptr;};
    void deleteAutoUseCoupon() { this->autoUseCoupon_ = nullptr;};
    inline bool getAutoUseCoupon() const { DARABONBA_PTR_GET_DEFAULT(autoUseCoupon_, false) };
    inline CreateDBNodesRequest& setAutoUseCoupon(bool autoUseCoupon) { DARABONBA_PTR_SET_VALUE(autoUseCoupon_, autoUseCoupon) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBNodesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudProvider Field Functions 
    bool hasCloudProvider() const { return this->cloudProvider_ != nullptr;};
    void deleteCloudProvider() { this->cloudProvider_ = nullptr;};
    inline string getCloudProvider() const { DARABONBA_PTR_GET_DEFAULT(cloudProvider_, "") };
    inline CreateDBNodesRequest& setCloudProvider(string cloudProvider) { DARABONBA_PTR_SET_VALUE(cloudProvider_, cloudProvider) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBNodesRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBNode Field Functions 
    bool hasDBNode() const { return this->DBNode_ != nullptr;};
    void deleteDBNode() { this->DBNode_ = nullptr;};
    inline const vector<CreateDBNodesRequest::DBNode> & getDBNode() const { DARABONBA_PTR_GET_CONST(DBNode_, vector<CreateDBNodesRequest::DBNode>) };
    inline vector<CreateDBNodesRequest::DBNode> getDBNode() { DARABONBA_PTR_GET(DBNode_, vector<CreateDBNodesRequest::DBNode>) };
    inline CreateDBNodesRequest& setDBNode(const vector<CreateDBNodesRequest::DBNode> & dBNode) { DARABONBA_PTR_SET_VALUE(DBNode_, dBNode) };
    inline CreateDBNodesRequest& setDBNode(vector<CreateDBNodesRequest::DBNode> && dBNode) { DARABONBA_PTR_SET_RVALUE(DBNode_, dBNode) };


    // DBNodeType Field Functions 
    bool hasDBNodeType() const { return this->DBNodeType_ != nullptr;};
    void deleteDBNodeType() { this->DBNodeType_ = nullptr;};
    inline string getDBNodeType() const { DARABONBA_PTR_GET_DEFAULT(DBNodeType_, "") };
    inline CreateDBNodesRequest& setDBNodeType(string DBNodeType) { DARABONBA_PTR_SET_VALUE(DBNodeType_, DBNodeType) };


    // endpointBindList Field Functions 
    bool hasEndpointBindList() const { return this->endpointBindList_ != nullptr;};
    void deleteEndpointBindList() { this->endpointBindList_ = nullptr;};
    inline string getEndpointBindList() const { DARABONBA_PTR_GET_DEFAULT(endpointBindList_, "") };
    inline CreateDBNodesRequest& setEndpointBindList(string endpointBindList) { DARABONBA_PTR_SET_VALUE(endpointBindList_, endpointBindList) };


    // imciSwitch Field Functions 
    bool hasImciSwitch() const { return this->imciSwitch_ != nullptr;};
    void deleteImciSwitch() { this->imciSwitch_ = nullptr;};
    inline string getImciSwitch() const { DARABONBA_PTR_GET_DEFAULT(imciSwitch_, "") };
    inline CreateDBNodesRequest& setImciSwitch(string imciSwitch) { DARABONBA_PTR_SET_VALUE(imciSwitch_, imciSwitch) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBNodesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBNodesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // plannedEndTime Field Functions 
    bool hasPlannedEndTime() const { return this->plannedEndTime_ != nullptr;};
    void deletePlannedEndTime() { this->plannedEndTime_ = nullptr;};
    inline string getPlannedEndTime() const { DARABONBA_PTR_GET_DEFAULT(plannedEndTime_, "") };
    inline CreateDBNodesRequest& setPlannedEndTime(string plannedEndTime) { DARABONBA_PTR_SET_VALUE(plannedEndTime_, plannedEndTime) };


    // plannedStartTime Field Functions 
    bool hasPlannedStartTime() const { return this->plannedStartTime_ != nullptr;};
    void deletePlannedStartTime() { this->plannedStartTime_ = nullptr;};
    inline string getPlannedStartTime() const { DARABONBA_PTR_GET_DEFAULT(plannedStartTime_, "") };
    inline CreateDBNodesRequest& setPlannedStartTime(string plannedStartTime) { DARABONBA_PTR_SET_VALUE(plannedStartTime_, plannedStartTime) };


    // promotionCode Field Functions 
    bool hasPromotionCode() const { return this->promotionCode_ != nullptr;};
    void deletePromotionCode() { this->promotionCode_ = nullptr;};
    inline string getPromotionCode() const { DARABONBA_PTR_GET_DEFAULT(promotionCode_, "") };
    inline CreateDBNodesRequest& setPromotionCode(string promotionCode) { DARABONBA_PTR_SET_VALUE(promotionCode_, promotionCode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDBNodesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBNodesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBNodesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // Specifies whether to automatically use a coupon. Valid values:
    // 
    // - true (Default): An available coupon is automatically used.
    // 
    // - false: A coupon is not automatically used.
    shared_ptr<bool> autoUseCoupon_ {};
    // A unique, client-generated token to ensure the idempotence of the request. This token is case-sensitive and cannot exceed 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The cloud provider of the node.
    shared_ptr<string> cloudProvider_ {};
    // The ID of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // Details of the nodes to add.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateDBNodesRequest::DBNode>> DBNode_ {};
    // The node type. Valid values:
    // 
    // - RO
    // 
    // - STANDBY
    // 
    // - DLNode
    shared_ptr<string> DBNodeType_ {};
    // The ID of the cluster endpoint to which you want to add the new nodes. If you want to add the nodes to multiple cluster endpoints, separate the endpoint IDs with a comma (,).
    // 
    // > - You can call the [DescribeDBClusterEndpoints](https://help.aliyun.com/document_detail/98205.html) operation to query the details of cluster endpoints, including their IDs.
    // >
    // > - You can specify the IDs of the default cluster endpoint and custom cluster endpoints.
    // >
    // > - If you leave this parameter empty, the new nodes are automatically added to all cluster endpoints where the **Auto Add New Nodes** feature is enabled (the `AutoAddNewNodes` parameter is set to `Enable`).
    shared_ptr<string> endpointBindList_ {};
    // Specifies whether to enable In-Memory Column Index (IMCI). Valid values:
    // 
    // - **ON**: The feature is enabled.
    // 
    // - **OFF** (Default): The feature is disabled.
    // 
    // > This parameter is not supported for PolarDB for PostgreSQL (Oracle Compatible) and PolarDB for PostgreSQL clusters.
    shared_ptr<string> imciSwitch_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The latest time to start the scheduled task. The time is specified in the `YYYY-MM-DDThh:mm:ssZ` format and is in UTC.
    // 
    // > - This time must be at least 30 minutes later than the value of `PlannedStartTime`.
    // >
    // > - If you specify `PlannedStartTime` but not this parameter, the latest start time defaults to 30 minutes after the `PlannedStartTime`. For example, if you set `PlannedStartTime` to `2021-01-14T09:00:00Z` and leave this parameter empty, the task starts no later than `2021-01-14T09:30:00Z`.
    shared_ptr<string> plannedEndTime_ {};
    // The earliest time to start the scheduled task to add the nodes. The time must be in UTC and in the `YYYY-MM-DDThh:mm:ssZ` format.
    // 
    // > - The start time must be within the next 24 hours. For example, if the current time is `2021-01-14T09:00:00Z`, you can set this parameter to a value between `2021-01-14T09:00:00Z` and `2021-01-15T09:00:00Z`.
    // >
    // > - If you omit this parameter, the nodes are added immediately.
    shared_ptr<string> plannedStartTime_ {};
    // The promotion code. If you omit this parameter, an applicable coupon is used by default.
    shared_ptr<string> promotionCode_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
