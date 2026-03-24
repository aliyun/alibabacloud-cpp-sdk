// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREALTIMEDELIVERYACCRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREALTIMEDELIVERYACCRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeRealtimeDeliveryAccResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRealtimeDeliveryAccResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ReatTimeDeliveryAccData, reatTimeDeliveryAccData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRealtimeDeliveryAccResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ReatTimeDeliveryAccData, reatTimeDeliveryAccData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRealtimeDeliveryAccResponseBody() = default ;
    DescribeRealtimeDeliveryAccResponseBody(const DescribeRealtimeDeliveryAccResponseBody &) = default ;
    DescribeRealtimeDeliveryAccResponseBody(DescribeRealtimeDeliveryAccResponseBody &&) = default ;
    DescribeRealtimeDeliveryAccResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRealtimeDeliveryAccResponseBody() = default ;
    DescribeRealtimeDeliveryAccResponseBody& operator=(const DescribeRealtimeDeliveryAccResponseBody &) = default ;
    DescribeRealtimeDeliveryAccResponseBody& operator=(DescribeRealtimeDeliveryAccResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReatTimeDeliveryAccData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReatTimeDeliveryAccData& obj) { 
        DARABONBA_PTR_TO_JSON(AccData, accData_);
      };
      friend void from_json(const Darabonba::Json& j, ReatTimeDeliveryAccData& obj) { 
        DARABONBA_PTR_FROM_JSON(AccData, accData_);
      };
      ReatTimeDeliveryAccData() = default ;
      ReatTimeDeliveryAccData(const ReatTimeDeliveryAccData &) = default ;
      ReatTimeDeliveryAccData(ReatTimeDeliveryAccData &&) = default ;
      ReatTimeDeliveryAccData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReatTimeDeliveryAccData() = default ;
      ReatTimeDeliveryAccData& operator=(const ReatTimeDeliveryAccData &) = default ;
      ReatTimeDeliveryAccData& operator=(ReatTimeDeliveryAccData &&) = default ;
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
        shared_ptr<int32_t> failedNum_ {};
        shared_ptr<int32_t> successNum_ {};
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->accData_ == nullptr; };
      // accData Field Functions 
      bool hasAccData() const { return this->accData_ != nullptr;};
      void deleteAccData() { this->accData_ = nullptr;};
      inline const vector<ReatTimeDeliveryAccData::AccData> & getAccData() const { DARABONBA_PTR_GET_CONST(accData_, vector<ReatTimeDeliveryAccData::AccData>) };
      inline vector<ReatTimeDeliveryAccData::AccData> getAccData() { DARABONBA_PTR_GET(accData_, vector<ReatTimeDeliveryAccData::AccData>) };
      inline ReatTimeDeliveryAccData& setAccData(const vector<ReatTimeDeliveryAccData::AccData> & accData) { DARABONBA_PTR_SET_VALUE(accData_, accData) };
      inline ReatTimeDeliveryAccData& setAccData(vector<ReatTimeDeliveryAccData::AccData> && accData) { DARABONBA_PTR_SET_RVALUE(accData_, accData) };


    protected:
      shared_ptr<vector<ReatTimeDeliveryAccData::AccData>> accData_ {};
    };

    virtual bool empty() const override { return this->reatTimeDeliveryAccData_ == nullptr
        && this->requestId_ == nullptr; };
    // reatTimeDeliveryAccData Field Functions 
    bool hasReatTimeDeliveryAccData() const { return this->reatTimeDeliveryAccData_ != nullptr;};
    void deleteReatTimeDeliveryAccData() { this->reatTimeDeliveryAccData_ = nullptr;};
    inline const DescribeRealtimeDeliveryAccResponseBody::ReatTimeDeliveryAccData & getReatTimeDeliveryAccData() const { DARABONBA_PTR_GET_CONST(reatTimeDeliveryAccData_, DescribeRealtimeDeliveryAccResponseBody::ReatTimeDeliveryAccData) };
    inline DescribeRealtimeDeliveryAccResponseBody::ReatTimeDeliveryAccData getReatTimeDeliveryAccData() { DARABONBA_PTR_GET(reatTimeDeliveryAccData_, DescribeRealtimeDeliveryAccResponseBody::ReatTimeDeliveryAccData) };
    inline DescribeRealtimeDeliveryAccResponseBody& setReatTimeDeliveryAccData(const DescribeRealtimeDeliveryAccResponseBody::ReatTimeDeliveryAccData & reatTimeDeliveryAccData) { DARABONBA_PTR_SET_VALUE(reatTimeDeliveryAccData_, reatTimeDeliveryAccData) };
    inline DescribeRealtimeDeliveryAccResponseBody& setReatTimeDeliveryAccData(DescribeRealtimeDeliveryAccResponseBody::ReatTimeDeliveryAccData && reatTimeDeliveryAccData) { DARABONBA_PTR_SET_RVALUE(reatTimeDeliveryAccData_, reatTimeDeliveryAccData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRealtimeDeliveryAccResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeRealtimeDeliveryAccResponseBody::ReatTimeDeliveryAccData> reatTimeDeliveryAccData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
