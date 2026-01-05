// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROVISIONEDPRODUCTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROVISIONEDPRODUCTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class GetProvisionedProductResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProvisionedProductResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProvisionedProductDetail, provisionedProductDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetProvisionedProductResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProvisionedProductDetail, provisionedProductDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetProvisionedProductResponseBody() = default ;
    GetProvisionedProductResponseBody(const GetProvisionedProductResponseBody &) = default ;
    GetProvisionedProductResponseBody(GetProvisionedProductResponseBody &&) = default ;
    GetProvisionedProductResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProvisionedProductResponseBody() = default ;
    GetProvisionedProductResponseBody& operator=(const GetProvisionedProductResponseBody &) = default ;
    GetProvisionedProductResponseBody& operator=(GetProvisionedProductResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProvisionedProductDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProvisionedProductDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(LastProvisioningTaskId, lastProvisioningTaskId_);
        DARABONBA_PTR_TO_JSON(LastSuccessfulProvisioningTaskId, lastSuccessfulProvisioningTaskId_);
        DARABONBA_PTR_TO_JSON(LastTaskId, lastTaskId_);
        DARABONBA_PTR_TO_JSON(OwnerPrincipalId, ownerPrincipalId_);
        DARABONBA_PTR_TO_JSON(OwnerPrincipalType, ownerPrincipalType_);
        DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_TO_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_TO_JSON(ProvisionedProductArn, provisionedProductArn_);
        DARABONBA_PTR_TO_JSON(ProvisionedProductId, provisionedProductId_);
        DARABONBA_PTR_TO_JSON(ProvisionedProductName, provisionedProductName_);
        DARABONBA_PTR_TO_JSON(ProvisionedProductType, provisionedProductType_);
        DARABONBA_PTR_TO_JSON(StackId, stackId_);
        DARABONBA_PTR_TO_JSON(StackRegionId, stackRegionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
      };
      friend void from_json(const Darabonba::Json& j, ProvisionedProductDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(LastProvisioningTaskId, lastProvisioningTaskId_);
        DARABONBA_PTR_FROM_JSON(LastSuccessfulProvisioningTaskId, lastSuccessfulProvisioningTaskId_);
        DARABONBA_PTR_FROM_JSON(LastTaskId, lastTaskId_);
        DARABONBA_PTR_FROM_JSON(OwnerPrincipalId, ownerPrincipalId_);
        DARABONBA_PTR_FROM_JSON(OwnerPrincipalType, ownerPrincipalType_);
        DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_FROM_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_FROM_JSON(ProvisionedProductArn, provisionedProductArn_);
        DARABONBA_PTR_FROM_JSON(ProvisionedProductId, provisionedProductId_);
        DARABONBA_PTR_FROM_JSON(ProvisionedProductName, provisionedProductName_);
        DARABONBA_PTR_FROM_JSON(ProvisionedProductType, provisionedProductType_);
        DARABONBA_PTR_FROM_JSON(StackId, stackId_);
        DARABONBA_PTR_FROM_JSON(StackRegionId, stackRegionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
      };
      ProvisionedProductDetail() = default ;
      ProvisionedProductDetail(const ProvisionedProductDetail &) = default ;
      ProvisionedProductDetail(ProvisionedProductDetail &&) = default ;
      ProvisionedProductDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProvisionedProductDetail() = default ;
      ProvisionedProductDetail& operator=(const ProvisionedProductDetail &) = default ;
      ProvisionedProductDetail& operator=(ProvisionedProductDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->lastProvisioningTaskId_ == nullptr && this->lastSuccessfulProvisioningTaskId_ == nullptr && this->lastTaskId_ == nullptr && this->ownerPrincipalId_ == nullptr && this->ownerPrincipalType_ == nullptr
        && this->portfolioId_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr && this->productVersionId_ == nullptr && this->productVersionName_ == nullptr
        && this->provisionedProductArn_ == nullptr && this->provisionedProductId_ == nullptr && this->provisionedProductName_ == nullptr && this->provisionedProductType_ == nullptr && this->stackId_ == nullptr
        && this->stackRegionId_ == nullptr && this->status_ == nullptr && this->statusMessage_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProvisionedProductDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // lastProvisioningTaskId Field Functions 
      bool hasLastProvisioningTaskId() const { return this->lastProvisioningTaskId_ != nullptr;};
      void deleteLastProvisioningTaskId() { this->lastProvisioningTaskId_ = nullptr;};
      inline string getLastProvisioningTaskId() const { DARABONBA_PTR_GET_DEFAULT(lastProvisioningTaskId_, "") };
      inline ProvisionedProductDetail& setLastProvisioningTaskId(string lastProvisioningTaskId) { DARABONBA_PTR_SET_VALUE(lastProvisioningTaskId_, lastProvisioningTaskId) };


      // lastSuccessfulProvisioningTaskId Field Functions 
      bool hasLastSuccessfulProvisioningTaskId() const { return this->lastSuccessfulProvisioningTaskId_ != nullptr;};
      void deleteLastSuccessfulProvisioningTaskId() { this->lastSuccessfulProvisioningTaskId_ = nullptr;};
      inline string getLastSuccessfulProvisioningTaskId() const { DARABONBA_PTR_GET_DEFAULT(lastSuccessfulProvisioningTaskId_, "") };
      inline ProvisionedProductDetail& setLastSuccessfulProvisioningTaskId(string lastSuccessfulProvisioningTaskId) { DARABONBA_PTR_SET_VALUE(lastSuccessfulProvisioningTaskId_, lastSuccessfulProvisioningTaskId) };


      // lastTaskId Field Functions 
      bool hasLastTaskId() const { return this->lastTaskId_ != nullptr;};
      void deleteLastTaskId() { this->lastTaskId_ = nullptr;};
      inline string getLastTaskId() const { DARABONBA_PTR_GET_DEFAULT(lastTaskId_, "") };
      inline ProvisionedProductDetail& setLastTaskId(string lastTaskId) { DARABONBA_PTR_SET_VALUE(lastTaskId_, lastTaskId) };


      // ownerPrincipalId Field Functions 
      bool hasOwnerPrincipalId() const { return this->ownerPrincipalId_ != nullptr;};
      void deleteOwnerPrincipalId() { this->ownerPrincipalId_ = nullptr;};
      inline string getOwnerPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(ownerPrincipalId_, "") };
      inline ProvisionedProductDetail& setOwnerPrincipalId(string ownerPrincipalId) { DARABONBA_PTR_SET_VALUE(ownerPrincipalId_, ownerPrincipalId) };


      // ownerPrincipalType Field Functions 
      bool hasOwnerPrincipalType() const { return this->ownerPrincipalType_ != nullptr;};
      void deleteOwnerPrincipalType() { this->ownerPrincipalType_ = nullptr;};
      inline string getOwnerPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(ownerPrincipalType_, "") };
      inline ProvisionedProductDetail& setOwnerPrincipalType(string ownerPrincipalType) { DARABONBA_PTR_SET_VALUE(ownerPrincipalType_, ownerPrincipalType) };


      // portfolioId Field Functions 
      bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
      void deletePortfolioId() { this->portfolioId_ = nullptr;};
      inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
      inline ProvisionedProductDetail& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline ProvisionedProductDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ProvisionedProductDetail& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productVersionId Field Functions 
      bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
      void deleteProductVersionId() { this->productVersionId_ = nullptr;};
      inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
      inline ProvisionedProductDetail& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


      // productVersionName Field Functions 
      bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
      void deleteProductVersionName() { this->productVersionName_ = nullptr;};
      inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
      inline ProvisionedProductDetail& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


      // provisionedProductArn Field Functions 
      bool hasProvisionedProductArn() const { return this->provisionedProductArn_ != nullptr;};
      void deleteProvisionedProductArn() { this->provisionedProductArn_ = nullptr;};
      inline string getProvisionedProductArn() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductArn_, "") };
      inline ProvisionedProductDetail& setProvisionedProductArn(string provisionedProductArn) { DARABONBA_PTR_SET_VALUE(provisionedProductArn_, provisionedProductArn) };


      // provisionedProductId Field Functions 
      bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
      void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
      inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
      inline ProvisionedProductDetail& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


      // provisionedProductName Field Functions 
      bool hasProvisionedProductName() const { return this->provisionedProductName_ != nullptr;};
      void deleteProvisionedProductName() { this->provisionedProductName_ = nullptr;};
      inline string getProvisionedProductName() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductName_, "") };
      inline ProvisionedProductDetail& setProvisionedProductName(string provisionedProductName) { DARABONBA_PTR_SET_VALUE(provisionedProductName_, provisionedProductName) };


      // provisionedProductType Field Functions 
      bool hasProvisionedProductType() const { return this->provisionedProductType_ != nullptr;};
      void deleteProvisionedProductType() { this->provisionedProductType_ = nullptr;};
      inline string getProvisionedProductType() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductType_, "") };
      inline ProvisionedProductDetail& setProvisionedProductType(string provisionedProductType) { DARABONBA_PTR_SET_VALUE(provisionedProductType_, provisionedProductType) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline ProvisionedProductDetail& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // stackRegionId Field Functions 
      bool hasStackRegionId() const { return this->stackRegionId_ != nullptr;};
      void deleteStackRegionId() { this->stackRegionId_ = nullptr;};
      inline string getStackRegionId() const { DARABONBA_PTR_GET_DEFAULT(stackRegionId_, "") };
      inline ProvisionedProductDetail& setStackRegionId(string stackRegionId) { DARABONBA_PTR_SET_VALUE(stackRegionId_, stackRegionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ProvisionedProductDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline ProvisionedProductDetail& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


    protected:
      // The time when the product instance was created.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The ID of the task that was last run on the product instance.
      // 
      // The task can be one of the following types:
      // 
      // *   LaunchProduct: a task that launches the product.
      // *   UpdateProvisionedProduct: a task that updates the information about the product instance.
      // *   TerminateProvisionedProduct: a task that terminates the product instance.
      shared_ptr<string> lastProvisioningTaskId_ {};
      // The ID of the last task that was successfully run on the product instance.
      // 
      // The task can be one of the following types:
      // 
      // *   LaunchProduct: a task that launches the product.
      // *   UpdateProvisionedProduct: a task that updates the information about the product instance.
      // *   TerminateProvisionedProduct: a task that terminates the product instance.
      shared_ptr<string> lastSuccessfulProvisioningTaskId_ {};
      // The ID of the task that was last run.
      shared_ptr<string> lastTaskId_ {};
      // The ID of the RAM entity to which the product instance belongs.
      shared_ptr<string> ownerPrincipalId_ {};
      // The type of the Resource Access Management (RAM) entity to which the product instance belongs. Valid values:
      // 
      // *   RamUser: a RAM user
      // *   RamRole: a RAM role
      shared_ptr<string> ownerPrincipalType_ {};
      // The ID of the product portfolio.
      shared_ptr<string> portfolioId_ {};
      // The ID of the product.
      shared_ptr<string> productId_ {};
      // The name of the product.
      shared_ptr<string> productName_ {};
      // The ID of the product version.
      shared_ptr<string> productVersionId_ {};
      // The name of the product version.
      shared_ptr<string> productVersionName_ {};
      // The Alibaba Cloud Resource Name (ARN) of the product instance.
      shared_ptr<string> provisionedProductArn_ {};
      // The ID of the product instance.
      shared_ptr<string> provisionedProductId_ {};
      // The name of the product instance.
      shared_ptr<string> provisionedProductName_ {};
      // The type of the product instance.
      // 
      // The value is fixed as RosStack, which indicates an ROS stack.
      shared_ptr<string> provisionedProductType_ {};
      // The ID of the Resource Orchestration Service (ROS) stack.
      shared_ptr<string> stackId_ {};
      // The ID of the region to which the ROS stack belongs.
      shared_ptr<string> stackRegionId_ {};
      // The state of the product instance. Valid values:
      // 
      // *   Available: The product instance was available.
      // *   UnderChange: The information about the product instance was being changed.
      // *   Error: An exception occurred on the product instance.
      shared_ptr<string> status_ {};
      // The message that is returned for the status of the product instance.
      // 
      // > This parameter is returned only when Error is returned for the Status parameter.
      shared_ptr<string> statusMessage_ {};
    };

    virtual bool empty() const override { return this->provisionedProductDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // provisionedProductDetail Field Functions 
    bool hasProvisionedProductDetail() const { return this->provisionedProductDetail_ != nullptr;};
    void deleteProvisionedProductDetail() { this->provisionedProductDetail_ = nullptr;};
    inline const GetProvisionedProductResponseBody::ProvisionedProductDetail & getProvisionedProductDetail() const { DARABONBA_PTR_GET_CONST(provisionedProductDetail_, GetProvisionedProductResponseBody::ProvisionedProductDetail) };
    inline GetProvisionedProductResponseBody::ProvisionedProductDetail getProvisionedProductDetail() { DARABONBA_PTR_GET(provisionedProductDetail_, GetProvisionedProductResponseBody::ProvisionedProductDetail) };
    inline GetProvisionedProductResponseBody& setProvisionedProductDetail(const GetProvisionedProductResponseBody::ProvisionedProductDetail & provisionedProductDetail) { DARABONBA_PTR_SET_VALUE(provisionedProductDetail_, provisionedProductDetail) };
    inline GetProvisionedProductResponseBody& setProvisionedProductDetail(GetProvisionedProductResponseBody::ProvisionedProductDetail && provisionedProductDetail) { DARABONBA_PTR_SET_RVALUE(provisionedProductDetail_, provisionedProductDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProvisionedProductResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the product instance.
    shared_ptr<GetProvisionedProductResponseBody::ProvisionedProductDetail> provisionedProductDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
