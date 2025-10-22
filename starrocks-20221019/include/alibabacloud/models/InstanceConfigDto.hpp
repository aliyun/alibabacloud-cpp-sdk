// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTANCECONFIGDTO_HPP_
#define ALIBABACLOUD_MODELS_INSTANCECONFIGDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class InstanceConfigDto : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstanceConfigDto& obj) { 
      DARABONBA_PTR_TO_JSON(configKey, configKey_);
      DARABONBA_PTR_TO_JSON(configType, configType_);
      DARABONBA_PTR_TO_JSON(configValue, configValue_);
      DARABONBA_PTR_TO_JSON(nodeGroupId, nodeGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, InstanceConfigDto& obj) { 
      DARABONBA_PTR_FROM_JSON(configKey, configKey_);
      DARABONBA_PTR_FROM_JSON(configType, configType_);
      DARABONBA_PTR_FROM_JSON(configValue, configValue_);
      DARABONBA_PTR_FROM_JSON(nodeGroupId, nodeGroupId_);
    };
    InstanceConfigDto() = default ;
    InstanceConfigDto(const InstanceConfigDto &) = default ;
    InstanceConfigDto(InstanceConfigDto &&) = default ;
    InstanceConfigDto(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstanceConfigDto() = default ;
    InstanceConfigDto& operator=(const InstanceConfigDto &) = default ;
    InstanceConfigDto& operator=(InstanceConfigDto &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configKey_ == nullptr
        && return this->configType_ == nullptr && return this->configValue_ == nullptr && return this->nodeGroupId_ == nullptr; };
    // configKey Field Functions 
    bool hasConfigKey() const { return this->configKey_ != nullptr;};
    void deleteConfigKey() { this->configKey_ = nullptr;};
    inline string configKey() const { DARABONBA_PTR_GET_DEFAULT(configKey_, "") };
    inline InstanceConfigDto& setConfigKey(string configKey) { DARABONBA_PTR_SET_VALUE(configKey_, configKey) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline InstanceConfigDto& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline InstanceConfigDto& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline InstanceConfigDto& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


  protected:
    std::shared_ptr<string> configKey_ = nullptr;
    std::shared_ptr<string> configType_ = nullptr;
    std::shared_ptr<string> configValue_ = nullptr;
    std::shared_ptr<string> nodeGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
