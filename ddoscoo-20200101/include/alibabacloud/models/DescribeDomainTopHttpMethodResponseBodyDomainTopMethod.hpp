// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPHTTPMETHODRESPONSEBODYDOMAINTOPMETHOD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPHTTPMETHODRESPONSEBODYDOMAINTOPMETHOD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainTopHttpMethodResponseBodyDomainTopMethod : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopHttpMethodResponseBodyDomainTopMethod& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_TO_JSON(Pv, pv_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopHttpMethodResponseBodyDomainTopMethod& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(HttpMethod, httpMethod_);
      DARABONBA_PTR_FROM_JSON(Pv, pv_);
    };
    DescribeDomainTopHttpMethodResponseBodyDomainTopMethod() = default ;
    DescribeDomainTopHttpMethodResponseBodyDomainTopMethod(const DescribeDomainTopHttpMethodResponseBodyDomainTopMethod &) = default ;
    DescribeDomainTopHttpMethodResponseBodyDomainTopMethod(DescribeDomainTopHttpMethodResponseBodyDomainTopMethod &&) = default ;
    DescribeDomainTopHttpMethodResponseBodyDomainTopMethod(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopHttpMethodResponseBodyDomainTopMethod() = default ;
    DescribeDomainTopHttpMethodResponseBodyDomainTopMethod& operator=(const DescribeDomainTopHttpMethodResponseBodyDomainTopMethod &) = default ;
    DescribeDomainTopHttpMethodResponseBodyDomainTopMethod& operator=(DescribeDomainTopHttpMethodResponseBodyDomainTopMethod &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->httpMethod_ == nullptr && return this->pv_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainTopHttpMethodResponseBodyDomainTopMethod& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // httpMethod Field Functions 
    bool hasHttpMethod() const { return this->httpMethod_ != nullptr;};
    void deleteHttpMethod() { this->httpMethod_ = nullptr;};
    inline string httpMethod() const { DARABONBA_PTR_GET_DEFAULT(httpMethod_, "") };
    inline DescribeDomainTopHttpMethodResponseBodyDomainTopMethod& setHttpMethod(string httpMethod) { DARABONBA_PTR_SET_VALUE(httpMethod_, httpMethod) };


    // pv Field Functions 
    bool hasPv() const { return this->pv_ != nullptr;};
    void deletePv() { this->pv_ = nullptr;};
    inline int64_t pv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
    inline DescribeDomainTopHttpMethodResponseBodyDomainTopMethod& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


  protected:
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The HTTP method.
    std::shared_ptr<string> httpMethod_ = nullptr;
    // The page views.
    std::shared_ptr<int64_t> pv_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
