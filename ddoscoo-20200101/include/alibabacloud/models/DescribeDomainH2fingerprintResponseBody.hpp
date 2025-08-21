// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINH2FINGERPRINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINH2FINGERPRINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainH2FingerprintResponseBodyDomainH2Fp.hpp>
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
    virtual bool empty() const override { this->domainH2Fp_ != nullptr
        && this->requestId_ != nullptr; };
    // domainH2Fp Field Functions 
    bool hasDomainH2Fp() const { return this->domainH2Fp_ != nullptr;};
    void deleteDomainH2Fp() { this->domainH2Fp_ = nullptr;};
    inline const vector<DescribeDomainH2FingerprintResponseBodyDomainH2Fp> & domainH2Fp() const { DARABONBA_PTR_GET_CONST(domainH2Fp_, vector<DescribeDomainH2FingerprintResponseBodyDomainH2Fp>) };
    inline vector<DescribeDomainH2FingerprintResponseBodyDomainH2Fp> domainH2Fp() { DARABONBA_PTR_GET(domainH2Fp_, vector<DescribeDomainH2FingerprintResponseBodyDomainH2Fp>) };
    inline DescribeDomainH2FingerprintResponseBody& setDomainH2Fp(const vector<DescribeDomainH2FingerprintResponseBodyDomainH2Fp> & domainH2Fp) { DARABONBA_PTR_SET_VALUE(domainH2Fp_, domainH2Fp) };
    inline DescribeDomainH2FingerprintResponseBody& setDomainH2Fp(vector<DescribeDomainH2FingerprintResponseBodyDomainH2Fp> && domainH2Fp) { DARABONBA_PTR_SET_RVALUE(domainH2Fp_, domainH2Fp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainH2FingerprintResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about top N HTTP/2 fingerprints.
    std::shared_ptr<vector<DescribeDomainH2FingerprintResponseBodyDomainH2Fp>> domainH2Fp_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
