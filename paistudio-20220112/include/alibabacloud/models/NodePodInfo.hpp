// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODEPODINFO_HPP_
#define ALIBABACLOUD_MODELS_NODEPODINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class NodePodInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodePodInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(PodIP, podIP_);
      DARABONBA_PTR_TO_JSON(PodName, podName_);
      DARABONBA_PTR_TO_JSON(PodNamespace, podNamespace_);
      DARABONBA_PTR_TO_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_TO_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
    };
    friend void from_json(const Darabonba::Json& j, NodePodInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(PodIP, podIP_);
      DARABONBA_PTR_FROM_JSON(PodName, podName_);
      DARABONBA_PTR_FROM_JSON(PodNamespace, podNamespace_);
      DARABONBA_PTR_FROM_JSON(ResourceSpec, resourceSpec_);
      DARABONBA_PTR_FROM_JSON(WorkloadId, workloadId_);
      DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
    };
    NodePodInfo() = default ;
    NodePodInfo(const NodePodInfo &) = default ;
    NodePodInfo(NodePodInfo &&) = default ;
    NodePodInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodePodInfo() = default ;
    NodePodInfo& operator=(const NodePodInfo &) = default ;
    NodePodInfo& operator=(NodePodInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->phase_ != nullptr
        && this->podIP_ != nullptr && this->podName_ != nullptr && this->podNamespace_ != nullptr && this->resourceSpec_ != nullptr && this->workloadId_ != nullptr
        && this->workloadType_ != nullptr; };
    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline NodePodInfo& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // podIP Field Functions 
    bool hasPodIP() const { return this->podIP_ != nullptr;};
    void deletePodIP() { this->podIP_ = nullptr;};
    inline string podIP() const { DARABONBA_PTR_GET_DEFAULT(podIP_, "") };
    inline NodePodInfo& setPodIP(string podIP) { DARABONBA_PTR_SET_VALUE(podIP_, podIP) };


    // podName Field Functions 
    bool hasPodName() const { return this->podName_ != nullptr;};
    void deletePodName() { this->podName_ = nullptr;};
    inline string podName() const { DARABONBA_PTR_GET_DEFAULT(podName_, "") };
    inline NodePodInfo& setPodName(string podName) { DARABONBA_PTR_SET_VALUE(podName_, podName) };


    // podNamespace Field Functions 
    bool hasPodNamespace() const { return this->podNamespace_ != nullptr;};
    void deletePodNamespace() { this->podNamespace_ = nullptr;};
    inline string podNamespace() const { DARABONBA_PTR_GET_DEFAULT(podNamespace_, "") };
    inline NodePodInfo& setPodNamespace(string podNamespace) { DARABONBA_PTR_SET_VALUE(podNamespace_, podNamespace) };


    // resourceSpec Field Functions 
    bool hasResourceSpec() const { return this->resourceSpec_ != nullptr;};
    void deleteResourceSpec() { this->resourceSpec_ = nullptr;};
    inline const ResourceAmount & resourceSpec() const { DARABONBA_PTR_GET_CONST(resourceSpec_, ResourceAmount) };
    inline ResourceAmount resourceSpec() { DARABONBA_PTR_GET(resourceSpec_, ResourceAmount) };
    inline NodePodInfo& setResourceSpec(const ResourceAmount & resourceSpec) { DARABONBA_PTR_SET_VALUE(resourceSpec_, resourceSpec) };
    inline NodePodInfo& setResourceSpec(ResourceAmount && resourceSpec) { DARABONBA_PTR_SET_RVALUE(resourceSpec_, resourceSpec) };


    // workloadId Field Functions 
    bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
    void deleteWorkloadId() { this->workloadId_ = nullptr;};
    inline string workloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
    inline NodePodInfo& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


    // workloadType Field Functions 
    bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
    void deleteWorkloadType() { this->workloadType_ = nullptr;};
    inline string workloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
    inline NodePodInfo& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


  protected:
    std::shared_ptr<string> phase_ = nullptr;
    std::shared_ptr<string> podIP_ = nullptr;
    std::shared_ptr<string> podName_ = nullptr;
    std::shared_ptr<string> podNamespace_ = nullptr;
    std::shared_ptr<ResourceAmount> resourceSpec_ = nullptr;
    std::shared_ptr<string> workloadId_ = nullptr;
    std::shared_ptr<string> workloadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
