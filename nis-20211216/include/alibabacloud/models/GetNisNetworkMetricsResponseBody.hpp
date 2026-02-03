// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNISNETWORKMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETNISNETWORKMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class GetNisNetworkMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNisNetworkMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNisNetworkMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetNisNetworkMetricsResponseBody() = default ;
    GetNisNetworkMetricsResponseBody(const GetNisNetworkMetricsResponseBody &) = default ;
    GetNisNetworkMetricsResponseBody(GetNisNetworkMetricsResponseBody &&) = default ;
    GetNisNetworkMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNisNetworkMetricsResponseBody() = default ;
    GetNisNetworkMetricsResponseBody& operator=(const GetNisNetworkMetricsResponseBody &) = default ;
    GetNisNetworkMetricsResponseBody& operator=(GetNisNetworkMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Metrics, metrics_);
        DARABONBA_PTR_TO_JSON(Unit, unit_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
        DARABONBA_PTR_FROM_JSON(Unit, unit_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Metrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Metrics& obj) { 
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Metrics& obj) { 
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Metrics() = default ;
        Metrics(const Metrics &) = default ;
        Metrics(Metrics &&) = default ;
        Metrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Metrics() = default ;
        Metrics& operator=(const Metrics &) = default ;
        Metrics& operator=(Metrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->timeStamp_ == nullptr
        && this->value_ == nullptr; };
        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline int64_t getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, 0L) };
        inline Metrics& setTimeStamp(int64_t timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
        inline Metrics& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<int64_t> timeStamp_ {};
        shared_ptr<double> value_ {};
      };

      virtual bool empty() const override { return this->metrics_ == nullptr
        && this->unit_ == nullptr; };
      // metrics Field Functions 
      bool hasMetrics() const { return this->metrics_ != nullptr;};
      void deleteMetrics() { this->metrics_ = nullptr;};
      inline const vector<Data::Metrics> & getMetrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<Data::Metrics>) };
      inline vector<Data::Metrics> getMetrics() { DARABONBA_PTR_GET(metrics_, vector<Data::Metrics>) };
      inline Data& setMetrics(const vector<Data::Metrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
      inline Data& setMetrics(vector<Data::Metrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Data& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


    protected:
      shared_ptr<vector<Data::Metrics>> metrics_ {};
      shared_ptr<string> unit_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetNisNetworkMetricsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetNisNetworkMetricsResponseBody::Data) };
    inline GetNisNetworkMetricsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetNisNetworkMetricsResponseBody::Data) };
    inline GetNisNetworkMetricsResponseBody& setData(const GetNisNetworkMetricsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetNisNetworkMetricsResponseBody& setData(GetNisNetworkMetricsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetNisNetworkMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetNisNetworkMetricsResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
