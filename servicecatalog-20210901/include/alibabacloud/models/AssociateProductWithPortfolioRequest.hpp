// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASSOCIATEPRODUCTWITHPORTFOLIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASSOCIATEPRODUCTWITHPORTFOLIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class AssociateProductWithPortfolioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AssociateProductWithPortfolioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, AssociateProductWithPortfolioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    AssociateProductWithPortfolioRequest() = default ;
    AssociateProductWithPortfolioRequest(const AssociateProductWithPortfolioRequest &) = default ;
    AssociateProductWithPortfolioRequest(AssociateProductWithPortfolioRequest &&) = default ;
    AssociateProductWithPortfolioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AssociateProductWithPortfolioRequest() = default ;
    AssociateProductWithPortfolioRequest& operator=(const AssociateProductWithPortfolioRequest &) = default ;
    AssociateProductWithPortfolioRequest& operator=(AssociateProductWithPortfolioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->portfolioId_ == nullptr
        && this->productId_ == nullptr; };
    // portfolioId Field Functions 
    bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
    void deletePortfolioId() { this->portfolioId_ = nullptr;};
    inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
    inline AssociateProductWithPortfolioRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline AssociateProductWithPortfolioRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    // The ID of the product portfolio.
    // 
    // This parameter is required.
    shared_ptr<string> portfolioId_ {};
    // The ID of the product.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
