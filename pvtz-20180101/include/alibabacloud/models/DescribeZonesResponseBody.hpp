// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEZONESRESPONSEBODY_HPP_
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
  class DescribeZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
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
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorSubType, creatorSubType_);
          DARABONBA_PTR_TO_JSON(DnsGroup, dnsGroup_);
          DARABONBA_PTR_TO_JSON(DnsGroupChanging, dnsGroupChanging_);
          DARABONBA_PTR_TO_JSON(IsPtr, isPtr_);
          DARABONBA_PTR_TO_JSON(ProxyPattern, proxyPattern_);
          DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ResourceTags, resourceTags_);
          DARABONBA_PTR_TO_JSON(SlaveDnsStatus, slaveDnsStatus_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
          DARABONBA_PTR_TO_JSON(ZoneTag, zoneTag_);
          DARABONBA_PTR_TO_JSON(ZoneType, zoneType_);
        };
        friend void from_json(const Darabonba::Json& j, Zone& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorSubType, creatorSubType_);
          DARABONBA_PTR_FROM_JSON(DnsGroup, dnsGroup_);
          DARABONBA_PTR_FROM_JSON(DnsGroupChanging, dnsGroupChanging_);
          DARABONBA_PTR_FROM_JSON(IsPtr, isPtr_);
          DARABONBA_PTR_FROM_JSON(ProxyPattern, proxyPattern_);
          DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ResourceTags, resourceTags_);
          DARABONBA_PTR_FROM_JSON(SlaveDnsStatus, slaveDnsStatus_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
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
        class ResourceTags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceTags& obj) { 
            DARABONBA_PTR_TO_JSON(ResourceTag, resourceTag_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceTags& obj) { 
            DARABONBA_PTR_FROM_JSON(ResourceTag, resourceTag_);
          };
          ResourceTags() = default ;
          ResourceTags(const ResourceTags &) = default ;
          ResourceTags(ResourceTags &&) = default ;
          ResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceTags() = default ;
          ResourceTags& operator=(const ResourceTags &) = default ;
          ResourceTags& operator=(ResourceTags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ResourceTag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ResourceTag& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, ResourceTag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            ResourceTag() = default ;
            ResourceTag(const ResourceTag &) = default ;
            ResourceTag(ResourceTag &&) = default ;
            ResourceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ResourceTag() = default ;
            ResourceTag& operator=(const ResourceTag &) = default ;
            ResourceTag& operator=(ResourceTag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline ResourceTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline ResourceTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of tag N added to the zone.
            shared_ptr<string> key_ {};
            // The value of tag N added to the zone.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->resourceTag_ == nullptr; };
          // resourceTag Field Functions 
          bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
          void deleteResourceTag() { this->resourceTag_ = nullptr;};
          inline const vector<ResourceTags::ResourceTag> & getResourceTag() const { DARABONBA_PTR_GET_CONST(resourceTag_, vector<ResourceTags::ResourceTag>) };
          inline vector<ResourceTags::ResourceTag> getResourceTag() { DARABONBA_PTR_GET(resourceTag_, vector<ResourceTags::ResourceTag>) };
          inline ResourceTags& setResourceTag(const vector<ResourceTags::ResourceTag> & resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };
          inline ResourceTags& setResourceTag(vector<ResourceTags::ResourceTag> && resourceTag) { DARABONBA_PTR_SET_RVALUE(resourceTag_, resourceTag) };


        protected:
          shared_ptr<vector<ResourceTags::ResourceTag>> resourceTag_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->creator_ == nullptr && this->creatorSubType_ == nullptr && this->dnsGroup_ == nullptr && this->dnsGroupChanging_ == nullptr
        && this->isPtr_ == nullptr && this->proxyPattern_ == nullptr && this->recordCount_ == nullptr && this->remark_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceTags_ == nullptr && this->slaveDnsStatus_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr && this->zoneId_ == nullptr
        && this->zoneName_ == nullptr && this->zoneTag_ == nullptr && this->zoneType_ == nullptr; };
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


        // creatorSubType Field Functions 
        bool hasCreatorSubType() const { return this->creatorSubType_ != nullptr;};
        void deleteCreatorSubType() { this->creatorSubType_ = nullptr;};
        inline string getCreatorSubType() const { DARABONBA_PTR_GET_DEFAULT(creatorSubType_, "") };
        inline Zone& setCreatorSubType(string creatorSubType) { DARABONBA_PTR_SET_VALUE(creatorSubType_, creatorSubType) };


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


        // proxyPattern Field Functions 
        bool hasProxyPattern() const { return this->proxyPattern_ != nullptr;};
        void deleteProxyPattern() { this->proxyPattern_ = nullptr;};
        inline string getProxyPattern() const { DARABONBA_PTR_GET_DEFAULT(proxyPattern_, "") };
        inline Zone& setProxyPattern(string proxyPattern) { DARABONBA_PTR_SET_VALUE(proxyPattern_, proxyPattern) };


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


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Zone& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // resourceTags Field Functions 
        bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
        void deleteResourceTags() { this->resourceTags_ = nullptr;};
        inline const Zone::ResourceTags & getResourceTags() const { DARABONBA_PTR_GET_CONST(resourceTags_, Zone::ResourceTags) };
        inline Zone::ResourceTags getResourceTags() { DARABONBA_PTR_GET(resourceTags_, Zone::ResourceTags) };
        inline Zone& setResourceTags(const Zone::ResourceTags & resourceTags) { DARABONBA_PTR_SET_VALUE(resourceTags_, resourceTags) };
        inline Zone& setResourceTags(Zone::ResourceTags && resourceTags) { DARABONBA_PTR_SET_RVALUE(resourceTags_, resourceTags) };


        // slaveDnsStatus Field Functions 
        bool hasSlaveDnsStatus() const { return this->slaveDnsStatus_ != nullptr;};
        void deleteSlaveDnsStatus() { this->slaveDnsStatus_ = nullptr;};
        inline string getSlaveDnsStatus() const { DARABONBA_PTR_GET_DEFAULT(slaveDnsStatus_, "") };
        inline Zone& setSlaveDnsStatus(string slaveDnsStatus) { DARABONBA_PTR_SET_VALUE(slaveDnsStatus_, slaveDnsStatus) };


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
        // The account type. Valid values:
        // 
        // *   **CUSTOMER**: Alibaba Cloud account
        // *   **SUB**: RAM user
        // *   **STS**: assumed role that obtains the Security Token Service (STS) token of a RAM role
        // *   **OTHER**: other types
        shared_ptr<string> creatorSubType_ {};
        // The logical location type of the built-in authoritative module in which the zone is added. Valid values:
        // 
        // *   **NORMAL_ZONE**: regular module
        // *   **FAST_ZONE**: acceleration module
        shared_ptr<string> dnsGroup_ {};
        // Indicates whether the zone is being removed to another logical location. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> dnsGroupChanging_ {};
        // Indicates whether the zone is a reverse lookup zone. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> isPtr_ {};
        // Indicates whether the recursive resolution proxy for subdomain names is enabled. Valid values:
        // 
        // *   **ZONE**: The recursive resolution proxy for subdomain names is disabled. In this case, NXDOMAIN is returned if the queried domain name does not exist in the zone.
        // *   **RECORD**: The recursive resolution proxy for subdomain names is enabled. In this case, if the queried domain name does not exist in the zone, DNS requests are recursively forwarded to the forward module and then to the recursion module until DNS results are returned.
        shared_ptr<string> proxyPattern_ {};
        // The number of Domain Name System (DNS) records added in the zone.
        shared_ptr<int32_t> recordCount_ {};
        // The description of the zone.
        shared_ptr<string> remark_ {};
        // The ID of the resource group to which the zone belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The tags added to the zone.
        shared_ptr<Zone::ResourceTags> resourceTags_ {};
        shared_ptr<string> slaveDnsStatus_ {};
        // The time when the zone was last modified. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> updateTime_ {};
        // The time when the DNS record was updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since 00:00:00 UTC on January 1, 1970.
        shared_ptr<int64_t> updateTimestamp_ {};
        // The zone ID. This ID uniquely identifies the zone.
        shared_ptr<string> zoneId_ {};
        // The name of the zone.
        shared_ptr<string> zoneName_ {};
        // The type of the cloud service. Valid values:
        // 
        // *   If ZoneType is set to AUTH_ZONE, no value is returned for this parameter.
        // *   If ZoneType is set to CLOUD_PRODUCT_ZONE, the type of the cloud service is returned.
        shared_ptr<string> zoneTag_ {};
        // The zone type. Valid values:
        // 
        // *   **AUTH_ZONE**: authoritative zone
        // *   **CLOUD_PRODUCT_ZONE**: authoritative zone for cloud services
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

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr && this->zones_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeZonesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeZonesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeZonesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeZonesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const DescribeZonesResponseBody::Zones & getZones() const { DARABONBA_PTR_GET_CONST(zones_, DescribeZonesResponseBody::Zones) };
    inline DescribeZonesResponseBody::Zones getZones() { DARABONBA_PTR_GET(zones_, DescribeZonesResponseBody::Zones) };
    inline DescribeZonesResponseBody& setZones(const DescribeZonesResponseBody::Zones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline DescribeZonesResponseBody& setZones(DescribeZonesResponseBody::Zones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of returned pages.
    shared_ptr<int32_t> totalPages_ {};
    // The zones.
    shared_ptr<DescribeZonesResponseBody::Zones> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
