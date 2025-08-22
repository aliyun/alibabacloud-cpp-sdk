// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABONREESDKCONFIGMODULECONFIGVERSIONCONFIGSVALUECUSTOMCONFIGVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATABONREESDKCONFIGMODULECONFIGVERSIONCONFIGSVALUECUSTOMCONFIGVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
    };
    DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue() = default ;
    DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue(const DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue &) = default ;
    DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue(DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue &&) = default ;
    DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue() = default ;
    DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue& operator=(const DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue &) = default ;
    DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue& operator=(DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DataBonreeSDKConfigModuleConfigVersionConfigsValueCustomConfigValue& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    // Indicates whether the configuration is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
