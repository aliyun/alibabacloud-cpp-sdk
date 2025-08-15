// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURATIONOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURATIONOVERRIDES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ConfigurationOverridesConfigurations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ConfigurationOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigurationOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(configurations, configurations_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigurationOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(configurations, configurations_);
    };
    ConfigurationOverrides() = default ;
    ConfigurationOverrides(const ConfigurationOverrides &) = default ;
    ConfigurationOverrides(ConfigurationOverrides &&) = default ;
    ConfigurationOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigurationOverrides() = default ;
    ConfigurationOverrides& operator=(const ConfigurationOverrides &) = default ;
    ConfigurationOverrides& operator=(ConfigurationOverrides &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configurations_ != nullptr; };
    // configurations Field Functions 
    bool hasConfigurations() const { return this->configurations_ != nullptr;};
    void deleteConfigurations() { this->configurations_ = nullptr;};
    inline const vector<ConfigurationOverridesConfigurations> & configurations() const { DARABONBA_PTR_GET_CONST(configurations_, vector<ConfigurationOverridesConfigurations>) };
    inline vector<ConfigurationOverridesConfigurations> configurations() { DARABONBA_PTR_GET(configurations_, vector<ConfigurationOverridesConfigurations>) };
    inline ConfigurationOverrides& setConfigurations(const vector<ConfigurationOverridesConfigurations> & configurations) { DARABONBA_PTR_SET_VALUE(configurations_, configurations) };
    inline ConfigurationOverrides& setConfigurations(vector<ConfigurationOverridesConfigurations> && configurations) { DARABONBA_PTR_SET_RVALUE(configurations_, configurations) };


  protected:
    std::shared_ptr<vector<ConfigurationOverridesConfigurations>> configurations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
