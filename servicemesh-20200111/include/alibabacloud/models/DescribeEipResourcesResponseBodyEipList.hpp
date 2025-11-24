// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPRESOURCESRESPONSEBODYEIPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPRESOURCESRESPONSEBODYEIPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeEipResourcesResponseBodyEipList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipResourcesResponseBodyEipList& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipResourcesResponseBodyEipList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeEipResourcesResponseBodyEipList() = default ;
    DescribeEipResourcesResponseBodyEipList(const DescribeEipResourcesResponseBodyEipList &) = default ;
    DescribeEipResourcesResponseBodyEipList(DescribeEipResourcesResponseBodyEipList &&) = default ;
    DescribeEipResourcesResponseBodyEipList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipResourcesResponseBodyEipList() = default ;
    DescribeEipResourcesResponseBodyEipList& operator=(const DescribeEipResourcesResponseBodyEipList &) = default ;
    DescribeEipResourcesResponseBodyEipList& operator=(DescribeEipResourcesResponseBodyEipList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocationId_ == nullptr
        && return this->instanceType_ == nullptr && return this->ipAddress_ == nullptr && return this->status_ == nullptr; };
    // allocationId Field Functions 
    bool hasAllocationId() const { return this->allocationId_ != nullptr;};
    void deleteAllocationId() { this->allocationId_ = nullptr;};
    inline string allocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
    inline DescribeEipResourcesResponseBodyEipList& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeEipResourcesResponseBodyEipList& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ipAddress Field Functions 
    bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
    void deleteIpAddress() { this->ipAddress_ = nullptr;};
    inline string ipAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
    inline DescribeEipResourcesResponseBodyEipList& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEipResourcesResponseBodyEipList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the EIP.
    std::shared_ptr<string> allocationId_ = nullptr;
    // The type of the resource that is associated with the EIP. Valid values:
    // 
    // *   `EcsInstance`: an ECS instance in a VPC
    // *   `SlbInstance`: a Server Load Balancer (SLB) instance in a VPC
    // *   `Nat`: a NAT gateway
    // *   `HaVip`: a high-availability virtual IP address (HAVIP)
    // *   `NetworkInterface`: a secondary elastic network interface (ENI)
    // 
    // Default value: `EcsInstance`.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The IP address of the EIP.
    std::shared_ptr<string> ipAddress_ = nullptr;
    // The status of the EIP. Valid values:
    // 
    // *   `Associating`: The EIP is being associated with a resource.
    // *   `Unassociating`: The EIP is being disassociated from a resource.
    // *   `InUse`: The EIP is associated with a resource.
    // *   `Available`: The EIP is available.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
