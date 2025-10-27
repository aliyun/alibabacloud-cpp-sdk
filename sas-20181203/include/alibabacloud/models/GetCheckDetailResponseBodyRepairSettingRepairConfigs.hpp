// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODYREPAIRSETTINGREPAIRCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODYREPAIRSETTINGREPAIRCONFIGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckDetailResponseBodyRepairSettingRepairConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckDetailResponseBodyRepairSettingRepairConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleParamType, consoleParamType_);
      DARABONBA_PTR_TO_JSON(CustomFlag, customFlag_);
      DARABONBA_PTR_TO_JSON(DataTransformType, dataTransformType_);
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(EmptyParamSwitch, emptyParamSwitch_);
      DARABONBA_PTR_TO_JSON(ExclusiveName, exclusiveName_);
      DARABONBA_PTR_TO_JSON(FlowId, flowId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ShowName, showName_);
      DARABONBA_PTR_TO_JSON(TypeDefine, typeDefine_);
      DARABONBA_PTR_TO_JSON(UsageType, usageType_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckDetailResponseBodyRepairSettingRepairConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleParamType, consoleParamType_);
      DARABONBA_PTR_FROM_JSON(CustomFlag, customFlag_);
      DARABONBA_PTR_FROM_JSON(DataTransformType, dataTransformType_);
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(EmptyParamSwitch, emptyParamSwitch_);
      DARABONBA_PTR_FROM_JSON(ExclusiveName, exclusiveName_);
      DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ShowName, showName_);
      DARABONBA_PTR_FROM_JSON(TypeDefine, typeDefine_);
      DARABONBA_PTR_FROM_JSON(UsageType, usageType_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetCheckDetailResponseBodyRepairSettingRepairConfigs() = default ;
    GetCheckDetailResponseBodyRepairSettingRepairConfigs(const GetCheckDetailResponseBodyRepairSettingRepairConfigs &) = default ;
    GetCheckDetailResponseBodyRepairSettingRepairConfigs(GetCheckDetailResponseBodyRepairSettingRepairConfigs &&) = default ;
    GetCheckDetailResponseBodyRepairSettingRepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckDetailResponseBodyRepairSettingRepairConfigs() = default ;
    GetCheckDetailResponseBodyRepairSettingRepairConfigs& operator=(const GetCheckDetailResponseBodyRepairSettingRepairConfigs &) = default ;
    GetCheckDetailResponseBodyRepairSettingRepairConfigs& operator=(GetCheckDetailResponseBodyRepairSettingRepairConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleParamType_ == nullptr
        && return this->customFlag_ == nullptr && return this->dataTransformType_ == nullptr && return this->defaultValue_ == nullptr && return this->emptyParamSwitch_ == nullptr && return this->exclusiveName_ == nullptr
        && return this->flowId_ == nullptr && return this->name_ == nullptr && return this->showName_ == nullptr && return this->typeDefine_ == nullptr && return this->usageType_ == nullptr
        && return this->value_ == nullptr; };
    // consoleParamType Field Functions 
    bool hasConsoleParamType() const { return this->consoleParamType_ != nullptr;};
    void deleteConsoleParamType() { this->consoleParamType_ = nullptr;};
    inline string consoleParamType() const { DARABONBA_PTR_GET_DEFAULT(consoleParamType_, "") };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setConsoleParamType(string consoleParamType) { DARABONBA_PTR_SET_VALUE(consoleParamType_, consoleParamType) };


    // customFlag Field Functions 
    bool hasCustomFlag() const { return this->customFlag_ != nullptr;};
    void deleteCustomFlag() { this->customFlag_ = nullptr;};
    inline bool customFlag() const { DARABONBA_PTR_GET_DEFAULT(customFlag_, false) };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setCustomFlag(bool customFlag) { DARABONBA_PTR_SET_VALUE(customFlag_, customFlag) };


    // dataTransformType Field Functions 
    bool hasDataTransformType() const { return this->dataTransformType_ != nullptr;};
    void deleteDataTransformType() { this->dataTransformType_ = nullptr;};
    inline string dataTransformType() const { DARABONBA_PTR_GET_DEFAULT(dataTransformType_, "") };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setDataTransformType(string dataTransformType) { DARABONBA_PTR_SET_VALUE(dataTransformType_, dataTransformType) };


    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // emptyParamSwitch Field Functions 
    bool hasEmptyParamSwitch() const { return this->emptyParamSwitch_ != nullptr;};
    void deleteEmptyParamSwitch() { this->emptyParamSwitch_ = nullptr;};
    inline string emptyParamSwitch() const { DARABONBA_PTR_GET_DEFAULT(emptyParamSwitch_, "") };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setEmptyParamSwitch(string emptyParamSwitch) { DARABONBA_PTR_SET_VALUE(emptyParamSwitch_, emptyParamSwitch) };


    // exclusiveName Field Functions 
    bool hasExclusiveName() const { return this->exclusiveName_ != nullptr;};
    void deleteExclusiveName() { this->exclusiveName_ = nullptr;};
    inline const vector<string> & exclusiveName() const { DARABONBA_PTR_GET_CONST(exclusiveName_, vector<string>) };
    inline vector<string> exclusiveName() { DARABONBA_PTR_GET(exclusiveName_, vector<string>) };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setExclusiveName(const vector<string> & exclusiveName) { DARABONBA_PTR_SET_VALUE(exclusiveName_, exclusiveName) };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setExclusiveName(vector<string> && exclusiveName) { DARABONBA_PTR_SET_RVALUE(exclusiveName_, exclusiveName) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string flowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // showName Field Functions 
    bool hasShowName() const { return this->showName_ != nullptr;};
    void deleteShowName() { this->showName_ = nullptr;};
    inline string showName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


    // typeDefine Field Functions 
    bool hasTypeDefine() const { return this->typeDefine_ != nullptr;};
    void deleteTypeDefine() { this->typeDefine_ = nullptr;};
    inline string typeDefine() const { DARABONBA_PTR_GET_DEFAULT(typeDefine_, "") };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setTypeDefine(string typeDefine) { DARABONBA_PTR_SET_VALUE(typeDefine_, typeDefine) };


    // usageType Field Functions 
    bool hasUsageType() const { return this->usageType_ != nullptr;};
    void deleteUsageType() { this->usageType_ = nullptr;};
    inline string usageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetCheckDetailResponseBodyRepairSettingRepairConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Indicates whether the value of the parameter is displayed in the console. Valid values:
    // 
    // *   0: The historical value and real-time value of the parameter are displayed.
    // *   1: Only the real-time value of the parameter is displayed.
    // *   2: The value of the parameter is not displayed in the console.
    std::shared_ptr<string> consoleParamType_ = nullptr;
    // Indicates whether custom configurations of the fixing parameters are supported. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> customFlag_ = nullptr;
    // Indicates whether data needs to be encrypted during transmission. Valid values:
    // 
    // *   0: Data does not need to be encrypted during transmission.
    // *   1: Data needs to be encrypted during transmission.
    // *   2: Data needs to be encrypted during transmission, and the user must perform secondary confirmation.
    std::shared_ptr<string> dataTransformType_ = nullptr;
    // The default value of the parameter. The value is a string.
    std::shared_ptr<string> defaultValue_ = nullptr;
    // Indicates whether this parameter is specified by the user. Valid values:
    // 
    // *   0: The default value is used.
    // *   1: This parameter is required, and no default value is specified.
    // *   2: This parameter can be left empty.
    std::shared_ptr<string> emptyParamSwitch_ = nullptr;
    // The fixing parameters that are not compatible with this parameter.
    std::shared_ptr<vector<string>> exclusiveName_ = nullptr;
    // The ID of the fixing workflow.
    std::shared_ptr<string> flowId_ = nullptr;
    // The name of the parameter. The name must be unique within the check item.
    std::shared_ptr<string> name_ = nullptr;
    // The display name of the parameter.
    std::shared_ptr<string> showName_ = nullptr;
    // The type of the parameter. The value is a JSON string.
    std::shared_ptr<string> typeDefine_ = nullptr;
    // The type of the parameter. Valid values:
    // 
    // *   1: asset parameters that are required during fixing.
    // *   2: user-provided parameters that are required during fixing.
    // *   3: parameters that are temporarily provided by the user.
    std::shared_ptr<string> usageType_ = nullptr;
    // The user-configured value of the parameter. The value is a string.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
