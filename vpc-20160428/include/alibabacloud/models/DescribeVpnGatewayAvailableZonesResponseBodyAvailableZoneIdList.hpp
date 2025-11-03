// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYAVAILABLEZONESRESPONSEBODYAVAILABLEZONEIDLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYAVAILABLEZONESRESPONSEBODYAVAILABLEZONEIDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList& obj) { 
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList& obj) { 
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList() = default ;
    DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList(const DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList &) = default ;
    DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList(DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList &&) = default ;
    DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList() = default ;
    DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList& operator=(const DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList &) = default ;
    DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList& operator=(DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->zoneId_ == nullptr
        && return this->zoneName_ == nullptr; };
    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string zoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeVpnGatewayAvailableZonesResponseBodyAvailableZoneIdList& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
    // The zone name.
    std::shared_ptr<string> zoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
