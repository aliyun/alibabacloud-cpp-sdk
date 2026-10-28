// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMISSIONABLEPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMISSIONABLEPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCommissionableProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommissionableProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommissionableProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetCommissionableProductsResponseBody() = default ;
    GetCommissionableProductsResponseBody(const GetCommissionableProductsResponseBody &) = default ;
    GetCommissionableProductsResponseBody(GetCommissionableProductsResponseBody &&) = default ;
    GetCommissionableProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommissionableProductsResponseBody() = default ;
    GetCommissionableProductsResponseBody& operator=(const GetCommissionableProductsResponseBody &) = default ;
    GetCommissionableProductsResponseBody& operator=(GetCommissionableProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActualStartMonth, actualStartMonth_);
        DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_TO_JSON(EligibleForCommission, eligibleForCommission_);
        DARABONBA_PTR_TO_JSON(EligibleForDiscount, eligibleForDiscount_);
        DARABONBA_PTR_TO_JSON(EligibleForPerformance, eligibleForPerformance_);
        DARABONBA_PTR_TO_JSON(EndMonth, endMonth_);
        DARABONBA_PTR_TO_JSON(ProductCampaign, productCampaign_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ProductName, productName_);
        DARABONBA_PTR_TO_JSON(SevenCoreProducts, sevenCoreProducts_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualStartMonth, actualStartMonth_);
        DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
        DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
        DARABONBA_PTR_FROM_JSON(EligibleForCommission, eligibleForCommission_);
        DARABONBA_PTR_FROM_JSON(EligibleForDiscount, eligibleForDiscount_);
        DARABONBA_PTR_FROM_JSON(EligibleForPerformance, eligibleForPerformance_);
        DARABONBA_PTR_FROM_JSON(EndMonth, endMonth_);
        DARABONBA_PTR_FROM_JSON(ProductCampaign, productCampaign_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ProductName, productName_);
        DARABONBA_PTR_FROM_JSON(SevenCoreProducts, sevenCoreProducts_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actualStartMonth_ == nullptr
        && this->commodityCode_ == nullptr && this->commodityName_ == nullptr && this->eligibleForCommission_ == nullptr && this->eligibleForDiscount_ == nullptr && this->eligibleForPerformance_ == nullptr
        && this->endMonth_ == nullptr && this->productCampaign_ == nullptr && this->productCode_ == nullptr && this->productName_ == nullptr && this->sevenCoreProducts_ == nullptr
        && this->status_ == nullptr; };
      // actualStartMonth Field Functions 
      bool hasActualStartMonth() const { return this->actualStartMonth_ != nullptr;};
      void deleteActualStartMonth() { this->actualStartMonth_ = nullptr;};
      inline string getActualStartMonth() const { DARABONBA_PTR_GET_DEFAULT(actualStartMonth_, "") };
      inline Data& setActualStartMonth(string actualStartMonth) { DARABONBA_PTR_SET_VALUE(actualStartMonth_, actualStartMonth) };


      // commodityCode Field Functions 
      bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
      void deleteCommodityCode() { this->commodityCode_ = nullptr;};
      inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
      inline Data& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


      // commodityName Field Functions 
      bool hasCommodityName() const { return this->commodityName_ != nullptr;};
      void deleteCommodityName() { this->commodityName_ = nullptr;};
      inline string getCommodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
      inline Data& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


      // eligibleForCommission Field Functions 
      bool hasEligibleForCommission() const { return this->eligibleForCommission_ != nullptr;};
      void deleteEligibleForCommission() { this->eligibleForCommission_ = nullptr;};
      inline string getEligibleForCommission() const { DARABONBA_PTR_GET_DEFAULT(eligibleForCommission_, "") };
      inline Data& setEligibleForCommission(string eligibleForCommission) { DARABONBA_PTR_SET_VALUE(eligibleForCommission_, eligibleForCommission) };


      // eligibleForDiscount Field Functions 
      bool hasEligibleForDiscount() const { return this->eligibleForDiscount_ != nullptr;};
      void deleteEligibleForDiscount() { this->eligibleForDiscount_ = nullptr;};
      inline string getEligibleForDiscount() const { DARABONBA_PTR_GET_DEFAULT(eligibleForDiscount_, "") };
      inline Data& setEligibleForDiscount(string eligibleForDiscount) { DARABONBA_PTR_SET_VALUE(eligibleForDiscount_, eligibleForDiscount) };


      // eligibleForPerformance Field Functions 
      bool hasEligibleForPerformance() const { return this->eligibleForPerformance_ != nullptr;};
      void deleteEligibleForPerformance() { this->eligibleForPerformance_ = nullptr;};
      inline string getEligibleForPerformance() const { DARABONBA_PTR_GET_DEFAULT(eligibleForPerformance_, "") };
      inline Data& setEligibleForPerformance(string eligibleForPerformance) { DARABONBA_PTR_SET_VALUE(eligibleForPerformance_, eligibleForPerformance) };


      // endMonth Field Functions 
      bool hasEndMonth() const { return this->endMonth_ != nullptr;};
      void deleteEndMonth() { this->endMonth_ = nullptr;};
      inline string getEndMonth() const { DARABONBA_PTR_GET_DEFAULT(endMonth_, "") };
      inline Data& setEndMonth(string endMonth) { DARABONBA_PTR_SET_VALUE(endMonth_, endMonth) };


      // productCampaign Field Functions 
      bool hasProductCampaign() const { return this->productCampaign_ != nullptr;};
      void deleteProductCampaign() { this->productCampaign_ = nullptr;};
      inline string getProductCampaign() const { DARABONBA_PTR_GET_DEFAULT(productCampaign_, "") };
      inline Data& setProductCampaign(string productCampaign) { DARABONBA_PTR_SET_VALUE(productCampaign_, productCampaign) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // productName Field Functions 
      bool hasProductName() const { return this->productName_ != nullptr;};
      void deleteProductName() { this->productName_ = nullptr;};
      inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
      inline Data& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


      // sevenCoreProducts Field Functions 
      bool hasSevenCoreProducts() const { return this->sevenCoreProducts_ != nullptr;};
      void deleteSevenCoreProducts() { this->sevenCoreProducts_ = nullptr;};
      inline string getSevenCoreProducts() const { DARABONBA_PTR_GET_DEFAULT(sevenCoreProducts_, "") };
      inline Data& setSevenCoreProducts(string sevenCoreProducts) { DARABONBA_PTR_SET_VALUE(sevenCoreProducts_, sevenCoreProducts) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The actual start month in the yyyymm format.
      shared_ptr<string> actualStartMonth_ {};
      // The commodity code.
      shared_ptr<string> commodityCode_ {};
      // The commodity name.
      shared_ptr<string> commodityName_ {};
      // Specifies whether the commodity is eligible for commission.
      shared_ptr<string> eligibleForCommission_ {};
      // Specifies whether the commodity is eligible for discounts.
      shared_ptr<string> eligibleForDiscount_ {};
      // Specifies whether the commodity is counted towards performance.
      shared_ptr<string> eligibleForPerformance_ {};
      // The actual end month in the yyyymm format.
      shared_ptr<string> endMonth_ {};
      // Specifies whether the commodity is a product line incentive commodity.
      shared_ptr<string> productCampaign_ {};
      // The product code.
      shared_ptr<string> productCode_ {};
      // The product name.
      shared_ptr<string> productName_ {};
      // Specifies whether the product is a core product.
      shared_ptr<string> sevenCoreProducts_ {};
      // The display status of the product.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCommissionableProductsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetCommissionableProductsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetCommissionableProductsResponseBody::Data>) };
    inline vector<GetCommissionableProductsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetCommissionableProductsResponseBody::Data>) };
    inline GetCommissionableProductsResponseBody& setData(const vector<GetCommissionableProductsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCommissionableProductsResponseBody& setData(vector<GetCommissionableProductsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetCommissionableProductsResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetCommissionableProductsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCommissionableProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCommissionableProductsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline GetCommissionableProductsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The status code of the response. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The list of returned data.
    shared_ptr<vector<GetCommissionableProductsResponseBody::Data>> data_ {};
    // The current page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the API call is successful. Valid values: True and False. This parameter indicates only the success of the API call and does not indicate the success of subsequent business operations.
    shared_ptr<bool> success_ {};
    // The total number of entries.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
