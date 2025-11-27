// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODYGADINSTANCESGADINSTANCEMEMBERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESRESPONSEBODYGADINSTANCESGADINSTANCEMEMBERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(DtsInstance, dtsInstance_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(DtsInstance, dtsInstance_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(EngineVersion, engineVersion_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers() = default ;
    DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers(const DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers &) = default ;
    DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers(DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers &&) = default ;
    DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers() = default ;
    DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& operator=(const DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers &) = default ;
    DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& operator=(DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceID_ == nullptr
        && return this->dtsInstance_ == nullptr && return this->engine_ == nullptr && return this->engineVersion_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->role_ == nullptr && return this->status_ == nullptr; };
    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline string DBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, "") };
    inline DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& setDBInstanceID(string DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // dtsInstance Field Functions 
    bool hasDtsInstance() const { return this->dtsInstance_ != nullptr;};
    void deleteDtsInstance() { this->dtsInstance_ = nullptr;};
    inline string dtsInstance() const { DARABONBA_PTR_GET_DEFAULT(dtsInstance_, "") };
    inline DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& setDtsInstance(string dtsInstance) { DARABONBA_PTR_SET_VALUE(dtsInstance_, dtsInstance) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // engineVersion Field Functions 
    bool hasEngineVersion() const { return this->engineVersion_ != nullptr;};
    void deleteEngineVersion() { this->engineVersion_ = nullptr;};
    inline string engineVersion() const { DARABONBA_PTR_GET_DEFAULT(engineVersion_, "") };
    inline DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& setEngineVersion(string engineVersion) { DARABONBA_PTR_SET_VALUE(engineVersion_, engineVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGadInstancesResponseBodyGadInstancesGadInstanceMembers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the node.
    std::shared_ptr<string> DBInstanceID_ = nullptr;
    // A JSON array that consists of the details about the Data Transmission Service (DTS) synchronization task.
    // 
    // >  Each unit node (secondary node) synchronizes data from the central node (primary node) by using DTS. This parameter contains the synchronization link ID and request ID of DTS.
    std::shared_ptr<string> dtsInstance_ = nullptr;
    // The database engine that is run by the node.
    // 
    // >  The value of this parameter is fixed as **mysql**.
    std::shared_ptr<string> engine_ = nullptr;
    // The database engine version that is run by the node.
    std::shared_ptr<string> engineVersion_ = nullptr;
    // The ID of the region where the node resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The type of the node. Valid values:
    // 
    // *   **CENTRAL**: The node is a central node. Each global active database cluster has only one central node. All unit nodes synchronize data from the central node.
    // *   **UNIT**: The node is a unit node. Each global active database cluster can have up to 10 unit nodes. All unit nodes synchronize data from the central node.
    std::shared_ptr<string> role_ = nullptr;
    // The node status. Valid values:
    // 
    // *   **activation**: The node is running.
    // *   **creating**: The node is being created.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
