// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDOMAINDNSCHALLENGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDOMAINDNSCHALLENGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDomainDnsChallengeResponseBodyDomainDnsChallenge.hpp>
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
    virtual bool empty() const override { return this->domainDnsChallenge_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainDnsChallenge Field Functions 
    bool hasDomainDnsChallenge() const { return this->domainDnsChallenge_ != nullptr;};
    void deleteDomainDnsChallenge() { this->domainDnsChallenge_ = nullptr;};
    inline const GetDomainDnsChallengeResponseBodyDomainDnsChallenge & domainDnsChallenge() const { DARABONBA_PTR_GET_CONST(domainDnsChallenge_, GetDomainDnsChallengeResponseBodyDomainDnsChallenge) };
    inline GetDomainDnsChallengeResponseBodyDomainDnsChallenge domainDnsChallenge() { DARABONBA_PTR_GET(domainDnsChallenge_, GetDomainDnsChallengeResponseBodyDomainDnsChallenge) };
    inline GetDomainDnsChallengeResponseBody& setDomainDnsChallenge(const GetDomainDnsChallengeResponseBodyDomainDnsChallenge & domainDnsChallenge) { DARABONBA_PTR_SET_VALUE(domainDnsChallenge_, domainDnsChallenge) };
    inline GetDomainDnsChallengeResponseBody& setDomainDnsChallenge(GetDomainDnsChallengeResponseBodyDomainDnsChallenge && domainDnsChallenge) { DARABONBA_PTR_SET_RVALUE(domainDnsChallenge_, domainDnsChallenge) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDomainDnsChallengeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The DNS challenge records.
    std::shared_ptr<GetDomainDnsChallengeResponseBodyDomainDnsChallenge> domainDnsChallenge_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
