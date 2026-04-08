// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTERCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CLUSTERCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ClusterConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClusterConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(EnableOverwrite, enableOverwrite_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, ClusterConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(EnableOverwrite, enableOverwrite_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    ClusterConfig() = default ;
    ClusterConfig(const ClusterConfig &) = default ;
    ClusterConfig(ClusterConfig &&) = default ;
    ClusterConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClusterConfig() = default ;
    ClusterConfig& operator=(const ClusterConfig &) = default ;
    ClusterConfig& operator=(ClusterConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configValue_ == nullptr
        && this->enableOverwrite_ == nullptr && this->moduleName_ == nullptr; };
    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string getConfigValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline ClusterConfig& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // enableOverwrite Field Functions 
    bool hasEnableOverwrite() const { return this->enableOverwrite_ != nullptr;};
    void deleteEnableOverwrite() { this->enableOverwrite_ = nullptr;};
    inline bool getEnableOverwrite() const { DARABONBA_PTR_GET_DEFAULT(enableOverwrite_, false) };
    inline ClusterConfig& setEnableOverwrite(bool enableOverwrite) { DARABONBA_PTR_SET_VALUE(enableOverwrite_, enableOverwrite) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string getModuleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline ClusterConfig& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    // The configuration value.
    shared_ptr<string> configValue_ {};
    // Specifies whether to overwrite the advanced settings of nodes in DataStudio. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableOverwrite_ {};
    // The module in which the cluster is configured. Valid values:
    // 
    // *   ide: DataStudio.
    // *   da: DataAnalysis.
    // *   scheduler.auto: Operation Center - auto triggered instances.
    // *   scheduler.backfill: Operation Center - data backfill instances.
    // *   scheduler.test: Operation Center - test instances.
    // *   scheduler.manual: Operation Center - manually triggered instances.
    shared_ptr<string> moduleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
