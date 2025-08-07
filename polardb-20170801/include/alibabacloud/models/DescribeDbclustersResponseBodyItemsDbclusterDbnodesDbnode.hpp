// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTERDBNODESDBNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERSRESPONSEBODYITEMSDBCLUSTERDBNODESDBNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(DBNodeRole, DBNodeRole_);
      DARABONBA_PTR_TO_JSON(HotReplicaMode, hotReplicaMode_);
      DARABONBA_PTR_TO_JSON(ImciSwitch, imciSwitch_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Serverless, serverless_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(DBNodeRole, DBNodeRole_);
      DARABONBA_PTR_FROM_JSON(HotReplicaMode, hotReplicaMode_);
      DARABONBA_PTR_FROM_JSON(ImciSwitch, imciSwitch_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Serverless, serverless_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode() = default ;
    DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode(const DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode &) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode(DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode &&) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode() = default ;
    DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& operator=(const DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode &) = default ;
    DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& operator=(DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBNodeClass_ != nullptr
        && this->DBNodeId_ != nullptr && this->DBNodeRole_ != nullptr && this->hotReplicaMode_ != nullptr && this->imciSwitch_ != nullptr && this->regionId_ != nullptr
        && this->serverless_ != nullptr && this->zoneId_ != nullptr; };
    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // DBNodeRole Field Functions 
    bool hasDBNodeRole() const { return this->DBNodeRole_ != nullptr;};
    void deleteDBNodeRole() { this->DBNodeRole_ = nullptr;};
    inline string DBNodeRole() const { DARABONBA_PTR_GET_DEFAULT(DBNodeRole_, "") };
    inline DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& setDBNodeRole(string DBNodeRole) { DARABONBA_PTR_SET_VALUE(DBNodeRole_, DBNodeRole) };


    // hotReplicaMode Field Functions 
    bool hasHotReplicaMode() const { return this->hotReplicaMode_ != nullptr;};
    void deleteHotReplicaMode() { this->hotReplicaMode_ = nullptr;};
    inline string hotReplicaMode() const { DARABONBA_PTR_GET_DEFAULT(hotReplicaMode_, "") };
    inline DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& setHotReplicaMode(string hotReplicaMode) { DARABONBA_PTR_SET_VALUE(hotReplicaMode_, hotReplicaMode) };


    // imciSwitch Field Functions 
    bool hasImciSwitch() const { return this->imciSwitch_ != nullptr;};
    void deleteImciSwitch() { this->imciSwitch_ = nullptr;};
    inline string imciSwitch() const { DARABONBA_PTR_GET_DEFAULT(imciSwitch_, "") };
    inline DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& setImciSwitch(string imciSwitch) { DARABONBA_PTR_SET_VALUE(imciSwitch_, imciSwitch) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serverless Field Functions 
    bool hasServerless() const { return this->serverless_ != nullptr;};
    void deleteServerless() { this->serverless_ = nullptr;};
    inline string serverless() const { DARABONBA_PTR_GET_DEFAULT(serverless_, "") };
    inline DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& setServerless(string serverless) { DARABONBA_PTR_SET_VALUE(serverless_, serverless) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBClustersResponseBodyItemsDBClusterDBNodesDBNode& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The specifications of the node.
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> DBNodeId_ = nullptr;
    // The role of the node. Valid values:
    // 
    // *   **Writer**: primary node
    // *   **Reader**: read-only node
    // *   **ColumnReader**: column store read-only node
    // *   **AI**: AI node
    std::shared_ptr<string> DBNodeRole_ = nullptr;
    // Indicates whether the hot standby feature is enabled. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    std::shared_ptr<string> hotReplicaMode_ = nullptr;
    // Indicates whether the In-Memory Column Index (IMCI) feature is enabled. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    std::shared_ptr<string> imciSwitch_ = nullptr;
    // The region ID of the cluster.
    std::shared_ptr<string> regionId_ = nullptr;
    // Indicates whether the serverless feature is enabled for the node.
    // 
    // *   **ON** indicates that the serverless feature is enabled.
    // *   No value is returned if the serverless feature is disabled.
    std::shared_ptr<string> serverless_ = nullptr;
    // The zone ID of the cluster.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
