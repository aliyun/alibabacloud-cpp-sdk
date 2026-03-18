// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECLICOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECLICOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GenerateCLICommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCLICommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aggregatePagination, aggregatePagination_);
      DARABONBA_PTR_TO_JSON(api, api_);
      DARABONBA_ANY_TO_JSON(apiParams, apiParams_);
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(jsonApiParams, jsonApiParams_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCLICommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aggregatePagination, aggregatePagination_);
      DARABONBA_PTR_FROM_JSON(api, api_);
      DARABONBA_ANY_FROM_JSON(apiParams, apiParams_);
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(jsonApiParams, jsonApiParams_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GenerateCLICommandRequest() = default ;
    GenerateCLICommandRequest(const GenerateCLICommandRequest &) = default ;
    GenerateCLICommandRequest(GenerateCLICommandRequest &&) = default ;
    GenerateCLICommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCLICommandRequest() = default ;
    GenerateCLICommandRequest& operator=(const GenerateCLICommandRequest &) = default ;
    GenerateCLICommandRequest& operator=(GenerateCLICommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatePagination_ == nullptr
        && this->api_ == nullptr && this->apiParams_ == nullptr && this->apiVersion_ == nullptr && this->jsonApiParams_ == nullptr && this->product_ == nullptr
        && this->regionId_ == nullptr; };
    // aggregatePagination Field Functions 
    bool hasAggregatePagination() const { return this->aggregatePagination_ != nullptr;};
    void deleteAggregatePagination() { this->aggregatePagination_ = nullptr;};
    inline bool getAggregatePagination() const { DARABONBA_PTR_GET_DEFAULT(aggregatePagination_, false) };
    inline GenerateCLICommandRequest& setAggregatePagination(bool aggregatePagination) { DARABONBA_PTR_SET_VALUE(aggregatePagination_, aggregatePagination) };


    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline GenerateCLICommandRequest& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // apiParams Field Functions 
    bool hasApiParams() const { return this->apiParams_ != nullptr;};
    void deleteApiParams() { this->apiParams_ = nullptr;};
    inline     const Darabonba::Json & getApiParams() const { DARABONBA_GET(apiParams_) };
    Darabonba::Json & getApiParams() { DARABONBA_GET(apiParams_) };
    inline GenerateCLICommandRequest& setApiParams(const Darabonba::Json & apiParams) { DARABONBA_SET_VALUE(apiParams_, apiParams) };
    inline GenerateCLICommandRequest& setApiParams(Darabonba::Json && apiParams) { DARABONBA_SET_RVALUE(apiParams_, apiParams) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline GenerateCLICommandRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // jsonApiParams Field Functions 
    bool hasJsonApiParams() const { return this->jsonApiParams_ != nullptr;};
    void deleteJsonApiParams() { this->jsonApiParams_ = nullptr;};
    inline string getJsonApiParams() const { DARABONBA_PTR_GET_DEFAULT(jsonApiParams_, "") };
    inline GenerateCLICommandRequest& setJsonApiParams(string jsonApiParams) { DARABONBA_PTR_SET_VALUE(jsonApiParams_, jsonApiParams) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GenerateCLICommandRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateCLICommandRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Enable aggregation. If enabled, the CLI automatically reads full data using pagination and aggregates the results.
    // 
    // >Warning: 
    // 
    // You can use this option only with List operations that support pagination.
    // 
    // 
    // 
    // - true: Enable
    // 
    // - false: Disable
    shared_ptr<bool> aggregatePagination_ {};
    // API name.
    // 
    // This parameter is required.
    shared_ptr<string> api_ {};
    // Request parameters.
    Darabonba::Json apiParams_ {};
    // API version.
    // 
    // This parameter is required.
    shared_ptr<string> apiVersion_ {};
    // API input parameters in JSON format. This parameter has lower priority than apiParams. If you set apiParams, this parameter is ignored.
    shared_ptr<string> jsonApiParams_ {};
    // Product code.
    // 
    // - Call the GetRequestLog operation and get the product code from the response.
    // 
    // - Find the product code in the OpenAPI portal URL. For example, the OpenAPI portal URL for Short Message Service is https\\://api.aliyun.com/product/Dysmsapi. The product code for Short Message Service is Dysmsapi. In international regions, the URL is https\\://api.alibabacloud.com/product/Dysmsapi. The product code remains Dysmsapi.
    // 
    // This parameter is required.
    shared_ptr<string> product_ {};
    // Region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
