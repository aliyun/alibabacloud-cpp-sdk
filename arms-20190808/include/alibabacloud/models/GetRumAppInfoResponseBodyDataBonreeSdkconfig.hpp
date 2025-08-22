// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODYDATABONREESDKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETRUMAPPINFORESPONSEBODYDATABONREESDKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig.hpp>
#include <alibabacloud/models/GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRumAppInfoResponseBodyDataBonreeSDKConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRumAppInfoResponseBodyDataBonreeSDKConfig& obj) { 
      DARABONBA_PTR_TO_JSON(moduleConfig, moduleConfig_);
      DARABONBA_PTR_TO_JSON(samplingConfig, samplingConfig_);
    };
    friend void from_json(const Darabonba::Json& j, GetRumAppInfoResponseBodyDataBonreeSDKConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(moduleConfig, moduleConfig_);
      DARABONBA_PTR_FROM_JSON(samplingConfig, samplingConfig_);
    };
    GetRumAppInfoResponseBodyDataBonreeSDKConfig() = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfig(const GetRumAppInfoResponseBodyDataBonreeSDKConfig &) = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfig(GetRumAppInfoResponseBodyDataBonreeSDKConfig &&) = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRumAppInfoResponseBodyDataBonreeSDKConfig() = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfig& operator=(const GetRumAppInfoResponseBodyDataBonreeSDKConfig &) = default ;
    GetRumAppInfoResponseBodyDataBonreeSDKConfig& operator=(GetRumAppInfoResponseBodyDataBonreeSDKConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->moduleConfig_ != nullptr
        && this->samplingConfig_ != nullptr; };
    // moduleConfig Field Functions 
    bool hasModuleConfig() const { return this->moduleConfig_ != nullptr;};
    void deleteModuleConfig() { this->moduleConfig_ = nullptr;};
    inline const Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig & moduleConfig() const { DARABONBA_PTR_GET_CONST(moduleConfig_, Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig) };
    inline Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig moduleConfig() { DARABONBA_PTR_GET(moduleConfig_, Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfig& setModuleConfig(const Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig & moduleConfig) { DARABONBA_PTR_SET_VALUE(moduleConfig_, moduleConfig) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfig& setModuleConfig(Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig && moduleConfig) { DARABONBA_PTR_SET_RVALUE(moduleConfig_, moduleConfig) };


    // samplingConfig Field Functions 
    bool hasSamplingConfig() const { return this->samplingConfig_ != nullptr;};
    void deleteSamplingConfig() { this->samplingConfig_ = nullptr;};
    inline const Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig & samplingConfig() const { DARABONBA_PTR_GET_CONST(samplingConfig_, Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig) };
    inline Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig samplingConfig() { DARABONBA_PTR_GET(samplingConfig_, Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfig& setSamplingConfig(const Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig & samplingConfig) { DARABONBA_PTR_SET_VALUE(samplingConfig_, samplingConfig) };
    inline GetRumAppInfoResponseBodyDataBonreeSDKConfig& setSamplingConfig(Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig && samplingConfig) { DARABONBA_PTR_SET_RVALUE(samplingConfig_, samplingConfig) };


  protected:
    // The module configuration.
    std::shared_ptr<Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigModuleConfig> moduleConfig_ = nullptr;
    // Sampling configuration.
    std::shared_ptr<Models::GetRumAppInfoResponseBodyDataBonreeSDKConfigSamplingConfig> samplingConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
