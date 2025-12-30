// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINNSRESPONSEBODY_HPP_
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
    class ExpectDnsServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExpectDnsServers& obj) { 
        DARABONBA_PTR_TO_JSON(ExpectDnsServer, expectDnsServer_);
      };
      friend void from_json(const Darabonba::Json& j, ExpectDnsServers& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpectDnsServer, expectDnsServer_);
      };
      ExpectDnsServers() = default ;
      ExpectDnsServers(const ExpectDnsServers &) = default ;
      ExpectDnsServers(ExpectDnsServers &&) = default ;
      ExpectDnsServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExpectDnsServers() = default ;
      ExpectDnsServers& operator=(const ExpectDnsServers &) = default ;
      ExpectDnsServers& operator=(ExpectDnsServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->expectDnsServer_ == nullptr; };
      // expectDnsServer Field Functions 
      bool hasExpectDnsServer() const { return this->expectDnsServer_ != nullptr;};
      void deleteExpectDnsServer() { this->expectDnsServer_ = nullptr;};
      inline const vector<string> & getExpectDnsServer() const { DARABONBA_PTR_GET_CONST(expectDnsServer_, vector<string>) };
      inline vector<string> getExpectDnsServer() { DARABONBA_PTR_GET(expectDnsServer_, vector<string>) };
      inline ExpectDnsServers& setExpectDnsServer(const vector<string> & expectDnsServer) { DARABONBA_PTR_SET_VALUE(expectDnsServer_, expectDnsServer) };
      inline ExpectDnsServers& setExpectDnsServer(vector<string> && expectDnsServer) { DARABONBA_PTR_SET_RVALUE(expectDnsServer_, expectDnsServer) };


    protected:
      shared_ptr<vector<string>> expectDnsServer_ {};
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

    virtual bool empty() const override { return this->allAliDns_ == nullptr
        && this->detectFailedReasonCode_ == nullptr && this->dnsServers_ == nullptr && this->expectDnsServers_ == nullptr && this->includeAliDns_ == nullptr && this->requestId_ == nullptr; };
    // allAliDns Field Functions 
    bool hasAllAliDns() const { return this->allAliDns_ != nullptr;};
    void deleteAllAliDns() { this->allAliDns_ = nullptr;};
    inline bool getAllAliDns() const { DARABONBA_PTR_GET_DEFAULT(allAliDns_, false) };
    inline DescribeDomainNsResponseBody& setAllAliDns(bool allAliDns) { DARABONBA_PTR_SET_VALUE(allAliDns_, allAliDns) };


    // detectFailedReasonCode Field Functions 
    bool hasDetectFailedReasonCode() const { return this->detectFailedReasonCode_ != nullptr;};
    void deleteDetectFailedReasonCode() { this->detectFailedReasonCode_ = nullptr;};
    inline string getDetectFailedReasonCode() const { DARABONBA_PTR_GET_DEFAULT(detectFailedReasonCode_, "") };
    inline DescribeDomainNsResponseBody& setDetectFailedReasonCode(string detectFailedReasonCode) { DARABONBA_PTR_SET_VALUE(detectFailedReasonCode_, detectFailedReasonCode) };


    // dnsServers Field Functions 
    bool hasDnsServers() const { return this->dnsServers_ != nullptr;};
    void deleteDnsServers() { this->dnsServers_ = nullptr;};
    inline const DescribeDomainNsResponseBody::DnsServers & getDnsServers() const { DARABONBA_PTR_GET_CONST(dnsServers_, DescribeDomainNsResponseBody::DnsServers) };
    inline DescribeDomainNsResponseBody::DnsServers getDnsServers() { DARABONBA_PTR_GET(dnsServers_, DescribeDomainNsResponseBody::DnsServers) };
    inline DescribeDomainNsResponseBody& setDnsServers(const DescribeDomainNsResponseBody::DnsServers & dnsServers) { DARABONBA_PTR_SET_VALUE(dnsServers_, dnsServers) };
    inline DescribeDomainNsResponseBody& setDnsServers(DescribeDomainNsResponseBody::DnsServers && dnsServers) { DARABONBA_PTR_SET_RVALUE(dnsServers_, dnsServers) };


    // expectDnsServers Field Functions 
    bool hasExpectDnsServers() const { return this->expectDnsServers_ != nullptr;};
    void deleteExpectDnsServers() { this->expectDnsServers_ = nullptr;};
    inline const DescribeDomainNsResponseBody::ExpectDnsServers & getExpectDnsServers() const { DARABONBA_PTR_GET_CONST(expectDnsServers_, DescribeDomainNsResponseBody::ExpectDnsServers) };
    inline DescribeDomainNsResponseBody::ExpectDnsServers getExpectDnsServers() { DARABONBA_PTR_GET(expectDnsServers_, DescribeDomainNsResponseBody::ExpectDnsServers) };
    inline DescribeDomainNsResponseBody& setExpectDnsServers(const DescribeDomainNsResponseBody::ExpectDnsServers & expectDnsServers) { DARABONBA_PTR_SET_VALUE(expectDnsServers_, expectDnsServers) };
    inline DescribeDomainNsResponseBody& setExpectDnsServers(DescribeDomainNsResponseBody::ExpectDnsServers && expectDnsServers) { DARABONBA_PTR_SET_RVALUE(expectDnsServers_, expectDnsServers) };


    // includeAliDns Field Functions 
    bool hasIncludeAliDns() const { return this->includeAliDns_ != nullptr;};
    void deleteIncludeAliDns() { this->includeAliDns_ = nullptr;};
    inline bool getIncludeAliDns() const { DARABONBA_PTR_GET_DEFAULT(includeAliDns_, false) };
    inline DescribeDomainNsResponseBody& setIncludeAliDns(bool includeAliDns) { DARABONBA_PTR_SET_VALUE(includeAliDns_, includeAliDns) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainNsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Indicates whether all the name servers are Alibaba Cloud DNS servers.
    shared_ptr<bool> allAliDns_ {};
    // The cause code of the detection failure.
    shared_ptr<string> detectFailedReasonCode_ {};
    // The DNS server names configured for the domain name.
    shared_ptr<DescribeDomainNsResponseBody::DnsServers> dnsServers_ {};
    // The Domain Name System (DNS) server names assigned by Alibaba Cloud DNS.
    shared_ptr<DescribeDomainNsResponseBody::ExpectDnsServers> expectDnsServers_ {};
    // Indicates whether the name servers include Alibaba Cloud DNS servers.
    shared_ptr<bool> includeAliDns_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
