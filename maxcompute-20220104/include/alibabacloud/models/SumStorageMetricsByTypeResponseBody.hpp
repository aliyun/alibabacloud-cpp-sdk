// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class SumStorageMetricsByTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumStorageMetricsByTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SumStorageMetricsByTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SumStorageMetricsByTypeResponseBody() = default ;
    SumStorageMetricsByTypeResponseBody(const SumStorageMetricsByTypeResponseBody &) = default ;
    SumStorageMetricsByTypeResponseBody(SumStorageMetricsByTypeResponseBody &&) = default ;
    SumStorageMetricsByTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumStorageMetricsByTypeResponseBody() = default ;
    SumStorageMetricsByTypeResponseBody& operator=(const SumStorageMetricsByTypeResponseBody &) = default ;
    SumStorageMetricsByTypeResponseBody& operator=(SumStorageMetricsByTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(dailyStorageMetrics, dailyStorageMetrics_);
        DARABONBA_PTR_TO_JSON(storageType, storageType_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
        DARABONBA_PTR_TO_JSON(usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(dailyStorageMetrics, dailyStorageMetrics_);
        DARABONBA_PTR_FROM_JSON(storageType, storageType_);
        DARABONBA_PTR_FROM_JSON(unit, unit_);
        DARABONBA_PTR_FROM_JSON(usage, usage_);
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
      class DailyStorageMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DailyStorageMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(dateTime, dateTime_);
          DARABONBA_PTR_TO_JSON(percentage, percentage_);
          DARABONBA_PTR_TO_JSON(storageType, storageType_);
          DARABONBA_PTR_TO_JSON(unit, unit_);
          DARABONBA_PTR_TO_JSON(usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, DailyStorageMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(dateTime, dateTime_);
          DARABONBA_PTR_FROM_JSON(percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(storageType, storageType_);
          DARABONBA_PTR_FROM_JSON(unit, unit_);
          DARABONBA_PTR_FROM_JSON(usage, usage_);
        };
        DailyStorageMetrics() = default ;
        DailyStorageMetrics(const DailyStorageMetrics &) = default ;
        DailyStorageMetrics(DailyStorageMetrics &&) = default ;
        DailyStorageMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DailyStorageMetrics() = default ;
        DailyStorageMetrics& operator=(const DailyStorageMetrics &) = default ;
        DailyStorageMetrics& operator=(DailyStorageMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dateTime_ == nullptr
        && this->percentage_ == nullptr && this->storageType_ == nullptr && this->unit_ == nullptr && this->usage_ == nullptr; };
        // dateTime Field Functions 
        bool hasDateTime() const { return this->dateTime_ != nullptr;};
        void deleteDateTime() { this->dateTime_ = nullptr;};
        inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
        inline DailyStorageMetrics& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline double getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0.0) };
        inline DailyStorageMetrics& setPercentage(double percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline DailyStorageMetrics& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // unit Field Functions 
        bool hasUnit() const { return this->unit_ != nullptr;};
        void deleteUnit() { this->unit_ = nullptr;};
        inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
        inline DailyStorageMetrics& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline double getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0.0) };
        inline DailyStorageMetrics& setUsage(double usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      protected:
        shared_ptr<string> dateTime_ {};
        shared_ptr<double> percentage_ {};
        shared_ptr<string> storageType_ {};
        shared_ptr<string> unit_ {};
        shared_ptr<double> usage_ {};
      };

      virtual bool empty() const override { return this->dailyStorageMetrics_ == nullptr
        && this->storageType_ == nullptr && this->unit_ == nullptr && this->usage_ == nullptr; };
      // dailyStorageMetrics Field Functions 
      bool hasDailyStorageMetrics() const { return this->dailyStorageMetrics_ != nullptr;};
      void deleteDailyStorageMetrics() { this->dailyStorageMetrics_ = nullptr;};
      inline const vector<Data::DailyStorageMetrics> & getDailyStorageMetrics() const { DARABONBA_PTR_GET_CONST(dailyStorageMetrics_, vector<Data::DailyStorageMetrics>) };
      inline vector<Data::DailyStorageMetrics> getDailyStorageMetrics() { DARABONBA_PTR_GET(dailyStorageMetrics_, vector<Data::DailyStorageMetrics>) };
      inline Data& setDailyStorageMetrics(const vector<Data::DailyStorageMetrics> & dailyStorageMetrics) { DARABONBA_PTR_SET_VALUE(dailyStorageMetrics_, dailyStorageMetrics) };
      inline Data& setDailyStorageMetrics(vector<Data::DailyStorageMetrics> && dailyStorageMetrics) { DARABONBA_PTR_SET_RVALUE(dailyStorageMetrics_, dailyStorageMetrics) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline Data& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline string getUnit() const { DARABONBA_PTR_GET_DEFAULT(unit_, "") };
      inline Data& setUnit(string unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };


      // usage Field Functions 
      bool hasUsage() const { return this->usage_ != nullptr;};
      void deleteUsage() { this->usage_ = nullptr;};
      inline double getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0.0) };
      inline Data& setUsage(double usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      shared_ptr<vector<Data::DailyStorageMetrics>> dailyStorageMetrics_ {};
      shared_ptr<string> storageType_ {};
      shared_ptr<string> unit_ {};
      shared_ptr<double> usage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SumStorageMetricsByTypeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<SumStorageMetricsByTypeResponseBody::Data>) };
    inline vector<SumStorageMetricsByTypeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<SumStorageMetricsByTypeResponseBody::Data>) };
    inline SumStorageMetricsByTypeResponseBody& setData(const vector<SumStorageMetricsByTypeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SumStorageMetricsByTypeResponseBody& setData(vector<SumStorageMetricsByTypeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline SumStorageMetricsByTypeResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SumStorageMetricsByTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<SumStorageMetricsByTypeResponseBody::Data>> data_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
