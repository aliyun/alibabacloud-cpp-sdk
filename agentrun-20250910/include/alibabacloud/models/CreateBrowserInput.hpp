// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBROWSERINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEBROWSERINPUT_HPP_
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
  class CreateBrowserInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBrowserInput& obj) { 
      DARABONBA_PTR_TO_JSON(browserName, browserName_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBrowserInput& obj) { 
      DARABONBA_PTR_FROM_JSON(browserName, browserName_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(sessionIdleTimeoutSeconds, sessionIdleTimeoutSeconds_);
    };
    CreateBrowserInput() = default ;
    CreateBrowserInput(const CreateBrowserInput &) = default ;
    CreateBrowserInput(CreateBrowserInput &&) = default ;
    CreateBrowserInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBrowserInput() = default ;
    CreateBrowserInput& operator=(const CreateBrowserInput &) = default ;
    CreateBrowserInput& operator=(CreateBrowserInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->browserName_ != nullptr
        && this->cpu_ != nullptr && this->credentialId_ != nullptr && this->description_ != nullptr && this->executionRoleArn_ != nullptr && this->memory_ != nullptr
        && this->networkConfiguration_ != nullptr && this->sessionIdleTimeoutSeconds_ != nullptr; };
    // browserName Field Functions 
    bool hasBrowserName() const { return this->browserName_ != nullptr;};
    void deleteBrowserName() { this->browserName_ = nullptr;};
    inline string browserName() const { DARABONBA_PTR_GET_DEFAULT(browserName_, "") };
    inline CreateBrowserInput& setBrowserName(string browserName) { DARABONBA_PTR_SET_VALUE(browserName_, browserName) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline CreateBrowserInput& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string credentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline CreateBrowserInput& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateBrowserInput& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string executionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline CreateBrowserInput& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateBrowserInput& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & networkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration networkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline CreateBrowserInput& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline CreateBrowserInput& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // sessionIdleTimeoutSeconds Field Functions 
    bool hasSessionIdleTimeoutSeconds() const { return this->sessionIdleTimeoutSeconds_ != nullptr;};
    void deleteSessionIdleTimeoutSeconds() { this->sessionIdleTimeoutSeconds_ = nullptr;};
    inline int32_t sessionIdleTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(sessionIdleTimeoutSeconds_, 0) };
    inline CreateBrowserInput& setSessionIdleTimeoutSeconds(int32_t sessionIdleTimeoutSeconds) { DARABONBA_PTR_SET_VALUE(sessionIdleTimeoutSeconds_, sessionIdleTimeoutSeconds) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> browserName_ = nullptr;
    // CPU资源配置（单位：核）
    // 
    // This parameter is required.
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<string> credentialId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> executionRoleArn_ = nullptr;
    // 内存资源配置（单位：MB）
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // This parameter is required.
    std::shared_ptr<NetworkConfiguration> networkConfiguration_ = nullptr;
    // 会话的空闲超时时间，单位为秒。实例没有会话请求后处于空闲状态，空闲态为闲置计费模式，超过此超时时间后会话自动过期，不可继续使用
    std::shared_ptr<int32_t> sessionIdleTimeoutSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
