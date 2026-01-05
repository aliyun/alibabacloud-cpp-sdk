// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FAILOVERDBCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FAILOVERDBCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class FailoverDBClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FailoverDBClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RollBackForDisaster, rollBackForDisaster_);
      DARABONBA_PTR_TO_JSON(TargetDBNodeId, targetDBNodeId_);
      DARABONBA_PTR_TO_JSON(TargetZoneType, targetZoneType_);
    };
    friend void from_json(const Darabonba::Json& j, FailoverDBClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RollBackForDisaster, rollBackForDisaster_);
      DARABONBA_PTR_FROM_JSON(TargetDBNodeId, targetDBNodeId_);
      DARABONBA_PTR_FROM_JSON(TargetZoneType, targetZoneType_);
    };
    FailoverDBClusterRequest() = default ;
    FailoverDBClusterRequest(const FailoverDBClusterRequest &) = default ;
    FailoverDBClusterRequest(FailoverDBClusterRequest &&) = default ;
    FailoverDBClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FailoverDBClusterRequest() = default ;
    FailoverDBClusterRequest& operator=(const FailoverDBClusterRequest &) = default ;
    FailoverDBClusterRequest& operator=(FailoverDBClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->DBClusterId_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->rollBackForDisaster_ == nullptr && this->targetDBNodeId_ == nullptr && this->targetZoneType_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline FailoverDBClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline FailoverDBClusterRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline FailoverDBClusterRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline FailoverDBClusterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline FailoverDBClusterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline FailoverDBClusterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // rollBackForDisaster Field Functions 
    bool hasRollBackForDisaster() const { return this->rollBackForDisaster_ != nullptr;};
    void deleteRollBackForDisaster() { this->rollBackForDisaster_ = nullptr;};
    inline bool getRollBackForDisaster() const { DARABONBA_PTR_GET_DEFAULT(rollBackForDisaster_, false) };
    inline FailoverDBClusterRequest& setRollBackForDisaster(bool rollBackForDisaster) { DARABONBA_PTR_SET_VALUE(rollBackForDisaster_, rollBackForDisaster) };


    // targetDBNodeId Field Functions 
    bool hasTargetDBNodeId() const { return this->targetDBNodeId_ != nullptr;};
    void deleteTargetDBNodeId() { this->targetDBNodeId_ = nullptr;};
    inline string getTargetDBNodeId() const { DARABONBA_PTR_GET_DEFAULT(targetDBNodeId_, "") };
    inline FailoverDBClusterRequest& setTargetDBNodeId(string targetDBNodeId) { DARABONBA_PTR_SET_VALUE(targetDBNodeId_, targetDBNodeId) };


    // targetZoneType Field Functions 
    bool hasTargetZoneType() const { return this->targetZoneType_ != nullptr;};
    void deleteTargetZoneType() { this->targetZoneType_ = nullptr;};
    inline string getTargetZoneType() const { DARABONBA_PTR_GET_DEFAULT(targetZoneType_, "") };
    inline FailoverDBClusterRequest& setTargetZoneType(string targetZoneType) { DARABONBA_PTR_SET_VALUE(targetZoneType_, targetZoneType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. The token is case-sensitive.
    shared_ptr<string> clientToken_ {};
    // The ID of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to switch back services to the original primary zone when the original primary zone recovers.
    // 
    // *   true
    // *   false
    shared_ptr<bool> rollBackForDisaster_ {};
    // The ID of the read-only node that you want to promote to the primary node. You can call the [DescribeDBClusters](https://help.aliyun.com/document_detail/98094.html) operation to query node information, such as node IDs.
    // 
    // > *   If you leave this parameter empty, the system selects one or more available read-only nodes that have the highest failover priority as candidate primary nodes. If the failover to the first read-only node fails due to network issues, abnormal replication status, or other reasons, the system attempts to fail over your applications to the next read-only node until the failover is successful.
    // >*  This parameter is required for PolarDB for Oracle and PolarDB for PostgreSQL clusters. This parameter is optional for PolarDB for MySQL clusters.
    shared_ptr<string> targetDBNodeId_ {};
    // Whether it is a primary-standby switch within the primary availability zone, with the following values:
    // 
    // Primary: Primary-standby switch within the primary availability zone.
    // Standby: Switch to the storage hot backup cluster.
    shared_ptr<string> targetZoneType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
