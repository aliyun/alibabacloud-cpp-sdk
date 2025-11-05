// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnDomainLogsResponseBodyDomainLogDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnDomainLogsResponseBody() = default ;
    DescribeCdnDomainLogsResponseBody(const DescribeCdnDomainLogsResponseBody &) = default ;
    DescribeCdnDomainLogsResponseBody(DescribeCdnDomainLogsResponseBody &&) = default ;
    DescribeCdnDomainLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainLogsResponseBody() = default ;
    DescribeCdnDomainLogsResponseBody& operator=(const DescribeCdnDomainLogsResponseBody &) = default ;
    DescribeCdnDomainLogsResponseBody& operator=(DescribeCdnDomainLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLogDetails_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainLogDetails Field Functions 
    bool hasDomainLogDetails() const { return this->domainLogDetails_ != nullptr;};
    void deleteDomainLogDetails() { this->domainLogDetails_ = nullptr;};
    inline const DescribeCdnDomainLogsResponseBodyDomainLogDetails & domainLogDetails() const { DARABONBA_PTR_GET_CONST(domainLogDetails_, DescribeCdnDomainLogsResponseBodyDomainLogDetails) };
    inline DescribeCdnDomainLogsResponseBodyDomainLogDetails domainLogDetails() { DARABONBA_PTR_GET(domainLogDetails_, DescribeCdnDomainLogsResponseBodyDomainLogDetails) };
    inline DescribeCdnDomainLogsResponseBody& setDomainLogDetails(const DescribeCdnDomainLogsResponseBodyDomainLogDetails & domainLogDetails) { DARABONBA_PTR_SET_VALUE(domainLogDetails_, domainLogDetails) };
    inline DescribeCdnDomainLogsResponseBody& setDomainLogDetails(DescribeCdnDomainLogsResponseBodyDomainLogDetails && domainLogDetails) { DARABONBA_PTR_SET_RVALUE(domainLogDetails_, domainLogDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnDomainLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A set of DomainLogDetail data.
    std::shared_ptr<DescribeCdnDomainLogsResponseBodyDomainLogDetails> domainLogDetails_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
