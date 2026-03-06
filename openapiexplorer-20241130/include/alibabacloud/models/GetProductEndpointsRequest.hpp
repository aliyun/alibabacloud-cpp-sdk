// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRODUCTENDPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPRODUCTENDPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetProductEndpointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetProductEndpointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(product, product_);
    };
    friend void from_json(const Darabonba::Json& j, GetProductEndpointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(product, product_);
    };
    GetProductEndpointsRequest() = default ;
    GetProductEndpointsRequest(const GetProductEndpointsRequest &) = default ;
    GetProductEndpointsRequest(GetProductEndpointsRequest &&) = default ;
    GetProductEndpointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetProductEndpointsRequest() = default ;
    GetProductEndpointsRequest& operator=(const GetProductEndpointsRequest &) = default ;
    GetProductEndpointsRequest& operator=(GetProductEndpointsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->product_ == nullptr; };
    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetProductEndpointsRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    // The product code.
    // 
    // - Call the GetRequestLog operation and find the product code in the response.
    // 
    // - Find the product code in the URL of the OpenAPI Portal page for the product. For example, <props="china">the URL for the Short Message Service (SMS) OpenAPI Portal page is https\\://api.aliyun.com/product/Dysmsapi. The product code is Dysmsapi.
    //   <props="intl">the URL for the Short Message Service (SMS) OpenAPI Portal page is https\\://api.alibabacloud.com/product/Dysmsapi. The product code is Dysmsapi.
    // 
    // This parameter is required.
    shared_ptr<string> product_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
