// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEDERATEDCREDENTIALPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEDERATEDCREDENTIALPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateFederatedCredentialProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFederatedCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFederatedCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFederatedCredentialProviderResponseBody() = default ;
    CreateFederatedCredentialProviderResponseBody(const CreateFederatedCredentialProviderResponseBody &) = default ;
    CreateFederatedCredentialProviderResponseBody(CreateFederatedCredentialProviderResponseBody &&) = default ;
    CreateFederatedCredentialProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFederatedCredentialProviderResponseBody() = default ;
    CreateFederatedCredentialProviderResponseBody& operator=(const CreateFederatedCredentialProviderResponseBody &) = default ;
    CreateFederatedCredentialProviderResponseBody& operator=(CreateFederatedCredentialProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->federatedCredentialProviderId_ == nullptr
        && return this->requestId_ == nullptr; };
    // federatedCredentialProviderId Field Functions 
    bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
    void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
    inline string federatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
    inline CreateFederatedCredentialProviderResponseBody& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFederatedCredentialProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> federatedCredentialProviderId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
