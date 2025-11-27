// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBINSTANCETOPOLOGYRESPONSEBODYDATANODES_HPP_
#define ALIBABACLOUD_MODELS_GETDBINSTANCETOPOLOGYRESPONSEBODYDATANODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class GetDBInstanceTopologyResponseBodyDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBInstanceTopologyResponseBodyDataNodes& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBInstanceTopologyResponseBodyDataNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    GetDBInstanceTopologyResponseBodyDataNodes() = default ;
    GetDBInstanceTopologyResponseBodyDataNodes(const GetDBInstanceTopologyResponseBodyDataNodes &) = default ;
    GetDBInstanceTopologyResponseBodyDataNodes(GetDBInstanceTopologyResponseBodyDataNodes &&) = default ;
    GetDBInstanceTopologyResponseBodyDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBInstanceTopologyResponseBodyDataNodes() = default ;
    GetDBInstanceTopologyResponseBodyDataNodes& operator=(const GetDBInstanceTopologyResponseBodyDataNodes &) = default ;
    GetDBInstanceTopologyResponseBodyDataNodes& operator=(GetDBInstanceTopologyResponseBodyDataNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && return this->dedicatedHostGroupId_ == nullptr && return this->dedicatedHostId_ == nullptr && return this->nodeId_ == nullptr && return this->role_ == nullptr && return this->zoneId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline GetDBInstanceTopologyResponseBodyDataNodes& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline GetDBInstanceTopologyResponseBodyDataNodes& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline GetDBInstanceTopologyResponseBodyDataNodes& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetDBInstanceTopologyResponseBodyDataNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetDBInstanceTopologyResponseBodyDataNodes& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetDBInstanceTopologyResponseBodyDataNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // The ID of the dedicated cluster.
    // 
    // > : If the instance does not reside in the specified dedicated cluster, no value is returned.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // The host ID of the instance in the dedicated cluster.
    // 
    // > : If the instance does not reside in the specified dedicated cluster, no value is returned.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    // The ID of the instance.
    // 
    // > : The value \\*\\*-1\\*\\* is returned for an instance that does not reside in a dedicated cluster.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The type of the node. The following result is returned:
    // 
    // *   **Master**: a primary node
    // *   **Slave**: a secondary node
    std::shared_ptr<string> role_ = nullptr;
    // The zone ID of the instance.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
