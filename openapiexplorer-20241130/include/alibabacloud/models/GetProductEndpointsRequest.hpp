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
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetProductEndpointsRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
