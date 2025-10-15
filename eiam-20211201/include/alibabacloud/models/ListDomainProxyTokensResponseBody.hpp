// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINPROXYTOKENSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINPROXYTOKENSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDomainProxyTokensResponseBodyDomainProxyTokens.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListDomainProxyTokensResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainProxyTokensResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainProxyTokens, domainProxyTokens_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainProxyTokensResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainProxyTokens, domainProxyTokens_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDomainProxyTokensResponseBody() = default ;
    ListDomainProxyTokensResponseBody(const ListDomainProxyTokensResponseBody &) = default ;
    ListDomainProxyTokensResponseBody(ListDomainProxyTokensResponseBody &&) = default ;
    ListDomainProxyTokensResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainProxyTokensResponseBody() = default ;
    ListDomainProxyTokensResponseBody& operator=(const ListDomainProxyTokensResponseBody &) = default ;
    ListDomainProxyTokensResponseBody& operator=(ListDomainProxyTokensResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainProxyTokens_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainProxyTokens Field Functions 
    bool hasDomainProxyTokens() const { return this->domainProxyTokens_ != nullptr;};
    void deleteDomainProxyTokens() { this->domainProxyTokens_ = nullptr;};
    inline const vector<ListDomainProxyTokensResponseBodyDomainProxyTokens> & domainProxyTokens() const { DARABONBA_PTR_GET_CONST(domainProxyTokens_, vector<ListDomainProxyTokensResponseBodyDomainProxyTokens>) };
    inline vector<ListDomainProxyTokensResponseBodyDomainProxyTokens> domainProxyTokens() { DARABONBA_PTR_GET(domainProxyTokens_, vector<ListDomainProxyTokensResponseBodyDomainProxyTokens>) };
    inline ListDomainProxyTokensResponseBody& setDomainProxyTokens(const vector<ListDomainProxyTokensResponseBodyDomainProxyTokens> & domainProxyTokens) { DARABONBA_PTR_SET_VALUE(domainProxyTokens_, domainProxyTokens) };
    inline ListDomainProxyTokensResponseBody& setDomainProxyTokens(vector<ListDomainProxyTokensResponseBodyDomainProxyTokens> && domainProxyTokens) { DARABONBA_PTR_SET_RVALUE(domainProxyTokens_, domainProxyTokens) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDomainProxyTokensResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The proxy tokens of the domain name.
    std::shared_ptr<vector<ListDomainProxyTokensResponseBodyDomainProxyTokens>> domainProxyTokens_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
