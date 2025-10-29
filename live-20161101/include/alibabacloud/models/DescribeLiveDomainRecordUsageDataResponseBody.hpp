// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINRECORDUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINRECORDUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainRecordUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRecordUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RecordUsageData, recordUsageData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRecordUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RecordUsageData, recordUsageData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveDomainRecordUsageDataResponseBody() = default ;
    DescribeLiveDomainRecordUsageDataResponseBody(const DescribeLiveDomainRecordUsageDataResponseBody &) = default ;
    DescribeLiveDomainRecordUsageDataResponseBody(DescribeLiveDomainRecordUsageDataResponseBody &&) = default ;
    DescribeLiveDomainRecordUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRecordUsageDataResponseBody() = default ;
    DescribeLiveDomainRecordUsageDataResponseBody& operator=(const DescribeLiveDomainRecordUsageDataResponseBody &) = default ;
    DescribeLiveDomainRecordUsageDataResponseBody& operator=(DescribeLiveDomainRecordUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->recordUsageData_ == nullptr && return this->requestId_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDomainRecordUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // recordUsageData Field Functions 
    bool hasRecordUsageData() const { return this->recordUsageData_ != nullptr;};
    void deleteRecordUsageData() { this->recordUsageData_ = nullptr;};
    inline const DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData & recordUsageData() const { DARABONBA_PTR_GET_CONST(recordUsageData_, DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData) };
    inline DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData recordUsageData() { DARABONBA_PTR_GET(recordUsageData_, DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData) };
    inline DescribeLiveDomainRecordUsageDataResponseBody& setRecordUsageData(const DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData & recordUsageData) { DARABONBA_PTR_SET_VALUE(recordUsageData_, recordUsageData) };
    inline DescribeLiveDomainRecordUsageDataResponseBody& setRecordUsageData(DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData && recordUsageData) { DARABONBA_PTR_SET_RVALUE(recordUsageData_, recordUsageData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveDomainRecordUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDomainRecordUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The recording data that was collected for each interval.
    std::shared_ptr<DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageData> recordUsageData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
