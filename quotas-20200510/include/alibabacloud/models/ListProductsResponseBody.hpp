// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductInfo, productInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductInfo, productInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListProductsResponseBody() = default ;
    ListProductsResponseBody(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody(ListProductsResponseBody &&) = default ;
    ListProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBody() = default ;
    ListProductsResponseBody& operator=(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody& operator=(ListProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProductInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProductInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CommonQuotaSupport, commonQuotaSupport_);
        DARABONBA_PTR_TO_JSON(Dynamic, dynamic_);
        DARABONBA_PTR_TO_JSON(FlowControlSupport, flowControlSupport_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(ProductNameEn, productNameEn_);
        DARABONBA_PTR_TO_JSON(SecondCategoryId, secondCategoryId_);
        DARABONBA_PTR_TO_JSON(SecondCategoryName, secondCategoryName_);
        DARABONBA_PTR_TO_JSON(SecondCategoryNameEn, secondCategoryNameEn_);
        DARABONBA_PTR_TO_JSON(WhiteListLabelQuotaSupport, whiteListLabelQuotaSupport_);
      };
      friend void from_json(const Darabonba::Json& j, ProductInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CommonQuotaSupport, commonQuotaSupport_);
        DARABONBA_PTR_FROM_JSON(Dynamic, dynamic_);
        DARABONBA_PTR_FROM_JSON(FlowControlSupport, flowControlSupport_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(ProductNameEn, productNameEn_);
        DARABONBA_PTR_FROM_JSON(SecondCategoryId, secondCategoryId_);
        DARABONBA_PTR_FROM_JSON(SecondCategoryName, secondCategoryName_);
        DARABONBA_PTR_FROM_JSON(SecondCategoryNameEn, secondCategoryNameEn_);
        DARABONBA_PTR_FROM_JSON(WhiteListLabelQuotaSupport, whiteListLabelQuotaSupport_);
      };
      ProductInfo() = default ;
      ProductInfo(const ProductInfo &) = default ;
      ProductInfo(ProductInfo &&) = default ;
      ProductInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProductInfo() = default ;
      ProductInfo& operator=(const ProductInfo &) = default ;
      ProductInfo& operator=(ProductInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->commonQuotaSupport_ == nullptr
        && this->dynamic_ == nullptr && this->flowControlSupport_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr && this->productNameEn_ == nullptr
        && this->secondCategoryId_ == nullptr && this->secondCategoryName_ == nullptr && this->secondCategoryNameEn_ == nullptr && this->whiteListLabelQuotaSupport_ == nullptr; };
      // commonQuotaSupport Field Functions 
      bool hasCommonQuotaSupport() const { return this->commonQuotaSupport_ != nullptr;};
      void deleteCommonQuotaSupport() { this->commonQuotaSupport_ = nullptr;};
      inline string getCommonQuotaSupport() const { DARABONBA_PTR_GET_DEFAULT(commonQuotaSupport_, "") };
      inline ProductInfo& setCommonQuotaSupport(string commonQuotaSupport) { DARABONBA_PTR_SET_VALUE(commonQuotaSupport_, commonQuotaSupport) };


      // dynamic Field Functions 
      bool hasDynamic() const { return this->dynamic_ != nullptr;};
      void deleteDynamic() { this->dynamic_ = nullptr;};
      inline bool getDynamic() const { DARABONBA_PTR_GET_DEFAULT(dynamic_, false) };
      inline ProductInfo& setDynamic(bool dynamic) { DARABONBA_PTR_SET_VALUE(dynamic_, dynamic) };


      // flowControlSupport Field Functions 
      bool hasFlowControlSupport() const { return this->flowControlSupport_ != nullptr;};
      void deleteFlowControlSupport() { this->flowControlSupport_ = nullptr;};
      inline string getFlowControlSupport() const { DARABONBA_PTR_GET_DEFAULT(flowControlSupport_, "") };
      inline ProductInfo& setFlowControlSupport(string flowControlSupport) { DARABONBA_PTR_SET_VALUE(flowControlSupport_, flowControlSupport) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline ProductInfo& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline ProductInfo& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // productNameEn Field Functions 
      bool hasProductNameEn() const { return this->productNameEn_ != nullptr;};
      void deleteProductNameEn() { this->productNameEn_ = nullptr;};
      inline string getProductNameEn() const { DARABONBA_PTR_GET_DEFAULT(productNameEn_, "") };
      inline ProductInfo& setProductNameEn(string productNameEn) { DARABONBA_PTR_SET_VALUE(productNameEn_, productNameEn) };


      // secondCategoryId Field Functions 
      bool hasSecondCategoryId() const { return this->secondCategoryId_ != nullptr;};
      void deleteSecondCategoryId() { this->secondCategoryId_ = nullptr;};
      inline int64_t getSecondCategoryId() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryId_, 0L) };
      inline ProductInfo& setSecondCategoryId(int64_t secondCategoryId) { DARABONBA_PTR_SET_VALUE(secondCategoryId_, secondCategoryId) };


      // secondCategoryName Field Functions 
      bool hasSecondCategoryName() const { return this->secondCategoryName_ != nullptr;};
      void deleteSecondCategoryName() { this->secondCategoryName_ = nullptr;};
      inline string getSecondCategoryName() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryName_, "") };
      inline ProductInfo& setSecondCategoryName(string secondCategoryName) { DARABONBA_PTR_SET_VALUE(secondCategoryName_, secondCategoryName) };


      // secondCategoryNameEn Field Functions 
      bool hasSecondCategoryNameEn() const { return this->secondCategoryNameEn_ != nullptr;};
      void deleteSecondCategoryNameEn() { this->secondCategoryNameEn_ = nullptr;};
      inline string getSecondCategoryNameEn() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryNameEn_, "") };
      inline ProductInfo& setSecondCategoryNameEn(string secondCategoryNameEn) { DARABONBA_PTR_SET_VALUE(secondCategoryNameEn_, secondCategoryNameEn) };


      // whiteListLabelQuotaSupport Field Functions 
      bool hasWhiteListLabelQuotaSupport() const { return this->whiteListLabelQuotaSupport_ != nullptr;};
      void deleteWhiteListLabelQuotaSupport() { this->whiteListLabelQuotaSupport_ = nullptr;};
      inline string getWhiteListLabelQuotaSupport() const { DARABONBA_PTR_GET_DEFAULT(whiteListLabelQuotaSupport_, "") };
      inline ProductInfo& setWhiteListLabelQuotaSupport(string whiteListLabelQuotaSupport) { DARABONBA_PTR_SET_VALUE(whiteListLabelQuotaSupport_, whiteListLabelQuotaSupport) };


    protected:
      // Specifies whether general quotas are supported. Valid values:
      // 
      // - support: Supported.
      // 
      // - unsupport: Not supported.
      shared_ptr<string> commonQuotaSupport_ {};
      // <notice>**[Deprecated]** We recommend that you do not use this parameter.</notice>
      // 
      // Specifies whether dynamic quota adjustment is supported. Valid values:
      // 
      // - true
      // 
      // - false
      shared_ptr<bool> dynamic_ {};
      // Specifies whether API rate limits are supported. Valid values:
      // 
      // - support: Supported.
      // 
      // - unsupport: Not supported.
      shared_ptr<string> flowControlSupport_ {};
      // The abbreviation of the Alibaba Cloud service name.
      shared_ptr<string> productCode_ {};
      // The name of the Alibaba Cloud service.
      shared_ptr<string> productName_ {};
      // The English name of the Alibaba Cloud service.
      shared_ptr<string> productNameEn_ {};
      // The ID of the service category.
      shared_ptr<int64_t> secondCategoryId_ {};
      // The name of the service category.
      shared_ptr<string> secondCategoryName_ {};
      // The English name of the service category.
      shared_ptr<string> secondCategoryNameEn_ {};
      // Specifies whether privileges are supported. Valid values:
      // 
      // - support: Supported.
      // 
      // - unsupport: Not supported.
      shared_ptr<string> whiteListLabelQuotaSupport_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->productInfo_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProductsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProductsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productInfo Field Functions 
    bool hasProductInfo() const { return this->productInfo_ != nullptr;};
    void deleteProductInfo() { this->productInfo_ = nullptr;};
    inline const vector<ListProductsResponseBody::ProductInfo> & getProductInfo() const { DARABONBA_PTR_GET_CONST(productInfo_, vector<ListProductsResponseBody::ProductInfo>) };
    inline vector<ListProductsResponseBody::ProductInfo> getProductInfo() { DARABONBA_PTR_GET(productInfo_, vector<ListProductsResponseBody::ProductInfo>) };
    inline ListProductsResponseBody& setProductInfo(const vector<ListProductsResponseBody::ProductInfo> & productInfo) { DARABONBA_PTR_SET_VALUE(productInfo_, productInfo) };
    inline ListProductsResponseBody& setProductInfo(vector<ListProductsResponseBody::ProductInfo> && productInfo) { DARABONBA_PTR_SET_RVALUE(productInfo_, productInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListProductsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned for this query.
    shared_ptr<int32_t> maxResults_ {};
    // The token that marks the position of the returned query data. An empty value indicates that all data has been queried.
    shared_ptr<string> nextToken_ {};
    // The information about the Alibaba Cloud service.
    shared_ptr<vector<ListProductsResponseBody::ProductInfo>> productInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned for this request.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
