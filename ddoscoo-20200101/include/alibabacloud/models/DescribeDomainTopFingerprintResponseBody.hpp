// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPFINGERPRINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPFINGERPRINTRESPONSEBODY_HPP_
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
  class DescribeDomainTopFingerprintResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopFingerprintResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTopFp, domainTopFp_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopFingerprintResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTopFp, domainTopFp_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopFingerprintResponseBody() = default ;
    DescribeDomainTopFingerprintResponseBody(const DescribeDomainTopFingerprintResponseBody &) = default ;
    DescribeDomainTopFingerprintResponseBody(DescribeDomainTopFingerprintResponseBody &&) = default ;
    DescribeDomainTopFingerprintResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopFingerprintResponseBody() = default ;
    DescribeDomainTopFingerprintResponseBody& operator=(const DescribeDomainTopFingerprintResponseBody &) = default ;
    DescribeDomainTopFingerprintResponseBody& operator=(DescribeDomainTopFingerprintResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainTopFp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainTopFp& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Fingerprinting, fingerprinting_);
        DARABONBA_PTR_TO_JSON(Pv, pv_);
      };
      friend void from_json(const Darabonba::Json& j, DomainTopFp& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Fingerprinting, fingerprinting_);
        DARABONBA_PTR_FROM_JSON(Pv, pv_);
      };
      DomainTopFp() = default ;
      DomainTopFp(const DomainTopFp &) = default ;
      DomainTopFp(DomainTopFp &&) = default ;
      DomainTopFp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainTopFp() = default ;
      DomainTopFp& operator=(const DomainTopFp &) = default ;
      DomainTopFp& operator=(DomainTopFp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->fingerprinting_ == nullptr && this->pv_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainTopFp& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // fingerprinting Field Functions 
      bool hasFingerprinting() const { return this->fingerprinting_ != nullptr;};
      void deleteFingerprinting() { this->fingerprinting_ = nullptr;};
      inline string getFingerprinting() const { DARABONBA_PTR_GET_DEFAULT(fingerprinting_, "") };
      inline DomainTopFp& setFingerprinting(string fingerprinting) { DARABONBA_PTR_SET_VALUE(fingerprinting_, fingerprinting) };


      // pv Field Functions 
      bool hasPv() const { return this->pv_ != nullptr;};
      void deletePv() { this->pv_ = nullptr;};
      inline int64_t getPv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
      inline DomainTopFp& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


    protected:
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The fingerprint of the client.
      shared_ptr<string> fingerprinting_ {};
      // The page views.
      shared_ptr<int64_t> pv_ {};
    };

    virtual bool empty() const override { return this->domainTopFp_ == nullptr
        && this->requestId_ == nullptr; };
    // domainTopFp Field Functions 
    bool hasDomainTopFp() const { return this->domainTopFp_ != nullptr;};
    void deleteDomainTopFp() { this->domainTopFp_ = nullptr;};
    inline const vector<DescribeDomainTopFingerprintResponseBody::DomainTopFp> & getDomainTopFp() const { DARABONBA_PTR_GET_CONST(domainTopFp_, vector<DescribeDomainTopFingerprintResponseBody::DomainTopFp>) };
    inline vector<DescribeDomainTopFingerprintResponseBody::DomainTopFp> getDomainTopFp() { DARABONBA_PTR_GET(domainTopFp_, vector<DescribeDomainTopFingerprintResponseBody::DomainTopFp>) };
    inline DescribeDomainTopFingerprintResponseBody& setDomainTopFp(const vector<DescribeDomainTopFingerprintResponseBody::DomainTopFp> & domainTopFp) { DARABONBA_PTR_SET_VALUE(domainTopFp_, domainTopFp) };
    inline DescribeDomainTopFingerprintResponseBody& setDomainTopFp(vector<DescribeDomainTopFingerprintResponseBody::DomainTopFp> && domainTopFp) { DARABONBA_PTR_SET_RVALUE(domainTopFp_, domainTopFp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopFingerprintResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the fingerprints of the clients.
    shared_ptr<vector<DescribeDomainTopFingerprintResponseBody::DomainTopFp>> domainTopFp_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
