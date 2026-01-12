// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateKnowledgeBaseInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseInput& obj) { 
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(knowledgeBaseName, knowledgeBaseName_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_ANY_TO_JSON(providerSettings, providerSettings_);
      DARABONBA_ANY_TO_JSON(retrieveSettings, retrieveSettings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseInput& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(knowledgeBaseName, knowledgeBaseName_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_ANY_FROM_JSON(providerSettings, providerSettings_);
      DARABONBA_ANY_FROM_JSON(retrieveSettings, retrieveSettings_);
    };
    CreateKnowledgeBaseInput() = default ;
    CreateKnowledgeBaseInput(const CreateKnowledgeBaseInput &) = default ;
    CreateKnowledgeBaseInput(CreateKnowledgeBaseInput &&) = default ;
    CreateKnowledgeBaseInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseInput() = default ;
    CreateKnowledgeBaseInput& operator=(const CreateKnowledgeBaseInput &) = default ;
    CreateKnowledgeBaseInput& operator=(CreateKnowledgeBaseInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialName_ == nullptr
        && this->description_ == nullptr && this->knowledgeBaseName_ == nullptr && this->provider_ == nullptr && this->providerSettings_ == nullptr && this->retrieveSettings_ == nullptr; };
    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline CreateKnowledgeBaseInput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeBaseInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // knowledgeBaseName Field Functions 
    bool hasKnowledgeBaseName() const { return this->knowledgeBaseName_ != nullptr;};
    void deleteKnowledgeBaseName() { this->knowledgeBaseName_ = nullptr;};
    inline string getKnowledgeBaseName() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseName_, "") };
    inline CreateKnowledgeBaseInput& setKnowledgeBaseName(string knowledgeBaseName) { DARABONBA_PTR_SET_VALUE(knowledgeBaseName_, knowledgeBaseName) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline CreateKnowledgeBaseInput& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerSettings Field Functions 
    bool hasProviderSettings() const { return this->providerSettings_ != nullptr;};
    void deleteProviderSettings() { this->providerSettings_ = nullptr;};
    inline     const Darabonba::Json & getProviderSettings() const { DARABONBA_GET(providerSettings_) };
    Darabonba::Json & getProviderSettings() { DARABONBA_GET(providerSettings_) };
    inline CreateKnowledgeBaseInput& setProviderSettings(const Darabonba::Json & providerSettings) { DARABONBA_SET_VALUE(providerSettings_, providerSettings) };
    inline CreateKnowledgeBaseInput& setProviderSettings(Darabonba::Json && providerSettings) { DARABONBA_SET_RVALUE(providerSettings_, providerSettings) };


    // retrieveSettings Field Functions 
    bool hasRetrieveSettings() const { return this->retrieveSettings_ != nullptr;};
    void deleteRetrieveSettings() { this->retrieveSettings_ = nullptr;};
    inline     const Darabonba::Json & getRetrieveSettings() const { DARABONBA_GET(retrieveSettings_) };
    Darabonba::Json & getRetrieveSettings() { DARABONBA_GET(retrieveSettings_) };
    inline CreateKnowledgeBaseInput& setRetrieveSettings(const Darabonba::Json & retrieveSettings) { DARABONBA_SET_VALUE(retrieveSettings_, retrieveSettings) };
    inline CreateKnowledgeBaseInput& setRetrieveSettings(Darabonba::Json && retrieveSettings) { DARABONBA_SET_RVALUE(retrieveSettings_, retrieveSettings) };


  protected:
    shared_ptr<string> credentialName_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> knowledgeBaseName_ {};
    // This parameter is required.
    shared_ptr<string> provider_ {};
    // This parameter is required.
    Darabonba::Json providerSettings_ {};
    Darabonba::Json retrieveSettings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
