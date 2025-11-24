// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESHMULTICLUSTERNETWORKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESHMULTICLUSTERNETWORKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateMeshMultiClusterNetworkShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMeshMultiClusterNetworkShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MultiClusterNetworks, multiClusterNetworksShrink_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMeshMultiClusterNetworkShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MultiClusterNetworks, multiClusterNetworksShrink_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    UpdateMeshMultiClusterNetworkShrinkRequest() = default ;
    UpdateMeshMultiClusterNetworkShrinkRequest(const UpdateMeshMultiClusterNetworkShrinkRequest &) = default ;
    UpdateMeshMultiClusterNetworkShrinkRequest(UpdateMeshMultiClusterNetworkShrinkRequest &&) = default ;
    UpdateMeshMultiClusterNetworkShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMeshMultiClusterNetworkShrinkRequest() = default ;
    UpdateMeshMultiClusterNetworkShrinkRequest& operator=(const UpdateMeshMultiClusterNetworkShrinkRequest &) = default ;
    UpdateMeshMultiClusterNetworkShrinkRequest& operator=(UpdateMeshMultiClusterNetworkShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->multiClusterNetworksShrink_ == nullptr
        && return this->serviceMeshId_ == nullptr; };
    // multiClusterNetworksShrink Field Functions 
    bool hasMultiClusterNetworksShrink() const { return this->multiClusterNetworksShrink_ != nullptr;};
    void deleteMultiClusterNetworksShrink() { this->multiClusterNetworksShrink_ = nullptr;};
    inline string multiClusterNetworksShrink() const { DARABONBA_PTR_GET_DEFAULT(multiClusterNetworksShrink_, "") };
    inline UpdateMeshMultiClusterNetworkShrinkRequest& setMultiClusterNetworksShrink(string multiClusterNetworksShrink) { DARABONBA_PTR_SET_VALUE(multiClusterNetworksShrink_, multiClusterNetworksShrink) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateMeshMultiClusterNetworkShrinkRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The network configuration descriptions of multiple Kubernetes clusters. The key in the map is the ID of a Kubernetes cluster, and the value is the network configuration of the cluster.
    std::shared_ptr<string> multiClusterNetworksShrink_ = nullptr;
    // The ID of the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
