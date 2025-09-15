// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTJOBSTATUSRESPONSEBODYPRODUCTWORKERCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTJOBSTATUSRESPONSEBODYPRODUCTWORKERCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribeDeploymentJobStatusResponseBodyProductWorkerCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeploymentJobStatusResponseBodyProductWorkerCount& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeploymentJobStatusResponseBodyProductWorkerCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
    };
    DescribeDeploymentJobStatusResponseBodyProductWorkerCount() = default ;
    DescribeDeploymentJobStatusResponseBodyProductWorkerCount(const DescribeDeploymentJobStatusResponseBodyProductWorkerCount &) = default ;
    DescribeDeploymentJobStatusResponseBodyProductWorkerCount(DescribeDeploymentJobStatusResponseBodyProductWorkerCount &&) = default ;
    DescribeDeploymentJobStatusResponseBodyProductWorkerCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeploymentJobStatusResponseBodyProductWorkerCount() = default ;
    DescribeDeploymentJobStatusResponseBodyProductWorkerCount& operator=(const DescribeDeploymentJobStatusResponseBodyProductWorkerCount &) = default ;
    DescribeDeploymentJobStatusResponseBodyProductWorkerCount& operator=(DescribeDeploymentJobStatusResponseBodyProductWorkerCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->productName_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeDeploymentJobStatusResponseBodyProductWorkerCount& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeDeploymentJobStatusResponseBodyProductWorkerCount& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


  protected:
    // The total number of resources of a cloud service in the deployment task.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The name of the cloud service. Valid values:
    // 
    // *   **SLB**: Classic Load Balancer (CLB). This value is supported only at the China site (aliyun.com).
    // *   **LIVE**: ApsaraVideo Live. This value is supported only at the China site (aliyun.com).
    // *   **webHosting**: Cloud Web Hosting. This value is supported only at the China site (aliyun.com).
    // *   **VOD**: ApsaraVideo VOD. This value is supported only at the China site (aliyun.com).
    // *   **CR**: Container Registry. This value is supported only at the China site (aliyun.com).
    // *   **DCDN**: Dynamic Content Delivery Network (DCDN).
    // *   **DDOS**: Anti-DDoS.
    // *   **CDN**: Alibaba Cloud CDN (CDN).
    // *   **ALB**: Application Load Balancer (ALB).
    // *   **APIGateway**: API Gateway.
    // *   **FC**: Function Compute.
    // *   **GA**: Global Accelerator (GA).
    // *   **MSE**: Microservices Engine (MSE).
    // *   **NLB**: Network Load Balancer (NLB).
    // *   **OSS**: Object Storage Service (OSS).
    // *   **SAE**: Serverless App Engine (SAE).
    // *   **TencentCDN**: Tencent Cloud Content Delivery Network (CDN).
    // *   **WAF**: Web Application Firewall (WAF).
    std::shared_ptr<string> productName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
