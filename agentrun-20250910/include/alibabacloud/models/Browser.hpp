// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROWSER_HPP_
#define ALIBABACLOUD_MODELS_BROWSER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/NetworkConfiguration.hpp>
#include <alibabacloud/models/BrowserRecordingConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class Browser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Browser& obj) { 
      DARABONBA_PTR_TO_JSON(browserId, browserId_);
      DARABONBA_PTR_TO_JSON(browserName, browserName_);
      DARABONBA_PTR_TO_JSON(cpu, cpu_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(credentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_TO_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_TO_JSON(memory, memory_);
      DARABONBA_PTR_TO_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_TO_JSON(recording, recording_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(statusReason, statusReason_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, Browser& obj) { 
      DARABONBA_PTR_FROM_JSON(browserId, browserId_);
      DARABONBA_PTR_FROM_JSON(browserName, browserName_);
      DARABONBA_PTR_FROM_JSON(cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(credentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executionRoleArn, executionRoleArn_);
      DARABONBA_PTR_FROM_JSON(lastUpdatedAt, lastUpdatedAt_);
      DARABONBA_PTR_FROM_JSON(memory, memory_);
      DARABONBA_PTR_FROM_JSON(networkConfiguration, networkConfiguration_);
      DARABONBA_PTR_FROM_JSON(recording, recording_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(statusReason, statusReason_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    Browser() = default ;
    Browser(const Browser &) = default ;
    Browser(Browser &&) = default ;
    Browser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Browser() = default ;
    Browser& operator=(const Browser &) = default ;
    Browser& operator=(Browser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->browserId_ != nullptr
        && this->browserName_ != nullptr && this->cpu_ != nullptr && this->createdAt_ != nullptr && this->credentialId_ != nullptr && this->description_ != nullptr
        && this->executionRoleArn_ != nullptr && this->lastUpdatedAt_ != nullptr && this->memory_ != nullptr && this->networkConfiguration_ != nullptr && this->recording_ != nullptr
        && this->status_ != nullptr && this->statusReason_ != nullptr && this->tenantId_ != nullptr; };
    // browserId Field Functions 
    bool hasBrowserId() const { return this->browserId_ != nullptr;};
    void deleteBrowserId() { this->browserId_ = nullptr;};
    inline string browserId() const { DARABONBA_PTR_GET_DEFAULT(browserId_, "") };
    inline Browser& setBrowserId(string browserId) { DARABONBA_PTR_SET_VALUE(browserId_, browserId) };


    // browserName Field Functions 
    bool hasBrowserName() const { return this->browserName_ != nullptr;};
    void deleteBrowserName() { this->browserName_ = nullptr;};
    inline string browserName() const { DARABONBA_PTR_GET_DEFAULT(browserName_, "") };
    inline Browser& setBrowserName(string browserName) { DARABONBA_PTR_SET_VALUE(browserName_, browserName) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline float cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0.0) };
    inline Browser& setCpu(float cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline Browser& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string credentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline Browser& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Browser& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executionRoleArn Field Functions 
    bool hasExecutionRoleArn() const { return this->executionRoleArn_ != nullptr;};
    void deleteExecutionRoleArn() { this->executionRoleArn_ = nullptr;};
    inline string executionRoleArn() const { DARABONBA_PTR_GET_DEFAULT(executionRoleArn_, "") };
    inline Browser& setExecutionRoleArn(string executionRoleArn) { DARABONBA_PTR_SET_VALUE(executionRoleArn_, executionRoleArn) };


    // lastUpdatedAt Field Functions 
    bool hasLastUpdatedAt() const { return this->lastUpdatedAt_ != nullptr;};
    void deleteLastUpdatedAt() { this->lastUpdatedAt_ = nullptr;};
    inline string lastUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(lastUpdatedAt_, "") };
    inline Browser& setLastUpdatedAt(string lastUpdatedAt) { DARABONBA_PTR_SET_VALUE(lastUpdatedAt_, lastUpdatedAt) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline Browser& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkConfiguration Field Functions 
    bool hasNetworkConfiguration() const { return this->networkConfiguration_ != nullptr;};
    void deleteNetworkConfiguration() { this->networkConfiguration_ = nullptr;};
    inline const NetworkConfiguration & networkConfiguration() const { DARABONBA_PTR_GET_CONST(networkConfiguration_, NetworkConfiguration) };
    inline NetworkConfiguration networkConfiguration() { DARABONBA_PTR_GET(networkConfiguration_, NetworkConfiguration) };
    inline Browser& setNetworkConfiguration(const NetworkConfiguration & networkConfiguration) { DARABONBA_PTR_SET_VALUE(networkConfiguration_, networkConfiguration) };
    inline Browser& setNetworkConfiguration(NetworkConfiguration && networkConfiguration) { DARABONBA_PTR_SET_RVALUE(networkConfiguration_, networkConfiguration) };


    // recording Field Functions 
    bool hasRecording() const { return this->recording_ != nullptr;};
    void deleteRecording() { this->recording_ = nullptr;};
    inline const BrowserRecordingConfiguration & recording() const { DARABONBA_PTR_GET_CONST(recording_, BrowserRecordingConfiguration) };
    inline BrowserRecordingConfiguration recording() { DARABONBA_PTR_GET(recording_, BrowserRecordingConfiguration) };
    inline Browser& setRecording(const BrowserRecordingConfiguration & recording) { DARABONBA_PTR_SET_VALUE(recording_, recording) };
    inline Browser& setRecording(BrowserRecordingConfiguration && recording) { DARABONBA_PTR_SET_RVALUE(recording_, recording) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Browser& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline Browser& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline Browser& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    std::shared_ptr<string> browserId_ = nullptr;
    std::shared_ptr<string> browserName_ = nullptr;
    std::shared_ptr<float> cpu_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<string> credentialId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> executionRoleArn_ = nullptr;
    std::shared_ptr<string> lastUpdatedAt_ = nullptr;
    // 内存资源配置（单位：MB）
    std::shared_ptr<int32_t> memory_ = nullptr;
    std::shared_ptr<NetworkConfiguration> networkConfiguration_ = nullptr;
    std::shared_ptr<BrowserRecordingConfiguration> recording_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    // 当前状态的原因说明（如适用）
    std::shared_ptr<string> statusReason_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
