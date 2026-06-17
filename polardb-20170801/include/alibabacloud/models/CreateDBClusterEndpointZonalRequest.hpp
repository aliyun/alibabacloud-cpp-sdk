// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERENDPOINTZONALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERENDPOINTZONALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBClusterEndpointZonalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterEndpointZonalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
      DARABONBA_PTR_TO_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
      DARABONBA_PTR_TO_JSON(ReadWriteMode, readWriteMode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SccMode, sccMode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterEndpointZonalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
      DARABONBA_PTR_FROM_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
      DARABONBA_PTR_FROM_JSON(ReadWriteMode, readWriteMode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SccMode, sccMode_);
    };
    CreateDBClusterEndpointZonalRequest() = default ;
    CreateDBClusterEndpointZonalRequest(const CreateDBClusterEndpointZonalRequest &) = default ;
    CreateDBClusterEndpointZonalRequest(CreateDBClusterEndpointZonalRequest &&) = default ;
    CreateDBClusterEndpointZonalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterEndpointZonalRequest() = default ;
    CreateDBClusterEndpointZonalRequest& operator=(const CreateDBClusterEndpointZonalRequest &) = default ;
    CreateDBClusterEndpointZonalRequest& operator=(CreateDBClusterEndpointZonalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAddNewNodes_ == nullptr
        && this->clientToken_ == nullptr && this->DBClusterId_ == nullptr && this->DBEndpointDescription_ == nullptr && this->endpointConfig_ == nullptr && this->endpointType_ == nullptr
        && this->nodes_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->polarSccTimeoutAction_ == nullptr && this->polarSccWaitTimeout_ == nullptr
        && this->readWriteMode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sccMode_ == nullptr; };
    // autoAddNewNodes Field Functions 
    bool hasAutoAddNewNodes() const { return this->autoAddNewNodes_ != nullptr;};
    void deleteAutoAddNewNodes() { this->autoAddNewNodes_ = nullptr;};
    inline string getAutoAddNewNodes() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewNodes_, "") };
    inline CreateDBClusterEndpointZonalRequest& setAutoAddNewNodes(string autoAddNewNodes) { DARABONBA_PTR_SET_VALUE(autoAddNewNodes_, autoAddNewNodes) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBClusterEndpointZonalRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBClusterEndpointZonalRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointDescription Field Functions 
    bool hasDBEndpointDescription() const { return this->DBEndpointDescription_ != nullptr;};
    void deleteDBEndpointDescription() { this->DBEndpointDescription_ = nullptr;};
    inline string getDBEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointDescription_, "") };
    inline CreateDBClusterEndpointZonalRequest& setDBEndpointDescription(string DBEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBEndpointDescription_, DBEndpointDescription) };


    // endpointConfig Field Functions 
    bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
    void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
    inline string getEndpointConfig() const { DARABONBA_PTR_GET_DEFAULT(endpointConfig_, "") };
    inline CreateDBClusterEndpointZonalRequest& setEndpointConfig(string endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateDBClusterEndpointZonalRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline CreateDBClusterEndpointZonalRequest& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBClusterEndpointZonalRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBClusterEndpointZonalRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // polarSccTimeoutAction Field Functions 
    bool hasPolarSccTimeoutAction() const { return this->polarSccTimeoutAction_ != nullptr;};
    void deletePolarSccTimeoutAction() { this->polarSccTimeoutAction_ = nullptr;};
    inline string getPolarSccTimeoutAction() const { DARABONBA_PTR_GET_DEFAULT(polarSccTimeoutAction_, "") };
    inline CreateDBClusterEndpointZonalRequest& setPolarSccTimeoutAction(string polarSccTimeoutAction) { DARABONBA_PTR_SET_VALUE(polarSccTimeoutAction_, polarSccTimeoutAction) };


    // polarSccWaitTimeout Field Functions 
    bool hasPolarSccWaitTimeout() const { return this->polarSccWaitTimeout_ != nullptr;};
    void deletePolarSccWaitTimeout() { this->polarSccWaitTimeout_ = nullptr;};
    inline string getPolarSccWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(polarSccWaitTimeout_, "") };
    inline CreateDBClusterEndpointZonalRequest& setPolarSccWaitTimeout(string polarSccWaitTimeout) { DARABONBA_PTR_SET_VALUE(polarSccWaitTimeout_, polarSccWaitTimeout) };


    // readWriteMode Field Functions 
    bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
    void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
    inline string getReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
    inline CreateDBClusterEndpointZonalRequest& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBClusterEndpointZonalRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBClusterEndpointZonalRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sccMode Field Functions 
    bool hasSccMode() const { return this->sccMode_ != nullptr;};
    void deleteSccMode() { this->sccMode_ = nullptr;};
    inline string getSccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
    inline CreateDBClusterEndpointZonalRequest& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


  protected:
    // Specifies whether to automatically add new nodes to this endpoint. Valid values:
    // 
    // - Enable: New nodes are automatically added to this endpoint.
    // 
    // - Disable: New nodes are not automatically added to this endpoint. This is the default value.
    shared_ptr<string> autoAddNewNodes_ {};
    // A client token that is used to ensure the idempotence of the request. The client generates the value, which must be unique among different requests. The token is case-sensitive and can be up to 64 ASCII characters in length.
    shared_ptr<string> clientToken_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the custom cluster endpoint.
    shared_ptr<string> DBEndpointDescription_ {};
    // The advanced configurations of the cluster endpoint, specified in the JSON format. This parameter supports settings for consistency level, transaction splitting, offloading reads from the primary node, and the connection pool.
    // 
    // - Sets the load balancing policy. The format is {"LoadBalancePolicy":"policy"}. Valid values:
    // 
    //   - **0**: Connections-based load balancing. This is the default value.
    // 
    //   - **1**: Active requests-based load balancing.
    // 
    // - Sets the consistency level. The format is `{"ConsistLevel":"level"}`. Valid values:
    // 
    //   - **0**: Eventual consistency.
    // 
    //   - **1**: Session consistency. This is the default value.
    // 
    //   - **2**: Global consistency.
    // 
    // - Sets transaction splitting. The format is `{"DistributedTransaction":"on/off"}`. Valid values:
    // 
    //   - **on**: Enables transaction splitting. This is the default value.
    // 
    //   - **off**: Disables transaction splitting.
    // 
    // - Specifies whether the primary node accepts read requests. The format is `{"MasterAcceptReads":"on/off"}`. Valid values:
    // 
    //   - **on**: The primary node accepts read requests.
    // 
    //   - **off**: The primary node does not accept read requests. This is the default value.
    // 
    // - Sets the connection pool. The format is `{"ConnectionPersist":"type"}`. Valid values:
    // 
    //   - **off**: Disables the connection pool. This is the default value.
    // 
    //   - **Session**: Enables the session-level connection pool.
    // 
    //   - **Transaction**: Enables transaction-level connection pooling.
    // 
    // - Sets parallel query. The format is {"MaxParallelDegree":"degree"}. Valid values:
    // 
    //   - A specific number of concurrent queries. Example: "MaxParallelDegree":"2".
    // 
    //   - **off**: Disables parallel query. This is the default value.
    // 
    // - Sets automatic routing for row store and column store. The format is {"EnableHtapImci":"on/off"}. Valid values:
    // 
    //   - **on**: Enables automatic routing for row store and column store.
    // 
    //   - **off**: Disables automatic routing for row store and column store. This is the default value.
    // 
    // - Specifies whether to enable overload protection. The format is {"EnableOverloadThrottle":"on/off"}. Valid values:
    // 
    //   - **on**: Enables overload protection.
    // 
    //   - **off**: Disables overload protection. This is the default value.
    // 
    // > * You can set transaction splitting, specify whether the primary node accepts read requests, configure the connection pool, and enable overload protection only when the read/write mode of the cluster endpoint for a PolarDB for MySQL cluster is set to \\*\\*ReadWrite\\*\\* (automatic read/write splitting).
    // >
    // > * When the read/write mode of the cluster endpoint for a PolarDB for MySQL cluster is set to **ReadOnly**, both **connections-based load balancing** and **active requests-based load balancing** are supported. When the read/write mode is set to **ReadWrite** (automatic read/write splitting), only **active requests-based load balancing** is supported.
    // >
    // > * You can enable automatic routing for row store and column store when the read/write mode of the cluster endpoint for a PolarDB for MySQL cluster is set to **ReadWrite** (automatic read/write splitting), or when the read/write mode is set to **ReadOnly** and the load balancing policy is set to **active requests-based load balancing**.
    // >
    // > * Only PolarDB for MySQL supports setting the consistency level to global consistency.
    // >
    // > * If you set the **ReadWriteMode** parameter to **ReadOnly**, you can only set the consistency level to **0**.
    // >
    // > * You can configure the consistency level, transaction splitting, whether the primary node accepts reads, and the connection pool at the same time. For example: `{"ConsistLevel":"1","DistributedTransaction":"on","ConnectionPersist":"Session","MasterAcceptReads":"on"}`.
    // >
    // > * The transaction splitting setting is constrained by the consistency level. For example, if the consistency level is set to **0**, you cannot enable transaction splitting. If the consistency level is set to **1** or **2**, you can enable transaction splitting.
    shared_ptr<string> endpointConfig_ {};
    // The type of the custom cluster endpoint. The value is fixed to **Custom**.
    // 
    // This parameter is required.
    shared_ptr<string> endpointType_ {};
    // The read-only nodes to be added to the endpoint. Separate multiple node IDs with commas (,). By default, all nodes are added.
    shared_ptr<string> nodes_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The policy for handling global consistency timeouts. Valid values:
    // 
    // - 0: Sends the request to the primary node.
    // 
    // - 2: Degrades to regular requests. If a global consistency read times out, the query is automatically degraded to a regular request, and the client does not receive an error message.
    shared_ptr<string> polarSccTimeoutAction_ {};
    // The timeout period for global consistency.
    shared_ptr<string> polarSccWaitTimeout_ {};
    // The read/write mode. Valid values:
    // 
    // - ReadWrite: read and write (automatic read/write splitting).
    // 
    // - ReadOnly: read-only. This is the default value.
    shared_ptr<string> readWriteMode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable the global consistency (high-performance mode) feature for the node. Valid values:
    // 
    // - ON: Enables the feature.
    // 
    // - OFF: Disables the feature.
    shared_ptr<string> sccMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
