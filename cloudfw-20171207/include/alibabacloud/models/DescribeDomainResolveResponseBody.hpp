// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOLVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRESOLVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainResolveResponseBodyResolveResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeDomainResolveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainResolveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResolveResult, resolveResult_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainResolveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResolveResult, resolveResult_);
    };
    DescribeDomainResolveResponseBody() = default ;
    DescribeDomainResolveResponseBody(const DescribeDomainResolveResponseBody &) = default ;
    DescribeDomainResolveResponseBody(DescribeDomainResolveResponseBody &&) = default ;
    DescribeDomainResolveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainResolveResponseBody() = default ;
    DescribeDomainResolveResponseBody& operator=(const DescribeDomainResolveResponseBody &) = default ;
    DescribeDomainResolveResponseBody& operator=(DescribeDomainResolveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resolveResult_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainResolveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resolveResult Field Functions 
    bool hasResolveResult() const { return this->resolveResult_ != nullptr;};
    void deleteResolveResult() { this->resolveResult_ = nullptr;};
    inline const DescribeDomainResolveResponseBodyResolveResult & resolveResult() const { DARABONBA_PTR_GET_CONST(resolveResult_, DescribeDomainResolveResponseBodyResolveResult) };
    inline DescribeDomainResolveResponseBodyResolveResult resolveResult() { DARABONBA_PTR_GET(resolveResult_, DescribeDomainResolveResponseBodyResolveResult) };
    inline DescribeDomainResolveResponseBody& setResolveResult(const DescribeDomainResolveResponseBodyResolveResult & resolveResult) { DARABONBA_PTR_SET_VALUE(resolveResult_, resolveResult) };
    inline DescribeDomainResolveResponseBody& setResolveResult(DescribeDomainResolveResponseBodyResolveResult && resolveResult) { DARABONBA_PTR_SET_RVALUE(resolveResult_, resolveResult) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details about the DNS record of the domain name.
    std::shared_ptr<DescribeDomainResolveResponseBodyResolveResult> resolveResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
