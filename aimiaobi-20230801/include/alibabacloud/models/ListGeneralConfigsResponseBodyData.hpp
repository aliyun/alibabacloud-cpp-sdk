// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGENERALCONFIGSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTGENERALCONFIGSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListGeneralConfigsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGeneralConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigDesc, configDesc_);
      DARABONBA_PTR_TO_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(ConfigValueType, configValueType_);
    };
    friend void from_json(const Darabonba::Json& j, ListGeneralConfigsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigDesc, configDesc_);
      DARABONBA_PTR_FROM_JSON(ConfigKey, configKey_);
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(ConfigValueType, configValueType_);
    };
    ListGeneralConfigsResponseBodyData() = default ;
    ListGeneralConfigsResponseBodyData(const ListGeneralConfigsResponseBodyData &) = default ;
    ListGeneralConfigsResponseBodyData(ListGeneralConfigsResponseBodyData &&) = default ;
    ListGeneralConfigsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGeneralConfigsResponseBodyData() = default ;
    ListGeneralConfigsResponseBodyData& operator=(const ListGeneralConfigsResponseBodyData &) = default ;
    ListGeneralConfigsResponseBodyData& operator=(ListGeneralConfigsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configDesc_ == nullptr
        && return this->configKey_ == nullptr && return this->configValue_ == nullptr && return this->configValueType_ == nullptr; };
    // configDesc Field Functions 
    bool hasConfigDesc() const { return this->configDesc_ != nullptr;};
    void deleteConfigDesc() { this->configDesc_ = nullptr;};
    inline string configDesc() const { DARABONBA_PTR_GET_DEFAULT(configDesc_, "") };
    inline ListGeneralConfigsResponseBodyData& setConfigDesc(string configDesc) { DARABONBA_PTR_SET_VALUE(configDesc_, configDesc) };


    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string configKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline ListGeneralConfigsResponseBodyData& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline ListGeneralConfigsResponseBodyData& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // configValueType Field Functions 
    bool hasConfigValueType() const { return this->configValueType_ != nullptr;};
    void deleteConfigValueType() { this->configValueType_ = nullptr;};
    inline string configValueType() const { DARABONBA_PTR_GET_DEFAULT(configValueType_, "") };
    inline ListGeneralConfigsResponseBodyData& setConfigValueType(string configValueType) { DARABONBA_PTR_SET_VALUE(configValueType_, configValueType) };


  protected:
    std::shared_ptr<string> configDesc_ = nullptr;
    std::shared_ptr<string> configKey_ = nullptr;
    std::shared_ptr<string> configValue_ = nullptr;
    std::shared_ptr<string> configValueType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
