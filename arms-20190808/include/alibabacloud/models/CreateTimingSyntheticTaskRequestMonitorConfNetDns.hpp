// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORCONFNETDNS_HPP_
#define ALIBABACLOUD_MODELS_CREATETIMINGSYNTHETICTASKREQUESTMONITORCONFNETDNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateTimingSyntheticTaskRequestMonitorConfNetDNS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTimingSyntheticTaskRequestMonitorConfNetDNS& obj) { 
      DARABONBA_PTR_TO_JSON(DnsServerIpType, dnsServerIpType_);
      DARABONBA_PTR_TO_JSON(NsServer, nsServer_);
      DARABONBA_PTR_TO_JSON(QueryMethod, queryMethod_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTimingSyntheticTaskRequestMonitorConfNetDNS& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsServerIpType, dnsServerIpType_);
      DARABONBA_PTR_FROM_JSON(NsServer, nsServer_);
      DARABONBA_PTR_FROM_JSON(QueryMethod, queryMethod_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    CreateTimingSyntheticTaskRequestMonitorConfNetDNS() = default ;
    CreateTimingSyntheticTaskRequestMonitorConfNetDNS(const CreateTimingSyntheticTaskRequestMonitorConfNetDNS &) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfNetDNS(CreateTimingSyntheticTaskRequestMonitorConfNetDNS &&) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfNetDNS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTimingSyntheticTaskRequestMonitorConfNetDNS() = default ;
    CreateTimingSyntheticTaskRequestMonitorConfNetDNS& operator=(const CreateTimingSyntheticTaskRequestMonitorConfNetDNS &) = default ;
    CreateTimingSyntheticTaskRequestMonitorConfNetDNS& operator=(CreateTimingSyntheticTaskRequestMonitorConfNetDNS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsServerIpType_ != nullptr
        && this->nsServer_ != nullptr && this->queryMethod_ != nullptr && this->targetUrl_ != nullptr && this->timeout_ != nullptr; };
    // dnsServerIpType Field Functions 
    bool hasDnsServerIpType() const { return this->dnsServerIpType_ != nullptr;};
    void deleteDnsServerIpType() { this->dnsServerIpType_ = nullptr;};
    inline int32_t dnsServerIpType() const { DARABONBA_PTR_GET_DEFAULT(dnsServerIpType_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetDNS& setDnsServerIpType(int32_t dnsServerIpType) { DARABONBA_PTR_SET_VALUE(dnsServerIpType_, dnsServerIpType) };


    // nsServer Field Functions 
    bool hasNsServer() const { return this->nsServer_ != nullptr;};
    void deleteNsServer() { this->nsServer_ = nullptr;};
    inline string nsServer() const { DARABONBA_PTR_GET_DEFAULT(nsServer_, "") };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetDNS& setNsServer(string nsServer) { DARABONBA_PTR_SET_VALUE(nsServer_, nsServer) };


    // queryMethod Field Functions 
    bool hasQueryMethod() const { return this->queryMethod_ != nullptr;};
    void deleteQueryMethod() { this->queryMethod_ = nullptr;};
    inline int32_t queryMethod() const { DARABONBA_PTR_GET_DEFAULT(queryMethod_, 0) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetDNS& setQueryMethod(int32_t queryMethod) { DARABONBA_PTR_SET_VALUE(queryMethod_, queryMethod) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetDNS& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline CreateTimingSyntheticTaskRequestMonitorConfNetDNS& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The IP version of the DNS server.
    // 
    // *   0 (default): IPv4.
    // *   1: IPv6.
    // *   2: A version is automatically selected.
    std::shared_ptr<int32_t> dnsServerIpType_ = nullptr;
    // The IP address of the DNS server. Default value: 114.114.114.114.
    std::shared_ptr<string> nsServer_ = nullptr;
    // The DNS query method. Valid values:
    // 
    // *   0 (default): recursive
    // *   1: iterative
    std::shared_ptr<int32_t> queryMethod_ = nullptr;
    // The destination domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // The timeout period for the DNS synthetic test. Unit: milliseconds. Minimum value: 1000. Maximum value: 45000. Default value: 5000.
    std::shared_ptr<int64_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
