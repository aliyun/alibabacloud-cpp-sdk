// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROVISIONEDPRODUCTPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROVISIONEDPRODUCTPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class GetProvisionedProductPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProvisionedProductPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PlanDetail, planDetail_);
      DARABONBA_PTR_TO_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_TO_JSON(ProductVersionDetail, productVersionDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceChanges, resourceChanges_);
    };
    friend void from_json(const Darabonba::Json& j, GetProvisionedProductPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PlanDetail, planDetail_);
      DARABONBA_PTR_FROM_JSON(ProductDetail, productDetail_);
      DARABONBA_PTR_FROM_JSON(ProductVersionDetail, productVersionDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceChanges, resourceChanges_);
    };
    GetProvisionedProductPlanResponseBody() = default ;
    GetProvisionedProductPlanResponseBody(const GetProvisionedProductPlanResponseBody &) = default ;
    GetProvisionedProductPlanResponseBody(GetProvisionedProductPlanResponseBody &&) = default ;
    GetProvisionedProductPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProvisionedProductPlanResponseBody() = default ;
    GetProvisionedProductPlanResponseBody& operator=(const GetProvisionedProductPlanResponseBody &) = default ;
    GetProvisionedProductPlanResponseBody& operator=(GetProvisionedProductPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceChanges : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceChanges& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
        DARABONBA_PTR_TO_JSON(PhysicalResourceId, physicalResourceId_);
        DARABONBA_PTR_TO_JSON(Replacement, replacement_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceChanges& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
        DARABONBA_PTR_FROM_JSON(PhysicalResourceId, physicalResourceId_);
        DARABONBA_PTR_FROM_JSON(Replacement, replacement_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      ResourceChanges() = default ;
      ResourceChanges(const ResourceChanges &) = default ;
      ResourceChanges(ResourceChanges &&) = default ;
      ResourceChanges(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceChanges() = default ;
      ResourceChanges& operator=(const ResourceChanges &) = default ;
      ResourceChanges& operator=(ResourceChanges &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->action_ == nullptr
        && this->logicalResourceId_ == nullptr && this->physicalResourceId_ == nullptr && this->replacement_ == nullptr && this->resourceType_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline ResourceChanges& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


      // logicalResourceId Field Functions 
      bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
      void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
      inline string getLogicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
      inline ResourceChanges& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


      // physicalResourceId Field Functions 
      bool hasPhysicalResourceId() const { return this->physicalResourceId_ != nullptr;};
      void deletePhysicalResourceId() { this->physicalResourceId_ = nullptr;};
      inline string getPhysicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(physicalResourceId_, "") };
      inline ResourceChanges& setPhysicalResourceId(string physicalResourceId) { DARABONBA_PTR_SET_VALUE(physicalResourceId_, physicalResourceId) };


      // replacement Field Functions 
      bool hasReplacement() const { return this->replacement_ != nullptr;};
      void deleteReplacement() { this->replacement_ = nullptr;};
      inline string getReplacement() const { DARABONBA_PTR_GET_DEFAULT(replacement_, "") };
      inline ResourceChanges& setReplacement(string replacement) { DARABONBA_PTR_SET_VALUE(replacement_, replacement) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceChanges& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The action that is performed on the resource. Valid values:
      // 
      // *   Add
      // *   Modify
      // *   Remove
      // *   None
      shared_ptr<string> action_ {};
      // The logical ID of the resource.
      shared_ptr<string> logicalResourceId_ {};
      // The physical ID of the resource.
      // 
      // >  This parameter is returned if the value of Action is Modify or Remove.
      shared_ptr<string> physicalResourceId_ {};
      // Indicates whether a replacement update is performed on the template. Valid values:
      // 
      // *   True: A replacement update is performed on the template.
      // *   False: A change is made on the template.
      // *   Conditional: A replacement update may be performed on the template. You can check whether a replacement update is performed when the template is in use.
      // 
      // >  This parameter is returned if the value of Action is Modify.
      shared_ptr<string> replacement_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
    };

    class ProductVersionDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductVersionDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Active, active_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Guidance, guidance_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_TO_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(TemplateUrl, templateUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ProductVersionDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Active, active_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Guidance, guidance_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_FROM_JSON(ProductVersionName, productVersionName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(TemplateUrl, templateUrl_);
      };
      ProductVersionDetail() = default ;
      ProductVersionDetail(const ProductVersionDetail &) = default ;
      ProductVersionDetail(ProductVersionDetail &&) = default ;
      ProductVersionDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductVersionDetail() = default ;
      ProductVersionDetail& operator=(const ProductVersionDetail &) = default ;
      ProductVersionDetail& operator=(ProductVersionDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->active_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->guidance_ == nullptr && this->productId_ == nullptr && this->productVersionId_ == nullptr
        && this->productVersionName_ == nullptr && this->templateType_ == nullptr && this->templateUrl_ == nullptr; };
      // active Field Functions 
      bool hasActive() const { return this->active_ != nullptr;};
      void deleteActive() { this->active_ = nullptr;};
      inline bool getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, false) };
      inline ProductVersionDetail& setActive(bool active) { DARABONBA_PTR_SET_VALUE(active_, active) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProductVersionDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProductVersionDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // guidance Field Functions 
      bool hasGuidance() const { return this->guidance_ != nullptr;};
      void deleteGuidance() { this->guidance_ = nullptr;};
      inline string getGuidance() const { DARABONBA_PTR_GET_DEFAULT(guidance_, "") };
      inline ProductVersionDetail& setGuidance(string guidance) { DARABONBA_PTR_SET_VALUE(guidance_, guidance) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline ProductVersionDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productVersionId Field Functions 
      bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
      void deleteProductVersionId() { this->productVersionId_ = nullptr;};
      inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
      inline ProductVersionDetail& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


      // productVersionName Field Functions 
      bool hasProductVersionName() const { return this->productVersionName_ != nullptr;};
      void deleteProductVersionName() { this->productVersionName_ = nullptr;};
      inline string getProductVersionName() const { DARABONBA_PTR_GET_DEFAULT(productVersionName_, "") };
      inline ProductVersionDetail& setProductVersionName(string productVersionName) { DARABONBA_PTR_SET_VALUE(productVersionName_, productVersionName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ProductVersionDetail& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // templateUrl Field Functions 
      bool hasTemplateUrl() const { return this->templateUrl_ != nullptr;};
      void deleteTemplateUrl() { this->templateUrl_ = nullptr;};
      inline string getTemplateUrl() const { DARABONBA_PTR_GET_DEFAULT(templateUrl_, "") };
      inline ProductVersionDetail& setTemplateUrl(string templateUrl) { DARABONBA_PTR_SET_VALUE(templateUrl_, templateUrl) };


    protected:
      // Indicates whether the product version is visible to end users. Valid values:
      // 
      // *   true (default)
      // *   false
      shared_ptr<bool> active_ {};
      // The time when the product version was created.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the product version.
      shared_ptr<string> description_ {};
      // The recommendation information. Valid values:
      // 
      // *   Default: No recommendation information is provided. This is the default value.
      // *   Recommended: the recommendation version.
      // *   Latest: the latest version.
      // *   Deprecated: the version that is about to be deprecated.
      shared_ptr<string> guidance_ {};
      // The ID of the product to which the product version belongs.
      shared_ptr<string> productId_ {};
      // The ID of the product version.
      shared_ptr<string> productVersionId_ {};
      // The name for the version of the product.
      shared_ptr<string> productVersionName_ {};
      // The type of the template.
      // 
      // The value is fixed as RosTerraformTemplate, which indicates that the Terraform template is supported by ROS.
      shared_ptr<string> templateType_ {};
      // The URL of the template.
      shared_ptr<string> templateUrl_ {};
    };

    class ProductDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductDetail& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ProductArn, productArn_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      };
      friend void from_json(const Darabonba::Json& j, ProductDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ProductArn, productArn_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
      };
      ProductDetail() = default ;
      ProductDetail(const ProductDetail &) = default ;
      ProductDetail(ProductDetail &&) = default ;
      ProductDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductDetail() = default ;
      ProductDetail& operator=(const ProductDetail &) = default ;
      ProductDetail& operator=(ProductDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->productArn_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr && this->productType_ == nullptr
        && this->providerName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ProductDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ProductDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // productArn Field Functions 
      bool hasProductArn() const { return this->productArn_ != nullptr;};
      void deleteProductArn() { this->productArn_ = nullptr;};
      inline string getProductArn() const { DARABONBA_PTR_GET_DEFAULT(productArn_, "") };
      inline ProductDetail& setProductArn(string productArn) { DARABONBA_PTR_SET_VALUE(productArn_, productArn) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline ProductDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ProductDetail& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline ProductDetail& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline ProductDetail& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    protected:
      // The creation time.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the product.
      shared_ptr<string> description_ {};
      // The Alibaba Cloud Resource Name (ARN) of the product.
      shared_ptr<string> productArn_ {};
      // The ID of the product.
      shared_ptr<string> productId_ {};
      // The name of the product.
      shared_ptr<string> productName_ {};
      // The type of the product.
      // 
      // The value is fixed as Ros, which indicates ROS.
      shared_ptr<string> productType_ {};
      // The provider of the product.
      shared_ptr<string> providerName_ {};
    };

    class PlanDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PlanDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ApprovalDetail, approvalDetail_);
        DARABONBA_PTR_TO_JSON(AssignedApprovers, assignedApprovers_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(OperationType, operationType_);
        DARABONBA_PTR_TO_JSON(OwnerPrincipalId, ownerPrincipalId_);
        DARABONBA_PTR_TO_JSON(OwnerPrincipalName, ownerPrincipalName_);
        DARABONBA_PTR_TO_JSON(OwnerPrincipalType, ownerPrincipalType_);
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(PlanId, planId_);
        DARABONBA_PTR_TO_JSON(PlanName, planName_);
        DARABONBA_PTR_TO_JSON(PlanType, planType_);
        DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_TO_JSON(ProvisionedProductId, provisionedProductId_);
        DARABONBA_PTR_TO_JSON(ProvisionedProductName, provisionedProductName_);
        DARABONBA_PTR_TO_JSON(StackId, stackId_);
        DARABONBA_PTR_TO_JSON(StackRegionId, stackRegionId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusMessage, statusMessage_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Uid, uid_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, PlanDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ApprovalDetail, approvalDetail_);
        DARABONBA_PTR_FROM_JSON(AssignedApprovers, assignedApprovers_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
        DARABONBA_PTR_FROM_JSON(OwnerPrincipalId, ownerPrincipalId_);
        DARABONBA_PTR_FROM_JSON(OwnerPrincipalName, ownerPrincipalName_);
        DARABONBA_PTR_FROM_JSON(OwnerPrincipalType, ownerPrincipalType_);
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(PlanId, planId_);
        DARABONBA_PTR_FROM_JSON(PlanName, planName_);
        DARABONBA_PTR_FROM_JSON(PlanType, planType_);
        DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
        DARABONBA_PTR_FROM_JSON(ProvisionedProductId, provisionedProductId_);
        DARABONBA_PTR_FROM_JSON(ProvisionedProductName, provisionedProductName_);
        DARABONBA_PTR_FROM_JSON(StackId, stackId_);
        DARABONBA_PTR_FROM_JSON(StackRegionId, stackRegionId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusMessage, statusMessage_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Uid, uid_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      PlanDetail() = default ;
      PlanDetail(const PlanDetail &) = default ;
      PlanDetail(PlanDetail &&) = default ;
      PlanDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PlanDetail() = default ;
      PlanDetail& operator=(const PlanDetail &) = default ;
      PlanDetail& operator=(PlanDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the custom tag.
        shared_ptr<string> key_ {};
        // The value of the custom tag.
        shared_ptr<string> value_ {};
      };

      class Parameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
          DARABONBA_PTR_TO_JSON(ParameterKey, parameterKey_);
          DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
        };
        friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ParameterKey, parameterKey_);
          DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
        };
        Parameters() = default ;
        Parameters(const Parameters &) = default ;
        Parameters(Parameters &&) = default ;
        Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Parameters() = default ;
        Parameters& operator=(const Parameters &) = default ;
        Parameters& operator=(Parameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->parameterKey_ == nullptr
        && this->parameterValue_ == nullptr; };
        // parameterKey Field Functions 
        bool hasParameterKey() const { return this->parameterKey_ != nullptr;};
        void deleteParameterKey() { this->parameterKey_ = nullptr;};
        inline string getParameterKey() const { DARABONBA_PTR_GET_DEFAULT(parameterKey_, "") };
        inline Parameters& setParameterKey(string parameterKey) { DARABONBA_PTR_SET_VALUE(parameterKey_, parameterKey) };


        // parameterValue Field Functions 
        bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
        void deleteParameterValue() { this->parameterValue_ = nullptr;};
        inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
        inline Parameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


      protected:
        // The name of the input parameter for the template.
        shared_ptr<string> parameterKey_ {};
        // The value of the input parameter for the template.
        shared_ptr<string> parameterValue_ {};
      };

      class AssignedApprovers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AssignedApprovers& obj) { 
          DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
          DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
        };
        friend void from_json(const Darabonba::Json& j, AssignedApprovers& obj) { 
          DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
          DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
        };
        AssignedApprovers() = default ;
        AssignedApprovers(const AssignedApprovers &) = default ;
        AssignedApprovers(AssignedApprovers &&) = default ;
        AssignedApprovers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AssignedApprovers() = default ;
        AssignedApprovers& operator=(const AssignedApprovers &) = default ;
        AssignedApprovers& operator=(AssignedApprovers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->principalName_ == nullptr
        && this->principalType_ == nullptr; };
        // principalName Field Functions 
        bool hasPrincipalName() const { return this->principalName_ != nullptr;};
        void deletePrincipalName() { this->principalName_ = nullptr;};
        inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
        inline AssignedApprovers& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


        // principalType Field Functions 
        bool hasPrincipalType() const { return this->principalType_ != nullptr;};
        void deletePrincipalType() { this->principalType_ = nullptr;};
        inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
        inline AssignedApprovers& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


      protected:
        // The name of the RAM entity of the plan approver.
        shared_ptr<string> principalName_ {};
        // The type of the Resource Access Management (RAM) entity of the plan approver. Valid values:
        // 
        // *   RamUser: a RAM user.
        // *   RamRole: a RAM role.
        shared_ptr<string> principalType_ {};
      };

      class ApprovalDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ApprovalDetail& obj) { 
          DARABONBA_PTR_TO_JSON(OperationRecords, operationRecords_);
          DARABONBA_PTR_TO_JSON(TodoTaskActivities, todoTaskActivities_);
        };
        friend void from_json(const Darabonba::Json& j, ApprovalDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(OperationRecords, operationRecords_);
          DARABONBA_PTR_FROM_JSON(TodoTaskActivities, todoTaskActivities_);
        };
        ApprovalDetail() = default ;
        ApprovalDetail(const ApprovalDetail &) = default ;
        ApprovalDetail(ApprovalDetail &&) = default ;
        ApprovalDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ApprovalDetail() = default ;
        ApprovalDetail& operator=(const ApprovalDetail &) = default ;
        ApprovalDetail& operator=(ApprovalDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TodoTaskActivities : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TodoTaskActivities& obj) { 
            DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
            DARABONBA_PTR_TO_JSON(Tasks, tasks_);
          };
          friend void from_json(const Darabonba::Json& j, TodoTaskActivities& obj) { 
            DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
            DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
          };
          TodoTaskActivities() = default ;
          TodoTaskActivities(const TodoTaskActivities &) = default ;
          TodoTaskActivities(TodoTaskActivities &&) = default ;
          TodoTaskActivities(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TodoTaskActivities() = default ;
          TodoTaskActivities& operator=(const TodoTaskActivities &) = default ;
          TodoTaskActivities& operator=(TodoTaskActivities &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tasks : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tasks& obj) { 
              DARABONBA_PTR_TO_JSON(Operator, operator_);
            };
            friend void from_json(const Darabonba::Json& j, Tasks& obj) { 
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
            };
            Tasks() = default ;
            Tasks(const Tasks &) = default ;
            Tasks(Tasks &&) = default ;
            Tasks(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tasks() = default ;
            Tasks& operator=(const Tasks &) = default ;
            Tasks& operator=(Tasks &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Operator : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Operator& obj) { 
                DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
                DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
              };
              friend void from_json(const Darabonba::Json& j, Operator& obj) { 
                DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
                DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
              };
              Operator() = default ;
              Operator(const Operator &) = default ;
              Operator(Operator &&) = default ;
              Operator(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Operator() = default ;
              Operator& operator=(const Operator &) = default ;
              Operator& operator=(Operator &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->principalName_ == nullptr
        && this->principalType_ == nullptr; };
              // principalName Field Functions 
              bool hasPrincipalName() const { return this->principalName_ != nullptr;};
              void deletePrincipalName() { this->principalName_ = nullptr;};
              inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
              inline Operator& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


              // principalType Field Functions 
              bool hasPrincipalType() const { return this->principalType_ != nullptr;};
              void deletePrincipalType() { this->principalType_ = nullptr;};
              inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
              inline Operator& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


            protected:
              // The name of the RAM entity.
              shared_ptr<string> principalName_ {};
              // The type of the RAM entity. Valid values:
              // 
              // *   RamUser: a RAM user.
              // *   RamRole: a RAM role.
              shared_ptr<string> principalType_ {};
            };

            virtual bool empty() const override { return this->operator_ == nullptr; };
            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline const Tasks::Operator & getOperator() const { DARABONBA_PTR_GET_CONST(operator_, Tasks::Operator) };
            inline Tasks::Operator getOperator() { DARABONBA_PTR_GET(operator_, Tasks::Operator) };
            inline Tasks& setOperator(const Tasks::Operator & _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };
            inline Tasks& setOperator(Tasks::Operator && _operator) { DARABONBA_PTR_SET_RVALUE(operator_, _operator) };


          protected:
            // The RAM entities that can perform operations on the plan.
            shared_ptr<Tasks::Operator> operator_ {};
          };

          virtual bool empty() const override { return this->activityName_ == nullptr
        && this->tasks_ == nullptr; };
          // activityName Field Functions 
          bool hasActivityName() const { return this->activityName_ != nullptr;};
          void deleteActivityName() { this->activityName_ = nullptr;};
          inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
          inline TodoTaskActivities& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


          // tasks Field Functions 
          bool hasTasks() const { return this->tasks_ != nullptr;};
          void deleteTasks() { this->tasks_ = nullptr;};
          inline const vector<TodoTaskActivities::Tasks> & getTasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<TodoTaskActivities::Tasks>) };
          inline vector<TodoTaskActivities::Tasks> getTasks() { DARABONBA_PTR_GET(tasks_, vector<TodoTaskActivities::Tasks>) };
          inline TodoTaskActivities& setTasks(const vector<TodoTaskActivities::Tasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
          inline TodoTaskActivities& setTasks(vector<TodoTaskActivities::Tasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


        protected:
          // The name of the operation that is being performed by the plan.
          shared_ptr<string> activityName_ {};
          // The tasks that are pending for review.
          shared_ptr<vector<TodoTaskActivities::Tasks>> tasks_ {};
        };

        class OperationRecords : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OperationRecords& obj) { 
            DARABONBA_PTR_TO_JSON(ApprovalAction, approvalAction_);
            DARABONBA_PTR_TO_JSON(Comment, comment_);
            DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
          };
          friend void from_json(const Darabonba::Json& j, OperationRecords& obj) { 
            DARABONBA_PTR_FROM_JSON(ApprovalAction, approvalAction_);
            DARABONBA_PTR_FROM_JSON(Comment, comment_);
            DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
          };
          OperationRecords() = default ;
          OperationRecords(const OperationRecords &) = default ;
          OperationRecords(OperationRecords &&) = default ;
          OperationRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OperationRecords() = default ;
          OperationRecords& operator=(const OperationRecords &) = default ;
          OperationRecords& operator=(OperationRecords &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Operator : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Operator& obj) { 
              DARABONBA_PTR_TO_JSON(PrincipalId, principalId_);
              DARABONBA_PTR_TO_JSON(PrincipalName, principalName_);
              DARABONBA_PTR_TO_JSON(PrincipalType, principalType_);
            };
            friend void from_json(const Darabonba::Json& j, Operator& obj) { 
              DARABONBA_PTR_FROM_JSON(PrincipalId, principalId_);
              DARABONBA_PTR_FROM_JSON(PrincipalName, principalName_);
              DARABONBA_PTR_FROM_JSON(PrincipalType, principalType_);
            };
            Operator() = default ;
            Operator(const Operator &) = default ;
            Operator(Operator &&) = default ;
            Operator(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Operator() = default ;
            Operator& operator=(const Operator &) = default ;
            Operator& operator=(Operator &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->principalId_ == nullptr
        && this->principalName_ == nullptr && this->principalType_ == nullptr; };
            // principalId Field Functions 
            bool hasPrincipalId() const { return this->principalId_ != nullptr;};
            void deletePrincipalId() { this->principalId_ = nullptr;};
            inline string getPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(principalId_, "") };
            inline Operator& setPrincipalId(string principalId) { DARABONBA_PTR_SET_VALUE(principalId_, principalId) };


            // principalName Field Functions 
            bool hasPrincipalName() const { return this->principalName_ != nullptr;};
            void deletePrincipalName() { this->principalName_ = nullptr;};
            inline string getPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(principalName_, "") };
            inline Operator& setPrincipalName(string principalName) { DARABONBA_PTR_SET_VALUE(principalName_, principalName) };


            // principalType Field Functions 
            bool hasPrincipalType() const { return this->principalType_ != nullptr;};
            void deletePrincipalType() { this->principalType_ = nullptr;};
            inline string getPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(principalType_, "") };
            inline Operator& setPrincipalType(string principalType) { DARABONBA_PTR_SET_VALUE(principalType_, principalType) };


          protected:
            // The ID of the RAM entity.
            shared_ptr<string> principalId_ {};
            // The name RAM entity that servers as the operator.
            shared_ptr<string> principalName_ {};
            // The type of the RAM entity. Valid values:
            // 
            // *   RamUser: a RAM user.
            // *   RamRole: a RAM role.
            shared_ptr<string> principalType_ {};
          };

          virtual bool empty() const override { return this->approvalAction_ == nullptr
        && this->comment_ == nullptr && this->createTime_ == nullptr && this->operator_ == nullptr; };
          // approvalAction Field Functions 
          bool hasApprovalAction() const { return this->approvalAction_ != nullptr;};
          void deleteApprovalAction() { this->approvalAction_ = nullptr;};
          inline string getApprovalAction() const { DARABONBA_PTR_GET_DEFAULT(approvalAction_, "") };
          inline OperationRecords& setApprovalAction(string approvalAction) { DARABONBA_PTR_SET_VALUE(approvalAction_, approvalAction) };


          // comment Field Functions 
          bool hasComment() const { return this->comment_ != nullptr;};
          void deleteComment() { this->comment_ = nullptr;};
          inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
          inline OperationRecords& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


          // createTime Field Functions 
          bool hasCreateTime() const { return this->createTime_ != nullptr;};
          void deleteCreateTime() { this->createTime_ = nullptr;};
          inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
          inline OperationRecords& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline const OperationRecords::Operator & getOperator() const { DARABONBA_PTR_GET_CONST(operator_, OperationRecords::Operator) };
          inline OperationRecords::Operator getOperator() { DARABONBA_PTR_GET(operator_, OperationRecords::Operator) };
          inline OperationRecords& setOperator(const OperationRecords::Operator & _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };
          inline OperationRecords& setOperator(OperationRecords::Operator && _operator) { DARABONBA_PTR_SET_RVALUE(operator_, _operator) };


        protected:
          // The operation that is performed by the operator on the plan. Valid values:
          // 
          // *   Submit: submits the plan.
          // *   Cancel: cancels the plan.
          // *   Approve: approves the plan.
          // *   reject: rejectes the plan.
          shared_ptr<string> approvalAction_ {};
          // The approval comment of the operator.
          shared_ptr<string> comment_ {};
          // The time when the operation was performed.
          shared_ptr<string> createTime_ {};
          // The RAM entities that have performed operations on the plan.
          shared_ptr<OperationRecords::Operator> operator_ {};
        };

        virtual bool empty() const override { return this->operationRecords_ == nullptr
        && this->todoTaskActivities_ == nullptr; };
        // operationRecords Field Functions 
        bool hasOperationRecords() const { return this->operationRecords_ != nullptr;};
        void deleteOperationRecords() { this->operationRecords_ = nullptr;};
        inline const vector<ApprovalDetail::OperationRecords> & getOperationRecords() const { DARABONBA_PTR_GET_CONST(operationRecords_, vector<ApprovalDetail::OperationRecords>) };
        inline vector<ApprovalDetail::OperationRecords> getOperationRecords() { DARABONBA_PTR_GET(operationRecords_, vector<ApprovalDetail::OperationRecords>) };
        inline ApprovalDetail& setOperationRecords(const vector<ApprovalDetail::OperationRecords> & operationRecords) { DARABONBA_PTR_SET_VALUE(operationRecords_, operationRecords) };
        inline ApprovalDetail& setOperationRecords(vector<ApprovalDetail::OperationRecords> && operationRecords) { DARABONBA_PTR_SET_RVALUE(operationRecords_, operationRecords) };


        // todoTaskActivities Field Functions 
        bool hasTodoTaskActivities() const { return this->todoTaskActivities_ != nullptr;};
        void deleteTodoTaskActivities() { this->todoTaskActivities_ = nullptr;};
        inline const vector<ApprovalDetail::TodoTaskActivities> & getTodoTaskActivities() const { DARABONBA_PTR_GET_CONST(todoTaskActivities_, vector<ApprovalDetail::TodoTaskActivities>) };
        inline vector<ApprovalDetail::TodoTaskActivities> getTodoTaskActivities() { DARABONBA_PTR_GET(todoTaskActivities_, vector<ApprovalDetail::TodoTaskActivities>) };
        inline ApprovalDetail& setTodoTaskActivities(const vector<ApprovalDetail::TodoTaskActivities> & todoTaskActivities) { DARABONBA_PTR_SET_VALUE(todoTaskActivities_, todoTaskActivities) };
        inline ApprovalDetail& setTodoTaskActivities(vector<ApprovalDetail::TodoTaskActivities> && todoTaskActivities) { DARABONBA_PTR_SET_RVALUE(todoTaskActivities_, todoTaskActivities) };


      protected:
        // The operation records.
        shared_ptr<vector<ApprovalDetail::OperationRecords>> operationRecords_ {};
        // The operations that are being performed by the plan.
        shared_ptr<vector<ApprovalDetail::TodoTaskActivities>> todoTaskActivities_ {};
      };

      virtual bool empty() const override { return this->approvalDetail_ == nullptr
        && this->assignedApprovers_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->operationType_ == nullptr && this->ownerPrincipalId_ == nullptr
        && this->ownerPrincipalName_ == nullptr && this->ownerPrincipalType_ == nullptr && this->parameters_ == nullptr && this->planId_ == nullptr && this->planName_ == nullptr
        && this->planType_ == nullptr && this->portfolioId_ == nullptr && this->productId_ == nullptr && this->productVersionId_ == nullptr && this->provisionedProductId_ == nullptr
        && this->provisionedProductName_ == nullptr && this->stackId_ == nullptr && this->stackRegionId_ == nullptr && this->status_ == nullptr && this->statusMessage_ == nullptr
        && this->tags_ == nullptr && this->uid_ == nullptr && this->updateTime_ == nullptr; };
      // approvalDetail Field Functions 
      bool hasApprovalDetail() const { return this->approvalDetail_ != nullptr;};
      void deleteApprovalDetail() { this->approvalDetail_ = nullptr;};
      inline const PlanDetail::ApprovalDetail & getApprovalDetail() const { DARABONBA_PTR_GET_CONST(approvalDetail_, PlanDetail::ApprovalDetail) };
      inline PlanDetail::ApprovalDetail getApprovalDetail() { DARABONBA_PTR_GET(approvalDetail_, PlanDetail::ApprovalDetail) };
      inline PlanDetail& setApprovalDetail(const PlanDetail::ApprovalDetail & approvalDetail) { DARABONBA_PTR_SET_VALUE(approvalDetail_, approvalDetail) };
      inline PlanDetail& setApprovalDetail(PlanDetail::ApprovalDetail && approvalDetail) { DARABONBA_PTR_SET_RVALUE(approvalDetail_, approvalDetail) };


      // assignedApprovers Field Functions 
      bool hasAssignedApprovers() const { return this->assignedApprovers_ != nullptr;};
      void deleteAssignedApprovers() { this->assignedApprovers_ = nullptr;};
      inline const vector<PlanDetail::AssignedApprovers> & getAssignedApprovers() const { DARABONBA_PTR_GET_CONST(assignedApprovers_, vector<PlanDetail::AssignedApprovers>) };
      inline vector<PlanDetail::AssignedApprovers> getAssignedApprovers() { DARABONBA_PTR_GET(assignedApprovers_, vector<PlanDetail::AssignedApprovers>) };
      inline PlanDetail& setAssignedApprovers(const vector<PlanDetail::AssignedApprovers> & assignedApprovers) { DARABONBA_PTR_SET_VALUE(assignedApprovers_, assignedApprovers) };
      inline PlanDetail& setAssignedApprovers(vector<PlanDetail::AssignedApprovers> && assignedApprovers) { DARABONBA_PTR_SET_RVALUE(assignedApprovers_, assignedApprovers) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PlanDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PlanDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // operationType Field Functions 
      bool hasOperationType() const { return this->operationType_ != nullptr;};
      void deleteOperationType() { this->operationType_ = nullptr;};
      inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
      inline PlanDetail& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


      // ownerPrincipalId Field Functions 
      bool hasOwnerPrincipalId() const { return this->ownerPrincipalId_ != nullptr;};
      void deleteOwnerPrincipalId() { this->ownerPrincipalId_ = nullptr;};
      inline string getOwnerPrincipalId() const { DARABONBA_PTR_GET_DEFAULT(ownerPrincipalId_, "") };
      inline PlanDetail& setOwnerPrincipalId(string ownerPrincipalId) { DARABONBA_PTR_SET_VALUE(ownerPrincipalId_, ownerPrincipalId) };


      // ownerPrincipalName Field Functions 
      bool hasOwnerPrincipalName() const { return this->ownerPrincipalName_ != nullptr;};
      void deleteOwnerPrincipalName() { this->ownerPrincipalName_ = nullptr;};
      inline string getOwnerPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(ownerPrincipalName_, "") };
      inline PlanDetail& setOwnerPrincipalName(string ownerPrincipalName) { DARABONBA_PTR_SET_VALUE(ownerPrincipalName_, ownerPrincipalName) };


      // ownerPrincipalType Field Functions 
      bool hasOwnerPrincipalType() const { return this->ownerPrincipalType_ != nullptr;};
      void deleteOwnerPrincipalType() { this->ownerPrincipalType_ = nullptr;};
      inline string getOwnerPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(ownerPrincipalType_, "") };
      inline PlanDetail& setOwnerPrincipalType(string ownerPrincipalType) { DARABONBA_PTR_SET_VALUE(ownerPrincipalType_, ownerPrincipalType) };


      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const vector<PlanDetail::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<PlanDetail::Parameters>) };
      inline vector<PlanDetail::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<PlanDetail::Parameters>) };
      inline PlanDetail& setParameters(const vector<PlanDetail::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline PlanDetail& setParameters(vector<PlanDetail::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // planId Field Functions 
      bool hasPlanId() const { return this->planId_ != nullptr;};
      void deletePlanId() { this->planId_ = nullptr;};
      inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
      inline PlanDetail& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


      // planName Field Functions 
      bool hasPlanName() const { return this->planName_ != nullptr;};
      void deletePlanName() { this->planName_ = nullptr;};
      inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
      inline PlanDetail& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


      // planType Field Functions 
      bool hasPlanType() const { return this->planType_ != nullptr;};
      void deletePlanType() { this->planType_ = nullptr;};
      inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
      inline PlanDetail& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


      // portfolioId Field Functions 
      bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
      void deletePortfolioId() { this->portfolioId_ = nullptr;};
      inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
      inline PlanDetail& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline PlanDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productVersionId Field Functions 
      bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
      void deleteProductVersionId() { this->productVersionId_ = nullptr;};
      inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
      inline PlanDetail& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


      // provisionedProductId Field Functions 
      bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
      void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
      inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
      inline PlanDetail& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


      // provisionedProductName Field Functions 
      bool hasProvisionedProductName() const { return this->provisionedProductName_ != nullptr;};
      void deleteProvisionedProductName() { this->provisionedProductName_ = nullptr;};
      inline string getProvisionedProductName() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductName_, "") };
      inline PlanDetail& setProvisionedProductName(string provisionedProductName) { DARABONBA_PTR_SET_VALUE(provisionedProductName_, provisionedProductName) };


      // stackId Field Functions 
      bool hasStackId() const { return this->stackId_ != nullptr;};
      void deleteStackId() { this->stackId_ = nullptr;};
      inline string getStackId() const { DARABONBA_PTR_GET_DEFAULT(stackId_, "") };
      inline PlanDetail& setStackId(string stackId) { DARABONBA_PTR_SET_VALUE(stackId_, stackId) };


      // stackRegionId Field Functions 
      bool hasStackRegionId() const { return this->stackRegionId_ != nullptr;};
      void deleteStackRegionId() { this->stackRegionId_ = nullptr;};
      inline string getStackRegionId() const { DARABONBA_PTR_GET_DEFAULT(stackRegionId_, "") };
      inline PlanDetail& setStackRegionId(string stackRegionId) { DARABONBA_PTR_SET_VALUE(stackRegionId_, stackRegionId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PlanDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusMessage Field Functions 
      bool hasStatusMessage() const { return this->statusMessage_ != nullptr;};
      void deleteStatusMessage() { this->statusMessage_ = nullptr;};
      inline string getStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(statusMessage_, "") };
      inline PlanDetail& setStatusMessage(string statusMessage) { DARABONBA_PTR_SET_VALUE(statusMessage_, statusMessage) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<PlanDetail::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<PlanDetail::Tags>) };
      inline vector<PlanDetail::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<PlanDetail::Tags>) };
      inline PlanDetail& setTags(const vector<PlanDetail::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline PlanDetail& setTags(vector<PlanDetail::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // uid Field Functions 
      bool hasUid() const { return this->uid_ != nullptr;};
      void deleteUid() { this->uid_ = nullptr;};
      inline string getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, "") };
      inline PlanDetail& setUid(string uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline PlanDetail& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The approval details of the plan.
      shared_ptr<PlanDetail::ApprovalDetail> approvalDetail_ {};
      // An array that consists of reviewers.
      shared_ptr<vector<PlanDetail::AssignedApprovers>> assignedApprovers_ {};
      // The time when the plan was created.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the plan.
      shared_ptr<string> description_ {};
      // The purpose of the plan. Valid values:
      // 
      // *   LaunchProduct: launches the product.
      // *   UpdateProvisionedProduct: updates the information about the product instance.
      // *   TerminateProvisionedProduct: terminates the product instance.
      shared_ptr<string> operationType_ {};
      // The ID of the RAM entity to which the plan belongs.
      shared_ptr<string> ownerPrincipalId_ {};
      // The name of the RAM entity to which the plan belongs.
      shared_ptr<string> ownerPrincipalName_ {};
      // The type of the RAM entity to which the plan belongs. Valid values:
      // 
      // *   RamUser: a RAM user
      // *   RamRole: a RAM role
      shared_ptr<string> ownerPrincipalType_ {};
      // An array that consists of the parameters in the template.
      shared_ptr<vector<PlanDetail::Parameters>> parameters_ {};
      // The ID of the plan.
      shared_ptr<string> planId_ {};
      // The name of the plan.
      shared_ptr<string> planName_ {};
      // The type of the plan.
      // 
      // The value is fixed as Ros, which indicates Resource Orchestration Service (ROS).
      shared_ptr<string> planType_ {};
      // The ID of the product portfolio.
      shared_ptr<string> portfolioId_ {};
      // The ID of the product.
      shared_ptr<string> productId_ {};
      // The ID of the product version.
      shared_ptr<string> productVersionId_ {};
      // The ID of the product instance.
      shared_ptr<string> provisionedProductId_ {};
      // The name of the product instance.
      shared_ptr<string> provisionedProductName_ {};
      // The ID of the ROS stack.
      shared_ptr<string> stackId_ {};
      // The ID of the region to which the ROS stack belongs.
      shared_ptr<string> stackRegionId_ {};
      // The state of the plan. Valid values:
      // 
      // *   PreviewInProgress: The plan is being prechecked.
      // *   PreviewSuccess: The precheck is successful.
      // *   PreviewFailed: The precheck fails.
      // *   ApplicationInProgress: The plan is being approved.
      // *   ApplicationApproved: The plan is approved.
      // *   ApplicationRejected: The approval is rejected.
      // *   ExecuteInProgress: The plan is being run.
      // *   ExecuteSuccess: The plan is run.
      // *   ExecuteFailed: The plan fails to be run.
      // *   Canceled: The plan is canceled.
      shared_ptr<string> status_ {};
      // The message returned for the state.
      // 
      // > This parameter is returned only when PreviewFailed or ExecuteFailed is returned for Status.
      shared_ptr<string> statusMessage_ {};
      // An array that consists of custom tags.
      shared_ptr<vector<PlanDetail::Tags>> tags_ {};
      // The ID of the Alibaba Cloud account to which the plan belongs.
      shared_ptr<string> uid_ {};
      // The last time when the task was modified.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->planDetail_ == nullptr
        && this->productDetail_ == nullptr && this->productVersionDetail_ == nullptr && this->requestId_ == nullptr && this->resourceChanges_ == nullptr; };
    // planDetail Field Functions 
    bool hasPlanDetail() const { return this->planDetail_ != nullptr;};
    void deletePlanDetail() { this->planDetail_ = nullptr;};
    inline const GetProvisionedProductPlanResponseBody::PlanDetail & getPlanDetail() const { DARABONBA_PTR_GET_CONST(planDetail_, GetProvisionedProductPlanResponseBody::PlanDetail) };
    inline GetProvisionedProductPlanResponseBody::PlanDetail getPlanDetail() { DARABONBA_PTR_GET(planDetail_, GetProvisionedProductPlanResponseBody::PlanDetail) };
    inline GetProvisionedProductPlanResponseBody& setPlanDetail(const GetProvisionedProductPlanResponseBody::PlanDetail & planDetail) { DARABONBA_PTR_SET_VALUE(planDetail_, planDetail) };
    inline GetProvisionedProductPlanResponseBody& setPlanDetail(GetProvisionedProductPlanResponseBody::PlanDetail && planDetail) { DARABONBA_PTR_SET_RVALUE(planDetail_, planDetail) };


    // productDetail Field Functions 
    bool hasProductDetail() const { return this->productDetail_ != nullptr;};
    void deleteProductDetail() { this->productDetail_ = nullptr;};
    inline const GetProvisionedProductPlanResponseBody::ProductDetail & getProductDetail() const { DARABONBA_PTR_GET_CONST(productDetail_, GetProvisionedProductPlanResponseBody::ProductDetail) };
    inline GetProvisionedProductPlanResponseBody::ProductDetail getProductDetail() { DARABONBA_PTR_GET(productDetail_, GetProvisionedProductPlanResponseBody::ProductDetail) };
    inline GetProvisionedProductPlanResponseBody& setProductDetail(const GetProvisionedProductPlanResponseBody::ProductDetail & productDetail) { DARABONBA_PTR_SET_VALUE(productDetail_, productDetail) };
    inline GetProvisionedProductPlanResponseBody& setProductDetail(GetProvisionedProductPlanResponseBody::ProductDetail && productDetail) { DARABONBA_PTR_SET_RVALUE(productDetail_, productDetail) };


    // productVersionDetail Field Functions 
    bool hasProductVersionDetail() const { return this->productVersionDetail_ != nullptr;};
    void deleteProductVersionDetail() { this->productVersionDetail_ = nullptr;};
    inline const GetProvisionedProductPlanResponseBody::ProductVersionDetail & getProductVersionDetail() const { DARABONBA_PTR_GET_CONST(productVersionDetail_, GetProvisionedProductPlanResponseBody::ProductVersionDetail) };
    inline GetProvisionedProductPlanResponseBody::ProductVersionDetail getProductVersionDetail() { DARABONBA_PTR_GET(productVersionDetail_, GetProvisionedProductPlanResponseBody::ProductVersionDetail) };
    inline GetProvisionedProductPlanResponseBody& setProductVersionDetail(const GetProvisionedProductPlanResponseBody::ProductVersionDetail & productVersionDetail) { DARABONBA_PTR_SET_VALUE(productVersionDetail_, productVersionDetail) };
    inline GetProvisionedProductPlanResponseBody& setProductVersionDetail(GetProvisionedProductPlanResponseBody::ProductVersionDetail && productVersionDetail) { DARABONBA_PTR_SET_RVALUE(productVersionDetail_, productVersionDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetProvisionedProductPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceChanges Field Functions 
    bool hasResourceChanges() const { return this->resourceChanges_ != nullptr;};
    void deleteResourceChanges() { this->resourceChanges_ = nullptr;};
    inline const vector<GetProvisionedProductPlanResponseBody::ResourceChanges> & getResourceChanges() const { DARABONBA_PTR_GET_CONST(resourceChanges_, vector<GetProvisionedProductPlanResponseBody::ResourceChanges>) };
    inline vector<GetProvisionedProductPlanResponseBody::ResourceChanges> getResourceChanges() { DARABONBA_PTR_GET(resourceChanges_, vector<GetProvisionedProductPlanResponseBody::ResourceChanges>) };
    inline GetProvisionedProductPlanResponseBody& setResourceChanges(const vector<GetProvisionedProductPlanResponseBody::ResourceChanges> & resourceChanges) { DARABONBA_PTR_SET_VALUE(resourceChanges_, resourceChanges) };
    inline GetProvisionedProductPlanResponseBody& setResourceChanges(vector<GetProvisionedProductPlanResponseBody::ResourceChanges> && resourceChanges) { DARABONBA_PTR_SET_RVALUE(resourceChanges_, resourceChanges) };


  protected:
    // The details of the plan.
    shared_ptr<GetProvisionedProductPlanResponseBody::PlanDetail> planDetail_ {};
    // The details of the product.
    shared_ptr<GetProvisionedProductPlanResponseBody::ProductDetail> productDetail_ {};
    // The details of the product version.
    shared_ptr<GetProvisionedProductPlanResponseBody::ProductVersionDetail> productVersionDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array that consists of the resources to be changed in the plan.
    shared_ptr<vector<GetProvisionedProductPlanResponseBody::ResourceChanges>> resourceChanges_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
