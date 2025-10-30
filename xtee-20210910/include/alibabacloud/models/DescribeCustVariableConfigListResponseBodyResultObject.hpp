// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLECONFIGLISTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTVARIABLECONFIGLISTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeCustVariableConfigListResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustVariableConfigListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(configKey, configKey_);
      DARABONBA_PTR_TO_JSON(configValue, configValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustVariableConfigListResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(configKey, configKey_);
      DARABONBA_PTR_FROM_JSON(configValue, configValue_);
    };
    DescribeCustVariableConfigListResponseBodyResultObject() = default ;
    DescribeCustVariableConfigListResponseBodyResultObject(const DescribeCustVariableConfigListResponseBodyResultObject &) = default ;
    DescribeCustVariableConfigListResponseBodyResultObject(DescribeCustVariableConfigListResponseBodyResultObject &&) = default ;
    DescribeCustVariableConfigListResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustVariableConfigListResponseBodyResultObject() = default ;
    DescribeCustVariableConfigListResponseBodyResultObject& operator=(const DescribeCustVariableConfigListResponseBodyResultObject &) = default ;
    DescribeCustVariableConfigListResponseBodyResultObject& operator=(DescribeCustVariableConfigListResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configKey_ == nullptr
        && return this->configValue_ == nullptr; };
    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string configKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline DescribeCustVariableConfigListResponseBodyResultObject& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline DescribeCustVariableConfigListResponseBodyResultObject& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


  protected:
    // Configuration key
    std::shared_ptr<string> configKey_ = nullptr;
    // Configuration value
    std::shared_ptr<string> configValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
