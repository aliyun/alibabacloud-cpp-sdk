// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSCACHEDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSCACHEDOMAINREQUEST_HPP_
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
  class UpdateDnsCacheDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDnsCacheDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CacheTtlMax, cacheTtlMax_);
      DARABONBA_PTR_TO_JSON(CacheTtlMin, cacheTtlMin_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceDnsServer, sourceDnsServer_);
      DARABONBA_PTR_TO_JSON(SourceEdns, sourceEdns_);
      DARABONBA_PTR_TO_JSON(SourceProtocol, sourceProtocol_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDnsCacheDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CacheTtlMax, cacheTtlMax_);
      DARABONBA_PTR_FROM_JSON(CacheTtlMin, cacheTtlMin_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceDnsServer, sourceDnsServer_);
      DARABONBA_PTR_FROM_JSON(SourceEdns, sourceEdns_);
      DARABONBA_PTR_FROM_JSON(SourceProtocol, sourceProtocol_);
    };
    UpdateDnsCacheDomainRequest() = default ;
    UpdateDnsCacheDomainRequest(const UpdateDnsCacheDomainRequest &) = default ;
    UpdateDnsCacheDomainRequest(UpdateDnsCacheDomainRequest &&) = default ;
    UpdateDnsCacheDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDnsCacheDomainRequest() = default ;
    UpdateDnsCacheDomainRequest& operator=(const UpdateDnsCacheDomainRequest &) = default ;
    UpdateDnsCacheDomainRequest& operator=(UpdateDnsCacheDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceDnsServer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceDnsServer& obj) { 
        DARABONBA_PTR_TO_JSON(Host, host_);
        DARABONBA_PTR_TO_JSON(Port, port_);
      };
      friend void from_json(const Darabonba::Json& j, SourceDnsServer& obj) { 
        DARABONBA_PTR_FROM_JSON(Host, host_);
        DARABONBA_PTR_FROM_JSON(Port, port_);
      };
      SourceDnsServer() = default ;
      SourceDnsServer(const SourceDnsServer &) = default ;
      SourceDnsServer(SourceDnsServer &&) = default ;
      SourceDnsServer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceDnsServer() = default ;
      SourceDnsServer& operator=(const SourceDnsServer &) = default ;
      SourceDnsServer& operator=(SourceDnsServer &&) = default ;
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
      inline SourceDnsServer& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


      // port Field Functions 
      bool hasPort() const { return this->port_ != nullptr;};
      void deletePort() { this->port_ = nullptr;};
      inline string getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, "") };
      inline SourceDnsServer& setPort(string port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    protected:
      // The domain name or IP address of the origin DNS server.
      shared_ptr<string> host_ {};
      // The port of the origin DNS server.
      shared_ptr<string> port_ {};
    };

    virtual bool empty() const override { return this->cacheTtlMax_ == nullptr
        && this->cacheTtlMin_ == nullptr && this->domainName_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr && this->sourceDnsServer_ == nullptr
        && this->sourceEdns_ == nullptr && this->sourceProtocol_ == nullptr; };
    // cacheTtlMax Field Functions 
    bool hasCacheTtlMax() const { return this->cacheTtlMax_ != nullptr;};
    void deleteCacheTtlMax() { this->cacheTtlMax_ = nullptr;};
    inline int32_t getCacheTtlMax() const { DARABONBA_PTR_GET_DEFAULT(cacheTtlMax_, 0) };
    inline UpdateDnsCacheDomainRequest& setCacheTtlMax(int32_t cacheTtlMax) { DARABONBA_PTR_SET_VALUE(cacheTtlMax_, cacheTtlMax) };


    // cacheTtlMin Field Functions 
    bool hasCacheTtlMin() const { return this->cacheTtlMin_ != nullptr;};
    void deleteCacheTtlMin() { this->cacheTtlMin_ = nullptr;};
    inline int32_t getCacheTtlMin() const { DARABONBA_PTR_GET_DEFAULT(cacheTtlMin_, 0) };
    inline UpdateDnsCacheDomainRequest& setCacheTtlMin(int32_t cacheTtlMin) { DARABONBA_PTR_SET_VALUE(cacheTtlMin_, cacheTtlMin) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateDnsCacheDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateDnsCacheDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDnsCacheDomainRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceDnsServer Field Functions 
    bool hasSourceDnsServer() const { return this->sourceDnsServer_ != nullptr;};
    void deleteSourceDnsServer() { this->sourceDnsServer_ = nullptr;};
    inline const vector<UpdateDnsCacheDomainRequest::SourceDnsServer> & getSourceDnsServer() const { DARABONBA_PTR_GET_CONST(sourceDnsServer_, vector<UpdateDnsCacheDomainRequest::SourceDnsServer>) };
    inline vector<UpdateDnsCacheDomainRequest::SourceDnsServer> getSourceDnsServer() { DARABONBA_PTR_GET(sourceDnsServer_, vector<UpdateDnsCacheDomainRequest::SourceDnsServer>) };
    inline UpdateDnsCacheDomainRequest& setSourceDnsServer(const vector<UpdateDnsCacheDomainRequest::SourceDnsServer> & sourceDnsServer) { DARABONBA_PTR_SET_VALUE(sourceDnsServer_, sourceDnsServer) };
    inline UpdateDnsCacheDomainRequest& setSourceDnsServer(vector<UpdateDnsCacheDomainRequest::SourceDnsServer> && sourceDnsServer) { DARABONBA_PTR_SET_RVALUE(sourceDnsServer_, sourceDnsServer) };


    // sourceEdns Field Functions 
    bool hasSourceEdns() const { return this->sourceEdns_ != nullptr;};
    void deleteSourceEdns() { this->sourceEdns_ = nullptr;};
    inline string getSourceEdns() const { DARABONBA_PTR_GET_DEFAULT(sourceEdns_, "") };
    inline UpdateDnsCacheDomainRequest& setSourceEdns(string sourceEdns) { DARABONBA_PTR_SET_VALUE(sourceEdns_, sourceEdns) };


    // sourceProtocol Field Functions 
    bool hasSourceProtocol() const { return this->sourceProtocol_ != nullptr;};
    void deleteSourceProtocol() { this->sourceProtocol_ = nullptr;};
    inline string getSourceProtocol() const { DARABONBA_PTR_GET_DEFAULT(sourceProtocol_, "") };
    inline UpdateDnsCacheDomainRequest& setSourceProtocol(string sourceProtocol) { DARABONBA_PTR_SET_VALUE(sourceProtocol_, sourceProtocol) };


  protected:
    // The maximum TTL period of the cached data retrieved from the origin DNS server. Unit: seconds. Valid values: 30 to 86400.
    shared_ptr<int32_t> cacheTtlMax_ {};
    // The minimum time-to-live (TTL) period of the cached data retrieved from the origin Domain Name System (DNS) server. Unit: seconds. Valid values: 30 to 86400.
    shared_ptr<int32_t> cacheTtlMin_ {};
    // The domain name. You can call the [DescribeDomains](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtian the domain name.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The instance ID of the cache-accelerated domain name. You can call the [ListCloudGtmInstances](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-listcloudgtminstances?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the ID.
    shared_ptr<string> instanceId_ {};
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English Default: **zh**
    shared_ptr<string> lang_ {};
    // The origin DNS servers. A maximum of 10 origin DNS servers are supported.
    shared_ptr<vector<UpdateDnsCacheDomainRequest::SourceDnsServer>> sourceDnsServer_ {};
    // Specifies whether the origin DNS server supports Extension Mechanisms for DNS (EDNS). Valid values: NOT_SUPPORT and SUPPORT.
    shared_ptr<string> sourceEdns_ {};
    // The origin protocol policy. Valid values: TCP and UDP. Default value: UDP.
    shared_ptr<string> sourceProtocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
