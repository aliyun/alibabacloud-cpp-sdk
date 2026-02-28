// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVCCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVCCRESPONSEBODY_HPP_
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
  class GetVccResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVccResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVccResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetVccResponseBody() = default ;
    GetVccResponseBody(const GetVccResponseBody &) = default ;
    GetVccResponseBody(GetVccResponseBody &&) = default ;
    GetVccResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVccResponseBody() = default ;
    GetVccResponseBody& operator=(const GetVccResponseBody &) = default ;
    GetVccResponseBody& operator=(GetVccResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_TO_JSON(AliyunRouterInfo, aliyunRouterInfo_);
        DARABONBA_PTR_TO_JSON(AttachErStatus, attachErStatus_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(BandwidthStr, bandwidthStr_);
        DARABONBA_PTR_TO_JSON(BgpAsn, bgpAsn_);
        DARABONBA_PTR_TO_JSON(BgpCidr, bgpCidr_);
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
        DARABONBA_PTR_TO_JSON(CisRouterInfo, cisRouterInfo_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(ConnectionType, connectionType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CurrentNode, currentNode_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(ErInfos, erInfos_);
        DARABONBA_PTR_TO_JSON(ExpirationDate, expirationDate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_TO_JSON(LineOperator, lineOperator_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(PortType, portType_);
        DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Spec, spec_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VbrInfos, vbrInfos_);
        DARABONBA_PTR_TO_JSON(VccId, vccId_);
        DARABONBA_PTR_TO_JSON(VccName, vccName_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpdBaseInfo, vpdBaseInfo_);
        DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessPointId, accessPointId_);
        DARABONBA_PTR_FROM_JSON(AliyunRouterInfo, aliyunRouterInfo_);
        DARABONBA_PTR_FROM_JSON(AttachErStatus, attachErStatus_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(BandwidthStr, bandwidthStr_);
        DARABONBA_PTR_FROM_JSON(BgpAsn, bgpAsn_);
        DARABONBA_PTR_FROM_JSON(BgpCidr, bgpCidr_);
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
        DARABONBA_PTR_FROM_JSON(CisRouterInfo, cisRouterInfo_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(ConnectionType, connectionType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CurrentNode, currentNode_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(ErInfos, erInfos_);
        DARABONBA_PTR_FROM_JSON(ExpirationDate, expirationDate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_FROM_JSON(LineOperator, lineOperator_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(PortType, portType_);
        DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Spec, spec_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VbrInfos, vbrInfos_);
        DARABONBA_PTR_FROM_JSON(VccId, vccId_);
        DARABONBA_PTR_FROM_JSON(VccName, vccName_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpdBaseInfo, vpdBaseInfo_);
        DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
        // Network address segment
        shared_ptr<string> cidr_ {};
        // The time when the data address was created.
        shared_ptr<string> createTime_ {};
        // Lingjun CIDR block instance ID
        shared_ptr<string> vpdId_ {};
        // Lingjun CIDR block instance name
        shared_ptr<string> vpdName_ {};
      };

      class VbrInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VbrInfos& obj) { 
          DARABONBA_PTR_TO_JSON(CenId, cenId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VbrBgpPeers, vbrBgpPeers_);
          DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
        };
        friend void from_json(const Darabonba::Json& j, VbrInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(CenId, cenId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VbrBgpPeers, vbrBgpPeers_);
          DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
        };
        VbrInfos() = default ;
        VbrInfos(const VbrInfos &) = default ;
        VbrInfos(VbrInfos &&) = default ;
        VbrInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VbrInfos() = default ;
        VbrInfos& operator=(const VbrInfos &) = default ;
        VbrInfos& operator=(VbrInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VbrBgpPeers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VbrBgpPeers& obj) { 
            DARABONBA_PTR_TO_JSON(BgpGroupId, bgpGroupId_);
            DARABONBA_PTR_TO_JSON(BgpPeerId, bgpPeerId_);
            DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
            DARABONBA_PTR_TO_JSON(PeerIpAddress, peerIpAddress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, VbrBgpPeers& obj) { 
            DARABONBA_PTR_FROM_JSON(BgpGroupId, bgpGroupId_);
            DARABONBA_PTR_FROM_JSON(BgpPeerId, bgpPeerId_);
            DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
            DARABONBA_PTR_FROM_JSON(PeerIpAddress, peerIpAddress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          VbrBgpPeers() = default ;
          VbrBgpPeers(const VbrBgpPeers &) = default ;
          VbrBgpPeers(VbrBgpPeers &&) = default ;
          VbrBgpPeers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VbrBgpPeers() = default ;
          VbrBgpPeers& operator=(const VbrBgpPeers &) = default ;
          VbrBgpPeers& operator=(VbrBgpPeers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bgpGroupId_ == nullptr
        && this->bgpPeerId_ == nullptr && this->peerAsn_ == nullptr && this->peerIpAddress_ == nullptr && this->status_ == nullptr; };
          // bgpGroupId Field Functions 
          bool hasBgpGroupId() const { return this->bgpGroupId_ != nullptr;};
          void deleteBgpGroupId() { this->bgpGroupId_ = nullptr;};
          inline string getBgpGroupId() const { DARABONBA_PTR_GET_DEFAULT(bgpGroupId_, "") };
          inline VbrBgpPeers& setBgpGroupId(string bgpGroupId) { DARABONBA_PTR_SET_VALUE(bgpGroupId_, bgpGroupId) };


          // bgpPeerId Field Functions 
          bool hasBgpPeerId() const { return this->bgpPeerId_ != nullptr;};
          void deleteBgpPeerId() { this->bgpPeerId_ = nullptr;};
          inline string getBgpPeerId() const { DARABONBA_PTR_GET_DEFAULT(bgpPeerId_, "") };
          inline VbrBgpPeers& setBgpPeerId(string bgpPeerId) { DARABONBA_PTR_SET_VALUE(bgpPeerId_, bgpPeerId) };


          // peerAsn Field Functions 
          bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
          void deletePeerAsn() { this->peerAsn_ = nullptr;};
          inline string getPeerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, "") };
          inline VbrBgpPeers& setPeerAsn(string peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


          // peerIpAddress Field Functions 
          bool hasPeerIpAddress() const { return this->peerIpAddress_ != nullptr;};
          void deletePeerIpAddress() { this->peerIpAddress_ = nullptr;};
          inline string getPeerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(peerIpAddress_, "") };
          inline VbrBgpPeers& setPeerIpAddress(string peerIpAddress) { DARABONBA_PTR_SET_VALUE(peerIpAddress_, peerIpAddress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline VbrBgpPeers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // BGP Group ID
          shared_ptr<string> bgpGroupId_ {};
          // BGP peer ID
          shared_ptr<string> bgpPeerId_ {};
          // Peer AS No.
          shared_ptr<string> peerAsn_ {};
          // BGP peer IP address
          shared_ptr<string> peerIpAddress_ {};
          // The status of the BGP peer. Valid values:
          // 
          // *   Pending: pending
          // *   Available: The route is available.
          // *   Modifying: being modified
          // *   Deleting: The IPv4 gateway is being deleted.
          // *   Deleted
          // *   Not Available
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->cenId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->status_ == nullptr && this->vbrBgpPeers_ == nullptr && this->vbrId_ == nullptr; };
        // cenId Field Functions 
        bool hasCenId() const { return this->cenId_ != nullptr;};
        void deleteCenId() { this->cenId_ = nullptr;};
        inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
        inline VbrInfos& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline VbrInfos& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline VbrInfos& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline VbrInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vbrBgpPeers Field Functions 
        bool hasVbrBgpPeers() const { return this->vbrBgpPeers_ != nullptr;};
        void deleteVbrBgpPeers() { this->vbrBgpPeers_ = nullptr;};
        inline const vector<VbrInfos::VbrBgpPeers> & getVbrBgpPeers() const { DARABONBA_PTR_GET_CONST(vbrBgpPeers_, vector<VbrInfos::VbrBgpPeers>) };
        inline vector<VbrInfos::VbrBgpPeers> getVbrBgpPeers() { DARABONBA_PTR_GET(vbrBgpPeers_, vector<VbrInfos::VbrBgpPeers>) };
        inline VbrInfos& setVbrBgpPeers(const vector<VbrInfos::VbrBgpPeers> & vbrBgpPeers) { DARABONBA_PTR_SET_VALUE(vbrBgpPeers_, vbrBgpPeers) };
        inline VbrInfos& setVbrBgpPeers(vector<VbrInfos::VbrBgpPeers> && vbrBgpPeers) { DARABONBA_PTR_SET_RVALUE(vbrBgpPeers_, vbrBgpPeers) };


        // vbrId Field Functions 
        bool hasVbrId() const { return this->vbrId_ != nullptr;};
        void deleteVbrId() { this->vbrId_ = nullptr;};
        inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
        inline VbrInfos& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


      protected:
        // CEN ID
        shared_ptr<string> cenId_ {};
        // The time when the data address was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the agent was last modified.
        shared_ptr<string> gmtModified_ {};
        // The status of the VBR. Valid values:
        // 
        // *   unconfirmed
        // *   active: The VPN gateway is in a normal state.
        // *   terminating: The connection is being terminated.
        // *   terminated: The connection is terminated.
        // *   recovering: The task is being recovered.
        // *   deleting: The GDN is being deleted.
        // *   Available: The service is available.
        shared_ptr<string> status_ {};
        // BGP neighbor information list
        shared_ptr<vector<VbrInfos::VbrBgpPeers>> vbrBgpPeers_ {};
        // The ID of the border router.
        shared_ptr<string> vbrId_ {};
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
        // Lingjun HUB ID
        shared_ptr<string> erId_ {};
        // Lingjun HUB Instance Name
        shared_ptr<string> erName_ {};
        // The time when the agent was last modified.
        shared_ptr<string> gmtModified_ {};
        // Primary Zone
        shared_ptr<string> masterZoneId_ {};
        // The message that is returned.
        shared_ptr<string> message_ {};
        // Lingjun HUB Region Information
        shared_ptr<string> regionId_ {};
        // Number of routing policy
        shared_ptr<int64_t> routeMaps_ {};
        // The status of the intervention entry. Valid value:
        shared_ptr<string> status_ {};
        // The ID of the tenant.
        shared_ptr<string> tenantId_ {};
      };

      class CisRouterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CisRouterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CcInfos, ccInfos_);
          DARABONBA_PTR_TO_JSON(CcrId, ccrId_);
        };
        friend void from_json(const Darabonba::Json& j, CisRouterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CcInfos, ccInfos_);
          DARABONBA_PTR_FROM_JSON(CcrId, ccrId_);
        };
        CisRouterInfo() = default ;
        CisRouterInfo(const CisRouterInfo &) = default ;
        CisRouterInfo(CisRouterInfo &&) = default ;
        CisRouterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CisRouterInfo() = default ;
        CisRouterInfo& operator=(const CisRouterInfo &) = default ;
        CisRouterInfo& operator=(CisRouterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class CcInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CcInfos& obj) { 
            DARABONBA_PTR_TO_JSON(CcId, ccId_);
            DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
            DARABONBA_PTR_TO_JSON(RemoteGatewayIp, remoteGatewayIp_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(SubnetMask, subnetMask_);
            DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
          };
          friend void from_json(const Darabonba::Json& j, CcInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(CcId, ccId_);
            DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
            DARABONBA_PTR_FROM_JSON(RemoteGatewayIp, remoteGatewayIp_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(SubnetMask, subnetMask_);
            DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
          };
          CcInfos() = default ;
          CcInfos(const CcInfos &) = default ;
          CcInfos(CcInfos &&) = default ;
          CcInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CcInfos() = default ;
          CcInfos& operator=(const CcInfos &) = default ;
          CcInfos& operator=(CcInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ccId_ == nullptr
        && this->localGatewayIp_ == nullptr && this->remoteGatewayIp_ == nullptr && this->status_ == nullptr && this->subnetMask_ == nullptr && this->vlanId_ == nullptr; };
          // ccId Field Functions 
          bool hasCcId() const { return this->ccId_ != nullptr;};
          void deleteCcId() { this->ccId_ = nullptr;};
          inline string getCcId() const { DARABONBA_PTR_GET_DEFAULT(ccId_, "") };
          inline CcInfos& setCcId(string ccId) { DARABONBA_PTR_SET_VALUE(ccId_, ccId) };


          // localGatewayIp Field Functions 
          bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
          void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
          inline string getLocalGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
          inline CcInfos& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


          // remoteGatewayIp Field Functions 
          bool hasRemoteGatewayIp() const { return this->remoteGatewayIp_ != nullptr;};
          void deleteRemoteGatewayIp() { this->remoteGatewayIp_ = nullptr;};
          inline string getRemoteGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(remoteGatewayIp_, "") };
          inline CcInfos& setRemoteGatewayIp(string remoteGatewayIp) { DARABONBA_PTR_SET_VALUE(remoteGatewayIp_, remoteGatewayIp) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline CcInfos& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // subnetMask Field Functions 
          bool hasSubnetMask() const { return this->subnetMask_ != nullptr;};
          void deleteSubnetMask() { this->subnetMask_ = nullptr;};
          inline string getSubnetMask() const { DARABONBA_PTR_GET_DEFAULT(subnetMask_, "") };
          inline CcInfos& setSubnetMask(string subnetMask) { DARABONBA_PTR_SET_VALUE(subnetMask_, subnetMask) };


          // vlanId Field Functions 
          bool hasVlanId() const { return this->vlanId_ != nullptr;};
          void deleteVlanId() { this->vlanId_ = nullptr;};
          inline string getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
          inline CcInfos& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


        protected:
          // Leased Line ID
          shared_ptr<string> ccId_ {};
          // Lingjun Side Interconnection IPv4 Address
          shared_ptr<string> localGatewayIp_ {};
          // Lingjun Side Interconnection IPv4 Address
          shared_ptr<string> remoteGatewayIp_ {};
          // The state of the rule.
          shared_ptr<string> status_ {};
          // Subnet mask
          shared_ptr<string> subnetMask_ {};
          // Vlan ID of the leased line
          shared_ptr<string> vlanId_ {};
        };

        virtual bool empty() const override { return this->ccInfos_ == nullptr
        && this->ccrId_ == nullptr; };
        // ccInfos Field Functions 
        bool hasCcInfos() const { return this->ccInfos_ != nullptr;};
        void deleteCcInfos() { this->ccInfos_ = nullptr;};
        inline const vector<CisRouterInfo::CcInfos> & getCcInfos() const { DARABONBA_PTR_GET_CONST(ccInfos_, vector<CisRouterInfo::CcInfos>) };
        inline vector<CisRouterInfo::CcInfos> getCcInfos() { DARABONBA_PTR_GET(ccInfos_, vector<CisRouterInfo::CcInfos>) };
        inline CisRouterInfo& setCcInfos(const vector<CisRouterInfo::CcInfos> & ccInfos) { DARABONBA_PTR_SET_VALUE(ccInfos_, ccInfos) };
        inline CisRouterInfo& setCcInfos(vector<CisRouterInfo::CcInfos> && ccInfos) { DARABONBA_PTR_SET_RVALUE(ccInfos_, ccInfos) };


        // ccrId Field Functions 
        bool hasCcrId() const { return this->ccrId_ != nullptr;};
        void deleteCcrId() { this->ccrId_ = nullptr;};
        inline string getCcrId() const { DARABONBA_PTR_GET_DEFAULT(ccrId_, "") };
        inline CisRouterInfo& setCcrId(string ccrId) { DARABONBA_PTR_SET_VALUE(ccrId_, ccrId) };


      protected:
        // Leased Line Information List
        shared_ptr<vector<CisRouterInfo::CcInfos>> ccInfos_ {};
        // The ID of the on-cloud router instance.
        shared_ptr<string> ccrId_ {};
      };

      class AliyunRouterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AliyunRouterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(LocalGatewayIp, localGatewayIp_);
          DARABONBA_PTR_TO_JSON(Mask, mask_);
          DARABONBA_PTR_TO_JSON(PcId, pcId_);
          DARABONBA_PTR_TO_JSON(PeerGatewayIp, peerGatewayIp_);
          DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
          DARABONBA_PTR_TO_JSON(VlanId, vlanId_);
        };
        friend void from_json(const Darabonba::Json& j, AliyunRouterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(LocalGatewayIp, localGatewayIp_);
          DARABONBA_PTR_FROM_JSON(Mask, mask_);
          DARABONBA_PTR_FROM_JSON(PcId, pcId_);
          DARABONBA_PTR_FROM_JSON(PeerGatewayIp, peerGatewayIp_);
          DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
          DARABONBA_PTR_FROM_JSON(VlanId, vlanId_);
        };
        AliyunRouterInfo() = default ;
        AliyunRouterInfo(const AliyunRouterInfo &) = default ;
        AliyunRouterInfo(AliyunRouterInfo &&) = default ;
        AliyunRouterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AliyunRouterInfo() = default ;
        AliyunRouterInfo& operator=(const AliyunRouterInfo &) = default ;
        AliyunRouterInfo& operator=(AliyunRouterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->localGatewayIp_ == nullptr
        && this->mask_ == nullptr && this->pcId_ == nullptr && this->peerGatewayIp_ == nullptr && this->vbrId_ == nullptr && this->vlanId_ == nullptr; };
        // localGatewayIp Field Functions 
        bool hasLocalGatewayIp() const { return this->localGatewayIp_ != nullptr;};
        void deleteLocalGatewayIp() { this->localGatewayIp_ = nullptr;};
        inline string getLocalGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(localGatewayIp_, "") };
        inline AliyunRouterInfo& setLocalGatewayIp(string localGatewayIp) { DARABONBA_PTR_SET_VALUE(localGatewayIp_, localGatewayIp) };


        // mask Field Functions 
        bool hasMask() const { return this->mask_ != nullptr;};
        void deleteMask() { this->mask_ = nullptr;};
        inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
        inline AliyunRouterInfo& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


        // pcId Field Functions 
        bool hasPcId() const { return this->pcId_ != nullptr;};
        void deletePcId() { this->pcId_ = nullptr;};
        inline string getPcId() const { DARABONBA_PTR_GET_DEFAULT(pcId_, "") };
        inline AliyunRouterInfo& setPcId(string pcId) { DARABONBA_PTR_SET_VALUE(pcId_, pcId) };


        // peerGatewayIp Field Functions 
        bool hasPeerGatewayIp() const { return this->peerGatewayIp_ != nullptr;};
        void deletePeerGatewayIp() { this->peerGatewayIp_ = nullptr;};
        inline string getPeerGatewayIp() const { DARABONBA_PTR_GET_DEFAULT(peerGatewayIp_, "") };
        inline AliyunRouterInfo& setPeerGatewayIp(string peerGatewayIp) { DARABONBA_PTR_SET_VALUE(peerGatewayIp_, peerGatewayIp) };


        // vbrId Field Functions 
        bool hasVbrId() const { return this->vbrId_ != nullptr;};
        void deleteVbrId() { this->vbrId_ = nullptr;};
        inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
        inline AliyunRouterInfo& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


        // vlanId Field Functions 
        bool hasVlanId() const { return this->vlanId_ != nullptr;};
        void deleteVlanId() { this->vlanId_ = nullptr;};
        inline string getVlanId() const { DARABONBA_PTR_GET_DEFAULT(vlanId_, "") };
        inline AliyunRouterInfo& setVlanId(string vlanId) { DARABONBA_PTR_SET_VALUE(vlanId_, vlanId) };


      protected:
        // IPv4 address of Alibaba Cloud-side interconnection
        shared_ptr<string> localGatewayIp_ {};
        // Masking
        shared_ptr<string> mask_ {};
        // Express Connect circuit ID
        shared_ptr<string> pcId_ {};
        // Lingjun Side Interconnection IPv4 Address
        shared_ptr<string> peerGatewayIp_ {};
        // The ID of the VBR.
        shared_ptr<string> vbrId_ {};
        // VLAN ID of the VBR
        shared_ptr<string> vlanId_ {};
      };

      virtual bool empty() const override { return this->accessPointId_ == nullptr
        && this->aliyunRouterInfo_ == nullptr && this->attachErStatus_ == nullptr && this->bandwidth_ == nullptr && this->bandwidthStr_ == nullptr && this->bgpAsn_ == nullptr
        && this->bgpCidr_ == nullptr && this->cenId_ == nullptr && this->cenOwnerId_ == nullptr && this->cisRouterInfo_ == nullptr && this->commodityCode_ == nullptr
        && this->connectionType_ == nullptr && this->createTime_ == nullptr && this->currentNode_ == nullptr && this->duration_ == nullptr && this->erInfos_ == nullptr
        && this->expirationDate_ == nullptr && this->gmtModified_ == nullptr && this->internetChargeType_ == nullptr && this->lineOperator_ == nullptr && this->message_ == nullptr
        && this->payType_ == nullptr && this->portType_ == nullptr && this->pricingCycle_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->spec_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->tenantId_ == nullptr && this->vSwitchId_ == nullptr
        && this->vbrInfos_ == nullptr && this->vccId_ == nullptr && this->vccName_ == nullptr && this->vpcId_ == nullptr && this->vpdBaseInfo_ == nullptr
        && this->vpdId_ == nullptr && this->zoneId_ == nullptr; };
      // accessPointId Field Functions 
      bool hasAccessPointId() const { return this->accessPointId_ != nullptr;};
      void deleteAccessPointId() { this->accessPointId_ = nullptr;};
      inline string getAccessPointId() const { DARABONBA_PTR_GET_DEFAULT(accessPointId_, "") };
      inline Content& setAccessPointId(string accessPointId) { DARABONBA_PTR_SET_VALUE(accessPointId_, accessPointId) };


      // aliyunRouterInfo Field Functions 
      bool hasAliyunRouterInfo() const { return this->aliyunRouterInfo_ != nullptr;};
      void deleteAliyunRouterInfo() { this->aliyunRouterInfo_ = nullptr;};
      inline const vector<Content::AliyunRouterInfo> & getAliyunRouterInfo() const { DARABONBA_PTR_GET_CONST(aliyunRouterInfo_, vector<Content::AliyunRouterInfo>) };
      inline vector<Content::AliyunRouterInfo> getAliyunRouterInfo() { DARABONBA_PTR_GET(aliyunRouterInfo_, vector<Content::AliyunRouterInfo>) };
      inline Content& setAliyunRouterInfo(const vector<Content::AliyunRouterInfo> & aliyunRouterInfo) { DARABONBA_PTR_SET_VALUE(aliyunRouterInfo_, aliyunRouterInfo) };
      inline Content& setAliyunRouterInfo(vector<Content::AliyunRouterInfo> && aliyunRouterInfo) { DARABONBA_PTR_SET_RVALUE(aliyunRouterInfo_, aliyunRouterInfo) };


      // attachErStatus Field Functions 
      bool hasAttachErStatus() const { return this->attachErStatus_ != nullptr;};
      void deleteAttachErStatus() { this->attachErStatus_ = nullptr;};
      inline bool getAttachErStatus() const { DARABONBA_PTR_GET_DEFAULT(attachErStatus_, false) };
      inline Content& setAttachErStatus(bool attachErStatus) { DARABONBA_PTR_SET_VALUE(attachErStatus_, attachErStatus) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline Content& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // bandwidthStr Field Functions 
      bool hasBandwidthStr() const { return this->bandwidthStr_ != nullptr;};
      void deleteBandwidthStr() { this->bandwidthStr_ = nullptr;};
      inline string getBandwidthStr() const { DARABONBA_PTR_GET_DEFAULT(bandwidthStr_, "") };
      inline Content& setBandwidthStr(string bandwidthStr) { DARABONBA_PTR_SET_VALUE(bandwidthStr_, bandwidthStr) };


      // bgpAsn Field Functions 
      bool hasBgpAsn() const { return this->bgpAsn_ != nullptr;};
      void deleteBgpAsn() { this->bgpAsn_ = nullptr;};
      inline string getBgpAsn() const { DARABONBA_PTR_GET_DEFAULT(bgpAsn_, "") };
      inline Content& setBgpAsn(string bgpAsn) { DARABONBA_PTR_SET_VALUE(bgpAsn_, bgpAsn) };


      // bgpCidr Field Functions 
      bool hasBgpCidr() const { return this->bgpCidr_ != nullptr;};
      void deleteBgpCidr() { this->bgpCidr_ = nullptr;};
      inline string getBgpCidr() const { DARABONBA_PTR_GET_DEFAULT(bgpCidr_, "") };
      inline Content& setBgpCidr(string bgpCidr) { DARABONBA_PTR_SET_VALUE(bgpCidr_, bgpCidr) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline Content& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // cenOwnerId Field Functions 
      bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
      void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
      inline string getCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, "") };
      inline Content& setCenOwnerId(string cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


      // cisRouterInfo Field Functions 
      bool hasCisRouterInfo() const { return this->cisRouterInfo_ != nullptr;};
      void deleteCisRouterInfo() { this->cisRouterInfo_ = nullptr;};
      inline const vector<Content::CisRouterInfo> & getCisRouterInfo() const { DARABONBA_PTR_GET_CONST(cisRouterInfo_, vector<Content::CisRouterInfo>) };
      inline vector<Content::CisRouterInfo> getCisRouterInfo() { DARABONBA_PTR_GET(cisRouterInfo_, vector<Content::CisRouterInfo>) };
      inline Content& setCisRouterInfo(const vector<Content::CisRouterInfo> & cisRouterInfo) { DARABONBA_PTR_SET_VALUE(cisRouterInfo_, cisRouterInfo) };
      inline Content& setCisRouterInfo(vector<Content::CisRouterInfo> && cisRouterInfo) { DARABONBA_PTR_SET_RVALUE(cisRouterInfo_, cisRouterInfo) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Content& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // connectionType Field Functions 
      bool hasConnectionType() const { return this->connectionType_ != nullptr;};
      void deleteConnectionType() { this->connectionType_ = nullptr;};
      inline string getConnectionType() const { DARABONBA_PTR_GET_DEFAULT(connectionType_, "") };
      inline Content& setConnectionType(string connectionType) { DARABONBA_PTR_SET_VALUE(connectionType_, connectionType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Content& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // currentNode Field Functions 
      bool hasCurrentNode() const { return this->currentNode_ != nullptr;};
      void deleteCurrentNode() { this->currentNode_ = nullptr;};
      inline string getCurrentNode() const { DARABONBA_PTR_GET_DEFAULT(currentNode_, "") };
      inline Content& setCurrentNode(string currentNode) { DARABONBA_PTR_SET_VALUE(currentNode_, currentNode) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline string getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
      inline Content& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // erInfos Field Functions 
      bool hasErInfos() const { return this->erInfos_ != nullptr;};
      void deleteErInfos() { this->erInfos_ = nullptr;};
      inline const vector<Content::ErInfos> & getErInfos() const { DARABONBA_PTR_GET_CONST(erInfos_, vector<Content::ErInfos>) };
      inline vector<Content::ErInfos> getErInfos() { DARABONBA_PTR_GET(erInfos_, vector<Content::ErInfos>) };
      inline Content& setErInfos(const vector<Content::ErInfos> & erInfos) { DARABONBA_PTR_SET_VALUE(erInfos_, erInfos) };
      inline Content& setErInfos(vector<Content::ErInfos> && erInfos) { DARABONBA_PTR_SET_RVALUE(erInfos_, erInfos) };


      // expirationDate Field Functions 
      bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
      void deleteExpirationDate() { this->expirationDate_ = nullptr;};
      inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
      inline Content& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // internetChargeType Field Functions 
      bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
      void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
      inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
      inline Content& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


      // lineOperator Field Functions 
      bool hasLineOperator() const { return this->lineOperator_ != nullptr;};
      void deleteLineOperator() { this->lineOperator_ = nullptr;};
      inline string getLineOperator() const { DARABONBA_PTR_GET_DEFAULT(lineOperator_, "") };
      inline Content& setLineOperator(string lineOperator) { DARABONBA_PTR_SET_VALUE(lineOperator_, lineOperator) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Content& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Content& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // portType Field Functions 
      bool hasPortType() const { return this->portType_ != nullptr;};
      void deletePortType() { this->portType_ = nullptr;};
      inline string getPortType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
      inline Content& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


      // pricingCycle Field Functions 
      bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
      void deletePricingCycle() { this->pricingCycle_ = nullptr;};
      inline string getPricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
      inline Content& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Content& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Content& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
      inline Content& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Content& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Content::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Content::Tags>) };
      inline vector<Content::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Content::Tags>) };
      inline Content& setTags(const vector<Content::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Content& setTags(vector<Content::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline Content& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Content& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vbrInfos Field Functions 
      bool hasVbrInfos() const { return this->vbrInfos_ != nullptr;};
      void deleteVbrInfos() { this->vbrInfos_ = nullptr;};
      inline const vector<Content::VbrInfos> & getVbrInfos() const { DARABONBA_PTR_GET_CONST(vbrInfos_, vector<Content::VbrInfos>) };
      inline vector<Content::VbrInfos> getVbrInfos() { DARABONBA_PTR_GET(vbrInfos_, vector<Content::VbrInfos>) };
      inline Content& setVbrInfos(const vector<Content::VbrInfos> & vbrInfos) { DARABONBA_PTR_SET_VALUE(vbrInfos_, vbrInfos) };
      inline Content& setVbrInfos(vector<Content::VbrInfos> && vbrInfos) { DARABONBA_PTR_SET_RVALUE(vbrInfos_, vbrInfos) };


      // vccId Field Functions 
      bool hasVccId() const { return this->vccId_ != nullptr;};
      void deleteVccId() { this->vccId_ = nullptr;};
      inline string getVccId() const { DARABONBA_PTR_GET_DEFAULT(vccId_, "") };
      inline Content& setVccId(string vccId) { DARABONBA_PTR_SET_VALUE(vccId_, vccId) };


      // vccName Field Functions 
      bool hasVccName() const { return this->vccName_ != nullptr;};
      void deleteVccName() { this->vccName_ = nullptr;};
      inline string getVccName() const { DARABONBA_PTR_GET_DEFAULT(vccName_, "") };
      inline Content& setVccName(string vccName) { DARABONBA_PTR_SET_VALUE(vccName_, vccName) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Content& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpdBaseInfo Field Functions 
      bool hasVpdBaseInfo() const { return this->vpdBaseInfo_ != nullptr;};
      void deleteVpdBaseInfo() { this->vpdBaseInfo_ = nullptr;};
      inline const Content::VpdBaseInfo & getVpdBaseInfo() const { DARABONBA_PTR_GET_CONST(vpdBaseInfo_, Content::VpdBaseInfo) };
      inline Content::VpdBaseInfo getVpdBaseInfo() { DARABONBA_PTR_GET(vpdBaseInfo_, Content::VpdBaseInfo) };
      inline Content& setVpdBaseInfo(const Content::VpdBaseInfo & vpdBaseInfo) { DARABONBA_PTR_SET_VALUE(vpdBaseInfo_, vpdBaseInfo) };
      inline Content& setVpdBaseInfo(Content::VpdBaseInfo && vpdBaseInfo) { DARABONBA_PTR_SET_RVALUE(vpdBaseInfo_, vpdBaseInfo) };


      // vpdId Field Functions 
      bool hasVpdId() const { return this->vpdId_ != nullptr;};
      void deleteVpdId() { this->vpdId_ = nullptr;};
      inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
      inline Content& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Content& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Express Connect circuit access point ID:
      // 
      // *   **ap-cn-wulanchabu-jn-ts-A**: Ulanqab-Jining-A
      // *   **ap-cn-heyuan-yc-ts-SA127**: Heyuan-Yuancheng-A
      shared_ptr<string> accessPointId_ {};
      // Alibaba Cloud route information list
      shared_ptr<vector<Content::AliyunRouterInfo>> aliyunRouterInfo_ {};
      // Whether Lingjun HUB has been bound to a network instance
      // 
      // *   **true**: Bound
      // *   **false**: unbound
      shared_ptr<bool> attachErStatus_ {};
      // bandwidth
      shared_ptr<int32_t> bandwidth_ {};
      // The bandwidth of the port.
      shared_ptr<string> bandwidthStr_ {};
      // BGP AS number
      shared_ptr<string> bgpAsn_ {};
      // BGP CIDR block
      shared_ptr<string> bgpCidr_ {};
      // The ID of the CEN instance; [What is the CEN?](https://help.aliyun.com/document_detail/181681.html)
      // 
      // You can call the [DescribeCens](https://help.aliyun.com/document_detail/468215.htm) to query the information of CEN instances under the current Alibaba Cloud account.
      shared_ptr<string> cenId_ {};
      // Account to which the CEN belongs
      shared_ptr<string> cenOwnerId_ {};
      // Lingjun Network Routing Information List
      shared_ptr<vector<Content::CisRouterInfo>> cisRouterInfo_ {};
      // Commodity code
      shared_ptr<string> commodityCode_ {};
      // The connection mode. Valid values:
      // 
      // *   **VPC**
      // *   **CENTR**
      shared_ptr<string> connectionType_ {};
      // The time when the data address was created.
      shared_ptr<string> createTime_ {};
      // Current Node
      shared_ptr<string> currentNode_ {};
      // Cycle
      shared_ptr<string> duration_ {};
      // List of bound Lingjun HUB information
      shared_ptr<vector<Content::ErInfos>> erInfos_ {};
      // The time when the application expired.
      shared_ptr<string> expirationDate_ {};
      // The time when the agent was last modified.
      shared_ptr<string> gmtModified_ {};
      // The billing method for network usage.
      // 
      // *   **PayByTraffic**: pay-by-traffic
      // *   **PayByBandwidth**: pay-by-bandwidth
      shared_ptr<string> internetChargeType_ {};
      // The connectivity provider of the Express Connect circuit. Valid values:
      // 
      // *   **CO**: other connectivity providers in the Chinese mainland
      shared_ptr<string> lineOperator_ {};
      // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
      shared_ptr<string> message_ {};
      // The billing method of the instance. Valid values:
      // 
      // *   **PREPAY**: subscription
      // *   **POSTPAY**: pay-as-you-go
      shared_ptr<string> payType_ {};
      // The port type of the Express Connect circuit. Valid values:
      // 
      // *   **100GBase-LR**: 100,000 megabytes of single-mode optical port (10 km)
      shared_ptr<string> portType_ {};
      // The billing cycle. Valid values:
      // 
      // *   **Month**: Billed on a monthly basis
      // *   **Year**: Billed on an annual basis
      shared_ptr<string> pricingCycle_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The ID of your Alibaba Cloud resource group.
      // 
      // For more information about resource groups, see [Resource groups](https://help.aliyun.com/document_detail/94475.htm).
      shared_ptr<string> resourceGroupId_ {};
      // Specification; value:
      // 
      // *   **Large**: Large
      shared_ptr<string> spec_ {};
      // The status of the cache reserve instance. Valid values:
      // 
      // *   **Available**: Normal.
      // *   **Not Available**: Not available.
      // *   **Executing**: The task is being executed.
      // *   **Deleting**: The account is being deleted
      shared_ptr<string> status_ {};
      // The tag information.
      // 
      // You can specify up to 20 tags.
      shared_ptr<vector<Content::Tags>> tags_ {};
      // The ID of the tenant.
      shared_ptr<string> tenantId_ {};
      // The ID of the vSwitch. [Virtual Private Cloud VSwitch](https://help.aliyun.com/document_detail/100380.html).
      // 
      // You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation to query created vSwitches.
      shared_ptr<string> vSwitchId_ {};
      // Information list of border routers
      shared_ptr<vector<Content::VbrInfos>> vbrInfos_ {};
      // The ID of the Lingjun connection instance.
      shared_ptr<string> vccId_ {};
      // The name of the Lingjun connection instance.
      shared_ptr<string> vccName_ {};
      // Virtual Private Cloud IDs; [What is Virtual Private Cloud](https://help.aliyun.com/document_detail/34217.html)
      // 
      // You can call the [DescribeVpcs](https://help.aliyun.com/document_detail/35739.html#demo-0) operation to query the specified VPC.
      shared_ptr<string> vpcId_ {};
      // Lingjun network segment information (applicable to the scene where the old version of Lingjun connection is directly bound to Lingjun network segment)
      shared_ptr<Content::VpdBaseInfo> vpdBaseInfo_ {};
      // Lingjun CIDR block instance ID
      shared_ptr<string> vpdId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetVccResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetVccResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetVccResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetVccResponseBody::Content) };
    inline GetVccResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetVccResponseBody::Content) };
    inline GetVccResponseBody& setContent(const GetVccResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetVccResponseBody& setContent(GetVccResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVccResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVccResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<GetVccResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // Request ID of the current request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
