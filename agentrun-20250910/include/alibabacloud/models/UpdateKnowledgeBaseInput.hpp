// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKNOWLEDGEBASEINPUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateKnowledgeBaseInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKnowledgeBaseInput& obj) { 
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_ANY_TO_JSON(providerSettings, providerSettings_);
      DARABONBA_ANY_TO_JSON(retrieveSettings, retrieveSettings_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKnowledgeBaseInput& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_ANY_FROM_JSON(providerSettings, providerSettings_);
      DARABONBA_ANY_FROM_JSON(retrieveSettings, retrieveSettings_);
    };
    UpdateKnowledgeBaseInput() = default ;
    UpdateKnowledgeBaseInput(const UpdateKnowledgeBaseInput &) = default ;
    UpdateKnowledgeBaseInput(UpdateKnowledgeBaseInput &&) = default ;
    UpdateKnowledgeBaseInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKnowledgeBaseInput() = default ;
    UpdateKnowledgeBaseInput& operator=(const UpdateKnowledgeBaseInput &) = default ;
    UpdateKnowledgeBaseInput& operator=(UpdateKnowledgeBaseInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialName_ == nullptr
        && this->description_ == nullptr && this->providerSettings_ == nullptr && this->retrieveSettings_ == nullptr; };
    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string getCredentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline UpdateKnowledgeBaseInput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateKnowledgeBaseInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // providerSettings Field Functions 
    bool hasProviderSettings() const { return this->providerSettings_ != nullptr;};
    void deleteProviderSettings() { this->providerSettings_ = nullptr;};
    inline     const Darabonba::Json & getProviderSettings() const { DARABONBA_GET(providerSettings_) };
    Darabonba::Json & getProviderSettings() { DARABONBA_GET(providerSettings_) };
    inline UpdateKnowledgeBaseInput& setProviderSettings(const Darabonba::Json & providerSettings) { DARABONBA_SET_VALUE(providerSettings_, providerSettings) };
    inline UpdateKnowledgeBaseInput& setProviderSettings(Darabonba::Json && providerSettings) { DARABONBA_SET_RVALUE(providerSettings_, providerSettings) };


    // retrieveSettings Field Functions 
    bool hasRetrieveSettings() const { return this->retrieveSettings_ != nullptr;};
    void deleteRetrieveSettings() { this->retrieveSettings_ = nullptr;};
    inline     const Darabonba::Json & getRetrieveSettings() const { DARABONBA_GET(retrieveSettings_) };
    Darabonba::Json & getRetrieveSettings() { DARABONBA_GET(retrieveSettings_) };
    inline UpdateKnowledgeBaseInput& setRetrieveSettings(const Darabonba::Json & retrieveSettings) { DARABONBA_SET_VALUE(retrieveSettings_, retrieveSettings) };
    inline UpdateKnowledgeBaseInput& setRetrieveSettings(Darabonba::Json && retrieveSettings) { DARABONBA_SET_RVALUE(retrieveSettings_, retrieveSettings) };


  protected:
    shared_ptr<string> credentialName_ {};
    shared_ptr<string> description_ {};
    Darabonba::Json providerSettings_ {};
    Darabonba::Json retrieveSettings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
