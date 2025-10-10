// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRODUCTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRODUCTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class QueryProductInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryProductInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryProductInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    QueryProductInfoRequest() = default ;
    QueryProductInfoRequest(const QueryProductInfoRequest &) = default ;
    QueryProductInfoRequest(QueryProductInfoRequest &&) = default ;
    QueryProductInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryProductInfoRequest() = default ;
    QueryProductInfoRequest& operator=(const QueryProductInfoRequest &) = default ;
    QueryProductInfoRequest& operator=(QueryProductInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->productId_ != nullptr; };
    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline QueryProductInfoRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> productId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
