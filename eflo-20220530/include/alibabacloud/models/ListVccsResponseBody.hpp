// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVCCSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVCCSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListVccsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVccsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVccsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListVccsResponseBody() = default ;
    ListVccsResponseBody(const ListVccsResponseBody &) = default ;
    ListVccsResponseBody(ListVccsResponseBody &&) = default ;
    ListVccsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVccsResponseBody() = default ;
    ListVccsResponseBody& operator=(const ListVccsResponseBody &) = default ;
    ListVccsResponseBody& operator=(ListVccsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
          DARABONBA_PTR_TO_JSON(BandwidthStr, bandwidthStr_);
          DARABONBA_PTR_TO_JSON(BgpAsn, bgpAsn_);
          DARABONBA_PTR_TO_JSON(BgpCidr, bgpCidr_);
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
          DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CurrentNode, currentNode_);
          DARABONBA_PTR_TO_JSON(ErInfos, erInfos_);
          DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(PortType, portType_);
          DARABONBA_PTR_TO_JSON(Rate, rate_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(VccId, vccId_);
          DARABONBA_PTR_TO_JSON(VccName, vccName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpdBaseInfo, vpdBaseInfo_);
          DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
          DARABONBA_PTR_FROM_JSON(BandwidthStr, bandwidthStr_);
          DARABONBA_PTR_FROM_JSON(BgpAsn, bgpAsn_);
          DARABONBA_PTR_FROM_JSON(BgpCidr, bgpCidr_);
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
          DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
          DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CurrentNode, currentNode_);
          DARABONBA_PTR_FROM_JSON(ErInfos, erInfos_);
          DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(PortType, portType_);
          DARABONBA_PTR_FROM_JSON(Rate, rate_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(VccId, vccId_);
          DARABONBA_PTR_FROM_JSON(VccName, vccName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpdBaseInfo, vpdBaseInfo_);
          DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Data() = default ;
        Data(const Data &) = default ;
        Data(Data &&) = default ;
        Data(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Data() = default ;
        Data& operator=(const Data &) = default ;
        Data& operator=(Data &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpdBaseInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpdBaseInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Cidr, cidr_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
            DARABONBA_PTR_TO_JSON(VpdName, vpdName_);
          };
          friend void from_json(const Darabonba::Json& j, VpdBaseInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
            DARABONBA_PTR_FROM_JSON(VpdName, vpdName_);
          };
          VpdBaseInfo() = default ;
          VpdBaseInfo(const VpdBaseInfo &) = default ;
          VpdBaseInfo(VpdBaseInfo &&) = default ;
          VpdBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpdBaseInfo() = default ;
          VpdBaseInfo& operator=(const VpdBaseInfo &) = default ;
          VpdBaseInfo& operator=(VpdBaseInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidr_ == nullptr
        && this->createTime_ == nullptr && this->vpdId_ == nullptr && this->vpdName_ == nullptr; };
          // cidr Field Functions 
          bool hasCidr() const { return this->cidr_ != nullptr;};
          void deleteCidr() { this->cidr_ = nullptr;};
          inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
          inline VpdBaseInfo& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline VpdBaseInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // vpdId Field Functions 
          bool hasVpdId() const { return this->vpdId_ != nullptr;};
          void deleteVpdId() { this->vpdId_ = nullptr;};
          inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
          inline VpdBaseInfo& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


          // vpdName Field Functions 
          bool hasVpdName() const { return this->vpdName_ != nullptr;};
          void deleteVpdName() { this->vpdName_ = nullptr;};
          inline string getVpdName() const { DARABONBA_PTR_GET_DEFAULT(vpdName_, "") };
          inline VpdBaseInfo& setVpdName(string vpdName) { DARABONBA_PTR_SET_VALUE(vpdName_, vpdName) };


        protected:
          // The CIDR block of the VPD.
          // 
          // *   We recommend that you use an RFC private endpoint as the Lingjun CIDR block, such as 10.0.0.0/8,172.16.0.0/12,192.168.0.0/16. In scenarios where the Doringjun CIDR block is connected to each other or where the Lingjun CIDR block is connected to a VPC, make sure that the addresses do not conflict with each other.
          // *   You can also use a custom CIDR block other than 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 and their subnets as the primary IPv4 CIDR block of the VPD.
          shared_ptr<string> cidr_ {};
          // The time when the data address was created.
          shared_ptr<string> createTime_ {};
          // Lingjun CIDR block instance ID
          shared_ptr<string> vpdId_ {};
          // Lingjun CIDR block instance name
          shared_ptr<string> vpdName_ {};
        };

        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The tag key.
          // 
          // You cannot specify an empty string as a tag key. It can be up to 64 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
          // 
          // You can specify at most 20 tag keys in each call.
          shared_ptr<string> tagKey_ {};
          // The value of the tag that is added to the resource.
          // 
          // The tag value can be empty or a string of up to 128 characters. It cannot start with aliyun or acs:, and cannot contain http:// or https://.
          // 
          // Each key-value pair must be unique. You can specify values for at most 20 tag keys in each call.
          shared_ptr<string> tagValue_ {};
        };

        class ErInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ErInfos& obj) { 
            DARABONBA_PTR_TO_JSON(Connections, connections_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(ErId, erId_);
            DARABONBA_PTR_TO_JSON(ErName, erName_);
            DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_TO_JSON(MasterZoneId, masterZoneId_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(RouteMaps, routeMaps_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          };
          friend void from_json(const Darabonba::Json& j, ErInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(Connections, connections_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(ErId, erId_);
            DARABONBA_PTR_FROM_JSON(ErName, erName_);
            DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
            DARABONBA_PTR_FROM_JSON(MasterZoneId, masterZoneId_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(RouteMaps, routeMaps_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          };
          ErInfos() = default ;
          ErInfos(const ErInfos &) = default ;
          ErInfos(ErInfos &&) = default ;
          ErInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ErInfos() = default ;
          ErInfos& operator=(const ErInfos &) = default ;
          ErInfos& operator=(ErInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->connections_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->erId_ == nullptr && this->erName_ == nullptr && this->gmtModified_ == nullptr
        && this->masterZoneId_ == nullptr && this->message_ == nullptr && this->regionId_ == nullptr && this->routeMaps_ == nullptr && this->status_ == nullptr
        && this->tenantId_ == nullptr; };
          // connections Field Functions 
          bool hasConnections() const { return this->connections_ != nullptr;};
          void deleteConnections() { this->connections_ = nullptr;};
          inline int64_t getConnections() const { DARABONBA_PTR_GET_DEFAULT(connections_, 0L) };
          inline ErInfos& setConnections(int64_t connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline ErInfos& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ErInfos& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // erId Field Functions 
          bool hasErId() const { return this->erId_ != nullptr;};
          void deleteErId() { this->erId_ = nullptr;};
          inline string getErId() const { DARABONBA_PTR_GET_DEFAULT(erId_, "") };
          inline ErInfos& setErId(string erId) { DARABONBA_PTR_SET_VALUE(erId_, erId) };


          // erName Field Functions 
          bool hasErName() const { return this->erName_ != nullptr;};
          void deleteErName() { this->erName_ = nullptr;};
          inline string getErName() const { DARABONBA_PTR_GET_DEFAULT(erName_, "") };
          inline ErInfos& setErName(string erName) { DARABONBA_PTR_SET_VALUE(erName_, erName) };


          // gmtModified Field Functions 
          bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
          void deleteGmtModified() { this->gmtModified_ = nullptr;};
          inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
          inline ErInfos& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


          // masterZoneId Field Functions 
          bool hasMasterZoneId() const { return this->masterZoneId_ != nullptr;};
          void deleteMasterZoneId() { this->masterZoneId_ = nullptr;};
          inline string getMasterZoneId() const { DARABONBA_PTR_GET_DEFAULT(masterZoneId_, "") };
          inline ErInfos& setMasterZoneId(string masterZoneId) { DARABONBA_PTR_SET_VALUE(masterZoneId_, masterZoneId) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline ErInfos& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline ErInfos& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // routeMaps Field Functions 
          bool hasRouteMaps() const { return this->routeMaps_ != nullptr;};
          void deleteRouteMaps() { this->routeMaps_ = nullptr;};
          inline int64_t getRouteMaps() const { DARABONBA_PTR_GET_DEFAULT(routeMaps_, 0L) };
          inline ErInfos& setRouteMaps(int64_t routeMaps) { DARABONBA_PTR_SET_VALUE(routeMaps_, routeMaps) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline ErInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // tenantId Field Functions 
          bool hasTenantId() const { return this->tenantId_ != nullptr;};
          void deleteTenantId() { this->tenantId_ = nullptr;};
          inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
          inline ErInfos& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        protected:
          // Connections
          shared_ptr<int64_t> connections_ {};
          // The time when the data address was created.
          shared_ptr<string> createTime_ {};
          // Description
          shared_ptr<string> description_ {};
          // Elastic Router ID
          shared_ptr<string> erId_ {};
          // ER instance name
          shared_ptr<string> erName_ {};
          // The time when the agent was last modified.
          shared_ptr<string> gmtModified_ {};
          // Primary Zone
          shared_ptr<string> masterZoneId_ {};
          // The message that is returned.
          shared_ptr<string> message_ {};
          // ER region information
          shared_ptr<string> regionId_ {};
          // Number of routing policy
          shared_ptr<int64_t> routeMaps_ {};
          // The status of the intervention entry. Valid value:
          shared_ptr<string> status_ {};
          // The ID of the tenant.
          shared_ptr<string> tenantId_ {};
        };

        virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->bandwidthStr_ == nullptr && this->bgpAsn_ == nullptr && this->bgpCidr_ == nullptr && this->cenId_ == nullptr && this->cenOwnerId_ == nullptr
        && this->commodityCode_ == nullptr && this->connectionType_ == nullptr && this->createTime_ == nullptr && this->currentNode_ == nullptr && this->erInfos_ == nullptr
        && this->expirationDate_ == nullptr && this->gmtModified_ == nullptr && this->lineOperator_ == nullptr && this->message_ == nullptr && this->portType_ == nullptr
        && this->rate_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->taskId_ == nullptr && this->tenantId_ == nullptr && this->vccId_ == nullptr && this->vccName_ == nullptr
        && this->vpcId_ == nullptr && this->vpdBaseInfo_ == nullptr && this->vpdId_ == nullptr && this->zoneId_ == nullptr; };
        // accessPointId Field Functions 
        bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
        void deleteAccessPointId() { this->accessPointId_ = nullptr;};
        inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
        inline Data& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


        // bandwidthStr Field Functions 
        bool hasBandwidthStr() const { return this->bandwidthStr_ != nullptr;};
        void deleteBandwidthStr() { this->bandwidthStr_ = nullptr;};
        inline string getBandwidthStr() const { DARABONBA_PTR_GET_DEFAULT(bandwidthStr_, "") };
        inline Data& setBandwidthStr(string bandwidthStr) { DARABONBA_PTR_SET_VALUE(bandwidthStr_, bandwidthStr) };


        // bgpAsn Field Functions 
        bool hasBgpAsn() const { return this->bgpAsn_ != nullptr;};
        void deleteBgpAsn() { this->bgpAsn_ = nullptr;};
        inline string getBgpAsn() const { DARABONBA_PTR_GET_DEFAULT(bgpAsn_, "") };
        inline Data& setBgpAsn(string bgpAsn) { DARABONBA_PTR_SET_VALUE(bgpAsn_, bgpAsn) };


        // bgpCidr Field Functions 
        bool hasBgpCidr() const { return this->bgpCidr_ != nullptr;};
        void deleteBgpCidr() { this->bgpCidr_ = nullptr;};
        inline string getBgpCidr() const { DARABONBA_PTR_GET_DEFAULT(bgpCidr_, "") };
        inline Data& setBgpCidr(string bgpCidr) { DARABONBA_PTR_SET_VALUE(bgpCidr_, bgpCidr) };


        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline Data& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // cenOwnerId Field Functions 
        bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
        void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
        inline string getCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, "") };
        inline Data& setCenOwnerId(string cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


        // commodityCode Field Functions 
        bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
        void deleteCommodityCode() { this->commodityCode_ = nullptr;};
        inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
        inline Data& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


        // connectionType Field Functions 
        bool hasConnectionType() const { return this->connectionType_ != nullptr;};
        void deleteConnectionType() { this->connectionType_ = nullptr;};
        inline string getConnectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
        inline Data& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // currentNode Field Functions 
        bool hasCurrentNode() const { return this->currentNode_ != nullptr;};
        void deleteCurrentNode() { this->currentNode_ = nullptr;};
        inline string getCurrentNode() const { DARABONBA_PTR_GET_DEFAULT(currentNode_, "") };
        inline Data& setCurrentNode(string currentNode) { DARABONBA_PTR_SET_VALUE(currentNode_, currentNode) };


        // erInfos Field Functions 
        bool hasErInfos() const { return this->erInfos_ != nullptr;};
        void deleteErInfos() { this->erInfos_ = nullptr;};
        inline const vector<Data::ErInfos> & getErInfos() const { DARABONBA_PTR_GET_CONST(erInfos_, vector<Data::ErInfos>) };
        inline vector<Data::ErInfos> getErInfos() { DARABONBA_PTR_GET(erInfos_, vector<Data::ErInfos>) };
        inline Data& setErInfos(const vector<Data::ErInfos> & erInfos) { DARABONBA_PTR_SET_VALUE(erInfos_, erInfos) };
        inline Data& setErInfos(vector<Data::ErInfos> && erInfos) { DARABONBA_PTR_SET_RVALUE(erInfos_, erInfos) };


        // expirationDate Field Functions 
        bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
        void deleteExpirationDate() { this->expirationDate_ = nullptr;};
        inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
        inline Data& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // lineOperator Field Functions 
        bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
        void deleteLineOperator() { this->lineOperator_ = nullptr;};
        inline string getLineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
        inline Data& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Data& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // portType Field Functions 
        bool hasPortType() const { return this->portType_ != nullptr;};
        void deletePortType() { this->portType_ = nullptr;};
        inline string getPortType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
        inline Data& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


        // rate Field Functions 
        bool hasRate() const { return this->rate_ != nullptr;};
        void deleteRate() { this->rate_ = nullptr;};
        inline double getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
        inline Data& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline Data& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
        inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
        inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // vccId Field Functions 
        bool hasVccId() const { return this->vccId_ != nullptr;};
        void deleteVccId() { this->vccId_ = nullptr;};
        inline string getVccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
        inline Data& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


        // vccName Field Functions 
        bool hasVccName() const { return this->vccName_ != nullptr;};
        void deleteVccName() { this->vccName_ = nullptr;};
        inline string getVccName() const { DARABONBA_PTR_GET_DEFAULT(vccName_, "") };
        inline Data& setVccName(string vccName) { DARABONBA_PTR_SET_VALUE(vccName_, vccName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpdBaseInfo Field Functions 
        bool hasVpdBaseInfo() const { return this->vpdBaseInfo_ != nullptr;};
        void deleteVpdBaseInfo() { this->vpdBaseInfo_ = nullptr;};
        inline const Data::VpdBaseInfo & getVpdBaseInfo() const { DARABONBA_PTR_GET_CONST(vpdBaseInfo_, Data::VpdBaseInfo) };
        inline Data::VpdBaseInfo getVpdBaseInfo() { DARABONBA_PTR_GET(vpdBaseInfo_, Data::VpdBaseInfo) };
        inline Data& setVpdBaseInfo(const Data::VpdBaseInfo & vpdBaseInfo) { DARABONBA_PTR_SET_VALUE(vpdBaseInfo_, vpdBaseInfo) };
        inline Data& setVpdBaseInfo(Data::VpdBaseInfo && vpdBaseInfo) { DARABONBA_PTR_SET_RVALUE(vpdBaseInfo_, vpdBaseInfo) };


        // vpdId Field Functions 
        bool hasVpdId() const { return this->vpdId_ != nullptr;};
        void deleteVpdId() { this->vpdId_ = nullptr;};
        inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
        inline Data& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // Express Connect circuit access point ID:
        // 
        // *   **ap-cn-wulanchabu-jn-ts-A**: Ulanqab-Jining-A
        // *   **ap-cn-heyuan-yc-ts-SA127**: Heyuan-Yuancheng-A
        shared_ptr<string> accessPointId_ {};
        // The bandwidth of the port.
        shared_ptr<string> bandwidthStr_ {};
        // bgp as number
        shared_ptr<string> bgpAsn_ {};
        // bgp network segment
        shared_ptr<string> bgpCidr_ {};
        // The ID of the CEN instance; [What is the CEN?](https://help.aliyun.com/document_detail/181681.html)
        // 
        // You can call the [DescribeCens](https://help.aliyun.com/document_detail/468215.htm) to query the information of CEN instances under the current Alibaba Cloud account.
        shared_ptr<string> cenId_ {};
        // Account to which cen belongs
        shared_ptr<string> cenOwnerId_ {};
        // Commodity code
        shared_ptr<string> commodityCode_ {};
        // The connection mode. Valid values:
        // 
        // *   **VPC**
        // *   **CENTR**
        shared_ptr<string> connectionType_ {};
        // The time when the data address was created.
        shared_ptr<string> createTime_ {};
        // Current process node
        shared_ptr<string> currentNode_ {};
        // List of bound Lingjun HUB information
        shared_ptr<vector<Data::ErInfos>> erInfos_ {};
        // The time when the application expired.
        shared_ptr<string> expirationDate_ {};
        // The time when the cluster was updated.
        shared_ptr<string> gmtModified_ {};
        // The connectivity provider of the Express Connect circuit. Valid values:
        // 
        // *   **CO**: other connectivity providers in the Chinese mainland
        shared_ptr<string> lineOperator_ {};
        // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
        shared_ptr<string> message_ {};
        // The port type of the Express Connect circuit. Valid values:
        // 
        // *   **100GBase-LR**: 100,000 megabytes of single-mode optical port (10 km)
        shared_ptr<string> portType_ {};
        // Process progress; value returns 0 to 1; not started is null
        shared_ptr<double> rate_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of your Alibaba Cloud resource group.
        // 
        // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm?spm=a2c4g.11186623.0.0.29e15d7akXhpuu).
        shared_ptr<string> resourceGroupId_ {};
        // The compute specification.
        shared_ptr<string> spec_ {};
        // The state of the rule.
        shared_ptr<string> status_ {};
        // The tag information.
        // 
        // You can specify up to 20 tags.
        shared_ptr<vector<Data::Tags>> tags_ {};
        // The job ID.
        shared_ptr<string> taskId_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
        // The ID of the Lingjun connection instance.
        shared_ptr<string> vccId_ {};
        // The name of the Lingjun connection instance.
        shared_ptr<string> vccName_ {};
        // Virtual Private Cloud IDs; [What is Virtual Private Cloud](https://help.aliyun.com/document_detail/34217.html)
        // 
        // You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html#demo-0) operation to query the specified VPC.
        shared_ptr<string> vpcId_ {};
        // Lingjun network segment information (applicable to the scene where the old version of Lingjun connection is directly bound to Lingjun network segment)
        shared_ptr<Data::VpdBaseInfo> vpdBaseInfo_ {};
        // Lingjun CIDR block instance ID
        shared_ptr<string> vpdId_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->total_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Content::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Content::Data>) };
      inline vector<Content::Data> getData() { DARABONBA_PTR_GET(data_, vector<Content::Data>) };
      inline Content& setData(const vector<Content::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Content& setData(vector<Content::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Content& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Lingjun Connection Information List
      shared_ptr<vector<Content::Data>> data_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListVccsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListVccsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListVccsResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListVccsResponseBody::Content) };
    inline ListVccsResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListVccsResponseBody::Content) };
    inline ListVccsResponseBody& setContent(const ListVccsResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListVccsResponseBody& setContent(ListVccsResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListVccsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVccsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<ListVccsResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
