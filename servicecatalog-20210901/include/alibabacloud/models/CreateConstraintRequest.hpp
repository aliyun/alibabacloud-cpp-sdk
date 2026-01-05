// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONSTRAINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONSTRAINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class CreateConstraintRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConstraintRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ConstraintType, constraintType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConstraintRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ConstraintType, constraintType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    CreateConstraintRequest() = default ;
    CreateConstraintRequest(const CreateConstraintRequest &) = default ;
    CreateConstraintRequest(CreateConstraintRequest &&) = default ;
    CreateConstraintRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConstraintRequest() = default ;
    CreateConstraintRequest& operator=(const CreateConstraintRequest &) = default ;
    CreateConstraintRequest& operator=(CreateConstraintRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->constraintType_ == nullptr && this->description_ == nullptr && this->portfolioId_ == nullptr && this->productId_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateConstraintRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // constraintType Field Functions 
    bool hasConstraintType() const { return this->constraintType_ != nullptr;};
    void deleteConstraintType() { this->constraintType_ = nullptr;};
    inline string getConstraintType() const { DARABONBA_PTR_GET_DEFAULT(constraintType_, "") };
    inline CreateConstraintRequest& setConstraintType(string constraintType) { DARABONBA_PTR_SET_VALUE(constraintType_, constraintType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConstraintRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // portfolioId Field Functions 
    bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
    void deletePortfolioId() { this->portfolioId_ = nullptr;};
    inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
    inline CreateConstraintRequest& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline CreateConstraintRequest& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    // The configuration of the constraint.
    // 
    // Format: { "LocalRoleName": "\\<role_name>" }.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The type of the constraint.
    // 
    // The value is fixed as Launch, which specifies the launch constraint.
    // 
    // This parameter is required.
    shared_ptr<string> constraintType_ {};
    // The description of the constraint.
    // 
    // The value must be 1 to 128 characters in length.
    shared_ptr<string> description_ {};
    // The ID of the product portfolio to which the constraint belongs.
    // 
    // This parameter is required.
    shared_ptr<string> portfolioId_ {};
    // The ID of the product for which the constraint is created.
    // 
    // This parameter is required.
    shared_ptr<string> productId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
