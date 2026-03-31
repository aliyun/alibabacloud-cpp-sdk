// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYDATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUMSTORAGEMETRICSBYDATERESPONSEBODY_HPP_
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
  class SumStorageMetricsByDateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SumStorageMetricsByDateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SumStorageMetricsByDateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    SumStorageMetricsByDateResponseBody() = default ;
    SumStorageMetricsByDateResponseBody(const SumStorageMetricsByDateResponseBody &) = default ;
    SumStorageMetricsByDateResponseBody(SumStorageMetricsByDateResponseBody &&) = default ;
    SumStorageMetricsByDateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SumStorageMetricsByDateResponseBody() = default ;
    SumStorageMetricsByDateResponseBody& operator=(const SumStorageMetricsByDateResponseBody &) = default ;
    SumStorageMetricsByDateResponseBody& operator=(SumStorageMetricsByDateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(dateTime, dateTime_);
        DARABONBA_PTR_TO_JSON(itemStorageMetrics, itemStorageMetrics_);
        DARABONBA_PTR_TO_JSON(storageType, storageType_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
        DARABONBA_PTR_TO_JSON(usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(dateTime, dateTime_);
        DARABONBA_PTR_FROM_JSON(itemStorageMetrics, itemStorageMetrics_);
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
      class ItemStorageMetrics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ItemStorageMetrics& obj) { 
          DARABONBA_PTR_TO_JSON(itemName, itemName_);
          DARABONBA_PTR_TO_JSON(percentage, percentage_);
          DARABONBA_PTR_TO_JSON(usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, ItemStorageMetrics& obj) { 
          DARABONBA_PTR_FROM_JSON(itemName, itemName_);
          DARABONBA_PTR_FROM_JSON(percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(usage, usage_);
        };
        ItemStorageMetrics() = default ;
        ItemStorageMetrics(const ItemStorageMetrics &) = default ;
        ItemStorageMetrics(ItemStorageMetrics &&) = default ;
        ItemStorageMetrics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ItemStorageMetrics() = default ;
        ItemStorageMetrics& operator=(const ItemStorageMetrics &) = default ;
        ItemStorageMetrics& operator=(ItemStorageMetrics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->itemName_ == nullptr
        && this->percentage_ == nullptr && this->usage_ == nullptr; };
        // itemName Field Functions 
        bool hasItemName() const { return this->itemName_ != nullptr;};
        void deleteItemName() { this->itemName_ = nullptr;};
        inline string getItemName() const { DARABONBA_PTR_GET_DEFAULT(itemName_, "") };
        inline ItemStorageMetrics& setItemName(string itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline double getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0.0) };
        inline ItemStorageMetrics& setPercentage(double percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
        inline ItemStorageMetrics& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      protected:
        shared_ptr<string> itemName_ {};
        shared_ptr<double> percentage_ {};
        shared_ptr<string> usage_ {};
      };

      virtual bool empty() const override { return this->dateTime_ == nullptr
        && this->itemStorageMetrics_ == nullptr && this->storageType_ == nullptr && this->unit_ == nullptr && this->usage_ == nullptr; };
      // dateTime Field Functions 
      bool hasDateTime() const { return this->dateTime_ != nullptr;};
      void deleteDateTime() { this->dateTime_ = nullptr;};
      inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
      inline Data& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


      // itemStorageMetrics Field Functions 
      bool hasItemStorageMetrics() const { return this->itemStorageMetrics_ != nullptr;};
      void deleteItemStorageMetrics() { this->itemStorageMetrics_ = nullptr;};
      inline const vector<Data::ItemStorageMetrics> & getItemStorageMetrics() const { DARABONBA_PTR_GET_CONST(itemStorageMetrics_, vector<Data::ItemStorageMetrics>) };
      inline vector<Data::ItemStorageMetrics> getItemStorageMetrics() { DARABONBA_PTR_GET(itemStorageMetrics_, vector<Data::ItemStorageMetrics>) };
      inline Data& setItemStorageMetrics(const vector<Data::ItemStorageMetrics> & itemStorageMetrics) { DARABONBA_PTR_SET_VALUE(itemStorageMetrics_, itemStorageMetrics) };
      inline Data& setItemStorageMetrics(vector<Data::ItemStorageMetrics> && itemStorageMetrics) { DARABONBA_PTR_SET_RVALUE(itemStorageMetrics_, itemStorageMetrics) };


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
      inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
      inline Data& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


    protected:
      shared_ptr<string> dateTime_ {};
      shared_ptr<vector<Data::ItemStorageMetrics>> itemStorageMetrics_ {};
      shared_ptr<string> storageType_ {};
      shared_ptr<string> unit_ {};
      shared_ptr<string> usage_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<SumStorageMetricsByDateResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<SumStorageMetricsByDateResponseBody::Data>) };
    inline vector<SumStorageMetricsByDateResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<SumStorageMetricsByDateResponseBody::Data>) };
    inline SumStorageMetricsByDateResponseBody& setData(const vector<SumStorageMetricsByDateResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline SumStorageMetricsByDateResponseBody& setData(vector<SumStorageMetricsByDateResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline SumStorageMetricsByDateResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline SumStorageMetricsByDateResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline SumStorageMetricsByDateResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SumStorageMetricsByDateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<SumStorageMetricsByDateResponseBody::Data>> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
