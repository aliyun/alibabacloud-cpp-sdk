// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKDETAILRESPONSEBODY_HPP_
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
  class GetCheckDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssistInfo, assistInfo_);
      DARABONBA_PTR_TO_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RepairReset, repairReset_);
      DARABONBA_PTR_TO_JSON(RepairSetting, repairSetting_);
      DARABONBA_PTR_TO_JSON(RepairSupportType, repairSupportType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssistInfo, assistInfo_);
      DARABONBA_PTR_FROM_JSON(CustomConfigs, customConfigs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RepairReset, repairReset_);
      DARABONBA_PTR_FROM_JSON(RepairSetting, repairSetting_);
      DARABONBA_PTR_FROM_JSON(RepairSupportType, repairSupportType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
    };
    GetCheckDetailResponseBody() = default ;
    GetCheckDetailResponseBody(const GetCheckDetailResponseBody &) = default ;
    GetCheckDetailResponseBody(GetCheckDetailResponseBody &&) = default ;
    GetCheckDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckDetailResponseBody() = default ;
    GetCheckDetailResponseBody& operator=(const GetCheckDetailResponseBody &) = default ;
    GetCheckDetailResponseBody& operator=(GetCheckDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Solution : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Solution& obj) { 
        DARABONBA_PTR_TO_JSON(Link, link_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Solution& obj) { 
        DARABONBA_PTR_FROM_JSON(Link, link_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Solution() = default ;
      Solution(const Solution &) = default ;
      Solution(Solution &&) = default ;
      Solution(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Solution() = default ;
      Solution& operator=(const Solution &) = default ;
      Solution& operator=(Solution &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->link_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // link Field Functions 
      bool hasLink() const { return this->link_ != nullptr;};
      void deleteLink() { this->link_ = nullptr;};
      inline string getLink() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
      inline Solution& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Solution& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Solution& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The link to the solution to handle the risk item when the Type parameter is set to link.
      shared_ptr<string> link_ {};
      // The type of the solution to handle the risk item. Valid values:
      // 
      // *   **text**
      // *   **link**
      shared_ptr<string> type_ {};
      // The content of the solution to handle the risk item when the Type parameter is set to text.
      shared_ptr<string> value_ {};
    };

    class RepairSetting : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RepairSetting& obj) { 
        DARABONBA_PTR_TO_JSON(FlowStep, flowStep_);
        DARABONBA_PTR_TO_JSON(RepairConfigs, repairConfigs_);
        DARABONBA_PTR_TO_JSON(RepairReset, repairReset_);
        DARABONBA_PTR_TO_JSON(RepairSupport, repairSupport_);
        DARABONBA_PTR_TO_JSON(RepairSupportType, repairSupportType_);
      };
      friend void from_json(const Darabonba::Json& j, RepairSetting& obj) { 
        DARABONBA_PTR_FROM_JSON(FlowStep, flowStep_);
        DARABONBA_PTR_FROM_JSON(RepairConfigs, repairConfigs_);
        DARABONBA_PTR_FROM_JSON(RepairReset, repairReset_);
        DARABONBA_PTR_FROM_JSON(RepairSupport, repairSupport_);
        DARABONBA_PTR_FROM_JSON(RepairSupportType, repairSupportType_);
      };
      RepairSetting() = default ;
      RepairSetting(const RepairSetting &) = default ;
      RepairSetting(RepairSetting &&) = default ;
      RepairSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RepairSetting() = default ;
      RepairSetting& operator=(const RepairSetting &) = default ;
      RepairSetting& operator=(RepairSetting &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RepairConfigs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RepairConfigs& obj) { 
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
        friend void from_json(const Darabonba::Json& j, RepairConfigs& obj) { 
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
        RepairConfigs() = default ;
        RepairConfigs(const RepairConfigs &) = default ;
        RepairConfigs(RepairConfigs &&) = default ;
        RepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RepairConfigs() = default ;
        RepairConfigs& operator=(const RepairConfigs &) = default ;
        RepairConfigs& operator=(RepairConfigs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consoleParamType_ == nullptr
        && this->customFlag_ == nullptr && this->dataTransformType_ == nullptr && this->defaultValue_ == nullptr && this->emptyParamSwitch_ == nullptr && this->exclusiveName_ == nullptr
        && this->flowId_ == nullptr && this->name_ == nullptr && this->showName_ == nullptr && this->typeDefine_ == nullptr && this->usageType_ == nullptr
        && this->value_ == nullptr; };
        // consoleParamType Field Functions 
        bool hasConsoleParamType() const { return this->consoleParamType_ != nullptr;};
        void deleteConsoleParamType() { this->consoleParamType_ = nullptr;};
        inline string getConsoleParamType() const { DARABONBA_PTR_GET_DEFAULT(consoleParamType_, "") };
        inline RepairConfigs& setConsoleParamType(string consoleParamType) { DARABONBA_PTR_SET_VALUE(consoleParamType_, consoleParamType) };


        // customFlag Field Functions 
        bool hasCustomFlag() const { return this->customFlag_ != nullptr;};
        void deleteCustomFlag() { this->customFlag_ = nullptr;};
        inline bool getCustomFlag() const { DARABONBA_PTR_GET_DEFAULT(customFlag_, false) };
        inline RepairConfigs& setCustomFlag(bool customFlag) { DARABONBA_PTR_SET_VALUE(customFlag_, customFlag) };


        // dataTransformType Field Functions 
        bool hasDataTransformType() const { return this->dataTransformType_ != nullptr;};
        void deleteDataTransformType() { this->dataTransformType_ = nullptr;};
        inline string getDataTransformType() const { DARABONBA_PTR_GET_DEFAULT(dataTransformType_, "") };
        inline RepairConfigs& setDataTransformType(string dataTransformType) { DARABONBA_PTR_SET_VALUE(dataTransformType_, dataTransformType) };


        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline RepairConfigs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // emptyParamSwitch Field Functions 
        bool hasEmptyParamSwitch() const { return this->emptyParamSwitch_ != nullptr;};
        void deleteEmptyParamSwitch() { this->emptyParamSwitch_ = nullptr;};
        inline string getEmptyParamSwitch() const { DARABONBA_PTR_GET_DEFAULT(emptyParamSwitch_, "") };
        inline RepairConfigs& setEmptyParamSwitch(string emptyParamSwitch) { DARABONBA_PTR_SET_VALUE(emptyParamSwitch_, emptyParamSwitch) };


        // exclusiveName Field Functions 
        bool hasExclusiveName() const { return this->exclusiveName_ != nullptr;};
        void deleteExclusiveName() { this->exclusiveName_ = nullptr;};
        inline const vector<string> & getExclusiveName() const { DARABONBA_PTR_GET_CONST(exclusiveName_, vector<string>) };
        inline vector<string> getExclusiveName() { DARABONBA_PTR_GET(exclusiveName_, vector<string>) };
        inline RepairConfigs& setExclusiveName(const vector<string> & exclusiveName) { DARABONBA_PTR_SET_VALUE(exclusiveName_, exclusiveName) };
        inline RepairConfigs& setExclusiveName(vector<string> && exclusiveName) { DARABONBA_PTR_SET_RVALUE(exclusiveName_, exclusiveName) };


        // flowId Field Functions 
        bool hasFlowId() const { return this->flowId_ != nullptr;};
        void deleteFlowId() { this->flowId_ = nullptr;};
        inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
        inline RepairConfigs& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline RepairConfigs& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // typeDefine Field Functions 
        bool hasTypeDefine() const { return this->typeDefine_ != nullptr;};
        void deleteTypeDefine() { this->typeDefine_ = nullptr;};
        inline string getTypeDefine() const { DARABONBA_PTR_GET_DEFAULT(typeDefine_, "") };
        inline RepairConfigs& setTypeDefine(string typeDefine) { DARABONBA_PTR_SET_VALUE(typeDefine_, typeDefine) };


        // usageType Field Functions 
        bool hasUsageType() const { return this->usageType_ != nullptr;};
        void deleteUsageType() { this->usageType_ = nullptr;};
        inline string getUsageType() const { DARABONBA_PTR_GET_DEFAULT(usageType_, "") };
        inline RepairConfigs& setUsageType(string usageType) { DARABONBA_PTR_SET_VALUE(usageType_, usageType) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline RepairConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Indicates whether the value of the parameter is displayed in the console. Valid values:
        // 
        // *   0: The historical value and real-time value of the parameter are displayed.
        // *   1: Only the real-time value of the parameter is displayed.
        // *   2: The value of the parameter is not displayed in the console.
        shared_ptr<string> consoleParamType_ {};
        // Indicates whether custom configurations of the fixing parameters are supported. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> customFlag_ {};
        // Indicates whether data needs to be encrypted during transmission. Valid values:
        // 
        // *   0: Data does not need to be encrypted during transmission.
        // *   1: Data needs to be encrypted during transmission.
        // *   2: Data needs to be encrypted during transmission, and the user must perform secondary confirmation.
        shared_ptr<string> dataTransformType_ {};
        // The default value of the parameter. The value is a string.
        shared_ptr<string> defaultValue_ {};
        // Indicates whether this parameter is specified by the user. Valid values:
        // 
        // *   0: The default value is used.
        // *   1: This parameter is required, and no default value is specified.
        // *   2: This parameter can be left empty.
        shared_ptr<string> emptyParamSwitch_ {};
        // The fixing parameters that are not compatible with this parameter.
        shared_ptr<vector<string>> exclusiveName_ {};
        // The ID of the fixing workflow.
        shared_ptr<string> flowId_ {};
        // The name of the parameter. The name must be unique within the check item.
        shared_ptr<string> name_ {};
        // The display name of the parameter.
        shared_ptr<string> showName_ {};
        // The type of the parameter. The value is a JSON string.
        shared_ptr<string> typeDefine_ {};
        // The type of the parameter. Valid values:
        // 
        // *   1: asset parameters that are required during fixing.
        // *   2: user-provided parameters that are required during fixing.
        // *   3: parameters that are temporarily provided by the user.
        shared_ptr<string> usageType_ {};
        // The user-configured value of the parameter. The value is a string.
        shared_ptr<string> value_ {};
      };

      class FlowStep : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FlowStep& obj) { 
          DARABONBA_PTR_TO_JSON(ShowText, showText_);
          DARABONBA_PTR_TO_JSON(Step, step_);
        };
        friend void from_json(const Darabonba::Json& j, FlowStep& obj) { 
          DARABONBA_PTR_FROM_JSON(ShowText, showText_);
          DARABONBA_PTR_FROM_JSON(Step, step_);
        };
        FlowStep() = default ;
        FlowStep(const FlowStep &) = default ;
        FlowStep(FlowStep &&) = default ;
        FlowStep(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FlowStep() = default ;
        FlowStep& operator=(const FlowStep &) = default ;
        FlowStep& operator=(FlowStep &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->showText_ == nullptr
        && this->step_ == nullptr; };
        // showText Field Functions 
        bool hasShowText() const { return this->showText_ != nullptr;};
        void deleteShowText() { this->showText_ = nullptr;};
        inline string getShowText() const { DARABONBA_PTR_GET_DEFAULT(showText_, "") };
        inline FlowStep& setShowText(string showText) { DARABONBA_PTR_SET_VALUE(showText_, showText) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
        inline FlowStep& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


      protected:
        // The text description of the fixing step.
        shared_ptr<string> showText_ {};
        // The sequence number of the fixing step.
        shared_ptr<string> step_ {};
      };

      virtual bool empty() const override { return this->flowStep_ == nullptr
        && this->repairConfigs_ == nullptr && this->repairReset_ == nullptr && this->repairSupport_ == nullptr && this->repairSupportType_ == nullptr; };
      // flowStep Field Functions 
      bool hasFlowStep() const { return this->flowStep_ != nullptr;};
      void deleteFlowStep() { this->flowStep_ = nullptr;};
      inline const vector<RepairSetting::FlowStep> & getFlowStep() const { DARABONBA_PTR_GET_CONST(flowStep_, vector<RepairSetting::FlowStep>) };
      inline vector<RepairSetting::FlowStep> getFlowStep() { DARABONBA_PTR_GET(flowStep_, vector<RepairSetting::FlowStep>) };
      inline RepairSetting& setFlowStep(const vector<RepairSetting::FlowStep> & flowStep) { DARABONBA_PTR_SET_VALUE(flowStep_, flowStep) };
      inline RepairSetting& setFlowStep(vector<RepairSetting::FlowStep> && flowStep) { DARABONBA_PTR_SET_RVALUE(flowStep_, flowStep) };


      // repairConfigs Field Functions 
      bool hasRepairConfigs() const { return this->repairConfigs_ != nullptr;};
      void deleteRepairConfigs() { this->repairConfigs_ = nullptr;};
      inline const vector<RepairSetting::RepairConfigs> & getRepairConfigs() const { DARABONBA_PTR_GET_CONST(repairConfigs_, vector<RepairSetting::RepairConfigs>) };
      inline vector<RepairSetting::RepairConfigs> getRepairConfigs() { DARABONBA_PTR_GET(repairConfigs_, vector<RepairSetting::RepairConfigs>) };
      inline RepairSetting& setRepairConfigs(const vector<RepairSetting::RepairConfigs> & repairConfigs) { DARABONBA_PTR_SET_VALUE(repairConfigs_, repairConfigs) };
      inline RepairSetting& setRepairConfigs(vector<RepairSetting::RepairConfigs> && repairConfigs) { DARABONBA_PTR_SET_RVALUE(repairConfigs_, repairConfigs) };


      // repairReset Field Functions 
      bool hasRepairReset() const { return this->repairReset_ != nullptr;};
      void deleteRepairReset() { this->repairReset_ = nullptr;};
      inline bool getRepairReset() const { DARABONBA_PTR_GET_DEFAULT(repairReset_, false) };
      inline RepairSetting& setRepairReset(bool repairReset) { DARABONBA_PTR_SET_VALUE(repairReset_, repairReset) };


      // repairSupport Field Functions 
      bool hasRepairSupport() const { return this->repairSupport_ != nullptr;};
      void deleteRepairSupport() { this->repairSupport_ = nullptr;};
      inline bool getRepairSupport() const { DARABONBA_PTR_GET_DEFAULT(repairSupport_, false) };
      inline RepairSetting& setRepairSupport(bool repairSupport) { DARABONBA_PTR_SET_VALUE(repairSupport_, repairSupport) };


      // repairSupportType Field Functions 
      bool hasRepairSupportType() const { return this->repairSupportType_ != nullptr;};
      void deleteRepairSupportType() { this->repairSupportType_ = nullptr;};
      inline int32_t getRepairSupportType() const { DARABONBA_PTR_GET_DEFAULT(repairSupportType_, 0) };
      inline RepairSetting& setRepairSupportType(int32_t repairSupportType) { DARABONBA_PTR_SET_VALUE(repairSupportType_, repairSupportType) };


    protected:
      // The description of the fixing workflow.
      shared_ptr<vector<RepairSetting::FlowStep>> flowStep_ {};
      // The configurations of the fixing parameters.
      shared_ptr<vector<RepairSetting::RepairConfigs>> repairConfigs_ {};
      // Indicates whether a restart is required after the fixing. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> repairReset_ {};
      // Indicates whether the check item supports the quick fix feature. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> repairSupport_ {};
      // The fixing type that is supported. Valid values:
      // 
      // *   **1**: The fixing and rollback are supported.
      // *   **2**: The fixing is supported, but the rollback is not supported.
      // *   **3**: The fixing must be performed on a third-party platform.
      shared_ptr<int32_t> repairSupportType_ {};
    };

    class Description : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Description& obj) { 
        DARABONBA_PTR_TO_JSON(Link, link_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Description& obj) { 
        DARABONBA_PTR_FROM_JSON(Link, link_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Description() = default ;
      Description(const Description &) = default ;
      Description(Description &&) = default ;
      Description(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Description() = default ;
      Description& operator=(const Description &) = default ;
      Description& operator=(Description &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->link_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // link Field Functions 
      bool hasLink() const { return this->link_ != nullptr;};
      void deleteLink() { this->link_ = nullptr;};
      inline string getLink() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
      inline Description& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Description& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Description& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The link to the description of the check item.
      shared_ptr<string> link_ {};
      // The description type of the check item. The value is fixed as text.
      shared_ptr<string> type_ {};
      // The content in the description of the check item.
      shared_ptr<string> value_ {};
    };

    class CustomConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CustomConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ShowName, showName_);
        DARABONBA_PTR_TO_JSON(TypeDefine, typeDefine_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, CustomConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ShowName, showName_);
        DARABONBA_PTR_FROM_JSON(TypeDefine, typeDefine_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      CustomConfigs() = default ;
      CustomConfigs(const CustomConfigs &) = default ;
      CustomConfigs(CustomConfigs &&) = default ;
      CustomConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CustomConfigs() = default ;
      CustomConfigs& operator=(const CustomConfigs &) = default ;
      CustomConfigs& operator=(CustomConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->name_ == nullptr && this->showName_ == nullptr && this->typeDefine_ == nullptr && this->value_ == nullptr; };
      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
      inline CustomConfigs& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CustomConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // showName Field Functions 
      bool hasShowName() const { return this->showName_ != nullptr;};
      void deleteShowName() { this->showName_ = nullptr;};
      inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
      inline CustomConfigs& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


      // typeDefine Field Functions 
      bool hasTypeDefine() const { return this->typeDefine_ != nullptr;};
      void deleteTypeDefine() { this->typeDefine_ = nullptr;};
      inline string getTypeDefine() const { DARABONBA_PTR_GET_DEFAULT(typeDefine_, "") };
      inline CustomConfigs& setTypeDefine(string typeDefine) { DARABONBA_PTR_SET_VALUE(typeDefine_, typeDefine) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline CustomConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The default value of the custom configuration item. The value is a string.
      shared_ptr<string> defaultValue_ {};
      // The name of the custom configuration item, which is unique in a check item.
      shared_ptr<string> name_ {};
      // The display name of the custom configuration item for internationalization.
      shared_ptr<string> showName_ {};
      // The type of the custom configuration item. The value is a JSON string.
      shared_ptr<string> typeDefine_ {};
      // The value of the custom configuration item. The value is a string.
      shared_ptr<string> value_ {};
    };

    class AssistInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssistInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Link, link_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, AssistInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Link, link_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      AssistInfo() = default ;
      AssistInfo(const AssistInfo &) = default ;
      AssistInfo(AssistInfo &&) = default ;
      AssistInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssistInfo() = default ;
      AssistInfo& operator=(const AssistInfo &) = default ;
      AssistInfo& operator=(AssistInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->link_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
      // link Field Functions 
      bool hasLink() const { return this->link_ != nullptr;};
      void deleteLink() { this->link_ = nullptr;};
      inline string getLink() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
      inline AssistInfo& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline AssistInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline AssistInfo& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The link to the help information about the risk item when the Type parameter is set to link.
      shared_ptr<string> link_ {};
      // The type of the help information about the risk item. Valid values:
      // 
      // *   **text**
      // *   **link**
      shared_ptr<string> type_ {};
      // The content in the help information about the risk item when the Type parameter is set to text.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->assistInfo_ == nullptr
        && this->customConfigs_ == nullptr && this->description_ == nullptr && this->repairReset_ == nullptr && this->repairSetting_ == nullptr && this->repairSupportType_ == nullptr
        && this->requestId_ == nullptr && this->solution_ == nullptr; };
    // assistInfo Field Functions 
    bool hasAssistInfo() const { return this->assistInfo_ != nullptr;};
    void deleteAssistInfo() { this->assistInfo_ = nullptr;};
    inline const GetCheckDetailResponseBody::AssistInfo & getAssistInfo() const { DARABONBA_PTR_GET_CONST(assistInfo_, GetCheckDetailResponseBody::AssistInfo) };
    inline GetCheckDetailResponseBody::AssistInfo getAssistInfo() { DARABONBA_PTR_GET(assistInfo_, GetCheckDetailResponseBody::AssistInfo) };
    inline GetCheckDetailResponseBody& setAssistInfo(const GetCheckDetailResponseBody::AssistInfo & assistInfo) { DARABONBA_PTR_SET_VALUE(assistInfo_, assistInfo) };
    inline GetCheckDetailResponseBody& setAssistInfo(GetCheckDetailResponseBody::AssistInfo && assistInfo) { DARABONBA_PTR_SET_RVALUE(assistInfo_, assistInfo) };


    // customConfigs Field Functions 
    bool hasCustomConfigs() const { return this->customConfigs_ != nullptr;};
    void deleteCustomConfigs() { this->customConfigs_ = nullptr;};
    inline const vector<GetCheckDetailResponseBody::CustomConfigs> & getCustomConfigs() const { DARABONBA_PTR_GET_CONST(customConfigs_, vector<GetCheckDetailResponseBody::CustomConfigs>) };
    inline vector<GetCheckDetailResponseBody::CustomConfigs> getCustomConfigs() { DARABONBA_PTR_GET(customConfigs_, vector<GetCheckDetailResponseBody::CustomConfigs>) };
    inline GetCheckDetailResponseBody& setCustomConfigs(const vector<GetCheckDetailResponseBody::CustomConfigs> & customConfigs) { DARABONBA_PTR_SET_VALUE(customConfigs_, customConfigs) };
    inline GetCheckDetailResponseBody& setCustomConfigs(vector<GetCheckDetailResponseBody::CustomConfigs> && customConfigs) { DARABONBA_PTR_SET_RVALUE(customConfigs_, customConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline const GetCheckDetailResponseBody::Description & getDescription() const { DARABONBA_PTR_GET_CONST(description_, GetCheckDetailResponseBody::Description) };
    inline GetCheckDetailResponseBody::Description getDescription() { DARABONBA_PTR_GET(description_, GetCheckDetailResponseBody::Description) };
    inline GetCheckDetailResponseBody& setDescription(const GetCheckDetailResponseBody::Description & description) { DARABONBA_PTR_SET_VALUE(description_, description) };
    inline GetCheckDetailResponseBody& setDescription(GetCheckDetailResponseBody::Description && description) { DARABONBA_PTR_SET_RVALUE(description_, description) };


    // repairReset Field Functions 
    bool hasRepairReset() const { return this->repairReset_ != nullptr;};
    void deleteRepairReset() { this->repairReset_ = nullptr;};
    inline string getRepairReset() const { DARABONBA_PTR_GET_DEFAULT(repairReset_, "") };
    inline GetCheckDetailResponseBody& setRepairReset(string repairReset) { DARABONBA_PTR_SET_VALUE(repairReset_, repairReset) };


    // repairSetting Field Functions 
    bool hasRepairSetting() const { return this->repairSetting_ != nullptr;};
    void deleteRepairSetting() { this->repairSetting_ = nullptr;};
    inline const GetCheckDetailResponseBody::RepairSetting & getRepairSetting() const { DARABONBA_PTR_GET_CONST(repairSetting_, GetCheckDetailResponseBody::RepairSetting) };
    inline GetCheckDetailResponseBody::RepairSetting getRepairSetting() { DARABONBA_PTR_GET(repairSetting_, GetCheckDetailResponseBody::RepairSetting) };
    inline GetCheckDetailResponseBody& setRepairSetting(const GetCheckDetailResponseBody::RepairSetting & repairSetting) { DARABONBA_PTR_SET_VALUE(repairSetting_, repairSetting) };
    inline GetCheckDetailResponseBody& setRepairSetting(GetCheckDetailResponseBody::RepairSetting && repairSetting) { DARABONBA_PTR_SET_RVALUE(repairSetting_, repairSetting) };


    // repairSupportType Field Functions 
    bool hasRepairSupportType() const { return this->repairSupportType_ != nullptr;};
    void deleteRepairSupportType() { this->repairSupportType_ = nullptr;};
    inline int32_t getRepairSupportType() const { DARABONBA_PTR_GET_DEFAULT(repairSupportType_, 0) };
    inline GetCheckDetailResponseBody& setRepairSupportType(int32_t repairSupportType) { DARABONBA_PTR_SET_VALUE(repairSupportType_, repairSupportType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline const GetCheckDetailResponseBody::Solution & getSolution() const { DARABONBA_PTR_GET_CONST(solution_, GetCheckDetailResponseBody::Solution) };
    inline GetCheckDetailResponseBody::Solution getSolution() { DARABONBA_PTR_GET(solution_, GetCheckDetailResponseBody::Solution) };
    inline GetCheckDetailResponseBody& setSolution(const GetCheckDetailResponseBody::Solution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
    inline GetCheckDetailResponseBody& setSolution(GetCheckDetailResponseBody::Solution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


  protected:
    // The help information about the check item.
    shared_ptr<GetCheckDetailResponseBody::AssistInfo> assistInfo_ {};
    // The custom configuration items of the check item.
    shared_ptr<vector<GetCheckDetailResponseBody::CustomConfigs>> customConfigs_ {};
    // The description of the check item.
    shared_ptr<GetCheckDetailResponseBody::Description> description_ {};
    // >  This parameter is deprecated.
    shared_ptr<string> repairReset_ {};
    // The fixing parameter configurations of the check item.
    shared_ptr<GetCheckDetailResponseBody::RepairSetting> repairSetting_ {};
    // >  This parameter is deprecated.
    shared_ptr<int32_t> repairSupportType_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The solution to handle the risk item.
    shared_ptr<GetCheckDetailResponseBody::Solution> solution_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
