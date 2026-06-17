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
    // - **Enable**: yes
    // 
    // - **Disable**: no (default)
    shared_ptr<string> autoAddNewNodes_ {};
    // A client token to ensure the idempotence of the request. The client generates the value, but you must make sure that the value is unique among different requests. The token is case-sensitive and can contain up to 64 ASCII characters.
    shared_ptr<string> clientToken_ {};
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
    // The advanced configurations of the cluster endpoint, which are specified in the JSON format. You can set the consistency level, transaction splitting, whether the primary node accepts read requests, the connection pool, and more.
    // 
    // - To set the load balancing policy, use the format `{\\"LoadBalancePolicy\\":\\"policy\\"}`. Valid values:
    // 
    //   - **0**: connection-based load balancing (default)
    // 
    //   - **1**: active request-based load balancing
    // 
    // - To specify whether the primary node accepts read requests, use the format `{\\"MasterAcceptReads\\":\\"value\\"}`. Valid values:
    // 
    //   - **on**: The primary node accepts read requests (default).
    // 
    //   - **off**: The primary node does not accept read requests.
    // 
    // - To configure transaction splitting, use the format `{\\"DistributedTransaction\\":\\"value\\"}`. Valid values:
    // 
    //   - **on**: enables transaction splitting (default)
    // 
    //   - **off**: disables transaction splitting
    // 
    // - To set the consistency level, use the format `{\\"ConsistLevel\\":\\"level\\"}`. Valid values:
    // 
    //   - **0**: eventual consistency (weak)
    // 
    //   - **1**: session consistency (medium) (default)
    // 
    //   - **2**: global consistency (strong)
    // 
    // - To set the timeout period for a global consistency read, use the format `{\\"ConsistTimeout\\":\\"timeout\\"}`. Valid values: 0 to 60000. Default value: 20. Unit: ms.
    // 
    // - To set the timeout period for a session consistency read, use the format `{\\"ConsistSessionTimeout\\":\\"timeout\\"}`. Valid values: 0 to 60000. Default value: 0. Unit: ms.
    // 
    // - To set the policy for a global or session consistency read timeout, use the format `{\\"ConsistTimeoutAction\\":\\"policy\\"}`. Valid values:
    // 
    //   - **0**: Sends the read request to the primary node (default).
    // 
    //   - **1**: The proxy returns a \\`wait replication complete timeout, please retry\\` error message to the application.
    // 
    // - To configure the connection pool, use the format `{\\"ConnectionPersist\\":\\"pool_type\\"}`. Valid values:
    // 
    //   - **off**: disables the connection pool (default)
    // 
    //   - **Session**: enables the session-level connection pool
    // 
    //   - **Transaction**: enables transaction-level connection pooling
    // 
    // - To configure parallel queries, use the format `{\\"MaxParallelDegree\\":\\"value\\"}`. Valid values:
    // 
    //   - **on**: enables parallel queries
    // 
    //   - **off**: disables parallel queries (default)
    // 
    // - To configure automatic routing between row store and column store, use the format `{\\"EnableHtapImci\\":\\"value\\"}`. Valid values:
    // 
    //   - **on**: enables automatic routing between row store and column store
    // 
    //   - **off**: disables automatic routing between row store and column store (default)
    // 
    // - To specify whether to enable overload protection, use the format `{\\"EnableOverloadThrottle\\":\\"value\\"}`. Valid values:
    // 
    //   - **on**: enables overload protection
    // 
    //   - **off**: disables overload protection (default)
    // 
    // > * You can configure transaction splitting, specify whether the primary node accepts read requests, configure the connection pool, and enable overload protection only when the read/write mode of the cluster endpoint for PolarDB for MySQL is set to **ReadWrite** (automatic read/write splitting).
    // >
    // > * If the read/write mode of a cluster endpoint for PolarDB for MySQL is **ReadOnly**, both connection-based and active request-based load balancing policies are supported. If the read/write mode is **ReadWrite** (automatic read/write splitting), only the active request-based load balancing policy is supported.
    // >
    // > * You can configure automatic routing between row store and column store when the read/write mode of the cluster endpoint for PolarDB for MySQL is **ReadWrite** (automatic read/write splitting), or when the read/write mode is **ReadOnly** and the load balancing policy is active request-based.
    // >
    // > * Only PolarDB for MySQL supports the global consistency level.
    // >
    // > * If you set **ReadWriteMode** to **ReadOnly**, you can set the consistency level only to **0**.
    // >
    // > * You can set the consistency level, transaction splitting, whether the primary node accepts read requests, and the connection pool at the same time. For example: `{\\"ConsistLevel\\":\\"1\\",\\"DistributedTransaction\\":\\"on\\",\\"ConnectionPersist\\":\\"Session\\",\\"MasterAcceptReads\\":\\"on\\"}`.
    // >
    // > * The transaction splitting setting is constrained by the consistency level. For example, if the consistency level is **0**, you cannot enable transaction splitting. If the consistency level is **1** or **2**, you can enable transaction splitting.
    shared_ptr<string> endpointConfig_ {};
    // The read-only nodes to add to the endpoint. Separate multiple node IDs with commas (,). If you do not specify this parameter, the original nodes are retained.
    // 
    // > - For PolarDB for MySQL, specify the node IDs.
    // >
    // > - For PolarDB for PostgreSQL and PolarDB for PostgreSQL (compatible with Oracle), specify the node role names, such as `Writer,Reader1,Reader2`.
    // >
    // > - If you set **ReadWriteMode** to **ReadOnly**, you can attach only one node. However, if this node fails, the endpoint might be unavailable for up to one hour. Do not use this configuration in a production environment. Select at least two nodes to improve availability.
    // >
    // > - If you set **ReadWriteMode** to **ReadWrite**, you must select at least two nodes.
    // >   \\* For PolarDB for MySQL, you can select any two nodes. If both nodes are read-only nodes, write requests are sent to the primary node.
    // >   \\* For PolarDB for PostgreSQL and PolarDB for PostgreSQL (compatible with Oracle), you must include the primary node.
    shared_ptr<string> nodes_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The policy for a global consistency timeout. Valid values:
    // 
    // - **0**: Sends the request to the primary node.
    // 
    // - **2**: Timeout degradation. If a global consistency read times out, the query is automatically downgraded to a regular request, and the client does not receive an error message.
    shared_ptr<string> polarSccTimeoutAction_ {};
    // The timeout period for global consistency.
    shared_ptr<string> polarSccWaitTimeout_ {};
    // The read/write mode. Valid values:
    // 
    // - **ReadWrite**: read-write (automatic read/write splitting)
    // 
    // - **ReadOnly**: read-only
    shared_ptr<string> readWriteMode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable the global consistency (high-performance mode) feature for the node. Valid values:
    // 
    // - **ON**: enables the feature
    // 
    // - **OFF**: disables the feature
    shared_ptr<string> sccMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
