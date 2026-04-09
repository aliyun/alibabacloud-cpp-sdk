// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATECLICOMMANDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATECLICOMMANDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GenerateCLICommandShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateCLICommandShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aggregatePagination, aggregatePagination_);
      DARABONBA_PTR_TO_JSON(api, api_);
      DARABONBA_PTR_TO_JSON(apiParams, apiParamsShrink_);
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(jsonApiParams, jsonApiParams_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCLICommandShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aggregatePagination, aggregatePagination_);
      DARABONBA_PTR_FROM_JSON(api, api_);
      DARABONBA_PTR_FROM_JSON(apiParams, apiParamsShrink_);
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(jsonApiParams, jsonApiParams_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    GenerateCLICommandShrinkRequest() = default ;
    GenerateCLICommandShrinkRequest(const GenerateCLICommandShrinkRequest &) = default ;
    GenerateCLICommandShrinkRequest(GenerateCLICommandShrinkRequest &&) = default ;
    GenerateCLICommandShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateCLICommandShrinkRequest() = default ;
    GenerateCLICommandShrinkRequest& operator=(const GenerateCLICommandShrinkRequest &) = default ;
    GenerateCLICommandShrinkRequest& operator=(GenerateCLICommandShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatePagination_ == nullptr
        && this->api_ == nullptr && this->apiParamsShrink_ == nullptr && this->apiVersion_ == nullptr && this->jsonApiParams_ == nullptr && this->product_ == nullptr
        && this->regionId_ == nullptr; };
    // aggregatePagination Field Functions 
    bool hasAggregatePagination() const { return this->aggregatePagination_ != nullptr;};
    void deleteAggregatePagination() { this->aggregatePagination_ = nullptr;};
    inline bool getAggregatePagination() const { DARABONBA_PTR_GET_DEFAULT(aggregatePagination_, false) };
    inline GenerateCLICommandShrinkRequest& setAggregatePagination(bool aggregatePagination) { DARABONBA_PTR_SET_VALUE(aggregatePagination_, aggregatePagination) };


    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline GenerateCLICommandShrinkRequest& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // apiParamsShrink Field Functions 
    bool hasApiParamsShrink() const { return this->apiParamsShrink_ != nullptr;};
    void deleteApiParamsShrink() { this->apiParamsShrink_ = nullptr;};
    inline string getApiParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(apiParamsShrink_, "") };
    inline GenerateCLICommandShrinkRequest& setApiParamsShrink(string apiParamsShrink) { DARABONBA_PTR_SET_VALUE(apiParamsShrink_, apiParamsShrink) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline GenerateCLICommandShrinkRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // jsonApiParams Field Functions 
    bool hasJsonApiParams() const { return this->jsonApiParams_ != nullptr;};
    void deleteJsonApiParams() { this->jsonApiParams_ = nullptr;};
    inline string getJsonApiParams() const { DARABONBA_PTR_GET_DEFAULT(jsonApiParams_, "") };
    inline GenerateCLICommandShrinkRequest& setJsonApiParams(string jsonApiParams) { DARABONBA_PTR_SET_VALUE(jsonApiParams_, jsonApiParams) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GenerateCLICommandShrinkRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateCLICommandShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<bool> aggregatePagination_ {};
    // This parameter is required.
    shared_ptr<string> api_ {};
    shared_ptr<string> apiParamsShrink_ {};
    // This parameter is required.
    shared_ptr<string> apiVersion_ {};
    shared_ptr<string> jsonApiParams_ {};
    // This parameter is required.
    shared_ptr<string> product_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
