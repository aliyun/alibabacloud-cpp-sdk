// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORCODESOLUTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETERRORCODESOLUTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetErrorCodeSolutionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorCodeSolutionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(solutions, solutions_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorCodeSolutionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(solutions, solutions_);
    };
    GetErrorCodeSolutionsResponseBody() = default ;
    GetErrorCodeSolutionsResponseBody(const GetErrorCodeSolutionsResponseBody &) = default ;
    GetErrorCodeSolutionsResponseBody(GetErrorCodeSolutionsResponseBody &&) = default ;
    GetErrorCodeSolutionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorCodeSolutionsResponseBody() = default ;
    GetErrorCodeSolutionsResponseBody& operator=(const GetErrorCodeSolutionsResponseBody &) = default ;
    GetErrorCodeSolutionsResponseBody& operator=(GetErrorCodeSolutionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Solutions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Solutions& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(product, product_);
        DARABONBA_PTR_TO_JSON(productName, productName_);
        DARABONBA_PTR_TO_JSON(solutionId, solutionId_);
      };
      friend void from_json(const Darabonba::Json& j, Solutions& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(product, product_);
        DARABONBA_PTR_FROM_JSON(productName, productName_);
        DARABONBA_PTR_FROM_JSON(solutionId, solutionId_);
      };
      Solutions() = default ;
      Solutions(const Solutions &) = default ;
      Solutions(Solutions &&) = default ;
      Solutions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Solutions() = default ;
      Solutions& operator=(const Solutions &) = default ;
      Solutions& operator=(Solutions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->product_ == nullptr && this->productName_ == nullptr && this->solutionId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Solutions& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Solutions& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Solutions& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // product Field Functions 
      bool hasProduct() const { return this->product_ != nullptr;};
      void deleteProduct() { this->product_ = nullptr;};
      inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
      inline Solutions& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Solutions& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // solutionId Field Functions 
      bool hasSolutionId() const { return this->solutionId_ != nullptr;};
      void deleteSolutionId() { this->solutionId_ = nullptr;};
      inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
      inline Solutions& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


    protected:
      // The content of the solution, which is in the markdown format.
      shared_ptr<string> content_ {};
      // The error code.
      shared_ptr<string> errorCode_ {};
      // The error message.
      shared_ptr<string> errorMessage_ {};
      // The code of the product to which the solution belongs.
      shared_ptr<string> product_ {};
      // The name of the product to which the solution belongs.
      shared_ptr<string> productName_ {};
      // The solution ID.
      shared_ptr<string> solutionId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->solutions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetErrorCodeSolutionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // solutions Field Functions 
    bool hasSolutions() const { return this->solutions_ != nullptr;};
    void deleteSolutions() { this->solutions_ = nullptr;};
    inline const vector<GetErrorCodeSolutionsResponseBody::Solutions> & getSolutions() const { DARABONBA_PTR_GET_CONST(solutions_, vector<GetErrorCodeSolutionsResponseBody::Solutions>) };
    inline vector<GetErrorCodeSolutionsResponseBody::Solutions> getSolutions() { DARABONBA_PTR_GET(solutions_, vector<GetErrorCodeSolutionsResponseBody::Solutions>) };
    inline GetErrorCodeSolutionsResponseBody& setSolutions(const vector<GetErrorCodeSolutionsResponseBody::Solutions> & solutions) { DARABONBA_PTR_SET_VALUE(solutions_, solutions) };
    inline GetErrorCodeSolutionsResponseBody& setSolutions(vector<GetErrorCodeSolutionsResponseBody::Solutions> && solutions) { DARABONBA_PTR_SET_RVALUE(solutions_, solutions) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The solutions. Not all error codes have corresponding solutions. You can submit a ticket or use OpenAPI Explorer to contact technical support if necessary.
    shared_ptr<vector<GetErrorCodeSolutionsResponseBody::Solutions>> solutions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
