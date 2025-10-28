// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEK8SAPPLICATIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEK8SAPPLICATIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateK8sApplicationConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateK8sApplicationConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_TO_JSON(CpuRequest, cpuRequest_);
      DARABONBA_PTR_TO_JSON(EphemeralStorageLimit, ephemeralStorageLimit_);
      DARABONBA_PTR_TO_JSON(EphemeralStorageRequest, ephemeralStorageRequest_);
      DARABONBA_PTR_TO_JSON(McpuLimit, mcpuLimit_);
      DARABONBA_PTR_TO_JSON(McpuRequest, mcpuRequest_);
      DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_TO_JSON(MemoryRequest, memoryRequest_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateK8sApplicationConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CpuLimit, cpuLimit_);
      DARABONBA_PTR_FROM_JSON(CpuRequest, cpuRequest_);
      DARABONBA_PTR_FROM_JSON(EphemeralStorageLimit, ephemeralStorageLimit_);
      DARABONBA_PTR_FROM_JSON(EphemeralStorageRequest, ephemeralStorageRequest_);
      DARABONBA_PTR_FROM_JSON(McpuLimit, mcpuLimit_);
      DARABONBA_PTR_FROM_JSON(McpuRequest, mcpuRequest_);
      DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_FROM_JSON(MemoryRequest, memoryRequest_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    UpdateK8sApplicationConfigRequest() = default ;
    UpdateK8sApplicationConfigRequest(const UpdateK8sApplicationConfigRequest &) = default ;
    UpdateK8sApplicationConfigRequest(UpdateK8sApplicationConfigRequest &&) = default ;
    UpdateK8sApplicationConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateK8sApplicationConfigRequest() = default ;
    UpdateK8sApplicationConfigRequest& operator=(const UpdateK8sApplicationConfigRequest &) = default ;
    UpdateK8sApplicationConfigRequest& operator=(UpdateK8sApplicationConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->clusterId_ == nullptr && return this->cpuLimit_ == nullptr && return this->cpuRequest_ == nullptr && return this->ephemeralStorageLimit_ == nullptr && return this->ephemeralStorageRequest_ == nullptr
        && return this->mcpuLimit_ == nullptr && return this->mcpuRequest_ == nullptr && return this->memoryLimit_ == nullptr && return this->memoryRequest_ == nullptr && return this->timeout_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateK8sApplicationConfigRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateK8sApplicationConfigRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // cpuLimit Field Functions 
    bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
    void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
    inline string cpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, "") };
    inline UpdateK8sApplicationConfigRequest& setCpuLimit(string cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


    // cpuRequest Field Functions 
    bool hasCpuRequest() const { return this->cpuRequest_ != nullptr;};
    void deleteCpuRequest() { this->cpuRequest_ = nullptr;};
    inline string cpuRequest() const { DARABONBA_PTR_GET_DEFAULT(cpuRequest_, "") };
    inline UpdateK8sApplicationConfigRequest& setCpuRequest(string cpuRequest) { DARABONBA_PTR_SET_VALUE(cpuRequest_, cpuRequest) };


    // ephemeralStorageLimit Field Functions 
    bool hasEphemeralStorageLimit() const { return this->ephemeralStorageLimit_ != nullptr;};
    void deleteEphemeralStorageLimit() { this->ephemeralStorageLimit_ = nullptr;};
    inline string ephemeralStorageLimit() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorageLimit_, "") };
    inline UpdateK8sApplicationConfigRequest& setEphemeralStorageLimit(string ephemeralStorageLimit) { DARABONBA_PTR_SET_VALUE(ephemeralStorageLimit_, ephemeralStorageLimit) };


    // ephemeralStorageRequest Field Functions 
    bool hasEphemeralStorageRequest() const { return this->ephemeralStorageRequest_ != nullptr;};
    void deleteEphemeralStorageRequest() { this->ephemeralStorageRequest_ = nullptr;};
    inline string ephemeralStorageRequest() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorageRequest_, "") };
    inline UpdateK8sApplicationConfigRequest& setEphemeralStorageRequest(string ephemeralStorageRequest) { DARABONBA_PTR_SET_VALUE(ephemeralStorageRequest_, ephemeralStorageRequest) };


    // mcpuLimit Field Functions 
    bool hasMcpuLimit() const { return this->mcpuLimit_ != nullptr;};
    void deleteMcpuLimit() { this->mcpuLimit_ = nullptr;};
    inline string mcpuLimit() const { DARABONBA_PTR_GET_DEFAULT(mcpuLimit_, "") };
    inline UpdateK8sApplicationConfigRequest& setMcpuLimit(string mcpuLimit) { DARABONBA_PTR_SET_VALUE(mcpuLimit_, mcpuLimit) };


    // mcpuRequest Field Functions 
    bool hasMcpuRequest() const { return this->mcpuRequest_ != nullptr;};
    void deleteMcpuRequest() { this->mcpuRequest_ = nullptr;};
    inline string mcpuRequest() const { DARABONBA_PTR_GET_DEFAULT(mcpuRequest_, "") };
    inline UpdateK8sApplicationConfigRequest& setMcpuRequest(string mcpuRequest) { DARABONBA_PTR_SET_VALUE(mcpuRequest_, mcpuRequest) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline string memoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, "") };
    inline UpdateK8sApplicationConfigRequest& setMemoryLimit(string memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // memoryRequest Field Functions 
    bool hasMemoryRequest() const { return this->memoryRequest_ != nullptr;};
    void deleteMemoryRequest() { this->memoryRequest_ = nullptr;};
    inline string memoryRequest() const { DARABONBA_PTR_GET_DEFAULT(memoryRequest_, "") };
    inline UpdateK8sApplicationConfigRequest& setMemoryRequest(string memoryRequest) { DARABONBA_PTR_SET_VALUE(memoryRequest_, memoryRequest) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int32_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0) };
    inline UpdateK8sApplicationConfigRequest& setTimeout(int32_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The ID of the application. You can query the application ID by calling the ListApplication operation. For more information, see [ListApplication](https://help.aliyun.com/document_detail/423162.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the cluster. You can query the cluster ID by calling the ListCluster operation. For more information, see [ListCluster](https://help.aliyun.com/document_detail/411844.html).
    std::shared_ptr<string> clusterId_ = nullptr;
    // The maximum number of CPU cores allowed for each application instance when the application is running. The value 0 indicates that no limit is set on CPU cores.
    std::shared_ptr<string> cpuLimit_ = nullptr;
    // The number of CPU cores requested for each application instance when the application is running. Unit: cores. We recommend that you set this parameter. The value 0 indicates that no limit is set on CPU cores.
    // 
    // > You must set this parameter together with the CpuLimit parameter. Make sure that the value of this parameter does not exceed that of the CpuLimit parameter.
    std::shared_ptr<string> cpuRequest_ = nullptr;
    // The maximum size of space required by ephemeral storage. Unit: GB. The value 0 indicates that no limit is set on the ephemeral storage space.
    std::shared_ptr<string> ephemeralStorageLimit_ = nullptr;
    // The minimum size of space required by ephemeral storage. Unit: GB. The value 0 indicates that no limit is set on the ephemeral storage space.
    // 
    // > You must set this parameter together with the EphemeralStorageLimit parameter. Make sure that the value of this parameter does not exceed that of the EphemeralStorageLimit parameter.
    std::shared_ptr<string> ephemeralStorageRequest_ = nullptr;
    // The maximum number of CPU cores allowed. The value 0 indicates that no limit is set on CPU cores.
    std::shared_ptr<string> mcpuLimit_ = nullptr;
    // The minimum number of CPU cores required. Unit: cores. The value 0 indicates that no limit is set on CPU cores.
    // 
    // > You must set this parameter together with the CpuLimit parameter. Make sure that the value of this parameter does not exceed that of the CpuLimit parameter.
    std::shared_ptr<string> mcpuRequest_ = nullptr;
    // The maximum size of memory allowed for each application instance when the application is running. Unit: MB. The value 0 indicates that no limit is set on the memory size.
    std::shared_ptr<string> memoryLimit_ = nullptr;
    // The size of memory requested for each application instance when the application is running. Unit: MB. We recommend that you set this parameter. If you do not want to apply for a memory quota, set this parameter to 0.
    // 
    // > You must set this parameter together with the MemoryLimit parameter. Make sure that the value of this parameter does not exceed that of the MemoryLimit parameter.
    std::shared_ptr<string> memoryRequest_ = nullptr;
    // The timeout period of the change process. Valid values: 1 to 1800. Default value: 600. Unit: seconds.
    std::shared_ptr<int32_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
