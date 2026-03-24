// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINSBYLOGCONFIGIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINSBYLOGCONFIGIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListDomainsByLogConfigIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainsByLogConfigIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainsByLogConfigIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDomainsByLogConfigIdResponseBody() = default ;
    ListDomainsByLogConfigIdResponseBody(const ListDomainsByLogConfigIdResponseBody &) = default ;
    ListDomainsByLogConfigIdResponseBody(ListDomainsByLogConfigIdResponseBody &&) = default ;
    ListDomainsByLogConfigIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainsByLogConfigIdResponseBody() = default ;
    ListDomainsByLogConfigIdResponseBody& operator=(const ListDomainsByLogConfigIdResponseBody &) = default ;
    ListDomainsByLogConfigIdResponseBody& operator=(ListDomainsByLogConfigIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Domains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Domains& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
      };
      friend void from_json(const Darabonba::Json& j, Domains& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
      };
      Domains() = default ;
      Domains(const Domains &) = default ;
      Domains(Domains &&) = default ;
      Domains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Domains() = default ;
      Domains& operator=(const Domains &) = default ;
      Domains& operator=(Domains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline const vector<string> & getDomain() const { DARABONBA_PTR_GET_CONST(domain_, vector<string>) };
      inline vector<string> getDomain() { DARABONBA_PTR_GET(domain_, vector<string>) };
      inline Domains& setDomain(const vector<string> & domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };
      inline Domains& setDomain(vector<string> && domain) { DARABONBA_PTR_SET_RVALUE(domain_, domain) };


    protected:
      shared_ptr<vector<string>> domain_ {};
    };

    virtual bool empty() const override { return this->domains_ == nullptr
        && this->requestId_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const ListDomainsByLogConfigIdResponseBody::Domains & getDomains() const { DARABONBA_PTR_GET_CONST(domains_, ListDomainsByLogConfigIdResponseBody::Domains) };
    inline ListDomainsByLogConfigIdResponseBody::Domains getDomains() { DARABONBA_PTR_GET(domains_, ListDomainsByLogConfigIdResponseBody::Domains) };
    inline ListDomainsByLogConfigIdResponseBody& setDomains(const ListDomainsByLogConfigIdResponseBody::Domains & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline ListDomainsByLogConfigIdResponseBody& setDomains(ListDomainsByLogConfigIdResponseBody::Domains && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainsByLogConfigIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<ListDomainsByLogConfigIdResponseBody::Domains> domains_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
