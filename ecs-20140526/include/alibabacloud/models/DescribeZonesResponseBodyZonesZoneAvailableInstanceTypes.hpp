// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLEINSTANCETYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLEINSTANCETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes(const DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes(DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes& operator=(const DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes& operator=(DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceTypes_ != nullptr; };
    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeZonesResponseBodyZonesZoneAvailableInstanceTypes& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


  protected:
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
