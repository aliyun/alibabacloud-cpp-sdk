// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeZonesResponseBodyZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    DescribeZonesResponseBodyZones() = default ;
    DescribeZonesResponseBodyZones(const DescribeZonesResponseBodyZones &) = default ;
    DescribeZonesResponseBodyZones(DescribeZonesResponseBodyZones &&) = default ;
    DescribeZonesResponseBodyZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZones() = default ;
    DescribeZonesResponseBodyZones& operator=(const DescribeZonesResponseBodyZones &) = default ;
    DescribeZonesResponseBodyZones& operator=(DescribeZonesResponseBodyZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zone_ == nullptr; };
    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline const vector<Models::DescribeZonesResponseBodyZonesZone> & zone() const { DARABONBA_PTR_GET_CONST(zone_, vector<Models::DescribeZonesResponseBodyZonesZone>) };
    inline vector<Models::DescribeZonesResponseBodyZonesZone> zone() { DARABONBA_PTR_GET(zone_, vector<Models::DescribeZonesResponseBodyZonesZone>) };
    inline DescribeZonesResponseBodyZones& setZone(const vector<Models::DescribeZonesResponseBodyZonesZone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
    inline DescribeZonesResponseBodyZones& setZone(vector<Models::DescribeZonesResponseBodyZonesZone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


  protected:
    std::shared_ptr<vector<Models::DescribeZonesResponseBodyZonesZone>> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
