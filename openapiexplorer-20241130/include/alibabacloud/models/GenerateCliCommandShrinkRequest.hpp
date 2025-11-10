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
      DARABONBA_PTR_TO_JSON(api, api_);
      DARABONBA_PTR_TO_JSON(apiParams, apiParamsShrink_);
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateCLICommandShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(api, api_);
      DARABONBA_PTR_FROM_JSON(apiParams, apiParamsShrink_);
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
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
    virtual bool empty() const override { return this->api_ == nullptr
        && return this->apiParamsShrink_ == nullptr && return this->apiVersion_ == nullptr && return this->product_ == nullptr && return this->regionId_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string api() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline GenerateCLICommandShrinkRequest& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // apiParamsShrink Field Functions 
    bool hasApiParamsShrink() const { return this->apiParamsShrink_ != nullptr;};
    void deleteApiParamsShrink() { this->apiParamsShrink_ = nullptr;};
    inline string apiParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(apiParamsShrink_, "") };
    inline GenerateCLICommandShrinkRequest& setApiParamsShrink(string apiParamsShrink) { DARABONBA_PTR_SET_VALUE(apiParamsShrink_, apiParamsShrink) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline GenerateCLICommandShrinkRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GenerateCLICommandShrinkRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GenerateCLICommandShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> api_ = nullptr;
    std::shared_ptr<string> apiParamsShrink_ = nullptr;
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
