// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINDNSCHALLENGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINDNSCHALLENGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetDomainDnsChallengeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainDnsChallengeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainDnsChallenge, domainDnsChallenge_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainDnsChallengeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainDnsChallenge, domainDnsChallenge_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDomainDnsChallengeResponseBody() = default ;
    GetDomainDnsChallengeResponseBody(const GetDomainDnsChallengeResponseBody &) = default ;
    GetDomainDnsChallengeResponseBody(GetDomainDnsChallengeResponseBody &&) = default ;
    GetDomainDnsChallengeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainDnsChallengeResponseBody() = default ;
    GetDomainDnsChallengeResponseBody& operator=(const GetDomainDnsChallengeResponseBody &) = default ;
    GetDomainDnsChallengeResponseBody& operator=(GetDomainDnsChallengeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainDnsChallenge : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainDnsChallenge& obj) { 
        DARABONBA_PTR_TO_JSON(DnsChallengeName, dnsChallengeName_);
        DARABONBA_PTR_TO_JSON(DnsChallengeValue, dnsChallengeValue_);
        DARABONBA_PTR_TO_JSON(DnsType, dnsType_);
      };
      friend void from_json(const Darabonba::Json& j, DomainDnsChallenge& obj) { 
        DARABONBA_PTR_FROM_JSON(DnsChallengeName, dnsChallengeName_);
        DARABONBA_PTR_FROM_JSON(DnsChallengeValue, dnsChallengeValue_);
        DARABONBA_PTR_FROM_JSON(DnsType, dnsType_);
      };
      DomainDnsChallenge() = default ;
      DomainDnsChallenge(const DomainDnsChallenge &) = default ;
      DomainDnsChallenge(DomainDnsChallenge &&) = default ;
      DomainDnsChallenge(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainDnsChallenge() = default ;
      DomainDnsChallenge& operator=(const DomainDnsChallenge &) = default ;
      DomainDnsChallenge& operator=(DomainDnsChallenge &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dnsChallengeName_ == nullptr
        && this->dnsChallengeValue_ == nullptr && this->dnsType_ == nullptr; };
      // dnsChallengeName Field Functions 
      bool hasDnsChallengeName() const { return this->dnsChallengeName_ != nullptr;};
      void deleteDnsChallengeName() { this->dnsChallengeName_ = nullptr;};
      inline string getDnsChallengeName() const { DARABONBA_PTR_GET_DEFAULT(dnsChallengeName_, "") };
      inline DomainDnsChallenge& setDnsChallengeName(string dnsChallengeName) { DARABONBA_PTR_SET_VALUE(dnsChallengeName_, dnsChallengeName) };


      // dnsChallengeValue Field Functions 
      bool hasDnsChallengeValue() const { return this->dnsChallengeValue_ != nullptr;};
      void deleteDnsChallengeValue() { this->dnsChallengeValue_ = nullptr;};
      inline string getDnsChallengeValue() const { DARABONBA_PTR_GET_DEFAULT(dnsChallengeValue_, "") };
      inline DomainDnsChallenge& setDnsChallengeValue(string dnsChallengeValue) { DARABONBA_PTR_SET_VALUE(dnsChallengeValue_, dnsChallengeValue) };


      // dnsType Field Functions 
      bool hasDnsType() const { return this->dnsType_ != nullptr;};
      void deleteDnsType() { this->dnsType_ = nullptr;};
      inline string getDnsType() const { DARABONBA_PTR_GET_DEFAULT(dnsType_, "") };
      inline DomainDnsChallenge& setDnsType(string dnsType) { DARABONBA_PTR_SET_VALUE(dnsType_, dnsType) };


    protected:
      // The name of the DNS challenge record.
      shared_ptr<string> dnsChallengeName_ {};
      // The value of the DNS challenge record.
      shared_ptr<string> dnsChallengeValue_ {};
      // The type of the DNS challenge record.
      shared_ptr<string> dnsType_ {};
    };

    virtual bool empty() const override { return this->domainDnsChallenge_ == nullptr
        && this->requestId_ == nullptr; };
    // domainDnsChallenge Field Functions 
    bool hasDomainDnsChallenge() const { return this->domainDnsChallenge_ != nullptr;};
    void deleteDomainDnsChallenge() { this->domainDnsChallenge_ = nullptr;};
    inline const GetDomainDnsChallengeResponseBody::DomainDnsChallenge & getDomainDnsChallenge() const { DARABONBA_PTR_GET_CONST(domainDnsChallenge_, GetDomainDnsChallengeResponseBody::DomainDnsChallenge) };
    inline GetDomainDnsChallengeResponseBody::DomainDnsChallenge getDomainDnsChallenge() { DARABONBA_PTR_GET(domainDnsChallenge_, GetDomainDnsChallengeResponseBody::DomainDnsChallenge) };
    inline GetDomainDnsChallengeResponseBody& setDomainDnsChallenge(const GetDomainDnsChallengeResponseBody::DomainDnsChallenge & domainDnsChallenge) { DARABONBA_PTR_SET_VALUE(domainDnsChallenge_, domainDnsChallenge) };
    inline GetDomainDnsChallengeResponseBody& setDomainDnsChallenge(GetDomainDnsChallengeResponseBody::DomainDnsChallenge && domainDnsChallenge) { DARABONBA_PTR_SET_RVALUE(domainDnsChallenge_, domainDnsChallenge) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDomainDnsChallengeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The DNS challenge records.
    shared_ptr<GetDomainDnsChallengeResponseBody::DomainDnsChallenge> domainDnsChallenge_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
