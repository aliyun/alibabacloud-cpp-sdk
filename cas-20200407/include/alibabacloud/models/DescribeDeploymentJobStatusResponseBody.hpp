// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTJOBSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYMENTJOBSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribeDeploymentJobStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeploymentJobStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BuyCount, buyCount_);
      DARABONBA_PTR_TO_JSON(CertCount, certCount_);
      DARABONBA_PTR_TO_JSON(CostCount, costCount_);
      DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_TO_JSON(MatchWorkerCount, matchWorkerCount_);
      DARABONBA_PTR_TO_JSON(ProductWorkerCount, productWorkerCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_TO_JSON(RollbackCount, rollbackCount_);
      DARABONBA_PTR_TO_JSON(RollbackFailedCount, rollbackFailedCount_);
      DARABONBA_PTR_TO_JSON(RollbackSuccessCount, rollbackSuccessCount_);
      DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_TO_JSON(UseCount, useCount_);
      DARABONBA_PTR_TO_JSON(WorkerCount, workerCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeploymentJobStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyCount, buyCount_);
      DARABONBA_PTR_FROM_JSON(CertCount, certCount_);
      DARABONBA_PTR_FROM_JSON(CostCount, costCount_);
      DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
      DARABONBA_PTR_FROM_JSON(MatchWorkerCount, matchWorkerCount_);
      DARABONBA_PTR_FROM_JSON(ProductWorkerCount, productWorkerCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
      DARABONBA_PTR_FROM_JSON(RollbackCount, rollbackCount_);
      DARABONBA_PTR_FROM_JSON(RollbackFailedCount, rollbackFailedCount_);
      DARABONBA_PTR_FROM_JSON(RollbackSuccessCount, rollbackSuccessCount_);
      DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
      DARABONBA_PTR_FROM_JSON(UseCount, useCount_);
      DARABONBA_PTR_FROM_JSON(WorkerCount, workerCount_);
    };
    DescribeDeploymentJobStatusResponseBody() = default ;
    DescribeDeploymentJobStatusResponseBody(const DescribeDeploymentJobStatusResponseBody &) = default ;
    DescribeDeploymentJobStatusResponseBody(DescribeDeploymentJobStatusResponseBody &&) = default ;
    DescribeDeploymentJobStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeploymentJobStatusResponseBody() = default ;
    DescribeDeploymentJobStatusResponseBody& operator=(const DescribeDeploymentJobStatusResponseBody &) = default ;
    DescribeDeploymentJobStatusResponseBody& operator=(DescribeDeploymentJobStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductWorkerCount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductWorkerCount& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
      };
      friend void from_json(const Darabonba::Json& j, ProductWorkerCount& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      };
      ProductWorkerCount() = default ;
      ProductWorkerCount(const ProductWorkerCount &) = default ;
      ProductWorkerCount(ProductWorkerCount &&) = default ;
      ProductWorkerCount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductWorkerCount() = default ;
      ProductWorkerCount& operator=(const ProductWorkerCount &) = default ;
      ProductWorkerCount& operator=(ProductWorkerCount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->productName_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline ProductWorkerCount& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ProductWorkerCount& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    protected:
      // The total number of resources of a cloud service in the deployment task.
      shared_ptr<int32_t> count_ {};
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
      shared_ptr<string> productName_ {};
    };

    virtual bool empty() const override { return this->buyCount_ == nullptr
        && this->certCount_ == nullptr && this->costCount_ == nullptr && this->failedCount_ == nullptr && this->matchWorkerCount_ == nullptr && this->productWorkerCount_ == nullptr
        && this->requestId_ == nullptr && this->resourceCount_ == nullptr && this->rollbackCount_ == nullptr && this->rollbackFailedCount_ == nullptr && this->rollbackSuccessCount_ == nullptr
        && this->successCount_ == nullptr && this->useCount_ == nullptr && this->workerCount_ == nullptr; };
    // buyCount Field Functions 
    bool hasBuyCount() const { return this->buyCount_ != nullptr;};
    void deleteBuyCount() { this->buyCount_ = nullptr;};
    inline int32_t getBuyCount() const { DARABONBA_PTR_GET_DEFAULT(buyCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setBuyCount(int32_t buyCount) { DARABONBA_PTR_SET_VALUE(buyCount_, buyCount) };


    // certCount Field Functions 
    bool hasCertCount() const { return this->certCount_ != nullptr;};
    void deleteCertCount() { this->certCount_ = nullptr;};
    inline int32_t getCertCount() const { DARABONBA_PTR_GET_DEFAULT(certCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setCertCount(int32_t certCount) { DARABONBA_PTR_SET_VALUE(certCount_, certCount) };


    // costCount Field Functions 
    bool hasCostCount() const { return this->costCount_ != nullptr;};
    void deleteCostCount() { this->costCount_ = nullptr;};
    inline int32_t getCostCount() const { DARABONBA_PTR_GET_DEFAULT(costCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setCostCount(int32_t costCount) { DARABONBA_PTR_SET_VALUE(costCount_, costCount) };


    // failedCount Field Functions 
    bool hasFailedCount() const { return this->failedCount_ != nullptr;};
    void deleteFailedCount() { this->failedCount_ = nullptr;};
    inline int32_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setFailedCount(int32_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


    // matchWorkerCount Field Functions 
    bool hasMatchWorkerCount() const { return this->matchWorkerCount_ != nullptr;};
    void deleteMatchWorkerCount() { this->matchWorkerCount_ = nullptr;};
    inline int32_t getMatchWorkerCount() const { DARABONBA_PTR_GET_DEFAULT(matchWorkerCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setMatchWorkerCount(int32_t matchWorkerCount) { DARABONBA_PTR_SET_VALUE(matchWorkerCount_, matchWorkerCount) };


    // productWorkerCount Field Functions 
    bool hasProductWorkerCount() const { return this->productWorkerCount_ != nullptr;};
    void deleteProductWorkerCount() { this->productWorkerCount_ = nullptr;};
    inline const vector<DescribeDeploymentJobStatusResponseBody::ProductWorkerCount> & getProductWorkerCount() const { DARABONBA_PTR_GET_CONST(productWorkerCount_, vector<DescribeDeploymentJobStatusResponseBody::ProductWorkerCount>) };
    inline vector<DescribeDeploymentJobStatusResponseBody::ProductWorkerCount> getProductWorkerCount() { DARABONBA_PTR_GET(productWorkerCount_, vector<DescribeDeploymentJobStatusResponseBody::ProductWorkerCount>) };
    inline DescribeDeploymentJobStatusResponseBody& setProductWorkerCount(const vector<DescribeDeploymentJobStatusResponseBody::ProductWorkerCount> & productWorkerCount) { DARABONBA_PTR_SET_VALUE(productWorkerCount_, productWorkerCount) };
    inline DescribeDeploymentJobStatusResponseBody& setProductWorkerCount(vector<DescribeDeploymentJobStatusResponseBody::ProductWorkerCount> && productWorkerCount) { DARABONBA_PTR_SET_RVALUE(productWorkerCount_, productWorkerCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDeploymentJobStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceCount Field Functions 
    bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
    void deleteResourceCount() { this->resourceCount_ = nullptr;};
    inline int32_t getResourceCount() const { DARABONBA_PTR_GET_DEFAULT(resourceCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setResourceCount(int32_t resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };


    // rollbackCount Field Functions 
    bool hasRollbackCount() const { return this->rollbackCount_ != nullptr;};
    void deleteRollbackCount() { this->rollbackCount_ = nullptr;};
    inline int32_t getRollbackCount() const { DARABONBA_PTR_GET_DEFAULT(rollbackCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setRollbackCount(int32_t rollbackCount) { DARABONBA_PTR_SET_VALUE(rollbackCount_, rollbackCount) };


    // rollbackFailedCount Field Functions 
    bool hasRollbackFailedCount() const { return this->rollbackFailedCount_ != nullptr;};
    void deleteRollbackFailedCount() { this->rollbackFailedCount_ = nullptr;};
    inline int32_t getRollbackFailedCount() const { DARABONBA_PTR_GET_DEFAULT(rollbackFailedCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setRollbackFailedCount(int32_t rollbackFailedCount) { DARABONBA_PTR_SET_VALUE(rollbackFailedCount_, rollbackFailedCount) };


    // rollbackSuccessCount Field Functions 
    bool hasRollbackSuccessCount() const { return this->rollbackSuccessCount_ != nullptr;};
    void deleteRollbackSuccessCount() { this->rollbackSuccessCount_ = nullptr;};
    inline int32_t getRollbackSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(rollbackSuccessCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setRollbackSuccessCount(int32_t rollbackSuccessCount) { DARABONBA_PTR_SET_VALUE(rollbackSuccessCount_, rollbackSuccessCount) };


    // successCount Field Functions 
    bool hasSuccessCount() const { return this->successCount_ != nullptr;};
    void deleteSuccessCount() { this->successCount_ = nullptr;};
    inline int32_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setSuccessCount(int32_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


    // useCount Field Functions 
    bool hasUseCount() const { return this->useCount_ != nullptr;};
    void deleteUseCount() { this->useCount_ = nullptr;};
    inline int32_t getUseCount() const { DARABONBA_PTR_GET_DEFAULT(useCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setUseCount(int32_t useCount) { DARABONBA_PTR_SET_VALUE(useCount_, useCount) };


    // workerCount Field Functions 
    bool hasWorkerCount() const { return this->workerCount_ != nullptr;};
    void deleteWorkerCount() { this->workerCount_ = nullptr;};
    inline int32_t getWorkerCount() const { DARABONBA_PTR_GET_DEFAULT(workerCount_, 0) };
    inline DescribeDeploymentJobStatusResponseBody& setWorkerCount(int32_t workerCount) { DARABONBA_PTR_SET_VALUE(workerCount_, workerCount) };


  protected:
    // The total number of purchased resources.
    shared_ptr<int32_t> buyCount_ {};
    // The number of certificates involved in the deployment task.
    shared_ptr<int32_t> certCount_ {};
    // The number of resources consumed by worker tasks.
    shared_ptr<int32_t> costCount_ {};
    // The number of failed worker tasks, excluding rollback tasks.
    shared_ptr<int32_t> failedCount_ {};
    // The total number of worker tasks that match the certificate.
    shared_ptr<int32_t> matchWorkerCount_ {};
    // The number of cloud resources to which certificates are deployed in the deployment task.
    shared_ptr<vector<DescribeDeploymentJobStatusResponseBody::ProductWorkerCount>> productWorkerCount_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of resources.
    shared_ptr<int32_t> resourceCount_ {};
    // The number of worker tasks that are rolled backed.
    shared_ptr<int32_t> rollbackCount_ {};
    // The number of worker tasks that failed to be rolled back.
    shared_ptr<int32_t> rollbackFailedCount_ {};
    // The number of worker tasks that are successfully rolled back.
    shared_ptr<int32_t> rollbackSuccessCount_ {};
    // The number of successful worker tasks, excluding rollback tasks.
    shared_ptr<int32_t> successCount_ {};
    // The total number of used resources.
    shared_ptr<int32_t> useCount_ {};
    // The total number of resources to which certificate are deployed in the current cloud service. The value indicates the total number of worker tasks.
    shared_ptr<int32_t> workerCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
