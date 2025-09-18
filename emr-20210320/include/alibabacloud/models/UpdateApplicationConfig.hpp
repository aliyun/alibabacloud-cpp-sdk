// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class UpdateApplicationConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigDescription, configDescription_);
      DARABONBA_PTR_TO_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_TO_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_TO_JSON(ConfigItemValue, configItemValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigDescription, configDescription_);
      DARABONBA_PTR_FROM_JSON(ConfigFileName, configFileName_);
      DARABONBA_PTR_FROM_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_FROM_JSON(ConfigItemValue, configItemValue_);
    };
    UpdateApplicationConfig() = default ;
    UpdateApplicationConfig(const UpdateApplicationConfig &) = default ;
    UpdateApplicationConfig(UpdateApplicationConfig &&) = default ;
    UpdateApplicationConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationConfig() = default ;
    UpdateApplicationConfig& operator=(const UpdateApplicationConfig &) = default ;
    UpdateApplicationConfig& operator=(UpdateApplicationConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configDescription_ != nullptr
        && this->configFileName_ != nullptr && this->configItemKey_ != nullptr && this->configItemValue_ != nullptr; };
    // configDescription Field Functions 
    bool hasConfigDescription() const { return this->configDescription_ != nullptr;};
    void deleteConfigDescription() { this->configDescription_ = nullptr;};
    inline string configDescription() const { DARABONBA_PTR_GET_DEFAULT(configDescription_, "") };
    inline UpdateApplicationConfig& setConfigDescription(string configDescription) { DARABONBA_PTR_SET_VALUE(configDescription_, configDescription) };


    // configFileName Field Functions 
    bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
    void deleteConfigFileName() { this->configFileName_ = nullptr;};
    inline string configFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
    inline UpdateApplicationConfig& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


    // configItemKey Field Functions 
    bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
    void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
    inline string configItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
    inline UpdateApplicationConfig& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


    // configItemValue Field Functions 
    bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
    void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
    inline string configItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
    inline UpdateApplicationConfig& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


  protected:
    // 修改描述。
    std::shared_ptr<string> configDescription_ = nullptr;
    // 应用配置文件名。
    std::shared_ptr<string> configFileName_ = nullptr;
    // 配置项键。
    std::shared_ptr<string> configItemKey_ = nullptr;
    // 配置项值。
    std::shared_ptr<string> configItemValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
