// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINDOMAINPROXYTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OBTAINDOMAINPROXYTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ObtainDomainProxyTokenResponseBodyDomainProxyToken.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainDomainProxyTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainDomainProxyTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainProxyToken, domainProxyToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainDomainProxyTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainProxyToken, domainProxyToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ObtainDomainProxyTokenResponseBody() = default ;
    ObtainDomainProxyTokenResponseBody(const ObtainDomainProxyTokenResponseBody &) = default ;
    ObtainDomainProxyTokenResponseBody(ObtainDomainProxyTokenResponseBody &&) = default ;
    ObtainDomainProxyTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainDomainProxyTokenResponseBody() = default ;
    ObtainDomainProxyTokenResponseBody& operator=(const ObtainDomainProxyTokenResponseBody &) = default ;
    ObtainDomainProxyTokenResponseBody& operator=(ObtainDomainProxyTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainProxyToken_ == nullptr
        && return this->requestId_ == nullptr; };
    // domainProxyToken Field Functions 
    bool hasDomainProxyToken() const { return this->domainProxyToken_ != nullptr;};
    void deleteDomainProxyToken() { this->domainProxyToken_ = nullptr;};
    inline const ObtainDomainProxyTokenResponseBodyDomainProxyToken & domainProxyToken() const { DARABONBA_PTR_GET_CONST(domainProxyToken_, ObtainDomainProxyTokenResponseBodyDomainProxyToken) };
    inline ObtainDomainProxyTokenResponseBodyDomainProxyToken domainProxyToken() { DARABONBA_PTR_GET(domainProxyToken_, ObtainDomainProxyTokenResponseBodyDomainProxyToken) };
    inline ObtainDomainProxyTokenResponseBody& setDomainProxyToken(const ObtainDomainProxyTokenResponseBodyDomainProxyToken & domainProxyToken) { DARABONBA_PTR_SET_VALUE(domainProxyToken_, domainProxyToken) };
    inline ObtainDomainProxyTokenResponseBody& setDomainProxyToken(ObtainDomainProxyTokenResponseBodyDomainProxyToken && domainProxyToken) { DARABONBA_PTR_SET_RVALUE(domainProxyToken_, domainProxyToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ObtainDomainProxyTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the proxy token.
    std::shared_ptr<ObtainDomainProxyTokenResponseBodyDomainProxyToken> domainProxyToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
