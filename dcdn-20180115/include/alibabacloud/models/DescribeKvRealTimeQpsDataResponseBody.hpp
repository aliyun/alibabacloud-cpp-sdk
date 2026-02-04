// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVREALTIMEQPSDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVREALTIMEQPSDATARESPONSEBODY_HPP_
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
  class DescribeKvRealTimeQpsDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKvRealTimeQpsDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AggregateData, aggregateData_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(KvQpsData, kvQpsData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKvRealTimeQpsDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregateData, aggregateData_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(KvQpsData, kvQpsData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeKvRealTimeQpsDataResponseBody() = default ;
    DescribeKvRealTimeQpsDataResponseBody(const DescribeKvRealTimeQpsDataResponseBody &) = default ;
    DescribeKvRealTimeQpsDataResponseBody(DescribeKvRealTimeQpsDataResponseBody &&) = default ;
    DescribeKvRealTimeQpsDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKvRealTimeQpsDataResponseBody() = default ;
    DescribeKvRealTimeQpsDataResponseBody& operator=(const DescribeKvRealTimeQpsDataResponseBody &) = default ;
    DescribeKvRealTimeQpsDataResponseBody& operator=(DescribeKvRealTimeQpsDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KvQpsData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KvQpsData& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(KeyQps, keyQps_);
        DARABONBA_PTR_TO_JSON(KeySuccQps, keySuccQps_);
        DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_TO_JSON(Qps, qps_);
        DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      };
      friend void from_json(const Darabonba::Json& j, KvQpsData& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(KeyQps, keyQps_);
        DARABONBA_PTR_FROM_JSON(KeySuccQps, keySuccQps_);
        DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
        DARABONBA_PTR_FROM_JSON(Qps, qps_);
        DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      };
      KvQpsData() = default ;
      KvQpsData(const KvQpsData &) = default ;
      KvQpsData(KvQpsData &&) = default ;
      KvQpsData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KvQpsData() = default ;
      KvQpsData& operator=(const KvQpsData &) = default ;
      KvQpsData& operator=(KvQpsData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->keyQps_ == nullptr && this->keySuccQps_ == nullptr && this->namespaceId_ == nullptr && this->qps_ == nullptr && this->timeStamp_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline KvQpsData& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // keyQps Field Functions 
      bool hasKeyQps() const { return this->keyQps_ != nullptr;};
      void deleteKeyQps() { this->keyQps_ = nullptr;};
      inline int64_t getKeyQps() const { DARABONBA_PTR_GET_DEFAULT(keyQps_, 0L) };
      inline KvQpsData& setKeyQps(int64_t keyQps) { DARABONBA_PTR_SET_VALUE(keyQps_, keyQps) };


      // keySuccQps Field Functions 
      bool hasKeySuccQps() const { return this->keySuccQps_ != nullptr;};
      void deleteKeySuccQps() { this->keySuccQps_ = nullptr;};
      inline int64_t getKeySuccQps() const { DARABONBA_PTR_GET_DEFAULT(keySuccQps_, 0L) };
      inline KvQpsData& setKeySuccQps(int64_t keySuccQps) { DARABONBA_PTR_SET_VALUE(keySuccQps_, keySuccQps) };


      // namespaceId Field Functions 
      bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
      void deleteNamespaceId() { this->namespaceId_ = nullptr;};
      inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
      inline KvQpsData& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


      // qps Field Functions 
      bool hasQps() const { return this->qps_ != nullptr;};
      void deleteQps() { this->qps_ = nullptr;};
      inline int64_t getQps() const { DARABONBA_PTR_GET_DEFAULT(qps_, 0L) };
      inline KvQpsData& setQps(int64_t qps) { DARABONBA_PTR_SET_VALUE(qps_, qps) };


      // timeStamp Field Functions 
      bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
      void deleteTimeStamp() { this->timeStamp_ = nullptr;};
      inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
      inline KvQpsData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    protected:
      shared_ptr<string> accessType_ {};
      shared_ptr<int64_t> keyQps_ {};
      shared_ptr<int64_t> keySuccQps_ {};
      shared_ptr<string> namespaceId_ {};
      shared_ptr<int64_t> qps_ {};
      shared_ptr<string> timeStamp_ {};
    };

    class AggregateData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AggregateData& obj) { 
        DARABONBA_PTR_TO_JSON(Acc, acc_);
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(KeyAcc, keyAcc_);
        DARABONBA_PTR_TO_JSON(KeySuccAcc, keySuccAcc_);
      };
      friend void from_json(const Darabonba::Json& j, AggregateData& obj) { 
        DARABONBA_PTR_FROM_JSON(Acc, acc_);
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(KeyAcc, keyAcc_);
        DARABONBA_PTR_FROM_JSON(KeySuccAcc, keySuccAcc_);
      };
      AggregateData() = default ;
      AggregateData(const AggregateData &) = default ;
      AggregateData(AggregateData &&) = default ;
      AggregateData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AggregateData() = default ;
      AggregateData& operator=(const AggregateData &) = default ;
      AggregateData& operator=(AggregateData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acc_ == nullptr
        && this->accessType_ == nullptr && this->keyAcc_ == nullptr && this->keySuccAcc_ == nullptr; };
      // acc Field Functions 
      bool hasAcc() const { return this->acc_ != nullptr;};
      void deleteAcc() { this->acc_ = nullptr;};
      inline int64_t getAcc() const { DARABONBA_PTR_GET_DEFAULT(acc_, 0L) };
      inline AggregateData& setAcc(int64_t acc) { DARABONBA_PTR_SET_VALUE(acc_, acc) };


      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline AggregateData& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // keyAcc Field Functions 
      bool hasKeyAcc() const { return this->keyAcc_ != nullptr;};
      void deleteKeyAcc() { this->keyAcc_ = nullptr;};
      inline int64_t getKeyAcc() const { DARABONBA_PTR_GET_DEFAULT(keyAcc_, 0L) };
      inline AggregateData& setKeyAcc(int64_t keyAcc) { DARABONBA_PTR_SET_VALUE(keyAcc_, keyAcc) };


      // keySuccAcc Field Functions 
      bool hasKeySuccAcc() const { return this->keySuccAcc_ != nullptr;};
      void deleteKeySuccAcc() { this->keySuccAcc_ = nullptr;};
      inline int64_t getKeySuccAcc() const { DARABONBA_PTR_GET_DEFAULT(keySuccAcc_, 0L) };
      inline AggregateData& setKeySuccAcc(int64_t keySuccAcc) { DARABONBA_PTR_SET_VALUE(keySuccAcc_, keySuccAcc) };


    protected:
      shared_ptr<int64_t> acc_ {};
      shared_ptr<string> accessType_ {};
      shared_ptr<int64_t> keyAcc_ {};
      shared_ptr<int64_t> keySuccAcc_ {};
    };

    virtual bool empty() const override { return this->aggregateData_ == nullptr
        && this->endTime_ == nullptr && this->kvQpsData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // aggregateData Field Functions 
    bool hasAggregateData() const { return this->aggregateData_ != nullptr;};
    void deleteAggregateData() { this->aggregateData_ = nullptr;};
    inline const vector<DescribeKvRealTimeQpsDataResponseBody::AggregateData> & getAggregateData() const { DARABONBA_PTR_GET_CONST(aggregateData_, vector<DescribeKvRealTimeQpsDataResponseBody::AggregateData>) };
    inline vector<DescribeKvRealTimeQpsDataResponseBody::AggregateData> getAggregateData() { DARABONBA_PTR_GET(aggregateData_, vector<DescribeKvRealTimeQpsDataResponseBody::AggregateData>) };
    inline DescribeKvRealTimeQpsDataResponseBody& setAggregateData(const vector<DescribeKvRealTimeQpsDataResponseBody::AggregateData> & aggregateData) { DARABONBA_PTR_SET_VALUE(aggregateData_, aggregateData) };
    inline DescribeKvRealTimeQpsDataResponseBody& setAggregateData(vector<DescribeKvRealTimeQpsDataResponseBody::AggregateData> && aggregateData) { DARABONBA_PTR_SET_RVALUE(aggregateData_, aggregateData) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeKvRealTimeQpsDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // kvQpsData Field Functions 
    bool hasKvQpsData() const { return this->kvQpsData_ != nullptr;};
    void deleteKvQpsData() { this->kvQpsData_ = nullptr;};
    inline const vector<DescribeKvRealTimeQpsDataResponseBody::KvQpsData> & getKvQpsData() const { DARABONBA_PTR_GET_CONST(kvQpsData_, vector<DescribeKvRealTimeQpsDataResponseBody::KvQpsData>) };
    inline vector<DescribeKvRealTimeQpsDataResponseBody::KvQpsData> getKvQpsData() { DARABONBA_PTR_GET(kvQpsData_, vector<DescribeKvRealTimeQpsDataResponseBody::KvQpsData>) };
    inline DescribeKvRealTimeQpsDataResponseBody& setKvQpsData(const vector<DescribeKvRealTimeQpsDataResponseBody::KvQpsData> & kvQpsData) { DARABONBA_PTR_SET_VALUE(kvQpsData_, kvQpsData) };
    inline DescribeKvRealTimeQpsDataResponseBody& setKvQpsData(vector<DescribeKvRealTimeQpsDataResponseBody::KvQpsData> && kvQpsData) { DARABONBA_PTR_SET_RVALUE(kvQpsData_, kvQpsData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKvRealTimeQpsDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeKvRealTimeQpsDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<vector<DescribeKvRealTimeQpsDataResponseBody::AggregateData>> aggregateData_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<vector<DescribeKvRealTimeQpsDataResponseBody::KvQpsData>> kvQpsData_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
