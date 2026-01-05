// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetFileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetFileResponseBody() = default ;
    GetFileResponseBody(const GetFileResponseBody &) = default ;
    GetFileResponseBody(GetFileResponseBody &&) = default ;
    GetFileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileResponseBody() = default ;
    GetFileResponseBody& operator=(const GetFileResponseBody &) = default ;
    GetFileResponseBody& operator=(GetFileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(File, file_);
        DARABONBA_PTR_TO_JSON(NodeConfiguration, nodeConfiguration_);
        DARABONBA_PTR_TO_JSON(ResourceDownloadLink, resourceDownloadLink_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(File, file_);
        DARABONBA_PTR_FROM_JSON(NodeConfiguration, nodeConfiguration_);
        DARABONBA_PTR_FROM_JSON(ResourceDownloadLink, resourceDownloadLink_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceDownloadLink : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceDownloadLink& obj) { 
          DARABONBA_PTR_TO_JSON(downloadLink, downloadLink_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceDownloadLink& obj) { 
          DARABONBA_PTR_FROM_JSON(downloadLink, downloadLink_);
        };
        ResourceDownloadLink() = default ;
        ResourceDownloadLink(const ResourceDownloadLink &) = default ;
        ResourceDownloadLink(ResourceDownloadLink &&) = default ;
        ResourceDownloadLink(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceDownloadLink() = default ;
        ResourceDownloadLink& operator=(const ResourceDownloadLink &) = default ;
        ResourceDownloadLink& operator=(ResourceDownloadLink &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->downloadLink_ == nullptr; };
        // downloadLink Field Functions 
        bool hasDownloadLink() const { return this->downloadLink_ != nullptr;};
        void deleteDownloadLink() { this->downloadLink_ = nullptr;};
        inline string getDownloadLink() const { DARABONBA_PTR_GET_DEFAULT(downloadLink_, "") };
        inline ResourceDownloadLink& setDownloadLink(string downloadLink) { DARABONBA_PTR_SET_VALUE(downloadLink_, downloadLink) };


      protected:
        // The download URL of the resource.
        shared_ptr<string> downloadLink_ {};
      };

      class NodeConfiguration : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NodeConfiguration& obj) { 
          DARABONBA_PTR_TO_JSON(ApplyScheduleImmediately, applyScheduleImmediately_);
          DARABONBA_PTR_TO_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
          DARABONBA_PTR_TO_JSON(AutoRerunTimes, autoRerunTimes_);
          DARABONBA_PTR_TO_JSON(CronExpress, cronExpress_);
          DARABONBA_PTR_TO_JSON(CycleType, cycleType_);
          DARABONBA_PTR_TO_JSON(DependentNodeIdList, dependentNodeIdList_);
          DARABONBA_PTR_TO_JSON(DependentType, dependentType_);
          DARABONBA_PTR_TO_JSON(EndEffectDate, endEffectDate_);
          DARABONBA_PTR_TO_JSON(IgnoreParentSkipRunningProperty, ignoreParentSkipRunningProperty_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(InputList, inputList_);
          DARABONBA_PTR_TO_JSON(InputParameters, inputParameters_);
          DARABONBA_PTR_TO_JSON(OutputList, outputList_);
          DARABONBA_PTR_TO_JSON(OutputParameters, outputParameters_);
          DARABONBA_PTR_TO_JSON(ParaValue, paraValue_);
          DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SchedulerType, schedulerType_);
          DARABONBA_PTR_TO_JSON(StartEffectDate, startEffectDate_);
          DARABONBA_PTR_TO_JSON(StartImmediately, startImmediately_);
          DARABONBA_PTR_TO_JSON(Stop, stop_);
          DARABONBA_PTR_TO_JSON(Timeout, timeout_);
        };
        friend void from_json(const Darabonba::Json& j, NodeConfiguration& obj) { 
          DARABONBA_PTR_FROM_JSON(ApplyScheduleImmediately, applyScheduleImmediately_);
          DARABONBA_PTR_FROM_JSON(AutoRerunIntervalMillis, autoRerunIntervalMillis_);
          DARABONBA_PTR_FROM_JSON(AutoRerunTimes, autoRerunTimes_);
          DARABONBA_PTR_FROM_JSON(CronExpress, cronExpress_);
          DARABONBA_PTR_FROM_JSON(CycleType, cycleType_);
          DARABONBA_PTR_FROM_JSON(DependentNodeIdList, dependentNodeIdList_);
          DARABONBA_PTR_FROM_JSON(DependentType, dependentType_);
          DARABONBA_PTR_FROM_JSON(EndEffectDate, endEffectDate_);
          DARABONBA_PTR_FROM_JSON(IgnoreParentSkipRunningProperty, ignoreParentSkipRunningProperty_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(InputList, inputList_);
          DARABONBA_PTR_FROM_JSON(InputParameters, inputParameters_);
          DARABONBA_PTR_FROM_JSON(OutputList, outputList_);
          DARABONBA_PTR_FROM_JSON(OutputParameters, outputParameters_);
          DARABONBA_PTR_FROM_JSON(ParaValue, paraValue_);
          DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SchedulerType, schedulerType_);
          DARABONBA_PTR_FROM_JSON(StartEffectDate, startEffectDate_);
          DARABONBA_PTR_FROM_JSON(StartImmediately, startImmediately_);
          DARABONBA_PTR_FROM_JSON(Stop, stop_);
          DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
        };
        NodeConfiguration() = default ;
        NodeConfiguration(const NodeConfiguration &) = default ;
        NodeConfiguration(NodeConfiguration &&) = default ;
        NodeConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NodeConfiguration() = default ;
        NodeConfiguration& operator=(const NodeConfiguration &) = default ;
        NodeConfiguration& operator=(NodeConfiguration &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OutputParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputParameters& obj) { 
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, OutputParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          OutputParameters() = default ;
          OutputParameters(const OutputParameters &) = default ;
          OutputParameters(OutputParameters &&) = default ;
          OutputParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputParameters() = default ;
          OutputParameters& operator=(const OutputParameters &) = default ;
          OutputParameters& operator=(OutputParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->description_ == nullptr
        && this->parameterName_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline OutputParameters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // parameterName Field Functions 
          bool hasParameterName() const { return this->parameterName_ != nullptr;};
          void deleteParameterName() { this->parameterName_ = nullptr;};
          inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
          inline OutputParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline OutputParameters& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline OutputParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The description of the output parameter of the node.
          shared_ptr<string> description_ {};
          // The name of the output parameter of the node.
          // 
          // This parameter corresponds to the Parameter Name parameter in the Output Parameters table in the Input and Output Parameters section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> parameterName_ {};
          // The type of the output parameter of the node. Valid values:
          // 
          // *   1: indicates a constant.
          // *   2: indicates a variable.
          // *   3: indicates a pass-through variable.
          // 
          // This parameter corresponds to the Type parameter in the Output Parameters table in the Input and Output Parameters section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> type_ {};
          // The value of the output parameter of the node.
          // 
          // This parameter corresponds to the Value parameter in the Output Parameters table in the Input and Output Parameters section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> value_ {};
        };

        class OutputList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputList& obj) { 
            DARABONBA_PTR_TO_JSON(Output, output_);
            DARABONBA_PTR_TO_JSON(RefTableName, refTableName_);
          };
          friend void from_json(const Darabonba::Json& j, OutputList& obj) { 
            DARABONBA_PTR_FROM_JSON(Output, output_);
            DARABONBA_PTR_FROM_JSON(RefTableName, refTableName_);
          };
          OutputList() = default ;
          OutputList(const OutputList &) = default ;
          OutputList(OutputList &&) = default ;
          OutputList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputList() = default ;
          OutputList& operator=(const OutputList &) = default ;
          OutputList& operator=(OutputList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->output_ == nullptr
        && this->refTableName_ == nullptr; };
          // output Field Functions 
          bool hasOutput() const { return this->output_ != nullptr;};
          void deleteOutput() { this->output_ = nullptr;};
          inline string getOutput() const { DARABONBA_PTR_GET_DEFAULT(output_, "") };
          inline OutputList& setOutput(string output) { DARABONBA_PTR_SET_VALUE(output_, output) };


          // refTableName Field Functions 
          bool hasRefTableName() const { return this->refTableName_ != nullptr;};
          void deleteRefTableName() { this->refTableName_ = nullptr;};
          inline string getRefTableName() const { DARABONBA_PTR_GET_DEFAULT(refTableName_, "") };
          inline OutputList& setRefTableName(string refTableName) { DARABONBA_PTR_SET_VALUE(refTableName_, refTableName) };


        protected:
          // The output name of the current file.
          // 
          // This parameter corresponds to the Output Name parameter under Output after Same Cycle is selected in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> output_ {};
          // The output table name of the current file.
          // 
          // This parameter corresponds to the Output Table Name parameter under Output after Same Cycle is selected in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> refTableName_ {};
        };

        class InputParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputParameters& obj) { 
            DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
            DARABONBA_PTR_TO_JSON(ValueSource, valueSource_);
          };
          friend void from_json(const Darabonba::Json& j, InputParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
            DARABONBA_PTR_FROM_JSON(ValueSource, valueSource_);
          };
          InputParameters() = default ;
          InputParameters(const InputParameters &) = default ;
          InputParameters(InputParameters &&) = default ;
          InputParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputParameters() = default ;
          InputParameters& operator=(const InputParameters &) = default ;
          InputParameters& operator=(InputParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->parameterName_ == nullptr
        && this->valueSource_ == nullptr; };
          // parameterName Field Functions 
          bool hasParameterName() const { return this->parameterName_ != nullptr;};
          void deleteParameterName() { this->parameterName_ = nullptr;};
          inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
          inline InputParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


          // valueSource Field Functions 
          bool hasValueSource() const { return this->valueSource_ != nullptr;};
          void deleteValueSource() { this->valueSource_ = nullptr;};
          inline string getValueSource() const { DARABONBA_PTR_GET_DEFAULT(valueSource_, "") };
          inline InputParameters& setValueSource(string valueSource) { DARABONBA_PTR_SET_VALUE(valueSource_, valueSource) };


        protected:
          // The name of the input parameter of the node. In the code, you can use the ${...} method to reference the input parameter of the node.
          // 
          // This parameter corresponds to the Parameter Name parameter in the Input Parameters table in the Input and Output Parameters section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> parameterName_ {};
          // The value source of the input parameter of the node.
          // 
          // This parameter corresponds to the Value Source parameter in the Input Parameters table in the Input and Output Parameters section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> valueSource_ {};
        };

        class InputList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InputList& obj) { 
            DARABONBA_PTR_TO_JSON(Input, input_);
            DARABONBA_PTR_TO_JSON(ParseType, parseType_);
          };
          friend void from_json(const Darabonba::Json& j, InputList& obj) { 
            DARABONBA_PTR_FROM_JSON(Input, input_);
            DARABONBA_PTR_FROM_JSON(ParseType, parseType_);
          };
          InputList() = default ;
          InputList(const InputList &) = default ;
          InputList(InputList &&) = default ;
          InputList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InputList() = default ;
          InputList& operator=(const InputList &) = default ;
          InputList& operator=(InputList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->input_ == nullptr
        && this->parseType_ == nullptr; };
          // input Field Functions 
          bool hasInput() const { return this->input_ != nullptr;};
          void deleteInput() { this->input_ = nullptr;};
          inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
          inline InputList& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


          // parseType Field Functions 
          bool hasParseType() const { return this->parseType_ != nullptr;};
          void deleteParseType() { this->parseType_ = nullptr;};
          inline string getParseType() const { DARABONBA_PTR_GET_DEFAULT(parseType_, "") };
          inline InputList& setParseType(string parseType) { DARABONBA_PTR_SET_VALUE(parseType_, parseType) };


        protected:
          // The output name of the parent file on which the current file depends.
          // 
          // This parameter corresponds to the Output Name of Ancestor Node parameter under Parent Nodes after Same Cycle is selected in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
          shared_ptr<string> input_ {};
          // The mode of the configuration file dependency. Valid values:
          // 
          // *   MANUAL: Scheduling dependencies are manually configured.
          // *   AUTO: Scheduling dependencies are automatically parsed.
          shared_ptr<string> parseType_ {};
        };

        virtual bool empty() const override { return this->applyScheduleImmediately_ == nullptr
        && this->autoRerunIntervalMillis_ == nullptr && this->autoRerunTimes_ == nullptr && this->cronExpress_ == nullptr && this->cycleType_ == nullptr && this->dependentNodeIdList_ == nullptr
        && this->dependentType_ == nullptr && this->endEffectDate_ == nullptr && this->ignoreParentSkipRunningProperty_ == nullptr && this->imageId_ == nullptr && this->inputList_ == nullptr
        && this->inputParameters_ == nullptr && this->outputList_ == nullptr && this->outputParameters_ == nullptr && this->paraValue_ == nullptr && this->rerunMode_ == nullptr
        && this->resourceGroupId_ == nullptr && this->schedulerType_ == nullptr && this->startEffectDate_ == nullptr && this->startImmediately_ == nullptr && this->stop_ == nullptr
        && this->timeout_ == nullptr; };
        // applyScheduleImmediately Field Functions 
        bool hasApplyScheduleImmediately() const { return this->applyScheduleImmediately_ != nullptr;};
        void deleteApplyScheduleImmediately() { this->applyScheduleImmediately_ = nullptr;};
        inline string getApplyScheduleImmediately() const { DARABONBA_PTR_GET_DEFAULT(applyScheduleImmediately_, "") };
        inline NodeConfiguration& setApplyScheduleImmediately(string applyScheduleImmediately) { DARABONBA_PTR_SET_VALUE(applyScheduleImmediately_, applyScheduleImmediately) };


        // autoRerunIntervalMillis Field Functions 
        bool hasAutoRerunIntervalMillis() const { return this->autoRerunIntervalMillis_ != nullptr;};
        void deleteAutoRerunIntervalMillis() { this->autoRerunIntervalMillis_ = nullptr;};
        inline int32_t getAutoRerunIntervalMillis() const { DARABONBA_PTR_GET_DEFAULT(autoRerunIntervalMillis_, 0) };
        inline NodeConfiguration& setAutoRerunIntervalMillis(int32_t autoRerunIntervalMillis) { DARABONBA_PTR_SET_VALUE(autoRerunIntervalMillis_, autoRerunIntervalMillis) };


        // autoRerunTimes Field Functions 
        bool hasAutoRerunTimes() const { return this->autoRerunTimes_ != nullptr;};
        void deleteAutoRerunTimes() { this->autoRerunTimes_ = nullptr;};
        inline int32_t getAutoRerunTimes() const { DARABONBA_PTR_GET_DEFAULT(autoRerunTimes_, 0) };
        inline NodeConfiguration& setAutoRerunTimes(int32_t autoRerunTimes) { DARABONBA_PTR_SET_VALUE(autoRerunTimes_, autoRerunTimes) };


        // cronExpress Field Functions 
        bool hasCronExpress() const { return this->cronExpress_ != nullptr;};
        void deleteCronExpress() { this->cronExpress_ = nullptr;};
        inline string getCronExpress() const { DARABONBA_PTR_GET_DEFAULT(cronExpress_, "") };
        inline NodeConfiguration& setCronExpress(string cronExpress) { DARABONBA_PTR_SET_VALUE(cronExpress_, cronExpress) };


        // cycleType Field Functions 
        bool hasCycleType() const { return this->cycleType_ != nullptr;};
        void deleteCycleType() { this->cycleType_ = nullptr;};
        inline string getCycleType() const { DARABONBA_PTR_GET_DEFAULT(cycleType_, "") };
        inline NodeConfiguration& setCycleType(string cycleType) { DARABONBA_PTR_SET_VALUE(cycleType_, cycleType) };


        // dependentNodeIdList Field Functions 
        bool hasDependentNodeIdList() const { return this->dependentNodeIdList_ != nullptr;};
        void deleteDependentNodeIdList() { this->dependentNodeIdList_ = nullptr;};
        inline string getDependentNodeIdList() const { DARABONBA_PTR_GET_DEFAULT(dependentNodeIdList_, "") };
        inline NodeConfiguration& setDependentNodeIdList(string dependentNodeIdList) { DARABONBA_PTR_SET_VALUE(dependentNodeIdList_, dependentNodeIdList) };


        // dependentType Field Functions 
        bool hasDependentType() const { return this->dependentType_ != nullptr;};
        void deleteDependentType() { this->dependentType_ = nullptr;};
        inline string getDependentType() const { DARABONBA_PTR_GET_DEFAULT(dependentType_, "") };
        inline NodeConfiguration& setDependentType(string dependentType) { DARABONBA_PTR_SET_VALUE(dependentType_, dependentType) };


        // endEffectDate Field Functions 
        bool hasEndEffectDate() const { return this->endEffectDate_ != nullptr;};
        void deleteEndEffectDate() { this->endEffectDate_ = nullptr;};
        inline int64_t getEndEffectDate() const { DARABONBA_PTR_GET_DEFAULT(endEffectDate_, 0L) };
        inline NodeConfiguration& setEndEffectDate(int64_t endEffectDate) { DARABONBA_PTR_SET_VALUE(endEffectDate_, endEffectDate) };


        // ignoreParentSkipRunningProperty Field Functions 
        bool hasIgnoreParentSkipRunningProperty() const { return this->ignoreParentSkipRunningProperty_ != nullptr;};
        void deleteIgnoreParentSkipRunningProperty() { this->ignoreParentSkipRunningProperty_ = nullptr;};
        inline string getIgnoreParentSkipRunningProperty() const { DARABONBA_PTR_GET_DEFAULT(ignoreParentSkipRunningProperty_, "") };
        inline NodeConfiguration& setIgnoreParentSkipRunningProperty(string ignoreParentSkipRunningProperty) { DARABONBA_PTR_SET_VALUE(ignoreParentSkipRunningProperty_, ignoreParentSkipRunningProperty) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline NodeConfiguration& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // inputList Field Functions 
        bool hasInputList() const { return this->inputList_ != nullptr;};
        void deleteInputList() { this->inputList_ = nullptr;};
        inline const vector<NodeConfiguration::InputList> & getInputList() const { DARABONBA_PTR_GET_CONST(inputList_, vector<NodeConfiguration::InputList>) };
        inline vector<NodeConfiguration::InputList> getInputList() { DARABONBA_PTR_GET(inputList_, vector<NodeConfiguration::InputList>) };
        inline NodeConfiguration& setInputList(const vector<NodeConfiguration::InputList> & inputList) { DARABONBA_PTR_SET_VALUE(inputList_, inputList) };
        inline NodeConfiguration& setInputList(vector<NodeConfiguration::InputList> && inputList) { DARABONBA_PTR_SET_RVALUE(inputList_, inputList) };


        // inputParameters Field Functions 
        bool hasInputParameters() const { return this->inputParameters_ != nullptr;};
        void deleteInputParameters() { this->inputParameters_ = nullptr;};
        inline const vector<NodeConfiguration::InputParameters> & getInputParameters() const { DARABONBA_PTR_GET_CONST(inputParameters_, vector<NodeConfiguration::InputParameters>) };
        inline vector<NodeConfiguration::InputParameters> getInputParameters() { DARABONBA_PTR_GET(inputParameters_, vector<NodeConfiguration::InputParameters>) };
        inline NodeConfiguration& setInputParameters(const vector<NodeConfiguration::InputParameters> & inputParameters) { DARABONBA_PTR_SET_VALUE(inputParameters_, inputParameters) };
        inline NodeConfiguration& setInputParameters(vector<NodeConfiguration::InputParameters> && inputParameters) { DARABONBA_PTR_SET_RVALUE(inputParameters_, inputParameters) };


        // outputList Field Functions 
        bool hasOutputList() const { return this->outputList_ != nullptr;};
        void deleteOutputList() { this->outputList_ = nullptr;};
        inline const vector<NodeConfiguration::OutputList> & getOutputList() const { DARABONBA_PTR_GET_CONST(outputList_, vector<NodeConfiguration::OutputList>) };
        inline vector<NodeConfiguration::OutputList> getOutputList() { DARABONBA_PTR_GET(outputList_, vector<NodeConfiguration::OutputList>) };
        inline NodeConfiguration& setOutputList(const vector<NodeConfiguration::OutputList> & outputList) { DARABONBA_PTR_SET_VALUE(outputList_, outputList) };
        inline NodeConfiguration& setOutputList(vector<NodeConfiguration::OutputList> && outputList) { DARABONBA_PTR_SET_RVALUE(outputList_, outputList) };


        // outputParameters Field Functions 
        bool hasOutputParameters() const { return this->outputParameters_ != nullptr;};
        void deleteOutputParameters() { this->outputParameters_ = nullptr;};
        inline const vector<NodeConfiguration::OutputParameters> & getOutputParameters() const { DARABONBA_PTR_GET_CONST(outputParameters_, vector<NodeConfiguration::OutputParameters>) };
        inline vector<NodeConfiguration::OutputParameters> getOutputParameters() { DARABONBA_PTR_GET(outputParameters_, vector<NodeConfiguration::OutputParameters>) };
        inline NodeConfiguration& setOutputParameters(const vector<NodeConfiguration::OutputParameters> & outputParameters) { DARABONBA_PTR_SET_VALUE(outputParameters_, outputParameters) };
        inline NodeConfiguration& setOutputParameters(vector<NodeConfiguration::OutputParameters> && outputParameters) { DARABONBA_PTR_SET_RVALUE(outputParameters_, outputParameters) };


        // paraValue Field Functions 
        bool hasParaValue() const { return this->paraValue_ != nullptr;};
        void deleteParaValue() { this->paraValue_ = nullptr;};
        inline string getParaValue() const { DARABONBA_PTR_GET_DEFAULT(paraValue_, "") };
        inline NodeConfiguration& setParaValue(string paraValue) { DARABONBA_PTR_SET_VALUE(paraValue_, paraValue) };


        // rerunMode Field Functions 
        bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
        void deleteRerunMode() { this->rerunMode_ = nullptr;};
        inline string getRerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
        inline NodeConfiguration& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline int64_t getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, 0L) };
        inline NodeConfiguration& setResourceGroupId(int64_t resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // schedulerType Field Functions 
        bool hasSchedulerType() const { return this->schedulerType_ != nullptr;};
        void deleteSchedulerType() { this->schedulerType_ = nullptr;};
        inline string getSchedulerType() const { DARABONBA_PTR_GET_DEFAULT(schedulerType_, "") };
        inline NodeConfiguration& setSchedulerType(string schedulerType) { DARABONBA_PTR_SET_VALUE(schedulerType_, schedulerType) };


        // startEffectDate Field Functions 
        bool hasStartEffectDate() const { return this->startEffectDate_ != nullptr;};
        void deleteStartEffectDate() { this->startEffectDate_ = nullptr;};
        inline int64_t getStartEffectDate() const { DARABONBA_PTR_GET_DEFAULT(startEffectDate_, 0L) };
        inline NodeConfiguration& setStartEffectDate(int64_t startEffectDate) { DARABONBA_PTR_SET_VALUE(startEffectDate_, startEffectDate) };


        // startImmediately Field Functions 
        bool hasStartImmediately() const { return this->startImmediately_ != nullptr;};
        void deleteStartImmediately() { this->startImmediately_ = nullptr;};
        inline bool getStartImmediately() const { DARABONBA_PTR_GET_DEFAULT(startImmediately_, false) };
        inline NodeConfiguration& setStartImmediately(bool startImmediately) { DARABONBA_PTR_SET_VALUE(startImmediately_, startImmediately) };


        // stop Field Functions 
        bool hasStop() const { return this->stop_ != nullptr;};
        void deleteStop() { this->stop_ = nullptr;};
        inline bool getStop() const { DARABONBA_PTR_GET_DEFAULT(stop_, false) };
        inline NodeConfiguration& setStop(bool stop) { DARABONBA_PTR_SET_VALUE(stop_, stop) };


        // timeout Field Functions 
        bool hasTimeout() const { return this->timeout_ != nullptr;};
        void deleteTimeout() { this->timeout_ = nullptr;};
        inline int32_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
        inline NodeConfiguration& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


      protected:
        // Indicates whether scheduling configurations immediately take effect after the deployment.
        shared_ptr<string> applyScheduleImmediately_ {};
        // The interval between automatic reruns after an error occurs. Unit: milliseconds.
        // 
        // This parameter corresponds to the Rerun interval parameter that is displayed after the Auto Rerun upon Failure check box is selected in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console). The interval that you specify in the DataWorks console is measured in minutes. Pay attention to the conversion between the units of time when you call the operation.
        shared_ptr<int32_t> autoRerunIntervalMillis_ {};
        // The number of automatic reruns that are allowed after an error occurs.
        shared_ptr<int32_t> autoRerunTimes_ {};
        // The cron expression that represents the periodic scheduling policy of the node.
        shared_ptr<string> cronExpress_ {};
        // The type of the scheduling cycle. Valid values: NOT_DAY and DAY. The value NOT_DAY indicates that the node is scheduled to run by minute or hour. The value DAY indicates that the node is scheduled to run by day, week, or month.
        // 
        // This parameter corresponds to the Scheduling Cycle parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
        shared_ptr<string> cycleType_ {};
        // The ID of the node on which the node that corresponds to the file depends when the DependentType parameter is set to USER_DEFINE. Multiple IDs are separated by commas (,).
        // 
        // The value of this parameter is equivalent to the ID of the node that you specified after you select Previous Cycle and set Depend On to Other Nodes in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
        shared_ptr<string> dependentNodeIdList_ {};
        // The type of the cross-cycle scheduling dependency of the node. Valid values:
        // 
        // *   SELF: The instance generated for the node in the current cycle depends on the instance generated for the node in the previous cycle.
        // *   CHILD: The instance generated for the node in the current cycle depends on the instances generated for the descendant nodes at the nearest level of the node in the previous cycle.
        // *   USER_DEFINE: The instance generated for the node in the current cycle depends on the instances generated for one or more specified nodes in the previous cycle.
        // *   NONE: No cross-cycle scheduling dependency type is selected for the node.
        shared_ptr<string> dependentType_ {};
        // The end of the time range for automatic scheduling. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        // 
        // Configuring this parameter is equivalent to specifying an end time for the Validity Period parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
        shared_ptr<int64_t> endEffectDate_ {};
        // Indicates whether the dry-run property of the ancestor nodes of the node is skipped. This parameter corresponds to the Skip the dry-run property of the ancestor node parameter that is displayed after you configure the Depend On parameter in the Dependencies section of the Properties tab on the DataStudio page in the DataWorks console.
        shared_ptr<string> ignoreParentSkipRunningProperty_ {};
        // The custom image ID.
        shared_ptr<string> imageId_ {};
        // The output information about the parent files on which the current file depends.
        shared_ptr<vector<NodeConfiguration::InputList>> inputList_ {};
        // The input parameters of the node.
        shared_ptr<vector<NodeConfiguration::InputParameters>> inputParameters_ {};
        // The output information about the current file.
        shared_ptr<vector<NodeConfiguration::OutputList>> outputList_ {};
        // The output parameters of the node.
        shared_ptr<vector<NodeConfiguration::OutputParameters>> outputParameters_ {};
        // The scheduling parameters of the node.
        // 
        // This parameter corresponds to the Scheduling Parameter section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console). For more information about the configurations of scheduling parameters, see [Configure scheduling parameters](https://help.aliyun.com/document_detail/137548.html).
        shared_ptr<string> paraValue_ {};
        // Indicates whether the node that corresponds to the file can be rerun. Valid values:
        // 
        // *   ALL_ALLOWED: The node can be rerun regardless of whether it is successfully run or fails to run.
        // *   FAILURE_ALLOWED: The node can be rerun only after it fails to run.
        // *   ALL_DENIED: The node cannot be rerun regardless of whether it is successfully run or fails to run.
        // 
        // This parameter corresponds to the Rerun parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
        shared_ptr<string> rerunMode_ {};
        // The ID of the resource group that is used to run the node that corresponds to the file. You can call the [ListResourceGroups](https://help.aliyun.com/document_detail/173913.html) operation to query the available resource groups in the workspace.
        shared_ptr<int64_t> resourceGroupId_ {};
        // The scheduling type of the node. Valid values:
        // 
        // *   NORMAL: The node is an auto triggered node.
        // *   MANUAL: The node is a manually triggered node. Manually triggered nodes cannot be automatically triggered. They correspond to the nodes in the Manually Triggered Workflows pane.
        // *   PAUSE: The node is a paused node.
        // *   SKIP: The node is a dry-run node. Dry-run nodes are started as scheduled, but the system sets the status of the nodes to successful when it starts to run them.
        shared_ptr<string> schedulerType_ {};
        // The beginning of the time range for automatic scheduling. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        // 
        // Configuring this parameter is equivalent to specifying a start time for the Validity Period parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
        shared_ptr<int64_t> startEffectDate_ {};
        // Indicates whether a node is immediately run after the node is deployed to the production environment.
        // 
        // This parameter is valid only for an EMR Spark Streaming node or an EMR Streaming SQL node. This parameter corresponds to the Start Method parameter in the Schedule section of the Configure tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
        shared_ptr<bool> startImmediately_ {};
        // Indicates whether the scheduling for the node is suspended Valid values:
        // 
        // *   true
        // *   false
        // 
        // This parameter corresponds to the Recurrence parameter in the Schedule section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
        shared_ptr<bool> stop_ {};
        // The timeout period.
        shared_ptr<int32_t> timeout_ {};
      };

      class File : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const File& obj) { 
          DARABONBA_PTR_TO_JSON(AdvancedSettings, advancedSettings_);
          DARABONBA_PTR_TO_JSON(AutoParsing, autoParsing_);
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
          DARABONBA_PTR_TO_JSON(CommitStatus, commitStatus_);
          DARABONBA_PTR_TO_JSON(ConnectionName, connectionName_);
          DARABONBA_PTR_TO_JSON(Content, content_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_TO_JSON(DeletedStatus, deletedStatus_);
          DARABONBA_PTR_TO_JSON(FileDescription, fileDescription_);
          DARABONBA_PTR_TO_JSON(FileFolderId, fileFolderId_);
          DARABONBA_PTR_TO_JSON(FileId, fileId_);
          DARABONBA_PTR_TO_JSON(FileName, fileName_);
          DARABONBA_PTR_TO_JSON(FileType, fileType_);
          DARABONBA_PTR_TO_JSON(IsMaxCompute, isMaxCompute_);
          DARABONBA_PTR_TO_JSON(LastEditTime, lastEditTime_);
          DARABONBA_PTR_TO_JSON(LastEditUser, lastEditUser_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(UseType, useType_);
        };
        friend void from_json(const Darabonba::Json& j, File& obj) { 
          DARABONBA_PTR_FROM_JSON(AdvancedSettings, advancedSettings_);
          DARABONBA_PTR_FROM_JSON(AutoParsing, autoParsing_);
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
          DARABONBA_PTR_FROM_JSON(CommitStatus, commitStatus_);
          DARABONBA_PTR_FROM_JSON(ConnectionName, connectionName_);
          DARABONBA_PTR_FROM_JSON(Content, content_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
          DARABONBA_PTR_FROM_JSON(DeletedStatus, deletedStatus_);
          DARABONBA_PTR_FROM_JSON(FileDescription, fileDescription_);
          DARABONBA_PTR_FROM_JSON(FileFolderId, fileFolderId_);
          DARABONBA_PTR_FROM_JSON(FileId, fileId_);
          DARABONBA_PTR_FROM_JSON(FileName, fileName_);
          DARABONBA_PTR_FROM_JSON(FileType, fileType_);
          DARABONBA_PTR_FROM_JSON(IsMaxCompute, isMaxCompute_);
          DARABONBA_PTR_FROM_JSON(LastEditTime, lastEditTime_);
          DARABONBA_PTR_FROM_JSON(LastEditUser, lastEditUser_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(UseType, useType_);
        };
        File() = default ;
        File(const File &) = default ;
        File(File &&) = default ;
        File(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~File() = default ;
        File& operator=(const File &) = default ;
        File& operator=(File &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->advancedSettings_ == nullptr
        && this->autoParsing_ == nullptr && this->bizId_ == nullptr && this->businessId_ == nullptr && this->commitStatus_ == nullptr && this->connectionName_ == nullptr
        && this->content_ == nullptr && this->createTime_ == nullptr && this->createUser_ == nullptr && this->currentVersion_ == nullptr && this->deletedStatus_ == nullptr
        && this->fileDescription_ == nullptr && this->fileFolderId_ == nullptr && this->fileId_ == nullptr && this->fileName_ == nullptr && this->fileType_ == nullptr
        && this->isMaxCompute_ == nullptr && this->lastEditTime_ == nullptr && this->lastEditUser_ == nullptr && this->nodeId_ == nullptr && this->owner_ == nullptr
        && this->parentId_ == nullptr && this->useType_ == nullptr; };
        // advancedSettings Field Functions 
        bool hasAdvancedSettings() const { return this->advancedSettings_ != nullptr;};
        void deleteAdvancedSettings() { this->advancedSettings_ = nullptr;};
        inline string getAdvancedSettings() const { DARABONBA_PTR_GET_DEFAULT(advancedSettings_, "") };
        inline File& setAdvancedSettings(string advancedSettings) { DARABONBA_PTR_SET_VALUE(advancedSettings_, advancedSettings) };


        // autoParsing Field Functions 
        bool hasAutoParsing() const { return this->autoParsing_ != nullptr;};
        void deleteAutoParsing() { this->autoParsing_ = nullptr;};
        inline bool getAutoParsing() const { DARABONBA_PTR_GET_DEFAULT(autoParsing_, false) };
        inline File& setAutoParsing(bool autoParsing) { DARABONBA_PTR_SET_VALUE(autoParsing_, autoParsing) };


        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline int64_t getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
        inline File& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // businessId Field Functions 
        bool hasBusinessId() const { return this->businessId_ != nullptr;};
        void deleteBusinessId() { this->businessId_ = nullptr;};
        inline int64_t getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, 0L) };
        inline File& setBusinessId(int64_t businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


        // commitStatus Field Functions 
        bool hasCommitStatus() const { return this->commitStatus_ != nullptr;};
        void deleteCommitStatus() { this->commitStatus_ = nullptr;};
        inline int32_t getCommitStatus() const { DARABONBA_PTR_GET_DEFAULT(commitStatus_, 0) };
        inline File& setCommitStatus(int32_t commitStatus) { DARABONBA_PTR_SET_VALUE(commitStatus_, commitStatus) };


        // connectionName Field Functions 
        bool hasConnectionName() const { return this->connectionName_ != nullptr;};
        void deleteConnectionName() { this->connectionName_ = nullptr;};
        inline string getConnectionName() const { DARABONBA_PTR_GET_DEFAULT(connectionName_, "") };
        inline File& setConnectionName(string connectionName) { DARABONBA_PTR_SET_VALUE(connectionName_, connectionName) };


        // content Field Functions 
        bool hasContent() const { return this->content_ != nullptr;};
        void deleteContent() { this->content_ = nullptr;};
        inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
        inline File& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline File& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline File& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // currentVersion Field Functions 
        bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
        void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
        inline int32_t getCurrentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, 0) };
        inline File& setCurrentVersion(int32_t currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


        // deletedStatus Field Functions 
        bool hasDeletedStatus() const { return this->deletedStatus_ != nullptr;};
        void deleteDeletedStatus() { this->deletedStatus_ = nullptr;};
        inline string getDeletedStatus() const { DARABONBA_PTR_GET_DEFAULT(deletedStatus_, "") };
        inline File& setDeletedStatus(string deletedStatus) { DARABONBA_PTR_SET_VALUE(deletedStatus_, deletedStatus) };


        // fileDescription Field Functions 
        bool hasFileDescription() const { return this->fileDescription_ != nullptr;};
        void deleteFileDescription() { this->fileDescription_ = nullptr;};
        inline string getFileDescription() const { DARABONBA_PTR_GET_DEFAULT(fileDescription_, "") };
        inline File& setFileDescription(string fileDescription) { DARABONBA_PTR_SET_VALUE(fileDescription_, fileDescription) };


        // fileFolderId Field Functions 
        bool hasFileFolderId() const { return this->fileFolderId_ != nullptr;};
        void deleteFileFolderId() { this->fileFolderId_ = nullptr;};
        inline string getFileFolderId() const { DARABONBA_PTR_GET_DEFAULT(fileFolderId_, "") };
        inline File& setFileFolderId(string fileFolderId) { DARABONBA_PTR_SET_VALUE(fileFolderId_, fileFolderId) };


        // fileId Field Functions 
        bool hasFileId() const { return this->fileId_ != nullptr;};
        void deleteFileId() { this->fileId_ = nullptr;};
        inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
        inline File& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


        // fileName Field Functions 
        bool hasFileName() const { return this->fileName_ != nullptr;};
        void deleteFileName() { this->fileName_ = nullptr;};
        inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
        inline File& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


        // fileType Field Functions 
        bool hasFileType() const { return this->fileType_ != nullptr;};
        void deleteFileType() { this->fileType_ = nullptr;};
        inline int32_t getFileType() const { DARABONBA_PTR_GET_DEFAULT(fileType_, 0) };
        inline File& setFileType(int32_t fileType) { DARABONBA_PTR_SET_VALUE(fileType_, fileType) };


        // isMaxCompute Field Functions 
        bool hasIsMaxCompute() const { return this->isMaxCompute_ != nullptr;};
        void deleteIsMaxCompute() { this->isMaxCompute_ = nullptr;};
        inline bool getIsMaxCompute() const { DARABONBA_PTR_GET_DEFAULT(isMaxCompute_, false) };
        inline File& setIsMaxCompute(bool isMaxCompute) { DARABONBA_PTR_SET_VALUE(isMaxCompute_, isMaxCompute) };


        // lastEditTime Field Functions 
        bool hasLastEditTime() const { return this->lastEditTime_ != nullptr;};
        void deleteLastEditTime() { this->lastEditTime_ = nullptr;};
        inline int64_t getLastEditTime() const { DARABONBA_PTR_GET_DEFAULT(lastEditTime_, 0L) };
        inline File& setLastEditTime(int64_t lastEditTime) { DARABONBA_PTR_SET_VALUE(lastEditTime_, lastEditTime) };


        // lastEditUser Field Functions 
        bool hasLastEditUser() const { return this->lastEditUser_ != nullptr;};
        void deleteLastEditUser() { this->lastEditUser_ = nullptr;};
        inline string getLastEditUser() const { DARABONBA_PTR_GET_DEFAULT(lastEditUser_, "") };
        inline File& setLastEditUser(string lastEditUser) { DARABONBA_PTR_SET_VALUE(lastEditUser_, lastEditUser) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline File& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline File& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline File& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // useType Field Functions 
        bool hasUseType() const { return this->useType_ != nullptr;};
        void deleteUseType() { this->useType_ = nullptr;};
        inline string getUseType() const { DARABONBA_PTR_GET_DEFAULT(useType_, "") };
        inline File& setUseType(string useType) { DARABONBA_PTR_SET_VALUE(useType_, useType) };


      protected:
        // The advanced configurations of the node.
        // 
        // This parameter is valid for an EMR node. This parameter corresponds to the Advanced Settings tab in the right-side navigation pane on the configuration tab of the node in the [DataWorks console](https://workbench.data.aliyun.com/console).
        // 
        // >  You cannot configure advanced parameters for EMR Shell nodes.
        // 
        // For information about the advanced parameters of each type of EMR node, see [Develop EMR tasks](https://help.aliyun.com/document_detail/473077.html).
        shared_ptr<string> advancedSettings_ {};
        // Indicates whether the automatic parsing feature is enabled for the file. Valid values:
        // 
        // *   true
        // *   false
        // 
        // This parameter corresponds to the Automatic Parsing From Code Before Node Committing parameter that is displayed after you select Same Cycle in the Dependencies section of the Properties tab on the DataStudio page in the [DataWorks console](https://workbench.data.aliyun.com/console).
        shared_ptr<bool> autoParsing_ {};
        // The ID of the workflow to which the file belongs. This parameter is deprecated and replaced by the BusinessId parameter.
        shared_ptr<int64_t> bizId_ {};
        // The ID of the workflow to which the file belongs.
        shared_ptr<int64_t> businessId_ {};
        // Indicates whether the latest code in the file is committed. Valid values: 0 and 1. The value 0 indicates that the latest code in the file is not committed. The value 1 indicates that the latest code in the file is committed.
        shared_ptr<int32_t> commitStatus_ {};
        // The name of the data source that is used to run the node that corresponds to the file.
        shared_ptr<string> connectionName_ {};
        // The code in the file.
        shared_ptr<string> content_ {};
        // The time when the file was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> createTime_ {};
        // The ID of the Alibaba Cloud account used to create the file.
        shared_ptr<string> createUser_ {};
        // The latest version number of the file.
        shared_ptr<int32_t> currentVersion_ {};
        // The status of the file. Valid values:
        // 
        // *   NORMAL: The file is not deleted.
        // *   RECYCLE_BIN: The file is stored in the recycle bin.
        // *   DELETED: The file is deleted.
        shared_ptr<string> deletedStatus_ {};
        // The description of the file.
        shared_ptr<string> fileDescription_ {};
        // The ID of the folder to which the file belongs.
        shared_ptr<string> fileFolderId_ {};
        // The file ID.
        shared_ptr<int64_t> fileId_ {};
        // The name of the file.
        shared_ptr<string> fileName_ {};
        // The type of the code for the file. The code for files varies based on the file type. For more information, see [DataWorks nodes](https://help.aliyun.com/document_detail/600169.html).
        shared_ptr<int32_t> fileType_ {};
        // Indicates whether the resource file needs to be uploaded to MaxCompute. This parameter is returned only if the file is a MaxCompute resource file.
        shared_ptr<bool> isMaxCompute_ {};
        // The time when the file was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> lastEditTime_ {};
        // The ID of the Alibaba Cloud account used to last modify the file.
        shared_ptr<string> lastEditUser_ {};
        // The ID of the auto triggered node that is generated in the scheduling system after the file is committed.
        shared_ptr<int64_t> nodeId_ {};
        // The ID of the Alibaba Cloud account used by the file owner.
        shared_ptr<string> owner_ {};
        // The ID of the node group file to which the current file belongs. This parameter is returned only if the current file is an inner file of the node group file.
        shared_ptr<int64_t> parentId_ {};
        // The module to which the file belongs. Valid values:
        // 
        // *   NORMAL: The file is used for DataStudio.
        // *   MANUAL: The file is used for a manually triggered node.
        // *   MANUAL_BIZ: The file is used for a manually triggered workflow.
        // *   SKIP: The file is used for a dry-run node in DataStudio.
        // *   ADHOCQUERY: The file is used for an ad hoc query.
        // *   COMPONENT: The file is used for a script template.
        shared_ptr<string> useType_ {};
      };

      virtual bool empty() const override { return this->file_ == nullptr
        && this->nodeConfiguration_ == nullptr && this->resourceDownloadLink_ == nullptr; };
      // file Field Functions 
      bool hasFile() const { return this->file_ != nullptr;};
      void deleteFile() { this->file_ = nullptr;};
      inline const Data::File & getFile() const { DARABONBA_PTR_GET_CONST(file_, Data::File) };
      inline Data::File getFile() { DARABONBA_PTR_GET(file_, Data::File) };
      inline Data& setFile(const Data::File & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
      inline Data& setFile(Data::File && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


      // nodeConfiguration Field Functions 
      bool hasNodeConfiguration() const { return this->nodeConfiguration_ != nullptr;};
      void deleteNodeConfiguration() { this->nodeConfiguration_ = nullptr;};
      inline const Data::NodeConfiguration & getNodeConfiguration() const { DARABONBA_PTR_GET_CONST(nodeConfiguration_, Data::NodeConfiguration) };
      inline Data::NodeConfiguration getNodeConfiguration() { DARABONBA_PTR_GET(nodeConfiguration_, Data::NodeConfiguration) };
      inline Data& setNodeConfiguration(const Data::NodeConfiguration & nodeConfiguration) { DARABONBA_PTR_SET_VALUE(nodeConfiguration_, nodeConfiguration) };
      inline Data& setNodeConfiguration(Data::NodeConfiguration && nodeConfiguration) { DARABONBA_PTR_SET_RVALUE(nodeConfiguration_, nodeConfiguration) };


      // resourceDownloadLink Field Functions 
      bool hasResourceDownloadLink() const { return this->resourceDownloadLink_ != nullptr;};
      void deleteResourceDownloadLink() { this->resourceDownloadLink_ = nullptr;};
      inline const Data::ResourceDownloadLink & getResourceDownloadLink() const { DARABONBA_PTR_GET_CONST(resourceDownloadLink_, Data::ResourceDownloadLink) };
      inline Data::ResourceDownloadLink getResourceDownloadLink() { DARABONBA_PTR_GET(resourceDownloadLink_, Data::ResourceDownloadLink) };
      inline Data& setResourceDownloadLink(const Data::ResourceDownloadLink & resourceDownloadLink) { DARABONBA_PTR_SET_VALUE(resourceDownloadLink_, resourceDownloadLink) };
      inline Data& setResourceDownloadLink(Data::ResourceDownloadLink && resourceDownloadLink) { DARABONBA_PTR_SET_RVALUE(resourceDownloadLink_, resourceDownloadLink) };


    protected:
      // The basic information about the file.
      shared_ptr<Data::File> file_ {};
      // The scheduling configurations of the file.
      shared_ptr<Data::NodeConfiguration> nodeConfiguration_ {};
      // The download URL of the resource.
      shared_ptr<Data::ResourceDownloadLink> resourceDownloadLink_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetFileResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetFileResponseBody::Data) };
    inline GetFileResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetFileResponseBody::Data) };
    inline GetFileResponseBody& setData(const GetFileResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetFileResponseBody& setData(GetFileResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetFileResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetFileResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetFileResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetFileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetFileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the file.
    shared_ptr<GetFileResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
