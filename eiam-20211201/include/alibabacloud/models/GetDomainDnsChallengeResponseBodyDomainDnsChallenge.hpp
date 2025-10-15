// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINDNSCHALLENGERESPONSEBODYDOMAINDNSCHALLENGE_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINDNSCHALLENGERESPONSEBODYDOMAINDNSCHALLENGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetDomainDnsChallengeResponseBodyDomainDnsChallenge : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDomainDnsChallengeResponseBodyDomainDnsChallenge& obj) { 
      DARABONBA_PTR_TO_JSON(DnsChallengeName, dnsChallengeName_);
      DARABONBA_PTR_TO_JSON(DnsChallengeValue, dnsChallengeValue_);
      DARABONBA_PTR_TO_JSON(DnsType, dnsType_);
    };
    friend void from_json(const Darabonba::Json& j, GetDomainDnsChallengeResponseBodyDomainDnsChallenge& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsChallengeName, dnsChallengeName_);
      DARABONBA_PTR_FROM_JSON(DnsChallengeValue, dnsChallengeValue_);
      DARABONBA_PTR_FROM_JSON(DnsType, dnsType_);
    };
    GetDomainDnsChallengeResponseBodyDomainDnsChallenge() = default ;
    GetDomainDnsChallengeResponseBodyDomainDnsChallenge(const GetDomainDnsChallengeResponseBodyDomainDnsChallenge &) = default ;
    GetDomainDnsChallengeResponseBodyDomainDnsChallenge(GetDomainDnsChallengeResponseBodyDomainDnsChallenge &&) = default ;
    GetDomainDnsChallengeResponseBodyDomainDnsChallenge(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDomainDnsChallengeResponseBodyDomainDnsChallenge() = default ;
    GetDomainDnsChallengeResponseBodyDomainDnsChallenge& operator=(const GetDomainDnsChallengeResponseBodyDomainDnsChallenge &) = default ;
    GetDomainDnsChallengeResponseBodyDomainDnsChallenge& operator=(GetDomainDnsChallengeResponseBodyDomainDnsChallenge &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsChallengeName_ == nullptr
        && return this->dnsChallengeValue_ == nullptr && return this->dnsType_ == nullptr; };
    // dnsChallengeName Field Functions 
    bool hasDnsChallengeName() const { return this->dnsChallengeName_ != nullptr;};
    void deleteDnsChallengeName() { this->dnsChallengeName_ = nullptr;};
    inline string dnsChallengeName() const { DARABONBA_PTR_GET_DEFAULT(dnsChallengeName_, "") };
    inline GetDomainDnsChallengeResponseBodyDomainDnsChallenge& setDnsChallengeName(string dnsChallengeName) { DARABONBA_PTR_SET_VALUE(dnsChallengeName_, dnsChallengeName) };


    // dnsChallengeValue Field Functions 
    bool hasDnsChallengeValue() const { return this->dnsChallengeValue_ != nullptr;};
    void deleteDnsChallengeValue() { this->dnsChallengeValue_ = nullptr;};
    inline string dnsChallengeValue() const { DARABONBA_PTR_GET_DEFAULT(dnsChallengeValue_, "") };
    inline GetDomainDnsChallengeResponseBodyDomainDnsChallenge& setDnsChallengeValue(string dnsChallengeValue) { DARABONBA_PTR_SET_VALUE(dnsChallengeValue_, dnsChallengeValue) };


    // dnsType Field Functions 
    bool hasDnsType() const { return this->dnsType_ != nullptr;};
    void deleteDnsType() { this->dnsType_ = nullptr;};
    inline string dnsType() const { DARABONBA_PTR_GET_DEFAULT(dnsType_, "") };
    inline GetDomainDnsChallengeResponseBodyDomainDnsChallenge& setDnsType(string dnsType) { DARABONBA_PTR_SET_VALUE(dnsType_, dnsType) };


  protected:
    // The name of the DNS challenge record.
    std::shared_ptr<string> dnsChallengeName_ = nullptr;
    // The value of the DNS challenge record.
    std::shared_ptr<string> dnsChallengeValue_ = nullptr;
    // The type of the DNS challenge record.
    std::shared_ptr<string> dnsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
