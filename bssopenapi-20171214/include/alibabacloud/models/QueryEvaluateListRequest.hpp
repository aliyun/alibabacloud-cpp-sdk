// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVALUATELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVALUATELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryEvaluateListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEvaluateListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillCycle, billCycle_);
      DARABONBA_PTR_TO_JSON(BizTypeList, bizTypeList_);
      DARABONBA_PTR_TO_JSON(EndAmount, endAmount_);
      DARABONBA_PTR_TO_JSON(EndBizTime, endBizTime_);
      DARABONBA_PTR_TO_JSON(EndSearchTime, endSearchTime_);
      DARABONBA_PTR_TO_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortType, sortType_);
      DARABONBA_PTR_TO_JSON(StartAmount, startAmount_);
      DARABONBA_PTR_TO_JSON(StartBizTime, startBizTime_);
      DARABONBA_PTR_TO_JSON(StartSearchTime, startSearchTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEvaluateListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillCycle, billCycle_);
      DARABONBA_PTR_FROM_JSON(BizTypeList, bizTypeList_);
      DARABONBA_PTR_FROM_JSON(EndAmount, endAmount_);
      DARABONBA_PTR_FROM_JSON(EndBizTime, endBizTime_);
      DARABONBA_PTR_FROM_JSON(EndSearchTime, endSearchTime_);
      DARABONBA_PTR_FROM_JSON(OutBizId, outBizId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortType, sortType_);
      DARABONBA_PTR_FROM_JSON(StartAmount, startAmount_);
      DARABONBA_PTR_FROM_JSON(StartBizTime, startBizTime_);
      DARABONBA_PTR_FROM_JSON(StartSearchTime, startSearchTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QueryEvaluateListRequest() = default ;
    QueryEvaluateListRequest(const QueryEvaluateListRequest &) = default ;
    QueryEvaluateListRequest(QueryEvaluateListRequest &&) = default ;
    QueryEvaluateListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEvaluateListRequest() = default ;
    QueryEvaluateListRequest& operator=(const QueryEvaluateListRequest &) = default ;
    QueryEvaluateListRequest& operator=(QueryEvaluateListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billCycle_ == nullptr
        && this->bizTypeList_ == nullptr && this->endAmount_ == nullptr && this->endBizTime_ == nullptr && this->endSearchTime_ == nullptr && this->outBizId_ == nullptr
        && this->ownerId_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->sortType_ == nullptr && this->startAmount_ == nullptr
        && this->startBizTime_ == nullptr && this->startSearchTime_ == nullptr && this->type_ == nullptr; };
    // billCycle Field Functions 
    bool hasBillCycle() const { return this->billCycle_ != nullptr;};
    void deleteBillCycle() { this->billCycle_ = nullptr;};
    inline string getBillCycle() const { DARABONBA_PTR_GET_DEFAULT(billCycle_, "") };
    inline QueryEvaluateListRequest& setBillCycle(string billCycle) { DARABONBA_PTR_SET_VALUE(billCycle_, billCycle) };


    // bizTypeList Field Functions 
    bool hasBizTypeList() const { return this->bizTypeList_ != nullptr;};
    void deleteBizTypeList() { this->bizTypeList_ = nullptr;};
    inline const vector<string> & getBizTypeList() const { DARABONBA_PTR_GET_CONST(bizTypeList_, vector<string>) };
    inline vector<string> getBizTypeList() { DARABONBA_PTR_GET(bizTypeList_, vector<string>) };
    inline QueryEvaluateListRequest& setBizTypeList(const vector<string> & bizTypeList) { DARABONBA_PTR_SET_VALUE(bizTypeList_, bizTypeList) };
    inline QueryEvaluateListRequest& setBizTypeList(vector<string> && bizTypeList) { DARABONBA_PTR_SET_RVALUE(bizTypeList_, bizTypeList) };


    // endAmount Field Functions 
    bool hasEndAmount() const { return this->endAmount_ != nullptr;};
    void deleteEndAmount() { this->endAmount_ = nullptr;};
    inline int64_t getEndAmount() const { DARABONBA_PTR_GET_DEFAULT(endAmount_, 0L) };
    inline QueryEvaluateListRequest& setEndAmount(int64_t endAmount) { DARABONBA_PTR_SET_VALUE(endAmount_, endAmount) };


    // endBizTime Field Functions 
    bool hasEndBizTime() const { return this->endBizTime_ != nullptr;};
    void deleteEndBizTime() { this->endBizTime_ = nullptr;};
    inline string getEndBizTime() const { DARABONBA_PTR_GET_DEFAULT(endBizTime_, "") };
    inline QueryEvaluateListRequest& setEndBizTime(string endBizTime) { DARABONBA_PTR_SET_VALUE(endBizTime_, endBizTime) };


    // endSearchTime Field Functions 
    bool hasEndSearchTime() const { return this->endSearchTime_ != nullptr;};
    void deleteEndSearchTime() { this->endSearchTime_ = nullptr;};
    inline string getEndSearchTime() const { DARABONBA_PTR_GET_DEFAULT(endSearchTime_, "") };
    inline QueryEvaluateListRequest& setEndSearchTime(string endSearchTime) { DARABONBA_PTR_SET_VALUE(endSearchTime_, endSearchTime) };


    // outBizId Field Functions 
    bool hasOutBizId() const { return this->outBizId_ != nullptr;};
    void deleteOutBizId() { this->outBizId_ = nullptr;};
    inline string getOutBizId() const { DARABONBA_PTR_GET_DEFAULT(outBizId_, "") };
    inline QueryEvaluateListRequest& setOutBizId(string outBizId) { DARABONBA_PTR_SET_VALUE(outBizId_, outBizId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryEvaluateListRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryEvaluateListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryEvaluateListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortType Field Functions 
    bool hasSortType() const { return this->sortType_ != nullptr;};
    void deleteSortType() { this->sortType_ = nullptr;};
    inline int32_t getSortType() const { DARABONBA_PTR_GET_DEFAULT(sortType_, 0) };
    inline QueryEvaluateListRequest& setSortType(int32_t sortType) { DARABONBA_PTR_SET_VALUE(sortType_, sortType) };


    // startAmount Field Functions 
    bool hasStartAmount() const { return this->startAmount_ != nullptr;};
    void deleteStartAmount() { this->startAmount_ = nullptr;};
    inline int64_t getStartAmount() const { DARABONBA_PTR_GET_DEFAULT(startAmount_, 0L) };
    inline QueryEvaluateListRequest& setStartAmount(int64_t startAmount) { DARABONBA_PTR_SET_VALUE(startAmount_, startAmount) };


    // startBizTime Field Functions 
    bool hasStartBizTime() const { return this->startBizTime_ != nullptr;};
    void deleteStartBizTime() { this->startBizTime_ = nullptr;};
    inline string getStartBizTime() const { DARABONBA_PTR_GET_DEFAULT(startBizTime_, "") };
    inline QueryEvaluateListRequest& setStartBizTime(string startBizTime) { DARABONBA_PTR_SET_VALUE(startBizTime_, startBizTime) };


    // startSearchTime Field Functions 
    bool hasStartSearchTime() const { return this->startSearchTime_ != nullptr;};
    void deleteStartSearchTime() { this->startSearchTime_ = nullptr;};
    inline string getStartSearchTime() const { DARABONBA_PTR_GET_DEFAULT(startSearchTime_, "") };
    inline QueryEvaluateListRequest& setStartSearchTime(string startSearchTime) { DARABONBA_PTR_SET_VALUE(startSearchTime_, startSearchTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t getType() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline QueryEvaluateListRequest& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The billing cycle.
    shared_ptr<string> billCycle_ {};
    // The market types in invoices.
    // 
    // >  By default, this parameter is left empty. If this parameter is left empty, all market types are queried.
    shared_ptr<vector<string>> bizTypeList_ {};
    // The maximum amount to be queried.
    shared_ptr<int64_t> endAmount_ {};
    // The latest time when an order is paid Specify the time in the yyyy-mm-dd hh:mm:ss format.
    shared_ptr<string> endBizTime_ {};
    // The end of the time range to query.
    shared_ptr<string> endSearchTime_ {};
    // The ID of the external order.
    shared_ptr<string> outBizId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the sort. Valid values:
    // 
    // *   1: Sort invoices by ID in descending order.
    // *   2: Sort invoices by invoice type in descending order, and then sort invoices of the same type by ID in descending order.
    // *   3: Sort invoices by invoice type in ascending order, and then sort invoices of the same type by ID in descending order.
    shared_ptr<int32_t> sortType_ {};
    // The minimum amount to be queried.
    shared_ptr<int64_t> startAmount_ {};
    // The earliest time when an order is paid. Specify the time in the yyyy-mm-dd hh:mm:ss format.
    shared_ptr<string> startBizTime_ {};
    // The beginning of the time range to query.
    shared_ptr<string> startSearchTime_ {};
    // The type of orders to be queried. Valid values:
    // 
    // *   1: the orders in which the invoiceable amount is negative.
    // *   2: the orders in which the invoiceable amount is positive.
    // *   3: the orders in which the invoiceable amount is not 0.
    // *   4: the orders in which the amount that has been invoiced is greater than 0.
    // 
    // >  By default, this parameter is left empty. If this parameter is left empty, all orders are queried.
    shared_ptr<int32_t> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
