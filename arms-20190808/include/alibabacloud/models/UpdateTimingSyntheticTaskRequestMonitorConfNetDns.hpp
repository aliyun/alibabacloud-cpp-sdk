// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONFNETDNS_HPP_
#define ALIBABACLOUD_MODELS_UPDATETIMINGSYNTHETICTASKREQUESTMONITORCONFNETDNS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateTimingSyntheticTaskRequestMonitorConfNetDNS : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTimingSyntheticTaskRequestMonitorConfNetDNS& obj) { 
      DARABONBA_PTR_TO_JSON(Dig, dig_);
      DARABONBA_PTR_TO_JSON(DnsServerIpType, dnsServerIpType_);
      DARABONBA_PTR_TO_JSON(NsServer, nsServer_);
      DARABONBA_PTR_TO_JSON(QueryMethod, queryMethod_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTimingSyntheticTaskRequestMonitorConfNetDNS& obj) { 
      DARABONBA_PTR_FROM_JSON(Dig, dig_);
      DARABONBA_PTR_FROM_JSON(DnsServerIpType, dnsServerIpType_);
      DARABONBA_PTR_FROM_JSON(NsServer, nsServer_);
      DARABONBA_PTR_FROM_JSON(QueryMethod, queryMethod_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpdateTimingSyntheticTaskRequestMonitorConfNetDNS() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfNetDNS(const UpdateTimingSyntheticTaskRequestMonitorConfNetDNS &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfNetDNS(UpdateTimingSyntheticTaskRequestMonitorConfNetDNS &&) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfNetDNS(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTimingSyntheticTaskRequestMonitorConfNetDNS() = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfNetDNS& operator=(const UpdateTimingSyntheticTaskRequestMonitorConfNetDNS &) = default ;
    UpdateTimingSyntheticTaskRequestMonitorConfNetDNS& operator=(UpdateTimingSyntheticTaskRequestMonitorConfNetDNS &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dig_ != nullptr
        && this->dnsServerIpType_ != nullptr && this->nsServer_ != nullptr && this->queryMethod_ != nullptr && this->targetUrl_ != nullptr && this->timeout_ != nullptr; };
    // dig Field Functions 
    bool hasDig() const { return this->dig_ != nullptr;};
    void deleteDig() { this->dig_ = nullptr;};
    inline int32_t dig() const { DARABONBA_PTR_GET_DEFAULT(dig_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetDNS& setDig(int32_t dig) { DARABONBA_PTR_SET_VALUE(dig_, dig) };


    // dnsServerIpType Field Functions 
    bool hasDnsServerIpType() const { return this->dnsServerIpType_ != nullptr;};
    void deleteDnsServerIpType() { this->dnsServerIpType_ = nullptr;};
    inline int32_t dnsServerIpType() const { DARABONBA_PTR_GET_DEFAULT(dnsServerIpType_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetDNS& setDnsServerIpType(int32_t dnsServerIpType) { DARABONBA_PTR_SET_VALUE(dnsServerIpType_, dnsServerIpType) };


    // nsServer Field Functions 
    bool hasNsServer() const { return this->nsServer_ != nullptr;};
    void deleteNsServer() { this->nsServer_ = nullptr;};
    inline string nsServer() const { DARABONBA_PTR_GET_DEFAULT(nsServer_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetDNS& setNsServer(string nsServer) { DARABONBA_PTR_SET_VALUE(nsServer_, nsServer) };


    // queryMethod Field Functions 
    bool hasQueryMethod() const { return this->queryMethod_ != nullptr;};
    void deleteQueryMethod() { this->queryMethod_ = nullptr;};
    inline int32_t queryMethod() const { DARABONBA_PTR_GET_DEFAULT(queryMethod_, 0) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetDNS& setQueryMethod(int32_t queryMethod) { DARABONBA_PTR_SET_VALUE(queryMethod_, queryMethod) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetDNS& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline UpdateTimingSyntheticTaskRequestMonitorConfNetDNS& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // Specifies whether to use the dig command to display the data. Valid values: 0: no. 1: yes.
    std::shared_ptr<int32_t> dig_ = nullptr;
    // The IP version of the DNS server. Valid values: 0: IPv4. 1: IPv6. 2: A version is automatically selected. Default value: 0.
    std::shared_ptr<int32_t> dnsServerIpType_ = nullptr;
    // The IP address of the DNS server. Default value: 114.114.114.114.
    std::shared_ptr<string> nsServer_ = nullptr;
    // The DNS query method. Valid values: 0: recursive. 1: iterative. Default value: 0.
    std::shared_ptr<int32_t> queryMethod_ = nullptr;
    // The domain name.
    std::shared_ptr<string> targetUrl_ = nullptr;
    // The timeout period for the DNS synthetic test. Unit: milliseconds. Minimum value: 1000. Maximum value: 45000. Default value: 5000.
    std::shared_ptr<int64_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
