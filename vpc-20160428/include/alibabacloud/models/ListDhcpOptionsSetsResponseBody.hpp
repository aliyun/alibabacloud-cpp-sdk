// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDHCPOPTIONSSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDHCPOPTIONSSETSRESPONSEBODY_HPP_
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
  class ListDhcpOptionsSetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDhcpOptionsSetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DhcpOptionsSets, dhcpOptionsSets_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDhcpOptionsSetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DhcpOptionsSets, dhcpOptionsSets_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDhcpOptionsSetsResponseBody() = default ;
    ListDhcpOptionsSetsResponseBody(const ListDhcpOptionsSetsResponseBody &) = default ;
    ListDhcpOptionsSetsResponseBody(ListDhcpOptionsSetsResponseBody &&) = default ;
    ListDhcpOptionsSetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDhcpOptionsSetsResponseBody() = default ;
    ListDhcpOptionsSetsResponseBody& operator=(const ListDhcpOptionsSetsResponseBody &) = default ;
    ListDhcpOptionsSetsResponseBody& operator=(ListDhcpOptionsSetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DhcpOptionsSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DhcpOptionsSets& obj) { 
        DARABONBA_PTR_TO_JSON(AssociateVpcCount, associateVpcCount_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(DhcpOptions, dhcpOptions_);
        DARABONBA_PTR_TO_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
        DARABONBA_PTR_TO_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
        DARABONBA_PTR_TO_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
        DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, DhcpOptionsSets& obj) { 
        DARABONBA_PTR_FROM_JSON(AssociateVpcCount, associateVpcCount_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(DhcpOptions, dhcpOptions_);
        DARABONBA_PTR_FROM_JSON(DhcpOptionsSetDescription, dhcpOptionsSetDescription_);
        DARABONBA_PTR_FROM_JSON(DhcpOptionsSetId, dhcpOptionsSetId_);
        DARABONBA_PTR_FROM_JSON(DhcpOptionsSetName, dhcpOptionsSetName_);
        DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      DhcpOptionsSets() = default ;
      DhcpOptionsSets(const DhcpOptionsSets &) = default ;
      DhcpOptionsSets(DhcpOptionsSets &&) = default ;
      DhcpOptionsSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DhcpOptionsSets() = default ;
      DhcpOptionsSets& operator=(const DhcpOptionsSets &) = default ;
      DhcpOptionsSets& operator=(DhcpOptionsSets &&) = default ;
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
        // The key of tag N added to the resource.
        shared_ptr<string> key_ {};
        // The value of tag N added to the resource.
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
        // The lease time of the IPv6 DHCP options set.
        // 
        // *   If you use hours as the unit, Unit: h. Valid values are **24h to 1176h** and **87600h to 175200h**. Default value: **24h**.
        // 
        // *   If you use days as the unit, Unit: d. Valid values are **1d to 49d** and **3650d to 7300d**. Default value: **1d**.
        shared_ptr<string> ipv6LeaseTime_ {};
        // The lease time of the IPv4 addresses for the DHCP options set.
        // 
        // *   If you use hours as the unit, valid values are **24h to 1176h** and **87600h to 175200h**. Default value: **87600h**.
        // *   If you use days as the unit, valid values are **1d to 49d** and **3650d to 7300d**. Default value: **3650d**.
        shared_ptr<string> leaseTime_ {};
      };

      virtual bool empty() const override { return this->associateVpcCount_ == nullptr
        && this->creationTime_ == nullptr && this->dhcpOptions_ == nullptr && this->dhcpOptionsSetDescription_ == nullptr && this->dhcpOptionsSetId_ == nullptr && this->dhcpOptionsSetName_ == nullptr
        && this->ownerId_ == nullptr && this->resourceGroupId_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
      // associateVpcCount Field Functions 
      bool hasAssociateVpcCount() const { return this->associateVpcCount_ != nullptr;};
      void deleteAssociateVpcCount() { this->associateVpcCount_ = nullptr;};
      inline int32_t getAssociateVpcCount() const { DARABONBA_PTR_GET_DEFAULT(associateVpcCount_, 0) };
      inline DhcpOptionsSets& setAssociateVpcCount(int32_t associateVpcCount) { DARABONBA_PTR_SET_VALUE(associateVpcCount_, associateVpcCount) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline DhcpOptionsSets& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // dhcpOptions Field Functions 
      bool hasDhcpOptions() const { return this->dhcpOptions_ != nullptr;};
      void deleteDhcpOptions() { this->dhcpOptions_ = nullptr;};
      inline const DhcpOptionsSets::DhcpOptions & getDhcpOptions() const { DARABONBA_PTR_GET_CONST(dhcpOptions_, DhcpOptionsSets::DhcpOptions) };
      inline DhcpOptionsSets::DhcpOptions getDhcpOptions() { DARABONBA_PTR_GET(dhcpOptions_, DhcpOptionsSets::DhcpOptions) };
      inline DhcpOptionsSets& setDhcpOptions(const DhcpOptionsSets::DhcpOptions & dhcpOptions) { DARABONBA_PTR_SET_VALUE(dhcpOptions_, dhcpOptions) };
      inline DhcpOptionsSets& setDhcpOptions(DhcpOptionsSets::DhcpOptions && dhcpOptions) { DARABONBA_PTR_SET_RVALUE(dhcpOptions_, dhcpOptions) };


      // dhcpOptionsSetDescription Field Functions 
      bool hasDhcpOptionsSetDescription() const { return this->dhcpOptionsSetDescription_ != nullptr;};
      void deleteDhcpOptionsSetDescription() { this->dhcpOptionsSetDescription_ = nullptr;};
      inline string getDhcpOptionsSetDescription() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetDescription_, "") };
      inline DhcpOptionsSets& setDhcpOptionsSetDescription(string dhcpOptionsSetDescription) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetDescription_, dhcpOptionsSetDescription) };


      // dhcpOptionsSetId Field Functions 
      bool hasDhcpOptionsSetId() const { return this->dhcpOptionsSetId_ != nullptr;};
      void deleteDhcpOptionsSetId() { this->dhcpOptionsSetId_ = nullptr;};
      inline string getDhcpOptionsSetId() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetId_, "") };
      inline DhcpOptionsSets& setDhcpOptionsSetId(string dhcpOptionsSetId) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetId_, dhcpOptionsSetId) };


      // dhcpOptionsSetName Field Functions 
      bool hasDhcpOptionsSetName() const { return this->dhcpOptionsSetName_ != nullptr;};
      void deleteDhcpOptionsSetName() { this->dhcpOptionsSetName_ = nullptr;};
      inline string getDhcpOptionsSetName() const { DARABONBA_PTR_GET_DEFAULT(dhcpOptionsSetName_, "") };
      inline DhcpOptionsSets& setDhcpOptionsSetName(string dhcpOptionsSetName) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSetName_, dhcpOptionsSetName) };


      // ownerId Field Functions 
      bool hasOwnerId() const { return this->ownerId_ != nullptr;};
      void deleteOwnerId() { this->ownerId_ = nullptr;};
      inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
      inline DhcpOptionsSets& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline DhcpOptionsSets& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DhcpOptionsSets& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<DhcpOptionsSets::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<DhcpOptionsSets::Tags>) };
      inline vector<DhcpOptionsSets::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<DhcpOptionsSets::Tags>) };
      inline DhcpOptionsSets& setTags(const vector<DhcpOptionsSets::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline DhcpOptionsSets& setTags(vector<DhcpOptionsSets::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The number of VPCs with which the DHCP options set is associated.
      shared_ptr<int32_t> associateVpcCount_ {};
      // The creation time of the DHCP options sets.
      shared_ptr<string> creationTime_ {};
      // The details of DHCP options.
      shared_ptr<DhcpOptionsSets::DhcpOptions> dhcpOptions_ {};
      // The description of the DHCP options set.
      shared_ptr<string> dhcpOptionsSetDescription_ {};
      // The ID of the DHCP options set.
      shared_ptr<string> dhcpOptionsSetId_ {};
      // The name of the DHCP options set.
      shared_ptr<string> dhcpOptionsSetName_ {};
      // The ID of the Alibaba Cloud account to which the DHCP options set belongs.
      shared_ptr<int64_t> ownerId_ {};
      // The ID of the resource group to which the DHCP options set belongs.
      shared_ptr<string> resourceGroupId_ {};
      // The status of the DHCP options set. Valid values:
      // 
      // *   **Available**
      // *   **InUse**
      // *   **Pending**
      // *   **Deleted**
      shared_ptr<string> status_ {};
      // The tag list.
      shared_ptr<vector<DhcpOptionsSets::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->dhcpOptionsSets_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dhcpOptionsSets Field Functions 
    bool hasDhcpOptionsSets() const { return this->dhcpOptionsSets_ != nullptr;};
    void deleteDhcpOptionsSets() { this->dhcpOptionsSets_ = nullptr;};
    inline const vector<ListDhcpOptionsSetsResponseBody::DhcpOptionsSets> & getDhcpOptionsSets() const { DARABONBA_PTR_GET_CONST(dhcpOptionsSets_, vector<ListDhcpOptionsSetsResponseBody::DhcpOptionsSets>) };
    inline vector<ListDhcpOptionsSetsResponseBody::DhcpOptionsSets> getDhcpOptionsSets() { DARABONBA_PTR_GET(dhcpOptionsSets_, vector<ListDhcpOptionsSetsResponseBody::DhcpOptionsSets>) };
    inline ListDhcpOptionsSetsResponseBody& setDhcpOptionsSets(const vector<ListDhcpOptionsSetsResponseBody::DhcpOptionsSets> & dhcpOptionsSets) { DARABONBA_PTR_SET_VALUE(dhcpOptionsSets_, dhcpOptionsSets) };
    inline ListDhcpOptionsSetsResponseBody& setDhcpOptionsSets(vector<ListDhcpOptionsSetsResponseBody::DhcpOptionsSets> && dhcpOptionsSets) { DARABONBA_PTR_SET_RVALUE(dhcpOptionsSets_, dhcpOptionsSets) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDhcpOptionsSetsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDhcpOptionsSetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListDhcpOptionsSetsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of the DHCP options sets.
    shared_ptr<vector<ListDhcpOptionsSetsResponseBody::DhcpOptionsSets>> dhcpOptionsSets_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
