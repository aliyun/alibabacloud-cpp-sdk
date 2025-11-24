// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVECLUSTERFROMSERVICEMESHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVECLUSTERFROMSERVICEMESHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class RemoveClusterFromServiceMeshRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveClusterFromServiceMeshRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ReserveNamespace, reserveNamespace_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveClusterFromServiceMeshRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ReserveNamespace, reserveNamespace_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    RemoveClusterFromServiceMeshRequest() = default ;
    RemoveClusterFromServiceMeshRequest(const RemoveClusterFromServiceMeshRequest &) = default ;
    RemoveClusterFromServiceMeshRequest(RemoveClusterFromServiceMeshRequest &&) = default ;
    RemoveClusterFromServiceMeshRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveClusterFromServiceMeshRequest() = default ;
    RemoveClusterFromServiceMeshRequest& operator=(const RemoveClusterFromServiceMeshRequest &) = default ;
    RemoveClusterFromServiceMeshRequest& operator=(RemoveClusterFromServiceMeshRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->reserveNamespace_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline RemoveClusterFromServiceMeshRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // reserveNamespace Field Functions 
    bool hasReserveNamespace() const { return this->reserveNamespace_ != nullptr;};
    void deleteReserveNamespace() { this->reserveNamespace_ = nullptr;};
    inline bool reserveNamespace() const { DARABONBA_PTR_GET_DEFAULT(reserveNamespace_, false) };
    inline RemoveClusterFromServiceMeshRequest& setReserveNamespace(bool reserveNamespace) { DARABONBA_PTR_SET_VALUE(reserveNamespace_, reserveNamespace) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline RemoveClusterFromServiceMeshRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the cluster that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether to reserve the istio-system namespace when you delete the cluster. Valid values: true and false.
    std::shared_ptr<bool> reserveNamespace_ = nullptr;
    // The ID of the Service Mesh (ASM) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
