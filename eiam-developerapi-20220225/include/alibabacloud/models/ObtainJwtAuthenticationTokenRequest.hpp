// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINJWTAUTHENTICATIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OBTAINJWTAUTHENTICATIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ObtainJwtAuthenticationTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainJwtAuthenticationTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authenticationTokenId, authenticationTokenId_);
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainJwtAuthenticationTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authenticationTokenId, authenticationTokenId_);
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
    };
    ObtainJwtAuthenticationTokenRequest() = default ;
    ObtainJwtAuthenticationTokenRequest(const ObtainJwtAuthenticationTokenRequest &) = default ;
    ObtainJwtAuthenticationTokenRequest(ObtainJwtAuthenticationTokenRequest &&) = default ;
    ObtainJwtAuthenticationTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainJwtAuthenticationTokenRequest() = default ;
    ObtainJwtAuthenticationTokenRequest& operator=(const ObtainJwtAuthenticationTokenRequest &) = default ;
    ObtainJwtAuthenticationTokenRequest& operator=(ObtainJwtAuthenticationTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationTokenId_ == nullptr
        && this->consumerId_ == nullptr; };
    // authenticationTokenId Field Functions 
    bool hasAuthenticationTokenId() const { return this->authenticationTokenId_ != nullptr;};
    void deleteAuthenticationTokenId() { this->authenticationTokenId_ = nullptr;};
    inline string getAuthenticationTokenId() const { DARABONBA_PTR_GET_DEFAULT(authenticationTokenId_, "") };
    inline ObtainJwtAuthenticationTokenRequest& setAuthenticationTokenId(string authenticationTokenId) { DARABONBA_PTR_SET_VALUE(authenticationTokenId_, authenticationTokenId) };


    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline ObtainJwtAuthenticationTokenRequest& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> authenticationTokenId_ {};
    // This parameter is required.
    shared_ptr<string> consumerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
