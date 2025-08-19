// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLUSTERCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLUSTERCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyClusterConfigurationRequestCustomizeConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ModifyClusterConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyClusterConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(customize_config, customizeConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyClusterConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(customize_config, customizeConfig_);
    };
    ModifyClusterConfigurationRequest() = default ;
    ModifyClusterConfigurationRequest(const ModifyClusterConfigurationRequest &) = default ;
    ModifyClusterConfigurationRequest(ModifyClusterConfigurationRequest &&) = default ;
    ModifyClusterConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyClusterConfigurationRequest() = default ;
    ModifyClusterConfigurationRequest& operator=(const ModifyClusterConfigurationRequest &) = default ;
    ModifyClusterConfigurationRequest& operator=(ModifyClusterConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customizeConfig_ != nullptr; };
    // customizeConfig Field Functions 
    bool hasCustomizeConfig() const { return this->customizeConfig_ != nullptr;};
    void deleteCustomizeConfig() { this->customizeConfig_ = nullptr;};
    inline const vector<ModifyClusterConfigurationRequestCustomizeConfig> & customizeConfig() const { DARABONBA_PTR_GET_CONST(customizeConfig_, vector<ModifyClusterConfigurationRequestCustomizeConfig>) };
    inline vector<ModifyClusterConfigurationRequestCustomizeConfig> customizeConfig() { DARABONBA_PTR_GET(customizeConfig_, vector<ModifyClusterConfigurationRequestCustomizeConfig>) };
    inline ModifyClusterConfigurationRequest& setCustomizeConfig(const vector<ModifyClusterConfigurationRequestCustomizeConfig> & customizeConfig) { DARABONBA_PTR_SET_VALUE(customizeConfig_, customizeConfig) };
    inline ModifyClusterConfigurationRequest& setCustomizeConfig(vector<ModifyClusterConfigurationRequestCustomizeConfig> && customizeConfig) { DARABONBA_PTR_SET_RVALUE(customizeConfig_, customizeConfig) };


  protected:
    // The custom configurations.
    std::shared_ptr<vector<ModifyClusterConfigurationRequestCustomizeConfig>> customizeConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
