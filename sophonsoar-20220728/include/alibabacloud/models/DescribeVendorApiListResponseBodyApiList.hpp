// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVENDORAPILISTRESPONSEBODYAPILIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVENDORAPILISTRESPONSEBODYAPILIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeVendorApiListResponseBodyApiList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVendorApiListResponseBodyApiList& obj) { 
      DARABONBA_PTR_TO_JSON(AdvanceConfig, advanceConfig_);
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(NeedAdvanceConfig, needAdvanceConfig_);
      DARABONBA_PTR_TO_JSON(NeedPageInfo, needPageInfo_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(Parameter, parameter_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductDomain, productDomain_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(VendorCode, vendorCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVendorApiListResponseBodyApiList& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvanceConfig, advanceConfig_);
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(ApiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(NeedAdvanceConfig, needAdvanceConfig_);
      DARABONBA_PTR_FROM_JSON(NeedPageInfo, needPageInfo_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(Parameter, parameter_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductDomain, productDomain_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(VendorCode, vendorCode_);
    };
    DescribeVendorApiListResponseBodyApiList() = default ;
    DescribeVendorApiListResponseBodyApiList(const DescribeVendorApiListResponseBodyApiList &) = default ;
    DescribeVendorApiListResponseBodyApiList(DescribeVendorApiListResponseBodyApiList &&) = default ;
    DescribeVendorApiListResponseBodyApiList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVendorApiListResponseBodyApiList() = default ;
    DescribeVendorApiListResponseBodyApiList& operator=(const DescribeVendorApiListResponseBodyApiList &) = default ;
    DescribeVendorApiListResponseBodyApiList& operator=(DescribeVendorApiListResponseBodyApiList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advanceConfig_ == nullptr
        && return this->apiName_ == nullptr && return this->apiVersion_ == nullptr && return this->method_ == nullptr && return this->needAdvanceConfig_ == nullptr && return this->needPageInfo_ == nullptr
        && return this->pageInfo_ == nullptr && return this->parameter_ == nullptr && return this->productCode_ == nullptr && return this->productDomain_ == nullptr && return this->productName_ == nullptr
        && return this->protocol_ == nullptr && return this->vendorCode_ == nullptr; };
    // advanceConfig Field Functions 
    bool hasAdvanceConfig() const { return this->advanceConfig_ != nullptr;};
    void deleteAdvanceConfig() { this->advanceConfig_ = nullptr;};
    inline string advanceConfig() const { DARABONBA_PTR_GET_DEFAULT(advanceConfig_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setAdvanceConfig(string advanceConfig) { DARABONBA_PTR_SET_VALUE(advanceConfig_, advanceConfig) };


    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // needAdvanceConfig Field Functions 
    bool hasNeedAdvanceConfig() const { return this->needAdvanceConfig_ != nullptr;};
    void deleteNeedAdvanceConfig() { this->needAdvanceConfig_ = nullptr;};
    inline bool needAdvanceConfig() const { DARABONBA_PTR_GET_DEFAULT(needAdvanceConfig_, false) };
    inline DescribeVendorApiListResponseBodyApiList& setNeedAdvanceConfig(bool needAdvanceConfig) { DARABONBA_PTR_SET_VALUE(needAdvanceConfig_, needAdvanceConfig) };


    // needPageInfo Field Functions 
    bool hasNeedPageInfo() const { return this->needPageInfo_ != nullptr;};
    void deleteNeedPageInfo() { this->needPageInfo_ = nullptr;};
    inline bool needPageInfo() const { DARABONBA_PTR_GET_DEFAULT(needPageInfo_, false) };
    inline DescribeVendorApiListResponseBodyApiList& setNeedPageInfo(bool needPageInfo) { DARABONBA_PTR_SET_VALUE(needPageInfo_, needPageInfo) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline string pageInfo() const { DARABONBA_PTR_GET_DEFAULT(pageInfo_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setPageInfo(string pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };


    // parameter Field Functions 
    bool hasParameter() const { return this->parameter_ != nullptr;};
    void deleteParameter() { this->parameter_ = nullptr;};
    inline string parameter() const { DARABONBA_PTR_GET_DEFAULT(parameter_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setParameter(string parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productDomain Field Functions 
    bool hasProductDomain() const { return this->productDomain_ != nullptr;};
    void deleteProductDomain() { this->productDomain_ = nullptr;};
    inline string productDomain() const { DARABONBA_PTR_GET_DEFAULT(productDomain_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setProductDomain(string productDomain) { DARABONBA_PTR_SET_VALUE(productDomain_, productDomain) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // vendorCode Field Functions 
    bool hasVendorCode() const { return this->vendorCode_ != nullptr;};
    void deleteVendorCode() { this->vendorCode_ = nullptr;};
    inline string vendorCode() const { DARABONBA_PTR_GET_DEFAULT(vendorCode_, "") };
    inline DescribeVendorApiListResponseBodyApiList& setVendorCode(string vendorCode) { DARABONBA_PTR_SET_VALUE(vendorCode_, vendorCode) };


  protected:
    // Advanced configuration for the API.
    std::shared_ptr<string> advanceConfig_ = nullptr;
    // The name of the vendor\\"s API.
    std::shared_ptr<string> apiName_ = nullptr;
    // The version number of the API.
    std::shared_ptr<string> apiVersion_ = nullptr;
    // Request methods: 
    // - **POST**: POST request method. 
    // - **GET**: GET request method. 
    // - **PUT**: PUT request method. 
    // - **DELETE**: DELETE request method.
    std::shared_ptr<string> method_ = nullptr;
    // Indicates whether advanced configuration is included.
    // - **true**: Yes.
    // - **false**: No.
    std::shared_ptr<bool> needAdvanceConfig_ = nullptr;
    // Indicates whether pagination is needed.
    // - **true**: Yes.
    // - **false**: No.
    std::shared_ptr<bool> needPageInfo_ = nullptr;
    // Information displayed on the page.
    std::shared_ptr<string> pageInfo_ = nullptr;
    // Interface request parameter configuration information.
    std::shared_ptr<string> parameter_ = nullptr;
    // Vendor\\"s product identifier:
    // - **waf**: Web Application Firewall.
    // - **cfw**: Cloud Firewall.
    std::shared_ptr<string> productCode_ = nullptr;
    // Default domain of the product.
    std::shared_ptr<string> productDomain_ = nullptr;
    // Product name.
    std::shared_ptr<string> productName_ = nullptr;
    // Request protocol. Values:
    // - **http**: HTTP request protocol.
    // - **https**: HTTPS request protocol.
    std::shared_ptr<string> protocol_ = nullptr;
    // Vendor code:
    // - **Tencent**: Tencent.
    // - **HUAWEICLOUD**: Huawei.
    // - **Azure**: Microsoft Azure.
    // - **AWS**: Amazon Web Services.
    // - **Chaitin**: Chaitin.
    std::shared_ptr<string> vendorCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
