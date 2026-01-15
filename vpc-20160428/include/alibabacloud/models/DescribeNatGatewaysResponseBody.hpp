// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATGATEWAYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeNatGatewaysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatGatewaysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatGatewaysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NatGateways, natGateways_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNatGatewaysResponseBody() = default ;
    DescribeNatGatewaysResponseBody(const DescribeNatGatewaysResponseBody &) = default ;
    DescribeNatGatewaysResponseBody(DescribeNatGatewaysResponseBody &&) = default ;
    DescribeNatGatewaysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatGatewaysResponseBody() = default ;
    DescribeNatGatewaysResponseBody& operator=(const DescribeNatGatewaysResponseBody &) = default ;
    DescribeNatGatewaysResponseBody& operator=(DescribeNatGatewaysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NatGateways : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NatGateways& obj) { 
        DARABONBA_PTR_TO_JSON(NatGateway, natGateway_);
      };
      friend void from_json(const Darabonba::Json& j, NatGateways& obj) { 
        DARABONBA_PTR_FROM_JSON(NatGateway, natGateway_);
      };
      NatGateways() = default ;
      NatGateways(const NatGateways &) = default ;
      NatGateways(NatGateways &&) = default ;
      NatGateways(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NatGateways() = default ;
      NatGateways& operator=(const NatGateways &) = default ;
      NatGateways& operator=(NatGateways &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NatGateway : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NatGateway& obj) { 
          DARABONBA_PTR_TO_JSON(AccessMode, accessMode_);
          DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
          DARABONBA_PTR_TO_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EcsMetricEnabled, ecsMetricEnabled_);
          DARABONBA_PTR_TO_JSON(EipBindMode, eipBindMode_);
          DARABONBA_PTR_TO_JSON(EnableSessionLog, enableSessionLog_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(ForwardTableIds, forwardTableIds_);
          DARABONBA_PTR_TO_JSON(FullNatTableIds, fullNatTableIds_);
          DARABONBA_PTR_TO_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
          DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_TO_JSON(IpLists, ipLists_);
          DARABONBA_PTR_TO_JSON(IpPrefixList, ipPrefixList_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_TO_JSON(NatGatewayPrivateInfo, natGatewayPrivateInfo_);
          DARABONBA_PTR_TO_JSON(NatType, natType_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(PrivateLinkEnabled, privateLinkEnabled_);
          DARABONBA_PTR_TO_JSON(PrivateLinkMode, privateLinkMode_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityProtectionEnabled, securityProtectionEnabled_);
          DARABONBA_PTR_TO_JSON(SnatTableIds, snatTableIds_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, NatGateway& obj) { 
          DARABONBA_PTR_FROM_JSON(AccessMode, accessMode_);
          DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
          DARABONBA_PTR_FROM_JSON(BusinessStatus, businessStatus_);
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EcsMetricEnabled, ecsMetricEnabled_);
          DARABONBA_PTR_FROM_JSON(EipBindMode, eipBindMode_);
          DARABONBA_PTR_FROM_JSON(EnableSessionLog, enableSessionLog_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(ForwardTableIds, forwardTableIds_);
          DARABONBA_PTR_FROM_JSON(FullNatTableIds, fullNatTableIds_);
          DARABONBA_PTR_FROM_JSON(IcmpReplyEnabled, icmpReplyEnabled_);
          DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
          DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
          DARABONBA_PTR_FROM_JSON(IpLists, ipLists_);
          DARABONBA_PTR_FROM_JSON(IpPrefixList, ipPrefixList_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
          DARABONBA_PTR_FROM_JSON(NatGatewayPrivateInfo, natGatewayPrivateInfo_);
          DARABONBA_PTR_FROM_JSON(NatType, natType_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(PrivateLinkEnabled, privateLinkEnabled_);
          DARABONBA_PTR_FROM_JSON(PrivateLinkMode, privateLinkMode_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityProtectionEnabled, securityProtectionEnabled_);
          DARABONBA_PTR_FROM_JSON(SnatTableIds, snatTableIds_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        NatGateway() = default ;
        NatGateway(const NatGateway &) = default ;
        NatGateway(NatGateway &&) = default ;
        NatGateway(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NatGateway() = default ;
        NatGateway& operator=(const NatGateway &) = default ;
        NatGateway& operator=(NatGateway &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
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
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
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
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The tag key of the instance.
            shared_ptr<string> tagKey_ {};
            // The tag value of the instance.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class SnatTableIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SnatTableIds& obj) { 
            DARABONBA_PTR_TO_JSON(SnatTableId, snatTableId_);
          };
          friend void from_json(const Darabonba::Json& j, SnatTableIds& obj) { 
            DARABONBA_PTR_FROM_JSON(SnatTableId, snatTableId_);
          };
          SnatTableIds() = default ;
          SnatTableIds(const SnatTableIds &) = default ;
          SnatTableIds(SnatTableIds &&) = default ;
          SnatTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SnatTableIds() = default ;
          SnatTableIds& operator=(const SnatTableIds &) = default ;
          SnatTableIds& operator=(SnatTableIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->snatTableId_ == nullptr; };
          // snatTableId Field Functions 
          bool hasSnatTableId() const { return this->snatTableId_ != nullptr;};
          void deleteSnatTableId() { this->snatTableId_ = nullptr;};
          inline const vector<string> & getSnatTableId() const { DARABONBA_PTR_GET_CONST(snatTableId_, vector<string>) };
          inline vector<string> getSnatTableId() { DARABONBA_PTR_GET(snatTableId_, vector<string>) };
          inline SnatTableIds& setSnatTableId(const vector<string> & snatTableId) { DARABONBA_PTR_SET_VALUE(snatTableId_, snatTableId) };
          inline SnatTableIds& setSnatTableId(vector<string> && snatTableId) { DARABONBA_PTR_SET_RVALUE(snatTableId_, snatTableId) };


        protected:
          shared_ptr<vector<string>> snatTableId_ {};
        };

        class NatGatewayPrivateInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NatGatewayPrivateInfo& obj) { 
            DARABONBA_PTR_TO_JSON(EniInstanceId, eniInstanceId_);
            DARABONBA_PTR_TO_JSON(EniType, eniType_);
            DARABONBA_PTR_TO_JSON(IzNo, izNo_);
            DARABONBA_PTR_TO_JSON(MaxBandwidth, maxBandwidth_);
            DARABONBA_PTR_TO_JSON(MaxSessionEstablishRate, maxSessionEstablishRate_);
            DARABONBA_PTR_TO_JSON(MaxSessionQuota, maxSessionQuota_);
            DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
            DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
          };
          friend void from_json(const Darabonba::Json& j, NatGatewayPrivateInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(EniInstanceId, eniInstanceId_);
            DARABONBA_PTR_FROM_JSON(EniType, eniType_);
            DARABONBA_PTR_FROM_JSON(IzNo, izNo_);
            DARABONBA_PTR_FROM_JSON(MaxBandwidth, maxBandwidth_);
            DARABONBA_PTR_FROM_JSON(MaxSessionEstablishRate, maxSessionEstablishRate_);
            DARABONBA_PTR_FROM_JSON(MaxSessionQuota, maxSessionQuota_);
            DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
            DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
          };
          NatGatewayPrivateInfo() = default ;
          NatGatewayPrivateInfo(const NatGatewayPrivateInfo &) = default ;
          NatGatewayPrivateInfo(NatGatewayPrivateInfo &&) = default ;
          NatGatewayPrivateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NatGatewayPrivateInfo() = default ;
          NatGatewayPrivateInfo& operator=(const NatGatewayPrivateInfo &) = default ;
          NatGatewayPrivateInfo& operator=(NatGatewayPrivateInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->eniInstanceId_ == nullptr
        && this->eniType_ == nullptr && this->izNo_ == nullptr && this->maxBandwidth_ == nullptr && this->maxSessionEstablishRate_ == nullptr && this->maxSessionQuota_ == nullptr
        && this->privateIpAddress_ == nullptr && this->vswitchId_ == nullptr; };
          // eniInstanceId Field Functions 
          bool hasEniInstanceId() const { return this->eniInstanceId_ != nullptr;};
          void deleteEniInstanceId() { this->eniInstanceId_ = nullptr;};
          inline string getEniInstanceId() const { DARABONBA_PTR_GET_DEFAULT(eniInstanceId_, "") };
          inline NatGatewayPrivateInfo& setEniInstanceId(string eniInstanceId) { DARABONBA_PTR_SET_VALUE(eniInstanceId_, eniInstanceId) };


          // eniType Field Functions 
          bool hasEniType() const { return this->eniType_ != nullptr;};
          void deleteEniType() { this->eniType_ = nullptr;};
          inline string getEniType() const { DARABONBA_PTR_GET_DEFAULT(eniType_, "") };
          inline NatGatewayPrivateInfo& setEniType(string eniType) { DARABONBA_PTR_SET_VALUE(eniType_, eniType) };


          // izNo Field Functions 
          bool hasIzNo() const { return this->izNo_ != nullptr;};
          void deleteIzNo() { this->izNo_ = nullptr;};
          inline string getIzNo() const { DARABONBA_PTR_GET_DEFAULT(izNo_, "") };
          inline NatGatewayPrivateInfo& setIzNo(string izNo) { DARABONBA_PTR_SET_VALUE(izNo_, izNo) };


          // maxBandwidth Field Functions 
          bool hasMaxBandwidth() const { return this->maxBandwidth_ != nullptr;};
          void deleteMaxBandwidth() { this->maxBandwidth_ = nullptr;};
          inline int32_t getMaxBandwidth() const { DARABONBA_PTR_GET_DEFAULT(maxBandwidth_, 0) };
          inline NatGatewayPrivateInfo& setMaxBandwidth(int32_t maxBandwidth) { DARABONBA_PTR_SET_VALUE(maxBandwidth_, maxBandwidth) };


          // maxSessionEstablishRate Field Functions 
          bool hasMaxSessionEstablishRate() const { return this->maxSessionEstablishRate_ != nullptr;};
          void deleteMaxSessionEstablishRate() { this->maxSessionEstablishRate_ = nullptr;};
          inline int32_t getMaxSessionEstablishRate() const { DARABONBA_PTR_GET_DEFAULT(maxSessionEstablishRate_, 0) };
          inline NatGatewayPrivateInfo& setMaxSessionEstablishRate(int32_t maxSessionEstablishRate) { DARABONBA_PTR_SET_VALUE(maxSessionEstablishRate_, maxSessionEstablishRate) };


          // maxSessionQuota Field Functions 
          bool hasMaxSessionQuota() const { return this->maxSessionQuota_ != nullptr;};
          void deleteMaxSessionQuota() { this->maxSessionQuota_ = nullptr;};
          inline int32_t getMaxSessionQuota() const { DARABONBA_PTR_GET_DEFAULT(maxSessionQuota_, 0) };
          inline NatGatewayPrivateInfo& setMaxSessionQuota(int32_t maxSessionQuota) { DARABONBA_PTR_SET_VALUE(maxSessionQuota_, maxSessionQuota) };


          // privateIpAddress Field Functions 
          bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
          void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
          inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
          inline NatGatewayPrivateInfo& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


          // vswitchId Field Functions 
          bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
          void deleteVswitchId() { this->vswitchId_ = nullptr;};
          inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
          inline NatGatewayPrivateInfo& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


        protected:
          // The ID of the elastic network interface (ENI).
          shared_ptr<string> eniInstanceId_ {};
          // The mode in which the ENI is associated with the NAT gateway.
          // 
          // *   **indirect**: non-cut-through mode
          // *   If an empty value is returned, it indicates that the cut-through mode is used.
          shared_ptr<string> eniType_ {};
          // The zone to which the NAT gateway belongs.
          shared_ptr<string> izNo_ {};
          // The maximum bandwidth. Unit: Mbit/s.
          shared_ptr<int32_t> maxBandwidth_ {};
          // The number of new connections to the NAT gateway. Unit: connections per second.
          shared_ptr<int32_t> maxSessionEstablishRate_ {};
          // The number of concurrent connections to the NAT gateway. Unit: connections.
          shared_ptr<int32_t> maxSessionQuota_ {};
          // The private IP address.
          shared_ptr<string> privateIpAddress_ {};
          // The ID of the vSwitch to which the NAT gateway belongs.
          shared_ptr<string> vswitchId_ {};
        };

        class IpPrefixList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IpPrefixList& obj) { 
            DARABONBA_PTR_TO_JSON(IpPrefixList, ipPrefixList_);
          };
          friend void from_json(const Darabonba::Json& j, IpPrefixList& obj) { 
            DARABONBA_PTR_FROM_JSON(IpPrefixList, ipPrefixList_);
          };
          IpPrefixList() = default ;
          IpPrefixList(const IpPrefixList &) = default ;
          IpPrefixList(IpPrefixList &&) = default ;
          IpPrefixList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IpPrefixList() = default ;
          IpPrefixList& operator=(const IpPrefixList &) = default ;
          IpPrefixList& operator=(IpPrefixList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class IpPrefixListItem : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const IpPrefixListItem& obj) { 
              DARABONBA_PTR_TO_JSON(IpPrefix, ipPrefix_);
            };
            friend void from_json(const Darabonba::Json& j, IpPrefixListItem& obj) { 
              DARABONBA_PTR_FROM_JSON(IpPrefix, ipPrefix_);
            };
            IpPrefixListItem() = default ;
            IpPrefixListItem(const IpPrefixListItem &) = default ;
            IpPrefixListItem(IpPrefixListItem &&) = default ;
            IpPrefixListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~IpPrefixListItem() = default ;
            IpPrefixListItem& operator=(const IpPrefixListItem &) = default ;
            IpPrefixListItem& operator=(IpPrefixListItem &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->ipPrefix_ == nullptr; };
            // ipPrefix Field Functions 
            bool hasIpPrefix() const { return this->ipPrefix_ != nullptr;};
            void deleteIpPrefix() { this->ipPrefix_ = nullptr;};
            inline string getIpPrefix() const { DARABONBA_PTR_GET_DEFAULT(ipPrefix_, "") };
            inline IpPrefixListItem& setIpPrefix(string ipPrefix) { DARABONBA_PTR_SET_VALUE(ipPrefix_, ipPrefix) };


          protected:
            // NAT IP prefix address range
            shared_ptr<string> ipPrefix_ {};
          };

          virtual bool empty() const override { return this->ipPrefixList_ == nullptr; };
          // ipPrefixList Field Functions 
          bool hasIpPrefixList() const { return this->ipPrefixList_ != nullptr;};
          void deleteIpPrefixList() { this->ipPrefixList_ = nullptr;};
          inline const vector<IpPrefixList::IpPrefixListItem> & getIpPrefixList() const { DARABONBA_PTR_GET_CONST(ipPrefixList_, vector<IpPrefixList::IpPrefixListItem>) };
          inline vector<IpPrefixList::IpPrefixListItem> getIpPrefixList() { DARABONBA_PTR_GET(ipPrefixList_, vector<IpPrefixList::IpPrefixListItem>) };
          inline IpPrefixList& setIpPrefixList(const vector<IpPrefixList::IpPrefixListItem> & ipPrefixList) { DARABONBA_PTR_SET_VALUE(ipPrefixList_, ipPrefixList) };
          inline IpPrefixList& setIpPrefixList(vector<IpPrefixList::IpPrefixListItem> && ipPrefixList) { DARABONBA_PTR_SET_RVALUE(ipPrefixList_, ipPrefixList) };


        protected:
          shared_ptr<vector<IpPrefixList::IpPrefixListItem>> ipPrefixList_ {};
        };

        class IpLists : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IpLists& obj) { 
            DARABONBA_PTR_TO_JSON(IpList, ipList_);
          };
          friend void from_json(const Darabonba::Json& j, IpLists& obj) { 
            DARABONBA_PTR_FROM_JSON(IpList, ipList_);
          };
          IpLists() = default ;
          IpLists(const IpLists &) = default ;
          IpLists(IpLists &&) = default ;
          IpLists(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IpLists() = default ;
          IpLists& operator=(const IpLists &) = default ;
          IpLists& operator=(IpLists &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class IpList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const IpList& obj) { 
              DARABONBA_PTR_TO_JSON(AllocationId, allocationId_);
              DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
              DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
              DARABONBA_PTR_TO_JSON(SnatEntryEnabled, snatEntryEnabled_);
              DARABONBA_PTR_TO_JSON(UsingStatus, usingStatus_);
            };
            friend void from_json(const Darabonba::Json& j, IpList& obj) { 
              DARABONBA_PTR_FROM_JSON(AllocationId, allocationId_);
              DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
              DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
              DARABONBA_PTR_FROM_JSON(SnatEntryEnabled, snatEntryEnabled_);
              DARABONBA_PTR_FROM_JSON(UsingStatus, usingStatus_);
            };
            IpList() = default ;
            IpList(const IpList &) = default ;
            IpList(IpList &&) = default ;
            IpList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~IpList() = default ;
            IpList& operator=(const IpList &) = default ;
            IpList& operator=(IpList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->allocationId_ == nullptr
        && this->ipAddress_ == nullptr && this->privateIpAddress_ == nullptr && this->snatEntryEnabled_ == nullptr && this->usingStatus_ == nullptr; };
            // allocationId Field Functions 
            bool hasAllocationId() const { return this->allocationId_ != nullptr;};
            void deleteAllocationId() { this->allocationId_ = nullptr;};
            inline string getAllocationId() const { DARABONBA_PTR_GET_DEFAULT(allocationId_, "") };
            inline IpList& setAllocationId(string allocationId) { DARABONBA_PTR_SET_VALUE(allocationId_, allocationId) };


            // ipAddress Field Functions 
            bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
            void deleteIpAddress() { this->ipAddress_ = nullptr;};
            inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
            inline IpList& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


            // privateIpAddress Field Functions 
            bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
            void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
            inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
            inline IpList& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


            // snatEntryEnabled Field Functions 
            bool hasSnatEntryEnabled() const { return this->snatEntryEnabled_ != nullptr;};
            void deleteSnatEntryEnabled() { this->snatEntryEnabled_ = nullptr;};
            inline bool getSnatEntryEnabled() const { DARABONBA_PTR_GET_DEFAULT(snatEntryEnabled_, false) };
            inline IpList& setSnatEntryEnabled(bool snatEntryEnabled) { DARABONBA_PTR_SET_VALUE(snatEntryEnabled_, snatEntryEnabled) };


            // usingStatus Field Functions 
            bool hasUsingStatus() const { return this->usingStatus_ != nullptr;};
            void deleteUsingStatus() { this->usingStatus_ = nullptr;};
            inline string getUsingStatus() const { DARABONBA_PTR_GET_DEFAULT(usingStatus_, "") };
            inline IpList& setUsingStatus(string usingStatus) { DARABONBA_PTR_SET_VALUE(usingStatus_, usingStatus) };


          protected:
            // The ID of the EIP associated with the NAT gateway.
            shared_ptr<string> allocationId_ {};
            // The IP address of the EIP associated with the NAT gateway.
            shared_ptr<string> ipAddress_ {};
            // The private IP address of the NAT gateway.
            shared_ptr<string> privateIpAddress_ {};
            // Indicates whether IP addresses that are used in DNAT entries can be specified in SNAT entries. Valid values:
            // 
            // *   **true**: yes
            // *   **false**: no
            shared_ptr<bool> snatEntryEnabled_ {};
            // The association between the EIP and the Internet NAT gateway. Valid values:
            // 
            // *   **UsedByForwardTable**: The EIP is specified in a DNAT entry.
            // *   **UsedBySnatTable**: The EIP is specified in an SNAT entry.
            // *   **UsedByForwardSnatTable**: The EIP is specified in both an SNAT entry and a DNAT entry.
            // *   **Idle**: The EIP is not specified in a DNAT or SNAT entry.
            shared_ptr<string> usingStatus_ {};
          };

          virtual bool empty() const override { return this->ipList_ == nullptr; };
          // ipList Field Functions 
          bool hasIpList() const { return this->ipList_ != nullptr;};
          void deleteIpList() { this->ipList_ = nullptr;};
          inline const vector<IpLists::IpList> & getIpList() const { DARABONBA_PTR_GET_CONST(ipList_, vector<IpLists::IpList>) };
          inline vector<IpLists::IpList> getIpList() { DARABONBA_PTR_GET(ipList_, vector<IpLists::IpList>) };
          inline IpLists& setIpList(const vector<IpLists::IpList> & ipList) { DARABONBA_PTR_SET_VALUE(ipList_, ipList) };
          inline IpLists& setIpList(vector<IpLists::IpList> && ipList) { DARABONBA_PTR_SET_RVALUE(ipList_, ipList) };


        protected:
          shared_ptr<vector<IpLists::IpList>> ipList_ {};
        };

        class FullNatTableIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FullNatTableIds& obj) { 
            DARABONBA_PTR_TO_JSON(FullNatTableId, fullNatTableId_);
          };
          friend void from_json(const Darabonba::Json& j, FullNatTableIds& obj) { 
            DARABONBA_PTR_FROM_JSON(FullNatTableId, fullNatTableId_);
          };
          FullNatTableIds() = default ;
          FullNatTableIds(const FullNatTableIds &) = default ;
          FullNatTableIds(FullNatTableIds &&) = default ;
          FullNatTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FullNatTableIds() = default ;
          FullNatTableIds& operator=(const FullNatTableIds &) = default ;
          FullNatTableIds& operator=(FullNatTableIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->fullNatTableId_ == nullptr; };
          // fullNatTableId Field Functions 
          bool hasFullNatTableId() const { return this->fullNatTableId_ != nullptr;};
          void deleteFullNatTableId() { this->fullNatTableId_ = nullptr;};
          inline const vector<string> & getFullNatTableId() const { DARABONBA_PTR_GET_CONST(fullNatTableId_, vector<string>) };
          inline vector<string> getFullNatTableId() { DARABONBA_PTR_GET(fullNatTableId_, vector<string>) };
          inline FullNatTableIds& setFullNatTableId(const vector<string> & fullNatTableId) { DARABONBA_PTR_SET_VALUE(fullNatTableId_, fullNatTableId) };
          inline FullNatTableIds& setFullNatTableId(vector<string> && fullNatTableId) { DARABONBA_PTR_SET_RVALUE(fullNatTableId_, fullNatTableId) };


        protected:
          shared_ptr<vector<string>> fullNatTableId_ {};
        };

        class ForwardTableIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ForwardTableIds& obj) { 
            DARABONBA_PTR_TO_JSON(ForwardTableId, forwardTableId_);
          };
          friend void from_json(const Darabonba::Json& j, ForwardTableIds& obj) { 
            DARABONBA_PTR_FROM_JSON(ForwardTableId, forwardTableId_);
          };
          ForwardTableIds() = default ;
          ForwardTableIds(const ForwardTableIds &) = default ;
          ForwardTableIds(ForwardTableIds &&) = default ;
          ForwardTableIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ForwardTableIds() = default ;
          ForwardTableIds& operator=(const ForwardTableIds &) = default ;
          ForwardTableIds& operator=(ForwardTableIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->forwardTableId_ == nullptr; };
          // forwardTableId Field Functions 
          bool hasForwardTableId() const { return this->forwardTableId_ != nullptr;};
          void deleteForwardTableId() { this->forwardTableId_ = nullptr;};
          inline const vector<string> & getForwardTableId() const { DARABONBA_PTR_GET_CONST(forwardTableId_, vector<string>) };
          inline vector<string> getForwardTableId() { DARABONBA_PTR_GET(forwardTableId_, vector<string>) };
          inline ForwardTableIds& setForwardTableId(const vector<string> & forwardTableId) { DARABONBA_PTR_SET_VALUE(forwardTableId_, forwardTableId) };
          inline ForwardTableIds& setForwardTableId(vector<string> && forwardTableId) { DARABONBA_PTR_SET_RVALUE(forwardTableId_, forwardTableId) };


        protected:
          shared_ptr<vector<string>> forwardTableId_ {};
        };

        class AccessMode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccessMode& obj) { 
            DARABONBA_PTR_TO_JSON(ModeValue, modeValue_);
            DARABONBA_PTR_TO_JSON(TunnelType, tunnelType_);
          };
          friend void from_json(const Darabonba::Json& j, AccessMode& obj) { 
            DARABONBA_PTR_FROM_JSON(ModeValue, modeValue_);
            DARABONBA_PTR_FROM_JSON(TunnelType, tunnelType_);
          };
          AccessMode() = default ;
          AccessMode(const AccessMode &) = default ;
          AccessMode(AccessMode &&) = default ;
          AccessMode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccessMode() = default ;
          AccessMode& operator=(const AccessMode &) = default ;
          AccessMode& operator=(AccessMode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->modeValue_ == nullptr
        && this->tunnelType_ == nullptr; };
          // modeValue Field Functions 
          bool hasModeValue() const { return this->modeValue_ != nullptr;};
          void deleteModeValue() { this->modeValue_ = nullptr;};
          inline string getModeValue() const { DARABONBA_PTR_GET_DEFAULT(modeValue_, "") };
          inline AccessMode& setModeValue(string modeValue) { DARABONBA_PTR_SET_VALUE(modeValue_, modeValue) };


          // tunnelType Field Functions 
          bool hasTunnelType() const { return this->tunnelType_ != nullptr;};
          void deleteTunnelType() { this->tunnelType_ = nullptr;};
          inline string getTunnelType() const { DARABONBA_PTR_GET_DEFAULT(tunnelType_, "") };
          inline AccessMode& setTunnelType(string tunnelType) { DARABONBA_PTR_SET_VALUE(tunnelType_, tunnelType) };


        protected:
          // Access mode, with values:
          // - **route**: Route mode.
          // - **tunnel**: Tunnel mode.
          shared_ptr<string> modeValue_ {};
          // Tunnel mode type:
          // - **geneve**: Geneve type.
          shared_ptr<string> tunnelType_ {};
        };

        virtual bool empty() const override { return this->accessMode_ == nullptr
        && this->autoPay_ == nullptr && this->businessStatus_ == nullptr && this->creationTime_ == nullptr && this->deletionProtection_ == nullptr && this->description_ == nullptr
        && this->ecsMetricEnabled_ == nullptr && this->eipBindMode_ == nullptr && this->enableSessionLog_ == nullptr && this->expiredTime_ == nullptr && this->forwardTableIds_ == nullptr
        && this->fullNatTableIds_ == nullptr && this->icmpReplyEnabled_ == nullptr && this->instanceChargeType_ == nullptr && this->internetChargeType_ == nullptr && this->ipLists_ == nullptr
        && this->ipPrefixList_ == nullptr && this->name_ == nullptr && this->natGatewayId_ == nullptr && this->natGatewayPrivateInfo_ == nullptr && this->natType_ == nullptr
        && this->networkType_ == nullptr && this->privateLinkEnabled_ == nullptr && this->privateLinkMode_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->securityProtectionEnabled_ == nullptr && this->snatTableIds_ == nullptr && this->spec_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->vpcId_ == nullptr; };
        // accessMode Field Functions 
        bool hasAccessMode() const { return this->accessMode_ != nullptr;};
        void deleteAccessMode() { this->accessMode_ = nullptr;};
        inline const NatGateway::AccessMode & getAccessMode() const { DARABONBA_PTR_GET_CONST(accessMode_, NatGateway::AccessMode) };
        inline NatGateway::AccessMode getAccessMode() { DARABONBA_PTR_GET(accessMode_, NatGateway::AccessMode) };
        inline NatGateway& setAccessMode(const NatGateway::AccessMode & accessMode) { DARABONBA_PTR_SET_VALUE(accessMode_, accessMode) };
        inline NatGateway& setAccessMode(NatGateway::AccessMode && accessMode) { DARABONBA_PTR_SET_RVALUE(accessMode_, accessMode) };


        // autoPay Field Functions 
        bool hasAutoPay() const { return this->autoPay_ != nullptr;};
        void deleteAutoPay() { this->autoPay_ = nullptr;};
        inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
        inline NatGateway& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


        // businessStatus Field Functions 
        bool hasBusinessStatus() const { return this->businessStatus_ != nullptr;};
        void deleteBusinessStatus() { this->businessStatus_ = nullptr;};
        inline string getBusinessStatus() const { DARABONBA_PTR_GET_DEFAULT(businessStatus_, "") };
        inline NatGateway& setBusinessStatus(string businessStatus) { DARABONBA_PTR_SET_VALUE(businessStatus_, businessStatus) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline NatGateway& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // deletionProtection Field Functions 
        bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
        void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
        inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
        inline NatGateway& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline NatGateway& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // ecsMetricEnabled Field Functions 
        bool hasEcsMetricEnabled() const { return this->ecsMetricEnabled_ != nullptr;};
        void deleteEcsMetricEnabled() { this->ecsMetricEnabled_ = nullptr;};
        inline bool getEcsMetricEnabled() const { DARABONBA_PTR_GET_DEFAULT(ecsMetricEnabled_, false) };
        inline NatGateway& setEcsMetricEnabled(bool ecsMetricEnabled) { DARABONBA_PTR_SET_VALUE(ecsMetricEnabled_, ecsMetricEnabled) };


        // eipBindMode Field Functions 
        bool hasEipBindMode() const { return this->eipBindMode_ != nullptr;};
        void deleteEipBindMode() { this->eipBindMode_ = nullptr;};
        inline string getEipBindMode() const { DARABONBA_PTR_GET_DEFAULT(eipBindMode_, "") };
        inline NatGateway& setEipBindMode(string eipBindMode) { DARABONBA_PTR_SET_VALUE(eipBindMode_, eipBindMode) };


        // enableSessionLog Field Functions 
        bool hasEnableSessionLog() const { return this->enableSessionLog_ != nullptr;};
        void deleteEnableSessionLog() { this->enableSessionLog_ = nullptr;};
        inline string getEnableSessionLog() const { DARABONBA_PTR_GET_DEFAULT(enableSessionLog_, "") };
        inline NatGateway& setEnableSessionLog(string enableSessionLog) { DARABONBA_PTR_SET_VALUE(enableSessionLog_, enableSessionLog) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
        inline NatGateway& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // forwardTableIds Field Functions 
        bool hasForwardTableIds() const { return this->forwardTableIds_ != nullptr;};
        void deleteForwardTableIds() { this->forwardTableIds_ = nullptr;};
        inline const NatGateway::ForwardTableIds & getForwardTableIds() const { DARABONBA_PTR_GET_CONST(forwardTableIds_, NatGateway::ForwardTableIds) };
        inline NatGateway::ForwardTableIds getForwardTableIds() { DARABONBA_PTR_GET(forwardTableIds_, NatGateway::ForwardTableIds) };
        inline NatGateway& setForwardTableIds(const NatGateway::ForwardTableIds & forwardTableIds) { DARABONBA_PTR_SET_VALUE(forwardTableIds_, forwardTableIds) };
        inline NatGateway& setForwardTableIds(NatGateway::ForwardTableIds && forwardTableIds) { DARABONBA_PTR_SET_RVALUE(forwardTableIds_, forwardTableIds) };


        // fullNatTableIds Field Functions 
        bool hasFullNatTableIds() const { return this->fullNatTableIds_ != nullptr;};
        void deleteFullNatTableIds() { this->fullNatTableIds_ = nullptr;};
        inline const NatGateway::FullNatTableIds & getFullNatTableIds() const { DARABONBA_PTR_GET_CONST(fullNatTableIds_, NatGateway::FullNatTableIds) };
        inline NatGateway::FullNatTableIds getFullNatTableIds() { DARABONBA_PTR_GET(fullNatTableIds_, NatGateway::FullNatTableIds) };
        inline NatGateway& setFullNatTableIds(const NatGateway::FullNatTableIds & fullNatTableIds) { DARABONBA_PTR_SET_VALUE(fullNatTableIds_, fullNatTableIds) };
        inline NatGateway& setFullNatTableIds(NatGateway::FullNatTableIds && fullNatTableIds) { DARABONBA_PTR_SET_RVALUE(fullNatTableIds_, fullNatTableIds) };


        // icmpReplyEnabled Field Functions 
        bool hasIcmpReplyEnabled() const { return this->icmpReplyEnabled_ != nullptr;};
        void deleteIcmpReplyEnabled() { this->icmpReplyEnabled_ = nullptr;};
        inline bool getIcmpReplyEnabled() const { DARABONBA_PTR_GET_DEFAULT(icmpReplyEnabled_, false) };
        inline NatGateway& setIcmpReplyEnabled(bool icmpReplyEnabled) { DARABONBA_PTR_SET_VALUE(icmpReplyEnabled_, icmpReplyEnabled) };


        // instanceChargeType Field Functions 
        bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
        void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
        inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
        inline NatGateway& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


        // internetChargeType Field Functions 
        bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
        void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
        inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
        inline NatGateway& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


        // ipLists Field Functions 
        bool hasIpLists() const { return this->ipLists_ != nullptr;};
        void deleteIpLists() { this->ipLists_ = nullptr;};
        inline const NatGateway::IpLists & getIpLists() const { DARABONBA_PTR_GET_CONST(ipLists_, NatGateway::IpLists) };
        inline NatGateway::IpLists getIpLists() { DARABONBA_PTR_GET(ipLists_, NatGateway::IpLists) };
        inline NatGateway& setIpLists(const NatGateway::IpLists & ipLists) { DARABONBA_PTR_SET_VALUE(ipLists_, ipLists) };
        inline NatGateway& setIpLists(NatGateway::IpLists && ipLists) { DARABONBA_PTR_SET_RVALUE(ipLists_, ipLists) };


        // ipPrefixList Field Functions 
        bool hasIpPrefixList() const { return this->ipPrefixList_ != nullptr;};
        void deleteIpPrefixList() { this->ipPrefixList_ = nullptr;};
        inline const NatGateway::IpPrefixList & getIpPrefixList() const { DARABONBA_PTR_GET_CONST(ipPrefixList_, NatGateway::IpPrefixList) };
        inline NatGateway::IpPrefixList getIpPrefixList() { DARABONBA_PTR_GET(ipPrefixList_, NatGateway::IpPrefixList) };
        inline NatGateway& setIpPrefixList(const NatGateway::IpPrefixList & ipPrefixList) { DARABONBA_PTR_SET_VALUE(ipPrefixList_, ipPrefixList) };
        inline NatGateway& setIpPrefixList(NatGateway::IpPrefixList && ipPrefixList) { DARABONBA_PTR_SET_RVALUE(ipPrefixList_, ipPrefixList) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline NatGateway& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // natGatewayId Field Functions 
        bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
        void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
        inline string getNatGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
        inline NatGateway& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


        // natGatewayPrivateInfo Field Functions 
        bool hasNatGatewayPrivateInfo() const { return this->natGatewayPrivateInfo_ != nullptr;};
        void deleteNatGatewayPrivateInfo() { this->natGatewayPrivateInfo_ = nullptr;};
        inline const NatGateway::NatGatewayPrivateInfo & getNatGatewayPrivateInfo() const { DARABONBA_PTR_GET_CONST(natGatewayPrivateInfo_, NatGateway::NatGatewayPrivateInfo) };
        inline NatGateway::NatGatewayPrivateInfo getNatGatewayPrivateInfo() { DARABONBA_PTR_GET(natGatewayPrivateInfo_, NatGateway::NatGatewayPrivateInfo) };
        inline NatGateway& setNatGatewayPrivateInfo(const NatGateway::NatGatewayPrivateInfo & natGatewayPrivateInfo) { DARABONBA_PTR_SET_VALUE(natGatewayPrivateInfo_, natGatewayPrivateInfo) };
        inline NatGateway& setNatGatewayPrivateInfo(NatGateway::NatGatewayPrivateInfo && natGatewayPrivateInfo) { DARABONBA_PTR_SET_RVALUE(natGatewayPrivateInfo_, natGatewayPrivateInfo) };


        // natType Field Functions 
        bool hasNatType() const { return this->natType_ != nullptr;};
        void deleteNatType() { this->natType_ = nullptr;};
        inline string getNatType() const { DARABONBA_PTR_GET_DEFAULT(natType_, "") };
        inline NatGateway& setNatType(string natType) { DARABONBA_PTR_SET_VALUE(natType_, natType) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline NatGateway& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // privateLinkEnabled Field Functions 
        bool hasPrivateLinkEnabled() const { return this->privateLinkEnabled_ != nullptr;};
        void deletePrivateLinkEnabled() { this->privateLinkEnabled_ = nullptr;};
        inline bool getPrivateLinkEnabled() const { DARABONBA_PTR_GET_DEFAULT(privateLinkEnabled_, false) };
        inline NatGateway& setPrivateLinkEnabled(bool privateLinkEnabled) { DARABONBA_PTR_SET_VALUE(privateLinkEnabled_, privateLinkEnabled) };


        // privateLinkMode Field Functions 
        bool hasPrivateLinkMode() const { return this->privateLinkMode_ != nullptr;};
        void deletePrivateLinkMode() { this->privateLinkMode_ = nullptr;};
        inline string getPrivateLinkMode() const { DARABONBA_PTR_GET_DEFAULT(privateLinkMode_, "") };
        inline NatGateway& setPrivateLinkMode(string privateLinkMode) { DARABONBA_PTR_SET_VALUE(privateLinkMode_, privateLinkMode) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline NatGateway& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline NatGateway& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // securityProtectionEnabled Field Functions 
        bool hasSecurityProtectionEnabled() const { return this->securityProtectionEnabled_ != nullptr;};
        void deleteSecurityProtectionEnabled() { this->securityProtectionEnabled_ = nullptr;};
        inline bool getSecurityProtectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(securityProtectionEnabled_, false) };
        inline NatGateway& setSecurityProtectionEnabled(bool securityProtectionEnabled) { DARABONBA_PTR_SET_VALUE(securityProtectionEnabled_, securityProtectionEnabled) };


        // snatTableIds Field Functions 
        bool hasSnatTableIds() const { return this->snatTableIds_ != nullptr;};
        void deleteSnatTableIds() { this->snatTableIds_ = nullptr;};
        inline const NatGateway::SnatTableIds & getSnatTableIds() const { DARABONBA_PTR_GET_CONST(snatTableIds_, NatGateway::SnatTableIds) };
        inline NatGateway::SnatTableIds getSnatTableIds() { DARABONBA_PTR_GET(snatTableIds_, NatGateway::SnatTableIds) };
        inline NatGateway& setSnatTableIds(const NatGateway::SnatTableIds & snatTableIds) { DARABONBA_PTR_SET_VALUE(snatTableIds_, snatTableIds) };
        inline NatGateway& setSnatTableIds(NatGateway::SnatTableIds && snatTableIds) { DARABONBA_PTR_SET_RVALUE(snatTableIds_, snatTableIds) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline NatGateway& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline NatGateway& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const NatGateway::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, NatGateway::Tags) };
        inline NatGateway::Tags getTags() { DARABONBA_PTR_GET(tags_, NatGateway::Tags) };
        inline NatGateway& setTags(const NatGateway::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline NatGateway& setTags(NatGateway::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline NatGateway& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // Access mode for reverse access to VPC NAT gateway.
        shared_ptr<NatGateway::AccessMode> accessMode_ {};
        // Indicates whether automatic payment is enabled. Valid values:
        // 
        // *   **false**: no
        // *   **true**: yes
        shared_ptr<bool> autoPay_ {};
        // The status of the NAT gateway. Valid values:
        // 
        // *   **Normal**: normal
        // *   **FinancialLocked**: locked due to overdue payments
        shared_ptr<string> businessStatus_ {};
        // The time when the NAT gateway was created.
        shared_ptr<string> creationTime_ {};
        // Indicates whether the deletion protection feature is enabled. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> deletionProtection_ {};
        // The description of the NAT gateway.
        shared_ptr<string> description_ {};
        // Indicates whether the traffic monitoring feature is enabled. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> ecsMetricEnabled_ {};
        // The mode in which the NAT gateway is associated with an elastic IP address (EIP). Valid values:
        // 
        // *   **MULTI_BINDED**: multi-EIP-to-ENI mode
        // *   **NAT**: NAT mode, which is compatible with IPv4 addresses.
        // 
        // >  Note: If you use the NAT mode, the EIP occupies one private IP address on the vSwitch of the NAT gateway. Make sure that the vSwitch has sufficient private IP addresses. Otherwise, the NAT gateway fails to be associated with the EIP. In NAT mode, you can associate a NAT gateway with up to 50 EIPs.
        shared_ptr<string> eipBindMode_ {};
        // Whether to enable session logging, with values:
        // - **true**: Session logging is enabled. 
        // - **false**: Session logging is disabled.
        shared_ptr<string> enableSessionLog_ {};
        // The time when the NAT gateway expires.
        shared_ptr<string> expiredTime_ {};
        // The ID of the DNAT table.
        shared_ptr<NatGateway::ForwardTableIds> forwardTableIds_ {};
        // The ID of the FULLNAT table.
        shared_ptr<NatGateway::FullNatTableIds> fullNatTableIds_ {};
        // Indicates whether the ICMP non-retrieval feature is enabled. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> icmpReplyEnabled_ {};
        // The billing method of the NAT gateway. The value is set to **PostPaid**, which indicates the pay-as-you-go billing method.
        shared_ptr<string> instanceChargeType_ {};
        // The metering method of the NAT gateway. Valid values:
        // 
        // *   **PayBySpec**: pay-by-specification
        // *   **PayByLcu**: pay-by-CU
        shared_ptr<string> internetChargeType_ {};
        // The list of elastic IP addresses (EIPs) that are associated with the Internet NAT gateway.
        shared_ptr<NatGateway::IpLists> ipLists_ {};
        // List of NAT IP prefix address segments.
        shared_ptr<NatGateway::IpPrefixList> ipPrefixList_ {};
        // The name of the NAT gateway.
        shared_ptr<string> name_ {};
        // The ID of the NAT gateway.
        shared_ptr<string> natGatewayId_ {};
        // The private network information about the enhanced Internet NAT gateway.
        // 
        // >  If **NatType** is set to **Normal**, all parameters returned in this list are empty.
        shared_ptr<NatGateway::NatGatewayPrivateInfo> natGatewayPrivateInfo_ {};
        // The type of the NAT gateway. The value is set to **Enhanced** (enhanced NAT gateway).
        shared_ptr<string> natType_ {};
        // The type of NAT gateway. Valid values:
        // 
        // *   **internet**: an Internet NAT gateway
        // *   **intranet**: a VPC NAT gateway
        shared_ptr<string> networkType_ {};
        // Indicates whether the NAT gateway supports PrivateLink. Valid values:
        // 
        // *   **true**: yes
        // *   **false**: no
        shared_ptr<bool> privateLinkEnabled_ {};
        // The mode that is used by PrivateLink. Valid values:
        // 
        // *   **FullNat**: the FULLNAT mode
        // *   **Geneve**: the GENEVE mode
        shared_ptr<string> privateLinkMode_ {};
        // The ID of the region where the NAT gateway is deployed.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group to which the contiguous EIP group belongs.
        shared_ptr<string> resourceGroupId_ {};
        // Indicates whether the firewall feature is enabled. Valid values:
        // 
        // *   **false**: no
        // *   **true**: yes
        shared_ptr<bool> securityProtectionEnabled_ {};
        // The ID of the SNAT table of the NAT gateway.
        shared_ptr<NatGateway::SnatTableIds> snatTableIds_ {};
        // The size of the NAT gateway. An empty value is returned for the parameter.
        // 
        // If **InternetChargeType** is set to **PayByLcu**, an empty value is returned.
        shared_ptr<string> spec_ {};
        // The status of the NAT gateway. Valid values:
        // 
        // *   **Creating**: After you send a request to create a NAT gateway, the system creates the NAT gateway in the background. The NAT gateway remains in the Creating state until the operation is completed.
        // *   **Available**: The NAT gateway remains in a stable state after the NAT gateway is created.
        // *   **Modifying**: After you send a request to modify a NAT gateway, the system modifies the NAT gateway in the background. The NAT gateway remains in the Modifying state until the operation is completed.
        // *   **Deleting**: After you send a request to delete a NAT gateway, the system deletes the NAT gateway in the background. The NAT gateway remains in the Deleting state until the operation is completed.
        // *   **Converting**: After you send a request to upgrade a standard NAT gateway to an enhanced NAT gateway, the system upgrades the NAT gateway in the background. The NAT gateway remains in the Converting state until the operation is completed.
        shared_ptr<string> status_ {};
        // The tags that are added to the resource group.
        shared_ptr<NatGateway::Tags> tags_ {};
        // The ID of the VPC where the NAT gateway is deployed.
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->natGateway_ == nullptr; };
      // natGateway Field Functions 
      bool hasNatGateway() const { return this->natGateway_ != nullptr;};
      void deleteNatGateway() { this->natGateway_ = nullptr;};
      inline const vector<NatGateways::NatGateway> & getNatGateway() const { DARABONBA_PTR_GET_CONST(natGateway_, vector<NatGateways::NatGateway>) };
      inline vector<NatGateways::NatGateway> getNatGateway() { DARABONBA_PTR_GET(natGateway_, vector<NatGateways::NatGateway>) };
      inline NatGateways& setNatGateway(const vector<NatGateways::NatGateway> & natGateway) { DARABONBA_PTR_SET_VALUE(natGateway_, natGateway) };
      inline NatGateways& setNatGateway(vector<NatGateways::NatGateway> && natGateway) { DARABONBA_PTR_SET_RVALUE(natGateway_, natGateway) };


    protected:
      shared_ptr<vector<NatGateways::NatGateway>> natGateway_ {};
    };

    virtual bool empty() const override { return this->natGateways_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // natGateways Field Functions 
    bool hasNatGateways() const { return this->natGateways_ != nullptr;};
    void deleteNatGateways() { this->natGateways_ = nullptr;};
    inline const DescribeNatGatewaysResponseBody::NatGateways & getNatGateways() const { DARABONBA_PTR_GET_CONST(natGateways_, DescribeNatGatewaysResponseBody::NatGateways) };
    inline DescribeNatGatewaysResponseBody::NatGateways getNatGateways() { DARABONBA_PTR_GET(natGateways_, DescribeNatGatewaysResponseBody::NatGateways) };
    inline DescribeNatGatewaysResponseBody& setNatGateways(const DescribeNatGatewaysResponseBody::NatGateways & natGateways) { DARABONBA_PTR_SET_VALUE(natGateways_, natGateways) };
    inline DescribeNatGatewaysResponseBody& setNatGateways(DescribeNatGatewaysResponseBody::NatGateways && natGateways) { DARABONBA_PTR_SET_RVALUE(natGateways_, natGateways) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeNatGatewaysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeNatGatewaysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatGatewaysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNatGatewaysResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details about the NAT gateway.
    shared_ptr<DescribeNatGatewaysResponseBody::NatGateways> natGateways_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of NAT gateway entries that are returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
