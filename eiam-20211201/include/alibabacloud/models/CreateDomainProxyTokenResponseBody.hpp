// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDOMAINPROXYTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDOMAINPROXYTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateDomainProxyTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDomainProxyTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainProxyTokenId, domainProxyTokenId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDomainProxyTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainProxyTokenId, domainProxyTokenId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDomainProxyTokenResponseBody() = default ;
    CreateDomainProxyTokenResponseBody(const CreateDomainProxyTokenResponseBody &) = default ;
    CreateDomainProxyTokenResponseBody(CreateDomainProxyTokenResponseBody &&) = default ;
    CreateDomainProxyTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDomainProxyTokenResponseBody() = default ;
    CreateDomainProxyTokenResponseBody& operator=(const CreateDomainProxyTokenResponseBody &) = default ;
    CreateDomainProxyTokenResponseBody& operator=(CreateDomainProxyTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainProxyTokenId_ != nullptr
        && this->requestId_ != nullptr; };
    // domainProxyTokenId Field Functions 
    bool hasDomainProxyTokenId() const { return this->domainProxyTokenId_ != nullptr;};
    void deleteDomainProxyTokenId() { this->domainProxyTokenId_ = nullptr;};
    inline string domainProxyTokenId() const { DARABONBA_PTR_GET_DEFAULT(domainProxyTokenId_, "") };
    inline CreateDomainProxyTokenResponseBody& setDomainProxyTokenId(string domainProxyTokenId) { DARABONBA_PTR_SET_VALUE(domainProxyTokenId_, domainProxyTokenId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDomainProxyTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the proxy token of the domain name.
    std::shared_ptr<string> domainProxyTokenId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
