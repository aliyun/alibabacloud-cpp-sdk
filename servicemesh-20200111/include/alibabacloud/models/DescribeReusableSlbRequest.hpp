// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREUSABLESLBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREUSABLESLBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeReusableSlbRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeReusableSlbRequest& obj) { 
      DARABONBA_PTR_TO_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_TO_JSON(LbType, lbType_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeReusableSlbRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sClusterId, k8sClusterId_);
      DARABONBA_PTR_FROM_JSON(LbType, lbType_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    DescribeReusableSlbRequest() = default ;
    DescribeReusableSlbRequest(const DescribeReusableSlbRequest &) = default ;
    DescribeReusableSlbRequest(DescribeReusableSlbRequest &&) = default ;
    DescribeReusableSlbRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeReusableSlbRequest() = default ;
    DescribeReusableSlbRequest& operator=(const DescribeReusableSlbRequest &) = default ;
    DescribeReusableSlbRequest& operator=(DescribeReusableSlbRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->k8sClusterId_ == nullptr
        && return this->lbType_ == nullptr && return this->networkType_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // k8sClusterId Field Functions 
    bool hasK8sClusterId() const { return this->k8sClusterId_ != nullptr;};
    void deleteK8sClusterId() { this->k8sClusterId_ = nullptr;};
    inline string k8sClusterId() const { DARABONBA_PTR_GET_DEFAULT(k8sClusterId_, "") };
    inline DescribeReusableSlbRequest& setK8sClusterId(string k8sClusterId) { DARABONBA_PTR_SET_VALUE(k8sClusterId_, k8sClusterId) };


    // lbType Field Functions 
    bool hasLbType() const { return this->lbType_ != nullptr;};
    void deleteLbType() { this->lbType_ = nullptr;};
    inline string lbType() const { DARABONBA_PTR_GET_DEFAULT(lbType_, "") };
    inline DescribeReusableSlbRequest& setLbType(string lbType) { DARABONBA_PTR_SET_VALUE(lbType_, lbType) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeReusableSlbRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline DescribeReusableSlbRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The ID of the cluster on the data plane. If you specify this parameter, you cannot specify ServiceMeshId. This parameter and ServiceMeshId cannot be left empty at the same time.
    std::shared_ptr<string> k8sClusterId_ = nullptr;
    // Load balancer type, value:
    // 
    // * `clb`: Classic Load Balancer
    // 
    // * `nlb`: Network Load Balancer
    // 
    // default is `clb`.
    std::shared_ptr<string> lbType_ = nullptr;
    // The network type of the SLB instance. Valid values:
    // 
    // *   `intranet`
    // *   `internet`
    // 
    // This parameter is required.
    std::shared_ptr<string> networkType_ = nullptr;
    // The ID of the Service Mesh (ASM) instance. If you specify this parameter, you cannot specify K8sClusterId. This parameter and K8sClusterId cannot be left empty at the same time.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
