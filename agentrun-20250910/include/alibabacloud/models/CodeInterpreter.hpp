// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CODEINTERPRETER_HPP_
#define ALIBABACLOUD_MODELS_CODEINTERPRETER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CodeInterpreter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CodeInterpreter& obj) { 
      DARABONBA_PTR_TO_JSON(codeInterpreterId, codeInterpreterId_);
      DARABONBA_PTR_TO_JSON(codeInterpreterName, codeInterpreterName_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CodeInterpreter& obj) { 
      DARABONBA_PTR_FROM_JSON(codeInterpreterId, codeInterpreterId_);
      DARABONBA_PTR_FROM_JSON(codeInterpreterName, codeInterpreterName_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CodeInterpreter() = default ;
    CodeInterpreter(const CodeInterpreter &) = default ;
    CodeInterpreter(CodeInterpreter &&) = default ;
    CodeInterpreter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CodeInterpreter() = default ;
    CodeInterpreter& operator=(const CodeInterpreter &) = default ;
    CodeInterpreter& operator=(CodeInterpreter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->codeInterpreterId_ == nullptr
        && return this->codeInterpreterName_ == nullptr && return this->cpu_ == nullptr && return this->createdAt_ == nullptr && return this->description_ == nullptr && return this->executionRoleArn_ == nullptr
        && return this->lastUpdatedAt_ == nullptr && return this->memory_ == nullptr && return this->networkConfiguration_ == nullptr && return this->status_ == nullptr && return this->statusReason_ == nullptr
        && return this->tenantId_ == nullptr; };
    // codeInterpreterId Field Functions 
    bool hasCodeInterpreterId() const { return this->codeInterpreterId_ != nullptr;};
    void deleteCodeInterpreterId() { this->codeInterpreterId_ = nullptr;};
    inline string codeInterpreterId() const { DARABONBA_PTR_GET_DEFAULT(codeInterpreterId_, "") };
    inline CodeInterpreter& setCodeInterpreterId(string codeInterpreterId) { DARABONBA_PTR_SET_VALUE(codeInterpreterId_, codeInterpreterId) };


    // codeInterpreterName Field Functions 
    bool hasCodeInterpreterName() const { return this->codeInterpreterName_ != nullptr;};
    void deleteCodeInterpreterName() { this->codeInterpreterName_ = nullptr;};
    inline string codeInterpreterName() const { DARABONBA_PTR_GET_DEFAULT(codeInterpreterName_, "") };
    inline CodeInterpreter& setCodeInterpreterName(string codeInterpreterName) { DARABONBA_PTR_SET_VALUE(codeInterpreterName_, codeInterpreterName) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CodeInterpreter& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline CodeInterpreter& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CodeInterpreter& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string executionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline CodeInterpreter& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string lastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline CodeInterpreter& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CodeInterpreter& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & networkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration networkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline CodeInterpreter& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline CodeInterpreter& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CodeInterpreter& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline CodeInterpreter& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CodeInterpreter& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 代码解释器的唯一标识符
    std::shared_ptr<string> codeInterpreterId_ = nullptr;
    // 代码解释器的名称，用于标识和区分不同的代码解释器实例
    std::shared_ptr<string> codeInterpreterName_ = nullptr;
    std::shared_ptr<float> cpu_ = nullptr;
    // 代码解释器的创建时间，采用ISO 8601格式
    std::shared_ptr<string> createdAt_ = nullptr;
    // 代码解释器的描述信息，说明该解释器的用途和功能
    std::shared_ptr<string> description_ = nullptr;
    // 此代码解释器的执行角色
    std::shared_ptr<string> executionRoleArn_ = nullptr;
    // 代码解释器的最后更新时间，采用ISO 8601格式
    std::shared_ptr<string> lastUpdatedAt_ = nullptr;
    // 内存资源配置（单位：MB）
    std::shared_ptr<int32_t> memory_ = nullptr;
    // 代码解释器的网络配置信息
    std::shared_ptr<NetworkConfiguration> networkConfiguration_ = nullptr;
    // 代码解释器的当前状态，如READY（就绪）、TERMINATED（已终止）等
    std::shared_ptr<string> status_ = nullptr;
    // 当前状态的原因说明（如适用）
    std::shared_ptr<string> statusReason_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
