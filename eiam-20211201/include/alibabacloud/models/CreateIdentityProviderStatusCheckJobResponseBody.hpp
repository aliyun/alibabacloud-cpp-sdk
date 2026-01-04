// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSTATUSCHECKJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSTATUSCHECKJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderStatusCheckJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderStatusCheckJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderStatusCheckJobId, identityProviderStatusCheckJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderStatusCheckJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderStatusCheckJobId, identityProviderStatusCheckJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIdentityProviderStatusCheckJobResponseBody() = default ;
    CreateIdentityProviderStatusCheckJobResponseBody(const CreateIdentityProviderStatusCheckJobResponseBody &) = default ;
    CreateIdentityProviderStatusCheckJobResponseBody(CreateIdentityProviderStatusCheckJobResponseBody &&) = default ;
    CreateIdentityProviderStatusCheckJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderStatusCheckJobResponseBody() = default ;
    CreateIdentityProviderStatusCheckJobResponseBody& operator=(const CreateIdentityProviderStatusCheckJobResponseBody &) = default ;
    CreateIdentityProviderStatusCheckJobResponseBody& operator=(CreateIdentityProviderStatusCheckJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderStatusCheckJobId_ == nullptr
        && this->requestId_ == nullptr; };
    // identityProviderStatusCheckJobId Field Functions 
    bool hasIdentityProviderStatusCheckJobId() const { return this->identityProviderStatusCheckJobId_ != nullptr;};
    void deleteIdentityProviderStatusCheckJobId() { this->identityProviderStatusCheckJobId_ = nullptr;};
    inline string getIdentityProviderStatusCheckJobId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderStatusCheckJobId_, "") };
    inline CreateIdentityProviderStatusCheckJobResponseBody& setIdentityProviderStatusCheckJobId(string identityProviderStatusCheckJobId) { DARABONBA_PTR_SET_VALUE(identityProviderStatusCheckJobId_, identityProviderStatusCheckJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIdentityProviderStatusCheckJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> identityProviderStatusCheckJobId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
