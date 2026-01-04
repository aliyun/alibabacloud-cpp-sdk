// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class CreateClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(ClusterVersion, clusterVersion_);
      DARABONBA_PTR_TO_JSON(ContainerCidr, containerCidr_);
      DARABONBA_PTR_TO_JSON(ControlPlaneConfig, controlPlaneConfigShrink_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(KubernetesVersion, kubernetesVersion_);
      DARABONBA_PTR_TO_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PodVswitchIds, podVswitchIdsShrink_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(PublicAccess, publicAccess_);
      DARABONBA_PTR_TO_JSON(ServiceCidr, serviceCidr_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VswitchIds, vswitchIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(ClusterVersion, clusterVersion_);
      DARABONBA_PTR_FROM_JSON(ContainerCidr, containerCidr_);
      DARABONBA_PTR_FROM_JSON(ControlPlaneConfig, controlPlaneConfigShrink_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(KubernetesVersion, kubernetesVersion_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerId, loadBalancerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PodVswitchIds, podVswitchIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(PublicAccess, publicAccess_);
      DARABONBA_PTR_FROM_JSON(ServiceCidr, serviceCidr_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VswitchIds, vswitchIdsShrink_);
    };
    CreateClusterShrinkRequest() = default ;
    CreateClusterShrinkRequest(const CreateClusterShrinkRequest &) = default ;
    CreateClusterShrinkRequest(CreateClusterShrinkRequest &&) = default ;
    CreateClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterShrinkRequest() = default ;
    CreateClusterShrinkRequest& operator=(const CreateClusterShrinkRequest &) = default ;
    CreateClusterShrinkRequest& operator=(CreateClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->clusterVersion_ == nullptr && this->containerCidr_ == nullptr && this->controlPlaneConfigShrink_ == nullptr && this->ensRegionId_ == nullptr && this->kubernetesVersion_ == nullptr
        && this->loadBalancerId_ == nullptr && this->name_ == nullptr && this->podVswitchIdsShrink_ == nullptr && this->profile_ == nullptr && this->publicAccess_ == nullptr
        && this->serviceCidr_ == nullptr && this->vpcId_ == nullptr && this->vswitchIdsShrink_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline CreateClusterShrinkRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // clusterVersion Field Functions 
    bool hasClusterVersion() const { return this->clusterVersion_ != nullptr;};
    void deleteClusterVersion() { this->clusterVersion_ = nullptr;};
    inline string getClusterVersion() const { DARABONBA_PTR_GET_DEFAULT(clusterVersion_, "") };
    inline CreateClusterShrinkRequest& setClusterVersion(string clusterVersion) { DARABONBA_PTR_SET_VALUE(clusterVersion_, clusterVersion) };


    // containerCidr Field Functions 
    bool hasContainerCidr() const { return this->containerCidr_ != nullptr;};
    void deleteContainerCidr() { this->containerCidr_ = nullptr;};
    inline string getContainerCidr() const { DARABONBA_PTR_GET_DEFAULT(containerCidr_, "") };
    inline CreateClusterShrinkRequest& setContainerCidr(string containerCidr) { DARABONBA_PTR_SET_VALUE(containerCidr_, containerCidr) };


    // controlPlaneConfigShrink Field Functions 
    bool hasControlPlaneConfigShrink() const { return this->controlPlaneConfigShrink_ != nullptr;};
    void deleteControlPlaneConfigShrink() { this->controlPlaneConfigShrink_ = nullptr;};
    inline string getControlPlaneConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(controlPlaneConfigShrink_, "") };
    inline CreateClusterShrinkRequest& setControlPlaneConfigShrink(string controlPlaneConfigShrink) { DARABONBA_PTR_SET_VALUE(controlPlaneConfigShrink_, controlPlaneConfigShrink) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline CreateClusterShrinkRequest& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // kubernetesVersion Field Functions 
    bool hasKubernetesVersion() const { return this->kubernetesVersion_ != nullptr;};
    void deleteKubernetesVersion() { this->kubernetesVersion_ = nullptr;};
    inline string getKubernetesVersion() const { DARABONBA_PTR_GET_DEFAULT(kubernetesVersion_, "") };
    inline CreateClusterShrinkRequest& setKubernetesVersion(string kubernetesVersion) { DARABONBA_PTR_SET_VALUE(kubernetesVersion_, kubernetesVersion) };


    // loadBalancerId Field Functions 
    bool hasLoadBalancerId() const { return this->loadBalancerId_ != nullptr;};
    void deleteLoadBalancerId() { this->loadBalancerId_ = nullptr;};
    inline string getLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerId_, "") };
    inline CreateClusterShrinkRequest& setLoadBalancerId(string loadBalancerId) { DARABONBA_PTR_SET_VALUE(loadBalancerId_, loadBalancerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateClusterShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // podVswitchIdsShrink Field Functions 
    bool hasPodVswitchIdsShrink() const { return this->podVswitchIdsShrink_ != nullptr;};
    void deletePodVswitchIdsShrink() { this->podVswitchIdsShrink_ = nullptr;};
    inline string getPodVswitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(podVswitchIdsShrink_, "") };
    inline CreateClusterShrinkRequest& setPodVswitchIdsShrink(string podVswitchIdsShrink) { DARABONBA_PTR_SET_VALUE(podVswitchIdsShrink_, podVswitchIdsShrink) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline CreateClusterShrinkRequest& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // publicAccess Field Functions 
    bool hasPublicAccess() const { return this->publicAccess_ != nullptr;};
    void deletePublicAccess() { this->publicAccess_ = nullptr;};
    inline bool getPublicAccess() const { DARABONBA_PTR_GET_DEFAULT(publicAccess_, false) };
    inline CreateClusterShrinkRequest& setPublicAccess(bool publicAccess) { DARABONBA_PTR_SET_VALUE(publicAccess_, publicAccess) };


    // serviceCidr Field Functions 
    bool hasServiceCidr() const { return this->serviceCidr_ != nullptr;};
    void deleteServiceCidr() { this->serviceCidr_ = nullptr;};
    inline string getServiceCidr() const { DARABONBA_PTR_GET_DEFAULT(serviceCidr_, "") };
    inline CreateClusterShrinkRequest& setServiceCidr(string serviceCidr) { DARABONBA_PTR_SET_VALUE(serviceCidr_, serviceCidr) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateClusterShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vswitchIdsShrink Field Functions 
    bool hasVswitchIdsShrink() const { return this->vswitchIdsShrink_ != nullptr;};
    void deleteVswitchIdsShrink() { this->vswitchIdsShrink_ = nullptr;};
    inline string getVswitchIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(vswitchIdsShrink_, "") };
    inline CreateClusterShrinkRequest& setVswitchIdsShrink(string vswitchIdsShrink) { DARABONBA_PTR_SET_VALUE(vswitchIdsShrink_, vswitchIdsShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
    // The version of the cluster.
    shared_ptr<string> clusterVersion_ {};
    shared_ptr<string> containerCidr_ {};
    shared_ptr<string> controlPlaneConfigShrink_ {};
    shared_ptr<string> ensRegionId_ {};
    shared_ptr<string> kubernetesVersion_ {};
    shared_ptr<string> loadBalancerId_ {};
    // The name of the cluster.
    shared_ptr<string> name_ {};
    shared_ptr<string> podVswitchIdsShrink_ {};
    // This parameter is required.
    shared_ptr<string> profile_ {};
    shared_ptr<bool> publicAccess_ {};
    shared_ptr<string> serviceCidr_ {};
    shared_ptr<string> vpcId_ {};
    shared_ptr<string> vswitchIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
