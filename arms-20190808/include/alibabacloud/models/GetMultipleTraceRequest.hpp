// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMULTIPLETRACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMULTIPLETRACEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetMultipleTraceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMultipleTraceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TraceIDs, traceIDs_);
    };
    friend void from_json(const Darabonba::Json& j, GetMultipleTraceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TraceIDs, traceIDs_);
    };
    GetMultipleTraceRequest() = default ;
    GetMultipleTraceRequest(const GetMultipleTraceRequest &) = default ;
    GetMultipleTraceRequest(GetMultipleTraceRequest &&) = default ;
    GetMultipleTraceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMultipleTraceRequest() = default ;
    GetMultipleTraceRequest& operator=(const GetMultipleTraceRequest &) = default ;
    GetMultipleTraceRequest& operator=(GetMultipleTraceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->startTime_ != nullptr && this->traceIDs_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetMultipleTraceRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetMultipleTraceRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetMultipleTraceRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetMultipleTraceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetMultipleTraceRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // traceIDs Field Functions 
    bool hasTraceIDs() const { return this->traceIDs_ != nullptr;};
    void deleteTraceIDs() { this->traceIDs_ = nullptr;};
    inline const vector<string> & traceIDs() const { DARABONBA_PTR_GET_CONST(traceIDs_, vector<string>) };
    inline vector<string> traceIDs() { DARABONBA_PTR_GET(traceIDs_, vector<string>) };
    inline GetMultipleTraceRequest& setTraceIDs(const vector<string> & traceIDs) { DARABONBA_PTR_SET_VALUE(traceIDs_, traceIDs) };
    inline GetMultipleTraceRequest& setTraceIDs(vector<string> && traceIDs) { DARABONBA_PTR_SET_RVALUE(traceIDs_, traceIDs) };


  protected:
    // The time when the trace ends. The value is a timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The number of the page to return. Default value: `1`.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries to return per page, the maximum value is 1000.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The start time of the trace. The value is a timestamp. Unit: milliseconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The trace IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> traceIDs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
