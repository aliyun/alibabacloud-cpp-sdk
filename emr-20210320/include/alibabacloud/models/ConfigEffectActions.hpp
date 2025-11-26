// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGEFFECTACTIONS_HPP_
#define ALIBABACLOUD_MODELS_CONFIGEFFECTACTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ConfigEffectActions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigEffectActions& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigEffectAction, configEffectAction_);
      DARABONBA_PTR_TO_JSON(ConfigFiles, configFiles_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigEffectActions& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigEffectAction, configEffectAction_);
      DARABONBA_PTR_FROM_JSON(ConfigFiles, configFiles_);
    };
    ConfigEffectActions() = default ;
    ConfigEffectActions(const ConfigEffectActions &) = default ;
    ConfigEffectActions(ConfigEffectActions &&) = default ;
    ConfigEffectActions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigEffectActions() = default ;
    ConfigEffectActions& operator=(const ConfigEffectActions &) = default ;
    ConfigEffectActions& operator=(ConfigEffectActions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configEffectAction_ == nullptr
        && return this->configFiles_ == nullptr; };
    // configEffectAction Field Functions 
    bool hasConfigEffectAction() const { return this->configEffectAction_ != nullptr;};
    void deleteConfigEffectAction() { this->configEffectAction_ = nullptr;};
    inline string configEffectAction() const { DARABONBA_PTR_GET_DEFAULT(configEffectAction_, "") };
    inline ConfigEffectActions& setConfigEffectAction(string configEffectAction) { DARABONBA_PTR_SET_VALUE(configEffectAction_, configEffectAction) };


    // configFiles Field Functions 
    bool hasConfigFiles() const { return this->configFiles_ != nullptr;};
    void deleteConfigFiles() { this->configFiles_ = nullptr;};
    inline const vector<string> & configFiles() const { DARABONBA_PTR_GET_CONST(configFiles_, vector<string>) };
    inline vector<string> configFiles() { DARABONBA_PTR_GET(configFiles_, vector<string>) };
    inline ConfigEffectActions& setConfigFiles(const vector<string> & configFiles) { DARABONBA_PTR_SET_VALUE(configFiles_, configFiles) };
    inline ConfigEffectActions& setConfigFiles(vector<string> && configFiles) { DARABONBA_PTR_SET_RVALUE(configFiles_, configFiles) };


  protected:
    // 配置生效动作。
    std::shared_ptr<string> configEffectAction_ = nullptr;
    // 配置生效配置文件。
    std::shared_ptr<vector<string>> configFiles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
