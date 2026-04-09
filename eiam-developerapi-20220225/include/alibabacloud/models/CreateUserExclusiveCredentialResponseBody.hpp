// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSEREXCLUSIVECREDENTIALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSEREXCLUSIVECREDENTIALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class CreateUserExclusiveCredentialResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserExclusiveCredentialResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(credentialIdentifier, credentialIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserExclusiveCredentialResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(credentialIdentifier, credentialIdentifier_);
    };
    CreateUserExclusiveCredentialResponseBody() = default ;
    CreateUserExclusiveCredentialResponseBody(const CreateUserExclusiveCredentialResponseBody &) = default ;
    CreateUserExclusiveCredentialResponseBody(CreateUserExclusiveCredentialResponseBody &&) = default ;
    CreateUserExclusiveCredentialResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserExclusiveCredentialResponseBody() = default ;
    CreateUserExclusiveCredentialResponseBody& operator=(const CreateUserExclusiveCredentialResponseBody &) = default ;
    CreateUserExclusiveCredentialResponseBody& operator=(CreateUserExclusiveCredentialResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialId_ == nullptr
        && this->credentialIdentifier_ == nullptr; };
    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline CreateUserExclusiveCredentialResponseBody& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // credentialIdentifier Field Functions 
    bool hasCredentialIdentifier() const { return this->credentialIdentifier_ != nullptr;};
    void deleteCredentialIdentifier() { this->credentialIdentifier_ = nullptr;};
    inline string getCredentialIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialIdentifier_, "") };
    inline CreateUserExclusiveCredentialResponseBody& setCredentialIdentifier(string credentialIdentifier) { DARABONBA_PTR_SET_VALUE(credentialIdentifier_, credentialIdentifier) };


  protected:
    shared_ptr<string> credentialId_ {};
    // 凭据标识。
    shared_ptr<string> credentialIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
