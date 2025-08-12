// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEPRODUCERUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEPRODUCERUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeLiveProducerUsageDataResponseBodyBillProducerData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveProducerUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveProducerUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BillProducerData, billProducerData_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveProducerUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BillProducerData, billProducerData_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeLiveProducerUsageDataResponseBody() = default ;
    DescribeLiveProducerUsageDataResponseBody(const DescribeLiveProducerUsageDataResponseBody &) = default ;
    DescribeLiveProducerUsageDataResponseBody(DescribeLiveProducerUsageDataResponseBody &&) = default ;
    DescribeLiveProducerUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveProducerUsageDataResponseBody() = default ;
    DescribeLiveProducerUsageDataResponseBody& operator=(const DescribeLiveProducerUsageDataResponseBody &) = default ;
    DescribeLiveProducerUsageDataResponseBody& operator=(DescribeLiveProducerUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billProducerData_ != nullptr
        && this->endTime_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // billProducerData Field Functions 
    bool hasBillProducerData() const { return this->billProducerData_ != nullptr;};
    void deleteBillProducerData() { this->billProducerData_ = nullptr;};
    inline const DescribeLiveProducerUsageDataResponseBodyBillProducerData & billProducerData() const { DARABONBA_PTR_GET_CONST(billProducerData_, DescribeLiveProducerUsageDataResponseBodyBillProducerData) };
    inline DescribeLiveProducerUsageDataResponseBodyBillProducerData billProducerData() { DARABONBA_PTR_GET(billProducerData_, DescribeLiveProducerUsageDataResponseBodyBillProducerData) };
    inline DescribeLiveProducerUsageDataResponseBody& setBillProducerData(const DescribeLiveProducerUsageDataResponseBodyBillProducerData & billProducerData) { DARABONBA_PTR_SET_VALUE(billProducerData_, billProducerData) };
    inline DescribeLiveProducerUsageDataResponseBody& setBillProducerData(DescribeLiveProducerUsageDataResponseBodyBillProducerData && billProducerData) { DARABONBA_PTR_SET_RVALUE(billProducerData_, billProducerData) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveProducerUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveProducerUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveProducerUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The production studio usage data.
    std::shared_ptr<DescribeLiveProducerUsageDataResponseBodyBillProducerData> billProducerData_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The start of the time range for which the data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
