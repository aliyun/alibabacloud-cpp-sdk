// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOSEPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOSEPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProductInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class CloseProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloseProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(productInstance, productInstance_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloseProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(productInstance, productInstance_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    CloseProductRequest() = default ;
    CloseProductRequest(const CloseProductRequest &) = default ;
    CloseProductRequest(CloseProductRequest &&) = default ;
    CloseProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloseProductRequest() = default ;
    CloseProductRequest& operator=(const CloseProductRequest &) = default ;
    CloseProductRequest& operator=(CloseProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productInstance_ == nullptr
        && return this->requestId_ == nullptr; };
    // productInstance Field Functions 
    bool hasProductInstance() const { return this->productInstance_ != nullptr;};
    void deleteProductInstance() { this->productInstance_ = nullptr;};
    inline const ProductInstance & productInstance() const { DARABONBA_PTR_GET_CONST(productInstance_, ProductInstance) };
    inline ProductInstance productInstance() { DARABONBA_PTR_GET(productInstance_, ProductInstance) };
    inline CloseProductRequest& setProductInstance(const ProductInstance & productInstance) { DARABONBA_PTR_SET_VALUE(productInstance_, productInstance) };
    inline CloseProductRequest& setProductInstance(ProductInstance && productInstance) { DARABONBA_PTR_SET_RVALUE(productInstance_, productInstance) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloseProductRequest& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<ProductInstance> productInstance_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
