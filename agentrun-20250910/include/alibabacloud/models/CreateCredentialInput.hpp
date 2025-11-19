// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDENTIALINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDENTIALINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CredentialPublicConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateCredentialInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCredentialInput& obj) { 
      DARABONBA_PTR_TO_JSON(credentialAuthType, credentialAuthType_);
      DARABONBA_PTR_TO_JSON(credentialName, credentialName_);
      DARABONBA_PTR_TO_JSON(credentialPublicConfig, credentialPublicConfig_);
      DARABONBA_PTR_TO_JSON(credentialSecret, credentialSecret_);
      DARABONBA_PTR_TO_JSON(credentialSourceType, credentialSourceType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCredentialInput& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialAuthType, credentialAuthType_);
      DARABONBA_PTR_FROM_JSON(credentialName, credentialName_);
      DARABONBA_PTR_FROM_JSON(credentialPublicConfig, credentialPublicConfig_);
      DARABONBA_PTR_FROM_JSON(credentialSecret, credentialSecret_);
      DARABONBA_PTR_FROM_JSON(credentialSourceType, credentialSourceType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    CreateCredentialInput() = default ;
    CreateCredentialInput(const CreateCredentialInput &) = default ;
    CreateCredentialInput(CreateCredentialInput &&) = default ;
    CreateCredentialInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCredentialInput() = default ;
    CreateCredentialInput& operator=(const CreateCredentialInput &) = default ;
    CreateCredentialInput& operator=(CreateCredentialInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialAuthType_ == nullptr
        && return this->credentialName_ == nullptr && return this->credentialPublicConfig_ == nullptr && return this->credentialSecret_ == nullptr && return this->credentialSourceType_ == nullptr && return this->description_ == nullptr
        && return this->enabled_ == nullptr; };
    // credentialAuthType Field Functions 
    bool hasCredentialAuthType() const { return this->credentialAuthType_ != nullptr;};
    void deleteCredentialAuthType() { this->credentialAuthType_ = nullptr;};
    inline string credentialAuthType() const { DARABONBA_PTR_GET_DEFAULT(credentialAuthType_, "") };
    inline CreateCredentialInput& setCredentialAuthType(string credentialAuthType) { DARABONBA_PTR_SET_VALUE(credentialAuthType_, credentialAuthType) };


    // credentialName Field Functions 
    bool hasCredentialName() const { return this->credentialName_ != nullptr;};
    void deleteCredentialName() { this->credentialName_ = nullptr;};
    inline string credentialName() const { DARABONBA_PTR_GET_DEFAULT(credentialName_, "") };
    inline CreateCredentialInput& setCredentialName(string credentialName) { DARABONBA_PTR_SET_VALUE(credentialName_, credentialName) };


    // credentialPublicConfig Field Functions 
    bool hasCredentialPublicConfig() const { return this->credentialPublicConfig_ != nullptr;};
    void deleteCredentialPublicConfig() { this->credentialPublicConfig_ = nullptr;};
    inline const CredentialPublicConfig & credentialPublicConfig() const { DARABONBA_PTR_GET_CONST(credentialPublicConfig_, CredentialPublicConfig) };
    inline CredentialPublicConfig credentialPublicConfig() { DARABONBA_PTR_GET(credentialPublicConfig_, CredentialPublicConfig) };
    inline CreateCredentialInput& setCredentialPublicConfig(const CredentialPublicConfig & credentialPublicConfig) { DARABONBA_PTR_SET_VALUE(credentialPublicConfig_, credentialPublicConfig) };
    inline CreateCredentialInput& setCredentialPublicConfig(CredentialPublicConfig && credentialPublicConfig) { DARABONBA_PTR_SET_RVALUE(credentialPublicConfig_, credentialPublicConfig) };


    // credentialSecret Field Functions 
    bool hasCredentialSecret() const { return this->credentialSecret_ != nullptr;};
    void deleteCredentialSecret() { this->credentialSecret_ = nullptr;};
    inline string credentialSecret() const { DARABONBA_PTR_GET_DEFAULT(credentialSecret_, "") };
    inline CreateCredentialInput& setCredentialSecret(string credentialSecret) { DARABONBA_PTR_SET_VALUE(credentialSecret_, credentialSecret) };


    // credentialSourceType Field Functions 
    bool hasCredentialSourceType() const { return this->credentialSourceType_ != nullptr;};
    void deleteCredentialSourceType() { this->credentialSourceType_ = nullptr;};
    inline string credentialSourceType() const { DARABONBA_PTR_GET_DEFAULT(credentialSourceType_, "") };
    inline CreateCredentialInput& setCredentialSourceType(string credentialSourceType) { DARABONBA_PTR_SET_VALUE(credentialSourceType_, credentialSourceType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCredentialInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateCredentialInput& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> credentialAuthType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> credentialName_ = nullptr;
    std::shared_ptr<CredentialPublicConfig> credentialPublicConfig_ = nullptr;
    std::shared_ptr<string> credentialSecret_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> credentialSourceType_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
