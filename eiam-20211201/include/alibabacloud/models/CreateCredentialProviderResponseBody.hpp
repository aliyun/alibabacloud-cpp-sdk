// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDENTIALPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDENTIALPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCredentialProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialProviderId, credentialProviderId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialProviderId, credentialProviderId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCredentialProviderResponseBody() = default ;
    CreateCredentialProviderResponseBody(const CreateCredentialProviderResponseBody &) = default ;
    CreateCredentialProviderResponseBody(CreateCredentialProviderResponseBody &&) = default ;
    CreateCredentialProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCredentialProviderResponseBody() = default ;
    CreateCredentialProviderResponseBody& operator=(const CreateCredentialProviderResponseBody &) = default ;
    CreateCredentialProviderResponseBody& operator=(CreateCredentialProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialProviderId_ == nullptr
        && this->requestId_ == nullptr; };
    // credentialProviderId Field Functions 
    bool hasCredentialProviderId() const { return this->credentialProviderId_ != nullptr;};
    void deleteCredentialProviderId() { this->credentialProviderId_ = nullptr;};
    inline string getCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderId_, "") };
    inline CreateCredentialProviderResponseBody& setCredentialProviderId(string credentialProviderId) { DARABONBA_PTR_SET_VALUE(credentialProviderId_, credentialProviderId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCredentialProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> credentialProviderId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
