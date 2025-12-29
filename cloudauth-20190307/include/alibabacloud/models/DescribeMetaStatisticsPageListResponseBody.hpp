// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETASTATISTICSPAGELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETASTATISTICSPAGELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeMetaStatisticsPageListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetaStatisticsPageListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetaStatisticsPageListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    DescribeMetaStatisticsPageListResponseBody() = default ;
    DescribeMetaStatisticsPageListResponseBody(const DescribeMetaStatisticsPageListResponseBody &) = default ;
    DescribeMetaStatisticsPageListResponseBody(DescribeMetaStatisticsPageListResponseBody &&) = default ;
    DescribeMetaStatisticsPageListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetaStatisticsPageListResponseBody() = default ;
    DescribeMetaStatisticsPageListResponseBody& operator=(const DescribeMetaStatisticsPageListResponseBody &) = default ;
    DescribeMetaStatisticsPageListResponseBody& operator=(DescribeMetaStatisticsPageListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Api, api_);
        DARABONBA_PTR_TO_JSON(ApiName, apiName_);
        DARABONBA_PTR_TO_JSON(BillCount, billCount_);
        DARABONBA_PTR_TO_JSON(BillRate, billRate_);
        DARABONBA_PTR_TO_JSON(ChargeCount, chargeCount_);
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(IspName, ispName_);
        DARABONBA_PTR_TO_JSON(NoRecordCount, noRecordCount_);
        DARABONBA_PTR_TO_JSON(PassedCount, passedCount_);
        DARABONBA_PTR_TO_JSON(PassedRate, passedRate_);
        DARABONBA_PTR_TO_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_TO_JSON(SuccessRate, successRate_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_TO_JSON(UnpassedCount, unpassedCount_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Api, api_);
        DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
        DARABONBA_PTR_FROM_JSON(BillCount, billCount_);
        DARABONBA_PTR_FROM_JSON(BillRate, billRate_);
        DARABONBA_PTR_FROM_JSON(ChargeCount, chargeCount_);
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(IspName, ispName_);
        DARABONBA_PTR_FROM_JSON(NoRecordCount, noRecordCount_);
        DARABONBA_PTR_FROM_JSON(PassedCount, passedCount_);
        DARABONBA_PTR_FROM_JSON(PassedRate, passedRate_);
        DARABONBA_PTR_FROM_JSON(SuccessCount, successCount_);
        DARABONBA_PTR_FROM_JSON(SuccessRate, successRate_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        DARABONBA_PTR_FROM_JSON(UnpassedCount, unpassedCount_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->api_ == nullptr
        && this->apiName_ == nullptr && this->billCount_ == nullptr && this->billRate_ == nullptr && this->chargeCount_ == nullptr && this->date_ == nullptr
        && this->ispName_ == nullptr && this->noRecordCount_ == nullptr && this->passedCount_ == nullptr && this->passedRate_ == nullptr && this->successCount_ == nullptr
        && this->successRate_ == nullptr && this->totalCount_ == nullptr && this->unpassedCount_ == nullptr; };
      // api Field Functions 
      bool hasApi() const { return this->api_ != nullptr;};
      void deleteApi() { this->api_ = nullptr;};
      inline string getApi() const { DARABONBA_PTR_GET_DEFAULT(api_, "") };
      inline Items& setApi(string api) { DARABONBA_PTR_SET_VALUE(api_, api) };


      // apiName Field Functions 
      bool hasApiName() const { return this->apiName_ != nullptr;};
      void deleteApiName() { this->apiName_ = nullptr;};
      inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
      inline Items& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


      // billCount Field Functions 
      bool hasBillCount() const { return this->billCount_ != nullptr;};
      void deleteBillCount() { this->billCount_ = nullptr;};
      inline int64_t getBillCount() const { DARABONBA_PTR_GET_DEFAULT(billCount_, 0L) };
      inline Items& setBillCount(int64_t billCount) { DARABONBA_PTR_SET_VALUE(billCount_, billCount) };


      // billRate Field Functions 
      bool hasBillRate() const { return this->billRate_ != nullptr;};
      void deleteBillRate() { this->billRate_ = nullptr;};
      inline string getBillRate() const { DARABONBA_PTR_GET_DEFAULT(billRate_, "") };
      inline Items& setBillRate(string billRate) { DARABONBA_PTR_SET_VALUE(billRate_, billRate) };


      // chargeCount Field Functions 
      bool hasChargeCount() const { return this->chargeCount_ != nullptr;};
      void deleteChargeCount() { this->chargeCount_ = nullptr;};
      inline int64_t getChargeCount() const { DARABONBA_PTR_GET_DEFAULT(chargeCount_, 0L) };
      inline Items& setChargeCount(int64_t chargeCount) { DARABONBA_PTR_SET_VALUE(chargeCount_, chargeCount) };


      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Items& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // ispName Field Functions 
      bool hasIspName() const { return this->ispName_ != nullptr;};
      void deleteIspName() { this->ispName_ = nullptr;};
      inline string getIspName() const { DARABONBA_PTR_GET_DEFAULT(ispName_, "") };
      inline Items& setIspName(string ispName) { DARABONBA_PTR_SET_VALUE(ispName_, ispName) };


      // noRecordCount Field Functions 
      bool hasNoRecordCount() const { return this->noRecordCount_ != nullptr;};
      void deleteNoRecordCount() { this->noRecordCount_ = nullptr;};
      inline int64_t getNoRecordCount() const { DARABONBA_PTR_GET_DEFAULT(noRecordCount_, 0L) };
      inline Items& setNoRecordCount(int64_t noRecordCount) { DARABONBA_PTR_SET_VALUE(noRecordCount_, noRecordCount) };


      // passedCount Field Functions 
      bool hasPassedCount() const { return this->passedCount_ != nullptr;};
      void deletePassedCount() { this->passedCount_ = nullptr;};
      inline int64_t getPassedCount() const { DARABONBA_PTR_GET_DEFAULT(passedCount_, 0L) };
      inline Items& setPassedCount(int64_t passedCount) { DARABONBA_PTR_SET_VALUE(passedCount_, passedCount) };


      // passedRate Field Functions 
      bool hasPassedRate() const { return this->passedRate_ != nullptr;};
      void deletePassedRate() { this->passedRate_ = nullptr;};
      inline string getPassedRate() const { DARABONBA_PTR_GET_DEFAULT(passedRate_, "") };
      inline Items& setPassedRate(string passedRate) { DARABONBA_PTR_SET_VALUE(passedRate_, passedRate) };


      // successCount Field Functions 
      bool hasSuccessCount() const { return this->successCount_ != nullptr;};
      void deleteSuccessCount() { this->successCount_ = nullptr;};
      inline int64_t getSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(successCount_, 0L) };
      inline Items& setSuccessCount(int64_t successCount) { DARABONBA_PTR_SET_VALUE(successCount_, successCount) };


      // successRate Field Functions 
      bool hasSuccessRate() const { return this->successRate_ != nullptr;};
      void deleteSuccessRate() { this->successRate_ = nullptr;};
      inline string getSuccessRate() const { DARABONBA_PTR_GET_DEFAULT(successRate_, "") };
      inline Items& setSuccessRate(string successRate) { DARABONBA_PTR_SET_VALUE(successRate_, successRate) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Items& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      // unpassedCount Field Functions 
      bool hasUnpassedCount() const { return this->unpassedCount_ != nullptr;};
      void deleteUnpassedCount() { this->unpassedCount_ = nullptr;};
      inline int64_t getUnpassedCount() const { DARABONBA_PTR_GET_DEFAULT(unpassedCount_, 0L) };
      inline Items& setUnpassedCount(int64_t unpassedCount) { DARABONBA_PTR_SET_VALUE(unpassedCount_, unpassedCount) };


    protected:
      // Api。
      shared_ptr<string> api_ {};
      shared_ptr<string> apiName_ {};
      shared_ptr<int64_t> billCount_ {};
      shared_ptr<string> billRate_ {};
      shared_ptr<int64_t> chargeCount_ {};
      shared_ptr<string> date_ {};
      shared_ptr<string> ispName_ {};
      shared_ptr<int64_t> noRecordCount_ {};
      shared_ptr<int64_t> passedCount_ {};
      shared_ptr<string> passedRate_ {};
      shared_ptr<int64_t> successCount_ {};
      shared_ptr<string> successRate_ {};
      shared_ptr<int64_t> totalCount_ {};
      shared_ptr<int64_t> unpassedCount_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeMetaStatisticsPageListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeMetaStatisticsPageListResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeMetaStatisticsPageListResponseBody::Items>) };
    inline vector<DescribeMetaStatisticsPageListResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeMetaStatisticsPageListResponseBody::Items>) };
    inline DescribeMetaStatisticsPageListResponseBody& setItems(const vector<DescribeMetaStatisticsPageListResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeMetaStatisticsPageListResponseBody& setItems(vector<DescribeMetaStatisticsPageListResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMetaStatisticsPageListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMetaStatisticsPageListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeMetaStatisticsPageListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeMetaStatisticsPageListResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<int32_t> currentPage_ {};
    shared_ptr<vector<DescribeMetaStatisticsPageListResponseBody::Items>> items_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
