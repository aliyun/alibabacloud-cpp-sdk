// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVENDORAPILISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVENDORAPILISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeVendorApiListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVendorApiListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApiList, apiList_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVendorApiListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiList, apiList_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVendorApiListResponseBody() = default ;
    DescribeVendorApiListResponseBody(const DescribeVendorApiListResponseBody &) = default ;
    DescribeVendorApiListResponseBody(DescribeVendorApiListResponseBody &&) = default ;
    DescribeVendorApiListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVendorApiListResponseBody() = default ;
    DescribeVendorApiListResponseBody& operator=(const DescribeVendorApiListResponseBody &) = default ;
    DescribeVendorApiListResponseBody& operator=(DescribeVendorApiListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Page : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Page& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Page& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Page() = default ;
      Page(const Page &) = default ;
      Page(Page &&) = default ;
      Page(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Page() = default ;
      Page& operator=(const Page &) = default ;
      Page& operator=(Page &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
      inline Page& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Page& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Page& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The current page number in the pagination query.
      shared_ptr<int64_t> pageNumber_ {};
      // The number of items displayed per page in the pagination query.
      shared_ptr<int32_t> pageSize_ {};
      // Total number of items.
      shared_ptr<int64_t> totalCount_ {};
    };

    class ApiList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApiList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ApiList& obj) { 
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
      ApiList() = default ;
      ApiList(const ApiList &) = default ;
      ApiList(ApiList &&) = default ;
      ApiList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApiList() = default ;
      ApiList& operator=(const ApiList &) = default ;
      ApiList& operator=(ApiList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->advanceConfig_ == nullptr
        && this->apiName_ == nullptr && this->apiVersion_ == nullptr && this->method_ == nullptr && this->needAdvanceConfig_ == nullptr && this->needPageInfo_ == nullptr
        && this->pageInfo_ == nullptr && this->parameter_ == nullptr && this->productCode_ == nullptr && this->productDomain_ == nullptr && this->productName_ == nullptr
        && this->protocol_ == nullptr && this->vendorCode_ == nullptr; };
      // advanceConfig Field Functions 
      bool hasAdvanceConfig() const { return this->advanceConfig_ != nullptr;};
      void deleteAdvanceConfig() { this->advanceConfig_ = nullptr;};
      inline string getAdvanceConfig() const { DARABONBA_PTR_GET_DEFAULT(advanceConfig_, "") };
      inline ApiList& setAdvanceConfig(string advanceConfig) { DARABONBA_PTR_SET_VALUE(advanceConfig_, advanceConfig) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline ApiList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // apiVersion Field Functions 
      bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
      void deleteApiVersion() { this->apiVersion_ = nullptr;};
      inline string getApiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
      inline ApiList& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline ApiList& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // needAdvanceConfig Field Functions 
      bool hasNeedAdvanceConfig() const { return this->needAdvanceConfig_ != nullptr;};
      void deleteNeedAdvanceConfig() { this->needAdvanceConfig_ = nullptr;};
      inline bool getNeedAdvanceConfig() const { DARABONBA_PTR_GET_DEFAULT(needAdvanceConfig_, false) };
      inline ApiList& setNeedAdvanceConfig(bool needAdvanceConfig) { DARABONBA_PTR_SET_VALUE(needAdvanceConfig_, needAdvanceConfig) };


      // needPageInfo Field Functions 
      bool hasNeedPageInfo() const { return this->needPageInfo_ != nullptr;};
      void deleteNeedPageInfo() { this->needPageInfo_ = nullptr;};
      inline bool getNeedPageInfo() const { DARABONBA_PTR_GET_DEFAULT(needPageInfo_, false) };
      inline ApiList& setNeedPageInfo(bool needPageInfo) { DARABONBA_PTR_SET_VALUE(needPageInfo_, needPageInfo) };


      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline string getPageInfo() const { DARABONBA_PTR_GET_DEFAULT(pageInfo_, "") };
      inline ApiList& setPageInfo(string pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };


      // parameter Field Functions 
      bool hasParameter() const { return this->parameter_ != nullptr;};
      void deleteParameter() { this->parameter_ = nullptr;};
      inline string getParameter() const { DARABONBA_PTR_GET_DEFAULT(parameter_, "") };
      inline ApiList& setParameter(string parameter) { DARABONBA_PTR_SET_VALUE(parameter_, parameter) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline ApiList& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productDomain Field Functions 
      bool hasProductDomain() const { return this->productDomain_ != nullptr;};
      void deleteProductDomain() { this->productDomain_ = nullptr;};
      inline string getProductDomain() const { DARABONBA_PTR_GET_DEFAULT(productDomain_, "") };
      inline ApiList& setProductDomain(string productDomain) { DARABONBA_PTR_SET_VALUE(productDomain_, productDomain) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ApiList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // protocol Field Functions 
      bool hasProtocol() const { return this->protocol_ != nullptr;};
      void deleteProtocol() { this->protocol_ = nullptr;};
      inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
      inline ApiList& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


      // vendorCode Field Functions 
      bool hasVendorCode() const { return this->vendorCode_ != nullptr;};
      void deleteVendorCode() { this->vendorCode_ = nullptr;};
      inline string getVendorCode() const { DARABONBA_PTR_GET_DEFAULT(vendorCode_, "") };
      inline ApiList& setVendorCode(string vendorCode) { DARABONBA_PTR_SET_VALUE(vendorCode_, vendorCode) };


    protected:
      // Advanced configuration for the API.
      shared_ptr<string> advanceConfig_ {};
      // The name of the vendor\\"s API.
      shared_ptr<string> apiName_ {};
      // The version number of the API.
      shared_ptr<string> apiVersion_ {};
      // Request methods: 
      // - **POST**: POST request method. 
      // - **GET**: GET request method. 
      // - **PUT**: PUT request method. 
      // - **DELETE**: DELETE request method.
      shared_ptr<string> method_ {};
      // Indicates whether advanced configuration is included.
      // - **true**: Yes.
      // - **false**: No.
      shared_ptr<bool> needAdvanceConfig_ {};
      // Indicates whether pagination is needed.
      // - **true**: Yes.
      // - **false**: No.
      shared_ptr<bool> needPageInfo_ {};
      // Information displayed on the page.
      shared_ptr<string> pageInfo_ {};
      // Interface request parameter configuration information.
      shared_ptr<string> parameter_ {};
      // Vendor\\"s product identifier:
      // - **waf**: Web Application Firewall.
      // - **cfw**: Cloud Firewall.
      shared_ptr<string> productCode_ {};
      // Default domain of the product.
      shared_ptr<string> productDomain_ {};
      // Product name.
      shared_ptr<string> productName_ {};
      // Request protocol. Values:
      // - **http**: HTTP request protocol.
      // - **https**: HTTPS request protocol.
      shared_ptr<string> protocol_ {};
      // Vendor code:
      // - **Tencent**: Tencent.
      // - **HUAWEICLOUD**: Huawei.
      // - **Azure**: Microsoft Azure.
      // - **AWS**: Amazon Web Services.
      // - **Chaitin**: Chaitin.
      shared_ptr<string> vendorCode_ {};
    };

    virtual bool empty() const override { return this->apiList_ == nullptr
        && this->page_ == nullptr && this->requestId_ == nullptr; };
    // apiList Field Functions 
    bool hasApiList() const { return this->apiList_ != nullptr;};
    void deleteApiList() { this->apiList_ = nullptr;};
    inline const vector<DescribeVendorApiListResponseBody::ApiList> & getApiList() const { DARABONBA_PTR_GET_CONST(apiList_, vector<DescribeVendorApiListResponseBody::ApiList>) };
    inline vector<DescribeVendorApiListResponseBody::ApiList> getApiList() { DARABONBA_PTR_GET(apiList_, vector<DescribeVendorApiListResponseBody::ApiList>) };
    inline DescribeVendorApiListResponseBody& setApiList(const vector<DescribeVendorApiListResponseBody::ApiList> & apiList) { DARABONBA_PTR_SET_VALUE(apiList_, apiList) };
    inline DescribeVendorApiListResponseBody& setApiList(vector<DescribeVendorApiListResponseBody::ApiList> && apiList) { DARABONBA_PTR_SET_RVALUE(apiList_, apiList) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline const DescribeVendorApiListResponseBody::Page & getPage() const { DARABONBA_PTR_GET_CONST(page_, DescribeVendorApiListResponseBody::Page) };
    inline DescribeVendorApiListResponseBody::Page getPage() { DARABONBA_PTR_GET(page_, DescribeVendorApiListResponseBody::Page) };
    inline DescribeVendorApiListResponseBody& setPage(const DescribeVendorApiListResponseBody::Page & page) { DARABONBA_PTR_SET_VALUE(page_, page) };
    inline DescribeVendorApiListResponseBody& setPage(DescribeVendorApiListResponseBody::Page && page) { DARABONBA_PTR_SET_RVALUE(page_, page) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVendorApiListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Product information.
    shared_ptr<vector<DescribeVendorApiListResponseBody::ApiList>> apiList_ {};
    // Pagination query information.
    shared_ptr<DescribeVendorApiListResponseBody::Page> page_ {};
    // The ID of this call request, which is a unique identifier generated by Alibaba Cloud for the request, and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
