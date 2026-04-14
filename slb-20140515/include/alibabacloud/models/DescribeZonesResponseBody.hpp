// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
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
          DARABONBA_PTR_TO_JSON(LocalName, localName_);
          DARABONBA_PTR_TO_JSON(SlaveZones, slaveZones_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Zone& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalName, localName_);
          DARABONBA_PTR_FROM_JSON(SlaveZones, slaveZones_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
        class SlaveZones : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SlaveZones& obj) { 
            DARABONBA_PTR_TO_JSON(SlaveZone, slaveZone_);
          };
          friend void from_json(const Darabonba::Json& j, SlaveZones& obj) { 
            DARABONBA_PTR_FROM_JSON(SlaveZone, slaveZone_);
          };
          SlaveZones() = default ;
          SlaveZones(const SlaveZones &) = default ;
          SlaveZones(SlaveZones &&) = default ;
          SlaveZones(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SlaveZones() = default ;
          SlaveZones& operator=(const SlaveZones &) = default ;
          SlaveZones& operator=(SlaveZones &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SlaveZone : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SlaveZone& obj) { 
              DARABONBA_PTR_TO_JSON(LocalName, localName_);
              DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
            };
            friend void from_json(const Darabonba::Json& j, SlaveZone& obj) { 
              DARABONBA_PTR_FROM_JSON(LocalName, localName_);
              DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
            };
            SlaveZone() = default ;
            SlaveZone(const SlaveZone &) = default ;
            SlaveZone(SlaveZone &&) = default ;
            SlaveZone(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SlaveZone() = default ;
            SlaveZone& operator=(const SlaveZone &) = default ;
            SlaveZone& operator=(SlaveZone &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->localName_ == nullptr
        && this->zoneId_ == nullptr; };
            // localName Field Functions 
            bool hasLocalName() const { return this->localName_ != nullptr;};
            void deleteLocalName() { this->localName_ = nullptr;};
            inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
            inline SlaveZone& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


            // zoneId Field Functions 
            bool hasZoneId() const { return this->zoneId_ != nullptr;};
            void deleteZoneId() { this->zoneId_ = nullptr;};
            inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
            inline SlaveZone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


          protected:
            shared_ptr<string> localName_ {};
            shared_ptr<string> zoneId_ {};
          };

          virtual bool empty() const override { return this->slaveZone_ == nullptr; };
          // slaveZone Field Functions 
          bool hasSlaveZone() const { return this->slaveZone_ != nullptr;};
          void deleteSlaveZone() { this->slaveZone_ = nullptr;};
          inline const vector<SlaveZones::SlaveZone> & getSlaveZone() const { DARABONBA_PTR_GET_CONST(slaveZone_, vector<SlaveZones::SlaveZone>) };
          inline vector<SlaveZones::SlaveZone> getSlaveZone() { DARABONBA_PTR_GET(slaveZone_, vector<SlaveZones::SlaveZone>) };
          inline SlaveZones& setSlaveZone(const vector<SlaveZones::SlaveZone> & slaveZone) { DARABONBA_PTR_SET_VALUE(slaveZone_, slaveZone) };
          inline SlaveZones& setSlaveZone(vector<SlaveZones::SlaveZone> && slaveZone) { DARABONBA_PTR_SET_RVALUE(slaveZone_, slaveZone) };


        protected:
          shared_ptr<vector<SlaveZones::SlaveZone>> slaveZone_ {};
        };

        virtual bool empty() const override { return this->localName_ == nullptr
        && this->slaveZones_ == nullptr && this->zoneId_ == nullptr; };
        // localName Field Functions 
        bool hasLocalName() const { return this->localName_ != nullptr;};
        void deleteLocalName() { this->localName_ = nullptr;};
        inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
        inline Zone& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


        // slaveZones Field Functions 
        bool hasSlaveZones() const { return this->slaveZones_ != nullptr;};
        void deleteSlaveZones() { this->slaveZones_ = nullptr;};
        inline const Zone::SlaveZones & getSlaveZones() const { DARABONBA_PTR_GET_CONST(slaveZones_, Zone::SlaveZones) };
        inline Zone::SlaveZones getSlaveZones() { DARABONBA_PTR_GET(slaveZones_, Zone::SlaveZones) };
        inline Zone& setSlaveZones(const Zone::SlaveZones & slaveZones) { DARABONBA_PTR_SET_VALUE(slaveZones_, slaveZones) };
        inline Zone& setSlaveZones(Zone::SlaveZones && slaveZones) { DARABONBA_PTR_SET_RVALUE(slaveZones_, slaveZones) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Zone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> localName_ {};
        shared_ptr<Zone::SlaveZones> slaveZones_ {};
        shared_ptr<string> zoneId_ {};
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
    // The request ID.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeZonesResponseBody::Zones> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
