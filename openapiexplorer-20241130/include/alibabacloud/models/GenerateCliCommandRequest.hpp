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
      DARABONBA_PTR_TO_JSON(api, api_);
      DARABONBA_ANY_TO_JSON(apiParams, apiParams_);
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCLICommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(api, api_);
      DARABONBA_ANY_FROM_JSON(apiParams, apiParams_);
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
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
    virtual bool empty() const override { return this->api_ == nullptr
        && return this->apiParams_ == nullptr && return this->apiVersion_ == nullptr && return this->product_ == nullptr && return this->regionId_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string api() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline GenerateCLICommandRequest& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // apiParams Field Functions 
    bool hasApiParams() const { return this->apiParams_ != nullptr;};
    void deleteApiParams() { this->apiParams_ = nullptr;};
    inline     const Darabonba::Json & apiParams() const { DARABONBA_GET(apiParams_) };
    Darabonba::Json & apiParams() { DARABONBA_GET(apiParams_) };
    inline GenerateCLICommandRequest& setApiParams(const Darabonba::Json & apiParams) { DARABONBA_SET_VALUE(apiParams_, apiParams) };
    inline GenerateCLICommandRequest& setApiParams(Darabonba::Json & apiParams) { DARABONBA_SET_RVALUE(apiParams_, apiParams) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline GenerateCLICommandRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GenerateCLICommandRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateCLICommandRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> api_ = nullptr;
    Darabonba::Json apiParams_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> product_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
