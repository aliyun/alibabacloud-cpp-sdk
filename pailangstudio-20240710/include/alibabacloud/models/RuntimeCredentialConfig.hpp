// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTIMECREDENTIALCONFIG_HPP_
#define ALIBABACLOUD_MODELS_RUNTIMECREDENTIALCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RuntimeCredentialConfigCredentialConfigItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class RuntimeCredentialConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RuntimeCredentialConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
      DARABONBA_PTR_TO_JSON(CredentialConfigItems, credentialConfigItems_);
      DARABONBA_PTR_TO_JSON(EnableCredentialInject, enableCredentialInject_);
    };
    friend void from_json(const Darabonba::Json& j, RuntimeCredentialConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
      DARABONBA_PTR_FROM_JSON(CredentialConfigItems, credentialConfigItems_);
      DARABONBA_PTR_FROM_JSON(EnableCredentialInject, enableCredentialInject_);
    };
    RuntimeCredentialConfig() = default ;
    RuntimeCredentialConfig(const RuntimeCredentialConfig &) = default ;
    RuntimeCredentialConfig(RuntimeCredentialConfig &&) = default ;
    RuntimeCredentialConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RuntimeCredentialConfig() = default ;
    RuntimeCredentialConfig& operator=(const RuntimeCredentialConfig &) = default ;
    RuntimeCredentialConfig& operator=(RuntimeCredentialConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunEnvRoleKey_ == nullptr
        && return this->credentialConfigItems_ == nullptr && return this->enableCredentialInject_ == nullptr; };
    // aliyunEnvRoleKey Field Functions 
    bool hasAliyunEnvRoleKey() const { return this->aliyunEnvRoleKey_ != nullptr;};
    void deleteAliyunEnvRoleKey() { this->aliyunEnvRoleKey_ = nullptr;};
    inline string aliyunEnvRoleKey() const { DARABONBA_PTR_GET_DEFAULT(aliyunEnvRoleKey_, "") };
    inline RuntimeCredentialConfig& setAliyunEnvRoleKey(string aliyunEnvRoleKey) { DARABONBA_PTR_SET_VALUE(aliyunEnvRoleKey_, aliyunEnvRoleKey) };


    // credentialConfigItems Field Functions 
    bool hasCredentialConfigItems() const { return this->credentialConfigItems_ != nullptr;};
    void deleteCredentialConfigItems() { this->credentialConfigItems_ = nullptr;};
    inline const vector<Models::RuntimeCredentialConfigCredentialConfigItems> & credentialConfigItems() const { DARABONBA_PTR_GET_CONST(credentialConfigItems_, vector<Models::RuntimeCredentialConfigCredentialConfigItems>) };
    inline vector<Models::RuntimeCredentialConfigCredentialConfigItems> credentialConfigItems() { DARABONBA_PTR_GET(credentialConfigItems_, vector<Models::RuntimeCredentialConfigCredentialConfigItems>) };
    inline RuntimeCredentialConfig& setCredentialConfigItems(const vector<Models::RuntimeCredentialConfigCredentialConfigItems> & credentialConfigItems) { DARABONBA_PTR_SET_VALUE(credentialConfigItems_, credentialConfigItems) };
    inline RuntimeCredentialConfig& setCredentialConfigItems(vector<Models::RuntimeCredentialConfigCredentialConfigItems> && credentialConfigItems) { DARABONBA_PTR_SET_RVALUE(credentialConfigItems_, credentialConfigItems) };


    // enableCredentialInject Field Functions 
    bool hasEnableCredentialInject() const { return this->enableCredentialInject_ != nullptr;};
    void deleteEnableCredentialInject() { this->enableCredentialInject_ = nullptr;};
    inline bool enableCredentialInject() const { DARABONBA_PTR_GET_DEFAULT(enableCredentialInject_, false) };
    inline RuntimeCredentialConfig& setEnableCredentialInject(bool enableCredentialInject) { DARABONBA_PTR_SET_VALUE(enableCredentialInject_, enableCredentialInject) };


  protected:
    // AliyunEnvRoleKey
    std::shared_ptr<string> aliyunEnvRoleKey_ = nullptr;
    // Credential配置项列表
    std::shared_ptr<vector<Models::RuntimeCredentialConfigCredentialConfigItems>> credentialConfigItems_ = nullptr;
    // 是否启用Credential注入
    std::shared_ptr<bool> enableCredentialInject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
