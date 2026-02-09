// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBSPEC_HPP_
#define ALIBABACLOUD_MODELS_JOBSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AssignNodeSpec.hpp>
#include <alibabacloud/models/AutoScalingSpec.hpp>
#include <alibabacloud/models/ExtraPodSpec.hpp>
#include <alibabacloud/models/ImageConfig.hpp>
#include <vector>
#include <alibabacloud/models/LocalMountSpec.hpp>
#include <alibabacloud/models/ResourceConfig.hpp>
#include <alibabacloud/models/ServiceSpec.hpp>
#include <alibabacloud/models/SpotSpec.hpp>
#include <alibabacloud/models/StartupDependency.hpp>
#include <alibabacloud/models/SystemDisk.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobSpec& obj) { 
      DARABONBA_PTR_TO_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_TO_JSON(AutoScalingSpec, autoScalingSpec_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(ExtraPodSpec, extraPodSpec_);
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_TO_JSON(IsCheif, isCheif_);
      DARABONBA_PTR_TO_JSON(IsChief, isChief_);
      DARABONBA_PTR_TO_JSON(LocalMountSpecs, localMountSpecs_);
      DARABONBA_PTR_TO_JSON(PodCount, podCount_);
      DARABONBA_PTR_TO_JSON(ResourceConfig, resourceConfig_);
      DARABONBA_PTR_TO_JSON(RestartPolicy, restartPolicy_);
      DARABONBA_PTR_TO_JSON(ServiceSpec, serviceSpec_);
      DARABONBA_PTR_TO_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_TO_JSON(StartupDependencies, startupDependencies_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UseSpotInstance, useSpotInstance_);
    };
    friend void from_json(const Darabonba::Json& j, JobSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignNodeSpec, assignNodeSpec_);
      DARABONBA_PTR_FROM_JSON(AutoScalingSpec, autoScalingSpec_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(ExtraPodSpec, extraPodSpec_);
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(ImageConfig, imageConfig_);
      DARABONBA_PTR_FROM_JSON(IsCheif, isCheif_);
      DARABONBA_PTR_FROM_JSON(IsChief, isChief_);
      DARABONBA_PTR_FROM_JSON(LocalMountSpecs, localMountSpecs_);
      DARABONBA_PTR_FROM_JSON(PodCount, podCount_);
      DARABONBA_PTR_FROM_JSON(ResourceConfig, resourceConfig_);
      DARABONBA_PTR_FROM_JSON(RestartPolicy, restartPolicy_);
      DARABONBA_PTR_FROM_JSON(ServiceSpec, serviceSpec_);
      DARABONBA_PTR_FROM_JSON(SpotSpec, spotSpec_);
      DARABONBA_PTR_FROM_JSON(StartupDependencies, startupDependencies_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UseSpotInstance, useSpotInstance_);
    };
    JobSpec() = default ;
    JobSpec(const JobSpec &) = default ;
    JobSpec(JobSpec &&) = default ;
    JobSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobSpec() = default ;
    JobSpec& operator=(const JobSpec &) = default ;
    JobSpec& operator=(JobSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assignNodeSpec_ == nullptr
        && this->autoScalingSpec_ == nullptr && this->ecsSpec_ == nullptr && this->extraPodSpec_ == nullptr && this->image_ == nullptr && this->imageConfig_ == nullptr
        && this->isCheif_ == nullptr && this->isChief_ == nullptr && this->localMountSpecs_ == nullptr && this->podCount_ == nullptr && this->resourceConfig_ == nullptr
        && this->restartPolicy_ == nullptr && this->serviceSpec_ == nullptr && this->spotSpec_ == nullptr && this->startupDependencies_ == nullptr && this->systemDisk_ == nullptr
        && this->type_ == nullptr && this->useSpotInstance_ == nullptr; };
    // assignNodeSpec Field Functions 
    bool hasAssignNodeSpec() const { return this->assignNodeSpec_ != nullptr;};
    void deleteAssignNodeSpec() { this->assignNodeSpec_ = nullptr;};
    inline const AssignNodeSpec & getAssignNodeSpec() const { DARABONBA_PTR_GET_CONST(assignNodeSpec_, AssignNodeSpec) };
    inline AssignNodeSpec getAssignNodeSpec() { DARABONBA_PTR_GET(assignNodeSpec_, AssignNodeSpec) };
    inline JobSpec& setAssignNodeSpec(const AssignNodeSpec & assignNodeSpec) { DARABONBA_PTR_SET_VALUE(assignNodeSpec_, assignNodeSpec) };
    inline JobSpec& setAssignNodeSpec(AssignNodeSpec && assignNodeSpec) { DARABONBA_PTR_SET_RVALUE(assignNodeSpec_, assignNodeSpec) };


    // autoScalingSpec Field Functions 
    bool hasAutoScalingSpec() const { return this->autoScalingSpec_ != nullptr;};
    void deleteAutoScalingSpec() { this->autoScalingSpec_ = nullptr;};
    inline const AutoScalingSpec & getAutoScalingSpec() const { DARABONBA_PTR_GET_CONST(autoScalingSpec_, AutoScalingSpec) };
    inline AutoScalingSpec getAutoScalingSpec() { DARABONBA_PTR_GET(autoScalingSpec_, AutoScalingSpec) };
    inline JobSpec& setAutoScalingSpec(const AutoScalingSpec & autoScalingSpec) { DARABONBA_PTR_SET_VALUE(autoScalingSpec_, autoScalingSpec) };
    inline JobSpec& setAutoScalingSpec(AutoScalingSpec && autoScalingSpec) { DARABONBA_PTR_SET_RVALUE(autoScalingSpec_, autoScalingSpec) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string getEcsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline JobSpec& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // extraPodSpec Field Functions 
    bool hasExtraPodSpec() const { return this->extraPodSpec_ != nullptr;};
    void deleteExtraPodSpec() { this->extraPodSpec_ = nullptr;};
    inline const ExtraPodSpec & getExtraPodSpec() const { DARABONBA_PTR_GET_CONST(extraPodSpec_, ExtraPodSpec) };
    inline ExtraPodSpec getExtraPodSpec() { DARABONBA_PTR_GET(extraPodSpec_, ExtraPodSpec) };
    inline JobSpec& setExtraPodSpec(const ExtraPodSpec & extraPodSpec) { DARABONBA_PTR_SET_VALUE(extraPodSpec_, extraPodSpec) };
    inline JobSpec& setExtraPodSpec(ExtraPodSpec && extraPodSpec) { DARABONBA_PTR_SET_RVALUE(extraPodSpec_, extraPodSpec) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline JobSpec& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // imageConfig Field Functions 
    bool hasImageConfig() const { return this->imageConfig_ != nullptr;};
    void deleteImageConfig() { this->imageConfig_ = nullptr;};
    inline const ImageConfig & getImageConfig() const { DARABONBA_PTR_GET_CONST(imageConfig_, ImageConfig) };
    inline ImageConfig getImageConfig() { DARABONBA_PTR_GET(imageConfig_, ImageConfig) };
    inline JobSpec& setImageConfig(const ImageConfig & imageConfig) { DARABONBA_PTR_SET_VALUE(imageConfig_, imageConfig) };
    inline JobSpec& setImageConfig(ImageConfig && imageConfig) { DARABONBA_PTR_SET_RVALUE(imageConfig_, imageConfig) };


    // isCheif Field Functions 
    bool hasIsCheif() const { return this->isCheif_ != nullptr;};
    void deleteIsCheif() { this->isCheif_ = nullptr;};
    inline bool getIsCheif() const { DARABONBA_PTR_GET_DEFAULT(isCheif_, false) };
    inline JobSpec& setIsCheif(bool isCheif) { DARABONBA_PTR_SET_VALUE(isCheif_, isCheif) };


    // isChief Field Functions 
    bool hasIsChief() const { return this->isChief_ != nullptr;};
    void deleteIsChief() { this->isChief_ = nullptr;};
    inline bool getIsChief() const { DARABONBA_PTR_GET_DEFAULT(isChief_, false) };
    inline JobSpec& setIsChief(bool isChief) { DARABONBA_PTR_SET_VALUE(isChief_, isChief) };


    // localMountSpecs Field Functions 
    bool hasLocalMountSpecs() const { return this->localMountSpecs_ != nullptr;};
    void deleteLocalMountSpecs() { this->localMountSpecs_ = nullptr;};
    inline const vector<LocalMountSpec> & getLocalMountSpecs() const { DARABONBA_PTR_GET_CONST(localMountSpecs_, vector<LocalMountSpec>) };
    inline vector<LocalMountSpec> getLocalMountSpecs() { DARABONBA_PTR_GET(localMountSpecs_, vector<LocalMountSpec>) };
    inline JobSpec& setLocalMountSpecs(const vector<LocalMountSpec> & localMountSpecs) { DARABONBA_PTR_SET_VALUE(localMountSpecs_, localMountSpecs) };
    inline JobSpec& setLocalMountSpecs(vector<LocalMountSpec> && localMountSpecs) { DARABONBA_PTR_SET_RVALUE(localMountSpecs_, localMountSpecs) };


    // podCount Field Functions 
    bool hasPodCount() const { return this->podCount_ != nullptr;};
    void deletePodCount() { this->podCount_ = nullptr;};
    inline int64_t getPodCount() const { DARABONBA_PTR_GET_DEFAULT(podCount_, 0L) };
    inline JobSpec& setPodCount(int64_t podCount) { DARABONBA_PTR_SET_VALUE(podCount_, podCount) };


    // resourceConfig Field Functions 
    bool hasResourceConfig() const { return this->resourceConfig_ != nullptr;};
    void deleteResourceConfig() { this->resourceConfig_ = nullptr;};
    inline const ResourceConfig & getResourceConfig() const { DARABONBA_PTR_GET_CONST(resourceConfig_, ResourceConfig) };
    inline ResourceConfig getResourceConfig() { DARABONBA_PTR_GET(resourceConfig_, ResourceConfig) };
    inline JobSpec& setResourceConfig(const ResourceConfig & resourceConfig) { DARABONBA_PTR_SET_VALUE(resourceConfig_, resourceConfig) };
    inline JobSpec& setResourceConfig(ResourceConfig && resourceConfig) { DARABONBA_PTR_SET_RVALUE(resourceConfig_, resourceConfig) };


    // restartPolicy Field Functions 
    bool hasRestartPolicy() const { return this->restartPolicy_ != nullptr;};
    void deleteRestartPolicy() { this->restartPolicy_ = nullptr;};
    inline string getRestartPolicy() const { DARABONBA_PTR_GET_DEFAULT(restartPolicy_, "") };
    inline JobSpec& setRestartPolicy(string restartPolicy) { DARABONBA_PTR_SET_VALUE(restartPolicy_, restartPolicy) };


    // serviceSpec Field Functions 
    bool hasServiceSpec() const { return this->serviceSpec_ != nullptr;};
    void deleteServiceSpec() { this->serviceSpec_ = nullptr;};
    inline const ServiceSpec & getServiceSpec() const { DARABONBA_PTR_GET_CONST(serviceSpec_, ServiceSpec) };
    inline ServiceSpec getServiceSpec() { DARABONBA_PTR_GET(serviceSpec_, ServiceSpec) };
    inline JobSpec& setServiceSpec(const ServiceSpec & serviceSpec) { DARABONBA_PTR_SET_VALUE(serviceSpec_, serviceSpec) };
    inline JobSpec& setServiceSpec(ServiceSpec && serviceSpec) { DARABONBA_PTR_SET_RVALUE(serviceSpec_, serviceSpec) };


    // spotSpec Field Functions 
    bool hasSpotSpec() const { return this->spotSpec_ != nullptr;};
    void deleteSpotSpec() { this->spotSpec_ = nullptr;};
    inline const SpotSpec & getSpotSpec() const { DARABONBA_PTR_GET_CONST(spotSpec_, SpotSpec) };
    inline SpotSpec getSpotSpec() { DARABONBA_PTR_GET(spotSpec_, SpotSpec) };
    inline JobSpec& setSpotSpec(const SpotSpec & spotSpec) { DARABONBA_PTR_SET_VALUE(spotSpec_, spotSpec) };
    inline JobSpec& setSpotSpec(SpotSpec && spotSpec) { DARABONBA_PTR_SET_RVALUE(spotSpec_, spotSpec) };


    // startupDependencies Field Functions 
    bool hasStartupDependencies() const { return this->startupDependencies_ != nullptr;};
    void deleteStartupDependencies() { this->startupDependencies_ = nullptr;};
    inline const vector<StartupDependency> & getStartupDependencies() const { DARABONBA_PTR_GET_CONST(startupDependencies_, vector<StartupDependency>) };
    inline vector<StartupDependency> getStartupDependencies() { DARABONBA_PTR_GET(startupDependencies_, vector<StartupDependency>) };
    inline JobSpec& setStartupDependencies(const vector<StartupDependency> & startupDependencies) { DARABONBA_PTR_SET_VALUE(startupDependencies_, startupDependencies) };
    inline JobSpec& setStartupDependencies(vector<StartupDependency> && startupDependencies) { DARABONBA_PTR_SET_RVALUE(startupDependencies_, startupDependencies) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, SystemDisk) };
    inline SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, SystemDisk) };
    inline JobSpec& setSystemDisk(const SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline JobSpec& setSystemDisk(SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline JobSpec& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // useSpotInstance Field Functions 
    bool hasUseSpotInstance() const { return this->useSpotInstance_ != nullptr;};
    void deleteUseSpotInstance() { this->useSpotInstance_ = nullptr;};
    inline bool getUseSpotInstance() const { DARABONBA_PTR_GET_DEFAULT(useSpotInstance_, false) };
    inline JobSpec& setUseSpotInstance(bool useSpotInstance) { DARABONBA_PTR_SET_VALUE(useSpotInstance_, useSpotInstance) };


  protected:
    // The scheduling node configurations.
    shared_ptr<AssignNodeSpec> assignNodeSpec_ {};
    // The auto scaling configurations.
    shared_ptr<AutoScalingSpec> autoScalingSpec_ {};
    // The hardware specifications of the worker. For more information, see [Billing of DLC](https://help.aliyun.com/document_detail/171758.html) of PAI.
    // 
    // >  The price varies based on instance types.
    shared_ptr<string> ecsSpec_ {};
    // The additional pod configurations.
    shared_ptr<ExtraPodSpec> extraPodSpec_ {};
    // The address of the image that is run by the worker node. You can call [ListImages](https://help.aliyun.com/document_detail/449118.html) to obtain the image provided by PAI. You can also specify a third-party public image.
    shared_ptr<string> image_ {};
    // The configuration of the private image.
    shared_ptr<ImageConfig> imageConfig_ {};
    // Deprecated.
    shared_ptr<bool> isCheif_ {};
    // Whether the role is a Chief role. Chief role must be unique.
    shared_ptr<bool> isChief_ {};
    // The list of local mount configurations.
    shared_ptr<vector<LocalMountSpec>> localMountSpecs_ {};
    // The number of replicas.
    shared_ptr<int64_t> podCount_ {};
    // The resource configurations.
    shared_ptr<ResourceConfig> resourceConfig_ {};
    // The restart policy. Valid values: Always, Never, OnFailure, and ExitCode.
    shared_ptr<string> restartPolicy_ {};
    // The service configurations.
    shared_ptr<ServiceSpec> serviceSpec_ {};
    // The configurations of the preemptible instance.
    shared_ptr<SpotSpec> spotSpec_ {};
    shared_ptr<vector<StartupDependency>> startupDependencies_ {};
    shared_ptr<SystemDisk> systemDisk_ {};
    // The worker type, which is related to JobType. The valid values of this parameter vary based on the value of JobType.
    // 
    // *   Valid values when JobType is set to **TFJob**: Chief, PS, Worker, Evaluator, and GraphLearn.
    // *   Valid values when JobType is set to **PyTorchJob**: Worker and Master.
    // *   Valid values when JobType is set to **XGBoostJob**: Worker and Master.
    // *   Valid values when JobType is set to **OneFlowJob**: Worker and Master.
    // *   Valid values when JobType is set to **ElasticBatch**: Worker and Master.
    // 
    // The Master node in jobs of the PyTorchJob, XGBoostJob, OneFlowJob, or ElasticBatch type is optional. If you do not specify the Master node, the system automatically uses the first Worker node as the Master node.
    shared_ptr<string> type_ {};
    // Whether to use preemptible instances.
    shared_ptr<bool> useSpotInstance_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
