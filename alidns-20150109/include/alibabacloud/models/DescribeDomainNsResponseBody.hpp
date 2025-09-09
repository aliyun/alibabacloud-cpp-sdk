// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainNsResponseBodyDnsServers.hpp>
#include <alibabacloud/models/DescribeDomainNsResponseBodyExpectDnsServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainNsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainNsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllAliDns, allAliDns_);
      DARABONBA_PTR_TO_JSON(DetectFailedReasonCode, detectFailedReasonCode_);
      DARABONBA_PTR_TO_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_TO_JSON(ExpectDnsServers, expectDnsServers_);
      DARABONBA_PTR_TO_JSON(IncludeAliDns, includeAliDns_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainNsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllAliDns, allAliDns_);
      DARABONBA_PTR_FROM_JSON(DetectFailedReasonCode, detectFailedReasonCode_);
      DARABONBA_PTR_FROM_JSON(DnsServers, dnsServers_);
      DARABONBA_PTR_FROM_JSON(ExpectDnsServers, expectDnsServers_);
      DARABONBA_PTR_FROM_JSON(IncludeAliDns, includeAliDns_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainNsResponseBody() = default ;
    DescribeDomainNsResponseBody(const DescribeDomainNsResponseBody &) = default ;
    DescribeDomainNsResponseBody(DescribeDomainNsResponseBody &&) = default ;
    DescribeDomainNsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainNsResponseBody() = default ;
    DescribeDomainNsResponseBody& operator=(const DescribeDomainNsResponseBody &) = default ;
    DescribeDomainNsResponseBody& operator=(DescribeDomainNsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allAliDns_ != nullptr
        && this->detectFailedReasonCode_ != nullptr && this->dnsServers_ != nullptr && this->expectDnsServers_ != nullptr && this->includeAliDns_ != nullptr && this->requestId_ != nullptr; };
    // allAliDns Field Functions 
    bool hasAllAliDns() const { return this->allAliDns_ != nullptr;};
    void deleteAllAliDns() { this->allAliDns_ = nullptr;};
    inline bool allAliDns() const { DARABONBA_PTR_GET_DEFAULT(allAliDns_, false) };
    inline DescribeDomainNsResponseBody& setAllAliDns(bool allAliDns) { DARABONBA_PTR_SET_VALUE(allAliDns_, allAliDns) };


    // detectFailedReasonCode Field Functions 
    bool hasDetectFailedReasonCode() const { return this->detectFailedReasonCode_ != nullptr;};
    void deleteDetectFailedReasonCode() { this->detectFailedReasonCode_ = nullptr;};
    inline string detectFailedReasonCode() const { DARABONBA_PTR_GET_DEFAULT(detectFailedReasonCode_, "") };
    inline DescribeDomainNsResponseBody& setDetectFailedReasonCode(string detectFailedReasonCode) { DARABONBA_PTR_SET_VALUE(detectFailedReasonCode_, detectFailedReasonCode) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const DescribeDomainNsResponseBodyDnsServers & dnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, DescribeDomainNsResponseBodyDnsServers) };
    inline DescribeDomainNsResponseBodyDnsServers dnsServers() { DARABONBA_PTR_GET(dnsServers_, DescribeDomainNsResponseBodyDnsServers) };
    inline DescribeDomainNsResponseBody& setDnsServers(const DescribeDomainNsResponseBodyDnsServers & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline DescribeDomainNsResponseBody& setDnsServers(DescribeDomainNsResponseBodyDnsServers && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // expectDnsServers Field Functions 
    bool hasExpectDnsServers() const { return this->expectDnsServers_ != nullptr;};
    void deleteExpectDnsServers() { this->expectDnsServers_ = nullptr;};
    inline const DescribeDomainNsResponseBodyExpectDnsServers & expectDnsServers() const { DARABONBA_PTR_GET_CONST(expectDnsServers_, DescribeDomainNsResponseBodyExpectDnsServers) };
    inline DescribeDomainNsResponseBodyExpectDnsServers expectDnsServers() { DARABONBA_PTR_GET(expectDnsServers_, DescribeDomainNsResponseBodyExpectDnsServers) };
    inline DescribeDomainNsResponseBody& setExpectDnsServers(const DescribeDomainNsResponseBodyExpectDnsServers & expectDnsServers) { DARABONBA_PTR_SET_VALUE(expectDnsServers_, expectDnsServers) };
    inline DescribeDomainNsResponseBody& setExpectDnsServers(DescribeDomainNsResponseBodyExpectDnsServers && expectDnsServers) { DARABONBA_PTR_SET_RVALUE(expectDnsServers_, expectDnsServers) };


    // includeAliDns Field Functions 
    bool hasIncludeAliDns() const { return this->includeAliDns_ != nullptr;};
    void deleteIncludeAliDns() { this->includeAliDns_ = nullptr;};
    inline bool includeAliDns() const { DARABONBA_PTR_GET_DEFAULT(includeAliDns_, false) };
    inline DescribeDomainNsResponseBody& setIncludeAliDns(bool includeAliDns) { DARABONBA_PTR_SET_VALUE(includeAliDns_, includeAliDns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainNsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether all the name servers are Alibaba Cloud DNS servers.
    std::shared_ptr<bool> allAliDns_ = nullptr;
    // The cause code of the detection failure.
    std::shared_ptr<string> detectFailedReasonCode_ = nullptr;
    // The DNS server names configured for the domain name.
    std::shared_ptr<DescribeDomainNsResponseBodyDnsServers> dnsServers_ = nullptr;
    // The Domain Name System (DNS) server names assigned by Alibaba Cloud DNS.
    std::shared_ptr<DescribeDomainNsResponseBodyExpectDnsServers> expectDnsServers_ = nullptr;
    // Indicates whether the name servers include Alibaba Cloud DNS servers.
    std::shared_ptr<bool> includeAliDns_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
