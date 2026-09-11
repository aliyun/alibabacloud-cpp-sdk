// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBCLUSTERENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBCLUSTERENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ModifyDBClusterEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBClusterEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoAddNewNodes, autoAddNewNodes_);
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
    friend void from_json(const Darabonba::Json& j, ModifyDBClusterEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoAddNewNodes, autoAddNewNodes_);
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
    ModifyDBClusterEndpointRequest() = default ;
    ModifyDBClusterEndpointRequest(const ModifyDBClusterEndpointRequest &) = default ;
    ModifyDBClusterEndpointRequest(ModifyDBClusterEndpointRequest &&) = default ;
    ModifyDBClusterEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBClusterEndpointRequest() = default ;
    ModifyDBClusterEndpointRequest& operator=(const ModifyDBClusterEndpointRequest &) = default ;
    ModifyDBClusterEndpointRequest& operator=(ModifyDBClusterEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoAddNewNodes_ == nullptr
        && this->DBClusterId_ == nullptr && this->DBEndpointDescription_ == nullptr && this->DBEndpointId_ == nullptr && this->endpointConfig_ == nullptr && this->nodes_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->polarSccTimeoutAction_ == nullptr && this->polarSccWaitTimeout_ == nullptr && this->readWriteMode_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->sccMode_ == nullptr; };
    // autoAddNewNodes Field Functions 
    bool hasAutoAddNewNodes() const { return this->autoAddNewNodes_ != nullptr;};
    void deleteAutoAddNewNodes() { this->autoAddNewNodes_ = nullptr;};
    inline string getAutoAddNewNodes() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewNodes_, "") };
    inline ModifyDBClusterEndpointRequest& setAutoAddNewNodes(string autoAddNewNodes) { DARABONBA_PTR_SET_VALUE(autoAddNewNodes_, autoAddNewNodes) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterEndpointRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointDescription Field Functions 
    bool hasDBEndpointDescription() const { return this->DBEndpointDescription_ != nullptr;};
    void deleteDBEndpointDescription() { this->DBEndpointDescription_ = nullptr;};
    inline string getDBEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointDescription_, "") };
    inline ModifyDBClusterEndpointRequest& setDBEndpointDescription(string DBEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBEndpointDescription_, DBEndpointDescription) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string getDBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline ModifyDBClusterEndpointRequest& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // endpointConfig Field Functions 
    bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
    void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
    inline string getEndpointConfig() const { DARABONBA_PTR_GET_DEFAULT(endpointConfig_, "") };
    inline ModifyDBClusterEndpointRequest& setEndpointConfig(string endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string getNodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline ModifyDBClusterEndpointRequest& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterEndpointRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterEndpointRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // polarSccTimeoutAction Field Functions 
    bool hasPolarSccTimeoutAction() const { return this->polarSccTimeoutAction_ != nullptr;};
    void deletePolarSccTimeoutAction() { this->polarSccTimeoutAction_ = nullptr;};
    inline string getPolarSccTimeoutAction() const { DARABONBA_PTR_GET_DEFAULT(polarSccTimeoutAction_, "") };
    inline ModifyDBClusterEndpointRequest& setPolarSccTimeoutAction(string polarSccTimeoutAction) { DARABONBA_PTR_SET_VALUE(polarSccTimeoutAction_, polarSccTimeoutAction) };


    // polarSccWaitTimeout Field Functions 
    bool hasPolarSccWaitTimeout() const { return this->polarSccWaitTimeout_ != nullptr;};
    void deletePolarSccWaitTimeout() { this->polarSccWaitTimeout_ = nullptr;};
    inline string getPolarSccWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(polarSccWaitTimeout_, "") };
    inline ModifyDBClusterEndpointRequest& setPolarSccWaitTimeout(string polarSccWaitTimeout) { DARABONBA_PTR_SET_VALUE(polarSccWaitTimeout_, polarSccWaitTimeout) };


    // readWriteMode Field Functions 
    bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
    void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
    inline string getReadWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
    inline ModifyDBClusterEndpointRequest& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterEndpointRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterEndpointRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sccMode Field Functions 
    bool hasSccMode() const { return this->sccMode_ != nullptr;};
    void deleteSccMode() { this->sccMode_ = nullptr;};
    inline string getSccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
    inline ModifyDBClusterEndpointRequest& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


  protected:
    // Specifies whether new nodes are automatically added to the endpoint. Valid values: 
    // 
    // - **Enable**: New nodes are automatically added.
    // - **Disable**: New nodes are not automatically added. (Default)
    shared_ptr<string> autoAddNewNodes_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the endpoint.
    shared_ptr<string> DBEndpointDescription_ {};
    // The cluster endpoint ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBEndpointId_ {};
    // The advanced configuration of the cluster endpoint in JSON format. You can configure the consistency level, transaction splitting, whether the primary node accepts read requests, and connection pooling.
    // 
    // * To set the load balancing policy, use the format `{\\"LoadBalancePolicy\\":\\"Load balancing policy\\"}`. Valid values:   
    //     * **0**: connection-based load balancing (default)
    //     * **1**: active-request-based load balancing
    // 
    // * To set whether the primary node accepts read requests, use the format `{\\"MasterAcceptReads\\":\\"Whether the primary node accepts reads\\"}`. Valid values:
    //     * **on**: The primary node accepts read requests. (Default)
    //     * **off**: The primary node does not accept read requests.
    // 
    // * To set transaction splitting, use the format `{\\"DistributedTransaction\\":\\"Transaction splitting\\"}`. Valid values:
    //     * **on**: Transaction splitting is enabled. (Default)
    //     * **off**: Transaction splitting is disabled.
    // 
    // * To set the consistency level, use the format `{\\"ConsistLevel\\":\\"Consistency level\\"}`. Valid values:
    //     * **0**: eventual consistency (weak)
    //     * **1**: session consistency (medium) (default)
    //     * **2**: global consistency (strong)
    // 
    // * To set the global consistency read timeout period, use the format `{\\"ConsistTimeout\\":\\"Global consistency read timeout\\"}`. Valid values: 0 to 60000. Default value: 20. Unit: ms.
    // 
    // * To set the session consistency read timeout period, use the format `{\\"ConsistSessionTimeout\\":\\"Session consistency read timeout\\"}`. Valid values: 0 to 60000. Default value: 0. Unit: ms.
    // 
    // * To set the global (or session) consistency read timeout policy, use the format `{\\"ConsistTimeoutAction\\":\\"Global consistency read timeout policy\\"}`. Valid values:
    //     * **0**: Forward the read request to the primary node. (Default)
    //     * **1**: The proxy returns the error message `wait replication complete timeout, please retry` to the application.
    // 
    // * To set the connection pool, use the format `{\\"ConnectionPersist\\":\\"Connection pool\\"}`. Valid values:
    //     * **off**: The connection pool is disabled. (Default)
    //     * **Session**: The session-level connection pool is enabled.
    //     * **Transaction**: The transaction-level connection pooling is enabled.
    // 
    // * To set parallel query, use the format `{\\"MaxParallelDegree\\":\\"Parallel query\\"}`. Valid values:
    //     * **on**: Parallel query is enabled.
    //     * **off**: Parallel query is disabled. (Default)
    // 
    // * To set automatic request distribution among row offload reads from primary nodes, use the format `{\\"EnableHtapImci\\":\\"Automatic request distribution among row store and column store\\"}`. Valid values:
    //     * **on**: Automatic request distribution among row offload reads from primary nodes is enabled.
    //     * **off**: Automatic request distribution among row offload reads from primary nodes is disabled. (Default)
    // 
    // 
    // * To set whether to enable overload protection, use the format `{\\"EnableOverloadThrottle\\":\\"Whether to enable overload protection\\"}`. Valid values:
    //     * **on**: Overload protection is enabled.
    //     * **off**: Overload protection is disabled. (Default)
    // 
    // * To set node weights, use the format `{\\"NodesWeight\\":{\\"Node ID\\":\\"Weight value\\"}}`.
    // 
    // > * Transaction splitting, whether the primary node accepts read requests, connection pooling, and overload protection can be configured only when the read/write mode of the PolarDB for MySQL cluster endpoint is **ReadWrite (automatic read/write splitting)**.
    // > * When the read/write mode of the PolarDB for MySQL cluster endpoint is **ReadOnly**, both **connection-based load balancing** and **active-request-based load balancing** policies are supported. The **ReadWrite (automatic read/write splitting)** mode supports only the **active-request-based load balancing** policy.
    // > * Automatic request distribution among row offload reads from primary nodes can be configured when the read/write mode of the PolarDB for MySQL cluster endpoint is **ReadWrite (automatic read/write splitting)**, or when the read/write mode is **ReadOnly** and the load balancing policy is **active-request-based load balancing**.
    // > * Only PolarDB for MySQL supports setting the consistency level to global consistency.
    // > * If **ReadWriteMode** is set to **ReadOnly**, the consistency level can only be set to **0**.
    // > * You can configure the consistency level, transaction splitting, whether the primary node accepts read requests, and connection pooling at the same time. Example: `{\\"ConsistLevel\\":\\"1\\",\\"DistributedTransaction\\":\\"on\\",\\"ConnectionPersist\\":\\"Session\\",\\"MasterAcceptReads\\":\\"on\\"}`.
    // > * Transaction splitting is constrained by the consistency level. For example, transaction splitting cannot be enabled when the consistency level is **0**. Transaction splitting can be enabled when the consistency level is **1** or **2**.
    shared_ptr<string> endpointConfig_ {};
    // The read load nodes to add to the endpoint. Separate multiple nodes with commas (,). Default value: the existing nodes.
    // 
    // > * For PolarDB for MySQL, specify node IDs.
    // > * For PolarDB for PostgreSQL and PolarDB for PostgreSQL (Compatible with Oracle), specify node role names, such as `Writer,Reader1,Reader2`.
    // > * If **ReadWriteMode** is set to **ReadOnly**, you can mount only one node. However, if this node fails, the endpoint may be unavailable for up to 1 hour. Do not use this configuration in production environments. Select at least 2 nodes to improve availability.
    // > * If **ReadWriteMode** is set to **ReadWrite**, select at least 2 nodes.
    //     * PolarDB for MySQL allows you to select any two nodes. If both nodes are read-only nodes, write requests are forwarded to the primary node.
    //     * PolarDB for PostgreSQL and PolarDB for PostgreSQL (Compatible with Oracle) require the primary node to be included.
    shared_ptr<string> nodes_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The timeout policy for global consistency. Valid values:
    // 
    // - **0**: Send the request to the primary node.
    // 
    // - **2**: Timeout degradation. When the global consistency read times out, the query is automatically degraded to regular requests, and the client does not receive an error message.
    shared_ptr<string> polarSccTimeoutAction_ {};
    // The timeout period for global consistency.
    shared_ptr<string> polarSccWaitTimeout_ {};
    // The read/write mode. Valid values:
    // 
    // - **ReadWrite**: read/write (automatic read/write splitting)
    // - **ReadOnly**: read-only
    shared_ptr<string> readWriteMode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable the global consistency (high-performance mode) feature for the node. Valid values:
    // 
    // - **ON**: Enabled.
    // 
    // - **OFF**: Disabled.
    shared_ptr<string> sccMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
