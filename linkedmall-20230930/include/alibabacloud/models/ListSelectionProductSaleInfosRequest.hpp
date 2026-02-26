// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSELECTIONPRODUCTSALEINFOSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSELECTIONPRODUCTSALEINFOSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ProductSaleInfoListQuery.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ListSelectionProductSaleInfosRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSelectionProductSaleInfosRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ListSelectionProductSaleInfosRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ListSelectionProductSaleInfosRequest() = default ;
    ListSelectionProductSaleInfosRequest(const ListSelectionProductSaleInfosRequest &) = default ;
    ListSelectionProductSaleInfosRequest(ListSelectionProductSaleInfosRequest &&) = default ;
    ListSelectionProductSaleInfosRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSelectionProductSaleInfosRequest() = default ;
    ListSelectionProductSaleInfosRequest& operator=(const ListSelectionProductSaleInfosRequest &) = default ;
    ListSelectionProductSaleInfosRequest& operator=(ListSelectionProductSaleInfosRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ProductSaleInfoListQuery & getBody() const { DARABONBA_PTR_GET_CONST(body_, ProductSaleInfoListQuery) };
    inline ProductSaleInfoListQuery getBody() { DARABONBA_PTR_GET(body_, ProductSaleInfoListQuery) };
    inline ListSelectionProductSaleInfosRequest& setBody(const ProductSaleInfoListQuery & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ListSelectionProductSaleInfosRequest& setBody(ProductSaleInfoListQuery && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // This parameter is required.
    shared_ptr<ProductSaleInfoListQuery> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
