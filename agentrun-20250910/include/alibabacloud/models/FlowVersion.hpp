// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWVERSION_HPP_
#define ALIBABACLOUD_MODELS_FLOWVERSION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnvironmentConfiguration.hpp>
#include <alibabacloud/models/LoggingConfiguration.hpp>
#include <alibabacloud/models/TracingConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class FlowVersion : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowVersion& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(definition, definition_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(environmentConfiguration, environmentConfiguration_);
      DARABONBA_PTR_TO_JSON(externalStorageLocation, externalStorageLocation_);
      DARABONBA_PTR_TO_JSON(flowId, flowId_);
      DARABONBA_PTR_TO_JSON(flowName, flowName_);
      DARABONBA_PTR_TO_JSON(flowVersion, flowVersion_);
      DARABONBA_PTR_TO_JSON(loggingConfiguration, loggingConfiguration_);
      DARABONBA_PTR_TO_JSON(tracingConfiguration, tracingConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, FlowVersion& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(definition, definition_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(environmentConfiguration, environmentConfiguration_);
      DARABONBA_PTR_FROM_JSON(externalStorageLocation, externalStorageLocation_);
      DARABONBA_PTR_FROM_JSON(flowId, flowId_);
      DARABONBA_PTR_FROM_JSON(flowName, flowName_);
      DARABONBA_PTR_FROM_JSON(flowVersion, flowVersion_);
      DARABONBA_PTR_FROM_JSON(loggingConfiguration, loggingConfiguration_);
      DARABONBA_PTR_FROM_JSON(tracingConfiguration, tracingConfiguration_);
    };
    FlowVersion() = default ;
    FlowVersion(const FlowVersion &) = default ;
    FlowVersion(FlowVersion &&) = default ;
    FlowVersion(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowVersion() = default ;
    FlowVersion& operator=(const FlowVersion &) = default ;
    FlowVersion& operator=(FlowVersion &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->definition_ == nullptr && this->description_ == nullptr && this->environmentConfiguration_ == nullptr && this->externalStorageLocation_ == nullptr && this->flowId_ == nullptr
        && this->flowName_ == nullptr && this->flowVersion_ == nullptr && this->loggingConfiguration_ == nullptr && this->tracingConfiguration_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline FlowVersion& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // definition Field Functions 
    bool hasDefinition() const { return this->definition_ != nullptr;};
    void deleteDefinition() { this->definition_ = nullptr;};
    inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
    inline FlowVersion& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline FlowVersion& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // environmentConfiguration Field Functions 
    bool hasEnvironmentConfiguration() const { return this->environmentConfiguration_ != nullptr;};
    void deleteEnvironmentConfiguration() { this->environmentConfiguration_ = nullptr;};
    inline const EnvironmentConfiguration & getEnvironmentConfiguration() const { DARABONBA_PTR_GET_CONST(environmentConfiguration_, EnvironmentConfiguration) };
    inline EnvironmentConfiguration getEnvironmentConfiguration() { DARABONBA_PTR_GET(environmentConfiguration_, EnvironmentConfiguration) };
    inline FlowVersion& setEnvironmentConfiguration(const EnvironmentConfiguration & environmentConfiguration) { DARABONBA_PTR_SET_VALUE(environmentConfiguration_, environmentConfiguration) };
    inline FlowVersion& setEnvironmentConfiguration(EnvironmentConfiguration && environmentConfiguration) { DARABONBA_PTR_SET_RVALUE(environmentConfiguration_, environmentConfiguration) };


    // externalStorageLocation Field Functions 
    bool hasExternalStorageLocation() const { return this->externalStorageLocation_ != nullptr;};
    void deleteExternalStorageLocation() { this->externalStorageLocation_ = nullptr;};
    inline string getExternalStorageLocation() const { DARABONBA_PTR_GET_DEFAULT(externalStorageLocation_, "") };
    inline FlowVersion& setExternalStorageLocation(string externalStorageLocation) { DARABONBA_PTR_SET_VALUE(externalStorageLocation_, externalStorageLocation) };


    // flowId Field Functions 
    bool hasFlowId() const { return this->flowId_ != nullptr;};
    void deleteFlowId() { this->flowId_ = nullptr;};
    inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
    inline FlowVersion& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


    // flowName Field Functions 
    bool hasFlowName() const { return this->flowName_ != nullptr;};
    void deleteFlowName() { this->flowName_ = nullptr;};
    inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
    inline FlowVersion& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    // flowVersion Field Functions 
    bool hasFlowVersion() const { return this->flowVersion_ != nullptr;};
    void deleteFlowVersion() { this->flowVersion_ = nullptr;};
    inline string getFlowVersion() const { DARABONBA_PTR_GET_DEFAULT(flowVersion_, "") };
    inline FlowVersion& setFlowVersion(string flowVersion) { DARABONBA_PTR_SET_VALUE(flowVersion_, flowVersion) };


    // loggingConfiguration Field Functions 
    bool hasLoggingConfiguration() const { return this->loggingConfiguration_ != nullptr;};
    void deleteLoggingConfiguration() { this->loggingConfiguration_ = nullptr;};
    inline const LoggingConfiguration & getLoggingConfiguration() const { DARABONBA_PTR_GET_CONST(loggingConfiguration_, LoggingConfiguration) };
    inline LoggingConfiguration getLoggingConfiguration() { DARABONBA_PTR_GET(loggingConfiguration_, LoggingConfiguration) };
    inline FlowVersion& setLoggingConfiguration(const LoggingConfiguration & loggingConfiguration) { DARABONBA_PTR_SET_VALUE(loggingConfiguration_, loggingConfiguration) };
    inline FlowVersion& setLoggingConfiguration(LoggingConfiguration && loggingConfiguration) { DARABONBA_PTR_SET_RVALUE(loggingConfiguration_, loggingConfiguration) };


    // tracingConfiguration Field Functions 
    bool hasTracingConfiguration() const { return this->tracingConfiguration_ != nullptr;};
    void deleteTracingConfiguration() { this->tracingConfiguration_ = nullptr;};
    inline const TracingConfiguration & getTracingConfiguration() const { DARABONBA_PTR_GET_CONST(tracingConfiguration_, TracingConfiguration) };
    inline TracingConfiguration getTracingConfiguration() { DARABONBA_PTR_GET(tracingConfiguration_, TracingConfiguration) };
    inline FlowVersion& setTracingConfiguration(const TracingConfiguration & tracingConfiguration) { DARABONBA_PTR_SET_VALUE(tracingConfiguration_, tracingConfiguration) };
    inline FlowVersion& setTracingConfiguration(TracingConfiguration && tracingConfiguration) { DARABONBA_PTR_SET_RVALUE(tracingConfiguration_, tracingConfiguration) };


  protected:
    // 工作流版本的创建时间，采用ISO 8601格式
    shared_ptr<string> createdAt_ {};
    // 工作流版本的定义内容（完整快照，仅在 GetFlowVersion 时返回）
    shared_ptr<string> definition_ {};
    // 工作流版本的描述信息
    shared_ptr<string> description_ {};
    // 工作流版本的环境变量配置（完整快照，仅在 GetFlowVersion 时返回）
    shared_ptr<EnvironmentConfiguration> environmentConfiguration_ {};
    // 工作流版本的外部存储位置（完整快照，仅在 GetFlowVersion 时返回）
    shared_ptr<string> externalStorageLocation_ {};
    // 工作流的唯一标识符
    shared_ptr<string> flowId_ {};
    shared_ptr<string> flowName_ {};
    // 工作流版本号
    shared_ptr<string> flowVersion_ {};
    // 工作流版本的日志配置（完整快照，仅在 GetFlowVersion 时返回）
    shared_ptr<LoggingConfiguration> loggingConfiguration_ {};
    // 工作流版本的链路追踪配置（完整快照，仅在 GetFlowVersion 时返回）
    shared_ptr<TracingConfiguration> tracingConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
