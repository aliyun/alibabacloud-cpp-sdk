// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINH2FINGERPRINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINH2FINGERPRINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainH2FingerprintResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainH2FingerprintResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainH2Fp, domainH2Fp_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainH2FingerprintResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainH2Fp, domainH2Fp_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainH2FingerprintResponseBody() = default ;
    DescribeDomainH2FingerprintResponseBody(const DescribeDomainH2FingerprintResponseBody &) = default ;
    DescribeDomainH2FingerprintResponseBody(DescribeDomainH2FingerprintResponseBody &&) = default ;
    DescribeDomainH2FingerprintResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainH2FingerprintResponseBody() = default ;
    DescribeDomainH2FingerprintResponseBody& operator=(const DescribeDomainH2FingerprintResponseBody &) = default ;
    DescribeDomainH2FingerprintResponseBody& operator=(DescribeDomainH2FingerprintResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainH2Fp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainH2Fp& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(H2Fingerprint, h2Fingerprint_);
        DARABONBA_PTR_TO_JSON(Pv, pv_);
      };
      friend void from_json(const Darabonba::Json& j, DomainH2Fp& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(H2Fingerprint, h2Fingerprint_);
        DARABONBA_PTR_FROM_JSON(Pv, pv_);
      };
      DomainH2Fp() = default ;
      DomainH2Fp(const DomainH2Fp &) = default ;
      DomainH2Fp(DomainH2Fp &&) = default ;
      DomainH2Fp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainH2Fp() = default ;
      DomainH2Fp& operator=(const DomainH2Fp &) = default ;
      DomainH2Fp& operator=(DomainH2Fp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->h2Fingerprint_ == nullptr && this->pv_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainH2Fp& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // h2Fingerprint Field Functions 
      bool hasH2Fingerprint() const { return this->h2Fingerprint_ != nullptr;};
      void deleteH2Fingerprint() { this->h2Fingerprint_ = nullptr;};
      inline string getH2Fingerprint() const { DARABONBA_PTR_GET_DEFAULT(h2Fingerprint_, "") };
      inline DomainH2Fp& setH2Fingerprint(string h2Fingerprint) { DARABONBA_PTR_SET_VALUE(h2Fingerprint_, h2Fingerprint) };


      // pv Field Functions 
      bool hasPv() const { return this->pv_ != nullptr;};
      void deletePv() { this->pv_ = nullptr;};
      inline int64_t getPv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
      inline DomainH2Fp& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


    protected:
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The HTTP/2 fingerprint.
      shared_ptr<string> h2Fingerprint_ {};
      // The page views.
      shared_ptr<int64_t> pv_ {};
    };

    virtual bool empty() const override { return this->domainH2Fp_ == nullptr
        && this->requestId_ == nullptr; };
    // domainH2Fp Field Functions 
    bool hasDomainH2Fp() const { return this->domainH2Fp_ != nullptr;};
    void deleteDomainH2Fp() { this->domainH2Fp_ = nullptr;};
    inline const vector<DescribeDomainH2FingerprintResponseBody::DomainH2Fp> & getDomainH2Fp() const { DARABONBA_PTR_GET_CONST(domainH2Fp_, vector<DescribeDomainH2FingerprintResponseBody::DomainH2Fp>) };
    inline vector<DescribeDomainH2FingerprintResponseBody::DomainH2Fp> getDomainH2Fp() { DARABONBA_PTR_GET(domainH2Fp_, vector<DescribeDomainH2FingerprintResponseBody::DomainH2Fp>) };
    inline DescribeDomainH2FingerprintResponseBody& setDomainH2Fp(const vector<DescribeDomainH2FingerprintResponseBody::DomainH2Fp> & domainH2Fp) { DARABONBA_PTR_SET_VALUE(domainH2Fp_, domainH2Fp) };
    inline DescribeDomainH2FingerprintResponseBody& setDomainH2Fp(vector<DescribeDomainH2FingerprintResponseBody::DomainH2Fp> && domainH2Fp) { DARABONBA_PTR_SET_RVALUE(domainH2Fp_, domainH2Fp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainH2FingerprintResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about top N HTTP/2 fingerprints.
    shared_ptr<vector<DescribeDomainH2FingerprintResponseBody::DomainH2Fp>> domainH2Fp_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
