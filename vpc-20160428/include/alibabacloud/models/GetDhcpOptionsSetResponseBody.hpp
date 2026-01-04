// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDHCPOPTIONSSETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDHCPOPTIONSSETRESPONSEBODY_HPP_
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
  class GetDhcpOptionsSetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDhcpOptionsSetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssociateVpcs, associateVpcs_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DhcpOptions, dhcpOptions_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_TO_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetDhcpOptionsSetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociateVpcs, associateVpcs_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DhcpOptions, dhcpOptions_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetDhcpOptionsSetResponseBody() = default ;
    GetDhcpOptionsSetResponseBody(const GetDhcpOptionsSetResponseBody &) = default ;
    GetDhcpOptionsSetResponseBody(GetDhcpOptionsSetResponseBody &&) = default ;
    GetDhcpOptionsSetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDhcpOptionsSetResponseBody() = default ;
    GetDhcpOptionsSetResponseBody& operator=(const GetDhcpOptionsSetResponseBody &) = default ;
    GetDhcpOptionsSetResponseBody& operator=(GetDhcpOptionsSetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class DhcpOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DhcpOptions& obj) { 
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainNameServers, domainNameServers_);
        DARABONBA_PTR_TO_JSON(Ipv6LeaseTime, ipv6LeaseTime_);
        DARABONBA_PTR_TO_JSON(LeaseTime, leaseTime_);
      };
      friend void from_json(const Darabonba::Json& j, DhcpOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainNameServers, domainNameServers_);
        DARABONBA_PTR_FROM_JSON(Ipv6LeaseTime, ipv6LeaseTime_);
        DARABONBA_PTR_FROM_JSON(LeaseTime, leaseTime_);
      };
      DhcpOptions() = default ;
      DhcpOptions(const DhcpOptions &) = default ;
      DhcpOptions(DhcpOptions &&) = default ;
      DhcpOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DhcpOptions() = default ;
      DhcpOptions& operator=(const DhcpOptions &) = default ;
      DhcpOptions& operator=(DhcpOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domainName_ == nullptr
        && this->domainNameServers_ == nullptr && this->ipv6LeaseTime_ == nullptr && this->leaseTime_ == nullptr; };
      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline DhcpOptions& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainNameServers Field Functions 
      bool hasDomainNameServers() const { return this->domainNameServers_ != nullptr;};
      void deleteDomainNameServers() { this->domainNameServers_ = nullptr;};
      inline string getDomainNameServers() const { DARABONBA_PTR_GET_DEFAULT(domainNameServers_, "") };
      inline DhcpOptions& setDomainNameServers(string domainNameServers) { DARABONBA_PTR_SET_VALUE(domainNameServers_, domainNameServers) };


      // ipv6LeaseTime Field Functions 
      bool hasIpv6LeaseTime() const { return this->ipv6LeaseTime_ != nullptr;};
      void deleteIpv6LeaseTime() { this->ipv6LeaseTime_ = nullptr;};
      inline string getIpv6LeaseTime() const { DARABONBA_PTR_GET_DEFAULT(ipv6LeaseTime_, "") };
      inline DhcpOptions& setIpv6LeaseTime(string ipv6LeaseTime) { DARABONBA_PTR_SET_VALUE(ipv6LeaseTime_, ipv6LeaseTime) };


      // leaseTime Field Functions 
      bool hasLeaseTime() const { return this->leaseTime_ != nullptr;};
      void deleteLeaseTime() { this->leaseTime_ = nullptr;};
      inline string getLeaseTime() const { DARABONBA_PTR_GET_DEFAULT(leaseTime_, "") };
      inline DhcpOptions& setLeaseTime(string leaseTime) { DARABONBA_PTR_SET_VALUE(leaseTime_, leaseTime) };


    protected:
      // The suffix of the hostname.
      shared_ptr<string> domainName_ {};
      // The IP address of the DNS server.
      shared_ptr<string> domainNameServers_ {};
      // The lease time of the IPv6 addresses for the DHCP options set.
      //  
      // *   If you use hours as the unit, Valid values are **24h to 1176h** and **87600h to 175200h**. Default value: **87600h**.
      // *   If you use days as the unit, Valid values are **1d to 49d** and **3650d to 7300d**. Default value: **3650d**.
      shared_ptr<string> ipv6LeaseTime_ {};
      // The lease time of the IPv4 addresses for the DHCP options set.
      // 
      // *   If you use hours as the unit, valid values are **24h to 1176h** and **87600h to 175200h**. Default value: **87600h**.
      // 
      // *   If you use days as the unit, valid values are **1d to 49d** and **3650d to 7300d**. Default value: **3650d**.
      shared_ptr<string> leaseTime_ {};
    };

    class AssociateVpcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssociateVpcs& obj) { 
        DARABONBA_PTR_TO_JSON(AssociateStatus, associateStatus_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      };
      friend void from_json(const Darabonba::Json& j, AssociateVpcs& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociateStatus, associateStatus_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      };
      AssociateVpcs() = default ;
      AssociateVpcs(const AssociateVpcs &) = default ;
      AssociateVpcs(AssociateVpcs &&) = default ;
      AssociateVpcs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssociateVpcs() = default ;
      AssociateVpcs& operator=(const AssociateVpcs &) = default ;
      AssociateVpcs& operator=(AssociateVpcs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->associateStatus_ == nullptr
        && this->vpcId_ == nullptr; };
      // associateStatus Field Functions 
      bool hasAssociateStatus() const { return this->associateStatus_ != nullptr;};
      void deleteAssociateStatus() { this->associateStatus_ = nullptr;};
      inline string getAssociateStatus() const { DARABONBA_PTR_GET_DEFAULT(associateStatus_, "") };
      inline AssociateVpcs& setAssociateStatus(string associateStatus) { DARABONBA_PTR_SET_VALUE(associateStatus_, associateStatus) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline AssociateVpcs& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    protected:
      // The status of the VPC that is associated with the DHCP options set. Valid values:
      //  
      // *   **InUse**: in use
      // *   **Pending**: being configured
      shared_ptr<string> associateStatus_ {};
      // The ID of the VPC that is associated with the DHCP options set.
      shared_ptr<string> vpcId_ {};
    };

    virtual bool empty() const override { return this->associateVpcs_ == nullptr
        && this->creationTime_ == nullptr && this->dhcpOptions_ == nullptr && this->dhcpOptionsSetDescription_ == nullptr && this->dhcpOptionsSetId_ == nullptr && this->dhcpOptionsSetName_ == nullptr
        && this->ownerId_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
    // associateVpcs Field Functions 
    bool hasAssociateVpcs() const { return this->associateVpcs_ != nullptr;};
    void deleteAssociateVpcs() { this->associateVpcs_ = nullptr;};
    inline const vector<GetDhcpOptionsSetResponseBody::AssociateVpcs> & getAssociateVpcs() const { DARABONBA_PTR_GET_CONST(associateVpcs_, vector<GetDhcpOptionsSetResponseBody::AssociateVpcs>) };
    inline vector<GetDhcpOptionsSetResponseBody::AssociateVpcs> getAssociateVpcs() { DARABONBA_PTR_GET(associateVpcs_, vector<GetDhcpOptionsSetResponseBody::AssociateVpcs>) };
    inline GetDhcpOptionsSetResponseBody& setAssociateVpcs(const vector<GetDhcpOptionsSetResponseBody::AssociateVpcs> & associateVpcs) { DARABONBA_PTR_SET_VALUE(associateVpcs_, associateVpcs) };
    inline GetDhcpOptionsSetResponseBody& setAssociateVpcs(vector<GetDhcpOptionsSetResponseBody::AssociateVpcs> && associateVpcs) { DARABONBA_PTR_SET_RVALUE(associateVpcs_, associateVpcs) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline GetDhcpOptionsSetResponseBody& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // dhcpOptions Field Functions 
    bool hasDhcpOptions() const { return this->dhcpOptions_ != nullptr;};
    void deleteDhcpOptions() { this->dhcpOptions_ = nullptr;};
    inline const GetDhcpOptionsSetResponseBody::DhcpOptions & getDhcpOptions() const { DARABONBA_PTR_GET_CONST(dhcpOptions_, GetDhcpOptionsSetResponseBody::DhcpOptions) };
    inline GetDhcpOptionsSetResponseBody::DhcpOptions getDhcpOptions() { DARABONBA_PTR_GET(dhcpOptions_, GetDhcpOptionsSetResponseBody::DhcpOptions) };
    inline GetDhcpOptionsSetResponseBody& setDhcpOptions(const GetDhcpOptionsSetResponseBody::DhcpOptions & dhcpOptions) { DARABONBA_PTR_SET_VALUE(dhcpOptions_, dhcpOptions) };
    inline GetDhcpOptionsSetResponseBody& setDhcpOptions(GetDhcpOptionsSetResponseBody::DhcpOptions && dhcpOptions) { DARABONBA_PTR_SET_RVALUE(dhcpOptions_, dhcpOptions) };


    // dhcpOptionsSetDescription Field Functions 
    bool hasDhcpOptionsSetDescription() const { return this->dhcpOptionsSetDescription_ != nullptr;};
    void deleteDhcpOptionsSetDescription() { this->dhcpOptionsSetDescription_ = nullptr;};
    inline string getDhcpOptionsSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetDescription_, "") };
    inline GetDhcpOptionsSetResponseBody& setDhcpOptionsSetDescription(string dhcpOptionsSetDescription) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetDescription_, dhcpOptionsSetDescription) };


    // dhcpOptionsSetId Field Functions 
    bool hasDhcpOptionsSetId() const { return this->dhcpOptionsSetId_ != nullptr;};
    void deleteDhcpOptionsSetId() { this->dhcpOptionsSetId_ = nullptr;};
    inline string getDhcpOptionsSetId() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetId_, "") };
    inline GetDhcpOptionsSetResponseBody& setDhcpOptionsSetId(string dhcpOptionsSetId) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetId_, dhcpOptionsSetId) };


    // dhcpOptionsSetName Field Functions 
    bool hasDhcpOptionsSetName() const { return this->dhcpOptionsSetName_ != nullptr;};
    void deleteDhcpOptionsSetName() { this->dhcpOptionsSetName_ = nullptr;};
    inline string getDhcpOptionsSetName() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetName_, "") };
    inline GetDhcpOptionsSetResponseBody& setDhcpOptionsSetName(string dhcpOptionsSetName) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetName_, dhcpOptionsSetName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetDhcpOptionsSetResponseBody& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDhcpOptionsSetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetDhcpOptionsSetResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDhcpOptionsSetResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetDhcpOptionsSetResponseBody::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetDhcpOptionsSetResponseBody::Tags>) };
    inline vector<GetDhcpOptionsSetResponseBody::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<GetDhcpOptionsSetResponseBody::Tags>) };
    inline GetDhcpOptionsSetResponseBody& setTags(const vector<GetDhcpOptionsSetResponseBody::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetDhcpOptionsSetResponseBody& setTags(vector<GetDhcpOptionsSetResponseBody::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The information about the virtual private cloud (VPC) that is associated with the DHCP options set.
    shared_ptr<vector<GetDhcpOptionsSetResponseBody::AssociateVpcs>> associateVpcs_ {};
    // create time
    shared_ptr<string> creationTime_ {};
    // The configuration information about the DHCP options set.
    shared_ptr<GetDhcpOptionsSetResponseBody::DhcpOptions> dhcpOptions_ {};
    // The description of the DHCP options set.
    shared_ptr<string> dhcpOptionsSetDescription_ {};
    // The ID of the DHCP options set.
    shared_ptr<string> dhcpOptionsSetId_ {};
    // The name of the DHCP options set.
    shared_ptr<string> dhcpOptionsSetName_ {};
    // The ID of the Alibaba Cloud account to which the DHCP options set belongs.
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The status of the DHCP options set. Valid values:
    // 
    // *   **Available**: available
    // *   **InUse**: in use
    // *   **Deleted**: deleted
    // *   **Pending**: being configured
    shared_ptr<string> status_ {};
    // The tag list.
    shared_ptr<vector<GetDhcpOptionsSetResponseBody::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
