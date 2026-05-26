// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENVAULTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENVAULTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateTokenVaultShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenVaultShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptionConfig, encryptionConfigShrink_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(TokenVaultName, tokenVaultName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenVaultShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptionConfig, encryptionConfigShrink_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(TokenVaultName, tokenVaultName_);
    };
    CreateTokenVaultShrinkRequest() = default ;
    CreateTokenVaultShrinkRequest(const CreateTokenVaultShrinkRequest &) = default ;
    CreateTokenVaultShrinkRequest(CreateTokenVaultShrinkRequest &&) = default ;
    CreateTokenVaultShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenVaultShrinkRequest() = default ;
    CreateTokenVaultShrinkRequest& operator=(const CreateTokenVaultShrinkRequest &) = default ;
    CreateTokenVaultShrinkRequest& operator=(CreateTokenVaultShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->encryptionConfigShrink_ == nullptr && this->roleArn_ == nullptr && this->tokenVaultName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTokenVaultShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptionConfigShrink Field Functions 
    bool hasEncryptionConfigShrink() const { return this->encryptionConfigShrink_ != nullptr;};
    void deleteEncryptionConfigShrink() { this->encryptionConfigShrink_ = nullptr;};
    inline string getEncryptionConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(encryptionConfigShrink_, "") };
    inline CreateTokenVaultShrinkRequest& setEncryptionConfigShrink(string encryptionConfigShrink) { DARABONBA_PTR_SET_VALUE(encryptionConfigShrink_, encryptionConfigShrink) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CreateTokenVaultShrinkRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // tokenVaultName Field Functions 
    bool hasTokenVaultName() const { return this->tokenVaultName_ != nullptr;};
    void deleteTokenVaultName() { this->tokenVaultName_ = nullptr;};
    inline string getTokenVaultName() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultName_, "") };
    inline CreateTokenVaultShrinkRequest& setTokenVaultName(string tokenVaultName) { DARABONBA_PTR_SET_VALUE(tokenVaultName_, tokenVaultName) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<string> encryptionConfigShrink_ {};
    shared_ptr<string> roleArn_ {};
    shared_ptr<string> tokenVaultName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
