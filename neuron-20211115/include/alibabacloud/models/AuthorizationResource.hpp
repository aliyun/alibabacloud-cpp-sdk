// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZATIONRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZATIONRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class AuthorizationResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizationResource& obj) { 
      DARABONBA_PTR_TO_JSON(authorizerId, authorizerId_);
      DARABONBA_PTR_TO_JSON(authorizerType, authorizerType_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizationResource& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizerId, authorizerId_);
      DARABONBA_PTR_FROM_JSON(authorizerType, authorizerType_);
    };
    AuthorizationResource() = default ;
    AuthorizationResource(const AuthorizationResource &) = default ;
    AuthorizationResource(AuthorizationResource &&) = default ;
    AuthorizationResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizationResource() = default ;
    AuthorizationResource& operator=(const AuthorizationResource &) = default ;
    AuthorizationResource& operator=(AuthorizationResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizerId_ == nullptr
        && this->authorizerType_ == nullptr; };
    // authorizerId Field Functions 
    bool hasAuthorizerId() const { return this->authorizerId_ != nullptr;};
    void deleteAuthorizerId() { this->authorizerId_ = nullptr;};
    inline string getAuthorizerId() const { DARABONBA_PTR_GET_DEFAULT(authorizerId_, "") };
    inline AuthorizationResource& setAuthorizerId(string authorizerId) { DARABONBA_PTR_SET_VALUE(authorizerId_, authorizerId) };


    // authorizerType Field Functions 
    bool hasAuthorizerType() const { return this->authorizerType_ != nullptr;};
    void deleteAuthorizerType() { this->authorizerType_ = nullptr;};
    inline string getAuthorizerType() const { DARABONBA_PTR_GET_DEFAULT(authorizerType_, "") };
    inline AuthorizationResource& setAuthorizerType(string authorizerType) { DARABONBA_PTR_SET_VALUE(authorizerType_, authorizerType) };


  protected:
    // This parameter is required.
    shared_ptr<string> authorizerId_ {};
    // This parameter is required.
    shared_ptr<string> authorizerType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
