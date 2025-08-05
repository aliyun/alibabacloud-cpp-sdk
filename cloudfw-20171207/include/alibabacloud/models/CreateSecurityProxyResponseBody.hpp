// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESECURITYPROXYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESECURITYPROXYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateSecurityProxyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSecurityProxyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSecurityProxyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProxyId, proxyId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSecurityProxyResponseBody() = default ;
    CreateSecurityProxyResponseBody(const CreateSecurityProxyResponseBody &) = default ;
    CreateSecurityProxyResponseBody(CreateSecurityProxyResponseBody &&) = default ;
    CreateSecurityProxyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSecurityProxyResponseBody() = default ;
    CreateSecurityProxyResponseBody& operator=(const CreateSecurityProxyResponseBody &) = default ;
    CreateSecurityProxyResponseBody& operator=(CreateSecurityProxyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->proxyId_ != nullptr
        && this->requestId_ != nullptr; };
    // proxyId Field Functions 
    bool hasProxyId() const { return this->proxyId_ != nullptr;};
    void deleteProxyId() { this->proxyId_ = nullptr;};
    inline string proxyId() const { DARABONBA_PTR_GET_DEFAULT(proxyId_, "") };
    inline CreateSecurityProxyResponseBody& setProxyId(string proxyId) { DARABONBA_PTR_SET_VALUE(proxyId_, proxyId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSecurityProxyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the NAT firewall.
    std::shared_ptr<string> proxyId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
