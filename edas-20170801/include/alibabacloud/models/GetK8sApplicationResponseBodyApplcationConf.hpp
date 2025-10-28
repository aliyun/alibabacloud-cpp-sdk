// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONCONF_HPP_
#define ALIBABACLOUD_MODELS_GETK8SAPPLICATIONRESPONSEBODYAPPLCATIONCONF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sApplicationResponseBodyApplcationConf : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sApplicationResponseBodyApplcationConf& obj) { 
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(AhasEnabled, ahasEnabled_);
      DARABONBA_PTR_TO_JSON(DeployAcrossNodes, deployAcrossNodes_);
      DARABONBA_PTR_TO_JSON(DeployAcrossZones, deployAcrossZones_);
      DARABONBA_PTR_TO_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_TO_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_TO_JSON(K8sCmd, k8sCmd_);
      DARABONBA_PTR_TO_JSON(K8sCmdArgs, k8sCmdArgs_);
      DARABONBA_PTR_TO_JSON(K8sLocalvolumeInfo, k8sLocalvolumeInfo_);
      DARABONBA_PTR_TO_JSON(K8sNasInfo, k8sNasInfo_);
      DARABONBA_PTR_TO_JSON(K8sVolumeInfo, k8sVolumeInfo_);
      DARABONBA_PTR_TO_JSON(Liveness, liveness_);
      DARABONBA_PTR_TO_JSON(PostStart, postStart_);
      DARABONBA_PTR_TO_JSON(PreStop, preStop_);
      DARABONBA_PTR_TO_JSON(Readiness, readiness_);
      DARABONBA_PTR_TO_JSON(RuntimeClassName, runtimeClassName_);
      DARABONBA_PTR_TO_JSON(Tolerations, tolerations_);
      DARABONBA_PTR_TO_JSON(UserBaseImageUrl, userBaseImageUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sApplicationResponseBodyApplcationConf& obj) { 
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(AhasEnabled, ahasEnabled_);
      DARABONBA_PTR_FROM_JSON(DeployAcrossNodes, deployAcrossNodes_);
      DARABONBA_PTR_FROM_JSON(DeployAcrossZones, deployAcrossZones_);
      DARABONBA_PTR_FROM_JSON(JarStartArgs, jarStartArgs_);
      DARABONBA_PTR_FROM_JSON(JarStartOptions, jarStartOptions_);
      DARABONBA_PTR_FROM_JSON(K8sCmd, k8sCmd_);
      DARABONBA_PTR_FROM_JSON(K8sCmdArgs, k8sCmdArgs_);
      DARABONBA_PTR_FROM_JSON(K8sLocalvolumeInfo, k8sLocalvolumeInfo_);
      DARABONBA_PTR_FROM_JSON(K8sNasInfo, k8sNasInfo_);
      DARABONBA_PTR_FROM_JSON(K8sVolumeInfo, k8sVolumeInfo_);
      DARABONBA_PTR_FROM_JSON(Liveness, liveness_);
      DARABONBA_PTR_FROM_JSON(PostStart, postStart_);
      DARABONBA_PTR_FROM_JSON(PreStop, preStop_);
      DARABONBA_PTR_FROM_JSON(Readiness, readiness_);
      DARABONBA_PTR_FROM_JSON(RuntimeClassName, runtimeClassName_);
      DARABONBA_PTR_FROM_JSON(Tolerations, tolerations_);
      DARABONBA_PTR_FROM_JSON(UserBaseImageUrl, userBaseImageUrl_);
    };
    GetK8sApplicationResponseBodyApplcationConf() = default ;
    GetK8sApplicationResponseBodyApplcationConf(const GetK8sApplicationResponseBodyApplcationConf &) = default ;
    GetK8sApplicationResponseBodyApplcationConf(GetK8sApplicationResponseBodyApplcationConf &&) = default ;
    GetK8sApplicationResponseBodyApplcationConf(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sApplicationResponseBodyApplcationConf() = default ;
    GetK8sApplicationResponseBodyApplcationConf& operator=(const GetK8sApplicationResponseBodyApplcationConf &) = default ;
    GetK8sApplicationResponseBodyApplcationConf& operator=(GetK8sApplicationResponseBodyApplcationConf &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affinity_ == nullptr
        && return this->ahasEnabled_ == nullptr && return this->deployAcrossNodes_ == nullptr && return this->deployAcrossZones_ == nullptr && return this->jarStartArgs_ == nullptr && return this->jarStartOptions_ == nullptr
        && return this->k8sCmd_ == nullptr && return this->k8sCmdArgs_ == nullptr && return this->k8sLocalvolumeInfo_ == nullptr && return this->k8sNasInfo_ == nullptr && return this->k8sVolumeInfo_ == nullptr
        && return this->liveness_ == nullptr && return this->postStart_ == nullptr && return this->preStop_ == nullptr && return this->readiness_ == nullptr && return this->runtimeClassName_ == nullptr
        && return this->tolerations_ == nullptr && return this->userBaseImageUrl_ == nullptr; };
    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline string affinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


    // ahasEnabled Field Functions 
    bool hasAhasEnabled() const { return this->ahasEnabled_ != nullptr;};
    void deleteAhasEnabled() { this->ahasEnabled_ = nullptr;};
    inline bool ahasEnabled() const { DARABONBA_PTR_GET_DEFAULT(ahasEnabled_, false) };
    inline GetK8sApplicationResponseBodyApplcationConf& setAhasEnabled(bool ahasEnabled) { DARABONBA_PTR_SET_VALUE(ahasEnabled_, ahasEnabled) };


    // deployAcrossNodes Field Functions 
    bool hasDeployAcrossNodes() const { return this->deployAcrossNodes_ != nullptr;};
    void deleteDeployAcrossNodes() { this->deployAcrossNodes_ = nullptr;};
    inline string deployAcrossNodes() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossNodes_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setDeployAcrossNodes(string deployAcrossNodes) { DARABONBA_PTR_SET_VALUE(deployAcrossNodes_, deployAcrossNodes) };


    // deployAcrossZones Field Functions 
    bool hasDeployAcrossZones() const { return this->deployAcrossZones_ != nullptr;};
    void deleteDeployAcrossZones() { this->deployAcrossZones_ = nullptr;};
    inline string deployAcrossZones() const { DARABONBA_PTR_GET_DEFAULT(deployAcrossZones_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setDeployAcrossZones(string deployAcrossZones) { DARABONBA_PTR_SET_VALUE(deployAcrossZones_, deployAcrossZones) };


    // jarStartArgs Field Functions 
    bool hasJarStartArgs() const { return this->jarStartArgs_ != nullptr;};
    void deleteJarStartArgs() { this->jarStartArgs_ = nullptr;};
    inline string jarStartArgs() const { DARABONBA_PTR_GET_DEFAULT(jarStartArgs_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setJarStartArgs(string jarStartArgs) { DARABONBA_PTR_SET_VALUE(jarStartArgs_, jarStartArgs) };


    // jarStartOptions Field Functions 
    bool hasJarStartOptions() const { return this->jarStartOptions_ != nullptr;};
    void deleteJarStartOptions() { this->jarStartOptions_ = nullptr;};
    inline string jarStartOptions() const { DARABONBA_PTR_GET_DEFAULT(jarStartOptions_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setJarStartOptions(string jarStartOptions) { DARABONBA_PTR_SET_VALUE(jarStartOptions_, jarStartOptions) };


    // k8sCmd Field Functions 
    bool hasK8sCmd() const { return this->k8sCmd_ != nullptr;};
    void deleteK8sCmd() { this->k8sCmd_ = nullptr;};
    inline string k8sCmd() const { DARABONBA_PTR_GET_DEFAULT(k8sCmd_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setK8sCmd(string k8sCmd) { DARABONBA_PTR_SET_VALUE(k8sCmd_, k8sCmd) };


    // k8sCmdArgs Field Functions 
    bool hasK8sCmdArgs() const { return this->k8sCmdArgs_ != nullptr;};
    void deleteK8sCmdArgs() { this->k8sCmdArgs_ = nullptr;};
    inline string k8sCmdArgs() const { DARABONBA_PTR_GET_DEFAULT(k8sCmdArgs_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setK8sCmdArgs(string k8sCmdArgs) { DARABONBA_PTR_SET_VALUE(k8sCmdArgs_, k8sCmdArgs) };


    // k8sLocalvolumeInfo Field Functions 
    bool hasK8sLocalvolumeInfo() const { return this->k8sLocalvolumeInfo_ != nullptr;};
    void deleteK8sLocalvolumeInfo() { this->k8sLocalvolumeInfo_ = nullptr;};
    inline string k8sLocalvolumeInfo() const { DARABONBA_PTR_GET_DEFAULT(k8sLocalvolumeInfo_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setK8sLocalvolumeInfo(string k8sLocalvolumeInfo) { DARABONBA_PTR_SET_VALUE(k8sLocalvolumeInfo_, k8sLocalvolumeInfo) };


    // k8sNasInfo Field Functions 
    bool hasK8sNasInfo() const { return this->k8sNasInfo_ != nullptr;};
    void deleteK8sNasInfo() { this->k8sNasInfo_ = nullptr;};
    inline string k8sNasInfo() const { DARABONBA_PTR_GET_DEFAULT(k8sNasInfo_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setK8sNasInfo(string k8sNasInfo) { DARABONBA_PTR_SET_VALUE(k8sNasInfo_, k8sNasInfo) };


    // k8sVolumeInfo Field Functions 
    bool hasK8sVolumeInfo() const { return this->k8sVolumeInfo_ != nullptr;};
    void deleteK8sVolumeInfo() { this->k8sVolumeInfo_ = nullptr;};
    inline string k8sVolumeInfo() const { DARABONBA_PTR_GET_DEFAULT(k8sVolumeInfo_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setK8sVolumeInfo(string k8sVolumeInfo) { DARABONBA_PTR_SET_VALUE(k8sVolumeInfo_, k8sVolumeInfo) };


    // liveness Field Functions 
    bool hasLiveness() const { return this->liveness_ != nullptr;};
    void deleteLiveness() { this->liveness_ = nullptr;};
    inline string liveness() const { DARABONBA_PTR_GET_DEFAULT(liveness_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setLiveness(string liveness) { DARABONBA_PTR_SET_VALUE(liveness_, liveness) };


    // postStart Field Functions 
    bool hasPostStart() const { return this->postStart_ != nullptr;};
    void deletePostStart() { this->postStart_ = nullptr;};
    inline string postStart() const { DARABONBA_PTR_GET_DEFAULT(postStart_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setPostStart(string postStart) { DARABONBA_PTR_SET_VALUE(postStart_, postStart) };


    // preStop Field Functions 
    bool hasPreStop() const { return this->preStop_ != nullptr;};
    void deletePreStop() { this->preStop_ = nullptr;};
    inline string preStop() const { DARABONBA_PTR_GET_DEFAULT(preStop_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setPreStop(string preStop) { DARABONBA_PTR_SET_VALUE(preStop_, preStop) };


    // readiness Field Functions 
    bool hasReadiness() const { return this->readiness_ != nullptr;};
    void deleteReadiness() { this->readiness_ = nullptr;};
    inline string readiness() const { DARABONBA_PTR_GET_DEFAULT(readiness_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setReadiness(string readiness) { DARABONBA_PTR_SET_VALUE(readiness_, readiness) };


    // runtimeClassName Field Functions 
    bool hasRuntimeClassName() const { return this->runtimeClassName_ != nullptr;};
    void deleteRuntimeClassName() { this->runtimeClassName_ = nullptr;};
    inline string runtimeClassName() const { DARABONBA_PTR_GET_DEFAULT(runtimeClassName_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setRuntimeClassName(string runtimeClassName) { DARABONBA_PTR_SET_VALUE(runtimeClassName_, runtimeClassName) };


    // tolerations Field Functions 
    bool hasTolerations() const { return this->tolerations_ != nullptr;};
    void deleteTolerations() { this->tolerations_ = nullptr;};
    inline string tolerations() const { DARABONBA_PTR_GET_DEFAULT(tolerations_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setTolerations(string tolerations) { DARABONBA_PTR_SET_VALUE(tolerations_, tolerations) };


    // userBaseImageUrl Field Functions 
    bool hasUserBaseImageUrl() const { return this->userBaseImageUrl_ != nullptr;};
    void deleteUserBaseImageUrl() { this->userBaseImageUrl_ = nullptr;};
    inline string userBaseImageUrl() const { DARABONBA_PTR_GET_DEFAULT(userBaseImageUrl_, "") };
    inline GetK8sApplicationResponseBodyApplcationConf& setUserBaseImageUrl(string userBaseImageUrl) { DARABONBA_PTR_SET_VALUE(userBaseImageUrl_, userBaseImageUrl) };


  protected:
    // The affinity configuration of the pod.
    std::shared_ptr<string> affinity_ = nullptr;
    // Indicates whether the application is connected to Application High Availability Service (AHAS).
    std::shared_ptr<bool> ahasEnabled_ = nullptr;
    // Indicates whether the application instances are deployed across nodes.
    // 
    // *   Value `true` indicates that the application instances are deployed across nodes.
    // *   Other values indicate that the application instances are not deployed across nodes.
    std::shared_ptr<string> deployAcrossNodes_ = nullptr;
    // Indicates whether the application instances are deployed across zones.
    // 
    // *   Value `true` indicates that the application instances are deployed across zones.
    // *   Other values indicate that the application instances are not deployed across zones.
    std::shared_ptr<string> deployAcrossZones_ = nullptr;
    // The startup parameters for a JAR application. This parameter is deprecated.
    std::shared_ptr<string> jarStartArgs_ = nullptr;
    // The startup options for a JAR application. This parameter is deprecated.
    std::shared_ptr<string> jarStartOptions_ = nullptr;
    // The startup command.
    std::shared_ptr<string> k8sCmd_ = nullptr;
    // The parameters of the startup command.
    std::shared_ptr<string> k8sCmdArgs_ = nullptr;
    // The information about the local storage.
    std::shared_ptr<string> k8sLocalvolumeInfo_ = nullptr;
    // The information about the File Storage NAS (NAS) storage.
    std::shared_ptr<string> k8sNasInfo_ = nullptr;
    // The information about the storage.
    std::shared_ptr<string> k8sVolumeInfo_ = nullptr;
    // The information about the liveness check on the container.
    std::shared_ptr<string> liveness_ = nullptr;
    // The script executed after the container is started.
    std::shared_ptr<string> postStart_ = nullptr;
    // The script executed before the container is stopped.
    std::shared_ptr<string> preStop_ = nullptr;
    // The information about the readiness check on the container.
    std::shared_ptr<string> readiness_ = nullptr;
    // The type of the container runtime. This parameter is applicable only to clusters that use sandboxed containers.
    std::shared_ptr<string> runtimeClassName_ = nullptr;
    // The scheduling tolerance configuration of the pod.
    std::shared_ptr<string> tolerations_ = nullptr;
    // The URL of the base image. If you use a custom Java Development Kit (JDK) runtime, you must specify this parameter.
    std::shared_ptr<string> userBaseImageUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
