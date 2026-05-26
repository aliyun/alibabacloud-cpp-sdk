// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENVAULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENVAULTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EncryptionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateTokenVaultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenVaultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptionConfig, encryptionConfig_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(TokenVaultName, tokenVaultName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenVaultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptionConfig, encryptionConfig_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(TokenVaultName, tokenVaultName_);
    };
    CreateTokenVaultRequest() = default ;
    CreateTokenVaultRequest(const CreateTokenVaultRequest &) = default ;
    CreateTokenVaultRequest(CreateTokenVaultRequest &&) = default ;
    CreateTokenVaultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenVaultRequest() = default ;
    CreateTokenVaultRequest& operator=(const CreateTokenVaultRequest &) = default ;
    CreateTokenVaultRequest& operator=(CreateTokenVaultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->encryptionConfig_ == nullptr && this->roleArn_ == nullptr && this->tokenVaultName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTokenVaultRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptionConfig Field Functions 
    bool hasEncryptionConfig() const { return this->encryptionConfig_ != nullptr;};
    void deleteEncryptionConfig() { this->encryptionConfig_ = nullptr;};
    inline const EncryptionConfig & getEncryptionConfig() const { DARABONBA_PTR_GET_CONST(encryptionConfig_, EncryptionConfig) };
    inline EncryptionConfig getEncryptionConfig() { DARABONBA_PTR_GET(encryptionConfig_, EncryptionConfig) };
    inline CreateTokenVaultRequest& setEncryptionConfig(const EncryptionConfig & encryptionConfig) { DARABONBA_PTR_SET_VALUE(encryptionConfig_, encryptionConfig) };
    inline CreateTokenVaultRequest& setEncryptionConfig(EncryptionConfig && encryptionConfig) { DARABONBA_PTR_SET_RVALUE(encryptionConfig_, encryptionConfig) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline CreateTokenVaultRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // tokenVaultName Field Functions 
    bool hasTokenVaultName() const { return this->tokenVaultName_ != nullptr;};
    void deleteTokenVaultName() { this->tokenVaultName_ = nullptr;};
    inline string getTokenVaultName() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultName_, "") };
    inline CreateTokenVaultRequest& setTokenVaultName(string tokenVaultName) { DARABONBA_PTR_SET_VALUE(tokenVaultName_, tokenVaultName) };


  protected:
    shared_ptr<string> description_ {};
    shared_ptr<EncryptionConfig> encryptionConfig_ {};
    shared_ptr<string> roleArn_ {};
    shared_ptr<string> tokenVaultName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
