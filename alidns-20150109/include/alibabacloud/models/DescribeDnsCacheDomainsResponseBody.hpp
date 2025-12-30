// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSCACHEDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSCACHEDOMAINSRESPONSEBODY_HPP_
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
  class DescribeDnsCacheDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsCacheDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsCacheDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDnsCacheDomainsResponseBody() = default ;
    DescribeDnsCacheDomainsResponseBody(const DescribeDnsCacheDomainsResponseBody &) = default ;
    DescribeDnsCacheDomainsResponseBody(DescribeDnsCacheDomainsResponseBody &&) = default ;
    DescribeDnsCacheDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsCacheDomainsResponseBody() = default ;
    DescribeDnsCacheDomainsResponseBody& operator=(const DescribeDnsCacheDomainsResponseBody &) = default ;
    DescribeDnsCacheDomainsResponseBody& operator=(DescribeDnsCacheDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
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
      class SourceDnsServers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceDnsServers& obj) { 
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(Port, port_);
        };
        friend void from_json(const Darabonba::Json& j, SourceDnsServers& obj) { 
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
        };
        SourceDnsServers() = default ;
        SourceDnsServers(const SourceDnsServers &) = default ;
        SourceDnsServers(SourceDnsServers &&) = default ;
        SourceDnsServers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceDnsServers() = default ;
        SourceDnsServers& operator=(const SourceDnsServers &) = default ;
        SourceDnsServers& operator=(SourceDnsServers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->host_ == nullptr
        && this->port_ == nullptr; };
        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline SourceDnsServers& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
        inline SourceDnsServers& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


      protected:
        // The domain name or IP address of the origin DNS server.
        shared_ptr<string> host_ {};
        // The port of the origin DNS server.
        shared_ptr<string> port_ {};
      };

      virtual bool empty() const override { return this->cacheTtlMax_ == nullptr
        && this->cacheTtlMin_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->domainId_ == nullptr && this->domainName_ == nullptr
        && this->expireTime_ == nullptr && this->expireTimestamp_ == nullptr && this->instanceId_ == nullptr && this->remark_ == nullptr && this->sourceDnsServers_ == nullptr
        && this->sourceEdns_ == nullptr && this->sourceProtocol_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr && this->versionCode_ == nullptr; };
      // cacheTtlMax Field Functions 
      bool hasCacheTtlMax() const { return this->cacheTtlMax_ != nullptr;};
      void deleteCacheTtlMax() { this->cacheTtlMax_ = nullptr;};
      inline int32_t getCacheTtlMax() const { DARABONBA_PTR_GET_DEFAULT(cacheTtlMax_, 0) };
      inline Domains& setCacheTtlMax(int32_t cacheTtlMax) { DARABONBA_PTR_SET_VALUE(cacheTtlMax_, cacheTtlMax) };


      // cacheTtlMin Field Functions 
      bool hasCacheTtlMin() const { return this->cacheTtlMin_ != nullptr;};
      void deleteCacheTtlMin() { this->cacheTtlMin_ = nullptr;};
      inline int32_t getCacheTtlMin() const { DARABONBA_PTR_GET_DEFAULT(cacheTtlMin_, 0) };
      inline Domains& setCacheTtlMin(int32_t cacheTtlMin) { DARABONBA_PTR_SET_VALUE(cacheTtlMin_, cacheTtlMin) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Domains& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Domains& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // domainId Field Functions 
      bool hasDomainId() const { return this->domainId_ != nullptr;};
      void deleteDomainId() { this->domainId_ = nullptr;};
      inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
      inline Domains& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline Domains& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Domains& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // expireTimestamp Field Functions 
      bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
      void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
      inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
      inline Domains& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Domains& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Domains& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // sourceDnsServers Field Functions 
      bool hasSourceDnsServers() const { return this->sourceDnsServers_ != nullptr;};
      void deleteSourceDnsServers() { this->sourceDnsServers_ = nullptr;};
      inline const vector<Domains::SourceDnsServers> & getSourceDnsServers() const { DARABONBA_PTR_GET_CONST(sourceDnsServers_, vector<Domains::SourceDnsServers>) };
      inline vector<Domains::SourceDnsServers> getSourceDnsServers() { DARABONBA_PTR_GET(sourceDnsServers_, vector<Domains::SourceDnsServers>) };
      inline Domains& setSourceDnsServers(const vector<Domains::SourceDnsServers> & sourceDnsServers) { DARABONBA_PTR_SET_VALUE(sourceDnsServers_, sourceDnsServers) };
      inline Domains& setSourceDnsServers(vector<Domains::SourceDnsServers> && sourceDnsServers) { DARABONBA_PTR_SET_RVALUE(sourceDnsServers_, sourceDnsServers) };


      // sourceEdns Field Functions 
      bool hasSourceEdns() const { return this->sourceEdns_ != nullptr;};
      void deleteSourceEdns() { this->sourceEdns_ = nullptr;};
      inline string getSourceEdns() const { DARABONBA_PTR_GET_DEFAULT(sourceEdns_, "") };
      inline Domains& setSourceEdns(string sourceEdns) { DARABONBA_PTR_SET_VALUE(sourceEdns_, sourceEdns) };


      // sourceProtocol Field Functions 
      bool hasSourceProtocol() const { return this->sourceProtocol_ != nullptr;};
      void deleteSourceProtocol() { this->sourceProtocol_ = nullptr;};
      inline string getSourceProtocol() const { DARABONBA_PTR_GET_DEFAULT(sourceProtocol_, "") };
      inline Domains& setSourceProtocol(string sourceProtocol) { DARABONBA_PTR_SET_VALUE(sourceProtocol_, sourceProtocol) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Domains& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // updateTimestamp Field Functions 
      bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
      void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
      inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
      inline Domains& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


      // versionCode Field Functions 
      bool hasVersionCode() const { return this->versionCode_ != nullptr;};
      void deleteVersionCode() { this->versionCode_ = nullptr;};
      inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
      inline Domains& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    protected:
      // The maximum time-to-live (TTL) period of the cached data retrieved from the origin DNS server. Unit: seconds. Valid values: 30 to 86400.
      shared_ptr<int32_t> cacheTtlMax_ {};
      // The minimum TTL period of the cached data retrieved from the origin DNS server. Unit: seconds. Valid values: 30 to 86400.
      shared_ptr<int32_t> cacheTtlMin_ {};
      // The time when the domain name was added. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the domain name was added. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTimestamp_ {};
      // The ID of the cache-accelerated domain name.
      shared_ptr<string> domainId_ {};
      // The cache-accelerated domain name.
      shared_ptr<string> domainName_ {};
      // The time when the instance expires. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> expireTime_ {};
      // The time when the instance expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> expireTimestamp_ {};
      // The instance ID of the cache-accelerated domain name.
      shared_ptr<string> instanceId_ {};
      // The description of the domain name.
      shared_ptr<string> remark_ {};
      // The origin DNS servers.
      shared_ptr<vector<Domains::SourceDnsServers>> sourceDnsServers_ {};
      // Specifies whether the origin Domain Name System (DNS) server supports Extension Mechanisms for DNS (EDNS). Valid values: NOT_SUPPORT and SUPPORT.
      shared_ptr<string> sourceEdns_ {};
      // The origin protocol policy. Valid values: TCP and UDP. Default value: UDP.
      shared_ptr<string> sourceProtocol_ {};
      // The time when the configurations of the domain name were updated. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
      // The time when the configurations of the domain name were updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> updateTimestamp_ {};
      // The edition code of Alibaba Cloud DNS.
      shared_ptr<string> versionCode_ {};
    };

    virtual bool empty() const override { return this->domains_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<DescribeDnsCacheDomainsResponseBody::Domains> & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, vector<DescribeDnsCacheDomainsResponseBody::Domains>) };
    inline vector<DescribeDnsCacheDomainsResponseBody::Domains> getDomains() { DARABONBA_PTR_GET(domains_, vector<DescribeDnsCacheDomainsResponseBody::Domains>) };
    inline DescribeDnsCacheDomainsResponseBody& setDomains(const vector<DescribeDnsCacheDomainsResponseBody::Domains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline DescribeDnsCacheDomainsResponseBody& setDomains(vector<DescribeDnsCacheDomainsResponseBody::Domains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDnsCacheDomainsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDnsCacheDomainsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsCacheDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDnsCacheDomainsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain names.
    shared_ptr<vector<DescribeDnsCacheDomainsResponseBody::Domains>> domains_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
