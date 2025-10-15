// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDomainsResponseBodyDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Domains, domains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Domains, domains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDomainsResponseBody() = default ;
    ListDomainsResponseBody(const ListDomainsResponseBody &) = default ;
    ListDomainsResponseBody(ListDomainsResponseBody &&) = default ;
    ListDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainsResponseBody() = default ;
    ListDomainsResponseBody& operator=(const ListDomainsResponseBody &) = default ;
    ListDomainsResponseBody& operator=(ListDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domains_ == nullptr
        && return this->requestId_ == nullptr; };
    // domains Field Functions 
    bool hasDomains() const { return this->domains_ != nullptr;};
    void deleteDomains() { this->domains_ = nullptr;};
    inline const vector<ListDomainsResponseBodyDomains> & domains() const { DARABONBA_PTR_GET_CONST(domains_, vector<ListDomainsResponseBodyDomains>) };
    inline vector<ListDomainsResponseBodyDomains> domains() { DARABONBA_PTR_GET(domains_, vector<ListDomainsResponseBodyDomains>) };
    inline ListDomainsResponseBody& setDomains(const vector<ListDomainsResponseBodyDomains> & domains) { DARABONBA_PTR_SET_VALUE(domains_, domains) };
    inline ListDomainsResponseBody& setDomains(vector<ListDomainsResponseBodyDomains> && domains) { DARABONBA_PTR_SET_RVALUE(domains_, domains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the domain names.
    std::shared_ptr<vector<ListDomainsResponseBodyDomains>> domains_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
