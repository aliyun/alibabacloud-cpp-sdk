// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKFILLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BACKFILLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class BackFillShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BackFillShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Asc, asc_);
      DARABONBA_PTR_TO_JSON(BackFillDate, backFillDate_);
      DARABONBA_PTR_TO_JSON(BackFillDateBegin, backFillDateBegin_);
      DARABONBA_PTR_TO_JSON(BackFillDateEnd, backFillDateEnd_);
      DARABONBA_PTR_TO_JSON(DagId, dagId_);
      DARABONBA_PTR_TO_JSON(FilterNodeIds, filterNodeIdsShrink_);
      DARABONBA_PTR_TO_JSON(HistoryDagId, historyDagId_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(IsTriggerSubTree, isTriggerSubTree_);
      DARABONBA_PTR_TO_JSON(StartNodeIds, startNodeIdsShrink_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, BackFillShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Asc, asc_);
      DARABONBA_PTR_FROM_JSON(BackFillDate, backFillDate_);
      DARABONBA_PTR_FROM_JSON(BackFillDateBegin, backFillDateBegin_);
      DARABONBA_PTR_FROM_JSON(BackFillDateEnd, backFillDateEnd_);
      DARABONBA_PTR_FROM_JSON(DagId, dagId_);
      DARABONBA_PTR_FROM_JSON(FilterNodeIds, filterNodeIdsShrink_);
      DARABONBA_PTR_FROM_JSON(HistoryDagId, historyDagId_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(IsTriggerSubTree, isTriggerSubTree_);
      DARABONBA_PTR_FROM_JSON(StartNodeIds, startNodeIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    BackFillShrinkRequest() = default ;
    BackFillShrinkRequest(const BackFillShrinkRequest &) = default ;
    BackFillShrinkRequest(BackFillShrinkRequest &&) = default ;
    BackFillShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BackFillShrinkRequest() = default ;
    BackFillShrinkRequest& operator=(const BackFillShrinkRequest &) = default ;
    BackFillShrinkRequest& operator=(BackFillShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asc_ == nullptr
        && return this->backFillDate_ == nullptr && return this->backFillDateBegin_ == nullptr && return this->backFillDateEnd_ == nullptr && return this->dagId_ == nullptr && return this->filterNodeIdsShrink_ == nullptr
        && return this->historyDagId_ == nullptr && return this->interval_ == nullptr && return this->isTriggerSubTree_ == nullptr && return this->startNodeIdsShrink_ == nullptr && return this->tid_ == nullptr; };
    // asc Field Functions 
    bool hasAsc() const { return this->asc_ != nullptr;};
    void deleteAsc() { this->asc_ = nullptr;};
    inline bool asc() const { DARABONBA_PTR_GET_DEFAULT(asc_, false) };
    inline BackFillShrinkRequest& setAsc(bool asc) { DARABONBA_PTR_SET_VALUE(asc_, asc) };


    // backFillDate Field Functions 
    bool hasBackFillDate() const { return this->backFillDate_ != nullptr;};
    void deleteBackFillDate() { this->backFillDate_ = nullptr;};
    inline string backFillDate() const { DARABONBA_PTR_GET_DEFAULT(backFillDate_, "") };
    inline BackFillShrinkRequest& setBackFillDate(string backFillDate) { DARABONBA_PTR_SET_VALUE(backFillDate_, backFillDate) };


    // backFillDateBegin Field Functions 
    bool hasBackFillDateBegin() const { return this->backFillDateBegin_ != nullptr;};
    void deleteBackFillDateBegin() { this->backFillDateBegin_ = nullptr;};
    inline string backFillDateBegin() const { DARABONBA_PTR_GET_DEFAULT(backFillDateBegin_, "") };
    inline BackFillShrinkRequest& setBackFillDateBegin(string backFillDateBegin) { DARABONBA_PTR_SET_VALUE(backFillDateBegin_, backFillDateBegin) };


    // backFillDateEnd Field Functions 
    bool hasBackFillDateEnd() const { return this->backFillDateEnd_ != nullptr;};
    void deleteBackFillDateEnd() { this->backFillDateEnd_ = nullptr;};
    inline string backFillDateEnd() const { DARABONBA_PTR_GET_DEFAULT(backFillDateEnd_, "") };
    inline BackFillShrinkRequest& setBackFillDateEnd(string backFillDateEnd) { DARABONBA_PTR_SET_VALUE(backFillDateEnd_, backFillDateEnd) };


    // dagId Field Functions 
    bool hasDagId() const { return this->dagId_ != nullptr;};
    void deleteDagId() { this->dagId_ = nullptr;};
    inline int64_t dagId() const { DARABONBA_PTR_GET_DEFAULT(dagId_, 0L) };
    inline BackFillShrinkRequest& setDagId(int64_t dagId) { DARABONBA_PTR_SET_VALUE(dagId_, dagId) };


    // filterNodeIdsShrink Field Functions 
    bool hasFilterNodeIdsShrink() const { return this->filterNodeIdsShrink_ != nullptr;};
    void deleteFilterNodeIdsShrink() { this->filterNodeIdsShrink_ = nullptr;};
    inline string filterNodeIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(filterNodeIdsShrink_, "") };
    inline BackFillShrinkRequest& setFilterNodeIdsShrink(string filterNodeIdsShrink) { DARABONBA_PTR_SET_VALUE(filterNodeIdsShrink_, filterNodeIdsShrink) };


    // historyDagId Field Functions 
    bool hasHistoryDagId() const { return this->historyDagId_ != nullptr;};
    void deleteHistoryDagId() { this->historyDagId_ = nullptr;};
    inline int64_t historyDagId() const { DARABONBA_PTR_GET_DEFAULT(historyDagId_, 0L) };
    inline BackFillShrinkRequest& setHistoryDagId(int64_t historyDagId) { DARABONBA_PTR_SET_VALUE(historyDagId_, historyDagId) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline BackFillShrinkRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // isTriggerSubTree Field Functions 
    bool hasIsTriggerSubTree() const { return this->isTriggerSubTree_ != nullptr;};
    void deleteIsTriggerSubTree() { this->isTriggerSubTree_ = nullptr;};
    inline bool isTriggerSubTree() const { DARABONBA_PTR_GET_DEFAULT(isTriggerSubTree_, false) };
    inline BackFillShrinkRequest& setIsTriggerSubTree(bool isTriggerSubTree) { DARABONBA_PTR_SET_VALUE(isTriggerSubTree_, isTriggerSubTree) };


    // startNodeIdsShrink Field Functions 
    bool hasStartNodeIdsShrink() const { return this->startNodeIdsShrink_ != nullptr;};
    void deleteStartNodeIdsShrink() { this->startNodeIdsShrink_ = nullptr;};
    inline string startNodeIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(startNodeIdsShrink_, "") };
    inline BackFillShrinkRequest& setStartNodeIdsShrink(string startNodeIdsShrink) { DARABONBA_PTR_SET_VALUE(startNodeIdsShrink_, startNodeIdsShrink) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline BackFillShrinkRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The running sequence of task flows for data backfill. Valid values:
    // 
    // *   **0**: reverse chronological order.
    // *   **1**: chronological order. This is the default value.
    std::shared_ptr<bool> asc_ = nullptr;
    // The date for the data to be backfilled. This parameter is required if you specify a date for data backfill.
    std::shared_ptr<string> backFillDate_ = nullptr;
    // The start date of the date range for the data to be backfilled. This parameter is required if you specify a date range for data backfill.
    std::shared_ptr<string> backFillDateBegin_ = nullptr;
    // The end date of the date range for the data to be backfilled. This parameter is required if you specify a date range for data backfill.
    std::shared_ptr<string> backFillDateEnd_ = nullptr;
    // The ID of the task flow. You can call the [ListTaskFlow](https://help.aliyun.com/document_detail/424565.html) or [ListLhTaskFlowAndScenario](https://help.aliyun.com/document_detail/426672.html) operation to query the task flow ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> dagId_ = nullptr;
    // Filter condition, which specifies the list of node IDs in the task flow that do not need to supplement data.
    std::shared_ptr<string> filterNodeIdsShrink_ = nullptr;
    // The ID of the historical task flow.
    std::shared_ptr<int64_t> historyDagId_ = nullptr;
    // The interval at which data backfill is performed. Unit: hours. Minimum value: 1. Default value: 24.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // Specifies whether to run descendant nodes. Default value: true.
    std::shared_ptr<bool> isTriggerSubTree_ = nullptr;
    // The number of nodes for which you want to backfill data.
    std::shared_ptr<string> startNodeIdsShrink_ = nullptr;
    // The ID of the tenant.
    // 
    // >  To view the ID of the tenant, go to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [View information about the current tenant](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
