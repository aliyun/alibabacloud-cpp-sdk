// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEDATAPRODUCTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEDATAPRODUCTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace InternetBankOpen20240612
{
namespace Models
{
  class InvokeDataProductRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeDataProductRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(productCode, productCode_);
      DARABONBA_PTR_TO_JSON(serviceParameters, serviceParameters_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeDataProductRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(productCode, productCode_);
      DARABONBA_PTR_FROM_JSON(serviceParameters, serviceParameters_);
    };
    InvokeDataProductRequest() = default ;
    InvokeDataProductRequest(const InvokeDataProductRequest &) = default ;
    InvokeDataProductRequest(InvokeDataProductRequest &&) = default ;
    InvokeDataProductRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeDataProductRequest() = default ;
    InvokeDataProductRequest& operator=(const InvokeDataProductRequest &) = default ;
    InvokeDataProductRequest& operator=(InvokeDataProductRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->productCode_ == nullptr && this->serviceParameters_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline InvokeDataProductRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline InvokeDataProductRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // serviceParameters Field Functions 
    bool hasServiceParameters() const { return this->serviceParameters_ != nullptr;};
    void deleteServiceParameters() { this->serviceParameters_ = nullptr;};
    inline string getServiceParameters() const { DARABONBA_PTR_GET_DEFAULT(serviceParameters_, "") };
    inline InvokeDataProductRequest& setServiceParameters(string serviceParameters) { DARABONBA_PTR_SET_VALUE(serviceParameters_, serviceParameters) };


  protected:
    // The customer transaction serial number, used for idempotence. This parameter is required for business purposes. If it is missing, a MissingParameter.ClientToken error is returned. Only 1 to 64 ASCII letters, digits, periods (.), underscores (_), or hyphens (-) are allowed. It is case-sensitive and leading and trailing spaces are not trimmed. If the format is invalid, an InvalidParameter.ClientToken error is returned. The ClientToken is globally unique under the same Alibaba Cloud account, regardless of the product. When you retry with the same parameters, the result of the initial call and the original CallId are returned, and the data service provider is not called again. If the initial request is still being processed, a RequestInProgress error (HTTP 409) is returned. Retry with the original parameters later. If the same ClientToken is used with a different ProductCode or ServiceParameters, an IdempotentParameterMismatch error is returned. Use a new serial number. If the result is not obtained due to a network interruption, retry with the original ClientToken and do not change the serial number.
    shared_ptr<string> clientToken_ {};
    // The commodity code of the data product, used to identify the data product invoked in this call. The gateway uses this code to complete product authorization and route the request to the corresponding data service provider. This parameter is required for business purposes. If it is missing, a MissingParameter.ProductCode error is returned. If the code is not registered or has been deactivated, an InvalidParameter.ProductCode error is returned. If the current account has not activated the product, a Forbidden.ProductNotAuthorized error is returned.
    shared_ptr<string> productCode_ {};
    // The complete package of business elements, which must be a JSON object serialized as a string. It carries the business parameters required for this data product call. This parameter is required for business purposes. If it is missing, a MissingParameter.ServiceParameters error is returned. For sensitive information such as mobile phone numbers and ID card numbers, only digests are passed, and plaintext is not allowed. If plaintext fields such as mobile or certNo are passed, an InvalidParameter.ServiceParameters error is returned. Fields ending with Sha256 must be 64-character hexadecimal strings, and fields ending with Md5 must be 32-character hexadecimal strings. Uppercase letters are automatically converted to lowercase. The specific required elements are determined by the product corresponding to the ProductCode. For example, some products require at least one of mobileSha256 and mobileMd5. If required elements are missing, the JSON is invalid, or the digest format is incorrect, an InvalidParameter.ServiceParameters error is returned.
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace InternetBankOpen20240612
#endif
