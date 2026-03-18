// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKEAUTHENTICATIONTOKENBYCONSUMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKEAUTHENTICATIONTOKENBYCONSUMERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class RevokeAuthenticationTokenByConsumerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeAuthenticationTokenByConsumerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(consumerId, consumerId_);
      DARABONBA_PTR_TO_JSON(credentialProviderIdentifier, credentialProviderIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeAuthenticationTokenByConsumerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(consumerId, consumerId_);
      DARABONBA_PTR_FROM_JSON(credentialProviderIdentifier, credentialProviderIdentifier_);
    };
    RevokeAuthenticationTokenByConsumerRequest() = default ;
    RevokeAuthenticationTokenByConsumerRequest(const RevokeAuthenticationTokenByConsumerRequest &) = default ;
    RevokeAuthenticationTokenByConsumerRequest(RevokeAuthenticationTokenByConsumerRequest &&) = default ;
    RevokeAuthenticationTokenByConsumerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeAuthenticationTokenByConsumerRequest() = default ;
    RevokeAuthenticationTokenByConsumerRequest& operator=(const RevokeAuthenticationTokenByConsumerRequest &) = default ;
    RevokeAuthenticationTokenByConsumerRequest& operator=(RevokeAuthenticationTokenByConsumerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consumerId_ == nullptr
        && this->credentialProviderIdentifier_ == nullptr; };
    // consumerId Field Functions 
    bool hasConsumerId() const { return this->consumerId_ != nullptr;};
    void deleteConsumerId() { this->consumerId_ = nullptr;};
    inline string getConsumerId() const { DARABONBA_PTR_GET_DEFAULT(consumerId_, "") };
    inline RevokeAuthenticationTokenByConsumerRequest& setConsumerId(string consumerId) { DARABONBA_PTR_SET_VALUE(consumerId_, consumerId) };


    // credentialProviderIdentifier Field Functions 
    bool hasCredentialProviderIdentifier() const { return this->credentialProviderIdentifier_ != nullptr;};
    void deleteCredentialProviderIdentifier() { this->credentialProviderIdentifier_ = nullptr;};
    inline string getCredentialProviderIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderIdentifier_, "") };
    inline RevokeAuthenticationTokenByConsumerRequest& setCredentialProviderIdentifier(string credentialProviderIdentifier) { DARABONBA_PTR_SET_VALUE(credentialProviderIdentifier_, credentialProviderIdentifier) };


  protected:
    // This parameter is required.
    shared_ptr<string> consumerId_ {};
    // This parameter is required.
    shared_ptr<string> credentialProviderIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
