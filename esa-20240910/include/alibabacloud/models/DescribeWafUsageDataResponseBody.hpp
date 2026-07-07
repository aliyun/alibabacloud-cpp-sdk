// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAFUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAFUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeWafUsageDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWafUsageDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UsageData, usageData_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWafUsageDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
    };
    DescribeWafUsageDataResponseBody() = default ;
    DescribeWafUsageDataResponseBody(const DescribeWafUsageDataResponseBody &) = default ;
    DescribeWafUsageDataResponseBody(DescribeWafUsageDataResponseBody &&) = default ;
    DescribeWafUsageDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWafUsageDataResponseBody() = default ;
    DescribeWafUsageDataResponseBody& operator=(const DescribeWafUsageDataResponseBody &) = default ;
    DescribeWafUsageDataResponseBody& operator=(DescribeWafUsageDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsageData& obj) { 
        DARABONBA_PTR_TO_JSON(AccessCount, accessCount_);
        DARABONBA_PTR_TO_JSON(BlockCount, blockCount_);
        DARABONBA_PTR_TO_JSON(ObserveCount, observeCount_);
        DARABONBA_PTR_TO_JSON(RecordName, recordName_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, UsageData& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessCount, accessCount_);
        DARABONBA_PTR_FROM_JSON(BlockCount, blockCount_);
        DARABONBA_PTR_FROM_JSON(ObserveCount, observeCount_);
        DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      UsageData() = default ;
      UsageData(const UsageData &) = default ;
      UsageData(UsageData &&) = default ;
      UsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsageData() = default ;
      UsageData& operator=(const UsageData &) = default ;
      UsageData& operator=(UsageData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessCount_ == nullptr
        && this->blockCount_ == nullptr && this->observeCount_ == nullptr && this->recordName_ == nullptr && this->timeStamp_ == nullptr; };
      // accessCount Field Functions 
      bool hasAccessCount() const { return this->accessCount_ != nullptr;};
      void deleteAccessCount() { this->accessCount_ = nullptr;};
      inline int64_t getAccessCount() const { DARABONBA_PTR_GET_DEFAULT(accessCount_, 0L) };
      inline UsageData& setAccessCount(int64_t accessCount) { DARABONBA_PTR_SET_VALUE(accessCount_, accessCount) };


      // blockCount Field Functions 
      bool hasBlockCount() const { return this->blockCount_ != nullptr;};
      void deleteBlockCount() { this->blockCount_ = nullptr;};
      inline int64_t getBlockCount() const { DARABONBA_PTR_GET_DEFAULT(blockCount_, 0L) };
      inline UsageData& setBlockCount(int64_t blockCount) { DARABONBA_PTR_SET_VALUE(blockCount_, blockCount) };


      // observeCount Field Functions 
      bool hasObserveCount() const { return this->observeCount_ != nullptr;};
      void deleteObserveCount() { this->observeCount_ = nullptr;};
      inline int64_t getObserveCount() const { DARABONBA_PTR_GET_DEFAULT(observeCount_, 0L) };
      inline UsageData& setObserveCount(int64_t observeCount) { DARABONBA_PTR_SET_VALUE(observeCount_, observeCount) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline UsageData& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline UsageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The number of requests with normal access.
      shared_ptr<int64_t> accessCount_ {};
      // The number of blocked requests.
      shared_ptr<int64_t> blockCount_ {};
      // The number of observed requests.
      shared_ptr<int64_t> observeCount_ {};
      // The domain record name.
      shared_ptr<string> recordName_ {};
      // The beginning of the time interval.
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->requestId_ == nullptr && this->startTime_ == nullptr && this->usageData_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeWafUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWafUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeWafUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // usageData Field Functions 
    bool hasUsageData() const { return this->usageData_ != nullptr;};
    void deleteUsageData() { this->usageData_ = nullptr;};
    inline const vector<DescribeWafUsageDataResponseBody::UsageData> & getUsageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<DescribeWafUsageDataResponseBody::UsageData>) };
    inline vector<DescribeWafUsageDataResponseBody::UsageData> getUsageData() { DARABONBA_PTR_GET(usageData_, vector<DescribeWafUsageDataResponseBody::UsageData>) };
    inline DescribeWafUsageDataResponseBody& setUsageData(const vector<DescribeWafUsageDataResponseBody::UsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
    inline DescribeWafUsageDataResponseBody& setUsageData(vector<DescribeWafUsageDataResponseBody::UsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


  protected:
    // The end of the time range for the returned data. The time is in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is in UTC+0.
    shared_ptr<string> endTime_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0.
    shared_ptr<string> startTime_ {};
    // The returned data.
    shared_ptr<vector<DescribeWafUsageDataResponseBody::UsageData>> usageData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
