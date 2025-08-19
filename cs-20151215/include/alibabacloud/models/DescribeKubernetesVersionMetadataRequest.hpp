// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKUBERNETESVERSIONMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKUBERNETESVERSIONMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeKubernetesVersionMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKubernetesVersionMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(KubernetesVersion, kubernetesVersion_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(QueryUpgradableVersion, queryUpgradableVersion_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKubernetesVersionMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(KubernetesVersion, kubernetesVersion_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(QueryUpgradableVersion, queryUpgradableVersion_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(runtime, runtime_);
    };
    DescribeKubernetesVersionMetadataRequest() = default ;
    DescribeKubernetesVersionMetadataRequest(const DescribeKubernetesVersionMetadataRequest &) = default ;
    DescribeKubernetesVersionMetadataRequest(DescribeKubernetesVersionMetadataRequest &&) = default ;
    DescribeKubernetesVersionMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKubernetesVersionMetadataRequest() = default ;
    DescribeKubernetesVersionMetadataRequest& operator=(const DescribeKubernetesVersionMetadataRequest &) = default ;
    DescribeKubernetesVersionMetadataRequest& operator=(DescribeKubernetesVersionMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterType_ != nullptr
        && this->kubernetesVersion_ != nullptr && this->mode_ != nullptr && this->profile_ != nullptr && this->queryUpgradableVersion_ != nullptr && this->region_ != nullptr
        && this->runtime_ != nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // kubernetesVersion Field Functions 
    bool hasKubernetesVersion() const { return this->kubernetesVersion_ != nullptr;};
    void deleteKubernetesVersion() { this->kubernetesVersion_ = nullptr;};
    inline string kubernetesVersion() const { DARABONBA_PTR_GET_DEFAULT(kubernetesVersion_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setKubernetesVersion(string kubernetesVersion) { DARABONBA_PTR_SET_VALUE(kubernetesVersion_, kubernetesVersion) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // queryUpgradableVersion Field Functions 
    bool hasQueryUpgradableVersion() const { return this->queryUpgradableVersion_ != nullptr;};
    void deleteQueryUpgradableVersion() { this->queryUpgradableVersion_ = nullptr;};
    inline bool queryUpgradableVersion() const { DARABONBA_PTR_GET_DEFAULT(queryUpgradableVersion_, false) };
    inline DescribeKubernetesVersionMetadataRequest& setQueryUpgradableVersion(bool queryUpgradableVersion) { DARABONBA_PTR_SET_VALUE(queryUpgradableVersion_, queryUpgradableVersion) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string runtime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


  protected:
    // The cluster type that you want to use. Valid values:
    // 
    // *   `Kubernetes`: ACK dedicated cluster.
    // *   `ManagedKubernetes`: ACK managed cluster. ACK managed clusters include ACK Pro clusters, ACK Basic clusters, ACK Serverless Pro clusters, ACK Serverless Basic clusters, ACK Edge Pro clusters, and ACK Edge Basic clusters.
    // *   `ExternalKubernetes`: registered cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The Kubernetes version of the cluster. The Kubernetes versions supported by ACK are the same as the Kubernetes versions supported by open source Kubernetes. We recommend that you specify the latest Kubernetes version. If you do not configure this parameter, the latest Kubernetes version is used.
    // 
    // For more information about the Kubernetes versions supported by ACK, see [Release notes for Kubernetes versions](https://help.aliyun.com/document_detail/185269.html).
    std::shared_ptr<string> kubernetesVersion_ = nullptr;
    // The query mode. Valid values:
    // 
    // *   `supported`: queries all supported Kubernetes versions.
    // *   `creatable`: queries only Kubernetes versions of clusters that you can create.
    // 
    // If you specify `KubernetesVersion`, this parameter does not take effect.
    // 
    // If you do not specify a query mode, Kubernetes versions of clusters that you can create are returned.
    std::shared_ptr<string> mode_ = nullptr;
    // The scenario where clusters are used. Valid values:
    // 
    // *   `Default`: non-edge computing scenarios
    // *   `Edge`: edge computing scenarios
    // *   `Serverless`: serverless scenarios.
    // 
    // Default value: `Default`.
    std::shared_ptr<string> profile_ = nullptr;
    // Specifies whether to query the Kubernetes versions available for updates. This parameter takes effect only when the KubernetesVersion parameter is specified.
    // 
    // *   true: queries the Kubernetes versions available for updates.
    // *   false: does not query the Kubernetes versions available for updates.
    std::shared_ptr<bool> queryUpgradableVersion_ = nullptr;
    // The region ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // The container runtime type that you want to use. You can specify a runtime type to query only OS images that support the runtime type. Valid values:
    // 
    // *   `docker`: Docker
    // *   `containerd`: containerd
    // *   `Sandboxed-Container.runv`: Sandboxed-Container
    // 
    // If you specify a runtime type, only the OS images that support the specified runtime type are returned.
    // 
    // Otherwise, all OS images are returned.
    std::shared_ptr<string> runtime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
