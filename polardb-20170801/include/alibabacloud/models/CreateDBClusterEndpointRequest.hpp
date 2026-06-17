// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBCLUSTERENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBCLUSTERENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class CreateDBClusterEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBClusterEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_TO_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_TO_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
      DARABONBA_PTR_TO_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
      DARABONBA_PTR_TO_JSON(ReadWriteMode, readWriteMode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SccMode, sccMode_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBClusterEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
      DARABONBA_PTR_FROM_JSON(EndpointType, endpointType_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PolarFsInstanceId, polarFsInstanceId_);
      DARABONBA_PTR_FROM_JSON(PolarSccTimeoutAction, polarSccTimeoutAction_);
      DARABONBA_PTR_FROM_JSON(PolarSccWaitTimeout, polarSccWaitTimeout_);
      DARABONBA_PTR_FROM_JSON(ReadWriteMode, readWriteMode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SccMode, sccMode_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateDBClusterEndpointRequest() = default ;
    CreateDBClusterEndpointRequest(const CreateDBClusterEndpointRequest &) = default ;
    CreateDBClusterEndpointRequest(CreateDBClusterEndpointRequest &&) = default ;
    CreateDBClusterEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBClusterEndpointRequest() = default ;
    CreateDBClusterEndpointRequest& operator=(const CreateDBClusterEndpointRequest &) = default ;
    CreateDBClusterEndpointRequest& operator=(CreateDBClusterEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAddNewNodes_ == nullptr
        && this->clientToken_ == nullptr && this->DBClusterId_ == nullptr && this->DBEndpointDescription_ == nullptr && this->endpointConfig_ == nullptr && this->endpointType_ == nullptr
        && this->nodes_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->polarFsInstanceId_ == nullptr && this->polarSccTimeoutAction_ == nullptr
        && this->polarSccWaitTimeout_ == nullptr && this->readWriteMode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sccMode_ == nullptr
        && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr; };
    // autoAddNewNodes Field Functions 
    bool hasAutoAddNewNodes() const { return this->autoAddNewNodes_ != nullptr;};
    void deleteAutoAddNewNodes() { this->autoAddNewNodes_ = nullptr;};
    inline string getAutoAddNewNodes() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewNodes_, "") };
    inline CreateDBClusterEndpointRequest& setAutoAddNewNodes(string autoAddNewNodes) { DARABONBA_PTR_SET_VALUE(autoAddNewNodes_, autoAddNewNodes) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDBClusterEndpointRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline CreateDBClusterEndpointRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointDescription Field Functions 
    bool hasDBEndpointDescription() const { return this->DBEndpointDescription_ != nullptr;};
    void deleteDBEndpointDescription() { this->DBEndpointDescription_ = nullptr;};
    inline string getDBEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointDescription_, "") };
    inline CreateDBClusterEndpointRequest& setDBEndpointDescription(string DBEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBEndpointDescription_, DBEndpointDescription) };


    // endpointConfig Field Functions 
    bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
    void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
    inline string getEndpointConfig() const { DARABONBA_PTR_GET_DEFAULT(endpointConfig_, "") };
    inline CreateDBClusterEndpointRequest& setEndpointConfig(string endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };


    // endpointType Field Functions 
    bool hasEndpointType() const { return this->endpointType_ != nullptr;};
    void deleteEndpointType() { this->endpointType_ = nullptr;};
    inline string getEndpointType() const { DARABONBA_PTR_GET_DEFAULT(endpointType_, "") };
    inline CreateDBClusterEndpointRequest& setEndpointType(string endpointType) { DARABONBA_PTR_SET_VALUE(endpointType_, endpointType) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline CreateDBClusterEndpointRequest& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateDBClusterEndpointRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateDBClusterEndpointRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // polarFsInstanceId Field Functions 
    bool hasPolarFsInstanceId() const { return this->polarFsInstanceId_ != nullptr;};
    void deletePolarFsInstanceId() { this->polarFsInstanceId_ = nullptr;};
    inline string getPolarFsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(polarFsInstanceId_, "") };
    inline CreateDBClusterEndpointRequest& setPolarFsInstanceId(string polarFsInstanceId) { DARABONBA_PTR_SET_VALUE(polarFsInstanceId_, polarFsInstanceId) };


    // polarSccTimeoutAction Field Functions 
    bool hasPolarSccTimeoutAction() const { return this->polarSccTimeoutAction_ != nullptr;};
    void deletePolarSccTimeoutAction() { this->polarSccTimeoutAction_ = nullptr;};
    inline string getPolarSccTimeoutAction() const { DARABONBA_PTR_GET_DEFAULT(polarSccTimeoutAction_, "") };
    inline CreateDBClusterEndpointRequest& setPolarSccTimeoutAction(string polarSccTimeoutAction) { DARABONBA_PTR_SET_VALUE(polarSccTimeoutAction_, polarSccTimeoutAction) };


    // polarSccWaitTimeout Field Functions 
    bool hasPolarSccWaitTimeout() const { return this->polarSccWaitTimeout_ != nullptr;};
    void deletePolarSccWaitTimeout() { this->polarSccWaitTimeout_ = nullptr;};
    inline string getPolarSccWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(polarSccWaitTimeout_, "") };
    inline CreateDBClusterEndpointRequest& setPolarSccWaitTimeout(string polarSccWaitTimeout) { DARABONBA_PTR_SET_VALUE(polarSccWaitTimeout_, polarSccWaitTimeout) };


    // readWriteMode Field Functions 
    bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
    void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
    inline string getReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
    inline CreateDBClusterEndpointRequest& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateDBClusterEndpointRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateDBClusterEndpointRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sccMode Field Functions 
    bool hasSccMode() const { return this->sccMode_ != nullptr;};
    void deleteSccMode() { this->sccMode_ = nullptr;};
    inline string getSccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
    inline CreateDBClusterEndpointRequest& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline CreateDBClusterEndpointRequest& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateDBClusterEndpointRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // Specifies whether to automatically add new nodes to the endpoint. Valid values:
    // 
    // - **Enable**: Automatically adds new nodes to the endpoint.
    // 
    // - **Disable** (default): Does not automatically add new nodes to the endpoint.
    shared_ptr<string> autoAddNewNodes_ {};
    // A client-generated token to ensure the idempotence of the request. The token must be unique, case-sensitive, and a maximum of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the custom cluster endpoint.
    shared_ptr<string> DBEndpointDescription_ {};
    // The advanced configurations for the custom cluster endpoint, specified as a JSON string. You can configure features such as consistency level, transaction splitting, whether the primary node accepts read requests, connection pool, and load balancing policy.
    // 
    // - Specifies the load balancing policy. The format is {"LoadBalancePolicy":"policy"}. Valid values:
    // 
    //   - **0**: connections-based load balancing (default).
    // 
    //   - **1**: active requests-based load balancing.
    // 
    // - Specifies the consistency level. The format is `{"ConsistLevel":"level"}`. Valid values:
    // 
    //   - **0**: eventual consistency.
    // 
    //   - **1**: session consistency (default).
    // 
    //   - **2**: global consistency.
    // 
    // - Specifies whether to enable transaction splitting. The format is `{"DistributedTransaction":"status"}`. Valid values:
    // 
    //   - **on**: enables transaction splitting (default).
    // 
    //   - **off**: disables transaction splitting.
    // 
    // - Specifies whether the primary node accepts read requests. The format is `{"MasterAcceptReads":"status"}`. Valid values:
    // 
    //   - **on**: The primary node accepts read requests.
    // 
    //   - **off**: The primary node does not accept read requests (default).
    // 
    // - Specifies whether to enable the connection pool. The format is `{"ConnectionPersist":"status"}`. Valid values:
    // 
    //   - **off**: disables the connection pool (default).
    // 
    //   - **Session**: enables the session-level connection pool.
    // 
    //   - **Transaction**: enables the transaction-level connection pool.
    // 
    // - Specifies the degree of parallelism for a parallel query. The format is {"MaxParallelDegree":"degree"}. Valid values:
    // 
    //   - A specific integer that specifies the degree of parallelism. For example: "MaxParallelDegree":"2".
    // 
    //   - **off**: disables parallel query (default).
    // 
    // - Specifies whether to enable automatic routing between row store and column store. The format is {"EnableHtapImci":"status"}. Valid values:
    // 
    //   - **on**: enables automatic routing.
    // 
    //   - **off**: disables automatic routing (default).
    // 
    // - Specifies whether to enable overload protection. The format is {"EnableOverloadThrottle":"status"}. Valid values:
    // 
    //   - **on**: enables overload protection.
    // 
    //   - **off**: disables overload protection (default).
    // 
    // > * You can configure transaction splitting, whether the primary node accepts read requests, the connection pool, and overload protection only for a PolarDB for MySQL endpoint in **ReadWrite** (automatic read/write splitting) mode.
    // >
    // > * A PolarDB for MySQL cluster endpoint in **ReadOnly** mode supports both **connections-based load balancing** and **active requests-based load balancing**. An endpoint in **ReadWrite** (automatic read/write splitting) mode supports only **active requests-based load balancing**.
    // >
    // > * You can enable automatic routing between row store and column store if the read/write mode of the cluster endpoint for PolarDB for MySQL is **ReadWrite** (automatic read/write splitting), or if the read/write mode is **ReadOnly** and the load balancing policy is **active requests-based load balancing**.
    // >
    // > * Only PolarDB for MySQL clusters support global consistency.
    // >
    // > * If you set **ReadWriteMode** to **ReadOnly**, the consistency level must be **0** (eventual consistency).
    // >
    // > * You can configure the consistency level, transaction splitting, whether the primary node accepts read requests, and the connection pool at the same time. Example: `{"ConsistLevel":"1","DistributedTransaction":"on","ConnectionPersist":"Session","MasterAcceptReads":"on"}`.
    // >
    // > * The setting for transaction splitting depends on the consistency level. For example, if you set the consistency level to **0** (eventual consistency), you cannot enable transaction splitting. If you set the consistency level to **1** (session consistency) or **2** (global consistency), you can enable transaction splitting.
    shared_ptr<string> endpointConfig_ {};
    // The type of the custom cluster endpoint. Set the value to **Custom**.
    // 
    // This parameter is required.
    shared_ptr<string> endpointType_ {};
    // The nodes to associate with the endpoint. Separate multiple node IDs with a comma (,). If you omit this parameter, all nodes in the cluster are added by default.
    // 
    // > - For a PolarDB for MySQL cluster, specify the node IDs.
    // >
    // > - For a PolarDB for PostgreSQL cluster or a PolarDB for PostgreSQL (compatible with Oracle) cluster, specify the roles of the nodes, such as `Writer,Reader1,Reader2`.
    // >
    // > - If you set **ReadWriteMode** to **ReadOnly**, you can associate only one node with the endpoint. If this node fails, the endpoint may be unavailable for up to 1 hour. This configuration is not recommended for a production environment. To improve availability, associate at least two nodes with the endpoint.
    // >
    // > - If you set **ReadWriteMode** to **ReadWrite**, you must associate at least two nodes with the endpoint.
    // >   \\* For a PolarDB for MySQL cluster, you can select any two nodes. If both nodes are read-only nodes, write requests are routed to the primary node.
    // >   \\* For a PolarDB for PostgreSQL cluster or a PolarDB for PostgreSQL (compatible with Oracle) cluster, the primary node must be included.
    shared_ptr<string> nodes_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> polarFsInstanceId_ {};
    // The policy for handling global consistency read timeouts. Valid values:
    // 
    // - **0**: Send the request to the primary node.
    // 
    // - **2**: Downgrade to a regular request. If a global consistency read times out, the query is automatically downgraded, and the client does not receive an error.
    shared_ptr<string> polarSccTimeoutAction_ {};
    // The timeout period for global consistency.
    shared_ptr<string> polarSccWaitTimeout_ {};
    // The read/write mode. Valid values:
    // 
    // - **ReadWrite**: read/write (automatic read/write splitting).
    // 
    // - **ReadOnly** (default): read-only.
    shared_ptr<string> readWriteMode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable global consistency (high-performance mode). Valid values:
    // 
    // - **ON**: Enables the feature.
    // 
    // - **OFF**: Disables the feature.
    shared_ptr<string> sccMode_ {};
    shared_ptr<string> VPCId_ {};
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
