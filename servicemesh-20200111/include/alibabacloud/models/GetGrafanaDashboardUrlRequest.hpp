// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGRAFANADASHBOARDURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETGRAFANADASHBOARDURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetGrafanaDashboardUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGrafanaDashboardUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetGrafanaDashboardUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetGrafanaDashboardUrlRequest() = default ;
    GetGrafanaDashboardUrlRequest(const GetGrafanaDashboardUrlRequest &) = default ;
    GetGrafanaDashboardUrlRequest(GetGrafanaDashboardUrlRequest &&) = default ;
    GetGrafanaDashboardUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGrafanaDashboardUrlRequest() = default ;
    GetGrafanaDashboardUrlRequest& operator=(const GetGrafanaDashboardUrlRequest &) = default ;
    GetGrafanaDashboardUrlRequest& operator=(GetGrafanaDashboardUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->k8sClusterId_ == nullptr
        && return this->serviceMeshId_ == nullptr && return this->title_ == nullptr; };
    // k8sClusterId Field Functions 
    bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
    void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
    inline string k8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
    inline GetGrafanaDashboardUrlRequest& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline GetGrafanaDashboardUrlRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetGrafanaDashboardUrlRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the Container Service for Kubernetes (ACK) or ACK Serverless cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> k8sClusterId_ = nullptr;
    // The ID of the Service Mesh (ASM) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // The name of the dashboard.
    // 
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
