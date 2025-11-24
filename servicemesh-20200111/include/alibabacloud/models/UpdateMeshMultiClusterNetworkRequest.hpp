// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMESHMULTICLUSTERNETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMESHMULTICLUSTERNETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/MultiClusterNetworksValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateMeshMultiClusterNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMeshMultiClusterNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MultiClusterNetworks, multiClusterNetworks_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMeshMultiClusterNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MultiClusterNetworks, multiClusterNetworks_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    UpdateMeshMultiClusterNetworkRequest() = default ;
    UpdateMeshMultiClusterNetworkRequest(const UpdateMeshMultiClusterNetworkRequest &) = default ;
    UpdateMeshMultiClusterNetworkRequest(UpdateMeshMultiClusterNetworkRequest &&) = default ;
    UpdateMeshMultiClusterNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMeshMultiClusterNetworkRequest() = default ;
    UpdateMeshMultiClusterNetworkRequest& operator=(const UpdateMeshMultiClusterNetworkRequest &) = default ;
    UpdateMeshMultiClusterNetworkRequest& operator=(UpdateMeshMultiClusterNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->multiClusterNetworks_ == nullptr
        && return this->serviceMeshId_ == nullptr; };
    // multiClusterNetworks Field Functions 
    bool hasMultiClusterNetworks() const { return this->multiClusterNetworks_ != nullptr;};
    void deleteMultiClusterNetworks() { this->multiClusterNetworks_ = nullptr;};
    inline const map<string, MultiClusterNetworksValue> & multiClusterNetworks() const { DARABONBA_PTR_GET_CONST(multiClusterNetworks_, map<string, MultiClusterNetworksValue>) };
    inline map<string, MultiClusterNetworksValue> multiClusterNetworks() { DARABONBA_PTR_GET(multiClusterNetworks_, map<string, MultiClusterNetworksValue>) };
    inline UpdateMeshMultiClusterNetworkRequest& setMultiClusterNetworks(const map<string, MultiClusterNetworksValue> & multiClusterNetworks) { DARABONBA_PTR_SET_VALUE(multiClusterNetworks_, multiClusterNetworks) };
    inline UpdateMeshMultiClusterNetworkRequest& setMultiClusterNetworks(map<string, MultiClusterNetworksValue> && multiClusterNetworks) { DARABONBA_PTR_SET_RVALUE(multiClusterNetworks_, multiClusterNetworks) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateMeshMultiClusterNetworkRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The network configuration descriptions of multiple Kubernetes clusters. The key in the map is the ID of a Kubernetes cluster, and the value is the network configuration of the cluster.
    std::shared_ptr<map<string, MultiClusterNetworksValue>> multiClusterNetworks_ = nullptr;
    // The ID of the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
