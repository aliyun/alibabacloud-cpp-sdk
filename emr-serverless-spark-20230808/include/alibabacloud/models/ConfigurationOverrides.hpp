// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGURATIONOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_CONFIGURATIONOVERRIDES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Configurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configurations& obj) { 
        DARABONBA_PTR_TO_JSON(configFileName, configFileName_);
        DARABONBA_PTR_TO_JSON(configItemKey, configItemKey_);
        DARABONBA_PTR_TO_JSON(configItemValue, configItemValue_);
      };
      friend void from_json(const Darabonba::Json& j, Configurations& obj) { 
        DARABONBA_PTR_FROM_JSON(configFileName, configFileName_);
        DARABONBA_PTR_FROM_JSON(configItemKey, configItemKey_);
        DARABONBA_PTR_FROM_JSON(configItemValue, configItemValue_);
      };
      Configurations() = default ;
      Configurations(const Configurations &) = default ;
      Configurations(Configurations &&) = default ;
      Configurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configurations() = default ;
      Configurations& operator=(const Configurations &) = default ;
      Configurations& operator=(Configurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configFileName_ == nullptr
        && this->configItemKey_ == nullptr && this->configItemValue_ == nullptr; };
      // configFileName Field Functions 
      bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
      void deleteConfigFileName() { this->configFileName_ = nullptr;};
      inline string getConfigFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
      inline Configurations& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


      // configItemKey Field Functions 
      bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
      void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
      inline string getConfigItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
      inline Configurations& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


      // configItemValue Field Functions 
      bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
      void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
      inline string getConfigItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
      inline Configurations& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


    protected:
      shared_ptr<string> configFileName_ {};
      shared_ptr<string> configItemKey_ {};
      shared_ptr<string> configItemValue_ {};
    };

    virtual bool empty() const override { return this->configurations_ == nullptr; };
    // configurations Field Functions 
    bool hasConfigurations() const { return this->configurations_ != nullptr;};
    void deleteConfigurations() { this->configurations_ = nullptr;};
    inline const vector<ConfigurationOverrides::Configurations> & getConfigurations() const { DARABONBA_PTR_GET_CONST(configurations_, vector<ConfigurationOverrides::Configurations>) };
    inline vector<ConfigurationOverrides::Configurations> getConfigurations() { DARABONBA_PTR_GET(configurations_, vector<ConfigurationOverrides::Configurations>) };
    inline ConfigurationOverrides& setConfigurations(const vector<ConfigurationOverrides::Configurations> & configurations) { DARABONBA_PTR_SET_VALUE(configurations_, configurations) };
    inline ConfigurationOverrides& setConfigurations(vector<ConfigurationOverrides::Configurations> && configurations) { DARABONBA_PTR_SET_RVALUE(configurations_, configurations) };


  protected:
    shared_ptr<vector<ConfigurationOverrides::Configurations>> configurations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
