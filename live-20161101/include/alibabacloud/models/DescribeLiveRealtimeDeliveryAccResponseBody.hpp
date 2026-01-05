// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEREALTIMEDELIVERYACCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEREALTIMEDELIVERYACCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRealtimeDeliveryAccResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRealtimeDeliveryAccResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RealTimeDeliveryAccData, realTimeDeliveryAccData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRealtimeDeliveryAccResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RealTimeDeliveryAccData, realTimeDeliveryAccData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveRealtimeDeliveryAccResponseBody() = default ;
    DescribeLiveRealtimeDeliveryAccResponseBody(const DescribeLiveRealtimeDeliveryAccResponseBody &) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBody(DescribeLiveRealtimeDeliveryAccResponseBody &&) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRealtimeDeliveryAccResponseBody() = default ;
    DescribeLiveRealtimeDeliveryAccResponseBody& operator=(const DescribeLiveRealtimeDeliveryAccResponseBody &) = default ;
    DescribeLiveRealtimeDeliveryAccResponseBody& operator=(DescribeLiveRealtimeDeliveryAccResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealTimeDeliveryAccData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealTimeDeliveryAccData& obj) { 
        DARABONBA_PTR_TO_JSON(AccData, accData_);
      };
      friend void from_json(const Darabonba::Json& j, RealTimeDeliveryAccData& obj) { 
        DARABONBA_PTR_FROM_JSON(AccData, accData_);
      };
      RealTimeDeliveryAccData() = default ;
      RealTimeDeliveryAccData(const RealTimeDeliveryAccData &) = default ;
      RealTimeDeliveryAccData(RealTimeDeliveryAccData &&) = default ;
      RealTimeDeliveryAccData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealTimeDeliveryAccData() = default ;
      RealTimeDeliveryAccData& operator=(const RealTimeDeliveryAccData &) = default ;
      RealTimeDeliveryAccData& operator=(RealTimeDeliveryAccData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AccData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AccData& obj) { 
          DARABONBA_PTR_TO_JSON(FailedNum, failedNum_);
          DARABONBA_PTR_TO_JSON(SuccessNum, successNum_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, AccData& obj) { 
          DARABONBA_PTR_FROM_JSON(FailedNum, failedNum_);
          DARABONBA_PTR_FROM_JSON(SuccessNum, successNum_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        AccData() = default ;
        AccData(const AccData &) = default ;
        AccData(AccData &&) = default ;
        AccData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AccData() = default ;
        AccData& operator=(const AccData &) = default ;
        AccData& operator=(AccData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->failedNum_ == nullptr
        && this->successNum_ == nullptr && this->timeStamp_ == nullptr; };
        // failedNum Field Functions 
        bool hasFailedNum() const { return this->failedNum_ != nullptr;};
        void deleteFailedNum() { this->failedNum_ = nullptr;};
        inline int32_t getFailedNum() const { DARABONBA_PTR_GET_DEFAULT(failedNum_, 0) };
        inline AccData& setFailedNum(int32_t failedNum) { DARABONBA_PTR_SET_VALUE(failedNum_, failedNum) };


        // successNum Field Functions 
        bool hasSuccessNum() const { return this->successNum_ != nullptr;};
        void deleteSuccessNum() { this->successNum_ = nullptr;};
        inline int32_t getSuccessNum() const { DARABONBA_PTR_GET_DEFAULT(successNum_, 0) };
        inline AccData& setSuccessNum(int32_t successNum) { DARABONBA_PTR_SET_VALUE(successNum_, successNum) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline AccData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The number of failed real-time log deliveries.
        shared_ptr<int32_t> failedNum_ {};
        // The number of successful real-time log deliveries.
        shared_ptr<int32_t> successNum_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->accData_ == nullptr; };
      // accData Field Functions 
      bool hasAccData() const { return this->accData_ != nullptr;};
      void deleteAccData() { this->accData_ = nullptr;};
      inline const vector<RealTimeDeliveryAccData::AccData> & getAccData() const { DARABONBA_PTR_GET_CONST(accData_, vector<RealTimeDeliveryAccData::AccData>) };
      inline vector<RealTimeDeliveryAccData::AccData> getAccData() { DARABONBA_PTR_GET(accData_, vector<RealTimeDeliveryAccData::AccData>) };
      inline RealTimeDeliveryAccData& setAccData(const vector<RealTimeDeliveryAccData::AccData> & accData) { DARABONBA_PTR_SET_VALUE(accData_, accData) };
      inline RealTimeDeliveryAccData& setAccData(vector<RealTimeDeliveryAccData::AccData> && accData) { DARABONBA_PTR_SET_RVALUE(accData_, accData) };


    protected:
      shared_ptr<vector<RealTimeDeliveryAccData::AccData>> accData_ {};
    };

    virtual bool empty() const override { return this->realTimeDeliveryAccData_ == nullptr
        && this->requestId_ == nullptr; };
    // realTimeDeliveryAccData Field Functions 
    bool hasRealTimeDeliveryAccData() const { return this->realTimeDeliveryAccData_ != nullptr;};
    void deleteRealTimeDeliveryAccData() { this->realTimeDeliveryAccData_ = nullptr;};
    inline const DescribeLiveRealtimeDeliveryAccResponseBody::RealTimeDeliveryAccData & getRealTimeDeliveryAccData() const { DARABONBA_PTR_GET_CONST(realTimeDeliveryAccData_, DescribeLiveRealtimeDeliveryAccResponseBody::RealTimeDeliveryAccData) };
    inline DescribeLiveRealtimeDeliveryAccResponseBody::RealTimeDeliveryAccData getRealTimeDeliveryAccData() { DARABONBA_PTR_GET(realTimeDeliveryAccData_, DescribeLiveRealtimeDeliveryAccResponseBody::RealTimeDeliveryAccData) };
    inline DescribeLiveRealtimeDeliveryAccResponseBody& setRealTimeDeliveryAccData(const DescribeLiveRealtimeDeliveryAccResponseBody::RealTimeDeliveryAccData & realTimeDeliveryAccData) { DARABONBA_PTR_SET_VALUE(realTimeDeliveryAccData_, realTimeDeliveryAccData) };
    inline DescribeLiveRealtimeDeliveryAccResponseBody& setRealTimeDeliveryAccData(DescribeLiveRealtimeDeliveryAccResponseBody::RealTimeDeliveryAccData && realTimeDeliveryAccData) { DARABONBA_PTR_SET_RVALUE(realTimeDeliveryAccData_, realTimeDeliveryAccData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRealtimeDeliveryAccResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about real-time log deliveries.
    shared_ptr<DescribeLiveRealtimeDeliveryAccResponseBody::RealTimeDeliveryAccData> realTimeDeliveryAccData_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
