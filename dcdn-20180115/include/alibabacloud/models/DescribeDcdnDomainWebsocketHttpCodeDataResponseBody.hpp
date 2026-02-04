// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETHTTPCODEDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINWEBSOCKETHTTPCODEDATARESPONSEBODY_HPP_
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
  class DescribeDcdnDomainWebsocketHttpCodeDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(HttpCodeDataPerInterval, httpCodeDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(HttpCodeDataPerInterval, httpCodeDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody() = default ;
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody(const DescribeDcdnDomainWebsocketHttpCodeDataResponseBody &) = default ;
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody(DescribeDcdnDomainWebsocketHttpCodeDataResponseBody &&) = default ;
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainWebsocketHttpCodeDataResponseBody() = default ;
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& operator=(const DescribeDcdnDomainWebsocketHttpCodeDataResponseBody &) = default ;
    DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& operator=(DescribeDcdnDomainWebsocketHttpCodeDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HttpCodeDataPerInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HttpCodeDataPerInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, HttpCodeDataPerInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
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
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(WebsocketHttpCode, websocketHttpCode_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(WebsocketHttpCode, websocketHttpCode_);
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
        class WebsocketHttpCode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const WebsocketHttpCode& obj) { 
            DARABONBA_PTR_TO_JSON(HttpCodeDataModule, httpCodeDataModule_);
          };
          friend void from_json(const Darabonba::Json& j, WebsocketHttpCode& obj) { 
            DARABONBA_PTR_FROM_JSON(HttpCodeDataModule, httpCodeDataModule_);
          };
          WebsocketHttpCode() = default ;
          WebsocketHttpCode(const WebsocketHttpCode &) = default ;
          WebsocketHttpCode(WebsocketHttpCode &&) = default ;
          WebsocketHttpCode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~WebsocketHttpCode() = default ;
          WebsocketHttpCode& operator=(const WebsocketHttpCode &) = default ;
          WebsocketHttpCode& operator=(WebsocketHttpCode &&) = default ;
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
            // The total number of entries returned.
            shared_ptr<float> count_ {};
            // The proportion of the HTTP status code.
            shared_ptr<float> proportion_ {};
          };

          virtual bool empty() const override { return this->httpCodeDataModule_ == nullptr; };
          // httpCodeDataModule Field Functions 
          bool hasHttpCodeDataModule() const { return this->httpCodeDataModule_ != nullptr;};
          void deleteHttpCodeDataModule() { this->httpCodeDataModule_ = nullptr;};
          inline const vector<WebsocketHttpCode::HttpCodeDataModule> & getHttpCodeDataModule() const { DARABONBA_PTR_GET_CONST(httpCodeDataModule_, vector<WebsocketHttpCode::HttpCodeDataModule>) };
          inline vector<WebsocketHttpCode::HttpCodeDataModule> getHttpCodeDataModule() { DARABONBA_PTR_GET(httpCodeDataModule_, vector<WebsocketHttpCode::HttpCodeDataModule>) };
          inline WebsocketHttpCode& setHttpCodeDataModule(const vector<WebsocketHttpCode::HttpCodeDataModule> & httpCodeDataModule) { DARABONBA_PTR_SET_VALUE(httpCodeDataModule_, httpCodeDataModule) };
          inline WebsocketHttpCode& setHttpCodeDataModule(vector<WebsocketHttpCode::HttpCodeDataModule> && httpCodeDataModule) { DARABONBA_PTR_SET_RVALUE(httpCodeDataModule_, httpCodeDataModule) };


        protected:
          shared_ptr<vector<WebsocketHttpCode::HttpCodeDataModule>> httpCodeDataModule_ {};
        };

        virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->websocketHttpCode_ == nullptr; };
        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // websocketHttpCode Field Functions 
        bool hasWebsocketHttpCode() const { return this->websocketHttpCode_ != nullptr;};
        void deleteWebsocketHttpCode() { this->websocketHttpCode_ = nullptr;};
        inline const DataModule::WebsocketHttpCode & getWebsocketHttpCode() const { DARABONBA_PTR_GET_CONST(websocketHttpCode_, DataModule::WebsocketHttpCode) };
        inline DataModule::WebsocketHttpCode getWebsocketHttpCode() { DARABONBA_PTR_GET(websocketHttpCode_, DataModule::WebsocketHttpCode) };
        inline DataModule& setWebsocketHttpCode(const DataModule::WebsocketHttpCode & websocketHttpCode) { DARABONBA_PTR_SET_VALUE(websocketHttpCode_, websocketHttpCode) };
        inline DataModule& setWebsocketHttpCode(DataModule::WebsocketHttpCode && websocketHttpCode) { DARABONBA_PTR_SET_RVALUE(websocketHttpCode_, websocketHttpCode) };


      protected:
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
        // The proportions of the HTTP status codes.
        shared_ptr<DataModule::WebsocketHttpCode> websocketHttpCode_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<HttpCodeDataPerInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<HttpCodeDataPerInterval::DataModule>) };
      inline vector<HttpCodeDataPerInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<HttpCodeDataPerInterval::DataModule>) };
      inline HttpCodeDataPerInterval& setDataModule(const vector<HttpCodeDataPerInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline HttpCodeDataPerInterval& setDataModule(vector<HttpCodeDataPerInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<HttpCodeDataPerInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->httpCodeDataPerInterval_ == nullptr && this->requestId_ == nullptr && this->startTime_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // httpCodeDataPerInterval Field Functions 
    bool hasHttpCodeDataPerInterval() const { return this->httpCodeDataPerInterval_ != nullptr;};
    void deleteHttpCodeDataPerInterval() { this->httpCodeDataPerInterval_ = nullptr;};
    inline const DescribeDcdnDomainWebsocketHttpCodeDataResponseBody::HttpCodeDataPerInterval & getHttpCodeDataPerInterval() const { DARABONBA_PTR_GET_CONST(httpCodeDataPerInterval_, DescribeDcdnDomainWebsocketHttpCodeDataResponseBody::HttpCodeDataPerInterval) };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody::HttpCodeDataPerInterval getHttpCodeDataPerInterval() { DARABONBA_PTR_GET(httpCodeDataPerInterval_, DescribeDcdnDomainWebsocketHttpCodeDataResponseBody::HttpCodeDataPerInterval) };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setHttpCodeDataPerInterval(const DescribeDcdnDomainWebsocketHttpCodeDataResponseBody::HttpCodeDataPerInterval & httpCodeDataPerInterval) { DARABONBA_PTR_SET_VALUE(httpCodeDataPerInterval_, httpCodeDataPerInterval) };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setHttpCodeDataPerInterval(DescribeDcdnDomainWebsocketHttpCodeDataResponseBody::HttpCodeDataPerInterval && httpCodeDataPerInterval) { DARABONBA_PTR_SET_RVALUE(httpCodeDataPerInterval_, httpCodeDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDcdnDomainWebsocketHttpCodeDataResponseBody& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The accelerated domain name.
    shared_ptr<string> domainName_ {};
    // The end of the time range during which data was queried.
    shared_ptr<string> endTime_ {};
    // The HTTP status code.
    shared_ptr<DescribeDcdnDomainWebsocketHttpCodeDataResponseBody::HttpCodeDataPerInterval> httpCodeDataPerInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The start of the time range during which data was queried.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
