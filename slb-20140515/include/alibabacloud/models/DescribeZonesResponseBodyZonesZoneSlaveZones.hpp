// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONESLAVEZONES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODYZONESZONESLAVEZONES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeZonesResponseBodyZonesZoneSlaveZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBodyZonesZoneSlaveZones& obj) { 
      DARABONBA_PTR_TO_JSON(SlaveZone, slaveZone_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBodyZonesZoneSlaveZones& obj) { 
      DARABONBA_PTR_FROM_JSON(SlaveZone, slaveZone_);
    };
    DescribeZonesResponseBodyZonesZoneSlaveZones() = default ;
    DescribeZonesResponseBodyZonesZoneSlaveZones(const DescribeZonesResponseBodyZonesZoneSlaveZones &) = default ;
    DescribeZonesResponseBodyZonesZoneSlaveZones(DescribeZonesResponseBodyZonesZoneSlaveZones &&) = default ;
    DescribeZonesResponseBodyZonesZoneSlaveZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBodyZonesZoneSlaveZones() = default ;
    DescribeZonesResponseBodyZonesZoneSlaveZones& operator=(const DescribeZonesResponseBodyZonesZoneSlaveZones &) = default ;
    DescribeZonesResponseBodyZonesZoneSlaveZones& operator=(DescribeZonesResponseBodyZonesZoneSlaveZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->slaveZone_ == nullptr; };
    // slaveZone Field Functions 
    bool hasSlaveZone() const { return this->slaveZone_ != nullptr;};
    void deleteSlaveZone() { this->slaveZone_ = nullptr;};
    inline const vector<Models::DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone> & slaveZone() const { DARABONBA_PTR_GET_CONST(slaveZone_, vector<Models::DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone>) };
    inline vector<Models::DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone> slaveZone() { DARABONBA_PTR_GET(slaveZone_, vector<Models::DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone>) };
    inline DescribeZonesResponseBodyZonesZoneSlaveZones& setSlaveZone(const vector<Models::DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone> & slaveZone) { DARABONBA_PTR_SET_VALUE(slaveZone_, slaveZone) };
    inline DescribeZonesResponseBodyZonesZoneSlaveZones& setSlaveZone(vector<Models::DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone> && slaveZone) { DARABONBA_PTR_SET_RVALUE(slaveZone_, slaveZone) };


  protected:
    std::shared_ptr<vector<Models::DescribeZonesResponseBodyZonesZoneSlaveZonesSlaveZone>> slaveZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
