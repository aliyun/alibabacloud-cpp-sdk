// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKINTERFACESRESPONSEBODY_HPP_
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
  class ListNetworkInterfacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListNetworkInterfacesResponseBody() = default ;
    ListNetworkInterfacesResponseBody(const ListNetworkInterfacesResponseBody &) = default ;
    ListNetworkInterfacesResponseBody(ListNetworkInterfacesResponseBody &&) = default ;
    ListNetworkInterfacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkInterfacesResponseBody() = default ;
    ListNetworkInterfacesResponseBody& operator=(const ListNetworkInterfacesResponseBody &) = default ;
    ListNetworkInterfacesResponseBody& operator=(ListNetworkInterfacesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Ethernet, ethernet_);
          DARABONBA_PTR_TO_JSON(Gateway, gateway_);
          DARABONBA_PTR_TO_JSON(Ip, ip_);
          DARABONBA_PTR_TO_JSON(NcType, ncType_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddressMacGroup, privateIpAddressMacGroup_);
          DARABONBA_PTR_TO_JSON(Quota, quota_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(ServiceMac, serviceMac_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubnetBaseInfo, subnetBaseInfo_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
          DARABONBA_PTR_TO_JSON(VpdBaseInfo, vpdBaseInfo_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Ethernet, ethernet_);
          DARABONBA_PTR_FROM_JSON(Gateway, gateway_);
          DARABONBA_PTR_FROM_JSON(Ip, ip_);
          DARABONBA_PTR_FROM_JSON(NcType, ncType_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddressMacGroup, privateIpAddressMacGroup_);
          DARABONBA_PTR_FROM_JSON(Quota, quota_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(ServiceMac, serviceMac_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubnetBaseInfo, subnetBaseInfo_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
          DARABONBA_PTR_FROM_JSON(VpdBaseInfo, vpdBaseInfo_);
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
          // The network segment of Lingjun network segment (VPD).
          // 
          // *   We recommend that you use an RFC private endpoint as the Lingjun CIDR block, such as 10.0.0.0/8,172.16.0.0/12,192.168.0.0/16. In scenarios where the Doringjun CIDR block is connected to each other or where the Lingjun CIDR block is connected to a VPC, make sure that the addresses do not conflict with each other.
          // *   You can also use a custom CIDR block other than 100.64.0.0/10, 224.0.0.0/4, 127.0.0.0/8, or 169.254.0.0/16 and their subnets as the primary IPv4 CIDR block of the VPD. This parameter is left empty by default.
          shared_ptr<string> cidr_ {};
          // The time when the activation code was created.
          shared_ptr<string> createTime_ {};
          // The ID of the VPD instance.
          shared_ptr<string> vpdId_ {};
          // The name of the VPD instance.
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
          shared_ptr<string> tagKey_ {};
          // The tag value.
          shared_ptr<string> tagValue_ {};
        };

        class SubnetBaseInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SubnetBaseInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Cidr, cidr_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
            DARABONBA_PTR_TO_JSON(SubnetName, subnetName_);
          };
          friend void from_json(const Darabonba::Json& j, SubnetBaseInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
            DARABONBA_PTR_FROM_JSON(SubnetName, subnetName_);
          };
          SubnetBaseInfo() = default ;
          SubnetBaseInfo(const SubnetBaseInfo &) = default ;
          SubnetBaseInfo(SubnetBaseInfo &&) = default ;
          SubnetBaseInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SubnetBaseInfo() = default ;
          SubnetBaseInfo& operator=(const SubnetBaseInfo &) = default ;
          SubnetBaseInfo& operator=(SubnetBaseInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cidr_ == nullptr
        && this->createTime_ == nullptr && this->subnetId_ == nullptr && this->subnetName_ == nullptr; };
          // cidr Field Functions 
          bool hasCidr() const { return this->cidr_ != nullptr;};
          void deleteCidr() { this->cidr_ = nullptr;};
          inline string getCidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
          inline SubnetBaseInfo& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline SubnetBaseInfo& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // subnetId Field Functions 
          bool hasSubnetId() const { return this->subnetId_ != nullptr;};
          void deleteSubnetId() { this->subnetId_ = nullptr;};
          inline string getSubnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
          inline SubnetBaseInfo& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


          // subnetName Field Functions 
          bool hasSubnetName() const { return this->subnetName_ != nullptr;};
          void deleteSubnetName() { this->subnetName_ = nullptr;};
          inline string getSubnetName() const { DARABONBA_PTR_GET_DEFAULT(subnetName_, "") };
          inline SubnetBaseInfo& setSubnetName(string subnetName) { DARABONBA_PTR_SET_VALUE(subnetName_, subnetName) };


        protected:
          // The network segment of the Subnet.
          // 
          // *   The network segment of the subnet must be a proper subset of the network segment of Lingjun to which it belongs, and the mask must be between 16 bits and 29 bits, which can provide 8 to 65536 addresses. For example, the CIDR block of the Lingjun CIDR block is 192.168.0.0/16, and the CIDR blocks of the subnets under the Lingjun CIDR block are 192.168.0.0/17 to 192.168.0.0/29.
          // *   The first and last three IP addresses of each subnet segment are reserved by the system. For example, the CIDR blocks of the subnet are 192.168.1.0/24,192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
          // 
          // For more information about CIDR blocks, see the [What is CIDR?](https://www.alibabacloud.com/help/doc-detail/40637.htm#title-gu4-uzk-12r) section in the "Network FAQ" topic.
          // 
          // This parameter is left empty by default.
          shared_ptr<string> cidr_ {};
          // The time when the activation code was created.
          shared_ptr<string> createTime_ {};
          // The ID of the Subnet instance.
          shared_ptr<string> subnetId_ {};
          // The name of the Subnet instance.
          shared_ptr<string> subnetName_ {};
        };

        class PrivateIpAddressMacGroup : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrivateIpAddressMacGroup& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(IpAddressMac, ipAddressMac_);
            DARABONBA_PTR_TO_JSON(IpName, ipName_);
            DARABONBA_PTR_TO_JSON(Message, message_);
            DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, PrivateIpAddressMacGroup& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(IpAddressMac, ipAddressMac_);
            DARABONBA_PTR_FROM_JSON(IpName, ipName_);
            DARABONBA_PTR_FROM_JSON(Message, message_);
            DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          PrivateIpAddressMacGroup() = default ;
          PrivateIpAddressMacGroup(const PrivateIpAddressMacGroup &) = default ;
          PrivateIpAddressMacGroup(PrivateIpAddressMacGroup &&) = default ;
          PrivateIpAddressMacGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrivateIpAddressMacGroup() = default ;
          PrivateIpAddressMacGroup& operator=(const PrivateIpAddressMacGroup &) = default ;
          PrivateIpAddressMacGroup& operator=(PrivateIpAddressMacGroup &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->ipAddressMac_ == nullptr && this->ipName_ == nullptr && this->message_ == nullptr && this->privateIpAddress_ == nullptr && this->status_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline PrivateIpAddressMacGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // ipAddressMac Field Functions 
          bool hasIpAddressMac() const { return this->ipAddressMac_ != nullptr;};
          void deleteIpAddressMac() { this->ipAddressMac_ = nullptr;};
          inline string getIpAddressMac() const { DARABONBA_PTR_GET_DEFAULT(ipAddressMac_, "") };
          inline PrivateIpAddressMacGroup& setIpAddressMac(string ipAddressMac) { DARABONBA_PTR_SET_VALUE(ipAddressMac_, ipAddressMac) };


          // ipName Field Functions 
          bool hasIpName() const { return this->ipName_ != nullptr;};
          void deleteIpName() { this->ipName_ = nullptr;};
          inline string getIpName() const { DARABONBA_PTR_GET_DEFAULT(ipName_, "") };
          inline PrivateIpAddressMacGroup& setIpName(string ipName) { DARABONBA_PTR_SET_VALUE(ipName_, ipName) };


          // message Field Functions 
          bool hasMessage() const { return this->message_ != nullptr;};
          void deleteMessage() { this->message_ = nullptr;};
          inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
          inline PrivateIpAddressMacGroup& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


          // privateIpAddress Field Functions 
          bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
          void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
          inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
          inline PrivateIpAddressMacGroup& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline PrivateIpAddressMacGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The instance description.
          shared_ptr<string> description_ {};
          // Secondary private MAC address.
          shared_ptr<string> ipAddressMac_ {};
          // The unique IP identifier.
          shared_ptr<string> ipName_ {};
          // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
          shared_ptr<string> message_ {};
          // The secondary private IP address.
          shared_ptr<string> privateIpAddress_ {};
          // The status of the cache reserve instance.
          shared_ptr<string> status_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->ethernet_ == nullptr && this->gateway_ == nullptr && this->ip_ == nullptr && this->ncType_ == nullptr && this->networkInterfaceId_ == nullptr
        && this->networkInterfaceName_ == nullptr && this->nodeId_ == nullptr && this->privateIpAddressMacGroup_ == nullptr && this->quota_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->serviceMac_ == nullptr && this->status_ == nullptr && this->subnetBaseInfo_ == nullptr && this->tags_ == nullptr
        && this->tenantId_ == nullptr && this->vpdBaseInfo_ == nullptr && this->zoneId_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Data& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // ethernet Field Functions 
        bool hasEthernet() const { return this->ethernet_ != nullptr;};
        void deleteEthernet() { this->ethernet_ = nullptr;};
        inline const vector<string> & getEthernet() const { DARABONBA_PTR_GET_CONST(ethernet_, vector<string>) };
        inline vector<string> getEthernet() { DARABONBA_PTR_GET(ethernet_, vector<string>) };
        inline Data& setEthernet(const vector<string> & ethernet) { DARABONBA_PTR_SET_VALUE(ethernet_, ethernet) };
        inline Data& setEthernet(vector<string> && ethernet) { DARABONBA_PTR_SET_RVALUE(ethernet_, ethernet) };


        // gateway Field Functions 
        bool hasGateway() const { return this->gateway_ != nullptr;};
        void deleteGateway() { this->gateway_ = nullptr;};
        inline string getGateway() const { DARABONBA_PTR_GET_DEFAULT(gateway_, "") };
        inline Data& setGateway(string gateway) { DARABONBA_PTR_SET_VALUE(gateway_, gateway) };


        // ip Field Functions 
        bool hasIp() const { return this->ip_ != nullptr;};
        void deleteIp() { this->ip_ = nullptr;};
        inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
        inline Data& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


        // ncType Field Functions 
        bool hasNcType() const { return this->ncType_ != nullptr;};
        void deleteNcType() { this->ncType_ = nullptr;};
        inline string getNcType() const { DARABONBA_PTR_GET_DEFAULT(ncType_, "") };
        inline Data& setNcType(string ncType) { DARABONBA_PTR_SET_VALUE(ncType_, ncType) };


        // networkInterfaceId Field Functions 
        bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
        void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
        inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
        inline Data& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


        // networkInterfaceName Field Functions 
        bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
        void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
        inline string getNetworkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
        inline Data& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Data& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // privateIpAddressMacGroup Field Functions 
        bool hasPrivateIpAddressMacGroup() const { return this->privateIpAddressMacGroup_ != nullptr;};
        void deletePrivateIpAddressMacGroup() { this->privateIpAddressMacGroup_ = nullptr;};
        inline const vector<Data::PrivateIpAddressMacGroup> & getPrivateIpAddressMacGroup() const { DARABONBA_PTR_GET_CONST(privateIpAddressMacGroup_, vector<Data::PrivateIpAddressMacGroup>) };
        inline vector<Data::PrivateIpAddressMacGroup> getPrivateIpAddressMacGroup() { DARABONBA_PTR_GET(privateIpAddressMacGroup_, vector<Data::PrivateIpAddressMacGroup>) };
        inline Data& setPrivateIpAddressMacGroup(const vector<Data::PrivateIpAddressMacGroup> & privateIpAddressMacGroup) { DARABONBA_PTR_SET_VALUE(privateIpAddressMacGroup_, privateIpAddressMacGroup) };
        inline Data& setPrivateIpAddressMacGroup(vector<Data::PrivateIpAddressMacGroup> && privateIpAddressMacGroup) { DARABONBA_PTR_SET_RVALUE(privateIpAddressMacGroup_, privateIpAddressMacGroup) };


        // quota Field Functions 
        bool hasQuota() const { return this->quota_ != nullptr;};
        void deleteQuota() { this->quota_ = nullptr;};
        inline int32_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
        inline Data& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


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


        // serviceMac Field Functions 
        bool hasServiceMac() const { return this->serviceMac_ != nullptr;};
        void deleteServiceMac() { this->serviceMac_ = nullptr;};
        inline string getServiceMac() const { DARABONBA_PTR_GET_DEFAULT(serviceMac_, "") };
        inline Data& setServiceMac(string serviceMac) { DARABONBA_PTR_SET_VALUE(serviceMac_, serviceMac) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subnetBaseInfo Field Functions 
        bool hasSubnetBaseInfo() const { return this->subnetBaseInfo_ != nullptr;};
        void deleteSubnetBaseInfo() { this->subnetBaseInfo_ = nullptr;};
        inline const Data::SubnetBaseInfo & getSubnetBaseInfo() const { DARABONBA_PTR_GET_CONST(subnetBaseInfo_, Data::SubnetBaseInfo) };
        inline Data::SubnetBaseInfo getSubnetBaseInfo() { DARABONBA_PTR_GET(subnetBaseInfo_, Data::SubnetBaseInfo) };
        inline Data& setSubnetBaseInfo(const Data::SubnetBaseInfo & subnetBaseInfo) { DARABONBA_PTR_SET_VALUE(subnetBaseInfo_, subnetBaseInfo) };
        inline Data& setSubnetBaseInfo(Data::SubnetBaseInfo && subnetBaseInfo) { DARABONBA_PTR_SET_RVALUE(subnetBaseInfo_, subnetBaseInfo) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
        inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
        inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // tenantId Field Functions 
        bool hasTenantId() const { return this->tenantId_ != nullptr;};
        void deleteTenantId() { this->tenantId_ = nullptr;};
        inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
        inline Data& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


        // vpdBaseInfo Field Functions 
        bool hasVpdBaseInfo() const { return this->vpdBaseInfo_ != nullptr;};
        void deleteVpdBaseInfo() { this->vpdBaseInfo_ = nullptr;};
        inline const Data::VpdBaseInfo & getVpdBaseInfo() const { DARABONBA_PTR_GET_CONST(vpdBaseInfo_, Data::VpdBaseInfo) };
        inline Data::VpdBaseInfo getVpdBaseInfo() { DARABONBA_PTR_GET(vpdBaseInfo_, Data::VpdBaseInfo) };
        inline Data& setVpdBaseInfo(const Data::VpdBaseInfo & vpdBaseInfo) { DARABONBA_PTR_SET_VALUE(vpdBaseInfo_, vpdBaseInfo) };
        inline Data& setVpdBaseInfo(Data::VpdBaseInfo && vpdBaseInfo) { DARABONBA_PTR_SET_RVALUE(vpdBaseInfo_, vpdBaseInfo) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The time when the activation code was created.
        shared_ptr<string> createTime_ {};
        // The port number of the AD server.
        shared_ptr<vector<string>> ethernet_ {};
        // The gateway.
        shared_ptr<string> gateway_ {};
        // The IP address of the instance.
        shared_ptr<string> ip_ {};
        // The NC type.
        // 
        // Valid value:
        // 
        // *   CUSTOM_LNI_INTEGRATION: two-network one-in-one architecture Lingjun hosting network interface controller.
        // *   CPU: CPU machine.
        // *   ELASTIC_6.2: Machine
        // *   GPU: GPU machine.
        // *   DEFAULT: the old CPU machine.
        // *   CUSTOM_LNI: two network separation architecture Lingjun hosting network interface controller.
        shared_ptr<string> ncType_ {};
        // Lingjun network interface controller ID.
        shared_ptr<string> networkInterfaceId_ {};
        // The port name.
        shared_ptr<string> networkInterfaceName_ {};
        // The ID of the machine to which the instance belongs.
        shared_ptr<string> nodeId_ {};
        // Secondary Private IP\\&MAC Address Collection
        shared_ptr<vector<Data::PrivateIpAddressMacGroup>> privateIpAddressMacGroup_ {};
        // network interface controller private secondary IP quota.
        shared_ptr<int32_t> quota_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // Resource group instance ID
        shared_ptr<string> resourceGroupId_ {};
        // The address of the service network interface controller.
        shared_ptr<string> serviceMac_ {};
        // The task status.
        shared_ptr<string> status_ {};
        // Lingjun subnet (Subnet) basic information.
        shared_ptr<Data::SubnetBaseInfo> subnetBaseInfo_ {};
        // List of tags.
        shared_ptr<vector<Data::Tags>> tags_ {};
        // The tenant ID.
        shared_ptr<string> tenantId_ {};
        // Lingjun network segment (VPD) basic information.
        shared_ptr<Data::VpdBaseInfo> vpdBaseInfo_ {};
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
      // The response parameters.
      shared_ptr<vector<Content::Data>> data_ {};
      // The total number of entries that are returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->content_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListNetworkInterfacesResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListNetworkInterfacesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const ListNetworkInterfacesResponseBody::Content & getContent() const { DARABONBA_PTR_GET_CONST(content_, ListNetworkInterfacesResponseBody::Content) };
    inline ListNetworkInterfacesResponseBody::Content getContent() { DARABONBA_PTR_GET(content_, ListNetworkInterfacesResponseBody::Content) };
    inline ListNetworkInterfacesResponseBody& setContent(const ListNetworkInterfacesResponseBody::Content & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline ListNetworkInterfacesResponseBody& setContent(ListNetworkInterfacesResponseBody::Content && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListNetworkInterfacesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNetworkInterfacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The response data.
    shared_ptr<ListNetworkInterfacesResponseBody::Content> content_ {};
    // The error message. (If the instance is in the Exception state, the exception cause is prompted.)
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
