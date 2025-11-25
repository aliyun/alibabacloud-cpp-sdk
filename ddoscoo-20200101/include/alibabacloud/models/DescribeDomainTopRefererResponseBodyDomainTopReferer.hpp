// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERERRESPONSEBODYDOMAINTOPREFERER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERERRESPONSEBODYDOMAINTOPREFERER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainTopRefererResponseBodyDomainTopReferer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopRefererResponseBodyDomainTopReferer& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Pv, pv_);
      DARABONBA_PTR_TO_JSON(Referer, referer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopRefererResponseBodyDomainTopReferer& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Pv, pv_);
      DARABONBA_PTR_FROM_JSON(Referer, referer_);
    };
    DescribeDomainTopRefererResponseBodyDomainTopReferer() = default ;
    DescribeDomainTopRefererResponseBodyDomainTopReferer(const DescribeDomainTopRefererResponseBodyDomainTopReferer &) = default ;
    DescribeDomainTopRefererResponseBodyDomainTopReferer(DescribeDomainTopRefererResponseBodyDomainTopReferer &&) = default ;
    DescribeDomainTopRefererResponseBodyDomainTopReferer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopRefererResponseBodyDomainTopReferer() = default ;
    DescribeDomainTopRefererResponseBodyDomainTopReferer& operator=(const DescribeDomainTopRefererResponseBodyDomainTopReferer &) = default ;
    DescribeDomainTopRefererResponseBodyDomainTopReferer& operator=(DescribeDomainTopRefererResponseBodyDomainTopReferer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->pv_ == nullptr && return this->referer_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainTopRefererResponseBodyDomainTopReferer& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // pv Field Functions 
    bool hasPv() const { return this->pv_ != nullptr;};
    void deletePv() { this->pv_ = nullptr;};
    inline int64_t pv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
    inline DescribeDomainTopRefererResponseBodyDomainTopReferer& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


    // referer Field Functions 
    bool hasReferer() const { return this->referer_ != nullptr;};
    void deleteReferer() { this->referer_ = nullptr;};
    inline string referer() const { DARABONBA_PTR_GET_DEFAULT(referer_, "") };
    inline DescribeDomainTopRefererResponseBodyDomainTopReferer& setReferer(string referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };


  protected:
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The page views.
    std::shared_ptr<int64_t> pv_ = nullptr;
    // The Base64-encoded referer.
    std::shared_ptr<string> referer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
