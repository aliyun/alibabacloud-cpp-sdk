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
        && return this->DBClusterId_ == nullptr && return this->DBEndpointDescription_ == nullptr && return this->DBEndpointId_ == nullptr && return this->endpointConfig_ == nullptr && return this->nodes_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->polarSccTimeoutAction_ == nullptr && return this->polarSccWaitTimeout_ == nullptr && return this->readWriteMode_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->sccMode_ == nullptr; };
    // autoAddNewNodes Field Functions 
    bool hasAutoAddNewNodes() const { return this->autoAddNewNodes_ != nullptr;};
    void deleteAutoAddNewNodes() { this->autoAddNewNodes_ = nullptr;};
    inline string autoAddNewNodes() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewNodes_, "") };
    inline ModifyDBClusterEndpointRequest& setAutoAddNewNodes(string autoAddNewNodes) { DARABONBA_PTR_SET_VALUE(autoAddNewNodes_, autoAddNewNodes) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline ModifyDBClusterEndpointRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // DBEndpointDescription Field Functions 
    bool hasDBEndpointDescription() const { return this->DBEndpointDescription_ != nullptr;};
    void deleteDBEndpointDescription() { this->DBEndpointDescription_ = nullptr;};
    inline string DBEndpointDescription() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointDescription_, "") };
    inline ModifyDBClusterEndpointRequest& setDBEndpointDescription(string DBEndpointDescription) { DARABONBA_PTR_SET_VALUE(DBEndpointDescription_, DBEndpointDescription) };


    // DBEndpointId Field Functions 
    bool hasDBEndpointId() const { return this->DBEndpointId_ != nullptr;};
    void deleteDBEndpointId() { this->DBEndpointId_ = nullptr;};
    inline string DBEndpointId() const { DARABONBA_PTR_GET_DEFAULT(DBEndpointId_, "") };
    inline ModifyDBClusterEndpointRequest& setDBEndpointId(string DBEndpointId) { DARABONBA_PTR_SET_VALUE(DBEndpointId_, DBEndpointId) };


    // endpointConfig Field Functions 
    bool hasEndpointConfig() const { return this->endpointConfig_ != nullptr;};
    void deleteEndpointConfig() { this->endpointConfig_ = nullptr;};
    inline string endpointConfig() const { DARABONBA_PTR_GET_DEFAULT(endpointConfig_, "") };
    inline ModifyDBClusterEndpointRequest& setEndpointConfig(string endpointConfig) { DARABONBA_PTR_SET_VALUE(endpointConfig_, endpointConfig) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline string nodes() const { DARABONBA_PTR_GET_DEFAULT(nodes_, "") };
    inline ModifyDBClusterEndpointRequest& setNodes(string nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBClusterEndpointRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBClusterEndpointRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // polarSccTimeoutAction Field Functions 
    bool hasPolarSccTimeoutAction() const { return this->polarSccTimeoutAction_ != nullptr;};
    void deletePolarSccTimeoutAction() { this->polarSccTimeoutAction_ = nullptr;};
    inline string polarSccTimeoutAction() const { DARABONBA_PTR_GET_DEFAULT(polarSccTimeoutAction_, "") };
    inline ModifyDBClusterEndpointRequest& setPolarSccTimeoutAction(string polarSccTimeoutAction) { DARABONBA_PTR_SET_VALUE(polarSccTimeoutAction_, polarSccTimeoutAction) };


    // polarSccWaitTimeout Field Functions 
    bool hasPolarSccWaitTimeout() const { return this->polarSccWaitTimeout_ != nullptr;};
    void deletePolarSccWaitTimeout() { this->polarSccWaitTimeout_ = nullptr;};
    inline string polarSccWaitTimeout() const { DARABONBA_PTR_GET_DEFAULT(polarSccWaitTimeout_, "") };
    inline ModifyDBClusterEndpointRequest& setPolarSccWaitTimeout(string polarSccWaitTimeout) { DARABONBA_PTR_SET_VALUE(polarSccWaitTimeout_, polarSccWaitTimeout) };


    // readWriteMode Field Functions 
    bool hasReadWriteMode() const { return this->readWriteMode_ != nullptr;};
    void deleteReadWriteMode() { this->readWriteMode_ = nullptr;};
    inline string readWriteMode() const { DARABONBA_PTR_GET_DEFAULT(readWriteMode_, "") };
    inline ModifyDBClusterEndpointRequest& setReadWriteMode(string readWriteMode) { DARABONBA_PTR_SET_VALUE(readWriteMode_, readWriteMode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBClusterEndpointRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBClusterEndpointRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // sccMode Field Functions 
    bool hasSccMode() const { return this->sccMode_ != nullptr;};
    void deleteSccMode() { this->sccMode_ = nullptr;};
    inline string sccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
    inline ModifyDBClusterEndpointRequest& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


  protected:
    // Specifies whether to enable automatic association of newly added nodes with the cluster endpoint. Valid values:
    // 
    // *   **Enable**: enables automatic association of newly added nodes with the cluster endpoint.
    // *   **Disable** (default): disables automatic association of newly added nodes with the cluster endpoint.
    std::shared_ptr<string> autoAddNewNodes_ = nullptr;
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The name of the custom cluster endpoint.
    std::shared_ptr<string> DBEndpointDescription_ = nullptr;
    // The ID of the endpoint.
    // 
    // This parameter is required.
    std::shared_ptr<string> DBEndpointId_ = nullptr;
    // The advanced configurations of the cluster endpoint, which are in the JSON format. You can configure the consistency level, transaction splitting, and connection pool settings, and specify whether the primary node accepts read requests.
    // 
    // *   The load balancing policy. Format: `{\\"LoadBalancePolicy\\":\\"Load balancing policy\\"}`. Valid values:
    // 
    //     *   **0** (default): connections-based load balancing
    //     *   **1**: active requests-based load balancing
    // 
    // *   Specifies whether to allow the primary node to accept read requests. Format: `{\\"MasterAcceptReads\\":\\"Specification about whether to allow the primary node to accept read requests\\"}`. Valid values:
    // 
    //     *   **on** (default): allows the primary node to accept read requests.
    //     *   **off**: does not allow the primary node to accept read requests.
    // 
    // *   Specifies whether to enable the transaction splitting feature. Format: `{\\"DistributedTransaction\\":\\"Specification about whether to enable the transaction splitting feature\\"}`. Valid values:
    // 
    //     *   **on** (default): enables the transaction splitting feature.
    //     *   **off**: disables the transaction splitting feature.
    // 
    // *   The consistency level. Format: `{\\"ConsistLevel\\":\\"Consistency level\\"}`. Valid values:
    // 
    //     *   **0**: eventual consistency (weak)
    //     *   **1** (default): session consistency (medium)
    //     *   **2**: global consistency (strong)
    // 
    // *   The global consistency timeout. Format: `{\\"ConsistTimeout\\":\\"Global consistency timeout\\"}`. Valid values: 0 to 60,000. Default value: 20. Unit: ms.
    // 
    // *   The session consistency timeout. Format: `{\\"ConsistSessionTimeout\\":\\"Session consistency timeout\\"}`. Valid values: 0 to 60,000. Default value: 0. Unit: ms.
    // 
    // *   The global (or session) consistency timeout policy. Format: `{\\"ConsistTimeoutAction\\":\\"Consistency timeout policy\\"}`. Valid values:
    // 
    //     *   **0** (default): PolarProxy sends read requests to the primary node.
    //     *   **1**: PolarProxy returns the "wait replication complete timeout, please retry" error message to the application.
    // 
    // *   Specifies whether to enable the connection pool feature. Format: `{\\"ConnectionPersist\\":\\"Specification about whether to enable the connection pool feature\\"}`. Valid values:
    // 
    //     *   **off** (default): disables the connection pool feature.
    //     *   **Session**: enables the session-level connection pool.
    //     *   **Transaction**: enables the transaction-level connection pool.
    // 
    // *   Specifies whether to enable the parallel query feature. Format: `{\\"MaxParallelDegree\\":\\"Specification about whether to enable the parallel query feature\\"}`. Valid values:
    // 
    //     *   **on**: enables the parallel query feature.
    //     *   **off** (default): disables the parallel query feature.
    // 
    // *   Specifies whether to enable the automatic request distribution among row store and column store nodes feature. Format: `{\\"EnableHtapImci\\":\\"Specification about whether to enable automatic request distribution among row store and column store nodes feature\\"}`. Valid values:
    // 
    //     *   **on**: enables the automatic request distribution among row store and column store nodes feature.
    //     *   **off** (default): disables the automatic request distribution among row store and column store nodes feature.
    // 
    // *   Specifies whether to enable the overload protection feature. Format: `{\\"EnableOverloadThrottle\\":\\"Specification about whether to enable the overload protection feature\\"}`. Valid values:
    // 
    //     *   **on**: enables the overload protection feature.
    //     *   **off** (default): disables the overload protection feature.
    // 
    // > 
    // 
    // *   You can configure the transaction splitting, connection pool, and overload protection settings, and specify whether the primary node accepts read requests settings for the cluster endpoint of a PolarDB for MySQL cluster only if ReadWriteMode of the cluster endpoint is set to Read and Write (Automatic Read/Write Splitting).
    // 
    // *   If ReadWriteMode of the cluster endpoint of a PolarDB for MySQL cluster is set to **Read-only**, you can specify the **Connections-based Load Balancing** or **Active Request-based Load Balancing** policy for the cluster endpoint. If ReadWriteMode of the cluster endpoint of a PolarDB for MySQL cluster is set to **Read/Write (Automatic Read/Write Splitting)**, you can specify only the **Active Request-based Load Balancing** policy for the cluster endpoint.
    // 
    // *   You can enable automatic request distribution among column store and row store nodes for the cluster endpoint of a PolarDB for MySQL cluster if ReadWriteMode of the cluster endpoint is set to **Read and Write (Automatic Read/Write Splitting)**, or if the ReadWriteMode of the cluster endpoint is set to **Read-only** and the load balancing policy is set to **Active requests-based load balancing**.
    // 
    // *   Only PolarDB for MySQL supports global consistency.
    // 
    // *   You can set the consistency level of the cluster endpoint of a PolarDB for MySQL cluster only to **0** if **ReadWriteMode** of the cluster endpoint is set to **ReadOnly**.
    // 
    // *   You can configure the settings for the consistency level, transaction splitting, and connection pool features, and specify whether the primary node accepts read requests settings at a time. Example: `{\\"ConsistLevel\\":\\"1\\",\\"DistributedTransaction\\":\\"on\\",\\"ConnectionPersist\\":\\"Session\\",\\"MasterAcceptReads\\":\\"on\\"}`.
    // 
    // *   The configuration for transaction splitting is limited by the configuration for the consistency level. For example, if you set the consistency level to **0**, you cannot enable transaction splitting. If you set the consistency level to **1** or **2**, you can enable transaction splitting.
    std::shared_ptr<string> endpointConfig_ = nullptr;
    // The reader nodes to be associated with the endpoint. If you need to specify multiple reader nodes, separate the reader nodes with commas (,). If you do not specify this parameter, the predefined nodes are used by default.
    // 
    // > 
    // 
    // *   You must specify the node ID for each PolarDB for MySQL cluster.
    // 
    // *   You must specify the role name of each node for each PolarDB for PostgreSQL or PolarDB for Oracle cluster. Example: `Writer,Reader1,Reader2`.
    // 
    // *   If you set **ReadWriteMode** to **ReadOnly**, only one node can be associated with the cluster endpoint. If the only node becomes faulty, the cluster endpoint may be unavailable for up to an hour. We recommend that you do not associate only one node with the cluster endpoint in production environments. We recommend that you associate at least two nodes with the cluster endpoint to improve service availability.
    // 
    // *   If you set **ReadWriteMode** to **ReadWrite**, you must associate at least two nodes with the cluster endpoint.
    // 
    //     *   No limits are imposed on the two nodes that you select for each PolarDB for MySQL cluster. If the two nodes are read-only nodes, write requests are forwarded to the primary node.
    //     *   The following limit applies to PolarDB for PostgreSQL and PolarDB for Oracle clusters: One of the selected nodes must be the primary node.
    std::shared_ptr<string> nodes_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Global consistency timeout policy. Valid values:
    // 
    // *   **0**: sends the request to the primary node.
    // *   **2**: downgrades the consistency level of a query to inconsistent read when a global consistent read in the query times out. No error message is returned to the client.
    std::shared_ptr<string> polarSccTimeoutAction_ = nullptr;
    // Global consistency timeout.
    std::shared_ptr<string> polarSccWaitTimeout_ = nullptr;
    // The read/write mode. Valid values:
    // 
    // *   **ReadWrite**: The cluster endpoint handles read and write requests. Automatic read/write splitting is enabled.
    // *   **ReadOnly**: The cluster endpoint handles read-only requests.
    std::shared_ptr<string> readWriteMode_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to enable the global consistency (high-performance mode) feature for the nodes. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    std::shared_ptr<string> sccMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
