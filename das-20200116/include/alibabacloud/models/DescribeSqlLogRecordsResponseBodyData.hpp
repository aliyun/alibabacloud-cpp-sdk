// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSqlLogRecordsResponseBodyDataItems.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSqlLogRecordsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Finish, finish_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TotalRecords, totalRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogRecordsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Finish, finish_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TotalRecords, totalRecords_);
    };
    DescribeSqlLogRecordsResponseBodyData() = default ;
    DescribeSqlLogRecordsResponseBodyData(const DescribeSqlLogRecordsResponseBodyData &) = default ;
    DescribeSqlLogRecordsResponseBodyData(DescribeSqlLogRecordsResponseBodyData &&) = default ;
    DescribeSqlLogRecordsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogRecordsResponseBodyData() = default ;
    DescribeSqlLogRecordsResponseBodyData& operator=(const DescribeSqlLogRecordsResponseBodyData &) = default ;
    DescribeSqlLogRecordsResponseBodyData& operator=(DescribeSqlLogRecordsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->finish_ == nullptr && return this->items_ == nullptr && return this->jobId_ == nullptr && return this->startTime_ == nullptr && return this->totalRecords_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // finish Field Functions 
    bool hasFinish() const { return this->finish_ != nullptr;};
    void deleteFinish() { this->finish_ = nullptr;};
    inline string finish() const { DARABONBA_PTR_GET_DEFAULT(finish_, "") };
    inline DescribeSqlLogRecordsResponseBodyData& setFinish(string finish) { DARABONBA_PTR_SET_VALUE(finish_, finish) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const Models::DescribeSqlLogRecordsResponseBodyDataItems & items() const { DARABONBA_PTR_GET_CONST(items_, Models::DescribeSqlLogRecordsResponseBodyDataItems) };
    inline Models::DescribeSqlLogRecordsResponseBodyDataItems items() { DARABONBA_PTR_GET(items_, Models::DescribeSqlLogRecordsResponseBodyDataItems) };
    inline DescribeSqlLogRecordsResponseBodyData& setItems(const Models::DescribeSqlLogRecordsResponseBodyDataItems & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSqlLogRecordsResponseBodyData& setItems(Models::DescribeSqlLogRecordsResponseBodyDataItems && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeSqlLogRecordsResponseBodyData& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // totalRecords Field Functions 
    bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
    void deleteTotalRecords() { this->totalRecords_ = nullptr;};
    inline int64_t totalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
    inline DescribeSqlLogRecordsResponseBodyData& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


  protected:
    // The end of the time range to query. This value is a UNIX timestamp. Unit: millisecond.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // Indicates whether the task was complete. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    // 
    // >  If the value of **Finish** is 0 and the value of **JobId** is returned, the request is an asynchronous request and the return result cannot be directly obtained. You must query the return result based on the value of **JobId**. Specify JobId as the key of **Filters** and the value of **JobId** as the value of Filters. Example: `Filters=[{"Key": "JobId", "Value": "******"}]`.
    std::shared_ptr<string> finish_ = nullptr;
    // The data.
    std::shared_ptr<Models::DescribeSqlLogRecordsResponseBodyDataItems> items_ = nullptr;
    // The ID of the asynchronous task.
    std::shared_ptr<string> jobId_ = nullptr;
    // The beginning of the time range to query. This value is a UNIX timestamp. Unit: millisecond.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int64_t> totalRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
