// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPREFERERRESPONSEBODY_HPP_
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
  class DescribeDomainTopRefererResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopRefererResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTopReferer, domainTopReferer_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopRefererResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTopReferer, domainTopReferer_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopRefererResponseBody() = default ;
    DescribeDomainTopRefererResponseBody(const DescribeDomainTopRefererResponseBody &) = default ;
    DescribeDomainTopRefererResponseBody(DescribeDomainTopRefererResponseBody &&) = default ;
    DescribeDomainTopRefererResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopRefererResponseBody() = default ;
    DescribeDomainTopRefererResponseBody& operator=(const DescribeDomainTopRefererResponseBody &) = default ;
    DescribeDomainTopRefererResponseBody& operator=(DescribeDomainTopRefererResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainTopReferer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainTopReferer& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Pv, pv_);
        DARABONBA_PTR_TO_JSON(Referer, referer_);
      };
      friend void from_json(const Darabonba::Json& j, DomainTopReferer& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Pv, pv_);
        DARABONBA_PTR_FROM_JSON(Referer, referer_);
      };
      DomainTopReferer() = default ;
      DomainTopReferer(const DomainTopReferer &) = default ;
      DomainTopReferer(DomainTopReferer &&) = default ;
      DomainTopReferer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainTopReferer() = default ;
      DomainTopReferer& operator=(const DomainTopReferer &) = default ;
      DomainTopReferer& operator=(DomainTopReferer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->pv_ == nullptr && this->referer_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainTopReferer& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // pv Field Functions 
      bool hasPv() const { return this->pv_ != nullptr;};
      void deletePv() { this->pv_ = nullptr;};
      inline int64_t getPv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
      inline DomainTopReferer& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


      // referer Field Functions 
      bool hasReferer() const { return this->referer_ != nullptr;};
      void deleteReferer() { this->referer_ = nullptr;};
      inline string getReferer() const { DARABONBA_PTR_GET_DEFAULT(referer_, "") };
      inline DomainTopReferer& setReferer(string referer) { DARABONBA_PTR_SET_VALUE(referer_, referer) };


    protected:
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The page views.
      shared_ptr<int64_t> pv_ {};
      // The Base64-encoded referer.
      shared_ptr<string> referer_ {};
    };

    virtual bool empty() const override { return this->domainTopReferer_ == nullptr
        && this->requestId_ == nullptr; };
    // domainTopReferer Field Functions 
    bool hasDomainTopReferer() const { return this->domainTopReferer_ != nullptr;};
    void deleteDomainTopReferer() { this->domainTopReferer_ = nullptr;};
    inline const vector<DescribeDomainTopRefererResponseBody::DomainTopReferer> & getDomainTopReferer() const { DARABONBA_PTR_GET_CONST(domainTopReferer_, vector<DescribeDomainTopRefererResponseBody::DomainTopReferer>) };
    inline vector<DescribeDomainTopRefererResponseBody::DomainTopReferer> getDomainTopReferer() { DARABONBA_PTR_GET(domainTopReferer_, vector<DescribeDomainTopRefererResponseBody::DomainTopReferer>) };
    inline DescribeDomainTopRefererResponseBody& setDomainTopReferer(const vector<DescribeDomainTopRefererResponseBody::DomainTopReferer> & domainTopReferer) { DARABONBA_PTR_SET_VALUE(domainTopReferer_, domainTopReferer) };
    inline DescribeDomainTopRefererResponseBody& setDomainTopReferer(vector<DescribeDomainTopRefererResponseBody::DomainTopReferer> && domainTopReferer) { DARABONBA_PTR_SET_RVALUE(domainTopReferer_, domainTopReferer) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopRefererResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about top referers.
    shared_ptr<vector<DescribeDomainTopRefererResponseBody::DomainTopReferer>> domainTopReferer_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
