// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEACCOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEACCOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ListServiceAccountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceAccountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceAccountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    ListServiceAccountsRequest() = default ;
    ListServiceAccountsRequest(const ListServiceAccountsRequest &) = default ;
    ListServiceAccountsRequest(ListServiceAccountsRequest &&) = default ;
    ListServiceAccountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceAccountsRequest() = default ;
    ListServiceAccountsRequest& operator=(const ListServiceAccountsRequest &) = default ;
    ListServiceAccountsRequest& operator=(ListServiceAccountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->namespace_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListServiceAccountsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListServiceAccountsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline ListServiceAccountsRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the cluster on the data plane.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the Service Mesh (ASM) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
