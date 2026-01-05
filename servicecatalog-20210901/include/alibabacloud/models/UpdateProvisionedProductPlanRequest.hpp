// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROVISIONEDPRODUCTPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROVISIONEDPRODUCTPLANREQUEST_HPP_
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
  class UpdateProvisionedProductPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProvisionedProductPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProvisionedProductPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    UpdateProvisionedProductPlanRequest() = default ;
    UpdateProvisionedProductPlanRequest(const UpdateProvisionedProductPlanRequest &) = default ;
    UpdateProvisionedProductPlanRequest(UpdateProvisionedProductPlanRequest &&) = default ;
    UpdateProvisionedProductPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProvisionedProductPlanRequest() = default ;
    UpdateProvisionedProductPlanRequest& operator=(const UpdateProvisionedProductPlanRequest &) = default ;
    UpdateProvisionedProductPlanRequest& operator=(UpdateProvisionedProductPlanRequest &&) = default ;
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
        && this->parameters_ == nullptr && this->planId_ == nullptr && this->portfolioId_ == nullptr && this->productId_ == nullptr && this->productVersionId_ == nullptr
        && this->tags_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProvisionedProductPlanRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<UpdateProvisionedProductPlanRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<UpdateProvisionedProductPlanRequest::Parameters>) };
    inline vector<UpdateProvisionedProductPlanRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<UpdateProvisionedProductPlanRequest::Parameters>) };
    inline UpdateProvisionedProductPlanRequest& setParameters(const vector<UpdateProvisionedProductPlanRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline UpdateProvisionedProductPlanRequest& setParameters(vector<UpdateProvisionedProductPlanRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline UpdateProvisionedProductPlanRequest& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // portfolioId Field Functions 
    bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
    void deletePortfolioId() { this->portfolioId_ = nullptr;};
    inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
    inline UpdateProvisionedProductPlanRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline UpdateProvisionedProductPlanRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productVersionId Field Functions 
    bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
    void deleteProductVersionId() { this->productVersionId_ = nullptr;};
    inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
    inline UpdateProvisionedProductPlanRequest& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateProvisionedProductPlanRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateProvisionedProductPlanRequest::Tags>) };
    inline vector<UpdateProvisionedProductPlanRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UpdateProvisionedProductPlanRequest::Tags>) };
    inline UpdateProvisionedProductPlanRequest& setTags(const vector<UpdateProvisionedProductPlanRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateProvisionedProductPlanRequest& setTags(vector<UpdateProvisionedProductPlanRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The description of the plan.
    shared_ptr<string> description_ {};
    // An array that consists of the parameters in the template.
    // 
    // Maximum value of N: 200.
    // 
    // > If you specify Parameters, you must specify ParameterKey and ParameterValue.
    shared_ptr<vector<UpdateProvisionedProductPlanRequest::Parameters>> parameters_ {};
    // The ID of the plan.
    // 
    // This parameter is required.
    shared_ptr<string> planId_ {};
    // The ID of the product portfolio.
    // 
    // > If the default launch option exists, you do not need to specify PortfolioId. If the default launch option does not exist, you must specify PortfolioId. For more information about how to obtain the value of PortfolioId, see [ListLaunchOptions](~~ListLaunchOptions~~).
    shared_ptr<string> portfolioId_ {};
    // The ID of the product.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // The ID of the product version.
    // 
    // This parameter is required.
    shared_ptr<string> productVersionId_ {};
    // An array that consists of custom tags.
    // 
    // Maximum value of N: 20.
    // 
    // > 
    // *   If you specify Tags, you must specify Tags.N.Key and Tags.N.Value.
    // *   The tag of a stack is propagated to each resource that supports the tag feature in the stack.
    shared_ptr<vector<UpdateProvisionedProductPlanRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
