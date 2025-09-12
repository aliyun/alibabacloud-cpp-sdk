// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLINDORMENGINECONFIGRESPONSEBODYENGINECONFIGSCONFIGFILESCONFIGITEMS_HPP_
#define ALIBABACLOUD_MODELS_GETLINDORMENGINECONFIGRESPONSEBODYENGINECONFIGSCONFIGFILESCONFIGITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hitsdb20200615
{
namespace Models
{
  class GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_TO_JSON(ConfigItemValue, configItemValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigItemKey, configItemKey_);
      DARABONBA_PTR_FROM_JSON(ConfigItemValue, configItemValue_);
    };
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems() = default ;
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems(const GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems &) = default ;
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems(GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems &&) = default ;
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems() = default ;
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems& operator=(const GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems &) = default ;
    GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems& operator=(GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configItemKey_ != nullptr
        && this->configItemValue_ != nullptr; };
    // configItemKey Field Functions 
    bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
    void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
    inline string configItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
    inline GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


    // configItemValue Field Functions 
    bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
    void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
    inline string configItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
    inline GetLindormEngineConfigResponseBodyEngineConfigsConfigFilesConfigItems& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


  protected:
    std::shared_ptr<string> configItemKey_ = nullptr;
    std::shared_ptr<string> configItemValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hitsdb20200615
#endif
