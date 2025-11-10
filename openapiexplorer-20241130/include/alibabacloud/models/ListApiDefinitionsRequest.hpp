// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPIDEFINITIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPIDEFINITIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListApiDefinitionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApiDefinitionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(product, product_);
    };
    friend void from_json(const Darabonba::Json& j, ListApiDefinitionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(product, product_);
    };
    ListApiDefinitionsRequest() = default ;
    ListApiDefinitionsRequest(const ListApiDefinitionsRequest &) = default ;
    ListApiDefinitionsRequest(ListApiDefinitionsRequest &&) = default ;
    ListApiDefinitionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApiDefinitionsRequest() = default ;
    ListApiDefinitionsRequest& operator=(const ListApiDefinitionsRequest &) = default ;
    ListApiDefinitionsRequest& operator=(ListApiDefinitionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiVersion_ == nullptr
        && return this->product_ == nullptr; };
    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline ListApiDefinitionsRequest& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline ListApiDefinitionsRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
