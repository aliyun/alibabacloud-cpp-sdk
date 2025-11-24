// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERPROMETHEUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERPROMETHEUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeClusterPrometheusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterPrometheusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_TO_JSON(K8sClusterRegionId, k8sClusterRegionId_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterPrometheusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_FROM_JSON(K8sClusterRegionId, k8sClusterRegionId_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DescribeClusterPrometheusRequest() = default ;
    DescribeClusterPrometheusRequest(const DescribeClusterPrometheusRequest &) = default ;
    DescribeClusterPrometheusRequest(DescribeClusterPrometheusRequest &&) = default ;
    DescribeClusterPrometheusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterPrometheusRequest() = default ;
    DescribeClusterPrometheusRequest& operator=(const DescribeClusterPrometheusRequest &) = default ;
    DescribeClusterPrometheusRequest& operator=(DescribeClusterPrometheusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->k8sClusterId_ == nullptr
        && return this->k8sClusterRegionId_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // k8sClusterId Field Functions 
    bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
    void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
    inline string k8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
    inline DescribeClusterPrometheusRequest& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


    // k8sClusterRegionId Field Functions 
    bool hasK8sClusterRegionId() const { return this->k8sClusterRegionId_ != nullptr;};
    void deleteK8sClusterRegionId() { this->k8sClusterRegionId_ = nullptr;};
    inline string k8sClusterRegionId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterRegionId_, "") };
    inline DescribeClusterPrometheusRequest& setK8sClusterRegionId(string k8sClusterRegionId) { DARABONBA_PTR_SET_VALUE(k8sClusterRegionId_, k8sClusterRegionId) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeClusterPrometheusRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the cluster on the data plane.
    std::shared_ptr<string> k8sClusterId_ = nullptr;
    // The ID of the region where the cluster on the data plane resides.
    std::shared_ptr<string> k8sClusterRegionId_ = nullptr;
    // The ASM instance ID.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
