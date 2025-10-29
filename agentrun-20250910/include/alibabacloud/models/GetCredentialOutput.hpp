// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCREDENTIALOUTPUT_HPP_
#define ALIBABACLOUD_MODELS_GETCREDENTIALOUTPUT_HPP_
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
  class GetCredentialOutput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCredentialOutput& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(secret, secret_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, GetCredentialOutput& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(secret, secret_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    GetCredentialOutput() = default ;
    GetCredentialOutput(const GetCredentialOutput &) = default ;
    GetCredentialOutput(GetCredentialOutput &&) = default ;
    GetCredentialOutput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCredentialOutput() = default ;
    GetCredentialOutput& operator=(const GetCredentialOutput &) = default ;
    GetCredentialOutput& operator=(GetCredentialOutput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->createdAt_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->secret_ == nullptr
        && return this->type_ == nullptr && return this->updatedAt_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const map<string, string> & config() const { DARABONBA_PTR_GET_CONST(config_, map<string, string>) };
    inline map<string, string> config() { DARABONBA_PTR_GET(config_, map<string, string>) };
    inline GetCredentialOutput& setConfig(const map<string, string> & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline GetCredentialOutput& setConfig(map<string, string> && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline GetCredentialOutput& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetCredentialOutput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetCredentialOutput& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetCredentialOutput& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string secret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline GetCredentialOutput& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCredentialOutput& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline GetCredentialOutput& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // 凭证的配置参数，以键值对形式存储
    std::shared_ptr<map<string, string>> config_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> secret_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
