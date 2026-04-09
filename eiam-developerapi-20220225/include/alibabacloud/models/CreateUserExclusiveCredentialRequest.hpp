// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSEREXCLUSIVECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSEREXCLUSIVECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class CreateUserExclusiveCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserExclusiveCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(credentialContent, credentialContent_);
      DARABONBA_PTR_TO_JSON(credentialIdentifier, credentialIdentifier_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(credentialScenarioLabel, credentialScenarioLabel_);
      DARABONBA_PTR_TO_JSON(credentialType, credentialType_);
      DARABONBA_PTR_TO_JSON(description, description_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserExclusiveCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialContent, credentialContent_);
      DARABONBA_PTR_FROM_JSON(credentialIdentifier, credentialIdentifier_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(credentialScenarioLabel, credentialScenarioLabel_);
      DARABONBA_PTR_FROM_JSON(credentialType, credentialType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
    };
    CreateUserExclusiveCredentialRequest() = default ;
    CreateUserExclusiveCredentialRequest(const CreateUserExclusiveCredentialRequest &) = default ;
    CreateUserExclusiveCredentialRequest(CreateUserExclusiveCredentialRequest &&) = default ;
    CreateUserExclusiveCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserExclusiveCredentialRequest() = default ;
    CreateUserExclusiveCredentialRequest& operator=(const CreateUserExclusiveCredentialRequest &) = default ;
    CreateUserExclusiveCredentialRequest& operator=(CreateUserExclusiveCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CredentialContent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CredentialContent& obj) { 
        DARABONBA_PTR_TO_JSON(apiKeyContent, apiKeyContent_);
      };
      friend void from_json(const Darabonba::Json& j, CredentialContent& obj) { 
        DARABONBA_PTR_FROM_JSON(apiKeyContent, apiKeyContent_);
      };
      CredentialContent() = default ;
      CredentialContent(const CredentialContent &) = default ;
      CredentialContent(CredentialContent &&) = default ;
      CredentialContent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CredentialContent() = default ;
      CredentialContent& operator=(const CredentialContent &) = default ;
      CredentialContent& operator=(CredentialContent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ApiKeyContent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApiKeyContent& obj) { 
          DARABONBA_PTR_TO_JSON(apiKey, apiKey_);
        };
        friend void from_json(const Darabonba::Json& j, ApiKeyContent& obj) { 
          DARABONBA_PTR_FROM_JSON(apiKey, apiKey_);
        };
        ApiKeyContent() = default ;
        ApiKeyContent(const ApiKeyContent &) = default ;
        ApiKeyContent(ApiKeyContent &&) = default ;
        ApiKeyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApiKeyContent() = default ;
        ApiKeyContent& operator=(const ApiKeyContent &) = default ;
        ApiKeyContent& operator=(ApiKeyContent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiKey_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline ApiKeyContent& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      protected:
        // This parameter is required.
        shared_ptr<string> apiKey_ {};
      };

      virtual bool empty() const override { return this->apiKeyContent_ == nullptr; };
      // apiKeyContent Field Functions 
      bool hasApiKeyContent() const { return this->apiKeyContent_ != nullptr;};
      void deleteApiKeyContent() { this->apiKeyContent_ = nullptr;};
      inline const CredentialContent::ApiKeyContent & getApiKeyContent() const { DARABONBA_PTR_GET_CONST(apiKeyContent_, CredentialContent::ApiKeyContent) };
      inline CredentialContent::ApiKeyContent getApiKeyContent() { DARABONBA_PTR_GET(apiKeyContent_, CredentialContent::ApiKeyContent) };
      inline CredentialContent& setApiKeyContent(const CredentialContent::ApiKeyContent & apiKeyContent) { DARABONBA_PTR_SET_VALUE(apiKeyContent_, apiKeyContent) };
      inline CredentialContent& setApiKeyContent(CredentialContent::ApiKeyContent && apiKeyContent) { DARABONBA_PTR_SET_RVALUE(apiKeyContent_, apiKeyContent) };


    protected:
      shared_ptr<CredentialContent::ApiKeyContent> apiKeyContent_ {};
    };

    virtual bool empty() const override { return this->credentialContent_ == nullptr
        && this->credentialIdentifier_ == nullptr && this->credentialName_ == nullptr && this->credentialScenarioLabel_ == nullptr && this->credentialType_ == nullptr && this->description_ == nullptr; };
    // credentialContent Field Functions 
    bool hasCredentialContent() const { return this->credentialContent_ != nullptr;};
    void deleteCredentialContent() { this->credentialContent_ = nullptr;};
    inline const CreateUserExclusiveCredentialRequest::CredentialContent & getCredentialContent() const { DARABONBA_PTR_GET_CONST(credentialContent_, CreateUserExclusiveCredentialRequest::CredentialContent) };
    inline CreateUserExclusiveCredentialRequest::CredentialContent getCredentialContent() { DARABONBA_PTR_GET(credentialContent_, CreateUserExclusiveCredentialRequest::CredentialContent) };
    inline CreateUserExclusiveCredentialRequest& setCredentialContent(const CreateUserExclusiveCredentialRequest::CredentialContent & credentialContent) { DARABONBA_PTR_SET_VALUE(credentialContent_, credentialContent) };
    inline CreateUserExclusiveCredentialRequest& setCredentialContent(CreateUserExclusiveCredentialRequest::CredentialContent && credentialContent) { DARABONBA_PTR_SET_RVALUE(credentialContent_, credentialContent) };


    // credentialIdentifier Field Functions 
    bool hasCredentialIdentifier() const { return this->credentialIdentifier_ != nullptr;};
    void deleteCredentialIdentifier() { this->credentialIdentifier_ = nullptr;};
    inline string getCredentialIdentifier() const { DARABONBA_PTR_GET_DEFAULT(credentialIdentifier_, "") };
    inline CreateUserExclusiveCredentialRequest& setCredentialIdentifier(string credentialIdentifier) { DARABONBA_PTR_SET_VALUE(credentialIdentifier_, credentialIdentifier) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline CreateUserExclusiveCredentialRequest& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // credentialScenarioLabel Field Functions 
    bool hasCredentialScenarioLabel() const { return this->credentialScenarioLabel_ != nullptr;};
    void deleteCredentialScenarioLabel() { this->credentialScenarioLabel_ = nullptr;};
    inline string getCredentialScenarioLabel() const { DARABONBA_PTR_GET_DEFAULT(credentialScenarioLabel_, "") };
    inline CreateUserExclusiveCredentialRequest& setCredentialScenarioLabel(string credentialScenarioLabel) { DARABONBA_PTR_SET_VALUE(credentialScenarioLabel_, credentialScenarioLabel) };


    // credentialType Field Functions 
    bool hasCredentialType() const { return this->credentialType_ != nullptr;};
    void deleteCredentialType() { this->credentialType_ = nullptr;};
    inline string getCredentialType() const { DARABONBA_PTR_GET_DEFAULT(credentialType_, "") };
    inline CreateUserExclusiveCredentialRequest& setCredentialType(string credentialType) { DARABONBA_PTR_SET_VALUE(credentialType_, credentialType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateUserExclusiveCredentialRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


  protected:
    // This parameter is required.
    shared_ptr<CreateUserExclusiveCredentialRequest::CredentialContent> credentialContent_ {};
    // This parameter is required.
    shared_ptr<string> credentialIdentifier_ {};
    // This parameter is required.
    shared_ptr<string> credentialName_ {};
    shared_ptr<string> credentialScenarioLabel_ {};
    // This parameter is required.
    shared_ptr<string> credentialType_ {};
    shared_ptr<string> description_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
