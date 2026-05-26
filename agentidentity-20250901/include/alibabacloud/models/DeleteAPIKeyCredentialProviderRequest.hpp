// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPIKEYCREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPIKEYCREDENTIALPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class DeleteAPIKeyCredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAPIKeyCredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(TokenVaultName, tokenVaultName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAPIKeyCredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(TokenVaultName, tokenVaultName_);
    };
    DeleteAPIKeyCredentialProviderRequest() = default ;
    DeleteAPIKeyCredentialProviderRequest(const DeleteAPIKeyCredentialProviderRequest &) = default ;
    DeleteAPIKeyCredentialProviderRequest(DeleteAPIKeyCredentialProviderRequest &&) = default ;
    DeleteAPIKeyCredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAPIKeyCredentialProviderRequest() = default ;
    DeleteAPIKeyCredentialProviderRequest& operator=(const DeleteAPIKeyCredentialProviderRequest &) = default ;
    DeleteAPIKeyCredentialProviderRequest& operator=(DeleteAPIKeyCredentialProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->APIKeyCredentialProviderName_ == nullptr
        && this->tokenVaultName_ == nullptr; };
    // APIKeyCredentialProviderName Field Functions 
    bool hasAPIKeyCredentialProviderName() const { return this->APIKeyCredentialProviderName_ != nullptr;};
    void deleteAPIKeyCredentialProviderName() { this->APIKeyCredentialProviderName_ = nullptr;};
    inline string getAPIKeyCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(APIKeyCredentialProviderName_, "") };
    inline DeleteAPIKeyCredentialProviderRequest& setAPIKeyCredentialProviderName(string APIKeyCredentialProviderName) { DARABONBA_PTR_SET_VALUE(APIKeyCredentialProviderName_, APIKeyCredentialProviderName) };


    // tokenVaultName Field Functions 
    bool hasTokenVaultName() const { return this->tokenVaultName_ != nullptr;};
    void deleteTokenVaultName() { this->tokenVaultName_ = nullptr;};
    inline string getTokenVaultName() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultName_, "") };
    inline DeleteAPIKeyCredentialProviderRequest& setTokenVaultName(string tokenVaultName) { DARABONBA_PTR_SET_VALUE(tokenVaultName_, tokenVaultName) };


  protected:
    shared_ptr<string> APIKeyCredentialProviderName_ {};
    shared_ptr<string> tokenVaultName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
