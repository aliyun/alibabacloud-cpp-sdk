// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABONREESDKCONFIGMODULECONFIGVERSIONCONFIGSVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATABONREESDKCONFIGMODULECONFIGVERSIONCONFIGSVALUE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DataBonreeSDKConfigModuleConfigVersionConfigsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataBonreeSDKConfigModuleConfigVersionConfigsValue& obj) { 
      DARABONBA_PTR_TO_JSON(useCustom, useCustom_);
      DARABONBA_PTR_TO_JSON(customConfig, customConfig_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DataBonreeSDKConfigModuleConfigVersionConfigsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(useCustom, useCustom_);
      DARABONBA_PTR_FROM_JSON(customConfig, customConfig_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    DataBonreeSDKConfigModuleConfigVersionConfigsValue() = default ;
    DataBonreeSDKConfigModuleConfigVersionConfigsValue(const DataBonreeSDKConfigModuleConfigVersionConfigsValue &) = default ;
    DataBonreeSDKConfigModuleConfigVersionConfigsValue(DataBonreeSDKConfigModuleConfigVersionConfigsValue &&) = default ;
    DataBonreeSDKConfigModuleConfigVersionConfigsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataBonreeSDKConfigModuleConfigVersionConfigsValue() = default ;
    DataBonreeSDKConfigModuleConfigVersionConfigsValue& operator=(const DataBonreeSDKConfigModuleConfigVersionConfigsValue &) = default ;
    DataBonreeSDKConfigModuleConfigVersionConfigsValue& operator=(DataBonreeSDKConfigModuleConfigVersionConfigsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->useCustom_ != nullptr
        && this->customConfig_ != nullptr && this->description_ != nullptr && this->updateTime_ != nullptr; };
    // useCustom Field Functions 
    bool hasUseCustom() const { return this->useCustom_ != nullptr;};
    void deleteUseCustom() { this->useCustom_ = nullptr;};
    inline bool useCustom() const { DARABONBA_PTR_GET_DEFAULT(useCustom_, false) };
    inline DataBonreeSDKConfigModuleConfigVersionConfigsValue& setUseCustom(bool useCustom) { DARABONBA_PTR_SET_VALUE(useCustom_, useCustom) };


    // customConfig Field Functions 
    bool hasCustomConfig() const { return this->customConfig_ != nullptr;};
    void deleteCustomConfig() { this->customConfig_ = nullptr;};
    inline const map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue> & customConfig() const { DARABONBA_PTR_GET_CONST(customConfig_, map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue>) };
    inline map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue> customConfig() { DARABONBA_PTR_GET(customConfig_, map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue>) };
    inline DataBonreeSDKConfigModuleConfigVersionConfigsValue& setCustomConfig(const map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue> & customConfig) { DARABONBA_PTR_SET_VALUE(customConfig_, customConfig) };
    inline DataBonreeSDKConfigModuleConfigVersionConfigsValue& setCustomConfig(map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue> && customConfig) { DARABONBA_PTR_SET_RVALUE(customConfig_, customConfig) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DataBonreeSDKConfigModuleConfigVersionConfigsValue& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DataBonreeSDKConfigModuleConfigVersionConfigsValue& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // Indicates whether the custom configuration is used.
    std::shared_ptr<bool> useCustom_ = nullptr;
    // The custom configuration.
    std::shared_ptr<map<string, DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue>> customConfig_ = nullptr;
    // The description of the version configuration.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the version configuration was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
