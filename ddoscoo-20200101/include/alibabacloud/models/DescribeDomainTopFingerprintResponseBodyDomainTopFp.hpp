// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPFINGERPRINTRESPONSEBODYDOMAINTOPFP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPFINGERPRINTRESPONSEBODYDOMAINTOPFP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainTopFingerprintResponseBodyDomainTopFp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopFingerprintResponseBodyDomainTopFp& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Fingerprinting, fingerprinting_);
      DARABONBA_PTR_TO_JSON(Pv, pv_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopFingerprintResponseBodyDomainTopFp& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Fingerprinting, fingerprinting_);
      DARABONBA_PTR_FROM_JSON(Pv, pv_);
    };
    DescribeDomainTopFingerprintResponseBodyDomainTopFp() = default ;
    DescribeDomainTopFingerprintResponseBodyDomainTopFp(const DescribeDomainTopFingerprintResponseBodyDomainTopFp &) = default ;
    DescribeDomainTopFingerprintResponseBodyDomainTopFp(DescribeDomainTopFingerprintResponseBodyDomainTopFp &&) = default ;
    DescribeDomainTopFingerprintResponseBodyDomainTopFp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopFingerprintResponseBodyDomainTopFp() = default ;
    DescribeDomainTopFingerprintResponseBodyDomainTopFp& operator=(const DescribeDomainTopFingerprintResponseBodyDomainTopFp &) = default ;
    DescribeDomainTopFingerprintResponseBodyDomainTopFp& operator=(DescribeDomainTopFingerprintResponseBodyDomainTopFp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->fingerprinting_ != nullptr && this->pv_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainTopFingerprintResponseBodyDomainTopFp& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // fingerprinting Field Functions 
    bool hasFingerprinting() const { return this->fingerprinting_ != nullptr;};
    void deleteFingerprinting() { this->fingerprinting_ = nullptr;};
    inline string fingerprinting() const { DARABONBA_PTR_GET_DEFAULT(fingerprinting_, "") };
    inline DescribeDomainTopFingerprintResponseBodyDomainTopFp& setFingerprinting(string fingerprinting) { DARABONBA_PTR_SET_VALUE(fingerprinting_, fingerprinting) };


    // pv Field Functions 
    bool hasPv() const { return this->pv_ != nullptr;};
    void deletePv() { this->pv_ = nullptr;};
    inline int64_t pv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
    inline DescribeDomainTopFingerprintResponseBodyDomainTopFp& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


  protected:
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The fingerprint of the client.
    std::shared_ptr<string> fingerprinting_ = nullptr;
    // The page views.
    std::shared_ptr<int64_t> pv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
