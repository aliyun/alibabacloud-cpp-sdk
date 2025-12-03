// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINEXTENSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINEXTENSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainExtensionsResponseBodyDomainExtensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeDomainExtensionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainExtensionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainExtensions, domainExtensions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainExtensionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainExtensions, domainExtensions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainExtensionsResponseBody() = default ;
    DescribeDomainExtensionsResponseBody(const DescribeDomainExtensionsResponseBody &) = default ;
    DescribeDomainExtensionsResponseBody(DescribeDomainExtensionsResponseBody &&) = default ;
    DescribeDomainExtensionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainExtensionsResponseBody() = default ;
    DescribeDomainExtensionsResponseBody& operator=(const DescribeDomainExtensionsResponseBody &) = default ;
    DescribeDomainExtensionsResponseBody& operator=(DescribeDomainExtensionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainExtensions_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainExtensions Field Functions 
    bool hasDomainExtensions() const { return this->domainExtensions_ != nullptr;};
    void deleteDomainExtensions() { this->domainExtensions_ = nullptr;};
    inline const DescribeDomainExtensionsResponseBodyDomainExtensions & domainExtensions() const { DARABONBA_PTR_GET_CONST(domainExtensions_, DescribeDomainExtensionsResponseBodyDomainExtensions) };
    inline DescribeDomainExtensionsResponseBodyDomainExtensions domainExtensions() { DARABONBA_PTR_GET(domainExtensions_, DescribeDomainExtensionsResponseBodyDomainExtensions) };
    inline DescribeDomainExtensionsResponseBody& setDomainExtensions(const DescribeDomainExtensionsResponseBodyDomainExtensions & domainExtensions) { DARABONBA_PTR_SET_VALUE(domainExtensions_, domainExtensions) };
    inline DescribeDomainExtensionsResponseBody& setDomainExtensions(DescribeDomainExtensionsResponseBodyDomainExtensions && domainExtensions) { DARABONBA_PTR_SET_RVALUE(domainExtensions_, domainExtensions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainExtensionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // A list of additional certificates.
    std::shared_ptr<DescribeDomainExtensionsResponseBodyDomainExtensions> domainExtensions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
