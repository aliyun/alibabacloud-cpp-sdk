// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneCapacity.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneInstanceTypes.hpp>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZonePerformance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZone& obj) { 
      DARABONBA_PTR_TO_JSON(Capacity, capacity_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Performance, performance_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZone& obj) { 
      DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Performance, performance_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeZonesResponseBodyZonesZone() = default ;
    DescribeZonesResponseBodyZonesZone(const DescribeZonesResponseBodyZonesZone &) = default ;
    DescribeZonesResponseBodyZonesZone(DescribeZonesResponseBodyZonesZone &&) = default ;
    DescribeZonesResponseBodyZonesZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZone() = default ;
    DescribeZonesResponseBodyZonesZone& operator=(const DescribeZonesResponseBodyZonesZone &) = default ;
    DescribeZonesResponseBodyZonesZone& operator=(DescribeZonesResponseBodyZonesZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacity_ == nullptr
        && return this->instanceTypes_ == nullptr && return this->performance_ == nullptr && return this->zoneId_ == nullptr; };
    // capacity Field Functions 
    bool hasCapacity() const { return this->capacity_ != nullptr;};
    void deleteCapacity() { this->capacity_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneCapacity & capacity() const { DARABONBA_PTR_GET_CONST(capacity_, Models::DescribeZonesResponseBodyZonesZoneCapacity) };
    inline Models::DescribeZonesResponseBodyZonesZoneCapacity capacity() { DARABONBA_PTR_GET(capacity_, Models::DescribeZonesResponseBodyZonesZoneCapacity) };
    inline DescribeZonesResponseBodyZonesZone& setCapacity(const Models::DescribeZonesResponseBodyZonesZoneCapacity & capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };
    inline DescribeZonesResponseBodyZonesZone& setCapacity(Models::DescribeZonesResponseBodyZonesZoneCapacity && capacity) { DARABONBA_PTR_SET_RVALUE(capacity_, capacity) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZoneInstanceTypes & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, Models::DescribeZonesResponseBodyZonesZoneInstanceTypes) };
    inline Models::DescribeZonesResponseBodyZonesZoneInstanceTypes instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, Models::DescribeZonesResponseBodyZonesZoneInstanceTypes) };
    inline DescribeZonesResponseBodyZonesZone& setInstanceTypes(const Models::DescribeZonesResponseBodyZonesZoneInstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeZonesResponseBodyZonesZone& setInstanceTypes(Models::DescribeZonesResponseBodyZonesZoneInstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // performance Field Functions 
    bool hasPerformance() const { return this->performance_ != nullptr;};
    void deletePerformance() { this->performance_ = nullptr;};
    inline const Models::DescribeZonesResponseBodyZonesZonePerformance & performance() const { DARABONBA_PTR_GET_CONST(performance_, Models::DescribeZonesResponseBodyZonesZonePerformance) };
    inline Models::DescribeZonesResponseBodyZonesZonePerformance performance() { DARABONBA_PTR_GET(performance_, Models::DescribeZonesResponseBodyZonesZonePerformance) };
    inline DescribeZonesResponseBodyZonesZone& setPerformance(const Models::DescribeZonesResponseBodyZonesZonePerformance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
    inline DescribeZonesResponseBodyZonesZone& setPerformance(Models::DescribeZonesResponseBodyZonesZonePerformance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeZonesResponseBodyZonesZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // This parameter is reserved. You can ignore this parameter.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneCapacity> capacity_ = nullptr;
    // The details about file system types.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZoneInstanceTypes> instanceTypes_ = nullptr;
    // This parameter is reserved. You can ignore this parameter.
    std::shared_ptr<Models::DescribeZonesResponseBodyZonesZonePerformance> performance_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
