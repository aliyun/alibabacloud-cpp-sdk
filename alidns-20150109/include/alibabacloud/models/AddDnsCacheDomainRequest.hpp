// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDDNSCACHEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDDNSCACHEDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddDnsCacheDomainRequestSourceDnsServer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class AddDnsCacheDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddDnsCacheDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheTtlMax, cacheTtlMax_);
      DARABONBA_PTR_TO_JSON(CacheTtlMin, cacheTtlMin_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(SourceDnsServer, sourceDnsServer_);
      DARABONBA_PTR_TO_JSON(SourceEdns, sourceEdns_);
      DARABONBA_PTR_TO_JSON(SourceProtocol, sourceProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, AddDnsCacheDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheTtlMax, cacheTtlMax_);
      DARABONBA_PTR_FROM_JSON(CacheTtlMin, cacheTtlMin_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(SourceDnsServer, sourceDnsServer_);
      DARABONBA_PTR_FROM_JSON(SourceEdns, sourceEdns_);
      DARABONBA_PTR_FROM_JSON(SourceProtocol, sourceProtocol_);
    };
    AddDnsCacheDomainRequest() = default ;
    AddDnsCacheDomainRequest(const AddDnsCacheDomainRequest &) = default ;
    AddDnsCacheDomainRequest(AddDnsCacheDomainRequest &&) = default ;
    AddDnsCacheDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddDnsCacheDomainRequest() = default ;
    AddDnsCacheDomainRequest& operator=(const AddDnsCacheDomainRequest &) = default ;
    AddDnsCacheDomainRequest& operator=(AddDnsCacheDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cacheTtlMax_ == nullptr
        && return this->cacheTtlMin_ == nullptr && return this->domainName_ == nullptr && return this->instanceId_ == nullptr && return this->lang_ == nullptr && return this->remark_ == nullptr
        && return this->sourceDnsServer_ == nullptr && return this->sourceEdns_ == nullptr && return this->sourceProtocol_ == nullptr; };
    // cacheTtlMax Field Functions 
    bool hasCacheTtlMax() const { return this->cacheTtlMax_ != nullptr;};
    void deleteCacheTtlMax() { this->cacheTtlMax_ = nullptr;};
    inline int32_t cacheTtlMax() const { DARABONBA_PTR_GET_DEFAULT(cacheTtlMax_, 0) };
    inline AddDnsCacheDomainRequest& setCacheTtlMax(int32_t cacheTtlMax) { DARABONBA_PTR_SET_VALUE(cacheTtlMax_, cacheTtlMax) };


    // cacheTtlMin Field Functions 
    bool hasCacheTtlMin() const { return this->cacheTtlMin_ != nullptr;};
    void deleteCacheTtlMin() { this->cacheTtlMin_ = nullptr;};
    inline int32_t cacheTtlMin() const { DARABONBA_PTR_GET_DEFAULT(cacheTtlMin_, 0) };
    inline AddDnsCacheDomainRequest& setCacheTtlMin(int32_t cacheTtlMin) { DARABONBA_PTR_SET_VALUE(cacheTtlMin_, cacheTtlMin) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddDnsCacheDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddDnsCacheDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline AddDnsCacheDomainRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline AddDnsCacheDomainRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // sourceDnsServer Field Functions 
    bool hasSourceDnsServer() const { return this->sourceDnsServer_ != nullptr;};
    void deleteSourceDnsServer() { this->sourceDnsServer_ = nullptr;};
    inline const vector<AddDnsCacheDomainRequestSourceDnsServer> & sourceDnsServer() const { DARABONBA_PTR_GET_CONST(sourceDnsServer_, vector<AddDnsCacheDomainRequestSourceDnsServer>) };
    inline vector<AddDnsCacheDomainRequestSourceDnsServer> sourceDnsServer() { DARABONBA_PTR_GET(sourceDnsServer_, vector<AddDnsCacheDomainRequestSourceDnsServer>) };
    inline AddDnsCacheDomainRequest& setSourceDnsServer(const vector<AddDnsCacheDomainRequestSourceDnsServer> & sourceDnsServer) { DARABONBA_PTR_SET_VALUE(sourceDnsServer_, sourceDnsServer) };
    inline AddDnsCacheDomainRequest& setSourceDnsServer(vector<AddDnsCacheDomainRequestSourceDnsServer> && sourceDnsServer) { DARABONBA_PTR_SET_RVALUE(sourceDnsServer_, sourceDnsServer) };


    // sourceEdns Field Functions 
    bool hasSourceEdns() const { return this->sourceEdns_ != nullptr;};
    void deleteSourceEdns() { this->sourceEdns_ = nullptr;};
    inline string sourceEdns() const { DARABONBA_PTR_GET_DEFAULT(sourceEdns_, "") };
    inline AddDnsCacheDomainRequest& setSourceEdns(string sourceEdns) { DARABONBA_PTR_SET_VALUE(sourceEdns_, sourceEdns) };


    // sourceProtocol Field Functions 
    bool hasSourceProtocol() const { return this->sourceProtocol_ != nullptr;};
    void deleteSourceProtocol() { this->sourceProtocol_ = nullptr;};
    inline string sourceProtocol() const { DARABONBA_PTR_GET_DEFAULT(sourceProtocol_, "") };
    inline AddDnsCacheDomainRequest& setSourceProtocol(string sourceProtocol) { DARABONBA_PTR_SET_VALUE(sourceProtocol_, sourceProtocol) };


  protected:
    // The maximum TTL period of the cached data retrieved from the origin DNS server. Unit: seconds. Valid values: 30 to 86400.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> cacheTtlMax_ = nullptr;
    // The minimum time-to-live (TTL) period of the cached data retrieved from the origin Domain Name System (DNS) server. Unit: seconds. Valid values: 30 to 86400.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> cacheTtlMin_ = nullptr;
    // The domain name. You can call the [DescribeDomains](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The instance ID of the cache-accelerated domain name. You can call the [ListCloudGtmInstances](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-listcloudgtminstances?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English Default: **zh**
    std::shared_ptr<string> lang_ = nullptr;
    // The remarks.
    std::shared_ptr<string> remark_ = nullptr;
    // The origin DNS servers. A maximum of 10 origin DNS servers are supported.
    // 
    // This parameter is required.
    std::shared_ptr<vector<AddDnsCacheDomainRequestSourceDnsServer>> sourceDnsServer_ = nullptr;
    // Specifies whether the origin DNS server supports Extension Mechanisms for DNS (EDNS). Valid values: NOT_SUPPORT and SUPPORT.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceEdns_ = nullptr;
    // The origin protocol policy. Valid values: TCP and UDP. Default value: UDP.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceProtocol_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
