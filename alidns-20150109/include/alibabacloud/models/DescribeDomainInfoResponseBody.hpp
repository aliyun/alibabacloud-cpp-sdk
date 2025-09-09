// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAININFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAININFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainInfoResponseBodyAvailableTtls.hpp>
#include <alibabacloud/models/DescribeDomainInfoResponseBodyDnsServers.hpp>
#include <alibabacloud/models/DescribeDomainInfoResponseBodyRecordLines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliDomain, aliDomain_);
      DARABONBA_PTR_TO_JSON(AvailableTtls, availableTtls_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainLoggingSwitchStatus, domainLoggingSwitchStatus_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InBlackHole, inBlackHole_);
      DARABONBA_PTR_TO_JSON(InClean, inClean_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LineType, lineType_);
      DARABONBA_PTR_TO_JSON(MinTtl, minTtl_);
      DARABONBA_PTR_TO_JSON(PunyCode, punyCode_);
      DARABONBA_PTR_TO_JSON(RecordLineTreeJson, recordLineTreeJson_);
      DARABONBA_PTR_TO_JSON(RecordLines, recordLines_);
      DARABONBA_PTR_TO_JSON(RegionLines, regionLines_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SlaveDns, slaveDns_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_TO_JSON(VersionName, versionName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliDomain, aliDomain_);
      DARABONBA_PTR_FROM_JSON(AvailableTtls, availableTtls_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainLoggingSwitchStatus, domainLoggingSwitchStatus_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InBlackHole, inBlackHole_);
      DARABONBA_PTR_FROM_JSON(InClean, inClean_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LineType, lineType_);
      DARABONBA_PTR_FROM_JSON(MinTtl, minTtl_);
      DARABONBA_PTR_FROM_JSON(PunyCode, punyCode_);
      DARABONBA_PTR_FROM_JSON(RecordLineTreeJson, recordLineTreeJson_);
      DARABONBA_PTR_FROM_JSON(RecordLines, recordLines_);
      DARABONBA_PTR_FROM_JSON(RegionLines, regionLines_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SlaveDns, slaveDns_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
      DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
    };
    DescribeDomainInfoResponseBody() = default ;
    DescribeDomainInfoResponseBody(const DescribeDomainInfoResponseBody &) = default ;
    DescribeDomainInfoResponseBody(DescribeDomainInfoResponseBody &&) = default ;
    DescribeDomainInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainInfoResponseBody() = default ;
    DescribeDomainInfoResponseBody& operator=(const DescribeDomainInfoResponseBody &) = default ;
    DescribeDomainInfoResponseBody& operator=(DescribeDomainInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliDomain_ != nullptr
        && this->availableTtls_ != nullptr && this->createTime_ != nullptr && this->dnsServers_ != nullptr && this->domainId_ != nullptr && this->domainLoggingSwitchStatus_ != nullptr
        && this->domainName_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->inBlackHole_ != nullptr && this->inClean_ != nullptr
        && this->instanceId_ != nullptr && this->lineType_ != nullptr && this->minTtl_ != nullptr && this->punyCode_ != nullptr && this->recordLineTreeJson_ != nullptr
        && this->recordLines_ != nullptr && this->regionLines_ != nullptr && this->remark_ != nullptr && this->requestId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->slaveDns_ != nullptr && this->subDomain_ != nullptr && this->versionCode_ != nullptr && this->versionName_ != nullptr; };
    // aliDomain Field Functions 
    bool hasAliDomain() const { return this->aliDomain_ != nullptr;};
    void deleteAliDomain() { this->aliDomain_ = nullptr;};
    inline bool aliDomain() const { DARABONBA_PTR_GET_DEFAULT(aliDomain_, false) };
    inline DescribeDomainInfoResponseBody& setAliDomain(bool aliDomain) { DARABONBA_PTR_SET_VALUE(aliDomain_, aliDomain) };


    // availableTtls Field Functions 
    bool hasAvailableTtls() const { return this->availableTtls_ != nullptr;};
    void deleteAvailableTtls() { this->availableTtls_ = nullptr;};
    inline const DescribeDomainInfoResponseBodyAvailableTtls & availableTtls() const { DARABONBA_PTR_GET_CONST(availableTtls_, DescribeDomainInfoResponseBodyAvailableTtls) };
    inline DescribeDomainInfoResponseBodyAvailableTtls availableTtls() { DARABONBA_PTR_GET(availableTtls_, DescribeDomainInfoResponseBodyAvailableTtls) };
    inline DescribeDomainInfoResponseBody& setAvailableTtls(const DescribeDomainInfoResponseBodyAvailableTtls & availableTtls) { DARABONBA_PTR_SET_VALUE(availableTtls_, availableTtls) };
    inline DescribeDomainInfoResponseBody& setAvailableTtls(DescribeDomainInfoResponseBodyAvailableTtls && availableTtls) { DARABONBA_PTR_SET_RVALUE(availableTtls_, availableTtls) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDomainInfoResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const DescribeDomainInfoResponseBodyDnsServers & dnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, DescribeDomainInfoResponseBodyDnsServers) };
    inline DescribeDomainInfoResponseBodyDnsServers dnsServers() { DARABONBA_PTR_GET(dnsServers_, DescribeDomainInfoResponseBodyDnsServers) };
    inline DescribeDomainInfoResponseBody& setDnsServers(const DescribeDomainInfoResponseBodyDnsServers & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline DescribeDomainInfoResponseBody& setDnsServers(DescribeDomainInfoResponseBodyDnsServers && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DescribeDomainInfoResponseBody& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainLoggingSwitchStatus Field Functions 
    bool hasDomainLoggingSwitchStatus() const { return this->domainLoggingSwitchStatus_ != nullptr;};
    void deleteDomainLoggingSwitchStatus() { this->domainLoggingSwitchStatus_ = nullptr;};
    inline string domainLoggingSwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(domainLoggingSwitchStatus_, "") };
    inline DescribeDomainInfoResponseBody& setDomainLoggingSwitchStatus(string domainLoggingSwitchStatus) { DARABONBA_PTR_SET_VALUE(domainLoggingSwitchStatus_, domainLoggingSwitchStatus) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainInfoResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDomainInfoResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeDomainInfoResponseBody& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // inBlackHole Field Functions 
    bool hasInBlackHole() const { return this->inBlackHole_ != nullptr;};
    void deleteInBlackHole() { this->inBlackHole_ = nullptr;};
    inline bool inBlackHole() const { DARABONBA_PTR_GET_DEFAULT(inBlackHole_, false) };
    inline DescribeDomainInfoResponseBody& setInBlackHole(bool inBlackHole) { DARABONBA_PTR_SET_VALUE(inBlackHole_, inBlackHole) };


    // inClean Field Functions 
    bool hasInClean() const { return this->inClean_ != nullptr;};
    void deleteInClean() { this->inClean_ = nullptr;};
    inline bool inClean() const { DARABONBA_PTR_GET_DEFAULT(inClean_, false) };
    inline DescribeDomainInfoResponseBody& setInClean(bool inClean) { DARABONBA_PTR_SET_VALUE(inClean_, inClean) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDomainInfoResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lineType Field Functions 
    bool hasLineType() const { return this->lineType_ != nullptr;};
    void deleteLineType() { this->lineType_ = nullptr;};
    inline string lineType() const { DARABONBA_PTR_GET_DEFAULT(lineType_, "") };
    inline DescribeDomainInfoResponseBody& setLineType(string lineType) { DARABONBA_PTR_SET_VALUE(lineType_, lineType) };


    // minTtl Field Functions 
    bool hasMinTtl() const { return this->minTtl_ != nullptr;};
    void deleteMinTtl() { this->minTtl_ = nullptr;};
    inline int64_t minTtl() const { DARABONBA_PTR_GET_DEFAULT(minTtl_, 0L) };
    inline DescribeDomainInfoResponseBody& setMinTtl(int64_t minTtl) { DARABONBA_PTR_SET_VALUE(minTtl_, minTtl) };


    // punyCode Field Functions 
    bool hasPunyCode() const { return this->punyCode_ != nullptr;};
    void deletePunyCode() { this->punyCode_ = nullptr;};
    inline string punyCode() const { DARABONBA_PTR_GET_DEFAULT(punyCode_, "") };
    inline DescribeDomainInfoResponseBody& setPunyCode(string punyCode) { DARABONBA_PTR_SET_VALUE(punyCode_, punyCode) };


    // recordLineTreeJson Field Functions 
    bool hasRecordLineTreeJson() const { return this->recordLineTreeJson_ != nullptr;};
    void deleteRecordLineTreeJson() { this->recordLineTreeJson_ = nullptr;};
    inline string recordLineTreeJson() const { DARABONBA_PTR_GET_DEFAULT(recordLineTreeJson_, "") };
    inline DescribeDomainInfoResponseBody& setRecordLineTreeJson(string recordLineTreeJson) { DARABONBA_PTR_SET_VALUE(recordLineTreeJson_, recordLineTreeJson) };


    // recordLines Field Functions 
    bool hasRecordLines() const { return this->recordLines_ != nullptr;};
    void deleteRecordLines() { this->recordLines_ = nullptr;};
    inline const DescribeDomainInfoResponseBodyRecordLines & recordLines() const { DARABONBA_PTR_GET_CONST(recordLines_, DescribeDomainInfoResponseBodyRecordLines) };
    inline DescribeDomainInfoResponseBodyRecordLines recordLines() { DARABONBA_PTR_GET(recordLines_, DescribeDomainInfoResponseBodyRecordLines) };
    inline DescribeDomainInfoResponseBody& setRecordLines(const DescribeDomainInfoResponseBodyRecordLines & recordLines) { DARABONBA_PTR_SET_VALUE(recordLines_, recordLines) };
    inline DescribeDomainInfoResponseBody& setRecordLines(DescribeDomainInfoResponseBodyRecordLines && recordLines) { DARABONBA_PTR_SET_RVALUE(recordLines_, recordLines) };


    // regionLines Field Functions 
    bool hasRegionLines() const { return this->regionLines_ != nullptr;};
    void deleteRegionLines() { this->regionLines_ = nullptr;};
    inline bool regionLines() const { DARABONBA_PTR_GET_DEFAULT(regionLines_, false) };
    inline DescribeDomainInfoResponseBody& setRegionLines(bool regionLines) { DARABONBA_PTR_SET_VALUE(regionLines_, regionLines) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeDomainInfoResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDomainInfoResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // slaveDns Field Functions 
    bool hasSlaveDns() const { return this->slaveDns_ != nullptr;};
    void deleteSlaveDns() { this->slaveDns_ = nullptr;};
    inline bool slaveDns() const { DARABONBA_PTR_GET_DEFAULT(slaveDns_, false) };
    inline DescribeDomainInfoResponseBody& setSlaveDns(bool slaveDns) { DARABONBA_PTR_SET_VALUE(slaveDns_, slaveDns) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline bool subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, false) };
    inline DescribeDomainInfoResponseBody& setSubDomain(bool subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeDomainInfoResponseBody& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    // versionName Field Functions 
    bool hasVersionName() const { return this->versionName_ != nullptr;};
    void deleteVersionName() { this->versionName_ = nullptr;};
    inline string versionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
    inline DescribeDomainInfoResponseBody& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


  protected:
    // Indicates whether the domain name was registered in Alibaba Cloud.
    std::shared_ptr<bool> aliDomain_ = nullptr;
    // The available time to live (TTL) values that can be configured for the domain name. Available TTL values are not returned by default. If you want to query such information, set NeedDetailAttributes to true.
    std::shared_ptr<DescribeDomainInfoResponseBodyAvailableTtls> availableTtls_ = nullptr;
    // The time when the domain name was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The DNS servers that are used to resolve the domain name.
    std::shared_ptr<DescribeDomainInfoResponseBodyDnsServers> dnsServers_ = nullptr;
    // The ID of the domain name.
    std::shared_ptr<string> domainId_ = nullptr;
    // Indicates whether the DNS traffic analysis feature is enabled. Valid values:
    std::shared_ptr<string> domainLoggingSwitchStatus_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the domain name group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the domain name group.
    std::shared_ptr<string> groupName_ = nullptr;
    // Indicates whether blackhole filtering was triggered.
    std::shared_ptr<bool> inBlackHole_ = nullptr;
    // Indicates whether traffic scrubbing was in progress.
    std::shared_ptr<bool> inClean_ = nullptr;
    // The ID of the Alibaba Cloud DNS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The type of the DNS request line.
    std::shared_ptr<string> lineType_ = nullptr;
    // The minimum TTL value.
    std::shared_ptr<int64_t> minTtl_ = nullptr;
    // The Punycode for the domain name. This parameter is returned only for Chinese domain names.
    std::shared_ptr<string> punyCode_ = nullptr;
    // The tree-structure DNS request lines.
    std::shared_ptr<string> recordLineTreeJson_ = nullptr;
    // The DNS request lines.
    std::shared_ptr<DescribeDomainInfoResponseBodyRecordLines> recordLines_ = nullptr;
    // Indicates whether the DNS request lines are regional lines.
    std::shared_ptr<bool> regionLines_ = nullptr;
    // The description.
    std::shared_ptr<string> remark_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether secondary DNS is supported.
    std::shared_ptr<bool> slaveDns_ = nullptr;
    // Indicates whether the queried domain name is a hosted subdomain name. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> subDomain_ = nullptr;
    // The version ID of Alibaba Cloud DNS.
    std::shared_ptr<string> versionCode_ = nullptr;
    // The edition of Alibaba Cloud DNS.
    std::shared_ptr<string> versionName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
