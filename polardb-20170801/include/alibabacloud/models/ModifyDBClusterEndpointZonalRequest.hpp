// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERENDPOINTZONALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERENDPOINTZONALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterEndpointZonalRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterEndpointZonalRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_TO_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_TO_JSON(EndpointConfig, endpointConfig_);
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
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterEndpointZonalRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoAddNewNodes, autoAddNewNodes_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DBEndpointDescription, DBEndpointDescription_);
      DARABONBA_PTR_FROM_JSON(DBEndpointId, DBEndpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointConfig, endpointConfig_);
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
    ModifyDBClusterEndpointZonalRequest() = default ;
    ModifyDBClusterEndpointZonalRequest(const ModifyDBClusterEndpointZonalRequest &) = default ;
    ModifyDBClusterEndpointZonalRequest(ModifyDBClusterEndpointZonalRequest &&) = default ;
    ModifyDBClusterEndpointZonalRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterEndpointZonalRequest() = default ;
    ModifyDBClusterEndpointZonalRequest& operator=(const ModifyDBClusterEndpointZonalRequest &) = default ;
    ModifyDBClusterEndpointZonalRequest& operator=(ModifyDBClusterEndpointZonalRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAddNewNodes_ == nullptr
        && this->clientToken_ == nullptr && this->DBClusterId_ == nullptr && this->DBEndpointDescription_ == nullptr && this->DBEndpointId_ == nullptr && this->endpointConfig_ == nullptr
        && this->nodes_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->polarSccTimeoutAction_ == nullptr && this->polarSccWaitTimeout_ == nullptr
        && this->readWriteMode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sccMode_ == nullptr; };
    // autoAddNewNodes Field Functions 
    bool hasAutoAddNewNodes() const { return this->autoAddNewNodes_ != nullptr;};
    void deleteAutoAddNewNodes() { this->autoAddNewNodes_ = nullptr;};
    inline string getAutoAddNewNodes() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewNodes_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setAutoAddNewNodes(string autoAddNewNodes) { DARABONBA_PTR_SET_VALUE(autoAddNewNodes_, autoAddNewNodes) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointDescription Field Functions 
    bool hasDBEndpointDescription() const { return this->DBEndpointDescription_ != nullptr;};
    void deleteDBEndpointDescription() { this->DBEndpointDescription_ = nullptr;};
    inline string getDBEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointDescription_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setDBEndpointDescription(string DBEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBEndpointDescription_, DBEndpointDescription) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // endpointConfig Field Functions 
    bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
    void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
    inline string getEndpointConfig() const { DARABONBA_PTR_GET_DEFAULT(endpointConfig_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setEndpointConfig(string endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterEndpointZonalRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // polarSccTimeoutAction Field Functions 
    bool hasPolarSccTimeoutAction() const { return this->polarSccTimeoutAction_ != nullptr;};
    void deletePolarSccTimeoutAction() { this->polarSccTimeoutAction_ = nullptr;};
    inline string getPolarSccTimeoutAction() const { DARABONBA_PTR_GET_DEFAULT(polarSccTimeoutAction_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setPolarSccTimeoutAction(string polarSccTimeoutAction) { DARABONBA_PTR_SET_VALUE(polarSccTimeoutAction_, polarSccTimeoutAction) };


    // polarSccWaitTimeout Field Functions 
    bool hasPolarSccWaitTimeout() const { return this->polarSccWaitTimeout_ != nullptr;};
    void deletePolarSccWaitTimeout() { this->polarSccWaitTimeout_ = nullptr;};
    inline string getPolarSccWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(polarSccWaitTimeout_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setPolarSccWaitTimeout(string polarSccWaitTimeout) { DARABONBA_PTR_SET_VALUE(polarSccWaitTimeout_, polarSccWaitTimeout) };


    // readWriteMode Field Functions 
    bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
    void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
    inline string getReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterEndpointZonalRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sccMode Field Functions 
    bool hasSccMode() const { return this->sccMode_ != nullptr;};
    void deleteSccMode() { this->sccMode_ = nullptr;};
    inline string getSccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
    inline ModifyDBClusterEndpointZonalRequest& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


  protected:
    // Specifies whether to automatically add new nodes to this endpoint. Valid values: 
    // 
    // - **Enable**: Yes.
    // - **Disable**: No (default).
    shared_ptr<string> autoAddNewNodes_ {};
    // The client token that is used to ensure the idempotence of the request and prevent duplicate submissions. You can generate the value of this parameter on the client side. The value must be unique across different requests and is case-sensitive. The value can contain a maximum of 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
    // The edge cloud cluster ID. You can call DescribeDBClustersZonal to query the ID. The ID of a common PolarDB cluster returned by DescribeDBClusters is not supported.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The endpoint name.
    shared_ptr<string> DBEndpointDescription_ {};
    // The cluster endpoint ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBEndpointId_ {};
    // The advanced configurations of the cluster endpoint. The value is in JSON format. You can configure the consistency level, transaction splitting, whether to offload offload reads from primary node, and the connection pool.
    // 
    // * To set the load balancing policy, use the format `{"LoadBalancePolicy":"Load balancing policy"}`. Valid values:   
    //     * **0**: load balancing based on the number of connections (default).
    //     * **1**: load balancing based on the number of active requests.
    // 
    // * To set whether to offload offload reads from primary node, use the format `{"MasterAcceptReads":"Whether to offload offload reads from primary node"}`. Valid values:
    //     * **on**: The primary node accepts reads (default).
    //     * **off**: Reads are offloaded from the primary node.
    // 
    // * To set transaction splitting, use the format `{"DistributedTransaction":"Transaction splitting"}`. Valid values:
    //     * **on**: enables transaction splitting (default).
    //     * **off**: disables transaction splitting.
    // 
    // * To set the consistency level, use the format `{"ConsistLevel":"Consistency level"}`. Valid values:
    //     * **0**: eventual consistency (weak).
    //     * **1**: session consistency (medium) (default).
    //     * **2**: global consistency (strong).
    // 
    // * To set the global consistency read timeout period, use the format `{"ConsistTimeout":"Global consistency read timeout period"}`. Valid values: 0 to 60000. Default value: 20. Unit: milliseconds.
    // 
    // * To set the session consistency read timeout period, use the format `{"ConsistSessionTimeout":"Session consistency read timeout period"}`. Valid values: 0 to 60000. Default value: 0. Unit: milliseconds.
    // 
    // * To set the global (or session) consistency read timeout policy, use the format `{"ConsistTimeoutAction":"Global consistency read timeout policy"}`. Valid values:
    //     * **0**: forwards read requests to the primary node (default).
    //     * **1**: The proxy returns an error message `wait replication complete timeout, please retry` to the application.
    // 
    // * To set the connection pool, use the format `{"ConnectionPersist":"Connection pool"}`. Valid values:
    //     * **off**: disables the connection pool (default).
    //     * **Session**: enables the session-level connection pool.
    //     * **Transaction**: enables transaction-level connection pooling.
    // 
    // * To set parallel query, use the format `{"MaxParallelDegree":"Parallel query"}`. Valid values:
    //     * **on**: enables parallel query.
    //     * **off**: disables parallel query (default).
    // 
    // * To set automatic request distribution between row store and column store nodes, use the format `{"EnableHtapImci":"Automatic request distribution between row store and column store nodes"}`. Valid values:
    //     * **on**: enables automatic request distribution between row store and column store nodes.
    //     * **off**: disables automatic request distribution between row store and column store nodes (default).
    // 
    // 
    // * To set whether to enable overload protection, use the format `{"EnableOverloadThrottle":"Whether to enable overload protection"}`. Valid values:
    //     * **on**: enables overload protection.
    //     * **off**: disables overload protection (default).
    // 
    // > * You can configure transaction splitting, whether to offload offload reads from primary node, the connection pool, and whether to enable overload protection only when the read/write mode of the PolarDB for MySQL cluster endpoint is set to **Read/write (automatic read/write splitting)**.
    // > * When the read/write mode of the PolarDB for MySQL cluster endpoint is set to **Read-only**, both **load balancing based on the number of connections** and **load balancing based on the number of active requests** are supported. Cluster endpoints in **Read/write (automatic read/write splitting)** mode support only **load balancing based on the number of active requests**.
    // > * You can configure automatic request distribution between row store and column store nodes when the read/write mode of the PolarDB for MySQL cluster endpoint is set to **Read/write (automatic read/write splitting)**, or when the read/write mode is set to **Read-only** and the load balancing policy is set to **load balancing based on the number of active requests**.
    // > * Only PolarDB for MySQL supports setting the consistency level to global consistency.
    // > * If **ReadWriteMode** is set to **ReadOnly**, the consistency level can only be set to **0**.
    // > * You can configure the consistency level, transaction splitting, whether to offload offload reads from primary node, and the connection pool at the same time. Example: `{"ConsistLevel":"1","DistributedTransaction":"on","ConnectionPersist":"Session","MasterAcceptReads":"on"}`.
    // > * The transaction splitting configuration is restricted by the consistency level configuration. For example, if the consistency level is set to **0**, transaction splitting cannot be enabled. If the consistency level is set to **1** or **2**, transaction splitting can be enabled.
    shared_ptr<string> endpointConfig_ {};
    // The read-only nodes to be added to the destination endpoint. Separate multiple nodes with commas (,). Default value: the original nodes.
    // 
    // > * For PolarDB for MySQL, you must specify node IDs.
    // > * For PolarDB for PostgreSQL and PolarDB for PostgreSQL (Compatible with Oracle), you must specify node role names, such as `Writer,Reader1,Reader2`.
    // > * If **ReadWriteMode** is set to **ReadOnly**, you can mount only one node. However, if this node fails, the endpoint may be unavailable for up to 1 hour. Do not use this configuration in production environments. Therefore, select at least two nodes to improve availability.
    // > * If **ReadWriteMode** is set to **ReadWrite**, you must select at least two nodes.
    //     * For PolarDB for MySQL, you can select any two nodes. If both nodes are read-only nodes, write requests are forwarded to the primary node.
    //     * For PolarDB for PostgreSQL and PolarDB for PostgreSQL (Compatible with Oracle), the primary node must be included.
    shared_ptr<string> nodes_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The global consistency timeout policy. Valid values:
    // 
    // - **0**: send the request to the primary node.
    // 
    // - **2**: timeout degradation. If a global consistency read times out, the current query operation is automatically downgraded to regular requests, and the client does not receive an error message.
    shared_ptr<string> polarSccTimeoutAction_ {};
    // The global consistency timeout period.
    shared_ptr<string> polarSccWaitTimeout_ {};
    // The read/write mode. Valid values:
    // 
    // - **ReadWrite**: read/write (automatic read/write splitting).
    // - **ReadOnly**: read-only.
    shared_ptr<string> readWriteMode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable the global consistency (high-performance mode) feature for the node. Valid values: on (enabled) and off (disabled).
    shared_ptr<string> sccMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
