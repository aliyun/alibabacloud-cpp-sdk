// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeKvUsageDataResponseBodyKvUsageData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeKvUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKvUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(KvUsageData, kvUsageData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKvUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(KvUsageData, kvUsageData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeKvUsageDataResponseBody() = default ;
    DescribeKvUsageDataResponseBody(const DescribeKvUsageDataResponseBody &) = default ;
    DescribeKvUsageDataResponseBody(DescribeKvUsageDataResponseBody &&) = default ;
    DescribeKvUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKvUsageDataResponseBody() = default ;
    DescribeKvUsageDataResponseBody& operator=(const DescribeKvUsageDataResponseBody &) = default ;
    DescribeKvUsageDataResponseBody& operator=(DescribeKvUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->kvUsageData_ != nullptr && this->requestId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeKvUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // kvUsageData Field Functions 
    bool hasKvUsageData() const { return this->kvUsageData_ != nullptr;};
    void deleteKvUsageData() { this->kvUsageData_ = nullptr;};
    inline const vector<DescribeKvUsageDataResponseBodyKvUsageData> & kvUsageData() const { DARABONBA_PTR_GET_CONST(kvUsageData_, vector<DescribeKvUsageDataResponseBodyKvUsageData>) };
    inline vector<DescribeKvUsageDataResponseBodyKvUsageData> kvUsageData() { DARABONBA_PTR_GET(kvUsageData_, vector<DescribeKvUsageDataResponseBodyKvUsageData>) };
    inline DescribeKvUsageDataResponseBody& setKvUsageData(const vector<DescribeKvUsageDataResponseBodyKvUsageData> & kvUsageData) { DARABONBA_PTR_SET_VALUE(kvUsageData_, kvUsageData) };
    inline DescribeKvUsageDataResponseBody& setKvUsageData(vector<DescribeKvUsageDataResponseBodyKvUsageData> && kvUsageData) { DARABONBA_PTR_SET_RVALUE(kvUsageData_, kvUsageData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKvUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeKvUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range during which data was queried.
    std::shared_ptr<string> endTime_ = nullptr;
    // The usage details.
    std::shared_ptr<vector<DescribeKvUsageDataResponseBodyKvUsageData>> kvUsageData_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The beginning of the time range during which data was queried.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
