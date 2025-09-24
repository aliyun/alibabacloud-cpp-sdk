// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVALUATELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVALUATELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryEvaluateListResponseBodyDataEvaluateList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryEvaluateListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEvaluateListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluateList, evaluateList_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalInvoiceAmount, totalInvoiceAmount_);
      DARABONBA_PTR_TO_JSON(TotalUnAppliedInvoiceAmount, totalUnAppliedInvoiceAmount_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEvaluateListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluateList, evaluateList_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalInvoiceAmount, totalInvoiceAmount_);
      DARABONBA_PTR_FROM_JSON(TotalUnAppliedInvoiceAmount, totalUnAppliedInvoiceAmount_);
    };
    QueryEvaluateListResponseBodyData() = default ;
    QueryEvaluateListResponseBodyData(const QueryEvaluateListResponseBodyData &) = default ;
    QueryEvaluateListResponseBodyData(QueryEvaluateListResponseBodyData &&) = default ;
    QueryEvaluateListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEvaluateListResponseBodyData() = default ;
    QueryEvaluateListResponseBodyData& operator=(const QueryEvaluateListResponseBodyData &) = default ;
    QueryEvaluateListResponseBodyData& operator=(QueryEvaluateListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->evaluateList_ != nullptr
        && this->hostId_ != nullptr && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr && this->totalInvoiceAmount_ != nullptr
        && this->totalUnAppliedInvoiceAmount_ != nullptr; };
    // evaluateList Field Functions 
    bool hasEvaluateList() const { return this->evaluateList_ != nullptr;};
    void deleteEvaluateList() { this->evaluateList_ = nullptr;};
    inline const Models::QueryEvaluateListResponseBodyDataEvaluateList & evaluateList() const { DARABONBA_PTR_GET_CONST(evaluateList_, Models::QueryEvaluateListResponseBodyDataEvaluateList) };
    inline Models::QueryEvaluateListResponseBodyDataEvaluateList evaluateList() { DARABONBA_PTR_GET(evaluateList_, Models::QueryEvaluateListResponseBodyDataEvaluateList) };
    inline QueryEvaluateListResponseBodyData& setEvaluateList(const Models::QueryEvaluateListResponseBodyDataEvaluateList & evaluateList) { DARABONBA_PTR_SET_VALUE(evaluateList_, evaluateList) };
    inline QueryEvaluateListResponseBodyData& setEvaluateList(Models::QueryEvaluateListResponseBodyDataEvaluateList && evaluateList) { DARABONBA_PTR_SET_RVALUE(evaluateList_, evaluateList) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline QueryEvaluateListResponseBodyData& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryEvaluateListResponseBodyData& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryEvaluateListResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline QueryEvaluateListResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalInvoiceAmount Field Functions 
    bool hasTotalInvoiceAmount() const { return this->totalInvoiceAmount_ != nullptr;};
    void deleteTotalInvoiceAmount() { this->totalInvoiceAmount_ = nullptr;};
    inline int64_t totalInvoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(totalInvoiceAmount_, 0L) };
    inline QueryEvaluateListResponseBodyData& setTotalInvoiceAmount(int64_t totalInvoiceAmount) { DARABONBA_PTR_SET_VALUE(totalInvoiceAmount_, totalInvoiceAmount) };


    // totalUnAppliedInvoiceAmount Field Functions 
    bool hasTotalUnAppliedInvoiceAmount() const { return this->totalUnAppliedInvoiceAmount_ != nullptr;};
    void deleteTotalUnAppliedInvoiceAmount() { this->totalUnAppliedInvoiceAmount_ = nullptr;};
    inline int64_t totalUnAppliedInvoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(totalUnAppliedInvoiceAmount_, 0L) };
    inline QueryEvaluateListResponseBodyData& setTotalUnAppliedInvoiceAmount(int64_t totalUnAppliedInvoiceAmount) { DARABONBA_PTR_SET_VALUE(totalUnAppliedInvoiceAmount_, totalUnAppliedInvoiceAmount) };


  protected:
    // The data returned.
    std::shared_ptr<Models::QueryEvaluateListResponseBodyDataEvaluateList> evaluateList_ = nullptr;
    // The ID of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // The number of the page returned.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of returned entries.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The invoiced amount that meets the query conditions. Unit: Cent.
    std::shared_ptr<int64_t> totalInvoiceAmount_ = nullptr;
    // The invoiceable amount that meets the query conditions. Unit: Cent.
    std::shared_ptr<int64_t> totalUnAppliedInvoiceAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
