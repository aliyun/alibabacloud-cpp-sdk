// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINSBYLOGCONFIGIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINSBYLOGCONFIGIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDomainsByLogConfigIdResponseBodyDomains.hpp>
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
    virtual bool empty() const override { this->domains_ != nullptr
        && this->requestId_ != nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const ListDomainsByLogConfigIdResponseBodyDomains & domains() const { DARABONBA_PTR_GET_CONST(domains_, ListDomainsByLogConfigIdResponseBodyDomains) };
    inline ListDomainsByLogConfigIdResponseBodyDomains domains() { DARABONBA_PTR_GET(domains_, ListDomainsByLogConfigIdResponseBodyDomains) };
    inline ListDomainsByLogConfigIdResponseBody& setDomains(const ListDomainsByLogConfigIdResponseBodyDomains & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline ListDomainsByLogConfigIdResponseBody& setDomains(ListDomainsByLogConfigIdResponseBodyDomains && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainsByLogConfigIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The domain names.
    std::shared_ptr<ListDomainsByLogConfigIdResponseBodyDomains> domains_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
