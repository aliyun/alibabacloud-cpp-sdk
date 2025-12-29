// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody(DescribeRegionsResponseBody &&) = default ;
    DescribeRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRegionsResponseBody() = default ;
    DescribeRegionsResponseBody& operator=(const DescribeRegionsResponseBody &) = default ;
    DescribeRegionsResponseBody& operator=(DescribeRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(DdsRegion, ddsRegion_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(DdsRegion, ddsRegion_);
      };
      Regions() = default ;
      Regions(const Regions &) = default ;
      Regions(Regions &&) = default ;
      Regions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Regions() = default ;
      Regions& operator=(const Regions &) = default ;
      Regions& operator=(Regions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DdsRegion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DdsRegion& obj) { 
          DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RegionName, regionName_);
          DARABONBA_PTR_TO_JSON(Zones, zones_);
        };
        friend void from_json(const Darabonba::Json& j, DdsRegion& obj) { 
          DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
          DARABONBA_PTR_FROM_JSON(Zones, zones_);
        };
        DdsRegion() = default ;
        DdsRegion(const DdsRegion &) = default ;
        DdsRegion(DdsRegion &&) = default ;
        DdsRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DdsRegion() = default ;
        DdsRegion& operator=(const DdsRegion &) = default ;
        DdsRegion& operator=(DdsRegion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Zones : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Zones& obj) { 
            DARABONBA_PTR_TO_JSON(Zone, zone_);
          };
          friend void from_json(const Darabonba::Json& j, Zones& obj) { 
            DARABONBA_PTR_FROM_JSON(Zone, zone_);
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
          class Zone : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Zone& obj) { 
              DARABONBA_PTR_TO_JSON(VpcEnabled, vpcEnabled_);
              DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
              DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
            };
            friend void from_json(const Darabonba::Json& j, Zone& obj) { 
              DARABONBA_PTR_FROM_JSON(VpcEnabled, vpcEnabled_);
              DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
              DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
            };
            Zone() = default ;
            Zone(const Zone &) = default ;
            Zone(Zone &&) = default ;
            Zone(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Zone() = default ;
            Zone& operator=(const Zone &) = default ;
            Zone& operator=(Zone &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->vpcEnabled_ == nullptr
        && this->zoneId_ == nullptr && this->zoneName_ == nullptr; };
            // vpcEnabled Field Functions 
            bool hasVpcEnabled() const { return this->vpcEnabled_ != nullptr;};
            void deleteVpcEnabled() { this->vpcEnabled_ = nullptr;};
            inline bool getVpcEnabled() const { DARABONBA_PTR_GET_DEFAULT(vpcEnabled_, false) };
            inline Zone& setVpcEnabled(bool vpcEnabled) { DARABONBA_PTR_SET_VALUE(vpcEnabled_, vpcEnabled) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline Zone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


            // zoneName Field Functions 
            bool hasZoneName() const { return this->zoneName_ != nullptr;};
            void deleteZoneName() { this->zoneName_ = nullptr;};
            inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
            inline Zone& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


          protected:
            // Indicates whether a virtual private cloud (VPC) is supported. Valid values:
            // 
            // *   **true**: VPC is supported.
            // *   **false**: VPC is not supported.
            shared_ptr<bool> vpcEnabled_ {};
            // The zone ID.
            shared_ptr<string> zoneId_ {};
            // The name of the zone.
            // 
            // The value of the ZoneName parameter is in the language that is specified by the **AcceptLanguage** parameter. For example, if the value of the ZoneId parameter in the response is **cn-hangzhou-h**, the following values are returned for the ZoneName parameter:
            // 
            // *   If the value of the **AcceptLanguage** parameter is **zh**, the value **H** is returned for the ZoneName parameter.
            // *   If the value of the **AcceptLanguage** parameter is **en**, the value **Hangzhou Zone H** is returned for the ZoneName parameter.
            shared_ptr<string> zoneName_ {};
          };

          virtual bool empty() const override { return this->zone_ == nullptr; };
          // zone Field Functions 
          bool hasZone() const { return this->zone_ != nullptr;};
          void deleteZone() { this->zone_ = nullptr;};
          inline const vector<Zones::Zone> & getZone() const { DARABONBA_PTR_GET_CONST(zone_, vector<Zones::Zone>) };
          inline vector<Zones::Zone> getZone() { DARABONBA_PTR_GET(zone_, vector<Zones::Zone>) };
          inline Zones& setZone(const vector<Zones::Zone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
          inline Zones& setZone(vector<Zones::Zone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


        protected:
          shared_ptr<vector<Zones::Zone>> zone_ {};
        };

        virtual bool empty() const override { return this->endPoint_ == nullptr
        && this->regionId_ == nullptr && this->regionName_ == nullptr && this->zones_ == nullptr; };
        // endPoint Field Functions 
        bool hasEndPoint() const { return this->endPoint_ != nullptr;};
        void deleteEndPoint() { this->endPoint_ = nullptr;};
        inline string getEndPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
        inline DdsRegion& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline DdsRegion& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // regionName Field Functions 
        bool hasRegionName() const { return this->regionName_ != nullptr;};
        void deleteRegionName() { this->regionName_ = nullptr;};
        inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
        inline DdsRegion& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


        // zones Field Functions 
        bool hasZones() const { return this->zones_ != nullptr;};
        void deleteZones() { this->zones_ = nullptr;};
        inline const DdsRegion::Zones & getZones() const { DARABONBA_PTR_GET_CONST(zones_, DdsRegion::Zones) };
        inline DdsRegion::Zones getZones() { DARABONBA_PTR_GET(zones_, DdsRegion::Zones) };
        inline DdsRegion& setZones(const DdsRegion::Zones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
        inline DdsRegion& setZones(DdsRegion::Zones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


      protected:
        // The public endpoint of the region.
        // 
        // For example, if the value of the RegionId parameter in the response is cn-hangzhou, the following value is returned for the EndPoint parameter:
        // 
        // *   mongodb.aliyuncs.com
        shared_ptr<string> endPoint_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The name of the region.
        // 
        // The value of the LocalName parameter is in the language that is specified by the **AcceptLanguage** parameter. For example, if the value of the RegionId parameter in the response is **cn-hangzhou**, the following values are returned for the LocalName parameter:
        // 
        // *   If the value of the **AcceptLanguage** parameter is **zh**, the value **华东1（杭州）** is returned for the LocalName parameter.
        // *   If the value of the **AcceptLanguage** parameter is **en**, the value **China (Hangzhou)** is returned for the LocalName parameter.
        shared_ptr<string> regionName_ {};
        // The zones.
        shared_ptr<DdsRegion::Zones> zones_ {};
      };

      virtual bool empty() const override { return this->ddsRegion_ == nullptr; };
      // ddsRegion Field Functions 
      bool hasDdsRegion() const { return this->ddsRegion_ != nullptr;};
      void deleteDdsRegion() { this->ddsRegion_ = nullptr;};
      inline const vector<Regions::DdsRegion> & getDdsRegion() const { DARABONBA_PTR_GET_CONST(ddsRegion_, vector<Regions::DdsRegion>) };
      inline vector<Regions::DdsRegion> getDdsRegion() { DARABONBA_PTR_GET(ddsRegion_, vector<Regions::DdsRegion>) };
      inline Regions& setDdsRegion(const vector<Regions::DdsRegion> & ddsRegion) { DARABONBA_PTR_SET_VALUE(ddsRegion_, ddsRegion) };
      inline Regions& setDdsRegion(vector<Regions::DdsRegion> && ddsRegion) { DARABONBA_PTR_SET_RVALUE(ddsRegion_, ddsRegion) };


    protected:
      shared_ptr<vector<Regions::DdsRegion>> ddsRegion_ {};
    };

    virtual bool empty() const override { return this->regions_ == nullptr
        && this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeRegionsResponseBody::Regions & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeRegionsResponseBody::Regions) };
    inline DescribeRegionsResponseBody::Regions getRegions() { DARABONBA_PTR_GET(regions_, DescribeRegionsResponseBody::Regions) };
    inline DescribeRegionsResponseBody& setRegions(const DescribeRegionsResponseBody::Regions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeRegionsResponseBody& setRegions(DescribeRegionsResponseBody::Regions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The regions.
    shared_ptr<DescribeRegionsResponseBody::Regions> regions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
