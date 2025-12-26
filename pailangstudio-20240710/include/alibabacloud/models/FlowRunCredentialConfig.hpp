// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWRUNCREDENTIALCONFIG_HPP_
#define ALIBABACLOUD_MODELS_FLOWRUNCREDENTIALCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlowRunCredentialConfigCredentialConfigItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class FlowRunCredentialConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowRunCredentialConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
      DARABONBA_PTR_TO_JSON(CredentialConfigItems, credentialConfigItems_);
      DARABONBA_PTR_TO_JSON(EnableCredentialInject, enableCredentialInject_);
    };
    friend void from_json(const Darabonba::Json& j, FlowRunCredentialConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunEnvRoleKey, aliyunEnvRoleKey_);
      DARABONBA_PTR_FROM_JSON(CredentialConfigItems, credentialConfigItems_);
      DARABONBA_PTR_FROM_JSON(EnableCredentialInject, enableCredentialInject_);
    };
    FlowRunCredentialConfig() = default ;
    FlowRunCredentialConfig(const FlowRunCredentialConfig &) = default ;
    FlowRunCredentialConfig(FlowRunCredentialConfig &&) = default ;
    FlowRunCredentialConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowRunCredentialConfig() = default ;
    FlowRunCredentialConfig& operator=(const FlowRunCredentialConfig &) = default ;
    FlowRunCredentialConfig& operator=(FlowRunCredentialConfig &&) = default ;
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
    inline FlowRunCredentialConfig& setAliyunEnvRoleKey(string aliyunEnvRoleKey) { DARABONBA_PTR_SET_VALUE(aliyunEnvRoleKey_, aliyunEnvRoleKey) };


    // credentialConfigItems Field Functions 
    bool hasCredentialConfigItems() const { return this->credentialConfigItems_ != nullptr;};
    void deleteCredentialConfigItems() { this->credentialConfigItems_ = nullptr;};
    inline const vector<Models::FlowRunCredentialConfigCredentialConfigItems> & credentialConfigItems() const { DARABONBA_PTR_GET_CONST(credentialConfigItems_, vector<Models::FlowRunCredentialConfigCredentialConfigItems>) };
    inline vector<Models::FlowRunCredentialConfigCredentialConfigItems> credentialConfigItems() { DARABONBA_PTR_GET(credentialConfigItems_, vector<Models::FlowRunCredentialConfigCredentialConfigItems>) };
    inline FlowRunCredentialConfig& setCredentialConfigItems(const vector<Models::FlowRunCredentialConfigCredentialConfigItems> & credentialConfigItems) { DARABONBA_PTR_SET_VALUE(credentialConfigItems_, credentialConfigItems) };
    inline FlowRunCredentialConfig& setCredentialConfigItems(vector<Models::FlowRunCredentialConfigCredentialConfigItems> && credentialConfigItems) { DARABONBA_PTR_SET_RVALUE(credentialConfigItems_, credentialConfigItems) };


    // enableCredentialInject Field Functions 
    bool hasEnableCredentialInject() const { return this->enableCredentialInject_ != nullptr;};
    void deleteEnableCredentialInject() { this->enableCredentialInject_ = nullptr;};
    inline bool enableCredentialInject() const { DARABONBA_PTR_GET_DEFAULT(enableCredentialInject_, false) };
    inline FlowRunCredentialConfig& setEnableCredentialInject(bool enableCredentialInject) { DARABONBA_PTR_SET_VALUE(enableCredentialInject_, enableCredentialInject) };


  protected:
    // AliyunEnvRoleKey
    std::shared_ptr<string> aliyunEnvRoleKey_ = nullptr;
    // Credential配置项列表
    std::shared_ptr<vector<Models::FlowRunCredentialConfigCredentialConfigItems>> credentialConfigItems_ = nullptr;
    // 是否启用Credential注入
    std::shared_ptr<bool> enableCredentialInject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
