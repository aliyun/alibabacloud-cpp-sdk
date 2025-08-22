// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODYDATABONREESDKCONFIGMODULECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODYDATABONREESDKCONFIGMODULECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataBonreeSDKConfigModuleConfigDefaultConfigValue.hpp>
#include <alibabacloud/models/DataBonreeSDKConfigModuleConfigVersionConfigsValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig& obj) { 
      DARABONBA_PTR_TO_JSON(defaultConfig, defaultConfig_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(versionConfigs, versionConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultConfig, defaultConfig_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(versionConfigs, versionConfigs_);
    };
    GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig() = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig(const GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig &) = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig(GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig &&) = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig() = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig& operator=(const GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig &) = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig& operator=(GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultConfig_ != nullptr
        && this->enable_ != nullptr && this->versionConfigs_ != nullptr; };
    // defaultConfig Field Functions 
    bool hasDefaultConfig() const { return this->defaultConfig_ != nullptr;};
    void deleteDefaultConfig() { this->defaultConfig_ = nullptr;};
    inline const map<string, Models::DataBonreeSDKConfigModuleConfigDefaultConfigValue> & defaultConfig() const { DARABONBA_PTR_GET_CONST(defaultConfig_, map<string, Models::DataBonreeSDKConfigModuleConfigDefaultConfigValue>) };
    inline map<string, Models::DataBonreeSDKConfigModuleConfigDefaultConfigValue> defaultConfig() { DARABONBA_PTR_GET(defaultConfig_, map<string, Models::DataBonreeSDKConfigModuleConfigDefaultConfigValue>) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig& setDefaultConfig(const map<string, Models::DataBonreeSDKConfigModuleConfigDefaultConfigValue> & defaultConfig) { DARABONBA_PTR_SET_VALUE(defaultConfig_, defaultConfig) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig& setDefaultConfig(map<string, Models::DataBonreeSDKConfigModuleConfigDefaultConfigValue> && defaultConfig) { DARABONBA_PTR_SET_RVALUE(defaultConfig_, defaultConfig) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // versionConfigs Field Functions 
    bool hasVersionConfigs() const { return this->versionConfigs_ != nullptr;};
    void deleteVersionConfigs() { this->versionConfigs_ = nullptr;};
    inline const map<string, Models::DataBonreeSDKConfigModuleConfigVersionConfigsValue> & versionConfigs() const { DARABONBA_PTR_GET_CONST(versionConfigs_, map<string, Models::DataBonreeSDKConfigModuleConfigVersionConfigsValue>) };
    inline map<string, Models::DataBonreeSDKConfigModuleConfigVersionConfigsValue> versionConfigs() { DARABONBA_PTR_GET(versionConfigs_, map<string, Models::DataBonreeSDKConfigModuleConfigVersionConfigsValue>) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig& setVersionConfigs(const map<string, Models::DataBonreeSDKConfigModuleConfigVersionConfigsValue> & versionConfigs) { DARABONBA_PTR_SET_VALUE(versionConfigs_, versionConfigs) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig& setVersionConfigs(map<string, Models::DataBonreeSDKConfigModuleConfigVersionConfigsValue> && versionConfigs) { DARABONBA_PTR_SET_RVALUE(versionConfigs_, versionConfigs) };


  protected:
    // The default configuration of the application.
    std::shared_ptr<map<string, Models::DataBonreeSDKConfigModuleConfigDefaultConfigValue>> defaultConfig_ = nullptr;
    // Indicates whether the configuration is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // The version configurations of the application.
    std::shared_ptr<map<string, Models::DataBonreeSDKConfigModuleConfigVersionConfigsValue>> versionConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
