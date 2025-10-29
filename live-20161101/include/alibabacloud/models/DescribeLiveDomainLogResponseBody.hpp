// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainLogResponseBodyDomainLogDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveDomainLogResponseBody() = default ;
    DescribeLiveDomainLogResponseBody(const DescribeLiveDomainLogResponseBody &) = default ;
    DescribeLiveDomainLogResponseBody(DescribeLiveDomainLogResponseBody &&) = default ;
    DescribeLiveDomainLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainLogResponseBody() = default ;
    DescribeLiveDomainLogResponseBody& operator=(const DescribeLiveDomainLogResponseBody &) = default ;
    DescribeLiveDomainLogResponseBody& operator=(DescribeLiveDomainLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLogDetails_ == nullptr
        && return this->domainName_ == nullptr && return this->requestId_ == nullptr; };
    // domainLogDetails Field Functions 
    bool hasDomainLogDetails() const { return this->domainLogDetails_ != nullptr;};
    void deleteDomainLogDetails() { this->domainLogDetails_ = nullptr;};
    inline const DescribeLiveDomainLogResponseBodyDomainLogDetails & domainLogDetails() const { DARABONBA_PTR_GET_CONST(domainLogDetails_, DescribeLiveDomainLogResponseBodyDomainLogDetails) };
    inline DescribeLiveDomainLogResponseBodyDomainLogDetails domainLogDetails() { DARABONBA_PTR_GET(domainLogDetails_, DescribeLiveDomainLogResponseBodyDomainLogDetails) };
    inline DescribeLiveDomainLogResponseBody& setDomainLogDetails(const DescribeLiveDomainLogResponseBodyDomainLogDetails & domainLogDetails) { DARABONBA_PTR_SET_VALUE(domainLogDetails_, domainLogDetails) };
    inline DescribeLiveDomainLogResponseBody& setDomainLogDetails(DescribeLiveDomainLogResponseBodyDomainLogDetails && domainLogDetails) { DARABONBA_PTR_SET_RVALUE(domainLogDetails_, domainLogDetails) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDomainLogResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The log information.
    std::shared_ptr<DescribeLiveDomainLogResponseBodyDomainLogDetails> domainLogDetails_ = nullptr;
    // The streaming domain or ingest domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
