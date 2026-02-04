// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHTTPCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHTTPCODEDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainHttpCodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DataPerInterval, dataPerInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DataPerInterval, dataPerInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainHttpCodeDataResponseBody() = default ;
    DescribeDcdnDomainHttpCodeDataResponseBody(const DescribeDcdnDomainHttpCodeDataResponseBody &) = default ;
    DescribeDcdnDomainHttpCodeDataResponseBody(DescribeDcdnDomainHttpCodeDataResponseBody &&) = default ;
    DescribeDcdnDomainHttpCodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainHttpCodeDataResponseBody() = default ;
    DescribeDcdnDomainHttpCodeDataResponseBody& operator=(const DescribeDcdnDomainHttpCodeDataResponseBody &) = default ;
    DescribeDcdnDomainHttpCodeDataResponseBody& operator=(DescribeDcdnDomainHttpCodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, DataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      DataPerInterval() = default ;
      DataPerInterval(const DataPerInterval &) = default ;
      DataPerInterval(DataPerInterval &&) = default ;
      DataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataPerInterval() = default ;
      DataPerInterval& operator=(const DataPerInterval &) = default ;
      DataPerInterval& operator=(DataPerInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(HttpCodeDataPerInterval, httpCodeDataPerInterval_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(HttpCodeDataPerInterval, httpCodeDataPerInterval_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        DataModule() = default ;
        DataModule(const DataModule &) = default ;
        DataModule(DataModule &&) = default ;
        DataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataModule() = default ;
        DataModule& operator=(const DataModule &) = default ;
        DataModule& operator=(DataModule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class HttpCodeDataPerInterval : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HttpCodeDataPerInterval& obj) { 
            DARABONBA_PTR_TO_JSON(HttpCodeDataModule, httpCodeDataModule_);
          };
          friend void from_json(const Darabonba::Json& j, HttpCodeDataPerInterval& obj) { 
            DARABONBA_PTR_FROM_JSON(HttpCodeDataModule, httpCodeDataModule_);
          };
          HttpCodeDataPerInterval() = default ;
          HttpCodeDataPerInterval(const HttpCodeDataPerInterval &) = default ;
          HttpCodeDataPerInterval(HttpCodeDataPerInterval &&) = default ;
          HttpCodeDataPerInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HttpCodeDataPerInterval() = default ;
          HttpCodeDataPerInterval& operator=(const HttpCodeDataPerInterval &) = default ;
          HttpCodeDataPerInterval& operator=(HttpCodeDataPerInterval &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class HttpCodeDataModule : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const HttpCodeDataModule& obj) { 
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Proportion, proportion_);
            };
            friend void from_json(const Darabonba::Json& j, HttpCodeDataModule& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Proportion, proportion_);
            };
            HttpCodeDataModule() = default ;
            HttpCodeDataModule(const HttpCodeDataModule &) = default ;
            HttpCodeDataModule(HttpCodeDataModule &&) = default ;
            HttpCodeDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~HttpCodeDataModule() = default ;
            HttpCodeDataModule& operator=(const HttpCodeDataModule &) = default ;
            HttpCodeDataModule& operator=(HttpCodeDataModule &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->proportion_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
            inline HttpCodeDataModule& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline float getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0.0) };
            inline HttpCodeDataModule& setCount(float count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // proportion Field Functions 
            bool hasProportion() const { return this->proportion_ != nullptr;};
            void deleteProportion() { this->proportion_ = nullptr;};
            inline float getProportion() const { DARABONBA_PTR_GET_DEFAULT(proportion_, 0.0) };
            inline HttpCodeDataModule& setProportion(float proportion) { DARABONBA_PTR_SET_VALUE(proportion_, proportion) };


          protected:
            // The HTTP status code returned.
            shared_ptr<int32_t> code_ {};
            // The count of each HTTP status code.
            shared_ptr<float> count_ {};
            // The proportion of the HTTP status code.
            shared_ptr<float> proportion_ {};
          };

          virtual bool empty() const override { return this->httpCodeDataModule_ == nullptr; };
          // httpCodeDataModule Field Functions 
          bool hasHttpCodeDataModule() const { return this->httpCodeDataModule_ != nullptr;};
          void deleteHttpCodeDataModule() { this->httpCodeDataModule_ = nullptr;};
          inline const vector<HttpCodeDataPerInterval::HttpCodeDataModule> & getHttpCodeDataModule() const { DARABONBA_PTR_GET_CONST(httpCodeDataModule_, vector<HttpCodeDataPerInterval::HttpCodeDataModule>) };
          inline vector<HttpCodeDataPerInterval::HttpCodeDataModule> getHttpCodeDataModule() { DARABONBA_PTR_GET(httpCodeDataModule_, vector<HttpCodeDataPerInterval::HttpCodeDataModule>) };
          inline HttpCodeDataPerInterval& setHttpCodeDataModule(const vector<HttpCodeDataPerInterval::HttpCodeDataModule> & httpCodeDataModule) { DARABONBA_PTR_SET_VALUE(httpCodeDataModule_, httpCodeDataModule) };
          inline HttpCodeDataPerInterval& setHttpCodeDataModule(vector<HttpCodeDataPerInterval::HttpCodeDataModule> && httpCodeDataModule) { DARABONBA_PTR_SET_RVALUE(httpCodeDataModule_, httpCodeDataModule) };


        protected:
          shared_ptr<vector<HttpCodeDataPerInterval::HttpCodeDataModule>> httpCodeDataModule_ {};
        };

        virtual bool empty() const override { return this->httpCodeDataPerInterval_ == nullptr
        && this->timeStamp_ == nullptr; };
        // httpCodeDataPerInterval Field Functions 
        bool hasHttpCodeDataPerInterval() const { return this->httpCodeDataPerInterval_ != nullptr;};
        void deleteHttpCodeDataPerInterval() { this->httpCodeDataPerInterval_ = nullptr;};
        inline const DataModule::HttpCodeDataPerInterval & getHttpCodeDataPerInterval() const { DARABONBA_PTR_GET_CONST(httpCodeDataPerInterval_, DataModule::HttpCodeDataPerInterval) };
        inline DataModule::HttpCodeDataPerInterval getHttpCodeDataPerInterval() { DARABONBA_PTR_GET(httpCodeDataPerInterval_, DataModule::HttpCodeDataPerInterval) };
        inline DataModule& setHttpCodeDataPerInterval(const DataModule::HttpCodeDataPerInterval & httpCodeDataPerInterval) { DARABONBA_PTR_SET_VALUE(httpCodeDataPerInterval_, httpCodeDataPerInterval) };
        inline DataModule& setHttpCodeDataPerInterval(DataModule::HttpCodeDataPerInterval && httpCodeDataPerInterval) { DARABONBA_PTR_SET_RVALUE(httpCodeDataPerInterval_, httpCodeDataPerInterval) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The proportions of the HTTP status codes.
        shared_ptr<DataModule::HttpCodeDataPerInterval> httpCodeDataPerInterval_ {};
        // The timestamp of the data returned.
        shared_ptr<string> timeStamp_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<DataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<DataPerInterval::DataModule>) };
      inline vector<DataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<DataPerInterval::DataModule>) };
      inline DataPerInterval& setDataModule(const vector<DataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline DataPerInterval& setDataModule(vector<DataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<DataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->dataPerInterval_ == nullptr && this->domainName_ == nullptr && this->endTime_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainHttpCodeDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // dataPerInterval Field Functions 
    bool hasDataPerInterval() const { return this->dataPerInterval_ != nullptr;};
    void deleteDataPerInterval() { this->dataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainHttpCodeDataResponseBody::DataPerInterval & getDataPerInterval() const { DARABONBA_PTR_GET_CONST(dataPerInterval_, DescribeDcdnDomainHttpCodeDataResponseBody::DataPerInterval) };
    inline DescribeDcdnDomainHttpCodeDataResponseBody::DataPerInterval getDataPerInterval() { DARABONBA_PTR_GET(dataPerInterval_, DescribeDcdnDomainHttpCodeDataResponseBody::DataPerInterval) };
    inline DescribeDcdnDomainHttpCodeDataResponseBody& setDataPerInterval(const DescribeDcdnDomainHttpCodeDataResponseBody::DataPerInterval & dataPerInterval) { DARABONBA_PTR_SET_VALUE(dataPerInterval_, dataPerInterval) };
    inline DescribeDcdnDomainHttpCodeDataResponseBody& setDataPerInterval(DescribeDcdnDomainHttpCodeDataResponseBody::DataPerInterval && dataPerInterval) { DARABONBA_PTR_SET_RVALUE(dataPerInterval_, dataPerInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainHttpCodeDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainHttpCodeDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainHttpCodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainHttpCodeDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The proportions of HTTP status codes at each time interval.
    shared_ptr<DescribeDcdnDomainHttpCodeDataResponseBody::DataPerInterval> dataPerInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
