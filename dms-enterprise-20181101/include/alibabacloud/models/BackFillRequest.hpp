// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKFILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BACKFILLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class BackFillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BackFillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Asc, asc_);
      DARABONBA_PTR_TO_JSON(BackFillDate, backFillDate_);
      DARABONBA_PTR_TO_JSON(BackFillDateBegin, backFillDateBegin_);
      DARABONBA_PTR_TO_JSON(BackFillDateEnd, backFillDateEnd_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(FilterNodeIds, filterNodeIds_);
      DARABONBA_PTR_TO_JSON(HistoryDagId, historyDagId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IsTriggerSubTree, isTriggerSubTree_);
      DARABONBA_PTR_TO_JSON(StartNodeIds, startNodeIds_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, BackFillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Asc, asc_);
      DARABONBA_PTR_FROM_JSON(BackFillDate, backFillDate_);
      DARABONBA_PTR_FROM_JSON(BackFillDateBegin, backFillDateBegin_);
      DARABONBA_PTR_FROM_JSON(BackFillDateEnd, backFillDateEnd_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(FilterNodeIds, filterNodeIds_);
      DARABONBA_PTR_FROM_JSON(HistoryDagId, historyDagId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IsTriggerSubTree, isTriggerSubTree_);
      DARABONBA_PTR_FROM_JSON(StartNodeIds, startNodeIds_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    BackFillRequest() = default ;
    BackFillRequest(const BackFillRequest &) = default ;
    BackFillRequest(BackFillRequest &&) = default ;
    BackFillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BackFillRequest() = default ;
    BackFillRequest& operator=(const BackFillRequest &) = default ;
    BackFillRequest& operator=(BackFillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asc_ == nullptr
        && this->backFillDate_ == nullptr && this->backFillDateBegin_ == nullptr && this->backFillDateEnd_ == nullptr && this->dagId_ == nullptr && this->filterNodeIds_ == nullptr
        && this->historyDagId_ == nullptr && this->interval_ == nullptr && this->isTriggerSubTree_ == nullptr && this->startNodeIds_ == nullptr && this->tid_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline bool getAsc() const { DARABONBA_PTR_GET_DEFAULT(asc_, false) };
    inline BackFillRequest& setAsc(bool asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // backFillDate Field Functions 
    bool hasBackFillDate() const { return this->backFillDate_ != nullptr;};
    void deleteBackFillDate() { this->backFillDate_ = nullptr;};
    inline string getBackFillDate() const { DARABONBA_PTR_GET_DEFAULT(backFillDate_, "") };
    inline BackFillRequest& setBackFillDate(string backFillDate) { DARABONBA_PTR_SET_VALUE(backFillDate_, backFillDate) };


    // backFillDateBegin Field Functions 
    bool hasBackFillDateBegin() const { return this->backFillDateBegin_ != nullptr;};
    void deleteBackFillDateBegin() { this->backFillDateBegin_ = nullptr;};
    inline string getBackFillDateBegin() const { DARABONBA_PTR_GET_DEFAULT(backFillDateBegin_, "") };
    inline BackFillRequest& setBackFillDateBegin(string backFillDateBegin) { DARABONBA_PTR_SET_VALUE(backFillDateBegin_, backFillDateBegin) };


    // backFillDateEnd Field Functions 
    bool hasBackFillDateEnd() const { return this->backFillDateEnd_ != nullptr;};
    void deleteBackFillDateEnd() { this->backFillDateEnd_ = nullptr;};
    inline string getBackFillDateEnd() const { DARABONBA_PTR_GET_DEFAULT(backFillDateEnd_, "") };
    inline BackFillRequest& setBackFillDateEnd(string backFillDateEnd) { DARABONBA_PTR_SET_VALUE(backFillDateEnd_, backFillDateEnd) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t getDagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline BackFillRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // filterNodeIds Field Functions 
    bool hasFilterNodeIds() const { return this->filterNodeIds_ != nullptr;};
    void deleteFilterNodeIds() { this->filterNodeIds_ = nullptr;};
    inline const vector<int64_t> & getFilterNodeIds() const { DARABONBA_PTR_GET_CONST(filterNodeIds_, vector<int64_t>) };
    inline vector<int64_t> getFilterNodeIds() { DARABONBA_PTR_GET(filterNodeIds_, vector<int64_t>) };
    inline BackFillRequest& setFilterNodeIds(const vector<int64_t> & filterNodeIds) { DARABONBA_PTR_SET_VALUE(filterNodeIds_, filterNodeIds) };
    inline BackFillRequest& setFilterNodeIds(vector<int64_t> && filterNodeIds) { DARABONBA_PTR_SET_RVALUE(filterNodeIds_, filterNodeIds) };


    // historyDagId Field Functions 
    bool hasHistoryDagId() const { return this->historyDagId_ != nullptr;};
    void deleteHistoryDagId() { this->historyDagId_ = nullptr;};
    inline int64_t getHistoryDagId() const { DARABONBA_PTR_GET_DEFAULT(historyDagId_, 0L) };
    inline BackFillRequest& setHistoryDagId(int64_t historyDagId) { DARABONBA_PTR_SET_VALUE(historyDagId_, historyDagId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline BackFillRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // isTriggerSubTree Field Functions 
    bool hasIsTriggerSubTree() const { return this->isTriggerSubTree_ != nullptr;};
    void deleteIsTriggerSubTree() { this->isTriggerSubTree_ = nullptr;};
    inline bool getIsTriggerSubTree() const { DARABONBA_PTR_GET_DEFAULT(isTriggerSubTree_, false) };
    inline BackFillRequest& setIsTriggerSubTree(bool isTriggerSubTree) { DARABONBA_PTR_SET_VALUE(isTriggerSubTree_, isTriggerSubTree) };


    // startNodeIds Field Functions 
    bool hasStartNodeIds() const { return this->startNodeIds_ != nullptr;};
    void deleteStartNodeIds() { this->startNodeIds_ = nullptr;};
    inline const vector<int64_t> & getStartNodeIds() const { DARABONBA_PTR_GET_CONST(startNodeIds_, vector<int64_t>) };
    inline vector<int64_t> getStartNodeIds() { DARABONBA_PTR_GET(startNodeIds_, vector<int64_t>) };
    inline BackFillRequest& setStartNodeIds(const vector<int64_t> & startNodeIds) { DARABONBA_PTR_SET_VALUE(startNodeIds_, startNodeIds) };
    inline BackFillRequest& setStartNodeIds(vector<int64_t> && startNodeIds) { DARABONBA_PTR_SET_RVALUE(startNodeIds_, startNodeIds) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline BackFillRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The running sequence of task flows for data backfill. Valid values:
    // 
    // *   **0**: reverse chronological order.
    // *   **1**: chronological order. This is the default value.
    shared_ptr<bool> asc_ {};
    // The date for the data to be backfilled. This parameter is required if you specify a date for data backfill.
    shared_ptr<string> backFillDate_ {};
    // The start date of the date range for the data to be backfilled. This parameter is required if you specify a date range for data backfill.
    shared_ptr<string> backFillDateBegin_ {};
    // The end date of the date range for the data to be backfilled. This parameter is required if you specify a date range for data backfill.
    shared_ptr<string> backFillDateEnd_ {};
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> dagId_ {};
    // Filter condition, which specifies the list of node IDs in the task flow that do not need to supplement data.
    shared_ptr<vector<int64_t>> filterNodeIds_ {};
    // The ID of the historical task flow.
    shared_ptr<int64_t> historyDagId_ {};
    // The interval at which data backfill is performed. Unit: hours. Minimum value: 1. Default value: 24.
    shared_ptr<int32_t> interval_ {};
    // Specifies whether to run descendant nodes. Default value: true.
    shared_ptr<bool> isTriggerSubTree_ {};
    // The number of nodes for which you want to backfill data.
    shared_ptr<vector<int64_t>> startNodeIds_ {};
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    shared_ptr<int64_t> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
