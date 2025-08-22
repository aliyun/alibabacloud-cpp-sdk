// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATABONREESDKCONFIGMODULECONFIGDEFAULTCONFIGVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATABONREESDKCONFIGMODULECONFIGDEFAULTCONFIGVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DataBonreeSDKConfigModuleConfigDefaultConfigValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataBonreeSDKConfigModuleConfigDefaultConfigValue& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, DataBonreeSDKConfigModuleConfigDefaultConfigValue& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
    };
    DataBonreeSDKConfigModuleConfigDefaultConfigValue() = default ;
    DataBonreeSDKConfigModuleConfigDefaultConfigValue(const DataBonreeSDKConfigModuleConfigDefaultConfigValue &) = default ;
    DataBonreeSDKConfigModuleConfigDefaultConfigValue(DataBonreeSDKConfigModuleConfigDefaultConfigValue &&) = default ;
    DataBonreeSDKConfigModuleConfigDefaultConfigValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataBonreeSDKConfigModuleConfigDefaultConfigValue() = default ;
    DataBonreeSDKConfigModuleConfigDefaultConfigValue& operator=(const DataBonreeSDKConfigModuleConfigDefaultConfigValue &) = default ;
    DataBonreeSDKConfigModuleConfigDefaultConfigValue& operator=(DataBonreeSDKConfigModuleConfigDefaultConfigValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enable_ != nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline DataBonreeSDKConfigModuleConfigDefaultConfigValue& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    // Indicates whether the configuration is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
