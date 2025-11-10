// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPIDEFINITIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPIDEFINITIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetApiDefinitionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApiDefinitionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(api, api_);
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(product, product_);
    };
    friend void from_json(const Darabonba::Json& j, GetApiDefinitionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(api, api_);
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(product, product_);
    };
    GetApiDefinitionRequest() = default ;
    GetApiDefinitionRequest(const GetApiDefinitionRequest &) = default ;
    GetApiDefinitionRequest(GetApiDefinitionRequest &&) = default ;
    GetApiDefinitionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApiDefinitionRequest() = default ;
    GetApiDefinitionRequest& operator=(const GetApiDefinitionRequest &) = default ;
    GetApiDefinitionRequest& operator=(GetApiDefinitionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->api_ == nullptr
        && return this->apiVersion_ == nullptr && return this->product_ == nullptr; };
    // api Field Functions 
    bool hasApi() const { return this->api_ != nullptr;};
    void deleteApi() { this->api_ = nullptr;};
    inline string api() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
    inline GetApiDefinitionRequest& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline GetApiDefinitionRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetApiDefinitionRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> api_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
