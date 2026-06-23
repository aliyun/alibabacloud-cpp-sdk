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
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->kubernetesVersion_ == nullptr && this->mode_ == nullptr && this->profile_ == nullptr && this->queryUpgradableVersion_ == nullptr && this->region_ == nullptr
        && this->runtime_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // kubernetesVersion Field Functions 
    bool hasKubernetesVersion() const { return this->kubernetesVersion_ != nullptr;};
    void deleteKubernetesVersion() { this->kubernetesVersion_ = nullptr;};
    inline string getKubernetesVersion() const { DARABONBA_PTR_GET_DEFAULT(kubernetesVersion_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setKubernetesVersion(string kubernetesVersion) { DARABONBA_PTR_SET_VALUE(kubernetesVersion_, kubernetesVersion) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // queryUpgradableVersion Field Functions 
    bool hasQueryUpgradableVersion() const { return this->queryUpgradableVersion_ != nullptr;};
    void deleteQueryUpgradableVersion() { this->queryUpgradableVersion_ = nullptr;};
    inline bool getQueryUpgradableVersion() const { DARABONBA_PTR_GET_DEFAULT(queryUpgradableVersion_, false) };
    inline DescribeKubernetesVersionMetadataRequest& setQueryUpgradableVersion(bool queryUpgradableVersion) { DARABONBA_PTR_SET_VALUE(queryUpgradableVersion_, queryUpgradableVersion) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline string getRuntime() const { DARABONBA_PTR_GET_DEFAULT(runtime_, "") };
    inline DescribeKubernetesVersionMetadataRequest& setRuntime(string runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };


  protected:
    // The cluster type. Valid values:
    // 
    // - `Kubernetes`: ACK dedicated cluster.
    // - `ManagedKubernetes`: ACK managed cluster, including ACK Pro cluster, ACK Basic cluster, ACK Serverless Pro cluster, ACK Serverless Basic cluster, ACK Edge Pro cluster, and ACK Edge Basic cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterType_ {};
    // The cluster version, which is consistent with the Kubernetes community baseline version. We recommend that you select the latest version. If you do not specify this parameter, the latest version is used by default.
    // 
    // For more information about the Kubernetes versions supported by ACK, see [Kubernetes version release overview](https://help.aliyun.com/document_detail/185269.html).
    shared_ptr<string> kubernetesVersion_ {};
    // The query mode. Valid values:
    // - `supported`: queries supported versions.
    // - `creatable`: queries creatable versions.
    // 
    // If you specify `KubernetesVersion`, the query mode is ignored.
    // 
    // If you do not specify the query mode, creatable versions are returned by default.
    shared_ptr<string> mode_ {};
    // The cluster type for specific scenarios. Valid values:
    // 
    // - `Default`: non-edge scenario cluster.
    // - `Edge`: edge scenario cluster.
    // - `Serverless`: ACK Serverless cluster.
    // 
    // Default value: `Default`.
    shared_ptr<string> profile_ {};
    // Specifies whether to query upgradable versions for the specified cluster version. This parameter takes effect only when the KubernetesVersion parameter is specified.
    // 
    // - true: queries upgradable versions.
    // 
    // - false: does not query upgradable versions.
    shared_ptr<bool> queryUpgradableVersion_ {};
    // The ID of the region where the cluster is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // The runtime type. You can specify the runtime type to filter the system images that are supported by the runtime. Valid values:
    // 
    // - `docker`: Docker runtime.
    // - `containerd`: containerd runtime.
    // - `Sandboxed-Container.runv`: sandboxed container.
    // 
    // If you specify the runtime type, the image versions supported by the specified runtime are returned.
    // 
    // If you do not specify the runtime type, all images are returned by default.
    shared_ptr<string> runtime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
