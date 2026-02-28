// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETELASTICNETWORKINTERFACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETELASTICNETWORKINTERFACERESPONSEBODY_HPP_
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
  class GetElasticNetworkInterfaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetElasticNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetElasticNetworkInterfaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetElasticNetworkInterfaceResponseBody() = default ;
    GetElasticNetworkInterfaceResponseBody(const GetElasticNetworkInterfaceResponseBody &) = default ;
    GetElasticNetworkInterfaceResponseBody(GetElasticNetworkInterfaceResponseBody &&) = default ;
    GetElasticNetworkInterfaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetElasticNetworkInterfaceResponseBody() = default ;
    GetElasticNetworkInterfaceResponseBody& operator=(const GetElasticNetworkInterfaceResponseBody &) = default ;
    GetElasticNetworkInterfaceResponseBody& operator=(GetElasticNetworkInterfaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
        DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
        DARABONBA_PTR_TO_JSON(Gateway, gateway_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Ipv6Addresses, ipv6Addresses_);
        DARABONBA_PTR_TO_JSON(Mac, mac_);
        DARABONBA_PTR_TO_JSON(Mask, mask_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(PrivateIpAddresses, privateIpAddresses_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
        DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Ipv6Addresses, ipv6Addresses_);
        DARABONBA_PTR_FROM_JSON(Mac, mac_);
        DARABONBA_PTR_FROM_JSON(Mask, mask_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(PrivateIpAddresses, privateIpAddresses_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
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
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      class PrivateIpAddresses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateIpAddresses& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(IpName, ipName_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateIpAddresses& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(IpName, ipName_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        PrivateIpAddresses() = default ;
        PrivateIpAddresses(const PrivateIpAddresses &) = default ;
        PrivateIpAddresses(PrivateIpAddresses &&) = default ;
        PrivateIpAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateIpAddresses() = default ;
        PrivateIpAddresses& operator=(const PrivateIpAddresses &) = default ;
        PrivateIpAddresses& operator=(PrivateIpAddresses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->elasticNetworkInterfaceId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->ipName_ == nullptr && this->message_ == nullptr
        && this->privateIpAddress_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline PrivateIpAddresses& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // elasticNetworkInterfaceId Field Functions 
        bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
        void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
        inline string getElasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
        inline PrivateIpAddresses& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline PrivateIpAddresses& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline PrivateIpAddresses& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // ipName Field Functions 
        bool hasIpName() const { return this->ipName_ != nullptr;};
        void deleteIpName() { this->ipName_ = nullptr;};
        inline string getIpName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
        inline PrivateIpAddresses& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline PrivateIpAddresses& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
        inline PrivateIpAddresses& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline PrivateIpAddresses& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline PrivateIpAddresses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The instance description.
        shared_ptr<string> description_ {};
        // Lingjun Elastic Network Interface ID
        shared_ptr<string> elasticNetworkInterfaceId_ {};
        // The time when the data address was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the cluster was updated.
        shared_ptr<string> gmtModified_ {};
        // Lingjun Elastic Network Interface Secondary Private IP Unique Identifier
        shared_ptr<string> ipName_ {};
        // The returned message.
        shared_ptr<string> message_ {};
        // Lingjun Elastic Network Interface secondary private IP address
        shared_ptr<string> privateIpAddress_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The status of the intervention entry. Valid value:
        shared_ptr<string> status_ {};
      };

      class Ipv6Addresses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6Addresses& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(IpName, ipName_);
          DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6Addresses& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(ElasticNetworkInterfaceId, elasticNetworkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(IpName, ipName_);
          DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Ipv6Addresses() = default ;
        Ipv6Addresses(const Ipv6Addresses &) = default ;
        Ipv6Addresses(Ipv6Addresses &&) = default ;
        Ipv6Addresses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6Addresses() = default ;
        Ipv6Addresses& operator=(const Ipv6Addresses &) = default ;
        Ipv6Addresses& operator=(Ipv6Addresses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->elasticNetworkInterfaceId_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->ipName_ == nullptr && this->ipv6Address_ == nullptr
        && this->message_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Ipv6Addresses& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // elasticNetworkInterfaceId Field Functions 
        bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
        void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
        inline string getElasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
        inline Ipv6Addresses& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Ipv6Addresses& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Ipv6Addresses& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // ipName Field Functions 
        bool hasIpName() const { return this->ipName_ != nullptr;};
        void deleteIpName() { this->ipName_ = nullptr;};
        inline string getIpName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
        inline Ipv6Addresses& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


        // ipv6Address Field Functions 
        bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
        void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
        inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
        inline Ipv6Addresses& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Ipv6Addresses& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Ipv6Addresses& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Ipv6Addresses& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The instance description.
        shared_ptr<string> description_ {};
        // Lingjun Elastic Network Interface ID
        shared_ptr<string> elasticNetworkInterfaceId_ {};
        // The time when the data address was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the cluster was updated.
        shared_ptr<string> gmtModified_ {};
        // IPV6 unique identifier
        shared_ptr<string> ipName_ {};
        // IPV6 address
        shared_ptr<string> ipv6Address_ {};
        // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
        shared_ptr<string> message_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The status of the intervention entry. Valid value:
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->elasticNetworkInterfaceId_ == nullptr && this->enableJumboFrame_ == nullptr && this->gateway_ == nullptr && this->gmtModified_ == nullptr
        && this->ip_ == nullptr && this->ipv6Addresses_ == nullptr && this->mac_ == nullptr && this->mask_ == nullptr && this->message_ == nullptr
        && this->nodeId_ == nullptr && this->privateIpAddresses_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupId_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr
        && this->zoneId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Content& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Content& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // elasticNetworkInterfaceId Field Functions 
      bool hasElasticNetworkInterfaceId() const { return this->elasticNetworkInterfaceId_ != nullptr;};
      void deleteElasticNetworkInterfaceId() { this->elasticNetworkInterfaceId_ = nullptr;};
      inline string getElasticNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(elasticNetworkInterfaceId_, "") };
      inline Content& setElasticNetworkInterfaceId(string elasticNetworkInterfaceId) { DARABONBA_PTR_SET_VALUE(elasticNetworkInterfaceId_, elasticNetworkInterfaceId) };


      // enableJumboFrame Field Functions 
      bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
      void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
      inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
      inline Content& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


      // gateway Field Functions 
      bool hasGateway() const { return this->gateway_ != nullptr;};
      void deleteGateway() { this->gateway_ = nullptr;};
      inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
      inline Content& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Content& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Content& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // ipv6Addresses Field Functions 
      bool hasIpv6Addresses() const { return this->ipv6Addresses_ != nullptr;};
      void deleteIpv6Addresses() { this->ipv6Addresses_ = nullptr;};
      inline const vector<Content::Ipv6Addresses> & getIpv6Addresses() const { DARABONBA_PTR_GET_CONST(ipv6Addresses_, vector<Content::Ipv6Addresses>) };
      inline vector<Content::Ipv6Addresses> getIpv6Addresses() { DARABONBA_PTR_GET(ipv6Addresses_, vector<Content::Ipv6Addresses>) };
      inline Content& setIpv6Addresses(const vector<Content::Ipv6Addresses> & ipv6Addresses) { DARABONBA_PTR_SET_VALUE(ipv6Addresses_, ipv6Addresses) };
      inline Content& setIpv6Addresses(vector<Content::Ipv6Addresses> && ipv6Addresses) { DARABONBA_PTR_SET_RVALUE(ipv6Addresses_, ipv6Addresses) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline Content& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // mask Field Functions 
      bool hasMask() const { return this->mask_ != nullptr;};
      void deleteMask() { this->mask_ = nullptr;};
      inline string getMask() const { DARABONBA_PTR_GET_DEFAULT(mask_, "") };
      inline Content& setMask(string mask) { DARABONBA_PTR_SET_VALUE(mask_, mask) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Content& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Content& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // privateIpAddresses Field Functions 
      bool hasPrivateIpAddresses() const { return this->privateIpAddresses_ != nullptr;};
      void deletePrivateIpAddresses() { this->privateIpAddresses_ = nullptr;};
      inline const vector<Content::PrivateIpAddresses> & getPrivateIpAddresses() const { DARABONBA_PTR_GET_CONST(privateIpAddresses_, vector<Content::PrivateIpAddresses>) };
      inline vector<Content::PrivateIpAddresses> getPrivateIpAddresses() { DARABONBA_PTR_GET(privateIpAddresses_, vector<Content::PrivateIpAddresses>) };
      inline Content& setPrivateIpAddresses(const vector<Content::PrivateIpAddresses> & privateIpAddresses) { DARABONBA_PTR_SET_VALUE(privateIpAddresses_, privateIpAddresses) };
      inline Content& setPrivateIpAddresses(vector<Content::PrivateIpAddresses> && privateIpAddresses) { DARABONBA_PTR_SET_RVALUE(privateIpAddresses_, privateIpAddresses) };


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


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline Content& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


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


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Content& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Content& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Content& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The time when the data address was created.
      shared_ptr<string> createTime_ {};
      // The instance description.
      shared_ptr<string> description_ {};
      // Lingjun Elastic Network Interface ID
      shared_ptr<string> elasticNetworkInterfaceId_ {};
      // Whether to enable the jumboFrame capability
      shared_ptr<bool> enableJumboFrame_ {};
      // vswitch gateway address
      shared_ptr<string> gateway_ {};
      // The time when the agent was last modified.
      shared_ptr<string> gmtModified_ {};
      // Elastic Network Interface IP
      shared_ptr<string> ip_ {};
      // IPV6 address
      shared_ptr<vector<Content::Ipv6Addresses>> ipv6Addresses_ {};
      // mac address
      shared_ptr<string> mac_ {};
      // vswitch mask bits
      shared_ptr<string> mask_ {};
      // The error message.
      shared_ptr<string> message_ {};
      // Lingjun Node ID
      shared_ptr<string> nodeId_ {};
      // Secondary private IP address
      shared_ptr<vector<Content::PrivateIpAddresses>> privateIpAddresses_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // 资源组实例ID
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the security group.
      shared_ptr<string> securityGroupId_ {};
      // The state of the private gateway.
      // 
      // Valid value:
      // 
      // *   Create Failed: the creation failure.
      // *   Delete Failed: the that failed to be deleted.
      // *   Executing
      // *   Available
      // *   Deleting
      shared_ptr<string> status_ {};
      // The details of the resource tags.
      shared_ptr<vector<Content::Tags>> tags_ {};
      // NIC Type
      // 
      // Valid value:
      // 
      // *   CUSTOM: custom type.
      // *   DEFAULT: system type.
      shared_ptr<string> type_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vSwitchId_ {};
      // VPC ID
      shared_ptr<string> vpcId_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetElasticNetworkInterfaceResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetElasticNetworkInterfaceResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const GetElasticNetworkInterfaceResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, GetElasticNetworkInterfaceResponseBody::Content) };
    inline GetElasticNetworkInterfaceResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, GetElasticNetworkInterfaceResponseBody::Content) };
    inline GetElasticNetworkInterfaceResponseBody& setContent(const GetElasticNetworkInterfaceResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline GetElasticNetworkInterfaceResponseBody& setContent(GetElasticNetworkInterfaceResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetElasticNetworkInterfaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetElasticNetworkInterfaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response parameters.
    shared_ptr<GetElasticNetworkInterfaceResponseBody::Content> content_ {};
    // The return message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
