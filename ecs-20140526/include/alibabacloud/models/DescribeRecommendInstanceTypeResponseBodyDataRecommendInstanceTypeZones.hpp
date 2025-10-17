// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODYDATARECOMMENDINSTANCETYPEZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODYDATARECOMMENDINSTANCETYPEZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones& obj) { 
      DARABONBA_PTR_TO_JSON(zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones& obj) { 
      DARABONBA_PTR_FROM_JSON(zone, zone_);
    };
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones() = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones(const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones &) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones(DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones &&) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones() = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones& operator=(const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones &) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones& operator=(DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zone_ == nullptr; };
    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline const vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone> & zone() const { DARABONBA_PTR_GET_CONST(zone_, vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone>) };
    inline vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone> zone() { DARABONBA_PTR_GET(zone_, vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone>) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones& setZone(const vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZones& setZone(vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


  protected:
    std::shared_ptr<vector<Models::DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeZonesZone>> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
