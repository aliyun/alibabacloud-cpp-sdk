// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOKENVAULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTOKENVAULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListTokenVaultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTokenVaultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TokenVaults, tokenVaults_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTokenVaultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TokenVaults, tokenVaults_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTokenVaultsResponseBody() = default ;
    ListTokenVaultsResponseBody(const ListTokenVaultsResponseBody &) = default ;
    ListTokenVaultsResponseBody(ListTokenVaultsResponseBody &&) = default ;
    ListTokenVaultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTokenVaultsResponseBody() = default ;
    ListTokenVaultsResponseBody& operator=(const ListTokenVaultsResponseBody &) = default ;
    ListTokenVaultsResponseBody& operator=(ListTokenVaultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TokenVaults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TokenVaults& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EncryptionConfig, encryptionConfig_);
        DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_TO_JSON(TokenVaultArn, tokenVaultArn_);
        DARABONBA_PTR_TO_JSON(TokenVaultName, tokenVaultName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, TokenVaults& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EncryptionConfig, encryptionConfig_);
        DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        DARABONBA_PTR_FROM_JSON(TokenVaultArn, tokenVaultArn_);
        DARABONBA_PTR_FROM_JSON(TokenVaultName, tokenVaultName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      TokenVaults() = default ;
      TokenVaults(const TokenVaults &) = default ;
      TokenVaults(TokenVaults &&) = default ;
      TokenVaults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TokenVaults() = default ;
      TokenVaults& operator=(const TokenVaults &) = default ;
      TokenVaults& operator=(TokenVaults &&) = default ;
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
        && this->description_ == nullptr && this->encryptionConfig_ == nullptr && this->roleArn_ == nullptr && this->tokenVaultArn_ == nullptr && this->tokenVaultName_ == nullptr
        && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline TokenVaults& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline TokenVaults& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // encryptionConfig Field Functions 
      bool hasEncryptionConfig() const { return this->encryptionConfig_ != nullptr;};
      void deleteEncryptionConfig() { this->encryptionConfig_ = nullptr;};
      inline const TokenVaults::EncryptionConfig & getEncryptionConfig() const { DARABONBA_PTR_GET_CONST(encryptionConfig_, TokenVaults::EncryptionConfig) };
      inline TokenVaults::EncryptionConfig getEncryptionConfig() { DARABONBA_PTR_GET(encryptionConfig_, TokenVaults::EncryptionConfig) };
      inline TokenVaults& setEncryptionConfig(const TokenVaults::EncryptionConfig & encryptionConfig) { DARABONBA_PTR_SET_VALUE(encryptionConfig_, encryptionConfig) };
      inline TokenVaults& setEncryptionConfig(TokenVaults::EncryptionConfig && encryptionConfig) { DARABONBA_PTR_SET_RVALUE(encryptionConfig_, encryptionConfig) };


      // roleArn Field Functions 
      bool hasRoleArn() const { return this->roleArn_ != nullptr;};
      void deleteRoleArn() { this->roleArn_ = nullptr;};
      inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
      inline TokenVaults& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      // tokenVaultArn Field Functions 
      bool hasTokenVaultArn() const { return this->tokenVaultArn_ != nullptr;};
      void deleteTokenVaultArn() { this->tokenVaultArn_ = nullptr;};
      inline string getTokenVaultArn() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultArn_, "") };
      inline TokenVaults& setTokenVaultArn(string tokenVaultArn) { DARABONBA_PTR_SET_VALUE(tokenVaultArn_, tokenVaultArn) };


      // tokenVaultName Field Functions 
      bool hasTokenVaultName() const { return this->tokenVaultName_ != nullptr;};
      void deleteTokenVaultName() { this->tokenVaultName_ = nullptr;};
      inline string getTokenVaultName() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultName_, "") };
      inline TokenVaults& setTokenVaultName(string tokenVaultName) { DARABONBA_PTR_SET_VALUE(tokenVaultName_, tokenVaultName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline TokenVaults& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<TokenVaults::EncryptionConfig> encryptionConfig_ {};
      shared_ptr<string> roleArn_ {};
      shared_ptr<string> tokenVaultArn_ {};
      shared_ptr<string> tokenVaultName_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->tokenVaults_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTokenVaultsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTokenVaultsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTokenVaultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tokenVaults Field Functions 
    bool hasTokenVaults() const { return this->tokenVaults_ != nullptr;};
    void deleteTokenVaults() { this->tokenVaults_ = nullptr;};
    inline const vector<ListTokenVaultsResponseBody::TokenVaults> & getTokenVaults() const { DARABONBA_PTR_GET_CONST(tokenVaults_, vector<ListTokenVaultsResponseBody::TokenVaults>) };
    inline vector<ListTokenVaultsResponseBody::TokenVaults> getTokenVaults() { DARABONBA_PTR_GET(tokenVaults_, vector<ListTokenVaultsResponseBody::TokenVaults>) };
    inline ListTokenVaultsResponseBody& setTokenVaults(const vector<ListTokenVaultsResponseBody::TokenVaults> & tokenVaults) { DARABONBA_PTR_SET_VALUE(tokenVaults_, tokenVaults) };
    inline ListTokenVaultsResponseBody& setTokenVaults(vector<ListTokenVaultsResponseBody::TokenVaults> && tokenVaults) { DARABONBA_PTR_SET_RVALUE(tokenVaults_, tokenVaults) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTokenVaultsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListTokenVaultsResponseBody::TokenVaults>> tokenVaults_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
