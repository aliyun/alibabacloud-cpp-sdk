// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNERUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNERUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnErUsageDataResponseBodyErAccData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnErUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnErUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ErAccData, erAccData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnErUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ErAccData, erAccData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnErUsageDataResponseBody() = default ;
    DescribeDcdnErUsageDataResponseBody(const DescribeDcdnErUsageDataResponseBody &) = default ;
    DescribeDcdnErUsageDataResponseBody(DescribeDcdnErUsageDataResponseBody &&) = default ;
    DescribeDcdnErUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnErUsageDataResponseBody() = default ;
    DescribeDcdnErUsageDataResponseBody& operator=(const DescribeDcdnErUsageDataResponseBody &) = default ;
    DescribeDcdnErUsageDataResponseBody& operator=(DescribeDcdnErUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->erAccData_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnErUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // erAccData Field Functions 
    bool hasErAccData() const { return this->erAccData_ != nullptr;};
    void deleteErAccData() { this->erAccData_ = nullptr;};
    inline const DescribeDcdnErUsageDataResponseBodyErAccData & erAccData() const { DARABONBA_PTR_GET_CONST(erAccData_, DescribeDcdnErUsageDataResponseBodyErAccData) };
    inline DescribeDcdnErUsageDataResponseBodyErAccData erAccData() { DARABONBA_PTR_GET(erAccData_, DescribeDcdnErUsageDataResponseBodyErAccData) };
    inline DescribeDcdnErUsageDataResponseBody& setErAccData(const DescribeDcdnErUsageDataResponseBodyErAccData & erAccData) { DARABONBA_PTR_SET_VALUE(erAccData_, erAccData) };
    inline DescribeDcdnErUsageDataResponseBody& setErAccData(DescribeDcdnErUsageDataResponseBodyErAccData && erAccData) { DARABONBA_PTR_SET_RVALUE(erAccData_, erAccData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnErUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnErUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The list of the data returned.
    std::shared_ptr<DescribeDcdnErUsageDataResponseBodyErAccData> erAccData_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
