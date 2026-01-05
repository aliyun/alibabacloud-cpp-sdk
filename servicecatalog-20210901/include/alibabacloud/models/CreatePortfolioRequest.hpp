// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPORTFOLIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPORTFOLIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreatePortfolioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePortfolioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PortfolioName, portfolioName_);
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePortfolioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PortfolioName, portfolioName_);
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
    };
    CreatePortfolioRequest() = default ;
    CreatePortfolioRequest(const CreatePortfolioRequest &) = default ;
    CreatePortfolioRequest(CreatePortfolioRequest &&) = default ;
    CreatePortfolioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePortfolioRequest() = default ;
    CreatePortfolioRequest& operator=(const CreatePortfolioRequest &) = default ;
    CreatePortfolioRequest& operator=(CreatePortfolioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->portfolioName_ == nullptr && this->providerName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePortfolioRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // portfolioName Field Functions 
    bool hasPortfolioName() const { return this->portfolioName_ != nullptr;};
    void deletePortfolioName() { this->portfolioName_ = nullptr;};
    inline string getPortfolioName() const { DARABONBA_PTR_GET_DEFAULT(portfolioName_, "") };
    inline CreatePortfolioRequest& setPortfolioName(string portfolioName) { DARABONBA_PTR_SET_VALUE(portfolioName_, portfolioName) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline CreatePortfolioRequest& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


  protected:
    // The description of the product portfolio.
    // 
    // The value must be 1 to 128 characters in length.
    shared_ptr<string> description_ {};
    // The name of the product portfolio.
    // 
    // The value must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> portfolioName_ {};
    // The provider of the product portfolio.
    // 
    // The value must be 1 to 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> providerName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
