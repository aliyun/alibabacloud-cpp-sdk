// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVETRAFFICDOMAINLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVETRAFFICDOMAINLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveTrafficDomainLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveTrafficDomainLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveTrafficDomainLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveTrafficDomainLogResponseBody() = default ;
    DescribeLiveTrafficDomainLogResponseBody(const DescribeLiveTrafficDomainLogResponseBody &) = default ;
    DescribeLiveTrafficDomainLogResponseBody(DescribeLiveTrafficDomainLogResponseBody &&) = default ;
    DescribeLiveTrafficDomainLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveTrafficDomainLogResponseBody() = default ;
    DescribeLiveTrafficDomainLogResponseBody& operator=(const DescribeLiveTrafficDomainLogResponseBody &) = default ;
    DescribeLiveTrafficDomainLogResponseBody& operator=(DescribeLiveTrafficDomainLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLogDetails_ == nullptr
        && return this->domainName_ == nullptr && return this->requestId_ == nullptr; };
    // domainLogDetails Field Functions 
    bool hasDomainLogDetails() const { return this->domainLogDetails_ != nullptr;};
    void deleteDomainLogDetails() { this->domainLogDetails_ = nullptr;};
    inline const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails & domainLogDetails() const { DARABONBA_PTR_GET_CONST(domainLogDetails_, DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails) };
    inline DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails domainLogDetails() { DARABONBA_PTR_GET(domainLogDetails_, DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails) };
    inline DescribeLiveTrafficDomainLogResponseBody& setDomainLogDetails(const DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails & domainLogDetails) { DARABONBA_PTR_SET_VALUE(domainLogDetails_, domainLogDetails) };
    inline DescribeLiveTrafficDomainLogResponseBody& setDomainLogDetails(DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails && domainLogDetails) { DARABONBA_PTR_SET_RVALUE(domainLogDetails_, domainLogDetails) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveTrafficDomainLogResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveTrafficDomainLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeLiveTrafficDomainLogResponseBodyDomainLogDetails> domainLogDetails_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
