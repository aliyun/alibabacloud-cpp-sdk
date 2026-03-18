// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEAMOUNTSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEAMOUNTSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetStorageAmountSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageAmountSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageAmountSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetStorageAmountSummaryResponseBody() = default ;
    GetStorageAmountSummaryResponseBody(const GetStorageAmountSummaryResponseBody &) = default ;
    GetStorageAmountSummaryResponseBody(GetStorageAmountSummaryResponseBody &&) = default ;
    GetStorageAmountSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageAmountSummaryResponseBody() = default ;
    GetStorageAmountSummaryResponseBody& operator=(const GetStorageAmountSummaryResponseBody &) = default ;
    GetStorageAmountSummaryResponseBody& operator=(GetStorageAmountSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(date, date_);
        DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(date, date_);
        DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(unit, unit_);
        DARABONBA_PTR_FROM_JSON(value, value_);
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
      virtual bool empty() const override { return this->date_ == nullptr
        && this->timestamp_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Data& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline Data& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // unit Field Functions 
      bool hasUnit() const { return this->unit_ != nullptr;};
      void deleteUnit() { this->unit_ = nullptr;};
      inline const map<string, string> & getUnit() const { DARABONBA_PTR_GET_CONST(unit_, map<string, string>) };
      inline map<string, string> getUnit() { DARABONBA_PTR_GET(unit_, map<string, string>) };
      inline Data& setUnit(const map<string, string> & unit) { DARABONBA_PTR_SET_VALUE(unit_, unit) };
      inline Data& setUnit(map<string, string> && unit) { DARABONBA_PTR_SET_RVALUE(unit_, unit) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const map<string, int64_t> & getValue() const { DARABONBA_PTR_GET_CONST(value_, map<string, int64_t>) };
      inline map<string, int64_t> getValue() { DARABONBA_PTR_GET(value_, map<string, int64_t>) };
      inline Data& setValue(const map<string, int64_t> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Data& setValue(map<string, int64_t> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The date of the statistics.
      shared_ptr<string> date_ {};
      // The timestamp. This API does not return this parameter.
      shared_ptr<int64_t> timestamp_ {};
      // The unit of the storage metrics. This API does not return this parameter.
      shared_ptr<map<string, string>> unit_ {};
      // The storage metrics. The metrics include the following:
      // 
      // - projectAmount
      // - schemaAmount
      // - tableAmount
      // - partitionAmount
      shared_ptr<map<string, int64_t>> value_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStorageAmountSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStorageAmountSummaryResponseBody::Data) };
    inline GetStorageAmountSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStorageAmountSummaryResponseBody::Data) };
    inline GetStorageAmountSummaryResponseBody& setData(const GetStorageAmountSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStorageAmountSummaryResponseBody& setData(GetStorageAmountSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetStorageAmountSummaryResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetStorageAmountSummaryResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetStorageAmountSummaryResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStorageAmountSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetStorageAmountSummaryResponseBody::Data> data_ {};
    // The business error code or an empty value.
    // 
    // - If success is false, a business error code is returned.
    // - If success is true, an empty value is returned.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMsg_ {};
    // Indicates whether the business is successful. If this parameter is not empty and the value is not 200, the business processing failed.
    shared_ptr<int32_t> httpCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
