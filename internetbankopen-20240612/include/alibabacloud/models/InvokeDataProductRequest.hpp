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
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> productCode_ {};
    shared_ptr<string> serviceParameters_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace InternetBankOpen20240612
#endif
