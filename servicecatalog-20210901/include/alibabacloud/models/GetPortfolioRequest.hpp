// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPORTFOLIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPORTFOLIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class GetPortfolioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPortfolioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPortfolioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
    };
    GetPortfolioRequest() = default ;
    GetPortfolioRequest(const GetPortfolioRequest &) = default ;
    GetPortfolioRequest(GetPortfolioRequest &&) = default ;
    GetPortfolioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPortfolioRequest() = default ;
    GetPortfolioRequest& operator=(const GetPortfolioRequest &) = default ;
    GetPortfolioRequest& operator=(GetPortfolioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->portfolioId_ == nullptr; };
    // portfolioId Field Functions 
    bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
    void deletePortfolioId() { this->portfolioId_ = nullptr;};
    inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
    inline GetPortfolioRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


  protected:
    // The ID of the product portfolio.
    // 
    // This parameter is required.
    shared_ptr<string> portfolioId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
