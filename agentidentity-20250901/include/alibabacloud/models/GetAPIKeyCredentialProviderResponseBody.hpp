// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIKEYCREDENTIALPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPIKEYCREDENTIALPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetAPIKeyCredentialProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAPIKeyCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(APIKeyCredentialProvider, APIKeyCredentialProvider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAPIKeyCredentialProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(APIKeyCredentialProvider, APIKeyCredentialProvider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAPIKeyCredentialProviderResponseBody() = default ;
    GetAPIKeyCredentialProviderResponseBody(const GetAPIKeyCredentialProviderResponseBody &) = default ;
    GetAPIKeyCredentialProviderResponseBody(GetAPIKeyCredentialProviderResponseBody &&) = default ;
    GetAPIKeyCredentialProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAPIKeyCredentialProviderResponseBody() = default ;
    GetAPIKeyCredentialProviderResponseBody& operator=(const GetAPIKeyCredentialProviderResponseBody &) = default ;
    GetAPIKeyCredentialProviderResponseBody& operator=(GetAPIKeyCredentialProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class APIKeyCredentialProvider : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const APIKeyCredentialProvider& obj) { 
        DARABONBA_PTR_TO_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CredentialProviderArn, credentialProviderArn_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(TokenVaultName, tokenVaultName_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, APIKeyCredentialProvider& obj) { 
        DARABONBA_PTR_FROM_JSON(APIKeyCredentialProviderName, APIKeyCredentialProviderName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CredentialProviderArn, credentialProviderArn_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(TokenVaultName, tokenVaultName_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      APIKeyCredentialProvider() = default ;
      APIKeyCredentialProvider(const APIKeyCredentialProvider &) = default ;
      APIKeyCredentialProvider(APIKeyCredentialProvider &&) = default ;
      APIKeyCredentialProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~APIKeyCredentialProvider() = default ;
      APIKeyCredentialProvider& operator=(const APIKeyCredentialProvider &) = default ;
      APIKeyCredentialProvider& operator=(APIKeyCredentialProvider &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->APIKeyCredentialProviderName_ == nullptr
        && this->createTime_ == nullptr && this->credentialProviderArn_ == nullptr && this->description_ == nullptr && this->tokenVaultName_ == nullptr && this->updateTime_ == nullptr; };
      // APIKeyCredentialProviderName Field Functions 
      bool hasAPIKeyCredentialProviderName() const { return this->APIKeyCredentialProviderName_ != nullptr;};
      void deleteAPIKeyCredentialProviderName() { this->APIKeyCredentialProviderName_ = nullptr;};
      inline string getAPIKeyCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(APIKeyCredentialProviderName_, "") };
      inline APIKeyCredentialProvider& setAPIKeyCredentialProviderName(string APIKeyCredentialProviderName) { DARABONBA_PTR_SET_VALUE(APIKeyCredentialProviderName_, APIKeyCredentialProviderName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline APIKeyCredentialProvider& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // credentialProviderArn Field Functions 
      bool hasCredentialProviderArn() const { return this->credentialProviderArn_ != nullptr;};
      void deleteCredentialProviderArn() { this->credentialProviderArn_ = nullptr;};
      inline string getCredentialProviderArn() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderArn_, "") };
      inline APIKeyCredentialProvider& setCredentialProviderArn(string credentialProviderArn) { DARABONBA_PTR_SET_VALUE(credentialProviderArn_, credentialProviderArn) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline APIKeyCredentialProvider& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // tokenVaultName Field Functions 
      bool hasTokenVaultName() const { return this->tokenVaultName_ != nullptr;};
      void deleteTokenVaultName() { this->tokenVaultName_ = nullptr;};
      inline string getTokenVaultName() const { DARABONBA_PTR_GET_DEFAULT(tokenVaultName_, "") };
      inline APIKeyCredentialProvider& setTokenVaultName(string tokenVaultName) { DARABONBA_PTR_SET_VALUE(tokenVaultName_, tokenVaultName) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline APIKeyCredentialProvider& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<string> APIKeyCredentialProviderName_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> credentialProviderArn_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> tokenVaultName_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->APIKeyCredentialProvider_ == nullptr
        && this->requestId_ == nullptr; };
    // APIKeyCredentialProvider Field Functions 
    bool hasAPIKeyCredentialProvider() const { return this->APIKeyCredentialProvider_ != nullptr;};
    void deleteAPIKeyCredentialProvider() { this->APIKeyCredentialProvider_ = nullptr;};
    inline const GetAPIKeyCredentialProviderResponseBody::APIKeyCredentialProvider & getAPIKeyCredentialProvider() const { DARABONBA_PTR_GET_CONST(APIKeyCredentialProvider_, GetAPIKeyCredentialProviderResponseBody::APIKeyCredentialProvider) };
    inline GetAPIKeyCredentialProviderResponseBody::APIKeyCredentialProvider getAPIKeyCredentialProvider() { DARABONBA_PTR_GET(APIKeyCredentialProvider_, GetAPIKeyCredentialProviderResponseBody::APIKeyCredentialProvider) };
    inline GetAPIKeyCredentialProviderResponseBody& setAPIKeyCredentialProvider(const GetAPIKeyCredentialProviderResponseBody::APIKeyCredentialProvider & aPIKeyCredentialProvider) { DARABONBA_PTR_SET_VALUE(APIKeyCredentialProvider_, aPIKeyCredentialProvider) };
    inline GetAPIKeyCredentialProviderResponseBody& setAPIKeyCredentialProvider(GetAPIKeyCredentialProviderResponseBody::APIKeyCredentialProvider && aPIKeyCredentialProvider) { DARABONBA_PTR_SET_RVALUE(APIKeyCredentialProvider_, aPIKeyCredentialProvider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAPIKeyCredentialProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAPIKeyCredentialProviderResponseBody::APIKeyCredentialProvider> APIKeyCredentialProvider_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
