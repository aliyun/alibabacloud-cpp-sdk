// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREDENTIALCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREDENTIALCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CredentialConfigConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDsw20220101
{
namespace Models
{
  class CredentialConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CredentialConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, CredentialConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    CredentialConfig() = default ;
    CredentialConfig(const CredentialConfig &) = default ;
    CredentialConfig(CredentialConfig &&) = default ;
    CredentialConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CredentialConfig() = default ;
    CredentialConfig& operator=(const CredentialConfig &) = default ;
    CredentialConfig& operator=(CredentialConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunEnvRoleKey_ == nullptr
        && return this->configs_ == nullptr && return this->enable_ == nullptr; };
    // aliyunEnvRoleKey Field Functions 
    bool hasAliyunEnvRoleKey() const { return this->aliyunEnvRoleKey_ != nullptr;};
    void deleteAliyunEnvRoleKey() { this->aliyunEnvRoleKey_ = nullptr;};
    inline string aliyunEnvRoleKey() const { DARABONBA_PTR_GET_DEFAULT(aliyunEnvRoleKey_, "") };
    inline CredentialConfig& setAliyunEnvRoleKey(string aliyunEnvRoleKey) { DARABONBA_PTR_SET_VALUE(aliyunEnvRoleKey_, aliyunEnvRoleKey) };


    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<CredentialConfigConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<CredentialConfigConfigs>) };
    inline vector<CredentialConfigConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<CredentialConfigConfigs>) };
    inline CredentialConfig& setConfigs(const vector<CredentialConfigConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline CredentialConfig& setConfigs(vector<CredentialConfigConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CredentialConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    std::shared_ptr<string> aliyunEnvRoleKey_ = nullptr;
    std::shared_ptr<vector<CredentialConfigConfigs>> configs_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDsw20220101
#endif
