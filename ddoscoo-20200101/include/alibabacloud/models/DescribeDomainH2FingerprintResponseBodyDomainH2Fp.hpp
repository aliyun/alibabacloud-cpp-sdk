// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINH2FINGERPRINTRESPONSEBODYDOMAINH2FP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINH2FINGERPRINTRESPONSEBODYDOMAINH2FP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainH2FingerprintResponseBodyDomainH2Fp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainH2FingerprintResponseBodyDomainH2Fp& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(H2Fingerprint, h2Fingerprint_);
      DARABONBA_PTR_TO_JSON(Pv, pv_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainH2FingerprintResponseBodyDomainH2Fp& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(H2Fingerprint, h2Fingerprint_);
      DARABONBA_PTR_FROM_JSON(Pv, pv_);
    };
    DescribeDomainH2FingerprintResponseBodyDomainH2Fp() = default ;
    DescribeDomainH2FingerprintResponseBodyDomainH2Fp(const DescribeDomainH2FingerprintResponseBodyDomainH2Fp &) = default ;
    DescribeDomainH2FingerprintResponseBodyDomainH2Fp(DescribeDomainH2FingerprintResponseBodyDomainH2Fp &&) = default ;
    DescribeDomainH2FingerprintResponseBodyDomainH2Fp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainH2FingerprintResponseBodyDomainH2Fp() = default ;
    DescribeDomainH2FingerprintResponseBodyDomainH2Fp& operator=(const DescribeDomainH2FingerprintResponseBodyDomainH2Fp &) = default ;
    DescribeDomainH2FingerprintResponseBodyDomainH2Fp& operator=(DescribeDomainH2FingerprintResponseBodyDomainH2Fp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->h2Fingerprint_ == nullptr && return this->pv_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainH2FingerprintResponseBodyDomainH2Fp& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // h2Fingerprint Field Functions 
    bool hasH2Fingerprint() const { return this->h2Fingerprint_ != nullptr;};
    void deleteH2Fingerprint() { this->h2Fingerprint_ = nullptr;};
    inline string h2Fingerprint() const { DARABONBA_PTR_GET_DEFAULT(h2Fingerprint_, "") };
    inline DescribeDomainH2FingerprintResponseBodyDomainH2Fp& setH2Fingerprint(string h2Fingerprint) { DARABONBA_PTR_SET_VALUE(h2Fingerprint_, h2Fingerprint) };


    // pv Field Functions 
    bool hasPv() const { return this->pv_ != nullptr;};
    void deletePv() { this->pv_ = nullptr;};
    inline int64_t pv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
    inline DescribeDomainH2FingerprintResponseBodyDomainH2Fp& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


  protected:
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The HTTP/2 fingerprint.
    std::shared_ptr<string> h2Fingerprint_ = nullptr;
    // The page views.
    std::shared_ptr<int64_t> pv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
