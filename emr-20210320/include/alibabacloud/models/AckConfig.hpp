// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ACKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/AckConfigPvcs.hpp>
#include <alibabacloud/models/Toleration.hpp>
#include <alibabacloud/models/AckConfigVolumeMounts.hpp>
#include <alibabacloud/models/AckConfigVolumes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AckConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AckConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AckInstanceId, ackInstanceId_);
      DARABONBA_PTR_TO_JSON(CustomAnnotations, customAnnotations_);
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_TO_JSON(DataDiskStorageClass, dataDiskStorageClass_);
      DARABONBA_PTR_TO_JSON(LimitCpu, limitCpu_);
      DARABONBA_PTR_TO_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_TO_JSON(MountHostCgroup, mountHostCgroup_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NodeAffinity, nodeAffinity_);
      DARABONBA_PTR_TO_JSON(NodeSelectors, nodeSelectors_);
      DARABONBA_PTR_TO_JSON(PodAffinity, podAffinity_);
      DARABONBA_PTR_TO_JSON(PodAntiAffinity, podAntiAffinity_);
      DARABONBA_PTR_TO_JSON(PreStartCommand, preStartCommand_);
      DARABONBA_PTR_TO_JSON(Pvcs, pvcs_);
      DARABONBA_PTR_TO_JSON(RequestCpu, requestCpu_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_TO_JSON(Tolerations, tolerations_);
      DARABONBA_PTR_TO_JSON(VolumeMounts, volumeMounts_);
      DARABONBA_PTR_TO_JSON(Volumes, volumes_);
    };
    friend void from_json(const Darabonba::Json& j, AckConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AckInstanceId, ackInstanceId_);
      DARABONBA_PTR_FROM_JSON(CustomAnnotations, customAnnotations_);
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
      DARABONBA_PTR_FROM_JSON(DataDiskStorageClass, dataDiskStorageClass_);
      DARABONBA_PTR_FROM_JSON(LimitCpu, limitCpu_);
      DARABONBA_PTR_FROM_JSON(LimitMemory, limitMemory_);
      DARABONBA_PTR_FROM_JSON(MountHostCgroup, mountHostCgroup_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NodeAffinity, nodeAffinity_);
      DARABONBA_PTR_FROM_JSON(NodeSelectors, nodeSelectors_);
      DARABONBA_PTR_FROM_JSON(PodAffinity, podAffinity_);
      DARABONBA_PTR_FROM_JSON(PodAntiAffinity, podAntiAffinity_);
      DARABONBA_PTR_FROM_JSON(PreStartCommand, preStartCommand_);
      DARABONBA_PTR_FROM_JSON(Pvcs, pvcs_);
      DARABONBA_PTR_FROM_JSON(RequestCpu, requestCpu_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_FROM_JSON(Tolerations, tolerations_);
      DARABONBA_PTR_FROM_JSON(VolumeMounts, volumeMounts_);
      DARABONBA_PTR_FROM_JSON(Volumes, volumes_);
    };
    AckConfig() = default ;
    AckConfig(const AckConfig &) = default ;
    AckConfig(AckConfig &&) = default ;
    AckConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AckConfig() = default ;
    AckConfig& operator=(const AckConfig &) = default ;
    AckConfig& operator=(AckConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ackInstanceId_ == nullptr
        && return this->customAnnotations_ == nullptr && return this->customLabels_ == nullptr && return this->dataDiskSize_ == nullptr && return this->dataDiskStorageClass_ == nullptr && return this->limitCpu_ == nullptr
        && return this->limitMemory_ == nullptr && return this->mountHostCgroup_ == nullptr && return this->namespace_ == nullptr && return this->nodeAffinity_ == nullptr && return this->nodeSelectors_ == nullptr
        && return this->podAffinity_ == nullptr && return this->podAntiAffinity_ == nullptr && return this->preStartCommand_ == nullptr && return this->pvcs_ == nullptr && return this->requestCpu_ == nullptr
        && return this->requestMemory_ == nullptr && return this->tolerations_ == nullptr && return this->volumeMounts_ == nullptr && return this->volumes_ == nullptr; };
    // ackInstanceId Field Functions 
    bool hasAckInstanceId() const { return this->ackInstanceId_ != nullptr;};
    void deleteAckInstanceId() { this->ackInstanceId_ = nullptr;};
    inline string ackInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ackInstanceId_, "") };
    inline AckConfig& setAckInstanceId(string ackInstanceId) { DARABONBA_PTR_SET_VALUE(ackInstanceId_, ackInstanceId) };


    // customAnnotations Field Functions 
    bool hasCustomAnnotations() const { return this->customAnnotations_ != nullptr;};
    void deleteCustomAnnotations() { this->customAnnotations_ = nullptr;};
    inline const vector<Tag> & customAnnotations() const { DARABONBA_PTR_GET_CONST(customAnnotations_, vector<Tag>) };
    inline vector<Tag> customAnnotations() { DARABONBA_PTR_GET(customAnnotations_, vector<Tag>) };
    inline AckConfig& setCustomAnnotations(const vector<Tag> & customAnnotations) { DARABONBA_PTR_SET_VALUE(customAnnotations_, customAnnotations) };
    inline AckConfig& setCustomAnnotations(vector<Tag> && customAnnotations) { DARABONBA_PTR_SET_RVALUE(customAnnotations_, customAnnotations) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline const vector<Tag> & customLabels() const { DARABONBA_PTR_GET_CONST(customLabels_, vector<Tag>) };
    inline vector<Tag> customLabels() { DARABONBA_PTR_GET(customLabels_, vector<Tag>) };
    inline AckConfig& setCustomLabels(const vector<Tag> & customLabels) { DARABONBA_PTR_SET_VALUE(customLabels_, customLabels) };
    inline AckConfig& setCustomLabels(vector<Tag> && customLabels) { DARABONBA_PTR_SET_RVALUE(customLabels_, customLabels) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t dataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline AckConfig& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // dataDiskStorageClass Field Functions 
    bool hasDataDiskStorageClass() const { return this->dataDiskStorageClass_ != nullptr;};
    void deleteDataDiskStorageClass() { this->dataDiskStorageClass_ = nullptr;};
    inline string dataDiskStorageClass() const { DARABONBA_PTR_GET_DEFAULT(dataDiskStorageClass_, "") };
    inline AckConfig& setDataDiskStorageClass(string dataDiskStorageClass) { DARABONBA_PTR_SET_VALUE(dataDiskStorageClass_, dataDiskStorageClass) };


    // limitCpu Field Functions 
    bool hasLimitCpu() const { return this->limitCpu_ != nullptr;};
    void deleteLimitCpu() { this->limitCpu_ = nullptr;};
    inline float limitCpu() const { DARABONBA_PTR_GET_DEFAULT(limitCpu_, 0.0) };
    inline AckConfig& setLimitCpu(float limitCpu) { DARABONBA_PTR_SET_VALUE(limitCpu_, limitCpu) };


    // limitMemory Field Functions 
    bool hasLimitMemory() const { return this->limitMemory_ != nullptr;};
    void deleteLimitMemory() { this->limitMemory_ = nullptr;};
    inline float limitMemory() const { DARABONBA_PTR_GET_DEFAULT(limitMemory_, 0.0) };
    inline AckConfig& setLimitMemory(float limitMemory) { DARABONBA_PTR_SET_VALUE(limitMemory_, limitMemory) };


    // mountHostCgroup Field Functions 
    bool hasMountHostCgroup() const { return this->mountHostCgroup_ != nullptr;};
    void deleteMountHostCgroup() { this->mountHostCgroup_ = nullptr;};
    inline bool mountHostCgroup() const { DARABONBA_PTR_GET_DEFAULT(mountHostCgroup_, false) };
    inline AckConfig& setMountHostCgroup(bool mountHostCgroup) { DARABONBA_PTR_SET_VALUE(mountHostCgroup_, mountHostCgroup) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline AckConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nodeAffinity Field Functions 
    bool hasNodeAffinity() const { return this->nodeAffinity_ != nullptr;};
    void deleteNodeAffinity() { this->nodeAffinity_ = nullptr;};
    inline string nodeAffinity() const { DARABONBA_PTR_GET_DEFAULT(nodeAffinity_, "") };
    inline AckConfig& setNodeAffinity(string nodeAffinity) { DARABONBA_PTR_SET_VALUE(nodeAffinity_, nodeAffinity) };


    // nodeSelectors Field Functions 
    bool hasNodeSelectors() const { return this->nodeSelectors_ != nullptr;};
    void deleteNodeSelectors() { this->nodeSelectors_ = nullptr;};
    inline const vector<Tag> & nodeSelectors() const { DARABONBA_PTR_GET_CONST(nodeSelectors_, vector<Tag>) };
    inline vector<Tag> nodeSelectors() { DARABONBA_PTR_GET(nodeSelectors_, vector<Tag>) };
    inline AckConfig& setNodeSelectors(const vector<Tag> & nodeSelectors) { DARABONBA_PTR_SET_VALUE(nodeSelectors_, nodeSelectors) };
    inline AckConfig& setNodeSelectors(vector<Tag> && nodeSelectors) { DARABONBA_PTR_SET_RVALUE(nodeSelectors_, nodeSelectors) };


    // podAffinity Field Functions 
    bool hasPodAffinity() const { return this->podAffinity_ != nullptr;};
    void deletePodAffinity() { this->podAffinity_ = nullptr;};
    inline string podAffinity() const { DARABONBA_PTR_GET_DEFAULT(podAffinity_, "") };
    inline AckConfig& setPodAffinity(string podAffinity) { DARABONBA_PTR_SET_VALUE(podAffinity_, podAffinity) };


    // podAntiAffinity Field Functions 
    bool hasPodAntiAffinity() const { return this->podAntiAffinity_ != nullptr;};
    void deletePodAntiAffinity() { this->podAntiAffinity_ = nullptr;};
    inline string podAntiAffinity() const { DARABONBA_PTR_GET_DEFAULT(podAntiAffinity_, "") };
    inline AckConfig& setPodAntiAffinity(string podAntiAffinity) { DARABONBA_PTR_SET_VALUE(podAntiAffinity_, podAntiAffinity) };


    // preStartCommand Field Functions 
    bool hasPreStartCommand() const { return this->preStartCommand_ != nullptr;};
    void deletePreStartCommand() { this->preStartCommand_ = nullptr;};
    inline const vector<string> & preStartCommand() const { DARABONBA_PTR_GET_CONST(preStartCommand_, vector<string>) };
    inline vector<string> preStartCommand() { DARABONBA_PTR_GET(preStartCommand_, vector<string>) };
    inline AckConfig& setPreStartCommand(const vector<string> & preStartCommand) { DARABONBA_PTR_SET_VALUE(preStartCommand_, preStartCommand) };
    inline AckConfig& setPreStartCommand(vector<string> && preStartCommand) { DARABONBA_PTR_SET_RVALUE(preStartCommand_, preStartCommand) };


    // pvcs Field Functions 
    bool hasPvcs() const { return this->pvcs_ != nullptr;};
    void deletePvcs() { this->pvcs_ = nullptr;};
    inline const vector<AckConfigPvcs> & pvcs() const { DARABONBA_PTR_GET_CONST(pvcs_, vector<AckConfigPvcs>) };
    inline vector<AckConfigPvcs> pvcs() { DARABONBA_PTR_GET(pvcs_, vector<AckConfigPvcs>) };
    inline AckConfig& setPvcs(const vector<AckConfigPvcs> & pvcs) { DARABONBA_PTR_SET_VALUE(pvcs_, pvcs) };
    inline AckConfig& setPvcs(vector<AckConfigPvcs> && pvcs) { DARABONBA_PTR_SET_RVALUE(pvcs_, pvcs) };


    // requestCpu Field Functions 
    bool hasRequestCpu() const { return this->requestCpu_ != nullptr;};
    void deleteRequestCpu() { this->requestCpu_ = nullptr;};
    inline float requestCpu() const { DARABONBA_PTR_GET_DEFAULT(requestCpu_, 0.0) };
    inline AckConfig& setRequestCpu(float requestCpu) { DARABONBA_PTR_SET_VALUE(requestCpu_, requestCpu) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline float requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, 0.0) };
    inline AckConfig& setRequestMemory(float requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // tolerations Field Functions 
    bool hasTolerations() const { return this->tolerations_ != nullptr;};
    void deleteTolerations() { this->tolerations_ = nullptr;};
    inline const vector<Toleration> & tolerations() const { DARABONBA_PTR_GET_CONST(tolerations_, vector<Toleration>) };
    inline vector<Toleration> tolerations() { DARABONBA_PTR_GET(tolerations_, vector<Toleration>) };
    inline AckConfig& setTolerations(const vector<Toleration> & tolerations) { DARABONBA_PTR_SET_VALUE(tolerations_, tolerations) };
    inline AckConfig& setTolerations(vector<Toleration> && tolerations) { DARABONBA_PTR_SET_RVALUE(tolerations_, tolerations) };


    // volumeMounts Field Functions 
    bool hasVolumeMounts() const { return this->volumeMounts_ != nullptr;};
    void deleteVolumeMounts() { this->volumeMounts_ = nullptr;};
    inline const vector<AckConfigVolumeMounts> & volumeMounts() const { DARABONBA_PTR_GET_CONST(volumeMounts_, vector<AckConfigVolumeMounts>) };
    inline vector<AckConfigVolumeMounts> volumeMounts() { DARABONBA_PTR_GET(volumeMounts_, vector<AckConfigVolumeMounts>) };
    inline AckConfig& setVolumeMounts(const vector<AckConfigVolumeMounts> & volumeMounts) { DARABONBA_PTR_SET_VALUE(volumeMounts_, volumeMounts) };
    inline AckConfig& setVolumeMounts(vector<AckConfigVolumeMounts> && volumeMounts) { DARABONBA_PTR_SET_RVALUE(volumeMounts_, volumeMounts) };


    // volumes Field Functions 
    bool hasVolumes() const { return this->volumes_ != nullptr;};
    void deleteVolumes() { this->volumes_ = nullptr;};
    inline const vector<AckConfigVolumes> & volumes() const { DARABONBA_PTR_GET_CONST(volumes_, vector<AckConfigVolumes>) };
    inline vector<AckConfigVolumes> volumes() { DARABONBA_PTR_GET(volumes_, vector<AckConfigVolumes>) };
    inline AckConfig& setVolumes(const vector<AckConfigVolumes> & volumes) { DARABONBA_PTR_SET_VALUE(volumes_, volumes) };
    inline AckConfig& setVolumes(vector<AckConfigVolumes> && volumes) { DARABONBA_PTR_SET_RVALUE(volumes_, volumes) };


  protected:
    // ack集群id
    std::shared_ptr<string> ackInstanceId_ = nullptr;
    std::shared_ptr<vector<Tag>> customAnnotations_ = nullptr;
    std::shared_ptr<vector<Tag>> customLabels_ = nullptr;
    std::shared_ptr<int32_t> dataDiskSize_ = nullptr;
    std::shared_ptr<string> dataDiskStorageClass_ = nullptr;
    // Pod的CPU限制值。
    std::shared_ptr<float> limitCpu_ = nullptr;
    // Pod的内存限制值。
    std::shared_ptr<float> limitMemory_ = nullptr;
    std::shared_ptr<bool> mountHostCgroup_ = nullptr;
    // ack 命名空间
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> nodeAffinity_ = nullptr;
    // ack的节点标签限制
    std::shared_ptr<vector<Tag>> nodeSelectors_ = nullptr;
    std::shared_ptr<string> podAffinity_ = nullptr;
    std::shared_ptr<string> podAntiAffinity_ = nullptr;
    std::shared_ptr<vector<string>> preStartCommand_ = nullptr;
    std::shared_ptr<vector<AckConfigPvcs>> pvcs_ = nullptr;
    // Pod的CPU请求值
    std::shared_ptr<float> requestCpu_ = nullptr;
    // Pod的内存请求值。
    std::shared_ptr<float> requestMemory_ = nullptr;
    // ack的节点污点容忍
    std::shared_ptr<vector<Toleration>> tolerations_ = nullptr;
    std::shared_ptr<vector<AckConfigVolumeMounts>> volumeMounts_ = nullptr;
    std::shared_ptr<vector<AckConfigVolumes>> volumes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
