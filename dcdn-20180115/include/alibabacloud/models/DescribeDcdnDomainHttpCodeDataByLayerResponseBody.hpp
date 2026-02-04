// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHTTPCODEDATABYLAYERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINHTTPCODEDATABYLAYERRESPONSEBODY_HPP_
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
  class DescribeDcdnDomainHttpCodeDataByLayerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainHttpCodeDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_TO_JSON(HttpCodeDataInterval, httpCodeDataInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainHttpCodeDataByLayerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataInterval, dataInterval_);
      DARABONBA_PTR_FROM_JSON(HttpCodeDataInterval, httpCodeDataInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody() = default ;
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody(const DescribeDcdnDomainHttpCodeDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody(DescribeDcdnDomainHttpCodeDataByLayerResponseBody &&) = default ;
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainHttpCodeDataByLayerResponseBody() = default ;
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody& operator=(const DescribeDcdnDomainHttpCodeDataByLayerResponseBody &) = default ;
    DescribeDcdnDomainHttpCodeDataByLayerResponseBody& operator=(DescribeDcdnDomainHttpCodeDataByLayerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class HttpCodeDataInterval : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HttpCodeDataInterval& obj) { 
        DARABONBA_PTR_TO_JSON(DataModule, dataModule_);
      };
      friend void from_json(const Darabonba::Json& j, HttpCodeDataInterval& obj) { 
        DARABONBA_PTR_FROM_JSON(DataModule, dataModule_);
      };
      HttpCodeDataInterval() = default ;
      HttpCodeDataInterval(const HttpCodeDataInterval &) = default ;
      HttpCodeDataInterval(HttpCodeDataInterval &&) = default ;
      HttpCodeDataInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HttpCodeDataInterval() = default ;
      HttpCodeDataInterval& operator=(const HttpCodeDataInterval &) = default ;
      HttpCodeDataInterval& operator=(HttpCodeDataInterval &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataModule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataModule& obj) { 
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(TotalValue, totalValue_);
          DARABONBA_ANY_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DataModule& obj) { 
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(TotalValue, totalValue_);
          DARABONBA_ANY_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->totalValue_ == nullptr && this->value_ == nullptr; };
        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline DataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // totalValue Field Functions 
        bool hasTotalValue() const { return this->totalValue_ != nullptr;};
        void deleteTotalValue() { this->totalValue_ = nullptr;};
        inline string getTotalValue() const { DARABONBA_PTR_GET_DEFAULT(totalValue_, "") };
        inline DataModule& setTotalValue(string totalValue) { DARABONBA_PTR_SET_VALUE(totalValue_, totalValue) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline DataModule& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline DataModule& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // The timestamp of the returned data.
        shared_ptr<string> timeStamp_ {};
        // The total number of times that HTTP status codes were returned.
        shared_ptr<string> totalValue_ {};
        // The number of times that the HTTP status code was returned.
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->dataModule_ == nullptr; };
      // dataModule Field Functions 
      bool hasDataModule() const { return this->dataModule_ != nullptr;};
      void deleteDataModule() { this->dataModule_ = nullptr;};
      inline const vector<HttpCodeDataInterval::DataModule> & getDataModule() const { DARABONBA_PTR_GET_CONST(dataModule_, vector<HttpCodeDataInterval::DataModule>) };
      inline vector<HttpCodeDataInterval::DataModule> getDataModule() { DARABONBA_PTR_GET(dataModule_, vector<HttpCodeDataInterval::DataModule>) };
      inline HttpCodeDataInterval& setDataModule(const vector<HttpCodeDataInterval::DataModule> & dataModule) { DARABONBA_PTR_SET_VALUE(dataModule_, dataModule) };
      inline HttpCodeDataInterval& setDataModule(vector<HttpCodeDataInterval::DataModule> && dataModule) { DARABONBA_PTR_SET_RVALUE(dataModule_, dataModule) };


    protected:
      shared_ptr<vector<HttpCodeDataInterval::DataModule>> dataModule_ {};
    };

    virtual bool empty() const override { return this->dataInterval_ == nullptr
        && this->httpCodeDataInterval_ == nullptr && this->requestId_ == nullptr; };
    // dataInterval Field Functions 
    bool hasDataInterval() const { return this->dataInterval_ != nullptr;};
    void deleteDataInterval() { this->dataInterval_ = nullptr;};
    inline string getDataInterval() const { DARABONBA_PTR_GET_DEFAULT(dataInterval_, "") };
    inline DescribeDcdnDomainHttpCodeDataByLayerResponseBody& setDataInterval(string dataInterval) { DARABONBA_PTR_SET_VALUE(dataInterval_, dataInterval) };


    // httpCodeDataInterval Field Functions 
    bool hasHttpCodeDataInterval() const { return this->httpCodeDataInterval_ != nullptr;};
    void deleteHttpCodeDataInterval() { this->httpCodeDataInterval_ = nullptr;};
    inline const DescribeDcdnDomainHttpCodeDataByLayerResponseBody::HttpCodeDataInterval & getHttpCodeDataInterval() const { DARABONBA_PTR_GET_CONST(httpCodeDataInterval_, DescribeDcdnDomainHttpCodeDataByLayerResponseBody::HttpCodeDataInterval) };
    inline DescribeDcdnDomainHttpCodeDataByLayerResponseBody::HttpCodeDataInterval getHttpCodeDataInterval() { DARABONBA_PTR_GET(httpCodeDataInterval_, DescribeDcdnDomainHttpCodeDataByLayerResponseBody::HttpCodeDataInterval) };
    inline DescribeDcdnDomainHttpCodeDataByLayerResponseBody& setHttpCodeDataInterval(const DescribeDcdnDomainHttpCodeDataByLayerResponseBody::HttpCodeDataInterval & httpCodeDataInterval) { DARABONBA_PTR_SET_VALUE(httpCodeDataInterval_, httpCodeDataInterval) };
    inline DescribeDcdnDomainHttpCodeDataByLayerResponseBody& setHttpCodeDataInterval(DescribeDcdnDomainHttpCodeDataByLayerResponseBody::HttpCodeDataInterval && httpCodeDataInterval) { DARABONBA_PTR_SET_RVALUE(httpCodeDataInterval_, httpCodeDataInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainHttpCodeDataByLayerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The time interval between the data entries returned. Unit: seconds.
    shared_ptr<string> dataInterval_ {};
    // The distribution of HTTP status codes at each time interval.
    shared_ptr<DescribeDcdnDomainHttpCodeDataByLayerResponseBody::HttpCodeDataInterval> httpCodeDataInterval_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
