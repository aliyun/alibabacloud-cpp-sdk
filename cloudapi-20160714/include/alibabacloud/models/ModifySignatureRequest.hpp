// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSIGNATUREREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSIGNATUREREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifySignatureRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySignatureRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_TO_JSON(SignatureKey, signatureKey_);
      DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
      DARABONBA_PTR_TO_JSON(SignatureSecret, signatureSecret_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySignatureRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SignatureId, signatureId_);
      DARABONBA_PTR_FROM_JSON(SignatureKey, signatureKey_);
      DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
      DARABONBA_PTR_FROM_JSON(SignatureSecret, signatureSecret_);
    };
    ModifySignatureRequest() = default ;
    ModifySignatureRequest(const ModifySignatureRequest &) = default ;
    ModifySignatureRequest(ModifySignatureRequest &&) = default ;
    ModifySignatureRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySignatureRequest() = default ;
    ModifySignatureRequest& operator=(const ModifySignatureRequest &) = default ;
    ModifySignatureRequest& operator=(ModifySignatureRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityToken_ == nullptr
        && this->signatureId_ == nullptr && this->signatureKey_ == nullptr && this->signatureName_ == nullptr && this->signatureSecret_ == nullptr; };
    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifySignatureRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // signatureId Field Functions 
    bool hasSignatureId() const { return this->signatureId_ != nullptr;};
    void deleteSignatureId() { this->signatureId_ = nullptr;};
    inline string getSignatureId() const { DARABONBA_PTR_GET_DEFAULT(signatureId_, "") };
    inline ModifySignatureRequest& setSignatureId(string signatureId) { DARABONBA_PTR_SET_VALUE(signatureId_, signatureId) };


    // signatureKey Field Functions 
    bool hasSignatureKey() const { return this->signatureKey_ != nullptr;};
    void deleteSignatureKey() { this->signatureKey_ = nullptr;};
    inline string getSignatureKey() const { DARABONBA_PTR_GET_DEFAULT(signatureKey_, "") };
    inline ModifySignatureRequest& setSignatureKey(string signatureKey) { DARABONBA_PTR_SET_VALUE(signatureKey_, signatureKey) };


    // signatureName Field Functions 
    bool hasSignatureName() const { return this->signatureName_ != nullptr;};
    void deleteSignatureName() { this->signatureName_ = nullptr;};
    inline string getSignatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
    inline ModifySignatureRequest& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


    // signatureSecret Field Functions 
    bool hasSignatureSecret() const { return this->signatureSecret_ != nullptr;};
    void deleteSignatureSecret() { this->signatureSecret_ = nullptr;};
    inline string getSignatureSecret() const { DARABONBA_PTR_GET_DEFAULT(signatureSecret_, "") };
    inline ModifySignatureRequest& setSignatureSecret(string signatureSecret) { DARABONBA_PTR_SET_VALUE(signatureSecret_, signatureSecret) };


  protected:
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    shared_ptr<string> securityToken_ {};
    // The ID of the signature key that you want to manage.
    // 
    // This parameter is required.
    shared_ptr<string> signatureId_ {};
    // The new Key value of the key. The value must be 6 to 20 characters in length and can contain letters, digits, and underscores (_). It must start with a letter.
    shared_ptr<string> signatureKey_ {};
    // The new name of the key. The name must be 4 to 50 characters in length and can contain letters, digits, and underscores (_). It must start with a letter.
    shared_ptr<string> signatureName_ {};
    // The new Secret value of the key. The value must be 6 to 30 characters in length and can contain letters, digits, and special characters. Special characters include underscores (_), at signs (@), number signs (#), exclamation points (!), and asterisks (\\*). The value must start with a letter.
    shared_ptr<string> signatureSecret_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
