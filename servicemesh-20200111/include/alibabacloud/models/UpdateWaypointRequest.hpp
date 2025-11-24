// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWAYPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWAYPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateWaypointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWaypointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(HPAEnabled, HPAEnabled_);
      DARABONBA_PTR_TO_JSON(HPAMaxReplicas, HPAMaxReplicas_);
      DARABONBA_PTR_TO_JSON(HPAMinReplicas, HPAMinReplicas_);
      DARABONBA_PTR_TO_JSON(HPATargetCPU, HPATargetCPU_);
      DARABONBA_PTR_TO_JSON(HPATargetMemory, HPATargetMemory_);
      DARABONBA_PTR_TO_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_TO_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PreferECI, preferECI_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWaypointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(HPAEnabled, HPAEnabled_);
      DARABONBA_PTR_FROM_JSON(HPAMaxReplicas, HPAMaxReplicas_);
      DARABONBA_PTR_FROM_JSON(HPAMinReplicas, HPAMinReplicas_);
      DARABONBA_PTR_FROM_JSON(HPATargetCPU, HPATargetCPU_);
      DARABONBA_PTR_FROM_JSON(HPATargetMemory, HPATargetMemory_);
      DARABONBA_PTR_FROM_JSON(LimitCPU, limitCPU_);
      DARABONBA_PTR_FROM_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PreferECI, preferECI_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    UpdateWaypointRequest() = default ;
    UpdateWaypointRequest(const UpdateWaypointRequest &) = default ;
    UpdateWaypointRequest(UpdateWaypointRequest &&) = default ;
    UpdateWaypointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWaypointRequest() = default ;
    UpdateWaypointRequest& operator=(const UpdateWaypointRequest &) = default ;
    UpdateWaypointRequest& operator=(UpdateWaypointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->HPAEnabled_ == nullptr && return this->HPAMaxReplicas_ == nullptr && return this->HPAMinReplicas_ == nullptr && return this->HPATargetCPU_ == nullptr && return this->HPATargetMemory_ == nullptr
        && return this->limitCPU_ == nullptr && return this->limitMemory_ == nullptr && return this->name_ == nullptr && return this->namespace_ == nullptr && return this->preferECI_ == nullptr
        && return this->replicas_ == nullptr && return this->requestCPU_ == nullptr && return this->requestMemory_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateWaypointRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // HPAEnabled Field Functions 
    bool hasHPAEnabled() const { return this->HPAEnabled_ != nullptr;};
    void deleteHPAEnabled() { this->HPAEnabled_ = nullptr;};
    inline bool HPAEnabled() const { DARABONBA_PTR_GET_DEFAULT(HPAEnabled_, false) };
    inline UpdateWaypointRequest& setHPAEnabled(bool HPAEnabled) { DARABONBA_PTR_SET_VALUE(HPAEnabled_, HPAEnabled) };


    // HPAMaxReplicas Field Functions 
    bool hasHPAMaxReplicas() const { return this->HPAMaxReplicas_ != nullptr;};
    void deleteHPAMaxReplicas() { this->HPAMaxReplicas_ = nullptr;};
    inline int32_t HPAMaxReplicas() const { DARABONBA_PTR_GET_DEFAULT(HPAMaxReplicas_, 0) };
    inline UpdateWaypointRequest& setHPAMaxReplicas(int32_t HPAMaxReplicas) { DARABONBA_PTR_SET_VALUE(HPAMaxReplicas_, HPAMaxReplicas) };


    // HPAMinReplicas Field Functions 
    bool hasHPAMinReplicas() const { return this->HPAMinReplicas_ != nullptr;};
    void deleteHPAMinReplicas() { this->HPAMinReplicas_ = nullptr;};
    inline int32_t HPAMinReplicas() const { DARABONBA_PTR_GET_DEFAULT(HPAMinReplicas_, 0) };
    inline UpdateWaypointRequest& setHPAMinReplicas(int32_t HPAMinReplicas) { DARABONBA_PTR_SET_VALUE(HPAMinReplicas_, HPAMinReplicas) };


    // HPATargetCPU Field Functions 
    bool hasHPATargetCPU() const { return this->HPATargetCPU_ != nullptr;};
    void deleteHPATargetCPU() { this->HPATargetCPU_ = nullptr;};
    inline int32_t HPATargetCPU() const { DARABONBA_PTR_GET_DEFAULT(HPATargetCPU_, 0) };
    inline UpdateWaypointRequest& setHPATargetCPU(int32_t HPATargetCPU) { DARABONBA_PTR_SET_VALUE(HPATargetCPU_, HPATargetCPU) };


    // HPATargetMemory Field Functions 
    bool hasHPATargetMemory() const { return this->HPATargetMemory_ != nullptr;};
    void deleteHPATargetMemory() { this->HPATargetMemory_ = nullptr;};
    inline int32_t HPATargetMemory() const { DARABONBA_PTR_GET_DEFAULT(HPATargetMemory_, 0) };
    inline UpdateWaypointRequest& setHPATargetMemory(int32_t HPATargetMemory) { DARABONBA_PTR_SET_VALUE(HPATargetMemory_, HPATargetMemory) };


    // limitCPU Field Functions 
    bool hasLimitCPU() const { return this->limitCPU_ != nullptr;};
    void deleteLimitCPU() { this->limitCPU_ = nullptr;};
    inline string limitCPU() const { DARABONBA_PTR_GET_DEFAULT(limitCPU_, "") };
    inline UpdateWaypointRequest& setLimitCPU(string limitCPU) { DARABONBA_PTR_SET_VALUE(limitCPU_, limitCPU) };


    // limitMemory Field Functions 
    bool hasLimitMemory() const { return this->limitMemory_ != nullptr;};
    void deleteLimitMemory() { this->limitMemory_ = nullptr;};
    inline string limitMemory() const { DARABONBA_PTR_GET_DEFAULT(limitMemory_, "") };
    inline UpdateWaypointRequest& setLimitMemory(string limitMemory) { DARABONBA_PTR_SET_VALUE(limitMemory_, limitMemory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateWaypointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateWaypointRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // preferECI Field Functions 
    bool hasPreferECI() const { return this->preferECI_ != nullptr;};
    void deletePreferECI() { this->preferECI_ = nullptr;};
    inline bool preferECI() const { DARABONBA_PTR_GET_DEFAULT(preferECI_, false) };
    inline UpdateWaypointRequest& setPreferECI(bool preferECI) { DARABONBA_PTR_SET_VALUE(preferECI_, preferECI) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline UpdateWaypointRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline string requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, "") };
    inline UpdateWaypointRequest& setRequestCPU(string requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline string requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, "") };
    inline UpdateWaypointRequest& setRequestMemory(string requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateWaypointRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the cluster on the data plane.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to enable Horizontal Pod Autoscaling (HPA).
    std::shared_ptr<bool> HPAEnabled_ = nullptr;
    // The maximum number of waypoint proxy pods when HPA is enabled.
    std::shared_ptr<int32_t> HPAMaxReplicas_ = nullptr;
    // The minimum number of waypoint proxy pods when HPA is enabled.
    std::shared_ptr<int32_t> HPAMinReplicas_ = nullptr;
    // The expected CPU utilization when HPA is enabled.
    std::shared_ptr<int32_t> HPATargetCPU_ = nullptr;
    // The expected memory usage when HPA is enabled.
    std::shared_ptr<int32_t> HPATargetMemory_ = nullptr;
    // The maximum number of CPU cores that are available to the waypoint proxy pods.
    std::shared_ptr<string> limitCPU_ = nullptr;
    // The maximum size of the memory that is available to the waypoint proxy pods.
    std::shared_ptr<string> limitMemory_ = nullptr;
    // Waypoint名称。
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // Specifies whether to deploy waypoint proxy pods based on Elastic Container Instance (ECI).
    std::shared_ptr<bool> preferECI_ = nullptr;
    // The number of waypoint proxy pods.
    std::shared_ptr<int32_t> replicas_ = nullptr;
    // The number of CPU cores requested by the waypoint proxy pods.
    std::shared_ptr<string> requestCPU_ = nullptr;
    // The size of the memory requested by the waypoint proxy pods.
    std::shared_ptr<string> requestMemory_ = nullptr;
    // The Service Mesh (ASM) instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
