// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPFINGERPRINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPFINGERPRINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainTopFingerprintResponseBodyDomainTopFp.hpp>
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
    virtual bool empty() const override { return this->domainTopFp_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainTopFp Field Functions 
    bool hasDomainTopFp() const { return this->domainTopFp_ != nullptr;};
    void deleteDomainTopFp() { this->domainTopFp_ = nullptr;};
    inline const vector<DescribeDomainTopFingerprintResponseBodyDomainTopFp> & domainTopFp() const { DARABONBA_PTR_GET_CONST(domainTopFp_, vector<DescribeDomainTopFingerprintResponseBodyDomainTopFp>) };
    inline vector<DescribeDomainTopFingerprintResponseBodyDomainTopFp> domainTopFp() { DARABONBA_PTR_GET(domainTopFp_, vector<DescribeDomainTopFingerprintResponseBodyDomainTopFp>) };
    inline DescribeDomainTopFingerprintResponseBody& setDomainTopFp(const vector<DescribeDomainTopFingerprintResponseBodyDomainTopFp> & domainTopFp) { DARABONBA_PTR_SET_VALUE(domainTopFp_, domainTopFp) };
    inline DescribeDomainTopFingerprintResponseBody& setDomainTopFp(vector<DescribeDomainTopFingerprintResponseBodyDomainTopFp> && domainTopFp) { DARABONBA_PTR_SET_RVALUE(domainTopFp_, domainTopFp) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopFingerprintResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the fingerprints of the clients.
    std::shared_ptr<vector<DescribeDomainTopFingerprintResponseBodyDomainTopFp>> domainTopFp_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
