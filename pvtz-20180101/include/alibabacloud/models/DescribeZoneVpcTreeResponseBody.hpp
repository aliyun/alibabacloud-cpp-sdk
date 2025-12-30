// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONEVPCTREERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONEVPCTREERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeZoneVpcTreeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZoneVpcTreeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZoneVpcTreeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    DescribeZoneVpcTreeResponseBody() = default ;
    DescribeZoneVpcTreeResponseBody(const DescribeZoneVpcTreeResponseBody &) = default ;
    DescribeZoneVpcTreeResponseBody(DescribeZoneVpcTreeResponseBody &&) = default ;
    DescribeZoneVpcTreeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeZoneVpcTreeResponseBody() = default ;
    DescribeZoneVpcTreeResponseBody& operator=(const DescribeZoneVpcTreeResponseBody &) = default ;
    DescribeZoneVpcTreeResponseBody& operator=(DescribeZoneVpcTreeResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
          DARABONBA_PTR_TO_JSON(DnsGroup, dnsGroup_);
          DARABONBA_PTR_TO_JSON(DnsGroupChanging, dnsGroupChanging_);
          DARABONBA_PTR_TO_JSON(IsPtr, isPtr_);
          DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_TO_JSON(Vpcs, vpcs_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
          DARABONBA_PTR_TO_JSON(ZoneTag, zoneTag_);
          DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
        };
        friend void from_json(const Darabonba::Json& j, Zone& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
          DARABONBA_PTR_FROM_JSON(DnsGroup, dnsGroup_);
          DARABONBA_PTR_FROM_JSON(DnsGroupChanging, dnsGroupChanging_);
          DARABONBA_PTR_FROM_JSON(IsPtr, isPtr_);
          DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_FROM_JSON(Vpcs, vpcs_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
          DARABONBA_PTR_FROM_JSON(ZoneTag, zoneTag_);
          DARABONBA_PTR_FROM_JSON(ZoneType, zoneType_);
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
        class Vpcs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Vpcs& obj) { 
            DARABONBA_PTR_TO_JSON(Vpc, vpc_);
          };
          friend void from_json(const Darabonba::Json& j, Vpcs& obj) { 
            DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
          };
          Vpcs() = default ;
          Vpcs(const Vpcs &) = default ;
          Vpcs(Vpcs &&) = default ;
          Vpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Vpcs() = default ;
          Vpcs& operator=(const Vpcs &) = default ;
          Vpcs& operator=(Vpcs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Vpc : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Vpc& obj) { 
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              DARABONBA_PTR_TO_JSON(RegionName, regionName_);
              DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
              DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
              DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
            };
            friend void from_json(const Darabonba::Json& j, Vpc& obj) { 
              DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              DARABONBA_PTR_FROM_JSON(RegionName, regionName_);
              DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
              DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
              DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
            };
            Vpc() = default ;
            Vpc(const Vpc &) = default ;
            Vpc(Vpc &&) = default ;
            Vpc(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Vpc() = default ;
            Vpc& operator=(const Vpc &) = default ;
            Vpc& operator=(Vpc &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->regionId_ == nullptr
        && this->regionName_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr && this->vpcType_ == nullptr; };
            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline Vpc& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // regionName Field Functions 
            bool hasRegionName() const { return this->regionName_ != nullptr;};
            void deleteRegionName() { this->regionName_ = nullptr;};
            inline string getRegionName() const { DARABONBA_PTR_GET_DEFAULT(regionName_, "") };
            inline Vpc& setRegionName(string regionName) { DARABONBA_PTR_SET_VALUE(regionName_, regionName) };


            // vpcId Field Functions 
            bool hasVpcId() const { return this->vpcId_ != nullptr;};
            void deleteVpcId() { this->vpcId_ = nullptr;};
            inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
            inline Vpc& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


            // vpcName Field Functions 
            bool hasVpcName() const { return this->vpcName_ != nullptr;};
            void deleteVpcName() { this->vpcName_ = nullptr;};
            inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
            inline Vpc& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


            // vpcType Field Functions 
            bool hasVpcType() const { return this->vpcType_ != nullptr;};
            void deleteVpcType() { this->vpcType_ = nullptr;};
            inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
            inline Vpc& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


          protected:
            // The region ID of the VPC.
            shared_ptr<string> regionId_ {};
            // The name of the region to which the VPC belongs.
            shared_ptr<string> regionName_ {};
            // The VPC ID. The unique ID of the VPC.
            shared_ptr<string> vpcId_ {};
            // The VPC name.
            shared_ptr<string> vpcName_ {};
            // The VPC type. Valid values:
            // 
            // *   STANDARD: standard VPC
            // *   EDS: Elastic Desktop Service (EDS) workspace VPC
            shared_ptr<string> vpcType_ {};
          };

          virtual bool empty() const override { return this->vpc_ == nullptr; };
          // vpc Field Functions 
          bool hasVpc() const { return this->vpc_ != nullptr;};
          void deleteVpc() { this->vpc_ = nullptr;};
          inline const vector<Vpcs::Vpc> & getVpc() const { DARABONBA_PTR_GET_CONST(vpc_, vector<Vpcs::Vpc>) };
          inline vector<Vpcs::Vpc> getVpc() { DARABONBA_PTR_GET(vpc_, vector<Vpcs::Vpc>) };
          inline Vpcs& setVpc(const vector<Vpcs::Vpc> & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
          inline Vpcs& setVpc(vector<Vpcs::Vpc> && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


        protected:
          shared_ptr<vector<Vpcs::Vpc>> vpc_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->creator_ == nullptr && this->creatorType_ == nullptr && this->dnsGroup_ == nullptr && this->dnsGroupChanging_ == nullptr
        && this->isPtr_ == nullptr && this->recordCount_ == nullptr && this->remark_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr
        && this->vpcs_ == nullptr && this->zoneId_ == nullptr && this->zoneName_ == nullptr && this->zoneTag_ == nullptr && this->zoneType_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Zone& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Zone& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Zone& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorType Field Functions 
        bool hasCreatorType() const { return this->creatorType_ != nullptr;};
        void deleteCreatorType() { this->creatorType_ = nullptr;};
        inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
        inline Zone& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


        // dnsGroup Field Functions 
        bool hasDnsGroup() const { return this->dnsGroup_ != nullptr;};
        void deleteDnsGroup() { this->dnsGroup_ = nullptr;};
        inline string getDnsGroup() const { DARABONBA_PTR_GET_DEFAULT(dnsGroup_, "") };
        inline Zone& setDnsGroup(string dnsGroup) { DARABONBA_PTR_SET_VALUE(dnsGroup_, dnsGroup) };


        // dnsGroupChanging Field Functions 
        bool hasDnsGroupChanging() const { return this->dnsGroupChanging_ != nullptr;};
        void deleteDnsGroupChanging() { this->dnsGroupChanging_ = nullptr;};
        inline bool getDnsGroupChanging() const { DARABONBA_PTR_GET_DEFAULT(dnsGroupChanging_, false) };
        inline Zone& setDnsGroupChanging(bool dnsGroupChanging) { DARABONBA_PTR_SET_VALUE(dnsGroupChanging_, dnsGroupChanging) };


        // isPtr Field Functions 
        bool hasIsPtr() const { return this->isPtr_ != nullptr;};
        void deleteIsPtr() { this->isPtr_ = nullptr;};
        inline bool getIsPtr() const { DARABONBA_PTR_GET_DEFAULT(isPtr_, false) };
        inline Zone& setIsPtr(bool isPtr) { DARABONBA_PTR_SET_VALUE(isPtr_, isPtr) };


        // recordCount Field Functions 
        bool hasRecordCount() const { return this->recordCount_ != nullptr;};
        void deleteRecordCount() { this->recordCount_ = nullptr;};
        inline int32_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0) };
        inline Zone& setRecordCount(int32_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Zone& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Zone& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Zone& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


        // vpcs Field Functions 
        bool hasVpcs() const { return this->vpcs_ != nullptr;};
        void deleteVpcs() { this->vpcs_ = nullptr;};
        inline const Zone::Vpcs & getVpcs() const { DARABONBA_PTR_GET_CONST(vpcs_, Zone::Vpcs) };
        inline Zone::Vpcs getVpcs() { DARABONBA_PTR_GET(vpcs_, Zone::Vpcs) };
        inline Zone& setVpcs(const Zone::Vpcs & vpcs) { DARABONBA_PTR_SET_VALUE(vpcs_, vpcs) };
        inline Zone& setVpcs(Zone::Vpcs && vpcs) { DARABONBA_PTR_SET_RVALUE(vpcs_, vpcs) };


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


        // zoneTag Field Functions 
        bool hasZoneTag() const { return this->zoneTag_ != nullptr;};
        void deleteZoneTag() { this->zoneTag_ = nullptr;};
        inline string getZoneTag() const { DARABONBA_PTR_GET_DEFAULT(zoneTag_, "") };
        inline Zone& setZoneTag(string zoneTag) { DARABONBA_PTR_SET_VALUE(zoneTag_, zoneTag) };


        // zoneType Field Functions 
        bool hasZoneType() const { return this->zoneType_ != nullptr;};
        void deleteZoneType() { this->zoneType_ = nullptr;};
        inline string getZoneType() const { DARABONBA_PTR_GET_DEFAULT(zoneType_, "") };
        inline Zone& setZoneType(string zoneType) { DARABONBA_PTR_SET_VALUE(zoneType_, zoneType) };


      protected:
        // The time when the zone was created. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The time when the zone was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> createTimestamp_ {};
        // The creator of the zone.
        shared_ptr<string> creator_ {};
        // The operator type.
        shared_ptr<string> creatorType_ {};
        // The logical location of the built-in authoritative module in which the zone is added. Valid values:
        // 
        // *   NORMAL_ZONE: regular module
        // *   FAST_ZONE: acceleration module
        shared_ptr<string> dnsGroup_ {};
        // Indicates whether the zone is being removed to another logical location. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> dnsGroupChanging_ {};
        // Indicates whether the zone is a reverse lookup zone. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> isPtr_ {};
        // The number of Domain Name System (DNS) records added for the zone.
        shared_ptr<int32_t> recordCount_ {};
        // The description of the zone.
        shared_ptr<string> remark_ {};
        // The time when the zone was last modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> updateTime_ {};
        // The time when the zone was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> updateTimestamp_ {};
        // The VPCs associated with the zone.
        shared_ptr<Zone::Vpcs> vpcs_ {};
        // The zone ID. This ID uniquely identifies the zone.
        shared_ptr<string> zoneId_ {};
        // The zone name.
        shared_ptr<string> zoneName_ {};
        // The type of the cloud service.
        // 
        // 
        // **Valid values:**
        // 
        // *   If ZoneType is set to AUTH_ZONE, no value is returned for this parameter.
        // 
        // *   If ZoneType is set to CLOUD_PRODUCT_ZONE, the type of the cloud service is returned.
        shared_ptr<string> zoneTag_ {};
        // The zone type. Valid values:
        // 
        // *   AUTH_ZONE: authoritative zone
        // *   CLOUD_PRODUCT_ZONE: authoritative zone for cloud services
        shared_ptr<string> zoneType_ {};
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
    inline DescribeZoneVpcTreeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const DescribeZoneVpcTreeResponseBody::Zones & getZones() const { DARABONBA_PTR_GET_CONST(zones_, DescribeZoneVpcTreeResponseBody::Zones) };
    inline DescribeZoneVpcTreeResponseBody::Zones getZones() { DARABONBA_PTR_GET(zones_, DescribeZoneVpcTreeResponseBody::Zones) };
    inline DescribeZoneVpcTreeResponseBody& setZones(const DescribeZoneVpcTreeResponseBody::Zones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeZoneVpcTreeResponseBody& setZones(DescribeZoneVpcTreeResponseBody::Zones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The zones.
    shared_ptr<DescribeZoneVpcTreeResponseBody::Zones> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
