// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYAVAILABLEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPNGATEWAYAVAILABLEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeVpnGatewayAvailableZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpnGatewayAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableZoneIdList, availableZoneIdList_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpnGatewayAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableZoneIdList, availableZoneIdList_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVpnGatewayAvailableZonesResponseBody() = default ;
    DescribeVpnGatewayAvailableZonesResponseBody(const DescribeVpnGatewayAvailableZonesResponseBody &) = default ;
    DescribeVpnGatewayAvailableZonesResponseBody(DescribeVpnGatewayAvailableZonesResponseBody &&) = default ;
    DescribeVpnGatewayAvailableZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpnGatewayAvailableZonesResponseBody() = default ;
    DescribeVpnGatewayAvailableZonesResponseBody& operator=(const DescribeVpnGatewayAvailableZonesResponseBody &) = default ;
    DescribeVpnGatewayAvailableZonesResponseBody& operator=(DescribeVpnGatewayAvailableZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AvailableZoneIdList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AvailableZoneIdList& obj) { 
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
      };
      friend void from_json(const Darabonba::Json& j, AvailableZoneIdList& obj) { 
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
      };
      AvailableZoneIdList() = default ;
      AvailableZoneIdList(const AvailableZoneIdList &) = default ;
      AvailableZoneIdList(AvailableZoneIdList &&) = default ;
      AvailableZoneIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AvailableZoneIdList() = default ;
      AvailableZoneIdList& operator=(const AvailableZoneIdList &) = default ;
      AvailableZoneIdList& operator=(AvailableZoneIdList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->zoneId_ == nullptr
        && this->zoneName_ == nullptr; };
      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline AvailableZoneIdList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      // zoneName Field Functions 
      bool hasZoneName() const { return this->zoneName_ != nullptr;};
      void deleteZoneName() { this->zoneName_ = nullptr;};
      inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
      inline AvailableZoneIdList& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


    protected:
      // The zone ID.
      shared_ptr<string> zoneId_ {};
      // The zone name.
      shared_ptr<string> zoneName_ {};
    };

    virtual bool empty() const override { return this->availableZoneIdList_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr; };
    // availableZoneIdList Field Functions 
    bool hasAvailableZoneIdList() const { return this->availableZoneIdList_ != nullptr;};
    void deleteAvailableZoneIdList() { this->availableZoneIdList_ = nullptr;};
    inline const vector<DescribeVpnGatewayAvailableZonesResponseBody::AvailableZoneIdList> & getAvailableZoneIdList() const { DARABONBA_PTR_GET_CONST(availableZoneIdList_, vector<DescribeVpnGatewayAvailableZonesResponseBody::AvailableZoneIdList>) };
    inline vector<DescribeVpnGatewayAvailableZonesResponseBody::AvailableZoneIdList> getAvailableZoneIdList() { DARABONBA_PTR_GET(availableZoneIdList_, vector<DescribeVpnGatewayAvailableZonesResponseBody::AvailableZoneIdList>) };
    inline DescribeVpnGatewayAvailableZonesResponseBody& setAvailableZoneIdList(const vector<DescribeVpnGatewayAvailableZonesResponseBody::AvailableZoneIdList> & availableZoneIdList) { DARABONBA_PTR_SET_VALUE(availableZoneIdList_, availableZoneIdList) };
    inline DescribeVpnGatewayAvailableZonesResponseBody& setAvailableZoneIdList(vector<DescribeVpnGatewayAvailableZonesResponseBody::AvailableZoneIdList> && availableZoneIdList) { DARABONBA_PTR_SET_RVALUE(availableZoneIdList_, availableZoneIdList) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpnGatewayAvailableZonesResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpnGatewayAvailableZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The zones.
    shared_ptr<vector<DescribeVpnGatewayAvailableZonesResponseBody::AvailableZoneIdList>> availableZoneIdList_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
