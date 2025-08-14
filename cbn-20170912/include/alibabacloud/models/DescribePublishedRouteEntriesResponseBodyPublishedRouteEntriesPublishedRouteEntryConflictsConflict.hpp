// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESRESPONSEBODYPUBLISHEDROUTEENTRIESPUBLISHEDROUTEENTRYCONFLICTSCONFLICT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESRESPONSEBODYPUBLISHEDROUTEENTRIESPUBLISHEDROUTEENTRYCONFLICTSCONFLICT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict& obj) { 
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict& obj) { 
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict() = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict(const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict &) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict(DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict &&) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict() = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict& operator=(const DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict &) = default ;
    DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict& operator=(DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->destinationCidrBlock_ != nullptr
        && this->instanceId_ != nullptr && this->instanceType_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr; };
    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string destinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePublishedRouteEntriesResponseBodyPublishedRouteEntriesPublishedRouteEntryConflictsConflict& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The destination CIDR block of the conflicting route.
    std::shared_ptr<string> destinationCidrBlock_ = nullptr;
    // The ID of the peer network instance on which conflicting routes are found.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the peer network instance on which the conflicting routes are found. Valid values:
    // 
    // *   **VPC**: VPC
    // *   **VBR**: VBR
    // *   **CCN**: CCN instance
    std::shared_ptr<string> instanceType_ = nullptr;
    // The ID of the region where the peer network instance on which the conflicting routes are found is deployed.
    std::shared_ptr<string> regionId_ = nullptr;
    // The cause of the route confliction. Valid values:
    // 
    // *   **conflict**: The routes have the same destination CIDR block.
    // *   **overflow**: The number of routes in the route table configured on another network instance has reached the upper limit.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
