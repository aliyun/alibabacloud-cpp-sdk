// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSDOMAIN_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINSRESPONSEBODYDOMAINSDOMAIN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainsResponseBodyDomainsDomainDnsServers.hpp>
#include <alibabacloud/models/DescribeDomainsResponseBodyDomainsDomainTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainsResponseBodyDomainsDomain : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainsResponseBodyDomainsDomain& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDomainsResponseBodyDomainsDomain& obj) { 
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
    DescribeDomainsResponseBodyDomainsDomain() = default ;
    DescribeDomainsResponseBodyDomainsDomain(const DescribeDomainsResponseBodyDomainsDomain &) = default ;
    DescribeDomainsResponseBodyDomainsDomain(DescribeDomainsResponseBodyDomainsDomain &&) = default ;
    DescribeDomainsResponseBodyDomainsDomain(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainsResponseBodyDomainsDomain() = default ;
    DescribeDomainsResponseBodyDomainsDomain& operator=(const DescribeDomainsResponseBodyDomainsDomain &) = default ;
    DescribeDomainsResponseBodyDomainsDomain& operator=(DescribeDomainsResponseBodyDomainsDomain &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliDomain_ != nullptr
        && this->createTime_ != nullptr && this->createTimestamp_ != nullptr && this->dnsServers_ != nullptr && this->domainId_ != nullptr && this->domainLoggingSwitchStatus_ != nullptr
        && this->domainName_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->instanceEndTime_ != nullptr && this->instanceExpired_ != nullptr
        && this->instanceId_ != nullptr && this->punyCode_ != nullptr && this->recordCount_ != nullptr && this->registrantEmail_ != nullptr && this->remark_ != nullptr
        && this->resourceGroupId_ != nullptr && this->slaveDnsStatus_ != nullptr && this->starmark_ != nullptr && this->tags_ != nullptr && this->versionCode_ != nullptr
        && this->versionName_ != nullptr; };
    // aliDomain Field Functions 
    bool hasAliDomain() const { return this->aliDomain_ != nullptr;};
    void deleteAliDomain() { this->aliDomain_ = nullptr;};
    inline bool aliDomain() const { DARABONBA_PTR_GET_DEFAULT(aliDomain_, false) };
    inline DescribeDomainsResponseBodyDomainsDomain& setAliDomain(bool aliDomain) { DARABONBA_PTR_SET_VALUE(aliDomain_, aliDomain) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDomainsResponseBodyDomainsDomain& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const Models::DescribeDomainsResponseBodyDomainsDomainDnsServers & dnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, Models::DescribeDomainsResponseBodyDomainsDomainDnsServers) };
    inline Models::DescribeDomainsResponseBodyDomainsDomainDnsServers dnsServers() { DARABONBA_PTR_GET(dnsServers_, Models::DescribeDomainsResponseBodyDomainsDomainDnsServers) };
    inline DescribeDomainsResponseBodyDomainsDomain& setDnsServers(const Models::DescribeDomainsResponseBodyDomainsDomainDnsServers & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline DescribeDomainsResponseBodyDomainsDomain& setDnsServers(Models::DescribeDomainsResponseBodyDomainsDomainDnsServers && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainLoggingSwitchStatus Field Functions 
    bool hasDomainLoggingSwitchStatus() const { return this->domainLoggingSwitchStatus_ != nullptr;};
    void deleteDomainLoggingSwitchStatus() { this->domainLoggingSwitchStatus_ = nullptr;};
    inline string domainLoggingSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(domainLoggingSwitchStatus_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setDomainLoggingSwitchStatus(string domainLoggingSwitchStatus) { DARABONBA_PTR_SET_VALUE(domainLoggingSwitchStatus_, domainLoggingSwitchStatus) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceEndTime Field Functions 
    bool hasInstanceEndTime() const { return this->instanceEndTime_ != nullptr;};
    void deleteInstanceEndTime() { this->instanceEndTime_ = nullptr;};
    inline string instanceEndTime() const { DARABONBA_PTR_GET_DEFAULT(instanceEndTime_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setInstanceEndTime(string instanceEndTime) { DARABONBA_PTR_SET_VALUE(instanceEndTime_, instanceEndTime) };


    // instanceExpired Field Functions 
    bool hasInstanceExpired() const { return this->instanceExpired_ != nullptr;};
    void deleteInstanceExpired() { this->instanceExpired_ = nullptr;};
    inline bool instanceExpired() const { DARABONBA_PTR_GET_DEFAULT(instanceExpired_, false) };
    inline DescribeDomainsResponseBodyDomainsDomain& setInstanceExpired(bool instanceExpired) { DARABONBA_PTR_SET_VALUE(instanceExpired_, instanceExpired) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // punyCode Field Functions 
    bool hasPunyCode() const { return this->punyCode_ != nullptr;};
    void deletePunyCode() { this->punyCode_ = nullptr;};
    inline string punyCode() const { DARABONBA_PTR_GET_DEFAULT(punyCode_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setPunyCode(string punyCode) { DARABONBA_PTR_SET_VALUE(punyCode_, punyCode) };


    // recordCount Field Functions 
    bool hasRecordCount() const { return this->recordCount_ != nullptr;};
    void deleteRecordCount() { this->recordCount_ = nullptr;};
    inline int64_t recordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
    inline DescribeDomainsResponseBodyDomainsDomain& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    // registrantEmail Field Functions 
    bool hasRegistrantEmail() const { return this->registrantEmail_ != nullptr;};
    void deleteRegistrantEmail() { this->registrantEmail_ = nullptr;};
    inline string registrantEmail() const { DARABONBA_PTR_GET_DEFAULT(registrantEmail_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setRegistrantEmail(string registrantEmail) { DARABONBA_PTR_SET_VALUE(registrantEmail_, registrantEmail) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveDnsStatus Field Functions 
    bool hasSlaveDnsStatus() const { return this->slaveDnsStatus_ != nullptr;};
    void deleteSlaveDnsStatus() { this->slaveDnsStatus_ = nullptr;};
    inline string slaveDnsStatus() const { DARABONBA_PTR_GET_DEFAULT(slaveDnsStatus_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setSlaveDnsStatus(string slaveDnsStatus) { DARABONBA_PTR_SET_VALUE(slaveDnsStatus_, slaveDnsStatus) };


    // starmark Field Functions 
    bool hasStarmark() const { return this->starmark_ != nullptr;};
    void deleteStarmark() { this->starmark_ = nullptr;};
    inline bool starmark() const { DARABONBA_PTR_GET_DEFAULT(starmark_, false) };
    inline DescribeDomainsResponseBodyDomainsDomain& setStarmark(bool starmark) { DARABONBA_PTR_SET_VALUE(starmark_, starmark) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeDomainsResponseBodyDomainsDomainTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeDomainsResponseBodyDomainsDomainTags) };
    inline Models::DescribeDomainsResponseBodyDomainsDomainTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeDomainsResponseBodyDomainsDomainTags) };
    inline DescribeDomainsResponseBodyDomainsDomain& setTags(const Models::DescribeDomainsResponseBodyDomainsDomainTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeDomainsResponseBodyDomainsDomain& setTags(Models::DescribeDomainsResponseBodyDomainsDomainTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline DescribeDomainsResponseBodyDomainsDomain& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // Indicates whether the domain name was registered with Alibaba Cloud.
    std::shared_ptr<bool> aliDomain_ = nullptr;
    // The time when the domain name was added. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the domain name was added. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The names of the DNS servers configured for the domain name assigned by Alibaba Cloud DNS.
    std::shared_ptr<Models::DescribeDomainsResponseBodyDomainsDomainDnsServers> dnsServers_ = nullptr;
    // The ID of the domain name.
    std::shared_ptr<string> domainId_ = nullptr;
    // Indicates whether the DNS traffic analysis feature is enabled for the domain name. Valid values:
    // 
    // *   OPEN
    // *   CLOSE
    std::shared_ptr<string> domainLoggingSwitchStatus_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the domain name group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the domain name group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The time when the Alibaba Cloud DNS instance expires. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> instanceEndTime_ = nullptr;
    // Indicates whether the Alibaba Cloud DNS instance expires.
    std::shared_ptr<bool> instanceExpired_ = nullptr;
    // The ID of the Alibaba Cloud DNS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The Punycode for the domain name. This parameter is returned only for Chinese domain names.
    std::shared_ptr<string> punyCode_ = nullptr;
    // The number of Domain Name System (DNS) records added for the domain name.
    std::shared_ptr<int64_t> recordCount_ = nullptr;
    // The email address of the registrant.
    std::shared_ptr<string> registrantEmail_ = nullptr;
    // The description of the domain name.
    std::shared_ptr<string> remark_ = nullptr;
    // The ID of the resource group to which the domain name belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> slaveDnsStatus_ = nullptr;
    // Indicates whether the domain name was added to favorites.
    std::shared_ptr<bool> starmark_ = nullptr;
    // The tags added to the resource.
    std::shared_ptr<Models::DescribeDomainsResponseBodyDomainsDomainTags> tags_ = nullptr;
    // The edition code of Alibaba Cloud DNS.
    std::shared_ptr<string> versionCode_ = nullptr;
    // The edition of Alibaba Cloud DNS.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
