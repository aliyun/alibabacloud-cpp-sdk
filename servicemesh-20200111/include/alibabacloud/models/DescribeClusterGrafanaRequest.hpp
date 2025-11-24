// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERGRAFANAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERGRAFANAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeClusterGrafanaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterGrafanaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_TO_JSON(ReAddPrometheusIntegration, reAddPrometheusIntegration_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterGrafanaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_FROM_JSON(ReAddPrometheusIntegration, reAddPrometheusIntegration_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DescribeClusterGrafanaRequest() = default ;
    DescribeClusterGrafanaRequest(const DescribeClusterGrafanaRequest &) = default ;
    DescribeClusterGrafanaRequest(DescribeClusterGrafanaRequest &&) = default ;
    DescribeClusterGrafanaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterGrafanaRequest() = default ;
    DescribeClusterGrafanaRequest& operator=(const DescribeClusterGrafanaRequest &) = default ;
    DescribeClusterGrafanaRequest& operator=(DescribeClusterGrafanaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->k8sClusterId_ == nullptr
        && return this->reAddPrometheusIntegration_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // k8sClusterId Field Functions 
    bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
    void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
    inline string k8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
    inline DescribeClusterGrafanaRequest& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


    // reAddPrometheusIntegration Field Functions 
    bool hasReAddPrometheusIntegration() const { return this->reAddPrometheusIntegration_ != nullptr;};
    void deleteReAddPrometheusIntegration() { this->reAddPrometheusIntegration_ = nullptr;};
    inline string reAddPrometheusIntegration() const { DARABONBA_PTR_GET_DEFAULT(reAddPrometheusIntegration_, "") };
    inline DescribeClusterGrafanaRequest& setReAddPrometheusIntegration(string reAddPrometheusIntegration) { DARABONBA_PTR_SET_VALUE(reAddPrometheusIntegration_, reAddPrometheusIntegration) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeClusterGrafanaRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the cluster on the data plane.
    // 
    // This parameter is required.
    std::shared_ptr<string> k8sClusterId_ = nullptr;
    // Specifies whether to integrate Managed Service for Prometheus for the cluster on the data plane.
    std::shared_ptr<string> reAddPrometheusIntegration_ = nullptr;
    // The ASM instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
