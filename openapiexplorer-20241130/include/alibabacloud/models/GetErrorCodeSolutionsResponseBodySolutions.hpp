// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORCODESOLUTIONSRESPONSEBODYSOLUTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETERRORCODESOLUTIONSRESPONSEBODYSOLUTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetErrorCodeSolutionsResponseBodySolutions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorCodeSolutionsResponseBodySolutions& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(product, product_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(solutionId, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorCodeSolutionsResponseBodySolutions& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(product, product_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(solutionId, solutionId_);
    };
    GetErrorCodeSolutionsResponseBodySolutions() = default ;
    GetErrorCodeSolutionsResponseBodySolutions(const GetErrorCodeSolutionsResponseBodySolutions &) = default ;
    GetErrorCodeSolutionsResponseBodySolutions(GetErrorCodeSolutionsResponseBodySolutions &&) = default ;
    GetErrorCodeSolutionsResponseBodySolutions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorCodeSolutionsResponseBodySolutions() = default ;
    GetErrorCodeSolutionsResponseBodySolutions& operator=(const GetErrorCodeSolutionsResponseBodySolutions &) = default ;
    GetErrorCodeSolutionsResponseBodySolutions& operator=(GetErrorCodeSolutionsResponseBodySolutions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->product_ == nullptr && return this->productName_ == nullptr && return this->solutionId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetErrorCodeSolutionsResponseBodySolutions& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetErrorCodeSolutionsResponseBodySolutions& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetErrorCodeSolutionsResponseBodySolutions& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetErrorCodeSolutionsResponseBodySolutions& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline GetErrorCodeSolutionsResponseBodySolutions& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline GetErrorCodeSolutionsResponseBodySolutions& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // The content of the solution, which is in the markdown format.
    std::shared_ptr<string> content_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The code of the product to which the solution belongs.
    std::shared_ptr<string> product_ = nullptr;
    // The name of the product to which the solution belongs.
    std::shared_ptr<string> productName_ = nullptr;
    // The solution ID.
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
