// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREGIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeRegionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRegionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SupportPolarx10, supportPolarx10_);
          DARABONBA_PTR_TO_JSON(SupportPolarx20, supportPolarx20_);
          DARABONBA_PTR_TO_JSON(Zones, zones_);
        };
        friend void from_json(const Darabonba::Json& j, Region& obj) { 
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SupportPolarx10, supportPolarx10_);
          DARABONBA_PTR_FROM_JSON(SupportPolarx20, supportPolarx20_);
          DARABONBA_PTR_FROM_JSON(Zones, zones_);
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
            };
            friend void from_json(const Darabonba::Json& j, Zone& obj) { 
              DARABONBA_PTR_FROM_JSON(VpcEnabled, vpcEnabled_);
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
            virtual bool empty() const override { return this->vpcEnabled_ == nullptr
        && this->zoneId_ == nullptr; };
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


          protected:
            shared_ptr<bool> vpcEnabled_ {};
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

        virtual bool empty() const override { return this->regionId_ == nullptr
        && this->supportPolarx10_ == nullptr && this->supportPolarx20_ == nullptr && this->zones_ == nullptr; };
        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Region& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // supportPolarx10 Field Functions 
        bool hasSupportPolarx10() const { return this->supportPolarx10_ != nullptr;};
        void deleteSupportPolarx10() { this->supportPolarx10_ = nullptr;};
        inline bool getSupportPolarx10() const { DARABONBA_PTR_GET_DEFAULT(supportPolarx10_, false) };
        inline Region& setSupportPolarx10(bool supportPolarx10) { DARABONBA_PTR_SET_VALUE(supportPolarx10_, supportPolarx10) };


        // supportPolarx20 Field Functions 
        bool hasSupportPolarx20() const { return this->supportPolarx20_ != nullptr;};
        void deleteSupportPolarx20() { this->supportPolarx20_ = nullptr;};
        inline bool getSupportPolarx20() const { DARABONBA_PTR_GET_DEFAULT(supportPolarx20_, false) };
        inline Region& setSupportPolarx20(bool supportPolarx20) { DARABONBA_PTR_SET_VALUE(supportPolarx20_, supportPolarx20) };


        // zones Field Functions 
        bool hasZones() const { return this->zones_ != nullptr;};
        void deleteZones() { this->zones_ = nullptr;};
        inline const Region::Zones & getZones() const { DARABONBA_PTR_GET_CONST(zones_, Region::Zones) };
        inline Region::Zones getZones() { DARABONBA_PTR_GET(zones_, Region::Zones) };
        inline Region& setZones(const Region::Zones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
        inline Region& setZones(Region::Zones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


      protected:
        shared_ptr<string> regionId_ {};
        shared_ptr<bool> supportPolarx10_ {};
        shared_ptr<bool> supportPolarx20_ {};
        shared_ptr<Region::Zones> zones_ {};
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

    virtual bool empty() const override { return this->code_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->regions_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeRegionsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int32_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0) };
    inline DescribeRegionsResponseBody& setErrorCode(int32_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRegionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


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


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRegionsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<int32_t> errorCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<DescribeRegionsResponseBody::Regions> regions_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
