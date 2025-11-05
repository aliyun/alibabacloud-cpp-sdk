// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSEXTTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSEXTTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainLogsExTtlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainLogsExTtlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainLogsExTtlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnDomainLogsExTtlResponseBody() = default ;
    DescribeCdnDomainLogsExTtlResponseBody(const DescribeCdnDomainLogsExTtlResponseBody &) = default ;
    DescribeCdnDomainLogsExTtlResponseBody(DescribeCdnDomainLogsExTtlResponseBody &&) = default ;
    DescribeCdnDomainLogsExTtlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainLogsExTtlResponseBody() = default ;
    DescribeCdnDomainLogsExTtlResponseBody& operator=(const DescribeCdnDomainLogsExTtlResponseBody &) = default ;
    DescribeCdnDomainLogsExTtlResponseBody& operator=(DescribeCdnDomainLogsExTtlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLogDetails_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainLogDetails Field Functions 
    bool hasDomainLogDetails() const { return this->domainLogDetails_ != nullptr;};
    void deleteDomainLogDetails() { this->domainLogDetails_ = nullptr;};
    inline const DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails & domainLogDetails() const { DARABONBA_PTR_GET_CONST(domainLogDetails_, DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails) };
    inline DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails domainLogDetails() { DARABONBA_PTR_GET(domainLogDetails_, DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails) };
    inline DescribeCdnDomainLogsExTtlResponseBody& setDomainLogDetails(const DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails & domainLogDetails) { DARABONBA_PTR_SET_VALUE(domainLogDetails_, domainLogDetails) };
    inline DescribeCdnDomainLogsExTtlResponseBody& setDomainLogDetails(DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails && domainLogDetails) { DARABONBA_PTR_SET_RVALUE(domainLogDetails_, domainLogDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnDomainLogsExTtlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeCdnDomainLogsExTtlResponseBodyDomainLogDetails> domainLogDetails_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
