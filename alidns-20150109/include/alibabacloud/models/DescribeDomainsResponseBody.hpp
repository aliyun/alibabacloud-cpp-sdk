// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDomainsResponseBody() = default ;
    DescribeDomainsResponseBody(const DescribeDomainsResponseBody &) = default ;
    DescribeDomainsResponseBody(DescribeDomainsResponseBody &&) = default ;
    DescribeDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBody() = default ;
    DescribeDomainsResponseBody& operator=(const DescribeDomainsResponseBody &) = default ;
    DescribeDomainsResponseBody& operator=(DescribeDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
      };
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
      };
      Domains() = default ;
      Domains(const Domains &) = default ;
      Domains(Domains &&) = default ;
      Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domains() = default ;
      Domains& operator=(const Domains &) = default ;
      Domains& operator=(Domains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Domain : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Domain& obj) { 
          DARABONBA_PTR_TO_JSON(AliDomain, aliDomain_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
          DARABONBA_PTR_TO_JSON(DomainId, domainId_);
          DARABONBA_PTR_TO_JSON(DomainLoggingSwitchStatus, domainLoggingSwitchStatus_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(GroupId, groupId_);
          DARABONBA_PTR_TO_JSON(GroupName, groupName_);
          DARABONBA_PTR_TO_JSON(InstanceEndTime, instanceEndTime_);
          DARABONBA_PTR_TO_JSON(InstanceExpired, instanceExpired_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(PunyCode, punyCode_);
          DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_TO_JSON(RegistrantEmail, registrantEmail_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SlaveDnsStatus, slaveDnsStatus_);
          DARABONBA_PTR_TO_JSON(Starmark, starmark_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
          DARABONBA_PTR_TO_JSON(VersionName, versionName_);
        };
        friend void from_json(const Darabonba::Json& j, Domain& obj) { 
          DARABONBA_PTR_FROM_JSON(AliDomain, aliDomain_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
          DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
          DARABONBA_PTR_FROM_JSON(DomainLoggingSwitchStatus, domainLoggingSwitchStatus_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
          DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
          DARABONBA_PTR_FROM_JSON(InstanceEndTime, instanceEndTime_);
          DARABONBA_PTR_FROM_JSON(InstanceExpired, instanceExpired_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(PunyCode, punyCode_);
          DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_FROM_JSON(RegistrantEmail, registrantEmail_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SlaveDnsStatus, slaveDnsStatus_);
          DARABONBA_PTR_FROM_JSON(Starmark, starmark_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
          DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
        };
        Domain() = default ;
        Domain(const Domain &) = default ;
        Domain(Domain &&) = default ;
        Domain(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Domain() = default ;
        Domain& operator=(const Domain &) = default ;
        Domain& operator=(Domain &&) = default ;
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
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
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
            virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The key of tag N added to the resource.
            shared_ptr<string> key_ {};
            // The value of tag N added to the resource.
            shared_ptr<string> value_ {};
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

        class DnsServers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DnsServers& obj) { 
            DARABONBA_PTR_TO_JSON(DnsServer, dnsServer_);
          };
          friend void from_json(const Darabonba::Json& j, DnsServers& obj) { 
            DARABONBA_PTR_FROM_JSON(DnsServer, dnsServer_);
          };
          DnsServers() = default ;
          DnsServers(const DnsServers &) = default ;
          DnsServers(DnsServers &&) = default ;
          DnsServers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DnsServers() = default ;
          DnsServers& operator=(const DnsServers &) = default ;
          DnsServers& operator=(DnsServers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->dnsServer_ == nullptr; };
          // dnsServer Field Functions 
          bool hasDnsServer() const { return this->dnsServer_ != nullptr;};
          void deleteDnsServer() { this->dnsServer_ = nullptr;};
          inline const vector<string> & getDnsServer() const { DARABONBA_PTR_GET_CONST(dnsServer_, vector<string>) };
          inline vector<string> getDnsServer() { DARABONBA_PTR_GET(dnsServer_, vector<string>) };
          inline DnsServers& setDnsServer(const vector<string> & dnsServer) { DARABONBA_PTR_SET_VALUE(dnsServer_, dnsServer) };
          inline DnsServers& setDnsServer(vector<string> && dnsServer) { DARABONBA_PTR_SET_RVALUE(dnsServer_, dnsServer) };


        protected:
          shared_ptr<vector<string>> dnsServer_ {};
        };

        virtual bool empty() const override { return this->aliDomain_ == nullptr
        && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->dnsServers_ == nullptr && this->domainId_ == nullptr && this->domainLoggingSwitchStatus_ == nullptr
        && this->domainName_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->instanceEndTime_ == nullptr && this->instanceExpired_ == nullptr
        && this->instanceId_ == nullptr && this->punyCode_ == nullptr && this->recordCount_ == nullptr && this->registrantEmail_ == nullptr && this->remark_ == nullptr
        && this->resourceGroupId_ == nullptr && this->slaveDnsStatus_ == nullptr && this->starmark_ == nullptr && this->tags_ == nullptr && this->versionCode_ == nullptr
        && this->versionName_ == nullptr; };
        // aliDomain Field Functions 
        bool hasAliDomain() const { return this->aliDomain_ != nullptr;};
        void deleteAliDomain() { this->aliDomain_ = nullptr;};
        inline bool getAliDomain() const { DARABONBA_PTR_GET_DEFAULT(aliDomain_, false) };
        inline Domain& setAliDomain(bool aliDomain) { DARABONBA_PTR_SET_VALUE(aliDomain_, aliDomain) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Domain& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Domain& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // dnsServers Field Functions 
        bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
        void deleteDnsServers() { this->dnsServers_ = nullptr;};
        inline const Domain::DnsServers & getDnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, Domain::DnsServers) };
        inline Domain::DnsServers getDnsServers() { DARABONBA_PTR_GET(dnsServers_, Domain::DnsServers) };
        inline Domain& setDnsServers(const Domain::DnsServers & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
        inline Domain& setDnsServers(Domain::DnsServers && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


        // domainId Field Functions 
        bool hasDomainId() const { return this->domainId_ != nullptr;};
        void deleteDomainId() { this->domainId_ = nullptr;};
        inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
        inline Domain& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


        // domainLoggingSwitchStatus Field Functions 
        bool hasDomainLoggingSwitchStatus() const { return this->domainLoggingSwitchStatus_ != nullptr;};
        void deleteDomainLoggingSwitchStatus() { this->domainLoggingSwitchStatus_ = nullptr;};
        inline string getDomainLoggingSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(domainLoggingSwitchStatus_, "") };
        inline Domain& setDomainLoggingSwitchStatus(string domainLoggingSwitchStatus) { DARABONBA_PTR_SET_VALUE(domainLoggingSwitchStatus_, domainLoggingSwitchStatus) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline Domain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // groupId Field Functions 
        bool hasGroupId() const { return this->groupId_ != nullptr;};
        void deleteGroupId() { this->groupId_ = nullptr;};
        inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
        inline Domain& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


        // groupName Field Functions 
        bool hasGroupName() const { return this->groupName_ != nullptr;};
        void deleteGroupName() { this->groupName_ = nullptr;};
        inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
        inline Domain& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


        // instanceEndTime Field Functions 
        bool hasInstanceEndTime() const { return this->instanceEndTime_ != nullptr;};
        void deleteInstanceEndTime() { this->instanceEndTime_ = nullptr;};
        inline string getInstanceEndTime() const { DARABONBA_PTR_GET_DEFAULT(instanceEndTime_, "") };
        inline Domain& setInstanceEndTime(string instanceEndTime) { DARABONBA_PTR_SET_VALUE(instanceEndTime_, instanceEndTime) };


        // instanceExpired Field Functions 
        bool hasInstanceExpired() const { return this->instanceExpired_ != nullptr;};
        void deleteInstanceExpired() { this->instanceExpired_ = nullptr;};
        inline bool getInstanceExpired() const { DARABONBA_PTR_GET_DEFAULT(instanceExpired_, false) };
        inline Domain& setInstanceExpired(bool instanceExpired) { DARABONBA_PTR_SET_VALUE(instanceExpired_, instanceExpired) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Domain& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // punyCode Field Functions 
        bool hasPunyCode() const { return this->punyCode_ != nullptr;};
        void deletePunyCode() { this->punyCode_ = nullptr;};
        inline string getPunyCode() const { DARABONBA_PTR_GET_DEFAULT(punyCode_, "") };
        inline Domain& setPunyCode(string punyCode) { DARABONBA_PTR_SET_VALUE(punyCode_, punyCode) };


        // recordCount Field Functions 
        bool hasRecordCount() const { return this->recordCount_ != nullptr;};
        void deleteRecordCount() { this->recordCount_ = nullptr;};
        inline int64_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
        inline Domain& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


        // registrantEmail Field Functions 
        bool hasRegistrantEmail() const { return this->registrantEmail_ != nullptr;};
        void deleteRegistrantEmail() { this->registrantEmail_ = nullptr;};
        inline string getRegistrantEmail() const { DARABONBA_PTR_GET_DEFAULT(registrantEmail_, "") };
        inline Domain& setRegistrantEmail(string registrantEmail) { DARABONBA_PTR_SET_VALUE(registrantEmail_, registrantEmail) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Domain& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline Domain& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // slaveDnsStatus Field Functions 
        bool hasSlaveDnsStatus() const { return this->slaveDnsStatus_ != nullptr;};
        void deleteSlaveDnsStatus() { this->slaveDnsStatus_ = nullptr;};
        inline string getSlaveDnsStatus() const { DARABONBA_PTR_GET_DEFAULT(slaveDnsStatus_, "") };
        inline Domain& setSlaveDnsStatus(string slaveDnsStatus) { DARABONBA_PTR_SET_VALUE(slaveDnsStatus_, slaveDnsStatus) };


        // starmark Field Functions 
        bool hasStarmark() const { return this->starmark_ != nullptr;};
        void deleteStarmark() { this->starmark_ = nullptr;};
        inline bool getStarmark() const { DARABONBA_PTR_GET_DEFAULT(starmark_, false) };
        inline Domain& setStarmark(bool starmark) { DARABONBA_PTR_SET_VALUE(starmark_, starmark) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const Domain::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, Domain::Tags) };
        inline Domain::Tags getTags() { DARABONBA_PTR_GET(tags_, Domain::Tags) };
        inline Domain& setTags(const Domain::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Domain& setTags(Domain::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // versionCode Field Functions 
        bool hasVersionCode() const { return this->versionCode_ != nullptr;};
        void deleteVersionCode() { this->versionCode_ = nullptr;};
        inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
        inline Domain& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


        // versionName Field Functions 
        bool hasVersionName() const { return this->versionName_ != nullptr;};
        void deleteVersionName() { this->versionName_ = nullptr;};
        inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
        inline Domain& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


      protected:
        // Indicates whether the domain name was registered with Alibaba Cloud.
        shared_ptr<bool> aliDomain_ {};
        // The time when the domain name was added. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The time when the domain name was added. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> createTimestamp_ {};
        // The names of the DNS servers configured for the domain name assigned by Alibaba Cloud DNS.
        shared_ptr<Domain::DnsServers> dnsServers_ {};
        // The ID of the domain name.
        shared_ptr<string> domainId_ {};
        // Indicates whether the DNS traffic analysis feature is enabled for the domain name. Valid values:
        // 
        // *   OPEN
        // *   CLOSE
        shared_ptr<string> domainLoggingSwitchStatus_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The ID of the domain name group.
        shared_ptr<string> groupId_ {};
        // The name of the domain name group.
        shared_ptr<string> groupName_ {};
        // The time when the Alibaba Cloud DNS instance expires. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
        shared_ptr<string> instanceEndTime_ {};
        // Indicates whether the Alibaba Cloud DNS instance expires.
        shared_ptr<bool> instanceExpired_ {};
        // The ID of the Alibaba Cloud DNS instance.
        shared_ptr<string> instanceId_ {};
        // The Punycode for the domain name. This parameter is returned only for Chinese domain names.
        shared_ptr<string> punyCode_ {};
        // The number of Domain Name System (DNS) records added for the domain name.
        shared_ptr<int64_t> recordCount_ {};
        // The email address of the registrant.
        shared_ptr<string> registrantEmail_ {};
        // The description of the domain name.
        shared_ptr<string> remark_ {};
        // The ID of the resource group to which the domain name belongs.
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> slaveDnsStatus_ {};
        // Indicates whether the domain name was added to favorites.
        shared_ptr<bool> starmark_ {};
        // The tags added to the resource.
        shared_ptr<Domain::Tags> tags_ {};
        // The edition code of Alibaba Cloud DNS.
        shared_ptr<string> versionCode_ {};
        // The edition of Alibaba Cloud DNS.
        shared_ptr<string> versionName_ {};
      };

      virtual bool empty() const override { return this->domain_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline const vector<Domains::Domain> & getDomain() const { DARABONBA_PTR_GET_CONST(domain_, vector<Domains::Domain>) };
      inline vector<Domains::Domain> getDomain() { DARABONBA_PTR_GET(domain_, vector<Domains::Domain>) };
      inline Domains& setDomain(const vector<Domains::Domain> & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
      inline Domains& setDomain(vector<Domains::Domain> && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    protected:
      shared_ptr<vector<Domains::Domain>> domain_ {};
    };

    virtual bool empty() const override { return this->domains_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const DescribeDomainsResponseBody::Domains & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, DescribeDomainsResponseBody::Domains) };
    inline DescribeDomainsResponseBody::Domains getDomains() { DARABONBA_PTR_GET(domains_, DescribeDomainsResponseBody::Domains) };
    inline DescribeDomainsResponseBody& setDomains(const DescribeDomainsResponseBody::Domains & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeDomainsResponseBody& setDomains(DescribeDomainsResponseBody::Domains && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDomainsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDomainsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain names.
    shared_ptr<DescribeDomainsResponseBody::Domains> domains_ {};
    // The page number of the returned page.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of domain names.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
