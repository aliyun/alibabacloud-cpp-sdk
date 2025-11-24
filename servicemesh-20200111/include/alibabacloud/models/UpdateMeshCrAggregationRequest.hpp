// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESHCRAGGREGATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESHCRAGGREGATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateMeshCRAggregationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMeshCRAggregationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CPULimit, CPULimit_);
      DARABONBA_PTR_TO_JSON(CPURequirement, CPURequirement_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_TO_JSON(MemoryRequirement, memoryRequirement_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(UsePublicApiServer, usePublicApiServer_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMeshCRAggregationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CPULimit, CPULimit_);
      DARABONBA_PTR_FROM_JSON(CPURequirement, CPURequirement_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
      DARABONBA_PTR_FROM_JSON(MemoryRequirement, memoryRequirement_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(UsePublicApiServer, usePublicApiServer_);
    };
    UpdateMeshCRAggregationRequest() = default ;
    UpdateMeshCRAggregationRequest(const UpdateMeshCRAggregationRequest &) = default ;
    UpdateMeshCRAggregationRequest(UpdateMeshCRAggregationRequest &&) = default ;
    UpdateMeshCRAggregationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMeshCRAggregationRequest() = default ;
    UpdateMeshCRAggregationRequest& operator=(const UpdateMeshCRAggregationRequest &) = default ;
    UpdateMeshCRAggregationRequest& operator=(UpdateMeshCRAggregationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPULimit_ == nullptr
        && return this->CPURequirement_ == nullptr && return this->enabled_ == nullptr && return this->memoryLimit_ == nullptr && return this->memoryRequirement_ == nullptr && return this->serviceMeshId_ == nullptr
        && return this->usePublicApiServer_ == nullptr; };
    // CPULimit Field Functions 
    bool hasCPULimit() const { return this->CPULimit_ != nullptr;};
    void deleteCPULimit() { this->CPULimit_ = nullptr;};
    inline string CPULimit() const { DARABONBA_PTR_GET_DEFAULT(CPULimit_, "") };
    inline UpdateMeshCRAggregationRequest& setCPULimit(string CPULimit) { DARABONBA_PTR_SET_VALUE(CPULimit_, CPULimit) };


    // CPURequirement Field Functions 
    bool hasCPURequirement() const { return this->CPURequirement_ != nullptr;};
    void deleteCPURequirement() { this->CPURequirement_ = nullptr;};
    inline string CPURequirement() const { DARABONBA_PTR_GET_DEFAULT(CPURequirement_, "") };
    inline UpdateMeshCRAggregationRequest& setCPURequirement(string CPURequirement) { DARABONBA_PTR_SET_VALUE(CPURequirement_, CPURequirement) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateMeshCRAggregationRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline string memoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, "") };
    inline UpdateMeshCRAggregationRequest& setMemoryLimit(string memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // memoryRequirement Field Functions 
    bool hasMemoryRequirement() const { return this->memoryRequirement_ != nullptr;};
    void deleteMemoryRequirement() { this->memoryRequirement_ = nullptr;};
    inline string memoryRequirement() const { DARABONBA_PTR_GET_DEFAULT(memoryRequirement_, "") };
    inline UpdateMeshCRAggregationRequest& setMemoryRequirement(string memoryRequirement) { DARABONBA_PTR_SET_VALUE(memoryRequirement_, memoryRequirement) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateMeshCRAggregationRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // usePublicApiServer Field Functions 
    bool hasUsePublicApiServer() const { return this->usePublicApiServer_ != nullptr;};
    void deleteUsePublicApiServer() { this->usePublicApiServer_ = nullptr;};
    inline bool usePublicApiServer() const { DARABONBA_PTR_GET_DEFAULT(usePublicApiServer_, false) };
    inline UpdateMeshCRAggregationRequest& setUsePublicApiServer(bool usePublicApiServer) { DARABONBA_PTR_SET_VALUE(usePublicApiServer_, usePublicApiServer) };


  protected:
    // The maximum number of CPU cores that are available for the components installed in the ACK cluster on the data plane if you enable the Kubernetes API to access Istio resources in the ASM instance. You can specify the parameter value in the standard quantity representation used by Kubernetes.
    std::shared_ptr<string> CPULimit_ = nullptr;
    // The number of CPU cores that are requested by the components installed in the Container Service for Kubernetes (ACK) cluster on the data plane if you enable the Kubernetes API to access Istio resources in the ASM instance. You can specify the parameter value in the standard quantity representation used by Kubernetes.
    std::shared_ptr<string> CPURequirement_ = nullptr;
    // Specifies whether to enable the Kubernetes API on the data plane to access Istio resources in the ASM instance. Valid values:
    // 
    // *   `true`: enables the Kubernetes API to access Istio resources in the ASM instance.
    // *   `false`: disables the Kubernetes API to access Istio resources in the ASM instance.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The maximum size of the memory that is available for the components installed in the ACK cluster on the data plane if you enable the Kubernetes API to access Istio resources in the ASM instance. You can specify the parameter value in the standard quantity representation used by Kubernetes. 1 Mi equals 1,024 KB.
    std::shared_ptr<string> memoryLimit_ = nullptr;
    // The size of the memory that is requested by the components installed in the ACK cluster on the data plane if you enable the Kubernetes API to access Istio resources in the ASM instance. You can specify the parameter value in the standard quantity representation used by Kubernetes. 1 Mi equals 1,024 KB.
    std::shared_ptr<string> memoryRequirement_ = nullptr;
    // The Service Mesh (ASM) instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // Specifies whether the Kubernetes API on the data plane uses the public endpoint of the API server to access Istio resources in the ASM instance. Valid values:
    // 
    // *   `true`: The Kubernetes API on the data plane uses the public endpoint of the API server to access Istio resources in the ASM instance.
    // *   `false`: The Kubernetes API on the data plane uses the private endpoint of the API server to access Istio resources in the ASM instance.
    // 
    // Default value: `false`.
    std::shared_ptr<bool> usePublicApiServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
