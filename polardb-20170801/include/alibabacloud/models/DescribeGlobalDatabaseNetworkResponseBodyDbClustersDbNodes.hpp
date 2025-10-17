// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODYDBCLUSTERSDBNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALDATABASENETWORKRESPONSEBODYDBCLUSTERSDBNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(DBNodeRole, DBNodeRole_);
      DARABONBA_PTR_TO_JSON(DBNodeStatus, DBNodeStatus_);
      DARABONBA_PTR_TO_JSON(FailoverPriority, failoverPriority_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(DBNodeRole, DBNodeRole_);
      DARABONBA_PTR_FROM_JSON(DBNodeStatus, DBNodeStatus_);
      DARABONBA_PTR_FROM_JSON(FailoverPriority, failoverPriority_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes() = default ;
    DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes(const DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes &) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes(DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes &&) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes() = default ;
    DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& operator=(const DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes &) = default ;
    DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& operator=(DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creationTime_ == nullptr
        && return this->DBNodeClass_ == nullptr && return this->DBNodeId_ == nullptr && return this->DBNodeRole_ == nullptr && return this->DBNodeStatus_ == nullptr && return this->failoverPriority_ == nullptr
        && return this->maxConnections_ == nullptr && return this->maxIOPS_ == nullptr && return this->zoneId_ == nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // DBNodeRole Field Functions 
    bool hasDBNodeRole() const { return this->DBNodeRole_ != nullptr;};
    void deleteDBNodeRole() { this->DBNodeRole_ = nullptr;};
    inline string DBNodeRole() const { DARABONBA_PTR_GET_DEFAULT(DBNodeRole_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& setDBNodeRole(string DBNodeRole) { DARABONBA_PTR_SET_VALUE(DBNodeRole_, DBNodeRole) };


    // DBNodeStatus Field Functions 
    bool hasDBNodeStatus() const { return this->DBNodeStatus_ != nullptr;};
    void deleteDBNodeStatus() { this->DBNodeStatus_ = nullptr;};
    inline string DBNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatus_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& setDBNodeStatus(string DBNodeStatus) { DARABONBA_PTR_SET_VALUE(DBNodeStatus_, DBNodeStatus) };


    // failoverPriority Field Functions 
    bool hasFailoverPriority() const { return this->failoverPriority_ != nullptr;};
    void deleteFailoverPriority() { this->failoverPriority_ = nullptr;};
    inline int32_t failoverPriority() const { DARABONBA_PTR_GET_DEFAULT(failoverPriority_, 0) };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& setFailoverPriority(int32_t failoverPriority) { DARABONBA_PTR_SET_VALUE(failoverPriority_, failoverPriority) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxIOPS Field Functions 
    bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
    void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
    inline int32_t maxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeGlobalDatabaseNetworkResponseBodyDBClustersDBNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The time when the node was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The specifications of the node.
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The node ID.
    std::shared_ptr<string> DBNodeId_ = nullptr;
    // The role of the node. Valid values:
    // 
    // *   **Writer**: the primary node
    // *   **Reader**: a read-only node
    std::shared_ptr<string> DBNodeRole_ = nullptr;
    // The status of the node. Valid values:
    // 
    // *   **Creating**: The node is being created.
    // *   **Running**: The node is running.
    // *   **Deleting**: The node is being deleted.
    // *   **Rebooting**: The node is restarting.
    // *   **ClassChanging**: The specifications of the node are being changed.
    // *   **NetAddressCreating**: The network connection is being created.
    // *   **NetAddressDeleting**: The network connection is being deleted.
    // *   **NetAddressModifying**: The network connection is being modified.
    // *   **MinorVersionUpgrading**: The minor version of the node is being updated.
    // *   **Maintaining**: The node is being maintained.
    // *   **Switching**: A failover is being performed.
    std::shared_ptr<string> DBNodeStatus_ = nullptr;
    // The failover priority. Each node is assigned a failover priority. The failover priority determines which node is selected as the primary node when a failover occurs. A larger value indicates a higher priority. Valid values: 1 to 15.
    std::shared_ptr<int32_t> failoverPriority_ = nullptr;
    // The maximum number of concurrent connections.
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    // The maximum input/output operations per second (IOPS).
    std::shared_ptr<int32_t> maxIOPS_ = nullptr;
    // The zone ID of the node.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
