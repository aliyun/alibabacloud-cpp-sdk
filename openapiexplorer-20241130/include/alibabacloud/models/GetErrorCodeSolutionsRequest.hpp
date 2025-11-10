// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETERRORCODESOLUTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETERRORCODESOLUTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetErrorCodeSolutionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetErrorCodeSolutionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(acceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(product, product_);
    };
    friend void from_json(const Darabonba::Json& j, GetErrorCodeSolutionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(acceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(product, product_);
    };
    GetErrorCodeSolutionsRequest() = default ;
    GetErrorCodeSolutionsRequest(const GetErrorCodeSolutionsRequest &) = default ;
    GetErrorCodeSolutionsRequest(GetErrorCodeSolutionsRequest &&) = default ;
    GetErrorCodeSolutionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetErrorCodeSolutionsRequest() = default ;
    GetErrorCodeSolutionsRequest& operator=(const GetErrorCodeSolutionsRequest &) = default ;
    GetErrorCodeSolutionsRequest& operator=(GetErrorCodeSolutionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->product_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetErrorCodeSolutionsRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetErrorCodeSolutionsRequest& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetErrorCodeSolutionsRequest& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline GetErrorCodeSolutionsRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


  protected:
    // The language of the solution. Valid values: zh-CN and en-US. Not all of the solutions are available in English. If you set this parameter to en-US, but the corresponding solution is actually not available in English, no response is returned.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The error code based on which you want to query a solution.
    // 
    // This parameter is required.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message for which you want to query a solution. This parameter must be configured together with the errorCode parameter.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The product code. You can use one of the following methods to query a product code:
    // 
    // *   Call the GetRequestLog operation to query a product code from the response.
    // *   Query the code of a product in the OpenAPI Explorer URL of the product. For example, the OpenAPI Explorer URL of Short Message Service (SMS) is https://api.alibabacloud.com/product/Dysmsapi. Therefore, the product code of SMS is Dysmsapi.
    std::shared_ptr<string> product_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
