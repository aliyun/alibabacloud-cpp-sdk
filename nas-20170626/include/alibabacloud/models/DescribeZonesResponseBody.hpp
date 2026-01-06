// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
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
          DARABONBA_PTR_TO_JSON(Capacity, capacity_);
          DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
          DARABONBA_PTR_TO_JSON(Performance, performance_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Zone& obj) { 
          DARABONBA_PTR_FROM_JSON(Capacity, capacity_);
          DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
          DARABONBA_PTR_FROM_JSON(Performance, performance_);
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
        class Performance : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Performance& obj) { 
            DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          };
          friend void from_json(const Darabonba::Json& j, Performance& obj) { 
            DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          };
          Performance() = default ;
          Performance(const Performance &) = default ;
          Performance(Performance &&) = default ;
          Performance(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Performance() = default ;
          Performance& operator=(const Performance &) = default ;
          Performance& operator=(Performance &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->protocol_ == nullptr; };
          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline const vector<string> & getProtocol() const { DARABONBA_PTR_GET_CONST(protocol_, vector<string>) };
          inline vector<string> getProtocol() { DARABONBA_PTR_GET(protocol_, vector<string>) };
          inline Performance& setProtocol(const vector<string> & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
          inline Performance& setProtocol(vector<string> && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


        protected:
          shared_ptr<vector<string>> protocol_ {};
        };

        class InstanceTypes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceTypes& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceTypes& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          };
          InstanceTypes() = default ;
          InstanceTypes(const InstanceTypes &) = default ;
          InstanceTypes(InstanceTypes &&) = default ;
          InstanceTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceTypes() = default ;
          InstanceTypes& operator=(const InstanceTypes &) = default ;
          InstanceTypes& operator=(InstanceTypes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class InstanceType : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const InstanceType& obj) { 
              DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
              DARABONBA_PTR_TO_JSON(StorageType, storageType_);
            };
            friend void from_json(const Darabonba::Json& j, InstanceType& obj) { 
              DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
              DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
            };
            InstanceType() = default ;
            InstanceType(const InstanceType &) = default ;
            InstanceType(InstanceType &&) = default ;
            InstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~InstanceType() = default ;
            InstanceType& operator=(const InstanceType &) = default ;
            InstanceType& operator=(InstanceType &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->protocolType_ == nullptr
        && this->storageType_ == nullptr; };
            // protocolType Field Functions 
            bool hasProtocolType() const { return this->protocolType_ != nullptr;};
            void deleteProtocolType() { this->protocolType_ = nullptr;};
            inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
            inline InstanceType& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


            // storageType Field Functions 
            bool hasStorageType() const { return this->storageType_ != nullptr;};
            void deleteStorageType() { this->storageType_ = nullptr;};
            inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
            inline InstanceType& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


          protected:
            // The protocol type.
            // 
            // *   If the FileSystemType parameter is set to standard, the protocol type is nfs or smb.
            // *   If the FileSystemType parameter is set to extreme, the protocol type is nfs.
            // *   If the FileSystemType parameter is set to cpfs, the protocol type is cpfs.
            shared_ptr<string> protocolType_ {};
            // The storage type.
            // 
            // *   If the FileSystemType parameter is set to standard, the storage type is Performance or Capacity.
            // *   If the FileSystemType parameter is set to extreme, the storage type is standard or advance.
            // *   If the FileSystemType parameter is set to cpfs, the storage type is advance_100 (100 MB/s/TiB baseline) or advance_200 (200 MB/s/TiB baseline).
            shared_ptr<string> storageType_ {};
          };

          virtual bool empty() const override { return this->instanceType_ == nullptr; };
          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline const vector<InstanceTypes::InstanceType> & getInstanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, vector<InstanceTypes::InstanceType>) };
          inline vector<InstanceTypes::InstanceType> getInstanceType() { DARABONBA_PTR_GET(instanceType_, vector<InstanceTypes::InstanceType>) };
          inline InstanceTypes& setInstanceType(const vector<InstanceTypes::InstanceType> & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
          inline InstanceTypes& setInstanceType(vector<InstanceTypes::InstanceType> && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


        protected:
          shared_ptr<vector<InstanceTypes::InstanceType>> instanceType_ {};
        };

        class Capacity : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Capacity& obj) { 
            DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          };
          friend void from_json(const Darabonba::Json& j, Capacity& obj) { 
            DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          };
          Capacity() = default ;
          Capacity(const Capacity &) = default ;
          Capacity(Capacity &&) = default ;
          Capacity(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Capacity() = default ;
          Capacity& operator=(const Capacity &) = default ;
          Capacity& operator=(Capacity &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->protocol_ == nullptr; };
          // protocol Field Functions 
          bool hasProtocol() const { return this->protocol_ != nullptr;};
          void deleteProtocol() { this->protocol_ = nullptr;};
          inline const vector<string> & getProtocol() const { DARABONBA_PTR_GET_CONST(protocol_, vector<string>) };
          inline vector<string> getProtocol() { DARABONBA_PTR_GET(protocol_, vector<string>) };
          inline Capacity& setProtocol(const vector<string> & protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };
          inline Capacity& setProtocol(vector<string> && protocol) { DARABONBA_PTR_SET_RVALUE(protocol_, protocol) };


        protected:
          shared_ptr<vector<string>> protocol_ {};
        };

        virtual bool empty() const override { return this->capacity_ == nullptr
        && this->instanceTypes_ == nullptr && this->performance_ == nullptr && this->zoneId_ == nullptr; };
        // capacity Field Functions 
        bool hasCapacity() const { return this->capacity_ != nullptr;};
        void deleteCapacity() { this->capacity_ = nullptr;};
        inline const Zone::Capacity & getCapacity() const { DARABONBA_PTR_GET_CONST(capacity_, Zone::Capacity) };
        inline Zone::Capacity getCapacity() { DARABONBA_PTR_GET(capacity_, Zone::Capacity) };
        inline Zone& setCapacity(const Zone::Capacity & capacity) { DARABONBA_PTR_SET_VALUE(capacity_, capacity) };
        inline Zone& setCapacity(Zone::Capacity && capacity) { DARABONBA_PTR_SET_RVALUE(capacity_, capacity) };


        // instanceTypes Field Functions 
        bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
        void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
        inline const Zone::InstanceTypes & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, Zone::InstanceTypes) };
        inline Zone::InstanceTypes getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, Zone::InstanceTypes) };
        inline Zone& setInstanceTypes(const Zone::InstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
        inline Zone& setInstanceTypes(Zone::InstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


        // performance Field Functions 
        bool hasPerformance() const { return this->performance_ != nullptr;};
        void deletePerformance() { this->performance_ = nullptr;};
        inline const Zone::Performance & getPerformance() const { DARABONBA_PTR_GET_CONST(performance_, Zone::Performance) };
        inline Zone::Performance getPerformance() { DARABONBA_PTR_GET(performance_, Zone::Performance) };
        inline Zone& setPerformance(const Zone::Performance & performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };
        inline Zone& setPerformance(Zone::Performance && performance) { DARABONBA_PTR_SET_RVALUE(performance_, performance) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Zone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // This parameter is reserved. You can ignore this parameter.
        shared_ptr<Zone::Capacity> capacity_ {};
        // The details about file system types.
        shared_ptr<Zone::InstanceTypes> instanceTypes_ {};
        // This parameter is reserved. You can ignore this parameter.
        shared_ptr<Zone::Performance> performance_ {};
        // The zone ID.
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
    // The queried zones.
    shared_ptr<DescribeZonesResponseBody::Zones> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
