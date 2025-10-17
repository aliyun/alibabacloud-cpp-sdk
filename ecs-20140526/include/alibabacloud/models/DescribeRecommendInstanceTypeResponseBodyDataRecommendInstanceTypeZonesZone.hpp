// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODYDATARECOMMENDINSTANCETYPEZONESZONE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODYDATARECOMMENDINSTANCETYPEZONESZONE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZoneNetworkTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkTypes, networkTypes_);
      DARABONBA_PTR_TO_JSON(ZoneNo, zoneNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkTypes, networkTypes_);
      DARABONBA_PTR_FROM_JSON(ZoneNo, zoneNo_);
    };
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone() = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone(const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone &) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone(DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone &&) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone() = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone& operator=(const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone &) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone& operator=(DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->networkTypes_ == nullptr
        && return this->zoneNo_ == nullptr; };
    // networkTypes Field Functions 
    bool hasNetworkTypes() const { return this->networkTypes_ != nullptr;};
    void deleteNetworkTypes() { this->networkTypes_ = nullptr;};
    inline const Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZoneNetworkTypes & networkTypes() const { DARABONBA_PTR_GET_CONST(networkTypes_, Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZoneNetworkTypes) };
    inline Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZoneNetworkTypes networkTypes() { DARABONBA_PTR_GET(networkTypes_, Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZoneNetworkTypes) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone& setNetworkTypes(const Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZoneNetworkTypes & networkTypes) { DARABONBA_PTR_SET_VALUE(networkTypes_, networkTypes) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone& setNetworkTypes(Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZoneNetworkTypes && networkTypes) { DARABONBA_PTR_SET_RVALUE(networkTypes_, networkTypes) };


    // zoneNo Field Functions 
    bool hasZoneNo() const { return this->zoneNo_ != nullptr;};
    void deleteZoneNo() { this->zoneNo_ = nullptr;};
    inline string zoneNo() const { DARABONBA_PTR_GET_DEFAULT(zoneNo_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone& setZoneNo(string zoneNo) { DARABONBA_PTR_SET_VALUE(zoneNo_, zoneNo) };


  protected:
    // The details of the network types of the instance type.
    std::shared_ptr<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZoneNetworkTypes> networkTypes_ = nullptr;
    // The ID of the zone in which the instance type is available.
    std::shared_ptr<string> zoneNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
