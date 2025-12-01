// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKPROGRESSLISTRESPONSEBODYITEMSPRECHECKPROGRESSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKPROGRESSLISTRESPONSEBODYITEMSPRECHECKPROGRESSDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& obj) { 
      DARABONBA_PTR_TO_JSON(BootTime, bootTime_);
      DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(Item, item_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Names, names_);
      DARABONBA_PTR_TO_JSON(OrderNum, orderNum_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(BootTime, bootTime_);
      DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(Item, item_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Names, names_);
      DARABONBA_PTR_FROM_JSON(OrderNum, orderNum_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail() = default ;
    DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail(const DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail &) = default ;
    DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail(DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail &&) = default ;
    DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail() = default ;
    DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& operator=(const DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail &) = default ;
    DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& operator=(DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bootTime_ == nullptr
        && return this->errMsg_ == nullptr && return this->finishTime_ == nullptr && return this->item_ == nullptr && return this->jobId_ == nullptr && return this->names_ == nullptr
        && return this->orderNum_ == nullptr && return this->state_ == nullptr; };
    // bootTime Field Functions 
    bool hasBootTime() const { return this->bootTime_ != nullptr;};
    void deleteBootTime() { this->bootTime_ = nullptr;};
    inline int64_t bootTime() const { DARABONBA_PTR_GET_DEFAULT(bootTime_, 0L) };
    inline DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& setBootTime(int64_t bootTime) { DARABONBA_PTR_SET_VALUE(bootTime_, bootTime) };


    // errMsg Field Functions 
    bool hasErrMsg() const { return this->errMsg_ != nullptr;};
    void deleteErrMsg() { this->errMsg_ = nullptr;};
    inline string errMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
    inline DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline int64_t finishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
    inline DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string names() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline string orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, "") };
    inline DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& setOrderNum(string orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribePreCheckProgressListResponseBodyItemsPreCheckProgressDetail& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The time when the check for the item started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> bootTime_ = nullptr;
    // The error message.
    std::shared_ptr<string> errMsg_ = nullptr;
    // The time when the check for the item was complete. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> finishTime_ = nullptr;
    // The name of the check item.
    std::shared_ptr<string> item_ = nullptr;
    // The ID of the job for the check item.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the group to which the check item belongs.
    std::shared_ptr<string> names_ = nullptr;
    // The sequence number of the check item.
    std::shared_ptr<string> orderNum_ = nullptr;
    // The state of the check for the item. Valid values:
    // 
    // *   **init**: The check for the item is being initialized.
    // *   **warning**: A warning is reported.
    // *   **catched**: An exception occurs.
    // *   **running**: The check for the item is in progress.
    // *   **failed**: The check for the item fails.
    // *   **finish**: The check for the item is completed.
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
