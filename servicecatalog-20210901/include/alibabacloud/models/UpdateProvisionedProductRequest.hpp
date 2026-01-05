// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROVISIONEDPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROVISIONEDPRODUCTREQUEST_HPP_
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
  class UpdateProvisionedProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProvisionedProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_TO_JSON(ProvisionedProductId, provisionedProductId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProvisionedProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_FROM_JSON(ProvisionedProductId, provisionedProductId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    UpdateProvisionedProductRequest() = default ;
    UpdateProvisionedProductRequest(const UpdateProvisionedProductRequest &) = default ;
    UpdateProvisionedProductRequest(UpdateProvisionedProductRequest &&) = default ;
    UpdateProvisionedProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProvisionedProductRequest() = default ;
    UpdateProvisionedProductRequest& operator=(const UpdateProvisionedProductRequest &) = default ;
    UpdateProvisionedProductRequest& operator=(UpdateProvisionedProductRequest &&) = default ;
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
      // The tag key of the custom tag.
      // 
      // The tag key must be 1 to 128 characters in length and cannot contain `http://` or `https://`. It cannot start with `acs:` or `aliyun`.
      shared_ptr<string> key_ {};
      // The tag value of the custom tag.
      // 
      // The tag value can be up to 128 characters in length and cannot start with `acs:`. It cannot contain `http://` or `https://`.
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

    virtual bool empty() const override { return this->parameters_ == nullptr
        && this->portfolioId_ == nullptr && this->productId_ == nullptr && this->productVersionId_ == nullptr && this->provisionedProductId_ == nullptr && this->tags_ == nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<UpdateProvisionedProductRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<UpdateProvisionedProductRequest::Parameters>) };
    inline vector<UpdateProvisionedProductRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<UpdateProvisionedProductRequest::Parameters>) };
    inline UpdateProvisionedProductRequest& setParameters(const vector<UpdateProvisionedProductRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline UpdateProvisionedProductRequest& setParameters(vector<UpdateProvisionedProductRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // portfolioId Field Functions 
    bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
    void deletePortfolioId() { this->portfolioId_ = nullptr;};
    inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
    inline UpdateProvisionedProductRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline UpdateProvisionedProductRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productVersionId Field Functions 
    bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
    void deleteProductVersionId() { this->productVersionId_ = nullptr;};
    inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
    inline UpdateProvisionedProductRequest& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


    // provisionedProductId Field Functions 
    bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
    void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
    inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
    inline UpdateProvisionedProductRequest& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<UpdateProvisionedProductRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<UpdateProvisionedProductRequest::Tags>) };
    inline vector<UpdateProvisionedProductRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<UpdateProvisionedProductRequest::Tags>) };
    inline UpdateProvisionedProductRequest& setTags(const vector<UpdateProvisionedProductRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline UpdateProvisionedProductRequest& setTags(vector<UpdateProvisionedProductRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The input parameters of the template.
    // 
    // You can specify up to 200 parameters.
    // 
    // > - This parameter is optional. If you specify the Parameters parameter, you must specify the ParameterKey and ParameterValue parameters.
    // > - If the values of the ProductVersionId and Parameters parameters are not changed, you are not allowed to update the information about the product instance.
    shared_ptr<vector<UpdateProvisionedProductRequest::Parameters>> parameters_ {};
    // The ID of the product portfolio.
    // 
    // > The PortfolioId parameter is not required if the default launch option exists. The PortfolioId parameter is required if the default launch option does not exist. For more information about how to obtain the value of the PortfolioId parameter, see [ListLaunchOptions](~~ListLaunchOptions~~).
    shared_ptr<string> portfolioId_ {};
    // The ID of the product.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // The ID of the product version.
    // 
    // > If the values of the ProductVersionId and Parameters parameters are not changed, the information about the product instance cannot be updated.
    // 
    // This parameter is required.
    shared_ptr<string> productVersionId_ {};
    // The ID of the product instance.
    // 
    // This parameter is required.
    shared_ptr<string> provisionedProductId_ {};
    // The input custom tags.
    // 
    // Maximum value of N: 20.
    // 
    // > - The Tags parameter is optional. If you need to specify the Tags parameter, you must specify the Tags.N.Key and Tags.N.Value parameters.
    // > - The tag is propagated to each stack resource that supports the tag feature.
    shared_ptr<vector<UpdateProvisionedProductRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
