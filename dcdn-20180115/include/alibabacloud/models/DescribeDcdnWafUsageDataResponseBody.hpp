// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDcdnWafUsageDataResponseBodyWafUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WafUsageData, wafUsageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WafUsageData, wafUsageData_);
    };
    DescribeDcdnWafUsageDataResponseBody() = default ;
    DescribeDcdnWafUsageDataResponseBody(const DescribeDcdnWafUsageDataResponseBody &) = default ;
    DescribeDcdnWafUsageDataResponseBody(DescribeDcdnWafUsageDataResponseBody &&) = default ;
    DescribeDcdnWafUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafUsageDataResponseBody() = default ;
    DescribeDcdnWafUsageDataResponseBody& operator=(const DescribeDcdnWafUsageDataResponseBody &) = default ;
    DescribeDcdnWafUsageDataResponseBody& operator=(DescribeDcdnWafUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->requestId_ != nullptr && this->startTime_ != nullptr && this->wafUsageData_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnWafUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnWafUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnWafUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // wafUsageData Field Functions 
    bool hasWafUsageData() const { return this->wafUsageData_ != nullptr;};
    void deleteWafUsageData() { this->wafUsageData_ = nullptr;};
    inline const DescribeDcdnWafUsageDataResponseBodyWafUsageData & wafUsageData() const { DARABONBA_PTR_GET_CONST(wafUsageData_, DescribeDcdnWafUsageDataResponseBodyWafUsageData) };
    inline DescribeDcdnWafUsageDataResponseBodyWafUsageData wafUsageData() { DARABONBA_PTR_GET(wafUsageData_, DescribeDcdnWafUsageDataResponseBodyWafUsageData) };
    inline DescribeDcdnWafUsageDataResponseBody& setWafUsageData(const DescribeDcdnWafUsageDataResponseBodyWafUsageData & wafUsageData) { DARABONBA_PTR_SET_VALUE(wafUsageData_, wafUsageData) };
    inline DescribeDcdnWafUsageDataResponseBody& setWafUsageData(DescribeDcdnWafUsageDataResponseBodyWafUsageData && wafUsageData) { DARABONBA_PTR_SET_RVALUE(wafUsageData_, wafUsageData) };


  protected:
    // The operation that you want to perform. Set the value to **DescribeDcdnWafUsageData**.
    std::shared_ptr<string> endTime_ = nullptr;
    // Specifies how query results are grouped. By default, this parameter is empty. Valid values:
    // 
    // *   domain: Query results are grouped by accelerated domain name.
    // *   An empty string: Query results are not grouped.
    std::shared_ptr<string> requestId_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> startTime_ = nullptr;
    // The number of monitored requests.
    std::shared_ptr<DescribeDcdnWafUsageDataResponseBodyWafUsageData> wafUsageData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
