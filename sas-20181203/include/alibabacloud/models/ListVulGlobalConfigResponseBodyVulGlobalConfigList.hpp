// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVULGLOBALCONFIGRESPONSEBODYVULGLOBALCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTVULGLOBALCONFIGRESPONSEBODYVULGLOBALCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListVulGlobalConfigResponseBodyVulGlobalConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVulGlobalConfigResponseBodyVulGlobalConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListVulGlobalConfigResponseBodyVulGlobalConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
    };
    ListVulGlobalConfigResponseBodyVulGlobalConfigList() = default ;
    ListVulGlobalConfigResponseBodyVulGlobalConfigList(const ListVulGlobalConfigResponseBodyVulGlobalConfigList &) = default ;
    ListVulGlobalConfigResponseBodyVulGlobalConfigList(ListVulGlobalConfigResponseBodyVulGlobalConfigList &&) = default ;
    ListVulGlobalConfigResponseBodyVulGlobalConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVulGlobalConfigResponseBodyVulGlobalConfigList() = default ;
    ListVulGlobalConfigResponseBodyVulGlobalConfigList& operator=(const ListVulGlobalConfigResponseBodyVulGlobalConfigList &) = default ;
    ListVulGlobalConfigResponseBodyVulGlobalConfigList& operator=(ListVulGlobalConfigResponseBodyVulGlobalConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configKey_ != nullptr
        && this->configValue_ != nullptr; };
    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string configKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline ListVulGlobalConfigResponseBodyVulGlobalConfigList& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline ListVulGlobalConfigResponseBodyVulGlobalConfigList& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


  protected:
    // The key of the configuration item.
    std::shared_ptr<string> configKey_ = nullptr;
    // The value of the configuration item.
    std::shared_ptr<string> configValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
