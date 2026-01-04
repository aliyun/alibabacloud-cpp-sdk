// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPUSERAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINTOPUSERAGENTRESPONSEBODY_HPP_
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
  class DescribeDomainTopUserAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainTopUserAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainTopUa, domainTopUa_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainTopUserAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainTopUa, domainTopUa_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainTopUserAgentResponseBody() = default ;
    DescribeDomainTopUserAgentResponseBody(const DescribeDomainTopUserAgentResponseBody &) = default ;
    DescribeDomainTopUserAgentResponseBody(DescribeDomainTopUserAgentResponseBody &&) = default ;
    DescribeDomainTopUserAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainTopUserAgentResponseBody() = default ;
    DescribeDomainTopUserAgentResponseBody& operator=(const DescribeDomainTopUserAgentResponseBody &) = default ;
    DescribeDomainTopUserAgentResponseBody& operator=(DescribeDomainTopUserAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainTopUa : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainTopUa& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Pv, pv_);
        DARABONBA_PTR_TO_JSON(UserAgent, userAgent_);
      };
      friend void from_json(const Darabonba::Json& j, DomainTopUa& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Pv, pv_);
        DARABONBA_PTR_FROM_JSON(UserAgent, userAgent_);
      };
      DomainTopUa() = default ;
      DomainTopUa(const DomainTopUa &) = default ;
      DomainTopUa(DomainTopUa &&) = default ;
      DomainTopUa(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainTopUa() = default ;
      DomainTopUa& operator=(const DomainTopUa &) = default ;
      DomainTopUa& operator=(DomainTopUa &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->pv_ == nullptr && this->userAgent_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainTopUa& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // pv Field Functions 
      bool hasPv() const { return this->pv_ != nullptr;};
      void deletePv() { this->pv_ = nullptr;};
      inline int64_t getPv() const { DARABONBA_PTR_GET_DEFAULT(pv_, 0L) };
      inline DomainTopUa& setPv(int64_t pv) { DARABONBA_PTR_SET_VALUE(pv_, pv) };


      // userAgent Field Functions 
      bool hasUserAgent() const { return this->userAgent_ != nullptr;};
      void deleteUserAgent() { this->userAgent_ = nullptr;};
      inline string getUserAgent() const { DARABONBA_PTR_GET_DEFAULT(userAgent_, "") };
      inline DomainTopUa& setUserAgent(string userAgent) { DARABONBA_PTR_SET_VALUE(userAgent_, userAgent) };


    protected:
      // The domain name of the website.
      shared_ptr<string> domain_ {};
      // The page views.
      shared_ptr<int64_t> pv_ {};
      // The Base64-encoded user agent.
      shared_ptr<string> userAgent_ {};
    };

    virtual bool empty() const override { return this->domainTopUa_ == nullptr
        && this->requestId_ == nullptr; };
    // domainTopUa Field Functions 
    bool hasDomainTopUa() const { return this->domainTopUa_ != nullptr;};
    void deleteDomainTopUa() { this->domainTopUa_ = nullptr;};
    inline const vector<DescribeDomainTopUserAgentResponseBody::DomainTopUa> & getDomainTopUa() const { DARABONBA_PTR_GET_CONST(domainTopUa_, vector<DescribeDomainTopUserAgentResponseBody::DomainTopUa>) };
    inline vector<DescribeDomainTopUserAgentResponseBody::DomainTopUa> getDomainTopUa() { DARABONBA_PTR_GET(domainTopUa_, vector<DescribeDomainTopUserAgentResponseBody::DomainTopUa>) };
    inline DescribeDomainTopUserAgentResponseBody& setDomainTopUa(const vector<DescribeDomainTopUserAgentResponseBody::DomainTopUa> & domainTopUa) { DARABONBA_PTR_SET_VALUE(domainTopUa_, domainTopUa) };
    inline DescribeDomainTopUserAgentResponseBody& setDomainTopUa(vector<DescribeDomainTopUserAgentResponseBody::DomainTopUa> && domainTopUa) { DARABONBA_PTR_SET_RVALUE(domainTopUa_, domainTopUa) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainTopUserAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the user agents.
    shared_ptr<vector<DescribeDomainTopUserAgentResponseBody::DomainTopUa>> domainTopUa_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
