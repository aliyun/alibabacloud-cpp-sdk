// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSCACHEDOMAINSRESPONSEBODYDOMAINS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSCACHEDOMAINSRESPONSEBODYDOMAINS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsCacheDomainsResponseBodyDomainsSourceDnsServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsCacheDomainsResponseBodyDomains : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsCacheDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_TO_JSON(CacheTtlMax, cacheTtlMax_);
      DARABONBA_PTR_TO_JSON(CacheTtlMin, cacheTtlMin_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SourceDnsServers, sourceDnsServers_);
      DARABONBA_PTR_TO_JSON(SourceEdns, sourceEdns_);
      DARABONBA_PTR_TO_JSON(SourceProtocol, sourceProtocol_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsCacheDomainsResponseBodyDomains& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheTtlMax, cacheTtlMax_);
      DARABONBA_PTR_FROM_JSON(CacheTtlMin, cacheTtlMin_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SourceDnsServers, sourceDnsServers_);
      DARABONBA_PTR_FROM_JSON(SourceEdns, sourceEdns_);
      DARABONBA_PTR_FROM_JSON(SourceProtocol, sourceProtocol_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    DescribeDnsCacheDomainsResponseBodyDomains() = default ;
    DescribeDnsCacheDomainsResponseBodyDomains(const DescribeDnsCacheDomainsResponseBodyDomains &) = default ;
    DescribeDnsCacheDomainsResponseBodyDomains(DescribeDnsCacheDomainsResponseBodyDomains &&) = default ;
    DescribeDnsCacheDomainsResponseBodyDomains(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsCacheDomainsResponseBodyDomains() = default ;
    DescribeDnsCacheDomainsResponseBodyDomains& operator=(const DescribeDnsCacheDomainsResponseBodyDomains &) = default ;
    DescribeDnsCacheDomainsResponseBodyDomains& operator=(DescribeDnsCacheDomainsResponseBodyDomains &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheTtlMax_ == nullptr
        && return this->cacheTtlMin_ == nullptr && return this->createTime_ == nullptr && return this->createTimestamp_ == nullptr && return this->domainId_ == nullptr && return this->domainName_ == nullptr
        && return this->expireTime_ == nullptr && return this->expireTimestamp_ == nullptr && return this->instanceId_ == nullptr && return this->remark_ == nullptr && return this->sourceDnsServers_ == nullptr
        && return this->sourceEdns_ == nullptr && return this->sourceProtocol_ == nullptr && return this->updateTime_ == nullptr && return this->updateTimestamp_ == nullptr && return this->versionCode_ == nullptr; };
    // cacheTtlMax Field Functions 
    bool hasCacheTtlMax() const { return this->cacheTtlMax_ != nullptr;};
    void deleteCacheTtlMax() { this->cacheTtlMax_ = nullptr;};
    inline int32_t cacheTtlMax() const { DARABONBA_PTR_GET_DEFAULT(cacheTtlMax_, 0) };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setCacheTtlMax(int32_t cacheTtlMax) { DARABONBA_PTR_SET_VALUE(cacheTtlMax_, cacheTtlMax) };


    // cacheTtlMin Field Functions 
    bool hasCacheTtlMin() const { return this->cacheTtlMin_ != nullptr;};
    void deleteCacheTtlMin() { this->cacheTtlMin_ = nullptr;};
    inline int32_t cacheTtlMin() const { DARABONBA_PTR_GET_DEFAULT(cacheTtlMin_, 0) };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setCacheTtlMin(int32_t cacheTtlMin) { DARABONBA_PTR_SET_VALUE(cacheTtlMin_, cacheTtlMin) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t expireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sourceDnsServers Field Functions 
    bool hasSourceDnsServers() const { return this->sourceDnsServers_ != nullptr;};
    void deleteSourceDnsServers() { this->sourceDnsServers_ = nullptr;};
    inline const vector<Models::DescribeDnsCacheDomainsResponseBodyDomainsSourceDnsServers> & sourceDnsServers() const { DARABONBA_PTR_GET_CONST(sourceDnsServers_, vector<Models::DescribeDnsCacheDomainsResponseBodyDomainsSourceDnsServers>) };
    inline vector<Models::DescribeDnsCacheDomainsResponseBodyDomainsSourceDnsServers> sourceDnsServers() { DARABONBA_PTR_GET(sourceDnsServers_, vector<Models::DescribeDnsCacheDomainsResponseBodyDomainsSourceDnsServers>) };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setSourceDnsServers(const vector<Models::DescribeDnsCacheDomainsResponseBodyDomainsSourceDnsServers> & sourceDnsServers) { DARABONBA_PTR_SET_VALUE(sourceDnsServers_, sourceDnsServers) };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setSourceDnsServers(vector<Models::DescribeDnsCacheDomainsResponseBodyDomainsSourceDnsServers> && sourceDnsServers) { DARABONBA_PTR_SET_RVALUE(sourceDnsServers_, sourceDnsServers) };


    // sourceEdns Field Functions 
    bool hasSourceEdns() const { return this->sourceEdns_ != nullptr;};
    void deleteSourceEdns() { this->sourceEdns_ = nullptr;};
    inline string sourceEdns() const { DARABONBA_PTR_GET_DEFAULT(sourceEdns_, "") };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setSourceEdns(string sourceEdns) { DARABONBA_PTR_SET_VALUE(sourceEdns_, sourceEdns) };


    // sourceProtocol Field Functions 
    bool hasSourceProtocol() const { return this->sourceProtocol_ != nullptr;};
    void deleteSourceProtocol() { this->sourceProtocol_ = nullptr;};
    inline string sourceProtocol() const { DARABONBA_PTR_GET_DEFAULT(sourceProtocol_, "") };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setSourceProtocol(string sourceProtocol) { DARABONBA_PTR_SET_VALUE(sourceProtocol_, sourceProtocol) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeDnsCacheDomainsResponseBodyDomains& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The maximum time-to-live (TTL) period of the cached data retrieved from the origin DNS server. Unit: seconds. Valid values: 30 to 86400.
    std::shared_ptr<int32_t> cacheTtlMax_ = nullptr;
    // The minimum TTL period of the cached data retrieved from the origin DNS server. Unit: seconds. Valid values: 30 to 86400.
    std::shared_ptr<int32_t> cacheTtlMin_ = nullptr;
    // The time when the domain name was added. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the domain name was added. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The ID of the cache-accelerated domain name.
    std::shared_ptr<string> domainId_ = nullptr;
    // The cache-accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The time when the instance expires. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The time when the instance expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> expireTimestamp_ = nullptr;
    // The instance ID of the cache-accelerated domain name.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The description of the domain name.
    std::shared_ptr<string> remark_ = nullptr;
    // The origin DNS servers.
    std::shared_ptr<vector<Models::DescribeDnsCacheDomainsResponseBodyDomainsSourceDnsServers>> sourceDnsServers_ = nullptr;
    // Specifies whether the origin Domain Name System (DNS) server supports Extension Mechanisms for DNS (EDNS). Valid values: NOT_SUPPORT and SUPPORT.
    std::shared_ptr<string> sourceEdns_ = nullptr;
    // The origin protocol policy. Valid values: TCP and UDP. Default value: UDP.
    std::shared_ptr<string> sourceProtocol_ = nullptr;
    // The time when the configurations of the domain name were updated. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The time when the configurations of the domain name were updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    // The edition code of Alibaba Cloud DNS.
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
