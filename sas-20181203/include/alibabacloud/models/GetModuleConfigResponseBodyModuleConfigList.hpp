// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODULECONFIGRESPONSEBODYMODULECONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMODULECONFIGRESPONSEBODYMODULECONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetModuleConfigResponseBodyModuleConfigListItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetModuleConfigResponseBodyModuleConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModuleConfigResponseBodyModuleConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, GetModuleConfigResponseBodyModuleConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    GetModuleConfigResponseBodyModuleConfigList() = default ;
    GetModuleConfigResponseBodyModuleConfigList(const GetModuleConfigResponseBodyModuleConfigList &) = default ;
    GetModuleConfigResponseBodyModuleConfigList(GetModuleConfigResponseBodyModuleConfigList &&) = default ;
    GetModuleConfigResponseBodyModuleConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModuleConfigResponseBodyModuleConfigList() = default ;
    GetModuleConfigResponseBodyModuleConfigList& operator=(const GetModuleConfigResponseBodyModuleConfigList &) = default ;
    GetModuleConfigResponseBodyModuleConfigList& operator=(GetModuleConfigResponseBodyModuleConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configName_ == nullptr
        && return this->items_ == nullptr && return this->moduleName_ == nullptr; };
    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string configName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline GetModuleConfigResponseBodyModuleConfigList& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::GetModuleConfigResponseBodyModuleConfigListItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::GetModuleConfigResponseBodyModuleConfigListItems>) };
    inline vector<Models::GetModuleConfigResponseBodyModuleConfigListItems> items() { DARABONBA_PTR_GET(items_, vector<Models::GetModuleConfigResponseBodyModuleConfigListItems>) };
    inline GetModuleConfigResponseBodyModuleConfigList& setItems(const vector<Models::GetModuleConfigResponseBodyModuleConfigListItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline GetModuleConfigResponseBodyModuleConfigList& setItems(vector<Models::GetModuleConfigResponseBodyModuleConfigListItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline GetModuleConfigResponseBodyModuleConfigList& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    // The name of the configuration.
    std::shared_ptr<string> configName_ = nullptr;
    // An array that consists of the configuration items.
    std::shared_ptr<vector<Models::GetModuleConfigResponseBodyModuleConfigListItems>> items_ = nullptr;
    // The name of the module.
    std::shared_ptr<string> moduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
