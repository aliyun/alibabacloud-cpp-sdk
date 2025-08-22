// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTRACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTraceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TraceID, traceID_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TraceID, traceID_);
    };
    GetTraceRequest() = default ;
    GetTraceRequest(const GetTraceRequest &) = default ;
    GetTraceRequest(GetTraceRequest &&) = default ;
    GetTraceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceRequest() = default ;
    GetTraceRequest& operator=(const GetTraceRequest &) = default ;
    GetTraceRequest& operator=(GetTraceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->startTime_ != nullptr && this->traceID_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetTraceRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetTraceRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetTraceRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetTraceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetTraceRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // traceID Field Functions 
    bool hasTraceID() const { return this->traceID_ != nullptr;};
    void deleteTraceID() { this->traceID_ = nullptr;};
    inline string traceID() const { DARABONBA_PTR_GET_DEFAULT(traceID_, "") };
    inline GetTraceRequest& setTraceID(string traceID) { DARABONBA_PTR_SET_VALUE(traceID_, traceID) };


  protected:
    // The end of the time range to query. Unit: milliseconds.
    // 
    // > If the ID of the trace is 30 characters in length, this parameter is optional. Otherwise, this parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries on each page. Maximum value: 100.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The beginning of the time range to query. Unit: milliseconds.
    // 
    // > If the ID of the trace is 30 characters in length, this parameter is optional. Otherwise, this parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The trace ID. You can log on to the ARMS console and obtain the trace ID on the **Trace Query** page or **Interface Snapshot** tab.
    // 
    // This parameter is required.
    std::shared_ptr<string> traceID_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
