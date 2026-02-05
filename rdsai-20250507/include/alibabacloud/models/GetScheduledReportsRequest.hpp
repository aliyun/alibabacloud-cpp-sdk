// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEDULEDREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEDULEDREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetScheduledReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScheduledReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ScheduledId, scheduledId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetScheduledReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ScheduledId, scheduledId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetScheduledReportsRequest() = default ;
    GetScheduledReportsRequest(const GetScheduledReportsRequest &) = default ;
    GetScheduledReportsRequest(GetScheduledReportsRequest &&) = default ;
    GetScheduledReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScheduledReportsRequest() = default ;
    GetScheduledReportsRequest& operator=(const GetScheduledReportsRequest &) = default ;
    GetScheduledReportsRequest& operator=(GetScheduledReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->scheduledId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetScheduledReportsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetScheduledReportsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetScheduledReportsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // scheduledId Field Functions 
    bool hasScheduledId() const { return this->scheduledId_ != nullptr;};
    void deleteScheduledId() { this->scheduledId_ = nullptr;};
    inline string getScheduledId() const { DARABONBA_PTR_GET_DEFAULT(scheduledId_, "") };
    inline GetScheduledReportsRequest& setScheduledId(string scheduledId) { DARABONBA_PTR_SET_VALUE(scheduledId_, scheduledId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetScheduledReportsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    // This parameter is required.
    shared_ptr<string> scheduledId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
