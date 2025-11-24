// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLUSTERINTOSERVICEMESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCLUSTERINTOSERVICEMESHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class AddClusterIntoServiceMeshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddClusterIntoServiceMeshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DiscoveryOnly, discoveryOnly_);
      DARABONBA_PTR_TO_JSON(IgnoreNamespaceCheck, ignoreNamespaceCheck_);
      DARABONBA_PTR_TO_JSON(Kubeconfig, kubeconfig_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, AddClusterIntoServiceMeshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DiscoveryOnly, discoveryOnly_);
      DARABONBA_PTR_FROM_JSON(IgnoreNamespaceCheck, ignoreNamespaceCheck_);
      DARABONBA_PTR_FROM_JSON(Kubeconfig, kubeconfig_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    AddClusterIntoServiceMeshRequest() = default ;
    AddClusterIntoServiceMeshRequest(const AddClusterIntoServiceMeshRequest &) = default ;
    AddClusterIntoServiceMeshRequest(AddClusterIntoServiceMeshRequest &&) = default ;
    AddClusterIntoServiceMeshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddClusterIntoServiceMeshRequest() = default ;
    AddClusterIntoServiceMeshRequest& operator=(const AddClusterIntoServiceMeshRequest &) = default ;
    AddClusterIntoServiceMeshRequest& operator=(AddClusterIntoServiceMeshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->discoveryOnly_ == nullptr && return this->ignoreNamespaceCheck_ == nullptr && return this->kubeconfig_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline AddClusterIntoServiceMeshRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // discoveryOnly Field Functions 
    bool hasDiscoveryOnly() const { return this->discoveryOnly_ != nullptr;};
    void deleteDiscoveryOnly() { this->discoveryOnly_ = nullptr;};
    inline bool discoveryOnly() const { DARABONBA_PTR_GET_DEFAULT(discoveryOnly_, false) };
    inline AddClusterIntoServiceMeshRequest& setDiscoveryOnly(bool discoveryOnly) { DARABONBA_PTR_SET_VALUE(discoveryOnly_, discoveryOnly) };


    // ignoreNamespaceCheck Field Functions 
    bool hasIgnoreNamespaceCheck() const { return this->ignoreNamespaceCheck_ != nullptr;};
    void deleteIgnoreNamespaceCheck() { this->ignoreNamespaceCheck_ = nullptr;};
    inline bool ignoreNamespaceCheck() const { DARABONBA_PTR_GET_DEFAULT(ignoreNamespaceCheck_, false) };
    inline AddClusterIntoServiceMeshRequest& setIgnoreNamespaceCheck(bool ignoreNamespaceCheck) { DARABONBA_PTR_SET_VALUE(ignoreNamespaceCheck_, ignoreNamespaceCheck) };


    // kubeconfig Field Functions 
    bool hasKubeconfig() const { return this->kubeconfig_ != nullptr;};
    void deleteKubeconfig() { this->kubeconfig_ = nullptr;};
    inline string kubeconfig() const { DARABONBA_PTR_GET_DEFAULT(kubeconfig_, "") };
    inline AddClusterIntoServiceMeshRequest& setKubeconfig(string kubeconfig) { DARABONBA_PTR_SET_VALUE(kubeconfig_, kubeconfig) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline AddClusterIntoServiceMeshRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the cluster to be added.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Indicates whether to add the cluster to an ASM instance in only service discovery mode.
    std::shared_ptr<bool> discoveryOnly_ = nullptr;
    // Specifies whether to check that the cluster you want to add to the ASM instance belongs to the istio-system namespace. This parameter is often used in scenarios where you migrate traffic from self-managed open source Istio to ASM. Valid values: true and false.
    std::shared_ptr<bool> ignoreNamespaceCheck_ = nullptr;
    // The cluster certificate.
    std::shared_ptr<string> kubeconfig_ = nullptr;
    // The ID of the Service Mesh (ASM) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
