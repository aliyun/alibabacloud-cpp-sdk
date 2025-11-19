// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDENTIALOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDENTIALOUTPUT_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/RelatedResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateCredentialOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCredentialOutput& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(credentialAuthType, credentialAuthType_);
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(credentialPublicConfig, credentialPublicConfig_);
      DARABONBA_PTR_TO_JSON(credentialSecret, credentialSecret_);
      DARABONBA_PTR_TO_JSON(credentialSourceType, credentialSourceType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(relatedResources, relatedResources_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCredentialOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(credentialAuthType, credentialAuthType_);
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(credentialPublicConfig, credentialPublicConfig_);
      DARABONBA_PTR_FROM_JSON(credentialSecret, credentialSecret_);
      DARABONBA_PTR_FROM_JSON(credentialSourceType, credentialSourceType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(relatedResources, relatedResources_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    CreateCredentialOutput() = default ;
    CreateCredentialOutput(const CreateCredentialOutput &) = default ;
    CreateCredentialOutput(CreateCredentialOutput &&) = default ;
    CreateCredentialOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCredentialOutput() = default ;
    CreateCredentialOutput& operator=(const CreateCredentialOutput &) = default ;
    CreateCredentialOutput& operator=(CreateCredentialOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->credentialAuthType_ == nullptr && return this->credentialId_ == nullptr && return this->credentialName_ == nullptr && return this->credentialPublicConfig_ == nullptr && return this->credentialSecret_ == nullptr
        && return this->credentialSourceType_ == nullptr && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->relatedResources_ == nullptr && return this->updatedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CreateCredentialOutput& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // credentialAuthType Field Functions 
    bool hasCredentialAuthType() const { return this->credentialAuthType_ != nullptr;};
    void deleteCredentialAuthType() { this->credentialAuthType_ = nullptr;};
    inline string credentialAuthType() const { DARABONBA_PTR_GET_DEFAULT(credentialAuthType_, "") };
    inline CreateCredentialOutput& setCredentialAuthType(string credentialAuthType) { DARABONBA_PTR_SET_VALUE(credentialAuthType_, credentialAuthType) };


    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string credentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline CreateCredentialOutput& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string credentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline CreateCredentialOutput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // credentialPublicConfig Field Functions 
    bool hasCredentialPublicConfig() const { return this->credentialPublicConfig_ != nullptr;};
    void deleteCredentialPublicConfig() { this->credentialPublicConfig_ = nullptr;};
    inline const map<string, string> & credentialPublicConfig() const { DARABONBA_PTR_GET_CONST(credentialPublicConfig_, map<string, string>) };
    inline map<string, string> credentialPublicConfig() { DARABONBA_PTR_GET(credentialPublicConfig_, map<string, string>) };
    inline CreateCredentialOutput& setCredentialPublicConfig(const map<string, string> & credentialPublicConfig) { DARABONBA_PTR_SET_VALUE(credentialPublicConfig_, credentialPublicConfig) };
    inline CreateCredentialOutput& setCredentialPublicConfig(map<string, string> && credentialPublicConfig) { DARABONBA_PTR_SET_RVALUE(credentialPublicConfig_, credentialPublicConfig) };


    // credentialSecret Field Functions 
    bool hasCredentialSecret() const { return this->credentialSecret_ != nullptr;};
    void deleteCredentialSecret() { this->credentialSecret_ = nullptr;};
    inline string credentialSecret() const { DARABONBA_PTR_GET_DEFAULT(credentialSecret_, "") };
    inline CreateCredentialOutput& setCredentialSecret(string credentialSecret) { DARABONBA_PTR_SET_VALUE(credentialSecret_, credentialSecret) };


    // credentialSourceType Field Functions 
    bool hasCredentialSourceType() const { return this->credentialSourceType_ != nullptr;};
    void deleteCredentialSourceType() { this->credentialSourceType_ = nullptr;};
    inline string credentialSourceType() const { DARABONBA_PTR_GET_DEFAULT(credentialSourceType_, "") };
    inline CreateCredentialOutput& setCredentialSourceType(string credentialSourceType) { DARABONBA_PTR_SET_VALUE(credentialSourceType_, credentialSourceType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCredentialOutput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateCredentialOutput& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // relatedResources Field Functions 
    bool hasRelatedResources() const { return this->relatedResources_ != nullptr;};
    void deleteRelatedResources() { this->relatedResources_ = nullptr;};
    inline const vector<RelatedResource> & relatedResources() const { DARABONBA_PTR_GET_CONST(relatedResources_, vector<RelatedResource>) };
    inline vector<RelatedResource> relatedResources() { DARABONBA_PTR_GET(relatedResources_, vector<RelatedResource>) };
    inline CreateCredentialOutput& setRelatedResources(const vector<RelatedResource> & relatedResources) { DARABONBA_PTR_SET_VALUE(relatedResources_, relatedResources) };
    inline CreateCredentialOutput& setRelatedResources(vector<RelatedResource> && relatedResources) { DARABONBA_PTR_SET_RVALUE(relatedResources_, relatedResources) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline CreateCredentialOutput& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> credentialAuthType_ = nullptr;
    std::shared_ptr<string> credentialId_ = nullptr;
    std::shared_ptr<string> credentialName_ = nullptr;
    std::shared_ptr<map<string, string>> credentialPublicConfig_ = nullptr;
    std::shared_ptr<string> credentialSecret_ = nullptr;
    std::shared_ptr<string> credentialSourceType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<vector<RelatedResource>> relatedResources_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
