// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPUSERAGENTRESPONSEBODYDOMAINTOPUA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPUSERAGENTRESPONSEBODYDOMAINTOPUA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainTopUserAgentResponseBodyDomainTopUa : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopUserAgentResponseBodyDomainTopUa& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Pv, pv_);
      DARABONBA_PTR_TO_JSON(UserAgent, userAgent_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopUserAgentResponseBodyDomainTopUa& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Pv, pv_);
      DARABONBA_PTR_FROM_JSON(UserAgent, userAgent_);
    };
    DescribeDomainTopUserAgentResponseBodyDomainTopUa() = default ;
    DescribeDomainTopUserAgentResponseBodyDomainTopUa(const DescribeDomainTopUserAgentResponseBodyDomainTopUa &) = default ;
    DescribeDomainTopUserAgentResponseBodyDomainTopUa(DescribeDomainTopUserAgentResponseBodyDomainTopUa &&) = default ;
    DescribeDomainTopUserAgentResponseBodyDomainTopUa(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopUserAgentResponseBodyDomainTopUa() = default ;
    DescribeDomainTopUserAgentResponseBodyDomainTopUa& operator=(const DescribeDomainTopUserAgentResponseBodyDomainTopUa &) = default ;
    DescribeDomainTopUserAgentResponseBodyDomainTopUa& operator=(DescribeDomainTopUserAgentResponseBodyDomainTopUa &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->pv_ != nullptr && this->userAgent_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainTopUserAgentResponseBodyDomainTopUa& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // pv Field Functions 
    bool hasPv() const { return this->pv_ != nullptr;};
    void deletePv() { this->pv_ = nullptr;};
    inline int64_t pv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
    inline DescribeDomainTopUserAgentResponseBodyDomainTopUa& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


    // userAgent Field Functions 
    bool hasUserAgent() const { return this->userAgent_ != nullptr;};
    void deleteUserAgent() { this->userAgent_ = nullptr;};
    inline string userAgent() const { DARABONBA_PTR_GET_DEFAULT(userAgent_, "") };
    inline DescribeDomainTopUserAgentResponseBodyDomainTopUa& setUserAgent(string userAgent) { DARABONBA_PTR_SET_VALUE(userAgent_, userAgent) };


  protected:
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The page views.
    std::shared_ptr<int64_t> pv_ = nullptr;
    // The Base64-encoded user agent.
    std::shared_ptr<string> userAgent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
