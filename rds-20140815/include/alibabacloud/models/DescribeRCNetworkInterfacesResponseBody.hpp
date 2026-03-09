// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCNETWORKINTERFACESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCNETWORKINTERFACESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCNetworkInterfacesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInterfaceSets, networkInterfaceSets_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCNetworkInterfacesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceSets, networkInterfaceSets_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCNetworkInterfacesResponseBody() = default ;
    DescribeRCNetworkInterfacesResponseBody(const DescribeRCNetworkInterfacesResponseBody &) = default ;
    DescribeRCNetworkInterfacesResponseBody(DescribeRCNetworkInterfacesResponseBody &&) = default ;
    DescribeRCNetworkInterfacesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCNetworkInterfacesResponseBody() = default ;
    DescribeRCNetworkInterfacesResponseBody& operator=(const DescribeRCNetworkInterfacesResponseBody &) = default ;
    DescribeRCNetworkInterfacesResponseBody& operator=(DescribeRCNetworkInterfacesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkInterfaceSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInterfaceSets& obj) { 
        DARABONBA_PTR_TO_JSON(AssociatedPublicIp, associatedPublicIp_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Ipv6Sets, ipv6Sets_);
        DARABONBA_PTR_TO_JSON(MacAddress, macAddress_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(PrivateIpSets, privateIpSets_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterfaceSets& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociatedPublicIp, associatedPublicIp_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Ipv6Sets, ipv6Sets_);
        DARABONBA_PTR_FROM_JSON(MacAddress, macAddress_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(PrivateIpSets, privateIpSets_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      NetworkInterfaceSets() = default ;
      NetworkInterfaceSets(const NetworkInterfaceSets &) = default ;
      NetworkInterfaceSets(NetworkInterfaceSets &&) = default ;
      NetworkInterfaceSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInterfaceSets() = default ;
      NetworkInterfaceSets& operator=(const NetworkInterfaceSets &) = default ;
      NetworkInterfaceSets& operator=(NetworkInterfaceSets &&) = default ;
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
        shared_ptr<string> tagKey_ {};
        shared_ptr<string> tagValue_ {};
      };

      class PrivateIpSets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivateIpSets& obj) { 
          DARABONBA_PTR_TO_JSON(Primary, primary_);
          DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
        };
        friend void from_json(const Darabonba::Json& j, PrivateIpSets& obj) { 
          DARABONBA_PTR_FROM_JSON(Primary, primary_);
          DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
        };
        PrivateIpSets() = default ;
        PrivateIpSets(const PrivateIpSets &) = default ;
        PrivateIpSets(PrivateIpSets &&) = default ;
        PrivateIpSets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivateIpSets() = default ;
        PrivateIpSets& operator=(const PrivateIpSets &) = default ;
        PrivateIpSets& operator=(PrivateIpSets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->primary_ == nullptr
        && this->privateIpAddress_ == nullptr; };
        // primary Field Functions 
        bool hasPrimary() const { return this->primary_ != nullptr;};
        void deletePrimary() { this->primary_ = nullptr;};
        inline bool getPrimary() const { DARABONBA_PTR_GET_DEFAULT(primary_, false) };
        inline PrivateIpSets& setPrimary(bool primary) { DARABONBA_PTR_SET_VALUE(primary_, primary) };


        // privateIpAddress Field Functions 
        bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
        void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
        inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
        inline PrivateIpSets& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


      protected:
        shared_ptr<bool> primary_ {};
        shared_ptr<string> privateIpAddress_ {};
      };

      class Ipv6Sets : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Ipv6Sets& obj) { 
          DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
        };
        friend void from_json(const Darabonba::Json& j, Ipv6Sets& obj) { 
          DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
        };
        Ipv6Sets() = default ;
        Ipv6Sets(const Ipv6Sets &) = default ;
        Ipv6Sets(Ipv6Sets &&) = default ;
        Ipv6Sets(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Ipv6Sets() = default ;
        Ipv6Sets& operator=(const Ipv6Sets &) = default ;
        Ipv6Sets& operator=(Ipv6Sets &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ipv6Address_ == nullptr; };
        // ipv6Address Field Functions 
        bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
        void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
        inline string getIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(ipv6Address_, "") };
        inline Ipv6Sets& setIpv6Address(string ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };


      protected:
        shared_ptr<string> ipv6Address_ {};
      };

      class AssociatedPublicIp : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssociatedPublicIp& obj) { 
          DARABONBA_PTR_TO_JSON(PublicIpAddress, publicIpAddress_);
        };
        friend void from_json(const Darabonba::Json& j, AssociatedPublicIp& obj) { 
          DARABONBA_PTR_FROM_JSON(PublicIpAddress, publicIpAddress_);
        };
        AssociatedPublicIp() = default ;
        AssociatedPublicIp(const AssociatedPublicIp &) = default ;
        AssociatedPublicIp(AssociatedPublicIp &&) = default ;
        AssociatedPublicIp(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssociatedPublicIp() = default ;
        AssociatedPublicIp& operator=(const AssociatedPublicIp &) = default ;
        AssociatedPublicIp& operator=(AssociatedPublicIp &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->publicIpAddress_ == nullptr; };
        // publicIpAddress Field Functions 
        bool hasPublicIpAddress() const { return this->publicIpAddress_ != nullptr;};
        void deletePublicIpAddress() { this->publicIpAddress_ = nullptr;};
        inline string getPublicIpAddress() const { DARABONBA_PTR_GET_DEFAULT(publicIpAddress_, "") };
        inline AssociatedPublicIp& setPublicIpAddress(string publicIpAddress) { DARABONBA_PTR_SET_VALUE(publicIpAddress_, publicIpAddress) };


      protected:
        shared_ptr<string> publicIpAddress_ {};
      };

      virtual bool empty() const override { return this->associatedPublicIp_ == nullptr
        && this->creationTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr && this->ipv6Sets_ == nullptr && this->macAddress_ == nullptr
        && this->networkInterfaceId_ == nullptr && this->privateIpSets_ == nullptr && this->resourceGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->status_ == nullptr
        && this->tags_ == nullptr && this->type_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
      // associatedPublicIp Field Functions 
      bool hasAssociatedPublicIp() const { return this->associatedPublicIp_ != nullptr;};
      void deleteAssociatedPublicIp() { this->associatedPublicIp_ = nullptr;};
      inline const NetworkInterfaceSets::AssociatedPublicIp & getAssociatedPublicIp() const { DARABONBA_PTR_GET_CONST(associatedPublicIp_, NetworkInterfaceSets::AssociatedPublicIp) };
      inline NetworkInterfaceSets::AssociatedPublicIp getAssociatedPublicIp() { DARABONBA_PTR_GET(associatedPublicIp_, NetworkInterfaceSets::AssociatedPublicIp) };
      inline NetworkInterfaceSets& setAssociatedPublicIp(const NetworkInterfaceSets::AssociatedPublicIp & associatedPublicIp) { DARABONBA_PTR_SET_VALUE(associatedPublicIp_, associatedPublicIp) };
      inline NetworkInterfaceSets& setAssociatedPublicIp(NetworkInterfaceSets::AssociatedPublicIp && associatedPublicIp) { DARABONBA_PTR_SET_RVALUE(associatedPublicIp_, associatedPublicIp) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline NetworkInterfaceSets& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline NetworkInterfaceSets& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline NetworkInterfaceSets& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // ipv6Sets Field Functions 
      bool hasIpv6Sets() const { return this->ipv6Sets_ != nullptr;};
      void deleteIpv6Sets() { this->ipv6Sets_ = nullptr;};
      inline const vector<NetworkInterfaceSets::Ipv6Sets> & getIpv6Sets() const { DARABONBA_PTR_GET_CONST(ipv6Sets_, vector<NetworkInterfaceSets::Ipv6Sets>) };
      inline vector<NetworkInterfaceSets::Ipv6Sets> getIpv6Sets() { DARABONBA_PTR_GET(ipv6Sets_, vector<NetworkInterfaceSets::Ipv6Sets>) };
      inline NetworkInterfaceSets& setIpv6Sets(const vector<NetworkInterfaceSets::Ipv6Sets> & ipv6Sets) { DARABONBA_PTR_SET_VALUE(ipv6Sets_, ipv6Sets) };
      inline NetworkInterfaceSets& setIpv6Sets(vector<NetworkInterfaceSets::Ipv6Sets> && ipv6Sets) { DARABONBA_PTR_SET_RVALUE(ipv6Sets_, ipv6Sets) };


      // macAddress Field Functions 
      bool hasMacAddress() const { return this->macAddress_ != nullptr;};
      void deleteMacAddress() { this->macAddress_ = nullptr;};
      inline string getMacAddress() const { DARABONBA_PTR_GET_DEFAULT(macAddress_, "") };
      inline NetworkInterfaceSets& setMacAddress(string macAddress) { DARABONBA_PTR_SET_VALUE(macAddress_, macAddress) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline NetworkInterfaceSets& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // privateIpSets Field Functions 
      bool hasPrivateIpSets() const { return this->privateIpSets_ != nullptr;};
      void deletePrivateIpSets() { this->privateIpSets_ = nullptr;};
      inline const vector<NetworkInterfaceSets::PrivateIpSets> & getPrivateIpSets() const { DARABONBA_PTR_GET_CONST(privateIpSets_, vector<NetworkInterfaceSets::PrivateIpSets>) };
      inline vector<NetworkInterfaceSets::PrivateIpSets> getPrivateIpSets() { DARABONBA_PTR_GET(privateIpSets_, vector<NetworkInterfaceSets::PrivateIpSets>) };
      inline NetworkInterfaceSets& setPrivateIpSets(const vector<NetworkInterfaceSets::PrivateIpSets> & privateIpSets) { DARABONBA_PTR_SET_VALUE(privateIpSets_, privateIpSets) };
      inline NetworkInterfaceSets& setPrivateIpSets(vector<NetworkInterfaceSets::PrivateIpSets> && privateIpSets) { DARABONBA_PTR_SET_RVALUE(privateIpSets_, privateIpSets) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline NetworkInterfaceSets& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline NetworkInterfaceSets& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline NetworkInterfaceSets& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline NetworkInterfaceSets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<NetworkInterfaceSets::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<NetworkInterfaceSets::Tags>) };
      inline vector<NetworkInterfaceSets::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<NetworkInterfaceSets::Tags>) };
      inline NetworkInterfaceSets& setTags(const vector<NetworkInterfaceSets::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline NetworkInterfaceSets& setTags(vector<NetworkInterfaceSets::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline NetworkInterfaceSets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline NetworkInterfaceSets& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline NetworkInterfaceSets& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline NetworkInterfaceSets& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      shared_ptr<NetworkInterfaceSets::AssociatedPublicIp> associatedPublicIp_ {};
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<NetworkInterfaceSets::Ipv6Sets>> ipv6Sets_ {};
      shared_ptr<string> macAddress_ {};
      shared_ptr<string> networkInterfaceId_ {};
      shared_ptr<vector<NetworkInterfaceSets::PrivateIpSets>> privateIpSets_ {};
      shared_ptr<string> resourceGroupId_ {};
      shared_ptr<vector<string>> securityGroupIds_ {};
      shared_ptr<string> status_ {};
      shared_ptr<vector<NetworkInterfaceSets::Tags>> tags_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> vSwitchId_ {};
      shared_ptr<string> vpcId_ {};
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->networkInterfaceSets_ == nullptr
        && this->requestId_ == nullptr; };
    // networkInterfaceSets Field Functions 
    bool hasNetworkInterfaceSets() const { return this->networkInterfaceSets_ != nullptr;};
    void deleteNetworkInterfaceSets() { this->networkInterfaceSets_ = nullptr;};
    inline const vector<DescribeRCNetworkInterfacesResponseBody::NetworkInterfaceSets> & getNetworkInterfaceSets() const { DARABONBA_PTR_GET_CONST(networkInterfaceSets_, vector<DescribeRCNetworkInterfacesResponseBody::NetworkInterfaceSets>) };
    inline vector<DescribeRCNetworkInterfacesResponseBody::NetworkInterfaceSets> getNetworkInterfaceSets() { DARABONBA_PTR_GET(networkInterfaceSets_, vector<DescribeRCNetworkInterfacesResponseBody::NetworkInterfaceSets>) };
    inline DescribeRCNetworkInterfacesResponseBody& setNetworkInterfaceSets(const vector<DescribeRCNetworkInterfacesResponseBody::NetworkInterfaceSets> & networkInterfaceSets) { DARABONBA_PTR_SET_VALUE(networkInterfaceSets_, networkInterfaceSets) };
    inline DescribeRCNetworkInterfacesResponseBody& setNetworkInterfaceSets(vector<DescribeRCNetworkInterfacesResponseBody::NetworkInterfaceSets> && networkInterfaceSets) { DARABONBA_PTR_SET_RVALUE(networkInterfaceSets_, networkInterfaceSets) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCNetworkInterfacesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeRCNetworkInterfacesResponseBody::NetworkInterfaceSets>> networkInterfaceSets_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
