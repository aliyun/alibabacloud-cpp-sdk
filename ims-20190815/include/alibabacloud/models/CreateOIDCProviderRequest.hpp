// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOIDCPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOIDCPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateOIDCProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOIDCProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIds, clientIds_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Fingerprints, fingerprints_);
      DARABONBA_PTR_TO_JSON(IssuanceLimitTime, issuanceLimitTime_);
      DARABONBA_PTR_TO_JSON(IssuerUrl, issuerUrl_);
      DARABONBA_PTR_TO_JSON(OIDCProviderName, OIDCProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOIDCProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIds, clientIds_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Fingerprints, fingerprints_);
      DARABONBA_PTR_FROM_JSON(IssuanceLimitTime, issuanceLimitTime_);
      DARABONBA_PTR_FROM_JSON(IssuerUrl, issuerUrl_);
      DARABONBA_PTR_FROM_JSON(OIDCProviderName, OIDCProviderName_);
    };
    CreateOIDCProviderRequest() = default ;
    CreateOIDCProviderRequest(const CreateOIDCProviderRequest &) = default ;
    CreateOIDCProviderRequest(CreateOIDCProviderRequest &&) = default ;
    CreateOIDCProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOIDCProviderRequest() = default ;
    CreateOIDCProviderRequest& operator=(const CreateOIDCProviderRequest &) = default ;
    CreateOIDCProviderRequest& operator=(CreateOIDCProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientIds_ == nullptr
        && this->description_ == nullptr && this->fingerprints_ == nullptr && this->issuanceLimitTime_ == nullptr && this->issuerUrl_ == nullptr && this->OIDCProviderName_ == nullptr; };
    // clientIds Field Functions 
    bool hasClientIds() const { return this->clientIds_ != nullptr;};
    void deleteClientIds() { this->clientIds_ = nullptr;};
    inline string getClientIds() const { DARABONBA_PTR_GET_DEFAULT(clientIds_, "") };
    inline CreateOIDCProviderRequest& setClientIds(string clientIds) { DARABONBA_PTR_SET_VALUE(clientIds_, clientIds) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOIDCProviderRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fingerprints Field Functions 
    bool hasFingerprints() const { return this->fingerprints_ != nullptr;};
    void deleteFingerprints() { this->fingerprints_ = nullptr;};
    inline string getFingerprints() const { DARABONBA_PTR_GET_DEFAULT(fingerprints_, "") };
    inline CreateOIDCProviderRequest& setFingerprints(string fingerprints) { DARABONBA_PTR_SET_VALUE(fingerprints_, fingerprints) };


    // issuanceLimitTime Field Functions 
    bool hasIssuanceLimitTime() const { return this->issuanceLimitTime_ != nullptr;};
    void deleteIssuanceLimitTime() { this->issuanceLimitTime_ = nullptr;};
    inline int64_t getIssuanceLimitTime() const { DARABONBA_PTR_GET_DEFAULT(issuanceLimitTime_, 0L) };
    inline CreateOIDCProviderRequest& setIssuanceLimitTime(int64_t issuanceLimitTime) { DARABONBA_PTR_SET_VALUE(issuanceLimitTime_, issuanceLimitTime) };


    // issuerUrl Field Functions 
    bool hasIssuerUrl() const { return this->issuerUrl_ != nullptr;};
    void deleteIssuerUrl() { this->issuerUrl_ = nullptr;};
    inline string getIssuerUrl() const { DARABONBA_PTR_GET_DEFAULT(issuerUrl_, "") };
    inline CreateOIDCProviderRequest& setIssuerUrl(string issuerUrl) { DARABONBA_PTR_SET_VALUE(issuerUrl_, issuerUrl) };


    // OIDCProviderName Field Functions 
    bool hasOIDCProviderName() const { return this->OIDCProviderName_ != nullptr;};
    void deleteOIDCProviderName() { this->OIDCProviderName_ = nullptr;};
    inline string getOIDCProviderName() const { DARABONBA_PTR_GET_DEFAULT(OIDCProviderName_, "") };
    inline CreateOIDCProviderRequest& setOIDCProviderName(string OIDCProviderName) { DARABONBA_PTR_SET_VALUE(OIDCProviderName_, OIDCProviderName) };


  protected:
    // The ID of the client, which is provided by the external IdP. If you want to specify multiple client IDs, separate the client IDs with commas (,).
    // 
    // The client ID can contain letters, digits, and special characters and cannot start with the special characters. The special characters are `periods (.), hyphens (-), underscores (_), colons (:), and forward slashes (/)`.``
    // 
    // The client ID can be up to 128 characters in length.
    shared_ptr<string> clientIds_ {};
    // The description of the OIDC IdP.
    // 
    // The description can be up to 256 characters in length.
    shared_ptr<string> description_ {};
    // The fingerprint of the HTTPS CA certificate, which is provided by the external IdP. If you want to specify multiple fingerprints, separate the fingerprints with commas (,).
    // 
    // The fingerprint can contain letters and digits.
    // 
    // The fingerprint can be up to 128 characters in length.
    shared_ptr<string> fingerprints_ {};
    // The earliest time when an external IdP can issue an ID token. If the value of the iat field in the ID token is later than the current time, the request is rejected. Unit: hours. Valid values: 1 to 168.
    shared_ptr<int64_t> issuanceLimitTime_ {};
    // The URL of the issuer, which is provided by the external IdP. The URL of the issuer must be unique within an Alibaba Cloud account.
    // 
    // The URL of the issuer must start with `https` and be in the valid URL format. The URL cannot contain query parameters that follow a question mark (`?`) or logon information that is identified by at signs (`@`). The URL cannot be a fragment URL that contains number signs (`#`).
    // 
    // The URL can be up to 255 characters in length.
    shared_ptr<string> issuerUrl_ {};
    // The name of the OIDC IdP.
    // 
    // The name can contain letters, digits, and special characters and cannot start or end with the special characters. The special characters are `periods, (.), hyphens (-), and underscores (_)`.``
    // 
    // The name can be up to 128 characters in length.
    shared_ptr<string> OIDCProviderName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
