// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSTRAINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSTRAINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class GetConstraintResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConstraintResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConstraintDetail, constraintDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetConstraintResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConstraintDetail, constraintDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetConstraintResponseBody() = default ;
    GetConstraintResponseBody(const GetConstraintResponseBody &) = default ;
    GetConstraintResponseBody(GetConstraintResponseBody &&) = default ;
    GetConstraintResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConstraintResponseBody() = default ;
    GetConstraintResponseBody& operator=(const GetConstraintResponseBody &) = default ;
    GetConstraintResponseBody& operator=(GetConstraintResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConstraintDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConstraintDetail& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(ConstraintId, constraintId_);
        DARABONBA_PTR_TO_JSON(ConstraintType, constraintType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
      };
      friend void from_json(const Darabonba::Json& j, ConstraintDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(ConstraintId, constraintId_);
        DARABONBA_PTR_FROM_JSON(ConstraintType, constraintType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      };
      ConstraintDetail() = default ;
      ConstraintDetail(const ConstraintDetail &) = default ;
      ConstraintDetail(ConstraintDetail &&) = default ;
      ConstraintDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConstraintDetail() = default ;
      ConstraintDetail& operator=(const ConstraintDetail &) = default ;
      ConstraintDetail& operator=(ConstraintDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->constraintId_ == nullptr && this->constraintType_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->portfolioId_ == nullptr
        && this->productId_ == nullptr && this->productName_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline ConstraintDetail& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // constraintId Field Functions 
      bool hasConstraintId() const { return this->constraintId_ != nullptr;};
      void deleteConstraintId() { this->constraintId_ = nullptr;};
      inline string getConstraintId() const { DARABONBA_PTR_GET_DEFAULT(constraintId_, "") };
      inline ConstraintDetail& setConstraintId(string constraintId) { DARABONBA_PTR_SET_VALUE(constraintId_, constraintId) };


      // constraintType Field Functions 
      bool hasConstraintType() const { return this->constraintType_ != nullptr;};
      void deleteConstraintType() { this->constraintType_ = nullptr;};
      inline string getConstraintType() const { DARABONBA_PTR_GET_DEFAULT(constraintType_, "") };
      inline ConstraintDetail& setConstraintType(string constraintType) { DARABONBA_PTR_SET_VALUE(constraintType_, constraintType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ConstraintDetail& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ConstraintDetail& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // portfolioId Field Functions 
      bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
      void deletePortfolioId() { this->portfolioId_ = nullptr;};
      inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
      inline ConstraintDetail& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline ConstraintDetail& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ConstraintDetail& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    protected:
      // The configuration of the constraint.
      // 
      // Format: { "LocalRoleName": "\\<role_name>" }.
      shared_ptr<string> config_ {};
      // The ID of the constraint.
      shared_ptr<string> constraintId_ {};
      // The type of the constraint.
      // 
      // The value is fixed as Launch, which indicates the launch constraint.
      shared_ptr<string> constraintType_ {};
      // The time when the constraint was created.
      // 
      // The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The description of the constraint.
      shared_ptr<string> description_ {};
      // The ID of the product portfolio to which the constraint belongs.
      shared_ptr<string> portfolioId_ {};
      // The ID of the product for which the constraint is created.
      shared_ptr<string> productId_ {};
      // The name of the product.
      shared_ptr<string> productName_ {};
    };

    virtual bool empty() const override { return this->constraintDetail_ == nullptr
        && this->requestId_ == nullptr; };
    // constraintDetail Field Functions 
    bool hasConstraintDetail() const { return this->constraintDetail_ != nullptr;};
    void deleteConstraintDetail() { this->constraintDetail_ = nullptr;};
    inline const GetConstraintResponseBody::ConstraintDetail & getConstraintDetail() const { DARABONBA_PTR_GET_CONST(constraintDetail_, GetConstraintResponseBody::ConstraintDetail) };
    inline GetConstraintResponseBody::ConstraintDetail getConstraintDetail() { DARABONBA_PTR_GET(constraintDetail_, GetConstraintResponseBody::ConstraintDetail) };
    inline GetConstraintResponseBody& setConstraintDetail(const GetConstraintResponseBody::ConstraintDetail & constraintDetail) { DARABONBA_PTR_SET_VALUE(constraintDetail_, constraintDetail) };
    inline GetConstraintResponseBody& setConstraintDetail(GetConstraintResponseBody::ConstraintDetail && constraintDetail) { DARABONBA_PTR_SET_RVALUE(constraintDetail_, constraintDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConstraintResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the constraint.
    shared_ptr<GetConstraintResponseBody::ConstraintDetail> constraintDetail_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
