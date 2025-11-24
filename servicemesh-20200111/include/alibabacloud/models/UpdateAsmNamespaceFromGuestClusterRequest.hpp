// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEASMNAMESPACEFROMGUESTCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEASMNAMESPACEFROMGUESTCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateASMNamespaceFromGuestClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateASMNamespaceFromGuestClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateASMNamespaceFromGuestClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    UpdateASMNamespaceFromGuestClusterRequest() = default ;
    UpdateASMNamespaceFromGuestClusterRequest(const UpdateASMNamespaceFromGuestClusterRequest &) = default ;
    UpdateASMNamespaceFromGuestClusterRequest(UpdateASMNamespaceFromGuestClusterRequest &&) = default ;
    UpdateASMNamespaceFromGuestClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateASMNamespaceFromGuestClusterRequest() = default ;
    UpdateASMNamespaceFromGuestClusterRequest& operator=(const UpdateASMNamespaceFromGuestClusterRequest &) = default ;
    UpdateASMNamespaceFromGuestClusterRequest& operator=(UpdateASMNamespaceFromGuestClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->k8sClusterId_ == nullptr
        && return this->serviceMeshId_ == nullptr; };
    // k8sClusterId Field Functions 
    bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
    void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
    inline string k8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
    inline UpdateASMNamespaceFromGuestClusterRequest& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateASMNamespaceFromGuestClusterRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the Kubernetes cluster whose namespace information you want to synchronize to ASM. The Kubernetes cluster is added to the ASM instance that is specified by the ServiceMeshId parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> k8sClusterId_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
