// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OBTAINCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ObtainCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(credentialIdentifier, credentialIdentifier_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialIdentifier, credentialIdentifier_);
    };
    ObtainCredentialRequest() = default ;
    ObtainCredentialRequest(const ObtainCredentialRequest &) = default ;
    ObtainCredentialRequest(ObtainCredentialRequest &&) = default ;
    ObtainCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainCredentialRequest() = default ;
    ObtainCredentialRequest& operator=(const ObtainCredentialRequest &) = default ;
    ObtainCredentialRequest& operator=(ObtainCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialIdentifier_ == nullptr; };
    // credentialIdentifier Field Functions 
    bool hasCredentialIdentifier() const { return this->credentialIdentifier_ != nullptr;};
    void deleteCredentialIdentifier() { this->credentialIdentifier_ = nullptr;};
    inline string getCredentialIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialIdentifier_, "") };
    inline ObtainCredentialRequest& setCredentialIdentifier(string credentialIdentifier) { DARABONBA_PTR_SET_VALUE(credentialIdentifier_, credentialIdentifier) };


  protected:
    // This parameter is required.
    shared_ptr<string> credentialIdentifier_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
