// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODULECONFIGRESPONSEBODYMODULECONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODULECONFIGRESPONSEBODYMODULECONFIGLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeModuleConfigResponseBodyModuleConfigListItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeModuleConfigResponseBodyModuleConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModuleConfigResponseBodyModuleConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(ModuleName, moduleName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModuleConfigResponseBodyModuleConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(ModuleName, moduleName_);
    };
    DescribeModuleConfigResponseBodyModuleConfigList() = default ;
    DescribeModuleConfigResponseBodyModuleConfigList(const DescribeModuleConfigResponseBodyModuleConfigList &) = default ;
    DescribeModuleConfigResponseBodyModuleConfigList(DescribeModuleConfigResponseBodyModuleConfigList &&) = default ;
    DescribeModuleConfigResponseBodyModuleConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModuleConfigResponseBodyModuleConfigList() = default ;
    DescribeModuleConfigResponseBodyModuleConfigList& operator=(const DescribeModuleConfigResponseBodyModuleConfigList &) = default ;
    DescribeModuleConfigResponseBodyModuleConfigList& operator=(DescribeModuleConfigResponseBodyModuleConfigList &&) = default ;
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
    inline DescribeModuleConfigResponseBodyModuleConfigList& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<Models::DescribeModuleConfigResponseBodyModuleConfigListItems> & items() const { DARABONBA_PTR_GET_CONST(items_, vector<Models::DescribeModuleConfigResponseBodyModuleConfigListItems>) };
    inline vector<Models::DescribeModuleConfigResponseBodyModuleConfigListItems> items() { DARABONBA_PTR_GET(items_, vector<Models::DescribeModuleConfigResponseBodyModuleConfigListItems>) };
    inline DescribeModuleConfigResponseBodyModuleConfigList& setItems(const vector<Models::DescribeModuleConfigResponseBodyModuleConfigListItems> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeModuleConfigResponseBodyModuleConfigList& setItems(vector<Models::DescribeModuleConfigResponseBodyModuleConfigListItems> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // moduleName Field Functions 
    bool hasModuleName() const { return this->moduleName_ != nullptr;};
    void deleteModuleName() { this->moduleName_ = nullptr;};
    inline string moduleName() const { DARABONBA_PTR_GET_DEFAULT(moduleName_, "") };
    inline DescribeModuleConfigResponseBodyModuleConfigList& setModuleName(string moduleName) { DARABONBA_PTR_SET_VALUE(moduleName_, moduleName) };


  protected:
    // The name of the configuration.
    std::shared_ptr<string> configName_ = nullptr;
    // An array that consists of the configuration items.
    std::shared_ptr<vector<Models::DescribeModuleConfigResponseBodyModuleConfigListItems>> items_ = nullptr;
    // The name of the module.
    std::shared_ptr<string> moduleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
