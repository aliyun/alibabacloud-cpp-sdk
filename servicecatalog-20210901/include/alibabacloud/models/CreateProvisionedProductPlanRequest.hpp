// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROVISIONEDPRODUCTPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROVISIONEDPRODUCTPLANREQUEST_HPP_
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
  class CreateProvisionedProductPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProvisionedProductPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PlanName, planName_);
      DARABONBA_PTR_TO_JSON(PlanType, planType_);
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_TO_JSON(ProvisionedProductName, provisionedProductName_);
      DARABONBA_PTR_TO_JSON(StackRegionId, stackRegionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, CreateProvisionedProductPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PlanName, planName_);
      DARABONBA_PTR_FROM_JSON(PlanType, planType_);
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_FROM_JSON(ProvisionedProductName, provisionedProductName_);
      DARABONBA_PTR_FROM_JSON(StackRegionId, stackRegionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    CreateProvisionedProductPlanRequest() = default ;
    CreateProvisionedProductPlanRequest(const CreateProvisionedProductPlanRequest &) = default ;
    CreateProvisionedProductPlanRequest(CreateProvisionedProductPlanRequest &&) = default ;
    CreateProvisionedProductPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProvisionedProductPlanRequest() = default ;
    CreateProvisionedProductPlanRequest& operator=(const CreateProvisionedProductPlanRequest &) = default ;
    CreateProvisionedProductPlanRequest& operator=(CreateProvisionedProductPlanRequest &&) = default ;
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
      // 
      // The key can be up to 128 characters in length, and cannot start with `acs:` or `aliyun`. The tag key cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The value of the custom tag.
      // 
      // The value can be up to 128 characters in length, and cannot start with `acs:`. The tag value cannot contain `http://` or `https://`.
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
      // The name of the parameter in the template.
      shared_ptr<string> parameterKey_ {};
      // The value of the parameter in the template.
      shared_ptr<string> parameterValue_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->operationType_ == nullptr && this->parameters_ == nullptr && this->planName_ == nullptr && this->planType_ == nullptr && this->portfolioId_ == nullptr
        && this->productId_ == nullptr && this->productVersionId_ == nullptr && this->provisionedProductName_ == nullptr && this->stackRegionId_ == nullptr && this->tags_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProvisionedProductPlanRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline CreateProvisionedProductPlanRequest& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<CreateProvisionedProductPlanRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<CreateProvisionedProductPlanRequest::Parameters>) };
    inline vector<CreateProvisionedProductPlanRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<CreateProvisionedProductPlanRequest::Parameters>) };
    inline CreateProvisionedProductPlanRequest& setParameters(const vector<CreateProvisionedProductPlanRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateProvisionedProductPlanRequest& setParameters(vector<CreateProvisionedProductPlanRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline CreateProvisionedProductPlanRequest& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // planType Field Functions 
    bool hasPlanType() const { return this->planType_ != nullptr;};
    void deletePlanType() { this->planType_ = nullptr;};
    inline string getPlanType() const { DARABONBA_PTR_GET_DEFAULT(planType_, "") };
    inline CreateProvisionedProductPlanRequest& setPlanType(string planType) { DARABONBA_PTR_SET_VALUE(planType_, planType) };


    // portfolioId Field Functions 
    bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
    void deletePortfolioId() { this->portfolioId_ = nullptr;};
    inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
    inline CreateProvisionedProductPlanRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline CreateProvisionedProductPlanRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productVersionId Field Functions 
    bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
    void deleteProductVersionId() { this->productVersionId_ = nullptr;};
    inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
    inline CreateProvisionedProductPlanRequest& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


    // provisionedProductName Field Functions 
    bool hasProvisionedProductName() const { return this->provisionedProductName_ != nullptr;};
    void deleteProvisionedProductName() { this->provisionedProductName_ = nullptr;};
    inline string getProvisionedProductName() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductName_, "") };
    inline CreateProvisionedProductPlanRequest& setProvisionedProductName(string provisionedProductName) { DARABONBA_PTR_SET_VALUE(provisionedProductName_, provisionedProductName) };


    // stackRegionId Field Functions 
    bool hasStackRegionId() const { return this->stackRegionId_ != nullptr;};
    void deleteStackRegionId() { this->stackRegionId_ = nullptr;};
    inline string getStackRegionId() const { DARABONBA_PTR_GET_DEFAULT(stackRegionId_, "") };
    inline CreateProvisionedProductPlanRequest& setStackRegionId(string stackRegionId) { DARABONBA_PTR_SET_VALUE(stackRegionId_, stackRegionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateProvisionedProductPlanRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateProvisionedProductPlanRequest::Tags>) };
    inline vector<CreateProvisionedProductPlanRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateProvisionedProductPlanRequest::Tags>) };
    inline CreateProvisionedProductPlanRequest& setTags(const vector<CreateProvisionedProductPlanRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateProvisionedProductPlanRequest& setTags(vector<CreateProvisionedProductPlanRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The description of the plan.
    // 
    // The value must be 1 to 128 characters in length.
    shared_ptr<string> description_ {};
    // The type of the operation that you want the plan to perform. Valid values:
    // 
    // *   LaunchProduct: launches the product. This is the default value.
    // *   UpdateProvisionedProduct: updates the information about the product instance.
    // *   TerminateProvisionedProduct: terminates the product instance.
    shared_ptr<string> operationType_ {};
    // An array that consists of the parameters in the template.
    // 
    // You can specify up to 200 parameters.
    // 
    // > If you specify Parameters, you must specify ParameterKey and ParameterValue.
    shared_ptr<vector<CreateProvisionedProductPlanRequest::Parameters>> parameters_ {};
    // The plan name.
    // 
    // The value must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> planName_ {};
    // The plan type.
    // 
    // Set the value to Ros, which specifies Resource Orchestration Service (ROS).
    // 
    // This parameter is required.
    shared_ptr<string> planType_ {};
    // The product portfolio ID.
    // 
    // > If PortfolioId is not required, you do not need to specify PortfolioId. If PortfolioId is required, you must specify PortfolioId. For more information about how to obtain the value of PortfolioId, see [ListLaunchOptions](~~ListLaunchOptions~~).
    shared_ptr<string> portfolioId_ {};
    // The product ID.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // The product version ID.
    // 
    // This parameter is required.
    shared_ptr<string> productVersionId_ {};
    // The product instance name.
    // 
    // The value must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> provisionedProductName_ {};
    // The ID of the region to which the ROS stack belongs.
    // 
    // For more information about how to obtain the regions that are supported by ROS, see [DescribeRegions](https://help.aliyun.com/document_detail/131035.html).
    // 
    // This parameter is required.
    shared_ptr<string> stackRegionId_ {};
    // An array that consists of custom tags.
    // 
    // Maximum value of N: 20.
    // 
    // > 
    // *   If you specify Tags, you must specify Tags.N.Key and Tags.N.Value.
    // *   The tag of a stack is propagated to each resource that supports the tag feature in the stack.
    shared_ptr<vector<CreateProvisionedProductPlanRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
