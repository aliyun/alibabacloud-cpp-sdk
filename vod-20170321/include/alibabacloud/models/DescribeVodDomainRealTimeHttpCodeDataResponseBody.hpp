// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEHTTPCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINREALTIMEHTTPCODEDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainRealTimeHttpCodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainRealTimeHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RealTimeHttpCodeData, realTimeHttpCodeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainRealTimeHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RealTimeHttpCodeData, realTimeHttpCodeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeVodDomainRealTimeHttpCodeDataResponseBody() = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBody(const DescribeVodDomainRealTimeHttpCodeDataResponseBody &) = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBody(DescribeVodDomainRealTimeHttpCodeDataResponseBody &&) = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainRealTimeHttpCodeDataResponseBody() = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBody& operator=(const DescribeVodDomainRealTimeHttpCodeDataResponseBody &) = default ;
    DescribeVodDomainRealTimeHttpCodeDataResponseBody& operator=(DescribeVodDomainRealTimeHttpCodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RealTimeHttpCodeData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RealTimeHttpCodeData& obj) { 
        DARABONBA_PTR_TO_JSON(UsageData, usageData_);
      };
      friend void from_json(const Darabonba::Json& j, RealTimeHttpCodeData& obj) { 
        DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
      };
      RealTimeHttpCodeData() = default ;
      RealTimeHttpCodeData(const RealTimeHttpCodeData &) = default ;
      RealTimeHttpCodeData(RealTimeHttpCodeData &&) = default ;
      RealTimeHttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RealTimeHttpCodeData() = default ;
      RealTimeHttpCodeData& operator=(const RealTimeHttpCodeData &) = default ;
      RealTimeHttpCodeData& operator=(RealTimeHttpCodeData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UsageData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UsageData& obj) { 
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, UsageData& obj) { 
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        class Value : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Value& obj) { 
            DARABONBA_PTR_TO_JSON(RealTimeCodeProportionData, realTimeCodeProportionData_);
          };
          friend void from_json(const Darabonba::Json& j, Value& obj) { 
            DARABONBA_PTR_FROM_JSON(RealTimeCodeProportionData, realTimeCodeProportionData_);
          };
          Value() = default ;
          Value(const Value &) = default ;
          Value(Value &&) = default ;
          Value(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Value() = default ;
          Value& operator=(const Value &) = default ;
          Value& operator=(Value &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RealTimeCodeProportionData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RealTimeCodeProportionData& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Proportion, proportion_);
            };
            friend void from_json(const Darabonba::Json& j, RealTimeCodeProportionData& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
            };
            RealTimeCodeProportionData() = default ;
            RealTimeCodeProportionData(const RealTimeCodeProportionData &) = default ;
            RealTimeCodeProportionData(RealTimeCodeProportionData &&) = default ;
            RealTimeCodeProportionData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RealTimeCodeProportionData() = default ;
            RealTimeCodeProportionData& operator=(const RealTimeCodeProportionData &) = default ;
            RealTimeCodeProportionData& operator=(RealTimeCodeProportionData &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->proportion_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline RealTimeCodeProportionData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
            inline RealTimeCodeProportionData& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // proportion Field Functions 
            bool hasProportion() const { return this->proportion_ != nullptr;};
            void deleteProportion() { this->proportion_ = nullptr;};
            inline string getProportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
            inline RealTimeCodeProportionData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


          protected:
            // The HTTP status code.
            shared_ptr<string> code_ {};
            // The number of the HTTP status codes.
            shared_ptr<string> count_ {};
            // The proportion of the HTTP status code in percentage.
            shared_ptr<string> proportion_ {};
          };

          virtual bool empty() const override { return this->realTimeCodeProportionData_ == nullptr; };
          // realTimeCodeProportionData Field Functions 
          bool hasRealTimeCodeProportionData() const { return this->realTimeCodeProportionData_ != nullptr;};
          void deleteRealTimeCodeProportionData() { this->realTimeCodeProportionData_ = nullptr;};
          inline const vector<Value::RealTimeCodeProportionData> & getRealTimeCodeProportionData() const { DARABONBA_PTR_GET_CONST(realTimeCodeProportionData_, vector<Value::RealTimeCodeProportionData>) };
          inline vector<Value::RealTimeCodeProportionData> getRealTimeCodeProportionData() { DARABONBA_PTR_GET(realTimeCodeProportionData_, vector<Value::RealTimeCodeProportionData>) };
          inline Value& setRealTimeCodeProportionData(const vector<Value::RealTimeCodeProportionData> & realTimeCodeProportionData) { DARABONBA_PTR_SET_VALUE(realTimeCodeProportionData_, realTimeCodeProportionData) };
          inline Value& setRealTimeCodeProportionData(vector<Value::RealTimeCodeProportionData> && realTimeCodeProportionData) { DARABONBA_PTR_SET_RVALUE(realTimeCodeProportionData_, realTimeCodeProportionData) };


        protected:
          shared_ptr<vector<Value::RealTimeCodeProportionData>> realTimeCodeProportionData_ {};
        };

        virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->value_ == nullptr; };
        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline UsageData& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline const UsageData::Value & getValue() const { DARABONBA_PTR_GET_CONST(value_, UsageData::Value) };
        inline UsageData::Value getValue() { DARABONBA_PTR_GET(value_, UsageData::Value) };
        inline UsageData& setValue(const UsageData::Value & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
        inline UsageData& setValue(UsageData::Value && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


      protected:
        // The timestamp of the data returned. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> timeStamp_ {};
        // The proportion of each HTTP status code is displayed in a data list.
        shared_ptr<UsageData::Value> value_ {};
      };

      virtual bool empty() const override { return this->usageData_ == nullptr; };
      // usageData Field Functions 
      bool hasUsageData() const { return this->usageData_ != nullptr;};
      void deleteUsageData() { this->usageData_ = nullptr;};
      inline const vector<RealTimeHttpCodeData::UsageData> & getUsageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<RealTimeHttpCodeData::UsageData>) };
      inline vector<RealTimeHttpCodeData::UsageData> getUsageData() { DARABONBA_PTR_GET(usageData_, vector<RealTimeHttpCodeData::UsageData>) };
      inline RealTimeHttpCodeData& setUsageData(const vector<RealTimeHttpCodeData::UsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
      inline RealTimeHttpCodeData& setUsageData(vector<RealTimeHttpCodeData::UsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


    protected:
      shared_ptr<vector<RealTimeHttpCodeData::UsageData>> usageData_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->realTimeHttpCodeData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // realTimeHttpCodeData Field Functions 
    bool hasRealTimeHttpCodeData() const { return this->realTimeHttpCodeData_ != nullptr;};
    void deleteRealTimeHttpCodeData() { this->realTimeHttpCodeData_ = nullptr;};
    inline const DescribeVodDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData & getRealTimeHttpCodeData() const { DARABONBA_PTR_GET_CONST(realTimeHttpCodeData_, DescribeVodDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData) };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData getRealTimeHttpCodeData() { DARABONBA_PTR_GET(realTimeHttpCodeData_, DescribeVodDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData) };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBody& setRealTimeHttpCodeData(const DescribeVodDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData & realTimeHttpCodeData) { DARABONBA_PTR_SET_VALUE(realTimeHttpCodeData_, realTimeHttpCodeData) };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBody& setRealTimeHttpCodeData(DescribeVodDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData && realTimeHttpCodeData) { DARABONBA_PTR_SET_RVALUE(realTimeHttpCodeData_, realTimeHttpCodeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeVodDomainRealTimeHttpCodeDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval at which data is returned. Unit: seconds.
    // 
    // The returned value varies based on the time range per query. Valid values: 60 (1 minute), 300 (5 minutes), and 3600 (1 hour). For more information, see the **Time granularity** section in the **API documentation**.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range.
    shared_ptr<string> endTime_ {};
    // The proportion of each HTTP status code in each time interval.
    shared_ptr<DescribeVodDomainRealTimeHttpCodeDataResponseBody::RealTimeHttpCodeData> realTimeHttpCodeData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
