// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPHTTPMETHODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPHTTPMETHODRESPONSEBODY_HPP_
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
  class DescribeDomainTopHttpMethodResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopHttpMethodResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTopMethod, domainTopMethod_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopHttpMethodResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTopMethod, domainTopMethod_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopHttpMethodResponseBody() = default ;
    DescribeDomainTopHttpMethodResponseBody(const DescribeDomainTopHttpMethodResponseBody &) = default ;
    DescribeDomainTopHttpMethodResponseBody(DescribeDomainTopHttpMethodResponseBody &&) = default ;
    DescribeDomainTopHttpMethodResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopHttpMethodResponseBody() = default ;
    DescribeDomainTopHttpMethodResponseBody& operator=(const DescribeDomainTopHttpMethodResponseBody &) = default ;
    DescribeDomainTopHttpMethodResponseBody& operator=(DescribeDomainTopHttpMethodResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainTopMethod : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainTopMethod& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
        DARABONBA_PTR_TO_JSON(Pv, pv_);
      };
      friend void from_json(const Darabonba::Json& j, DomainTopMethod& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
        DARABONBA_PTR_FROM_JSON(Pv, pv_);
      };
      DomainTopMethod() = default ;
      DomainTopMethod(const DomainTopMethod &) = default ;
      DomainTopMethod(DomainTopMethod &&) = default ;
      DomainTopMethod(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainTopMethod() = default ;
      DomainTopMethod& operator=(const DomainTopMethod &) = default ;
      DomainTopMethod& operator=(DomainTopMethod &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->httpMethod_ == nullptr && this->pv_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainTopMethod& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // httpMethod Field Functions 
      bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
      void deleteHttpMethod() { this->httpMethod_ = nullptr;};
      inline string getHttpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
      inline DomainTopMethod& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


      // pv Field Functions 
      bool hasPv() const { return this->pv_ != nullptr;};
      void deletePv() { this->pv_ = nullptr;};
      inline int64_t getPv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
      inline DomainTopMethod& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


    protected:
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The HTTP method.
      shared_ptr<string> httpMethod_ {};
      // The page views.
      shared_ptr<int64_t> pv_ {};
    };

    virtual bool empty() const override { return this->domainTopMethod_ == nullptr
        && this->requestId_ == nullptr; };
    // domainTopMethod Field Functions 
    bool hasDomainTopMethod() const { return this->domainTopMethod_ != nullptr;};
    void deleteDomainTopMethod() { this->domainTopMethod_ = nullptr;};
    inline const vector<DescribeDomainTopHttpMethodResponseBody::DomainTopMethod> & getDomainTopMethod() const { DARABONBA_PTR_GET_CONST(domainTopMethod_, vector<DescribeDomainTopHttpMethodResponseBody::DomainTopMethod>) };
    inline vector<DescribeDomainTopHttpMethodResponseBody::DomainTopMethod> getDomainTopMethod() { DARABONBA_PTR_GET(domainTopMethod_, vector<DescribeDomainTopHttpMethodResponseBody::DomainTopMethod>) };
    inline DescribeDomainTopHttpMethodResponseBody& setDomainTopMethod(const vector<DescribeDomainTopHttpMethodResponseBody::DomainTopMethod> & domainTopMethod) { DARABONBA_PTR_SET_VALUE(domainTopMethod_, domainTopMethod) };
    inline DescribeDomainTopHttpMethodResponseBody& setDomainTopMethod(vector<DescribeDomainTopHttpMethodResponseBody::DomainTopMethod> && domainTopMethod) { DARABONBA_PTR_SET_RVALUE(domainTopMethod_, domainTopMethod) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopHttpMethodResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about top HTTP methods.
    shared_ptr<vector<DescribeDomainTopHttpMethodResponseBody::DomainTopMethod>> domainTopMethod_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
