// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSDBCLUSTERRESPONSEBODYDBINSTANCEDBNODESDBNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSDBCLUSTERRESPONSEBODYDBINSTANCEDBNODESDBNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode& obj) { 
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(DBNodeRole, DBNodeRole_);
      DARABONBA_PTR_TO_JSON(DBNodeStatus, DBNodeStatus_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode& obj) { 
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(DBNodeRole, DBNodeRole_);
      DARABONBA_PTR_FROM_JSON(DBNodeStatus, DBNodeStatus_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode() = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode(const DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode &) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode(DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode &&) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode() = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode& operator=(const DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode &) = default ;
    DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode& operator=(DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBNodeId_ != nullptr
        && this->DBNodeRole_ != nullptr && this->DBNodeStatus_ != nullptr && this->zoneId_ != nullptr; };
    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // DBNodeRole Field Functions 
    bool hasDBNodeRole() const { return this->DBNodeRole_ != nullptr;};
    void deleteDBNodeRole() { this->DBNodeRole_ = nullptr;};
    inline string DBNodeRole() const { DARABONBA_PTR_GET_DEFAULT(DBNodeRole_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode& setDBNodeRole(string DBNodeRole) { DARABONBA_PTR_SET_VALUE(DBNodeRole_, DBNodeRole) };


    // DBNodeStatus Field Functions 
    bool hasDBNodeStatus() const { return this->DBNodeStatus_ != nullptr;};
    void deleteDBNodeStatus() { this->DBNodeStatus_ = nullptr;};
    inline string DBNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatus_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode& setDBNodeStatus(string DBNodeStatus) { DARABONBA_PTR_SET_VALUE(DBNodeStatus_, DBNodeStatus) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDrdsDBClusterResponseBodyDbInstanceDBNodesDBNode& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the node in the apsaradb for PolarDB cluster.
    std::shared_ptr<string> DBNodeId_ = nullptr;
    // The role of a node in the apsaradb for PolarDB cluster. Valid values:
    // 
    // *   **Reader**
    // *   **Writer**
    std::shared_ptr<string> DBNodeRole_ = nullptr;
    // The status of the nodes in the PolarDB cluster.
    std::shared_ptr<string> DBNodeStatus_ = nullptr;
    // The ID of the zone where the node of the PolarDB cluster resides.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
