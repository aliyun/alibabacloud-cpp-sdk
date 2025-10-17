// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLEDEDICATEDHOSTTYPES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONEAVAILABLEDEDICATEDHOSTTYPES_HPP_
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
  class DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
    };
    DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes(const DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes(DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes &&) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes() = default ;
    DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes& operator=(const DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes &) = default ;
    DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes& operator=(DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dedicatedHostType_ == nullptr; };
    // dedicatedHostType Field Functions 
    bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
    void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
    inline const vector<string> & dedicatedHostType() const { DARABONBA_PTR_GET_CONST(dedicatedHostType_, vector<string>) };
    inline vector<string> dedicatedHostType() { DARABONBA_PTR_GET(dedicatedHostType_, vector<string>) };
    inline DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes& setDedicatedHostType(const vector<string> & dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };
    inline DescribeZonesResponseBodyZonesZoneAvailableDedicatedHostTypes& setDedicatedHostType(vector<string> && dedicatedHostType) { DARABONBA_PTR_SET_RVALUE(dedicatedHostType_, dedicatedHostType) };


  protected:
    std::shared_ptr<vector<string>> dedicatedHostType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
