// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSERVICEPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSERVICEPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class GetIdentityProviderServiceProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderServiceProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(protocol, protocol_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderServiceProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(protocol, protocol_);
    };
    GetIdentityProviderServiceProviderRequest() = default ;
    GetIdentityProviderServiceProviderRequest(const GetIdentityProviderServiceProviderRequest &) = default ;
    GetIdentityProviderServiceProviderRequest(GetIdentityProviderServiceProviderRequest &&) = default ;
    GetIdentityProviderServiceProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderServiceProviderRequest() = default ;
    GetIdentityProviderServiceProviderRequest& operator=(const GetIdentityProviderServiceProviderRequest &) = default ;
    GetIdentityProviderServiceProviderRequest& operator=(GetIdentityProviderServiceProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->protocol_ == nullptr; };
    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline GetIdentityProviderServiceProviderRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


  protected:
    // The query parameter is required and only supports the exact value SAML. The response returns SAML.
    // 
    // This parameter is required.
    shared_ptr<string> protocol_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
