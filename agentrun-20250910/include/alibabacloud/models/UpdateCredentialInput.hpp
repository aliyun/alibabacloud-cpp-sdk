// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECREDENTIALINPUT_HPP_
#define ALIBABACLOUD_MODELS_UPDATECREDENTIALINPUT_HPP_
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
  class UpdateCredentialInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCredentialInput& obj) { 
      DARABONBA_PTR_TO_JSON(credentialPublicConfig, credentialPublicConfig_);
      DARABONBA_PTR_TO_JSON(credentialSecret, credentialSecret_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCredentialInput& obj) { 
      DARABONBA_PTR_FROM_JSON(credentialPublicConfig, credentialPublicConfig_);
      DARABONBA_PTR_FROM_JSON(credentialSecret, credentialSecret_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
    };
    UpdateCredentialInput() = default ;
    UpdateCredentialInput(const UpdateCredentialInput &) = default ;
    UpdateCredentialInput(UpdateCredentialInput &&) = default ;
    UpdateCredentialInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCredentialInput() = default ;
    UpdateCredentialInput& operator=(const UpdateCredentialInput &) = default ;
    UpdateCredentialInput& operator=(UpdateCredentialInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialPublicConfig_ == nullptr
        && this->credentialSecret_ == nullptr && this->description_ == nullptr && this->enabled_ == nullptr; };
    // credentialPublicConfig Field Functions 
    bool hasCredentialPublicConfig() const { return this->credentialPublicConfig_ != nullptr;};
    void deleteCredentialPublicConfig() { this->credentialPublicConfig_ = nullptr;};
    inline const CredentialPublicConfig & getCredentialPublicConfig() const { DARABONBA_PTR_GET_CONST(credentialPublicConfig_, CredentialPublicConfig) };
    inline CredentialPublicConfig getCredentialPublicConfig() { DARABONBA_PTR_GET(credentialPublicConfig_, CredentialPublicConfig) };
    inline UpdateCredentialInput& setCredentialPublicConfig(const CredentialPublicConfig & credentialPublicConfig) { DARABONBA_PTR_SET_VALUE(credentialPublicConfig_, credentialPublicConfig) };
    inline UpdateCredentialInput& setCredentialPublicConfig(CredentialPublicConfig && credentialPublicConfig) { DARABONBA_PTR_SET_RVALUE(credentialPublicConfig_, credentialPublicConfig) };


    // credentialSecret Field Functions 
    bool hasCredentialSecret() const { return this->credentialSecret_ != nullptr;};
    void deleteCredentialSecret() { this->credentialSecret_ = nullptr;};
    inline string getCredentialSecret() const { DARABONBA_PTR_GET_DEFAULT(credentialSecret_, "") };
    inline UpdateCredentialInput& setCredentialSecret(string credentialSecret) { DARABONBA_PTR_SET_VALUE(credentialSecret_, credentialSecret) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateCredentialInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateCredentialInput& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


  protected:
    shared_ptr<CredentialPublicConfig> credentialPublicConfig_ {};
    shared_ptr<string> credentialSecret_ {};
    shared_ptr<string> description_ {};
    shared_ptr<bool> enabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
