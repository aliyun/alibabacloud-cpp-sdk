// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRUNCONFIGURATIONRESPONSEBODYRUNCONFIGURATIONAPPLICATIONCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETRUNCONFIGURATIONRESPONSEBODYRUNCONFIGURATIONAPPLICATIONCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(configFileName, configFileName_);
      DARABONBA_PTR_TO_JSON(configItemKey, configItemKey_);
      DARABONBA_PTR_TO_JSON(configItemValue, configItemValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(configFileName, configFileName_);
      DARABONBA_PTR_FROM_JSON(configItemKey, configItemKey_);
      DARABONBA_PTR_FROM_JSON(configItemValue, configItemValue_);
    };
    GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs() = default ;
    GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs(const GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs &) = default ;
    GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs(GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs &&) = default ;
    GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs() = default ;
    GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs& operator=(const GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs &) = default ;
    GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs& operator=(GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configFileName_ == nullptr
        && return this->configItemKey_ == nullptr && return this->configItemValue_ == nullptr; };
    // configFileName Field Functions 
    bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
    void deleteConfigFileName() { this->configFileName_ = nullptr;};
    inline string configFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
    inline GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


    // configItemKey Field Functions 
    bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
    void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
    inline string configItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
    inline GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


    // configItemValue Field Functions 
    bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
    void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
    inline string configItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
    inline GetRunConfigurationResponseBodyRunConfigurationApplicationConfigs& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


  protected:
    // 应用配置文件名。 应用配置文件名。 ```spark-defaults.conf```
    std::shared_ptr<string> configFileName_ = nullptr;
    // 配置项键。 配置项键。 ```dfs.namenode.checkpoint.period```
    std::shared_ptr<string> configItemKey_ = nullptr;
    // 配置项值。 配置项值。 ```3600s```
    std::shared_ptr<string> configItemValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
