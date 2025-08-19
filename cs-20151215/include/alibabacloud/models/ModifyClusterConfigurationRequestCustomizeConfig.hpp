// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERCONFIGURATIONREQUESTCUSTOMIZECONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERCONFIGURATIONREQUESTCUSTOMIZECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyClusterConfigurationRequestCustomizeConfigConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterConfigurationRequestCustomizeConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterConfigurationRequestCustomizeConfig& obj) { 
      DARABONBA_PTR_TO_JSON(configs, configs_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterConfigurationRequestCustomizeConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(configs, configs_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    ModifyClusterConfigurationRequestCustomizeConfig() = default ;
    ModifyClusterConfigurationRequestCustomizeConfig(const ModifyClusterConfigurationRequestCustomizeConfig &) = default ;
    ModifyClusterConfigurationRequestCustomizeConfig(ModifyClusterConfigurationRequestCustomizeConfig &&) = default ;
    ModifyClusterConfigurationRequestCustomizeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterConfigurationRequestCustomizeConfig() = default ;
    ModifyClusterConfigurationRequestCustomizeConfig& operator=(const ModifyClusterConfigurationRequestCustomizeConfig &) = default ;
    ModifyClusterConfigurationRequestCustomizeConfig& operator=(ModifyClusterConfigurationRequestCustomizeConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configs_ != nullptr
        && this->name_ != nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<Models::ModifyClusterConfigurationRequestCustomizeConfigConfigs> & configs() const { DARABONBA_PTR_GET_CONST(configs_, vector<Models::ModifyClusterConfigurationRequestCustomizeConfigConfigs>) };
    inline vector<Models::ModifyClusterConfigurationRequestCustomizeConfigConfigs> configs() { DARABONBA_PTR_GET(configs_, vector<Models::ModifyClusterConfigurationRequestCustomizeConfigConfigs>) };
    inline ModifyClusterConfigurationRequestCustomizeConfig& setConfigs(const vector<Models::ModifyClusterConfigurationRequestCustomizeConfigConfigs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ModifyClusterConfigurationRequestCustomizeConfig& setConfigs(vector<Models::ModifyClusterConfigurationRequestCustomizeConfigConfigs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyClusterConfigurationRequestCustomizeConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The custom configurations.
    std::shared_ptr<vector<Models::ModifyClusterConfigurationRequestCustomizeConfigConfigs>> configs_ = nullptr;
    // The name of the component.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
