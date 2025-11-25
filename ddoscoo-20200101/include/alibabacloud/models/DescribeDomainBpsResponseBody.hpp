// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINBPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainBpsResponseBodyDomainBps.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainBpsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainBpsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainBps, domainBps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainBpsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainBps, domainBps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainBpsResponseBody() = default ;
    DescribeDomainBpsResponseBody(const DescribeDomainBpsResponseBody &) = default ;
    DescribeDomainBpsResponseBody(DescribeDomainBpsResponseBody &&) = default ;
    DescribeDomainBpsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainBpsResponseBody() = default ;
    DescribeDomainBpsResponseBody& operator=(const DescribeDomainBpsResponseBody &) = default ;
    DescribeDomainBpsResponseBody& operator=(DescribeDomainBpsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainBps_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainBps Field Functions 
    bool hasDomainBps() const { return this->domainBps_ != nullptr;};
    void deleteDomainBps() { this->domainBps_ = nullptr;};
    inline const vector<DescribeDomainBpsResponseBodyDomainBps> & domainBps() const { DARABONBA_PTR_GET_CONST(domainBps_, vector<DescribeDomainBpsResponseBodyDomainBps>) };
    inline vector<DescribeDomainBpsResponseBodyDomainBps> domainBps() { DARABONBA_PTR_GET(domainBps_, vector<DescribeDomainBpsResponseBodyDomainBps>) };
    inline DescribeDomainBpsResponseBody& setDomainBps(const vector<DescribeDomainBpsResponseBodyDomainBps> & domainBps) { DARABONBA_PTR_SET_VALUE(domainBps_, domainBps) };
    inline DescribeDomainBpsResponseBody& setDomainBps(vector<DescribeDomainBpsResponseBodyDomainBps> && domainBps) { DARABONBA_PTR_SET_RVALUE(domainBps_, domainBps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainBpsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The bandwidths.
    std::shared_ptr<vector<DescribeDomainBpsResponseBodyDomainBps>> domainBps_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
