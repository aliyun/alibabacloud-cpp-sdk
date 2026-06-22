// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ACKCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Tag.hpp>
#include <alibabacloud/models/Toleration.hpp>
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
    class Volumes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Volumes& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Volumes& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Volumes() = default ;
      Volumes(const Volumes &) = default ;
      Volumes(Volumes &&) = default ;
      Volumes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Volumes() = default ;
      Volumes& operator=(const Volumes &) = default ;
      Volumes& operator=(Volumes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->path_ == nullptr && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Volumes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Volumes& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Volumes& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> path_ {};
      shared_ptr<string> type_ {};
    };

    class VolumeMounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VolumeMounts& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, VolumeMounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      VolumeMounts() = default ;
      VolumeMounts(const VolumeMounts &) = default ;
      VolumeMounts(VolumeMounts &&) = default ;
      VolumeMounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VolumeMounts() = default ;
      VolumeMounts& operator=(const VolumeMounts &) = default ;
      VolumeMounts& operator=(VolumeMounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->path_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline VolumeMounts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline VolumeMounts& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> path_ {};
    };

    class Pvcs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Pvcs& obj) { 
        DARABONBA_PTR_TO_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_TO_JSON(DataDiskStorageClass, dataDiskStorageClass_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, Pvcs& obj) { 
        DARABONBA_PTR_FROM_JSON(DataDiskSize, dataDiskSize_);
        DARABONBA_PTR_FROM_JSON(DataDiskStorageClass, dataDiskStorageClass_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      Pvcs() = default ;
      Pvcs(const Pvcs &) = default ;
      Pvcs(Pvcs &&) = default ;
      Pvcs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Pvcs() = default ;
      Pvcs& operator=(const Pvcs &) = default ;
      Pvcs& operator=(Pvcs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataDiskSize_ == nullptr
        && this->dataDiskStorageClass_ == nullptr && this->name_ == nullptr && this->path_ == nullptr; };
      // dataDiskSize Field Functions 
      bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
      void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
      inline int64_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0L) };
      inline Pvcs& setDataDiskSize(int64_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


      // dataDiskStorageClass Field Functions 
      bool hasDataDiskStorageClass() const { return this->dataDiskStorageClass_ != nullptr;};
      void deleteDataDiskStorageClass() { this->dataDiskStorageClass_ = nullptr;};
      inline string getDataDiskStorageClass() const { DARABONBA_PTR_GET_DEFAULT(dataDiskStorageClass_, "") };
      inline Pvcs& setDataDiskStorageClass(string dataDiskStorageClass) { DARABONBA_PTR_SET_VALUE(dataDiskStorageClass_, dataDiskStorageClass) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Pvcs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
      inline Pvcs& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    protected:
      shared_ptr<int64_t> dataDiskSize_ {};
      shared_ptr<string> dataDiskStorageClass_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> path_ {};
    };

    virtual bool empty() const override { return this->ackInstanceId_ == nullptr
        && this->customAnnotations_ == nullptr && this->customLabels_ == nullptr && this->dataDiskSize_ == nullptr && this->dataDiskStorageClass_ == nullptr && this->limitCpu_ == nullptr
        && this->limitMemory_ == nullptr && this->mountHostCgroup_ == nullptr && this->namespace_ == nullptr && this->nodeAffinity_ == nullptr && this->nodeSelectors_ == nullptr
        && this->podAffinity_ == nullptr && this->podAntiAffinity_ == nullptr && this->preStartCommand_ == nullptr && this->pvcs_ == nullptr && this->requestCpu_ == nullptr
        && this->requestMemory_ == nullptr && this->tolerations_ == nullptr && this->volumeMounts_ == nullptr && this->volumes_ == nullptr; };
    // ackInstanceId Field Functions 
    bool hasAckInstanceId() const { return this->ackInstanceId_ != nullptr;};
    void deleteAckInstanceId() { this->ackInstanceId_ = nullptr;};
    inline string getAckInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ackInstanceId_, "") };
    inline AckConfig& setAckInstanceId(string ackInstanceId) { DARABONBA_PTR_SET_VALUE(ackInstanceId_, ackInstanceId) };


    // customAnnotations Field Functions 
    bool hasCustomAnnotations() const { return this->customAnnotations_ != nullptr;};
    void deleteCustomAnnotations() { this->customAnnotations_ = nullptr;};
    inline const vector<Tag> & getCustomAnnotations() const { DARABONBA_PTR_GET_CONST(customAnnotations_, vector<Tag>) };
    inline vector<Tag> getCustomAnnotations() { DARABONBA_PTR_GET(customAnnotations_, vector<Tag>) };
    inline AckConfig& setCustomAnnotations(const vector<Tag> & customAnnotations) { DARABONBA_PTR_SET_VALUE(customAnnotations_, customAnnotations) };
    inline AckConfig& setCustomAnnotations(vector<Tag> && customAnnotations) { DARABONBA_PTR_SET_RVALUE(customAnnotations_, customAnnotations) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline const vector<Tag> & getCustomLabels() const { DARABONBA_PTR_GET_CONST(customLabels_, vector<Tag>) };
    inline vector<Tag> getCustomLabels() { DARABONBA_PTR_GET(customLabels_, vector<Tag>) };
    inline AckConfig& setCustomLabels(const vector<Tag> & customLabels) { DARABONBA_PTR_SET_VALUE(customLabels_, customLabels) };
    inline AckConfig& setCustomLabels(vector<Tag> && customLabels) { DARABONBA_PTR_SET_RVALUE(customLabels_, customLabels) };


    // dataDiskSize Field Functions 
    bool hasDataDiskSize() const { return this->dataDiskSize_ != nullptr;};
    void deleteDataDiskSize() { this->dataDiskSize_ = nullptr;};
    inline int32_t getDataDiskSize() const { DARABONBA_PTR_GET_DEFAULT(dataDiskSize_, 0) };
    inline AckConfig& setDataDiskSize(int32_t dataDiskSize) { DARABONBA_PTR_SET_VALUE(dataDiskSize_, dataDiskSize) };


    // dataDiskStorageClass Field Functions 
    bool hasDataDiskStorageClass() const { return this->dataDiskStorageClass_ != nullptr;};
    void deleteDataDiskStorageClass() { this->dataDiskStorageClass_ = nullptr;};
    inline string getDataDiskStorageClass() const { DARABONBA_PTR_GET_DEFAULT(dataDiskStorageClass_, "") };
    inline AckConfig& setDataDiskStorageClass(string dataDiskStorageClass) { DARABONBA_PTR_SET_VALUE(dataDiskStorageClass_, dataDiskStorageClass) };


    // limitCpu Field Functions 
    bool hasLimitCpu() const { return this->limitCpu_ != nullptr;};
    void deleteLimitCpu() { this->limitCpu_ = nullptr;};
    inline float getLimitCpu() const { DARABONBA_PTR_GET_DEFAULT(limitCpu_, 0.0) };
    inline AckConfig& setLimitCpu(float limitCpu) { DARABONBA_PTR_SET_VALUE(limitCpu_, limitCpu) };


    // limitMemory Field Functions 
    bool hasLimitMemory() const { return this->limitMemory_ != nullptr;};
    void deleteLimitMemory() { this->limitMemory_ = nullptr;};
    inline float getLimitMemory() const { DARABONBA_PTR_GET_DEFAULT(limitMemory_, 0.0) };
    inline AckConfig& setLimitMemory(float limitMemory) { DARABONBA_PTR_SET_VALUE(limitMemory_, limitMemory) };


    // mountHostCgroup Field Functions 
    bool hasMountHostCgroup() const { return this->mountHostCgroup_ != nullptr;};
    void deleteMountHostCgroup() { this->mountHostCgroup_ = nullptr;};
    inline bool getMountHostCgroup() const { DARABONBA_PTR_GET_DEFAULT(mountHostCgroup_, false) };
    inline AckConfig& setMountHostCgroup(bool mountHostCgroup) { DARABONBA_PTR_SET_VALUE(mountHostCgroup_, mountHostCgroup) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline AckConfig& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nodeAffinity Field Functions 
    bool hasNodeAffinity() const { return this->nodeAffinity_ != nullptr;};
    void deleteNodeAffinity() { this->nodeAffinity_ = nullptr;};
    inline string getNodeAffinity() const { DARABONBA_PTR_GET_DEFAULT(nodeAffinity_, "") };
    inline AckConfig& setNodeAffinity(string nodeAffinity) { DARABONBA_PTR_SET_VALUE(nodeAffinity_, nodeAffinity) };


    // nodeSelectors Field Functions 
    bool hasNodeSelectors() const { return this->nodeSelectors_ != nullptr;};
    void deleteNodeSelectors() { this->nodeSelectors_ = nullptr;};
    inline const vector<Tag> & getNodeSelectors() const { DARABONBA_PTR_GET_CONST(nodeSelectors_, vector<Tag>) };
    inline vector<Tag> getNodeSelectors() { DARABONBA_PTR_GET(nodeSelectors_, vector<Tag>) };
    inline AckConfig& setNodeSelectors(const vector<Tag> & nodeSelectors) { DARABONBA_PTR_SET_VALUE(nodeSelectors_, nodeSelectors) };
    inline AckConfig& setNodeSelectors(vector<Tag> && nodeSelectors) { DARABONBA_PTR_SET_RVALUE(nodeSelectors_, nodeSelectors) };


    // podAffinity Field Functions 
    bool hasPodAffinity() const { return this->podAffinity_ != nullptr;};
    void deletePodAffinity() { this->podAffinity_ = nullptr;};
    inline string getPodAffinity() const { DARABONBA_PTR_GET_DEFAULT(podAffinity_, "") };
    inline AckConfig& setPodAffinity(string podAffinity) { DARABONBA_PTR_SET_VALUE(podAffinity_, podAffinity) };


    // podAntiAffinity Field Functions 
    bool hasPodAntiAffinity() const { return this->podAntiAffinity_ != nullptr;};
    void deletePodAntiAffinity() { this->podAntiAffinity_ = nullptr;};
    inline string getPodAntiAffinity() const { DARABONBA_PTR_GET_DEFAULT(podAntiAffinity_, "") };
    inline AckConfig& setPodAntiAffinity(string podAntiAffinity) { DARABONBA_PTR_SET_VALUE(podAntiAffinity_, podAntiAffinity) };


    // preStartCommand Field Functions 
    bool hasPreStartCommand() const { return this->preStartCommand_ != nullptr;};
    void deletePreStartCommand() { this->preStartCommand_ = nullptr;};
    inline const vector<string> & getPreStartCommand() const { DARABONBA_PTR_GET_CONST(preStartCommand_, vector<string>) };
    inline vector<string> getPreStartCommand() { DARABONBA_PTR_GET(preStartCommand_, vector<string>) };
    inline AckConfig& setPreStartCommand(const vector<string> & preStartCommand) { DARABONBA_PTR_SET_VALUE(preStartCommand_, preStartCommand) };
    inline AckConfig& setPreStartCommand(vector<string> && preStartCommand) { DARABONBA_PTR_SET_RVALUE(preStartCommand_, preStartCommand) };


    // pvcs Field Functions 
    bool hasPvcs() const { return this->pvcs_ != nullptr;};
    void deletePvcs() { this->pvcs_ = nullptr;};
    inline const vector<AckConfig::Pvcs> & getPvcs() const { DARABONBA_PTR_GET_CONST(pvcs_, vector<AckConfig::Pvcs>) };
    inline vector<AckConfig::Pvcs> getPvcs() { DARABONBA_PTR_GET(pvcs_, vector<AckConfig::Pvcs>) };
    inline AckConfig& setPvcs(const vector<AckConfig::Pvcs> & pvcs) { DARABONBA_PTR_SET_VALUE(pvcs_, pvcs) };
    inline AckConfig& setPvcs(vector<AckConfig::Pvcs> && pvcs) { DARABONBA_PTR_SET_RVALUE(pvcs_, pvcs) };


    // requestCpu Field Functions 
    bool hasRequestCpu() const { return this->requestCpu_ != nullptr;};
    void deleteRequestCpu() { this->requestCpu_ = nullptr;};
    inline float getRequestCpu() const { DARABONBA_PTR_GET_DEFAULT(requestCpu_, 0.0) };
    inline AckConfig& setRequestCpu(float requestCpu) { DARABONBA_PTR_SET_VALUE(requestCpu_, requestCpu) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline float getRequestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, 0.0) };
    inline AckConfig& setRequestMemory(float requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // tolerations Field Functions 
    bool hasTolerations() const { return this->tolerations_ != nullptr;};
    void deleteTolerations() { this->tolerations_ = nullptr;};
    inline const vector<Toleration> & getTolerations() const { DARABONBA_PTR_GET_CONST(tolerations_, vector<Toleration>) };
    inline vector<Toleration> getTolerations() { DARABONBA_PTR_GET(tolerations_, vector<Toleration>) };
    inline AckConfig& setTolerations(const vector<Toleration> & tolerations) { DARABONBA_PTR_SET_VALUE(tolerations_, tolerations) };
    inline AckConfig& setTolerations(vector<Toleration> && tolerations) { DARABONBA_PTR_SET_RVALUE(tolerations_, tolerations) };


    // volumeMounts Field Functions 
    bool hasVolumeMounts() const { return this->volumeMounts_ != nullptr;};
    void deleteVolumeMounts() { this->volumeMounts_ = nullptr;};
    inline const vector<AckConfig::VolumeMounts> & getVolumeMounts() const { DARABONBA_PTR_GET_CONST(volumeMounts_, vector<AckConfig::VolumeMounts>) };
    inline vector<AckConfig::VolumeMounts> getVolumeMounts() { DARABONBA_PTR_GET(volumeMounts_, vector<AckConfig::VolumeMounts>) };
    inline AckConfig& setVolumeMounts(const vector<AckConfig::VolumeMounts> & volumeMounts) { DARABONBA_PTR_SET_VALUE(volumeMounts_, volumeMounts) };
    inline AckConfig& setVolumeMounts(vector<AckConfig::VolumeMounts> && volumeMounts) { DARABONBA_PTR_SET_RVALUE(volumeMounts_, volumeMounts) };


    // volumes Field Functions 
    bool hasVolumes() const { return this->volumes_ != nullptr;};
    void deleteVolumes() { this->volumes_ = nullptr;};
    inline const vector<AckConfig::Volumes> & getVolumes() const { DARABONBA_PTR_GET_CONST(volumes_, vector<AckConfig::Volumes>) };
    inline vector<AckConfig::Volumes> getVolumes() { DARABONBA_PTR_GET(volumes_, vector<AckConfig::Volumes>) };
    inline AckConfig& setVolumes(const vector<AckConfig::Volumes> & volumes) { DARABONBA_PTR_SET_VALUE(volumes_, volumes) };
    inline AckConfig& setVolumes(vector<AckConfig::Volumes> && volumes) { DARABONBA_PTR_SET_RVALUE(volumes_, volumes) };


  protected:
    // ack集群id
    shared_ptr<string> ackInstanceId_ {};
    shared_ptr<vector<Tag>> customAnnotations_ {};
    shared_ptr<vector<Tag>> customLabels_ {};
    shared_ptr<int32_t> dataDiskSize_ {};
    shared_ptr<string> dataDiskStorageClass_ {};
    // Pod的CPU限制值。
    shared_ptr<float> limitCpu_ {};
    // Pod的内存限制值。
    shared_ptr<float> limitMemory_ {};
    shared_ptr<bool> mountHostCgroup_ {};
    // ack 命名空间
    shared_ptr<string> namespace_ {};
    shared_ptr<string> nodeAffinity_ {};
    // ack的节点标签限制
    shared_ptr<vector<Tag>> nodeSelectors_ {};
    shared_ptr<string> podAffinity_ {};
    shared_ptr<string> podAntiAffinity_ {};
    shared_ptr<vector<string>> preStartCommand_ {};
    shared_ptr<vector<AckConfig::Pvcs>> pvcs_ {};
    // Pod的CPU请求值
    shared_ptr<float> requestCpu_ {};
    // Pod的内存请求值。
    shared_ptr<float> requestMemory_ {};
    // ack的节点污点容忍
    shared_ptr<vector<Toleration>> tolerations_ {};
    shared_ptr<vector<AckConfig::VolumeMounts>> volumeMounts_ {};
    shared_ptr<vector<AckConfig::Volumes>> volumes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
