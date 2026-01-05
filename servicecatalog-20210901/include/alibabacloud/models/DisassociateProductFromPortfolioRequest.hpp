// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISASSOCIATEPRODUCTFROMPORTFOLIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISASSOCIATEPRODUCTFROMPORTFOLIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class DisassociateProductFromPortfolioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisassociateProductFromPortfolioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, DisassociateProductFromPortfolioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    DisassociateProductFromPortfolioRequest() = default ;
    DisassociateProductFromPortfolioRequest(const DisassociateProductFromPortfolioRequest &) = default ;
    DisassociateProductFromPortfolioRequest(DisassociateProductFromPortfolioRequest &&) = default ;
    DisassociateProductFromPortfolioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisassociateProductFromPortfolioRequest() = default ;
    DisassociateProductFromPortfolioRequest& operator=(const DisassociateProductFromPortfolioRequest &) = default ;
    DisassociateProductFromPortfolioRequest& operator=(DisassociateProductFromPortfolioRequest &&) = default ;
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
    inline DisassociateProductFromPortfolioRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DisassociateProductFromPortfolioRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


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
