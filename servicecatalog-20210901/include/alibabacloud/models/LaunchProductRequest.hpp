// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LAUNCHPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LAUNCHPRODUCTREQUEST_HPP_
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
  class LaunchProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LaunchProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_TO_JSON(ProvisionedProductName, provisionedProductName_);
      DARABONBA_PTR_TO_JSON(StackRegionId, stackRegionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, LaunchProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(ProductVersionId, productVersionId_);
      DARABONBA_PTR_FROM_JSON(ProvisionedProductName, provisionedProductName_);
      DARABONBA_PTR_FROM_JSON(StackRegionId, stackRegionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    LaunchProductRequest() = default ;
    LaunchProductRequest(const LaunchProductRequest &) = default ;
    LaunchProductRequest(LaunchProductRequest &&) = default ;
    LaunchProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LaunchProductRequest() = default ;
    LaunchProductRequest& operator=(const LaunchProductRequest &) = default ;
    LaunchProductRequest& operator=(LaunchProductRequest &&) = default ;
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
        && this->portfolioId_ == nullptr && this->productId_ == nullptr && this->productVersionId_ == nullptr && this->provisionedProductName_ == nullptr && this->stackRegionId_ == nullptr
        && this->tags_ == nullptr; };
    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<LaunchProductRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<LaunchProductRequest::Parameters>) };
    inline vector<LaunchProductRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<LaunchProductRequest::Parameters>) };
    inline LaunchProductRequest& setParameters(const vector<LaunchProductRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline LaunchProductRequest& setParameters(vector<LaunchProductRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // portfolioId Field Functions 
    bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
    void deletePortfolioId() { this->portfolioId_ = nullptr;};
    inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
    inline LaunchProductRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline LaunchProductRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productVersionId Field Functions 
    bool hasProductVersionId() const { return this->productVersionId_ != nullptr;};
    void deleteProductVersionId() { this->productVersionId_ = nullptr;};
    inline string getProductVersionId() const { DARABONBA_PTR_GET_DEFAULT(productVersionId_, "") };
    inline LaunchProductRequest& setProductVersionId(string productVersionId) { DARABONBA_PTR_SET_VALUE(productVersionId_, productVersionId) };


    // provisionedProductName Field Functions 
    bool hasProvisionedProductName() const { return this->provisionedProductName_ != nullptr;};
    void deleteProvisionedProductName() { this->provisionedProductName_ = nullptr;};
    inline string getProvisionedProductName() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductName_, "") };
    inline LaunchProductRequest& setProvisionedProductName(string provisionedProductName) { DARABONBA_PTR_SET_VALUE(provisionedProductName_, provisionedProductName) };


    // stackRegionId Field Functions 
    bool hasStackRegionId() const { return this->stackRegionId_ != nullptr;};
    void deleteStackRegionId() { this->stackRegionId_ = nullptr;};
    inline string getStackRegionId() const { DARABONBA_PTR_GET_DEFAULT(stackRegionId_, "") };
    inline LaunchProductRequest& setStackRegionId(string stackRegionId) { DARABONBA_PTR_SET_VALUE(stackRegionId_, stackRegionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<LaunchProductRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<LaunchProductRequest::Tags>) };
    inline vector<LaunchProductRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<LaunchProductRequest::Tags>) };
    inline LaunchProductRequest& setTags(const vector<LaunchProductRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline LaunchProductRequest& setTags(vector<LaunchProductRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The input parameters of the template.
    // 
    // You can specify up to 200 parameters.
    // 
    // > This parameter is optional. If you specify the Parameters parameter, you must specify the ParameterKey and ParameterValue parameters.
    shared_ptr<vector<LaunchProductRequest::Parameters>> parameters_ {};
    // The ID of the product portfolio.
    // 
    // > If the PortfolioId parameter is not required, you do not need to specify the PortfolioId parameter. If the PortfolioId parameter is required, you must specify the PortfolioId parameter. For more information about how to obtain the value of the PortfolioId parameter, see [ListLaunchOptions](~~ListLaunchOptions~~).
    shared_ptr<string> portfolioId_ {};
    // The ID of the product.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
    // The ID of the product version.
    // 
    // This parameter is required.
    shared_ptr<string> productVersionId_ {};
    // The name of the product instance.
    // 
    // The value must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> provisionedProductName_ {};
    // The ID of the region to which the Resource Orchestration Service (ROS) stack belongs.
    // 
    // For more information about how to obtain the regions that are supported by ROS, see [DescribeRegions](https://help.aliyun.com/document_detail/131035.html).
    // 
    // This parameter is required.
    shared_ptr<string> stackRegionId_ {};
    // The custom tags that are specified by the end user.
    // 
    // Maximum value of N: 20.
    // 
    // > 
    // 
    // *   The Tags parameter is optional. If you specify the Tags parameter, you must specify the Tags.N.Key and Tags.N.Value parameters.
    // 
    // *   The tag is propagated to each stack resource that supports the tag feature.
    shared_ptr<vector<LaunchProductRequest::Tags>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
