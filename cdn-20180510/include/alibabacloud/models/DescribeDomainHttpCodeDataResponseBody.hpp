// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINHTTPCODEDATARESPONSEBODY_HPP_
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
  class DescribeDomainHttpCodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HttpCodeData, httpCodeData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HttpCodeData, httpCodeData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainHttpCodeDataResponseBody() = default ;
    DescribeDomainHttpCodeDataResponseBody(const DescribeDomainHttpCodeDataResponseBody &) = default ;
    DescribeDomainHttpCodeDataResponseBody(DescribeDomainHttpCodeDataResponseBody &&) = default ;
    DescribeDomainHttpCodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainHttpCodeDataResponseBody() = default ;
    DescribeDomainHttpCodeDataResponseBody& operator=(const DescribeDomainHttpCodeDataResponseBody &) = default ;
    DescribeDomainHttpCodeDataResponseBody& operator=(DescribeDomainHttpCodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HttpCodeData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HttpCodeData& obj) { 
        DARABONBA_PTR_TO_JSON(UsageData, usageData_);
      };
      friend void from_json(const Darabonba::Json& j, HttpCodeData& obj) { 
        DARABONBA_PTR_FROM_JSON(UsageData, usageData_);
      };
      HttpCodeData() = default ;
      HttpCodeData(const HttpCodeData &) = default ;
      HttpCodeData(HttpCodeData &&) = default ;
      HttpCodeData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HttpCodeData() = default ;
      HttpCodeData& operator=(const HttpCodeData &) = default ;
      HttpCodeData& operator=(HttpCodeData &&) = default ;
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
            DARABONBA_PTR_TO_JSON(CodeProportionData, codeProportionData_);
          };
          friend void from_json(const Darabonba::Json& j, Value& obj) { 
            DARABONBA_PTR_FROM_JSON(CodeProportionData, codeProportionData_);
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
          class CodeProportionData : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CodeProportionData& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Proportion, proportion_);
            };
            friend void from_json(const Darabonba::Json& j, CodeProportionData& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
            };
            CodeProportionData() = default ;
            CodeProportionData(const CodeProportionData &) = default ;
            CodeProportionData(CodeProportionData &&) = default ;
            CodeProportionData(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CodeProportionData() = default ;
            CodeProportionData& operator=(const CodeProportionData &) = default ;
            CodeProportionData& operator=(CodeProportionData &&) = default ;
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
            inline CodeProportionData& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
            inline CodeProportionData& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // proportion Field Functions 
            bool hasProportion() const { return this->proportion_ != nullptr;};
            void deleteProportion() { this->proportion_ = nullptr;};
            inline string getProportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, "") };
            inline CodeProportionData& setProportion(string proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


          protected:
            shared_ptr<string> code_ {};
            shared_ptr<string> count_ {};
            shared_ptr<string> proportion_ {};
          };

          virtual bool empty() const override { return this->codeProportionData_ == nullptr; };
          // codeProportionData Field Functions 
          bool hasCodeProportionData() const { return this->codeProportionData_ != nullptr;};
          void deleteCodeProportionData() { this->codeProportionData_ = nullptr;};
          inline const vector<Value::CodeProportionData> & getCodeProportionData() const { DARABONBA_PTR_GET_CONST(codeProportionData_, vector<Value::CodeProportionData>) };
          inline vector<Value::CodeProportionData> getCodeProportionData() { DARABONBA_PTR_GET(codeProportionData_, vector<Value::CodeProportionData>) };
          inline Value& setCodeProportionData(const vector<Value::CodeProportionData> & codeProportionData) { DARABONBA_PTR_SET_VALUE(codeProportionData_, codeProportionData) };
          inline Value& setCodeProportionData(vector<Value::CodeProportionData> && codeProportionData) { DARABONBA_PTR_SET_RVALUE(codeProportionData_, codeProportionData) };


        protected:
          shared_ptr<vector<Value::CodeProportionData>> codeProportionData_ {};
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
        shared_ptr<string> timeStamp_ {};
        shared_ptr<UsageData::Value> value_ {};
      };

      virtual bool empty() const override { return this->usageData_ == nullptr; };
      // usageData Field Functions 
      bool hasUsageData() const { return this->usageData_ != nullptr;};
      void deleteUsageData() { this->usageData_ = nullptr;};
      inline const vector<HttpCodeData::UsageData> & getUsageData() const { DARABONBA_PTR_GET_CONST(usageData_, vector<HttpCodeData::UsageData>) };
      inline vector<HttpCodeData::UsageData> getUsageData() { DARABONBA_PTR_GET(usageData_, vector<HttpCodeData::UsageData>) };
      inline HttpCodeData& setUsageData(const vector<HttpCodeData::UsageData> & usageData) { DARABONBA_PTR_SET_VALUE(usageData_, usageData) };
      inline HttpCodeData& setUsageData(vector<HttpCodeData::UsageData> && usageData) { DARABONBA_PTR_SET_RVALUE(usageData_, usageData) };


    protected:
      shared_ptr<vector<HttpCodeData::UsageData>> usageData_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->httpCodeData_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDomainHttpCodeDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainHttpCodeDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDomainHttpCodeDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // httpCodeData Field Functions 
    bool hasHttpCodeData() const { return this->httpCodeData_ != nullptr;};
    void deleteHttpCodeData() { this->httpCodeData_ = nullptr;};
    inline const DescribeDomainHttpCodeDataResponseBody::HttpCodeData & getHttpCodeData() const { DARABONBA_PTR_GET_CONST(httpCodeData_, DescribeDomainHttpCodeDataResponseBody::HttpCodeData) };
    inline DescribeDomainHttpCodeDataResponseBody::HttpCodeData getHttpCodeData() { DARABONBA_PTR_GET(httpCodeData_, DescribeDomainHttpCodeDataResponseBody::HttpCodeData) };
    inline DescribeDomainHttpCodeDataResponseBody& setHttpCodeData(const DescribeDomainHttpCodeDataResponseBody::HttpCodeData & httpCodeData) { DARABONBA_PTR_SET_VALUE(httpCodeData_, httpCodeData) };
    inline DescribeDomainHttpCodeDataResponseBody& setHttpCodeData(DescribeDomainHttpCodeDataResponseBody::HttpCodeData && httpCodeData) { DARABONBA_PTR_SET_RVALUE(httpCodeData_, httpCodeData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainHttpCodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDomainHttpCodeDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    shared_ptr<DescribeDomainHttpCodeDataResponseBody::HttpCodeData> httpCodeData_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The beginning of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
