// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPORTFOLIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPORTFOLIOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class UpdatePortfolioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePortfolioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_TO_JSON(PortfolioName, portfolioName_);
      DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePortfolioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_FROM_JSON(PortfolioName, portfolioName_);
      DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
    };
    UpdatePortfolioRequest() = default ;
    UpdatePortfolioRequest(const UpdatePortfolioRequest &) = default ;
    UpdatePortfolioRequest(UpdatePortfolioRequest &&) = default ;
    UpdatePortfolioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePortfolioRequest() = default ;
    UpdatePortfolioRequest& operator=(const UpdatePortfolioRequest &) = default ;
    UpdatePortfolioRequest& operator=(UpdatePortfolioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->portfolioId_ == nullptr && this->portfolioName_ == nullptr && this->providerName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdatePortfolioRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // portfolioId Field Functions 
    bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
    void deletePortfolioId() { this->portfolioId_ = nullptr;};
    inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
    inline UpdatePortfolioRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


    // portfolioName Field Functions 
    bool hasPortfolioName() const { return this->portfolioName_ != nullptr;};
    void deletePortfolioName() { this->portfolioName_ = nullptr;};
    inline string getPortfolioName() const { DARABONBA_PTR_GET_DEFAULT(portfolioName_, "") };
    inline UpdatePortfolioRequest& setPortfolioName(string portfolioName) { DARABONBA_PTR_SET_VALUE(portfolioName_, portfolioName) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline UpdatePortfolioRequest& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


  protected:
    // 产品组合描述
    shared_ptr<string> description_ {};
    // 代表资源一级ID的资源属性字段
    // 
    // This parameter is required.
    shared_ptr<string> portfolioId_ {};
    // 代表资源名称的资源属性字段
    // 
    // This parameter is required.
    shared_ptr<string> portfolioName_ {};
    // 产品组合提供方
    // 
    // This parameter is required.
    shared_ptr<string> providerName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
