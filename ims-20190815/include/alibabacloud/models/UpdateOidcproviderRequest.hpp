// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOIDCPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOIDCPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class UpdateOIDCProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOIDCProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientIds, clientIds_);
      DARABONBA_PTR_TO_JSON(IssuanceLimitTime, issuanceLimitTime_);
      DARABONBA_PTR_TO_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_TO_JSON(OIDCProviderName, OIDCProviderName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOIDCProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientIds, clientIds_);
      DARABONBA_PTR_FROM_JSON(IssuanceLimitTime, issuanceLimitTime_);
      DARABONBA_PTR_FROM_JSON(NewDescription, newDescription_);
      DARABONBA_PTR_FROM_JSON(OIDCProviderName, OIDCProviderName_);
    };
    UpdateOIDCProviderRequest() = default ;
    UpdateOIDCProviderRequest(const UpdateOIDCProviderRequest &) = default ;
    UpdateOIDCProviderRequest(UpdateOIDCProviderRequest &&) = default ;
    UpdateOIDCProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOIDCProviderRequest() = default ;
    UpdateOIDCProviderRequest& operator=(const UpdateOIDCProviderRequest &) = default ;
    UpdateOIDCProviderRequest& operator=(UpdateOIDCProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientIds_ != nullptr
        && this->issuanceLimitTime_ != nullptr && this->newDescription_ != nullptr && this->OIDCProviderName_ != nullptr; };
    // clientIds Field Functions 
    bool hasClientIds() const { return this->clientIds_ != nullptr;};
    void deleteClientIds() { this->clientIds_ = nullptr;};
    inline string clientIds() const { DARABONBA_PTR_GET_DEFAULT(clientIds_, "") };
    inline UpdateOIDCProviderRequest& setClientIds(string clientIds) { DARABONBA_PTR_SET_VALUE(clientIds_, clientIds) };


    // issuanceLimitTime Field Functions 
    bool hasIssuanceLimitTime() const { return this->issuanceLimitTime_ != nullptr;};
    void deleteIssuanceLimitTime() { this->issuanceLimitTime_ = nullptr;};
    inline int64_t issuanceLimitTime() const { DARABONBA_PTR_GET_DEFAULT(issuanceLimitTime_, 0L) };
    inline UpdateOIDCProviderRequest& setIssuanceLimitTime(int64_t issuanceLimitTime) { DARABONBA_PTR_SET_VALUE(issuanceLimitTime_, issuanceLimitTime) };


    // newDescription Field Functions 
    bool hasNewDescription() const { return this->newDescription_ != nullptr;};
    void deleteNewDescription() { this->newDescription_ = nullptr;};
    inline string newDescription() const { DARABONBA_PTR_GET_DEFAULT(newDescription_, "") };
    inline UpdateOIDCProviderRequest& setNewDescription(string newDescription) { DARABONBA_PTR_SET_VALUE(newDescription_, newDescription) };


    // OIDCProviderName Field Functions 
    bool hasOIDCProviderName() const { return this->OIDCProviderName_ != nullptr;};
    void deleteOIDCProviderName() { this->OIDCProviderName_ = nullptr;};
    inline string OIDCProviderName() const { DARABONBA_PTR_GET_DEFAULT(OIDCProviderName_, "") };
    inline UpdateOIDCProviderRequest& setOIDCProviderName(string OIDCProviderName) { DARABONBA_PTR_SET_VALUE(OIDCProviderName_, OIDCProviderName) };


  protected:
    // The ID of the client. If you want to specify multiple client IDs, separate the client IDs with commas (,).
    // 
    // A client ID can contain letters, digits, and special characters and cannot start with the special characters. The special characters are `periods (.), hyphens (-), underscores (_), colons (:), and forward slashes (/)`.``
    // 
    // A client ID can be up to 128 characters in length.
    // 
    // >  If you specify this parameter, all the client IDs of the OIDC IdP are replaced. If you need to only add or remove a client ID, call the AddClientIdToOIDCProvider or RemoveClientIdFromOIDCProvider operation. For more information, see [AddClientIdToOIDCProvider](https://help.aliyun.com/document_detail/332057.html) or [RemoveClientIdFromOIDCProvider](https://help.aliyun.com/document_detail/332058.html).
    std::shared_ptr<string> clientIds_ = nullptr;
    // The earliest time when an external IdP can issue an ID token. If the value of the iat field in the ID token is later than the current time, the request is rejected. Unit: hours. Valid values: 1 to 168.
    std::shared_ptr<int64_t> issuanceLimitTime_ = nullptr;
    // The description of the OIDC IdP.
    // 
    // The description can be up to 256 characters in length.
    std::shared_ptr<string> newDescription_ = nullptr;
    // The name of the OIDC IdP.
    std::shared_ptr<string> OIDCProviderName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
