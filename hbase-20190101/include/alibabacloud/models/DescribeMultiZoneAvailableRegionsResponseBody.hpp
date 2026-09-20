// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMULTIZONEAVAILABLEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMULTIZONEAVAILABLEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeMultiZoneAvailableRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMultiZoneAvailableRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMultiZoneAvailableRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMultiZoneAvailableRegionsResponseBody() = default ;
    DescribeMultiZoneAvailableRegionsResponseBody(const DescribeMultiZoneAvailableRegionsResponseBody &) = default ;
    DescribeMultiZoneAvailableRegionsResponseBody(DescribeMultiZoneAvailableRegionsResponseBody &&) = default ;
    DescribeMultiZoneAvailableRegionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMultiZoneAvailableRegionsResponseBody() = default ;
    DescribeMultiZoneAvailableRegionsResponseBody& operator=(const DescribeMultiZoneAvailableRegionsResponseBody &) = default ;
    DescribeMultiZoneAvailableRegionsResponseBody& operator=(DescribeMultiZoneAvailableRegionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Regions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Regions& obj) { 
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, Regions& obj) { 
        DARABONBA_PTR_FROM_JSON(Region, region_);
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
      class Region : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Region& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableCombines, availableCombines_);
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(RegionEndpoint, regionEndpoint_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, Region& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableCombines, availableCombines_);
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(RegionEndpoint, regionEndpoint_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        Region() = default ;
        Region(const Region &) = default ;
        Region(Region &&) = default ;
        Region(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Region() = default ;
        Region& operator=(const Region &) = default ;
        Region& operator=(Region &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AvailableCombines : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AvailableCombines& obj) { 
            DARABONBA_PTR_TO_JSON(AvailableCombine, availableCombine_);
          };
          friend void from_json(const Darabonba::Json& j, AvailableCombines& obj) { 
            DARABONBA_PTR_FROM_JSON(AvailableCombine, availableCombine_);
          };
          AvailableCombines() = default ;
          AvailableCombines(const AvailableCombines &) = default ;
          AvailableCombines(AvailableCombines &&) = default ;
          AvailableCombines(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AvailableCombines() = default ;
          AvailableCombines& operator=(const AvailableCombines &) = default ;
          AvailableCombines& operator=(AvailableCombines &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class AvailableCombine : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AvailableCombine& obj) { 
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(Zones, zones_);
            };
            friend void from_json(const Darabonba::Json& j, AvailableCombine& obj) { 
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(Zones, zones_);
            };
            AvailableCombine() = default ;
            AvailableCombine(const AvailableCombine &) = default ;
            AvailableCombine(AvailableCombine &&) = default ;
            AvailableCombine(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AvailableCombine() = default ;
            AvailableCombine& operator=(const AvailableCombine &) = default ;
            AvailableCombine& operator=(AvailableCombine &&) = default ;
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
              virtual bool empty() const override { return this->zone_ == nullptr; };
              // zone Field Functions 
              bool hasZone() const { return this->zone_ != nullptr;};
              void deleteZone() { this->zone_ = nullptr;};
              inline const vector<string> & getZone() const { DARABONBA_PTR_GET_CONST(zone_, vector<string>) };
              inline vector<string> getZone() { DARABONBA_PTR_GET(zone_, vector<string>) };
              inline Zones& setZone(const vector<string> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
              inline Zones& setZone(vector<string> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


            protected:
              shared_ptr<vector<string>> zone_ {};
            };

            virtual bool empty() const override { return this->id_ == nullptr
        && this->zones_ == nullptr; };
            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
            inline AvailableCombine& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // zones Field Functions 
            bool hasZones() const { return this->zones_ != nullptr;};
            void deleteZones() { this->zones_ = nullptr;};
            inline const AvailableCombine::Zones & getZones() const { DARABONBA_PTR_GET_CONST(zones_, AvailableCombine::Zones) };
            inline AvailableCombine::Zones getZones() { DARABONBA_PTR_GET(zones_, AvailableCombine::Zones) };
            inline AvailableCombine& setZones(const AvailableCombine::Zones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
            inline AvailableCombine& setZones(AvailableCombine::Zones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


          protected:
            shared_ptr<string> id_ {};
            shared_ptr<AvailableCombine::Zones> zones_ {};
          };

          virtual bool empty() const override { return this->availableCombine_ == nullptr; };
          // availableCombine Field Functions 
          bool hasAvailableCombine() const { return this->availableCombine_ != nullptr;};
          void deleteAvailableCombine() { this->availableCombine_ = nullptr;};
          inline const vector<AvailableCombines::AvailableCombine> & getAvailableCombine() const { DARABONBA_PTR_GET_CONST(availableCombine_, vector<AvailableCombines::AvailableCombine>) };
          inline vector<AvailableCombines::AvailableCombine> getAvailableCombine() { DARABONBA_PTR_GET(availableCombine_, vector<AvailableCombines::AvailableCombine>) };
          inline AvailableCombines& setAvailableCombine(const vector<AvailableCombines::AvailableCombine> & availableCombine) { DARABONBA_PTR_SET_VALUE(availableCombine_, availableCombine) };
          inline AvailableCombines& setAvailableCombine(vector<AvailableCombines::AvailableCombine> && availableCombine) { DARABONBA_PTR_SET_RVALUE(availableCombine_, availableCombine) };


        protected:
          shared_ptr<vector<AvailableCombines::AvailableCombine>> availableCombine_ {};
        };

        virtual bool empty() const override { return this->availableCombines_ == nullptr
        && this->localName_ == nullptr && this->regionEndpoint_ == nullptr && this->regionId_ == nullptr; };
        // availableCombines Field Functions 
        bool hasAvailableCombines() const { return this->availableCombines_ != nullptr;};
        void deleteAvailableCombines() { this->availableCombines_ = nullptr;};
        inline const Region::AvailableCombines & getAvailableCombines() const { DARABONBA_PTR_GET_CONST(availableCombines_, Region::AvailableCombines) };
        inline Region::AvailableCombines getAvailableCombines() { DARABONBA_PTR_GET(availableCombines_, Region::AvailableCombines) };
        inline Region& setAvailableCombines(const Region::AvailableCombines & availableCombines) { DARABONBA_PTR_SET_VALUE(availableCombines_, availableCombines) };
        inline Region& setAvailableCombines(Region::AvailableCombines && availableCombines) { DARABONBA_PTR_SET_RVALUE(availableCombines_, availableCombines) };


        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline Region& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // regionEndpoint Field Functions 
        bool hasRegionEndpoint() const { return this->regionEndpoint_ != nullptr;};
        void deleteRegionEndpoint() { this->regionEndpoint_ = nullptr;};
        inline string getRegionEndpoint() const { DARABONBA_PTR_GET_DEFAULT(regionEndpoint_, "") };
        inline Region& setRegionEndpoint(string regionEndpoint) { DARABONBA_PTR_SET_VALUE(regionEndpoint_, regionEndpoint) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Region& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        shared_ptr<Region::AvailableCombines> availableCombines_ {};
        shared_ptr<string> localName_ {};
        shared_ptr<string> regionEndpoint_ {};
        shared_ptr<string> regionId_ {};
      };

      virtual bool empty() const override { return this->region_ == nullptr; };
      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline const vector<Regions::Region> & getRegion() const { DARABONBA_PTR_GET_CONST(region_, vector<Regions::Region>) };
      inline vector<Regions::Region> getRegion() { DARABONBA_PTR_GET(region_, vector<Regions::Region>) };
      inline Regions& setRegion(const vector<Regions::Region> & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
      inline Regions& setRegion(vector<Regions::Region> && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


    protected:
      shared_ptr<vector<Regions::Region>> region_ {};
    };

    virtual bool empty() const override { return this->regions_ == nullptr
        && this->requestId_ == nullptr; };
    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const DescribeMultiZoneAvailableRegionsResponseBody::Regions & getRegions() const { DARABONBA_PTR_GET_CONST(regions_, DescribeMultiZoneAvailableRegionsResponseBody::Regions) };
    inline DescribeMultiZoneAvailableRegionsResponseBody::Regions getRegions() { DARABONBA_PTR_GET(regions_, DescribeMultiZoneAvailableRegionsResponseBody::Regions) };
    inline DescribeMultiZoneAvailableRegionsResponseBody& setRegions(const DescribeMultiZoneAvailableRegionsResponseBody::Regions & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeMultiZoneAvailableRegionsResponseBody& setRegions(DescribeMultiZoneAvailableRegionsResponseBody::Regions && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMultiZoneAvailableRegionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeMultiZoneAvailableRegionsResponseBody::Regions> regions_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
