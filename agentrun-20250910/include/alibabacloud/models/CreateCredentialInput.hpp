// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDENTIALINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDENTIALINPUT_HPP_
#include <darabonba/Core.hpp>
#include <map>
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
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(secret, secret_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCredentialInput& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(secret, secret_);
      DARABONBA_PTR_FROM_JSON(type, type_);
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
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->secret_ == nullptr && return this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, string> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
    inline map<string, string> config() { DARABONBA_PTR_GET(config_, map<string, string>) };
    inline CreateCredentialInput& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline CreateCredentialInput& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCredentialInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCredentialInput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string secret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline CreateCredentialInput& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCredentialInput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // 凭证的配置参数，以键值对形式存储
    std::shared_ptr<map<string, string>> config_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> secret_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
