// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEECSCAPACITYRESERVATIONATTR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEECSCAPACITYRESERVATIONATTR_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr& obj) { 
      DARABONBA_PTR_TO_JSON(CapacityReservationId, capacityReservationId_);
      DARABONBA_PTR_TO_JSON(CapacityReservationPreference, capacityReservationPreference_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr& obj) { 
      DARABONBA_PTR_FROM_JSON(CapacityReservationId, capacityReservationId_);
      DARABONBA_PTR_FROM_JSON(CapacityReservationPreference, capacityReservationPreference_);
    };
    DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr() = default ;
    DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr(const DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr(DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr() = default ;
    DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr& operator=(const DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr& operator=(DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capacityReservationId_ != nullptr
        && this->capacityReservationPreference_ != nullptr; };
    // capacityReservationId Field Functions 
    bool hasCapacityReservationId() const { return this->capacityReservationId_ != nullptr;};
    void deleteCapacityReservationId() { this->capacityReservationId_ = nullptr;};
    inline string capacityReservationId() const { DARABONBA_PTR_GET_DEFAULT(capacityReservationId_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr& setCapacityReservationId(string capacityReservationId) { DARABONBA_PTR_SET_VALUE(capacityReservationId_, capacityReservationId) };


    // capacityReservationPreference Field Functions 
    bool hasCapacityReservationPreference() const { return this->capacityReservationPreference_ != nullptr;};
    void deleteCapacityReservationPreference() { this->capacityReservationPreference_ = nullptr;};
    inline string capacityReservationPreference() const { DARABONBA_PTR_GET_DEFAULT(capacityReservationPreference_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceEcsCapacityReservationAttr& setCapacityReservationPreference(string capacityReservationPreference) { DARABONBA_PTR_SET_VALUE(capacityReservationPreference_, capacityReservationPreference) };


  protected:
    // The ID of the capacity reservation.
    std::shared_ptr<string> capacityReservationId_ = nullptr;
    // The preference of the capacity reservation.
    std::shared_ptr<string> capacityReservationPreference_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
