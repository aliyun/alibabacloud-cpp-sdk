// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENVAULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENVAULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class CreateTokenVaultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenVaultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TokenVault, tokenVault_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenVaultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TokenVault, tokenVault_);
    };
    CreateTokenVaultResponseBody() = default ;
    CreateTokenVaultResponseBody(const CreateTokenVaultResponseBody &) = default ;
    CreateTokenVaultResponseBody(CreateTokenVaultResponseBody &&) = default ;
    CreateTokenVaultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenVaultResponseBody() = default ;
    CreateTokenVaultResponseBody& operator=(const CreateTokenVaultResponseBody &) = default ;
    CreateTokenVaultResponseBody& operator=(CreateTokenVaultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TokenVault : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TokenVault& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EncryptionConfig, encryptionConfig_);
        DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(TokenVaultArn, tokenVaultArn_);
        DARABONBA_PTR_TO_JSON(TokenVaultName, tokenVaultName_);
      };
      friend void from_json(const Darabonba::Json& j, TokenVault& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EncryptionConfig, encryptionConfig_);
        DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(TokenVaultArn, tokenVaultArn_);
        DARABONBA_PTR_FROM_JSON(TokenVaultName, tokenVaultName_);
      };
      TokenVault() = default ;
      TokenVault(const TokenVault &) = default ;
      TokenVault(TokenVault &&) = default ;
      TokenVault(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TokenVault() = default ;
      TokenVault& operator=(const TokenVault &) = default ;
      TokenVault& operator=(TokenVault &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EncryptionConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EncryptionConfig& obj) { 
          DARABONBA_PTR_TO_JSON(KeyType, keyType_);
          DARABONBA_PTR_TO_JSON(KmsKeyArn, kmsKeyArn_);
        };
        friend void from_json(const Darabonba::Json& j, EncryptionConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
          DARABONBA_PTR_FROM_JSON(KmsKeyArn, kmsKeyArn_);
        };
        EncryptionConfig() = default ;
        EncryptionConfig(const EncryptionConfig &) = default ;
        EncryptionConfig(EncryptionConfig &&) = default ;
        EncryptionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EncryptionConfig() = default ;
        EncryptionConfig& operator=(const EncryptionConfig &) = default ;
        EncryptionConfig& operator=(EncryptionConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->keyType_ == nullptr
        && this->kmsKeyArn_ == nullptr; };
        // keyType Field Functions 
        bool hasKeyType() const { return this->keyType_ != nullptr;};
        void deleteKeyType() { this->keyType_ = nullptr;};
        inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
        inline EncryptionConfig& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


        // kmsKeyArn Field Functions 
        bool hasKmsKeyArn() const { return this->kmsKeyArn_ != nullptr;};
        void deleteKmsKeyArn() { this->kmsKeyArn_ = nullptr;};
        inline string getKmsKeyArn() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyArn_, "") };
        inline EncryptionConfig& setKmsKeyArn(string kmsKeyArn) { DARABONBA_PTR_SET_VALUE(kmsKeyArn_, kmsKeyArn) };


      protected:
        shared_ptr<string> keyType_ {};
        shared_ptr<string> kmsKeyArn_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->encryptionConfig_ == nullptr && this->roleArn_ == nullptr && this->tokenVaultArn_ == nullptr && this->tokenVaultName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TokenVault& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TokenVault& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // encryptionConfig Field Functions 
      bool hasEncryptionConfig() const { return this->encryptionConfig_ != nullptr;};
      void deleteEncryptionConfig() { this->encryptionConfig_ = nullptr;};
      inline const TokenVault::EncryptionConfig & getEncryptionConfig() const { DARABONBA_PTR_GET_CONST(encryptionConfig_, TokenVault::EncryptionConfig) };
      inline TokenVault::EncryptionConfig getEncryptionConfig() { DARABONBA_PTR_GET(encryptionConfig_, TokenVault::EncryptionConfig) };
      inline TokenVault& setEncryptionConfig(const TokenVault::EncryptionConfig & encryptionConfig) { DARABONBA_PTR_SET_VALUE(encryptionConfig_, encryptionConfig) };
      inline TokenVault& setEncryptionConfig(TokenVault::EncryptionConfig && encryptionConfig) { DARABONBA_PTR_SET_RVALUE(encryptionConfig_, encryptionConfig) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline TokenVault& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // tokenVaultArn Field Functions 
      bool hasTokenVaultArn() const { return this->tokenVaultArn_ != nullptr;};
      void deleteTokenVaultArn() { this->tokenVaultArn_ = nullptr;};
      inline string getTokenVaultArn() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultArn_, "") };
      inline TokenVault& setTokenVaultArn(string tokenVaultArn) { DARABONBA_PTR_SET_VALUE(tokenVaultArn_, tokenVaultArn) };


      // tokenVaultName Field Functions 
      bool hasTokenVaultName() const { return this->tokenVaultName_ != nullptr;};
      void deleteTokenVaultName() { this->tokenVaultName_ = nullptr;};
      inline string getTokenVaultName() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultName_, "") };
      inline TokenVault& setTokenVaultName(string tokenVaultName) { DARABONBA_PTR_SET_VALUE(tokenVaultName_, tokenVaultName) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<TokenVault::EncryptionConfig> encryptionConfig_ {};
      shared_ptr<string> roleArn_ {};
      shared_ptr<string> tokenVaultArn_ {};
      shared_ptr<string> tokenVaultName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tokenVault_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTokenVaultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tokenVault Field Functions 
    bool hasTokenVault() const { return this->tokenVault_ != nullptr;};
    void deleteTokenVault() { this->tokenVault_ = nullptr;};
    inline const CreateTokenVaultResponseBody::TokenVault & getTokenVault() const { DARABONBA_PTR_GET_CONST(tokenVault_, CreateTokenVaultResponseBody::TokenVault) };
    inline CreateTokenVaultResponseBody::TokenVault getTokenVault() { DARABONBA_PTR_GET(tokenVault_, CreateTokenVaultResponseBody::TokenVault) };
    inline CreateTokenVaultResponseBody& setTokenVault(const CreateTokenVaultResponseBody::TokenVault & tokenVault) { DARABONBA_PTR_SET_VALUE(tokenVault_, tokenVault) };
    inline CreateTokenVaultResponseBody& setTokenVault(CreateTokenVaultResponseBody::TokenVault && tokenVault) { DARABONBA_PTR_SET_RVALUE(tokenVault_, tokenVault) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<CreateTokenVaultResponseBody::TokenVault> tokenVault_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
