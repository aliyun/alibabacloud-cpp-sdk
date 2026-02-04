// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVUSAGEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVUSAGEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class KvUsageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KvUsageData& obj) { 
        DARABONBA_PTR_TO_JSON(Acc, acc_);
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, KvUsageData& obj) { 
        DARABONBA_PTR_FROM_JSON(Acc, acc_);
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      KvUsageData() = default ;
      KvUsageData(const KvUsageData &) = default ;
      KvUsageData(KvUsageData &&) = default ;
      KvUsageData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KvUsageData() = default ;
      KvUsageData& operator=(const KvUsageData &) = default ;
      KvUsageData& operator=(KvUsageData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acc_ == nullptr
        && this->accessType_ == nullptr && this->namespaceId_ == nullptr && this->timeStamp_ == nullptr; };
      // acc Field Functions 
      bool hasAcc() const { return this->acc_ != nullptr;};
      void deleteAcc() { this->acc_ = nullptr;};
      inline int64_t getAcc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0L) };
      inline KvUsageData& setAcc(int64_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline KvUsageData& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline KvUsageData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline KvUsageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      // The number of visits.
      shared_ptr<int64_t> acc_ {};
      // The request method. This parameter is available only when the **SplitBy** parameter is set to **type**.
      shared_ptr<string> accessType_ {};
      // The namespace ID. This parameter is available only when the **SplitBy** parameter is set to **namespace**.
      shared_ptr<string> namespaceId_ {};
      // The timestamp of the data returned.
      shared_ptr<string> timeStamp_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->kvUsageData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeKvUsageDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // kvUsageData Field Functions 
    bool hasKvUsageData() const { return this->kvUsageData_ != nullptr;};
    void deleteKvUsageData() { this->kvUsageData_ = nullptr;};
    inline const vector<DescribeKvUsageDataResponseBody::KvUsageData> & getKvUsageData() const { DARABONBA_PTR_GET_CONST(kvUsageData_, vector<DescribeKvUsageDataResponseBody::KvUsageData>) };
    inline vector<DescribeKvUsageDataResponseBody::KvUsageData> getKvUsageData() { DARABONBA_PTR_GET(kvUsageData_, vector<DescribeKvUsageDataResponseBody::KvUsageData>) };
    inline DescribeKvUsageDataResponseBody& setKvUsageData(const vector<DescribeKvUsageDataResponseBody::KvUsageData> & kvUsageData) { DARABONBA_PTR_SET_VALUE(kvUsageData_, kvUsageData) };
    inline DescribeKvUsageDataResponseBody& setKvUsageData(vector<DescribeKvUsageDataResponseBody::KvUsageData> && kvUsageData) { DARABONBA_PTR_SET_RVALUE(kvUsageData_, kvUsageData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKvUsageDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeKvUsageDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The usage details.
    shared_ptr<vector<DescribeKvUsageDataResponseBody::KvUsageData>> kvUsageData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
