// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMONTHLYSLALISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMONTHLYSLALISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryMonthlySlaListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMonthlySlaListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMonthlySlaListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QueryMonthlySlaListResponseBody() = default ;
    QueryMonthlySlaListResponseBody(const QueryMonthlySlaListResponseBody &) = default ;
    QueryMonthlySlaListResponseBody(QueryMonthlySlaListResponseBody &&) = default ;
    QueryMonthlySlaListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMonthlySlaListResponseBody() = default ;
    QueryMonthlySlaListResponseBody& operator=(const QueryMonthlySlaListResponseBody &) = default ;
    QueryMonthlySlaListResponseBody& operator=(QueryMonthlySlaListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AvailableRate, availableRate_);
        DARABONBA_PTR_TO_JSON(DamagedId, damagedId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Month, month_);
        DARABONBA_PTR_TO_JSON(MonthlyServiceCharge, monthlyServiceCharge_);
        DARABONBA_PTR_TO_JSON(PayDescription, payDescription_);
        DARABONBA_PTR_TO_JSON(PayRate, payRate_);
        DARABONBA_PTR_TO_JSON(PayStatus, payStatus_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(ShouldPaySum, shouldPaySum_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AvailableRate, availableRate_);
        DARABONBA_PTR_FROM_JSON(DamagedId, damagedId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Month, month_);
        DARABONBA_PTR_FROM_JSON(MonthlyServiceCharge, monthlyServiceCharge_);
        DARABONBA_PTR_FROM_JSON(PayDescription, payDescription_);
        DARABONBA_PTR_FROM_JSON(PayRate, payRate_);
        DARABONBA_PTR_FROM_JSON(PayStatus, payStatus_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(ShouldPaySum, shouldPaySum_);
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
      virtual bool empty() const override { return this->availableRate_ == nullptr
        && this->damagedId_ == nullptr && this->instanceId_ == nullptr && this->month_ == nullptr && this->monthlyServiceCharge_ == nullptr && this->payDescription_ == nullptr
        && this->payRate_ == nullptr && this->payStatus_ == nullptr && this->productCode_ == nullptr && this->shouldPaySum_ == nullptr; };
      // availableRate Field Functions 
      bool hasAvailableRate() const { return this->availableRate_ != nullptr;};
      void deleteAvailableRate() { this->availableRate_ = nullptr;};
      inline double getAvailableRate() const { DARABONBA_PTR_GET_DEFAULT(availableRate_, 0.0) };
      inline Data& setAvailableRate(double availableRate) { DARABONBA_PTR_SET_VALUE(availableRate_, availableRate) };


      // damagedId Field Functions 
      bool hasDamagedId() const { return this->damagedId_ != nullptr;};
      void deleteDamagedId() { this->damagedId_ = nullptr;};
      inline string getDamagedId() const { DARABONBA_PTR_GET_DEFAULT(damagedId_, "") };
      inline Data& setDamagedId(string damagedId) { DARABONBA_PTR_SET_VALUE(damagedId_, damagedId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // month Field Functions 
      bool hasMonth() const { return this->month_ != nullptr;};
      void deleteMonth() { this->month_ = nullptr;};
      inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
      inline Data& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


      // monthlyServiceCharge Field Functions 
      bool hasMonthlyServiceCharge() const { return this->monthlyServiceCharge_ != nullptr;};
      void deleteMonthlyServiceCharge() { this->monthlyServiceCharge_ = nullptr;};
      inline double getMonthlyServiceCharge() const { DARABONBA_PTR_GET_DEFAULT(monthlyServiceCharge_, 0.0) };
      inline Data& setMonthlyServiceCharge(double monthlyServiceCharge) { DARABONBA_PTR_SET_VALUE(monthlyServiceCharge_, monthlyServiceCharge) };


      // payDescription Field Functions 
      bool hasPayDescription() const { return this->payDescription_ != nullptr;};
      void deletePayDescription() { this->payDescription_ = nullptr;};
      inline string getPayDescription() const { DARABONBA_PTR_GET_DEFAULT(payDescription_, "") };
      inline Data& setPayDescription(string payDescription) { DARABONBA_PTR_SET_VALUE(payDescription_, payDescription) };


      // payRate Field Functions 
      bool hasPayRate() const { return this->payRate_ != nullptr;};
      void deletePayRate() { this->payRate_ = nullptr;};
      inline double getPayRate() const { DARABONBA_PTR_GET_DEFAULT(payRate_, 0.0) };
      inline Data& setPayRate(double payRate) { DARABONBA_PTR_SET_VALUE(payRate_, payRate) };


      // payStatus Field Functions 
      bool hasPayStatus() const { return this->payStatus_ != nullptr;};
      void deletePayStatus() { this->payStatus_ = nullptr;};
      inline int32_t getPayStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
      inline Data& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // shouldPaySum Field Functions 
      bool hasShouldPaySum() const { return this->shouldPaySum_ != nullptr;};
      void deleteShouldPaySum() { this->shouldPaySum_ = nullptr;};
      inline double getShouldPaySum() const { DARABONBA_PTR_GET_DEFAULT(shouldPaySum_, 0.0) };
      inline Data& setShouldPaySum(double shouldPaySum) { DARABONBA_PTR_SET_VALUE(shouldPaySum_, shouldPaySum) };


    protected:
      shared_ptr<double> availableRate_ {};
      shared_ptr<string> damagedId_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int32_t> month_ {};
      shared_ptr<double> monthlyServiceCharge_ {};
      shared_ptr<string> payDescription_ {};
      shared_ptr<double> payRate_ {};
      shared_ptr<int32_t> payStatus_ {};
      shared_ptr<string> productCode_ {};
      shared_ptr<double> shouldPaySum_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->data_ == nullptr && this->metadata_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryMonthlySlaListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryMonthlySlaListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryMonthlySlaListResponseBody::Data>) };
    inline vector<QueryMonthlySlaListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryMonthlySlaListResponseBody::Data>) };
    inline QueryMonthlySlaListResponseBody& setData(const vector<QueryMonthlySlaListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryMonthlySlaListResponseBody& setData(vector<QueryMonthlySlaListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline QueryMonthlySlaListResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline QueryMonthlySlaListResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryMonthlySlaListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMonthlySlaListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryMonthlySlaListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<QueryMonthlySlaListResponseBody::Data>> data_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
