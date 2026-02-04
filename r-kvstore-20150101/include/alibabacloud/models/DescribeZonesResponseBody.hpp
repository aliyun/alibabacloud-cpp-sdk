// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class DescribeZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    DescribeZonesResponseBody() = default ;
    DescribeZonesResponseBody(const DescribeZonesResponseBody &) = default ;
    DescribeZonesResponseBody(DescribeZonesResponseBody &&) = default ;
    DescribeZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZonesResponseBody() = default ;
    DescribeZonesResponseBody& operator=(const DescribeZonesResponseBody &) = default ;
    DescribeZonesResponseBody& operator=(DescribeZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Zones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Zones& obj) { 
        DARABONBA_PTR_TO_JSON(KVStoreZone, KVStoreZone_);
      };
      friend void from_json(const Darabonba::Json& j, Zones& obj) { 
        DARABONBA_PTR_FROM_JSON(KVStoreZone, KVStoreZone_);
      };
      Zones() = default ;
      Zones(const Zones &) = default ;
      Zones(Zones &&) = default ;
      Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Zones() = default ;
      Zones& operator=(const Zones &) = default ;
      Zones& operator=(Zones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class KVStoreZone : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KVStoreZone& obj) { 
          DARABONBA_PTR_TO_JSON(Disabled, disabled_);
          DARABONBA_PTR_TO_JSON(IsRds, isRds_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SwitchNetwork, switchNetwork_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
        };
        friend void from_json(const Darabonba::Json& j, KVStoreZone& obj) { 
          DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
          DARABONBA_PTR_FROM_JSON(IsRds, isRds_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SwitchNetwork, switchNetwork_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
        };
        KVStoreZone() = default ;
        KVStoreZone(const KVStoreZone &) = default ;
        KVStoreZone(KVStoreZone &&) = default ;
        KVStoreZone(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KVStoreZone() = default ;
        KVStoreZone& operator=(const KVStoreZone &) = default ;
        KVStoreZone& operator=(KVStoreZone &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->disabled_ == nullptr
        && this->isRds_ == nullptr && this->regionId_ == nullptr && this->switchNetwork_ == nullptr && this->zoneId_ == nullptr && this->zoneName_ == nullptr; };
        // disabled Field Functions 
        bool hasDisabled() const { return this->disabled_ != nullptr;};
        void deleteDisabled() { this->disabled_ = nullptr;};
        inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
        inline KVStoreZone& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


        // isRds Field Functions 
        bool hasIsRds() const { return this->isRds_ != nullptr;};
        void deleteIsRds() { this->isRds_ = nullptr;};
        inline bool getIsRds() const { DARABONBA_PTR_GET_DEFAULT(isRds_, false) };
        inline KVStoreZone& setIsRds(bool isRds) { DARABONBA_PTR_SET_VALUE(isRds_, isRds) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline KVStoreZone& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // switchNetwork Field Functions 
        bool hasSwitchNetwork() const { return this->switchNetwork_ != nullptr;};
        void deleteSwitchNetwork() { this->switchNetwork_ = nullptr;};
        inline bool getSwitchNetwork() const { DARABONBA_PTR_GET_DEFAULT(switchNetwork_, false) };
        inline KVStoreZone& setSwitchNetwork(bool switchNetwork) { DARABONBA_PTR_SET_VALUE(switchNetwork_, switchNetwork) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline KVStoreZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        // zoneName Field Functions 
        bool hasZoneName() const { return this->zoneName_ != nullptr;};
        void deleteZoneName() { this->zoneName_ = nullptr;};
        inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
        inline KVStoreZone& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


      protected:
        // Indicates whether Tair (Redis OSS-compatible) instances can be created in the current zone. Valid values:
        // 
        // *   **true**: Tair (Redis OSS-compatible) instances cannot be created in the current zone.
        // *   **false**: Tair (Redis OSS-compatible) instances can be created in the current zone.
        shared_ptr<bool> disabled_ {};
        // Indicates whether the zone is managed by ApsaraDB RDS. The return value of this parameter is **true** in Tair (Redis OSS-compatible).
        shared_ptr<bool> isRds_ {};
        // The ID of the region.
        shared_ptr<string> regionId_ {};
        // Indicates whether the network type of the instance can be changed from the classic network to Virtual Private Cloud (VPC). Valid values:
        // 
        // *   **true**: The network type of the instance can be changed from the classic network to VPC.
        // *   **false**: The network type of the instance cannot be changed from the classic network to VPC.
        shared_ptr<bool> switchNetwork_ {};
        // The ID of the zone within the specified region.
        shared_ptr<string> zoneId_ {};
        // The name of the zone within the specified region.
        shared_ptr<string> zoneName_ {};
      };

      virtual bool empty() const override { return this->KVStoreZone_ == nullptr; };
      // KVStoreZone Field Functions 
      bool hasKVStoreZone() const { return this->KVStoreZone_ != nullptr;};
      void deleteKVStoreZone() { this->KVStoreZone_ = nullptr;};
      inline const vector<Zones::KVStoreZone> & getKVStoreZone() const { DARABONBA_PTR_GET_CONST(KVStoreZone_, vector<Zones::KVStoreZone>) };
      inline vector<Zones::KVStoreZone> getKVStoreZone() { DARABONBA_PTR_GET(KVStoreZone_, vector<Zones::KVStoreZone>) };
      inline Zones& setKVStoreZone(const vector<Zones::KVStoreZone> & kVStoreZone) { DARABONBA_PTR_SET_VALUE(KVStoreZone_, kVStoreZone) };
      inline Zones& setKVStoreZone(vector<Zones::KVStoreZone> && kVStoreZone) { DARABONBA_PTR_SET_RVALUE(KVStoreZone_, kVStoreZone) };


    protected:
      shared_ptr<vector<Zones::KVStoreZone>> KVStoreZone_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->zones_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const DescribeZonesResponseBody::Zones & getZones() const { DARABONBA_PTR_GET_CONST(zones_, DescribeZonesResponseBody::Zones) };
    inline DescribeZonesResponseBody::Zones getZones() { DARABONBA_PTR_GET(zones_, DescribeZonesResponseBody::Zones) };
    inline DescribeZonesResponseBody& setZones(const DescribeZonesResponseBody::Zones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeZonesResponseBody& setZones(DescribeZonesResponseBody::Zones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The queried zones.
    shared_ptr<DescribeZonesResponseBody::Zones> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
