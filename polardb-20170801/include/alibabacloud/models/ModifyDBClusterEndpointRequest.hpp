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
    // Specifies whether to automatically add new nodes to the endpoint. Valid values:
    // 
    // - **Enable**: Automatically adds new nodes.
    // 
    // - **Disable**: Does not automatically add new nodes. This is the default value.
    shared_ptr<string> autoAddNewNodes_ {};
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBClusterId_ {};
    // The name of the endpoint.
    shared_ptr<string> DBEndpointDescription_ {};
    // The ID of the cluster endpoint.
    // 
    // This parameter is required.
    shared_ptr<string> DBEndpointId_ {};
    // The advanced configurations of the cluster endpoint in JSON format. You can set the consistency level, transaction splitting, whether the primary node accepts read requests, the connection pool, and other settings.
    // 
    // - Sets the load balancing policy. Format: `{\\"LoadBalancePolicy\\":\\"policy\\"}`. Valid values:
    // 
    //   - **0**: Connections-based load balancing (default)
    // 
    //   - **1**: Active requests-based load balancing
    // 
    // - Specifies whether the primary node accepts read requests. Format: `{\\"MasterAcceptReads\\":\\"value\\"}`. Valid values:
    // 
    //   - **on**: The primary node accepts read requests (default).
    // 
    //   - **off**: The primary node does not accept read requests.
    // 
    // - Enables or disables transaction splitting. Format: `{\\"DistributedTransaction\\":\\"value\\"}`. Valid values:
    // 
    //   - **on**: Enables transaction splitting (default).
    // 
    //   - **off**: Disables transaction splitting.
    // 
    // - Sets the consistency level. Format: `{\\"ConsistLevel\\":\\"level\\"}`. Valid values:
    // 
    //   - **0**: Eventual consistency (weak)
    // 
    //   - **1**: Session consistency (medium) (default)
    // 
    //   - **2**: Global consistency (strong)
    // 
    // - Sets the timeout period for a global consistency read. Format: `{\\"ConsistTimeout\\":\\"timeout\\"}`. Valid values: 0 to 60000. Default value: 20. Unit: ms.
    // 
    // - Sets the timeout period for a session consistency read. Format: `{\\"ConsistSessionTimeout\\":\\"timeout\\"}`. Valid values: 0 to 60000. Default value: 0. Unit: ms.
    // 
    // - Sets the policy for handling timeouts of global or session consistency reads. Format: `{\\"ConsistTimeoutAction\\":\\"policy\\"}`. Valid values:
    // 
    //   - **0**: Forwards read requests to the primary node (default).
    // 
    //   - **1**: The proxy returns the error message \\`wait replication complete timeout, please retry\\` to the application.
    // 
    // - Sets the connection pool type. Format: `{\\"ConnectionPersist\\":\\"type\\"}`. Valid values:
    // 
    //   - **off**: Disables the connection pool (default).
    // 
    //   - **Session**: Enables the session-level connection pool.
    // 
    //   - **Transaction**: Enables the transaction-level connection pool.
    // 
    // - Enables or disables parallel query. Format: `{\\"MaxParallelDegree\\":\\"value\\"}`. Valid values:
    // 
    //   - **on**: Enables parallel query.
    // 
    //   - **off**: Disables parallel query (default).
    // 
    // - Enables or disables automatic routing of requests to the row store or column store. Format: `{\\"EnableHtapImci\\":\\"value\\"}`. Valid values:
    // 
    //   - **on**: Enables automatic routing.
    // 
    //   - **off**: Disables automatic routing (default).
    // 
    // - Enables or disables overload protection. Format: `{\\"EnableOverloadThrottle\\":\\"value\\"}`. Valid values:
    // 
    //   - **on**: Enables overload protection.
    // 
    //   - **off**: Disables overload protection (default).
    // 
    // > * You can set transaction splitting, whether the primary node accepts read requests, the connection pool, and overload protection only when the read/write mode of the cluster endpoint for PolarDB for MySQL is set to ReadWrite (automatic read/write splitting).
    // >
    // > * If the read/write mode of a cluster endpoint for PolarDB for MySQL is **ReadOnly**, both **connections-based** and **active requests-based** load balancing policies are supported. If the read/write mode is **ReadWrite** (automatic read/write splitting), only the **active requests-based** load balancing policy is supported.
    // >
    // > * You can enable automatic routing to the row store or column store if the read/write mode of the cluster endpoint for PolarDB for MySQL is **ReadWrite** (automatic read/write splitting), or if the read/write mode is **ReadOnly** and the load balancing policy is **active requests-based**.
    // >
    // > * Only PolarDB for MySQL supports global consistency.
    // >
    // > * If you set the **ReadWriteMode** parameter to **ReadOnly**, you can only set the consistency level to **0**.
    // >
    // > * You can set the consistency level, transaction splitting, whether the primary node accepts read requests, and the connection pool at the same time. For example: `{\\"ConsistLevel\\":\\"1\\",\\"DistributedTransaction\\":\\"on\\",\\"ConnectionPersist\\":\\"Session\\",\\"MasterAcceptReads\\":\\"on\\"}`.
    // >
    // > * The transaction splitting setting is constrained by the consistency level. For example, you cannot enable transaction splitting if the consistency level is **0** (eventual consistency). You can enable transaction splitting if the consistency level is **1** (session consistency) or **2** (global consistency).
    shared_ptr<string> endpointConfig_ {};
    // The nodes to be added to the endpoint for read request distribution. Separate multiple node IDs with commas (,). The original nodes are used by default.
    // 
    // > - For PolarDB for MySQL, specify the node IDs.
    // >
    // > - For PolarDB for PostgreSQL and PolarDB for PostgreSQL (Oracle Compatible), specify the node roles, such as `Writer,Reader1,Reader2`.
    // >
    // > - If you set **ReadWriteMode** to **ReadOnly**, you can attach only one node. However, if this node fails, the endpoint may be unavailable for up to one hour. Do not use this configuration in a production environment. Select at least two nodes to improve availability.
    // >
    // > - If you set **ReadWriteMode** to **ReadWrite**, you must select at least two nodes.
    // >   \\* For PolarDB for MySQL, you can select any two nodes. If both nodes are read-only nodes, write requests are sent to the primary node.
    // >   \\* For PolarDB for PostgreSQL and PolarDB for PostgreSQL (Oracle Compatible), you must include the primary node.
    shared_ptr<string> nodes_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The policy for handling global consistency timeouts. Valid values:
    // 
    // - **0**: Forwards the request to the primary node.
    // 
    // - **2**: Degrades the request. If a global consistency read times out, the query is automatically degraded to a regular request. The client does not receive an error message.
    shared_ptr<string> polarSccTimeoutAction_ {};
    // The timeout period for global consistency.
    shared_ptr<string> polarSccWaitTimeout_ {};
    // The read/write mode. Valid values:
    // 
    // - **ReadWrite**: Read/write (automatic read/write splitting)
    // 
    // - **ReadOnly**: Read-only
    shared_ptr<string> readWriteMode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable the global consistency (high-performance mode) feature for the node. Valid values:
    // 
    // - **ON**: Enable
    // 
    // - **OFF**: Disable
    shared_ptr<string> sccMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
