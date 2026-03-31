// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGESUMMARYCOMPAREDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGESUMMARYCOMPAREDRESPONSEBODY_HPP_
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
  class GetStorageSummaryComparedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageSummaryComparedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageSummaryComparedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetStorageSummaryComparedResponseBody() = default ;
    GetStorageSummaryComparedResponseBody(const GetStorageSummaryComparedResponseBody &) = default ;
    GetStorageSummaryComparedResponseBody(GetStorageSummaryComparedResponseBody &&) = default ;
    GetStorageSummaryComparedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageSummaryComparedResponseBody() = default ;
    GetStorageSummaryComparedResponseBody& operator=(const GetStorageSummaryComparedResponseBody &) = default ;
    GetStorageSummaryComparedResponseBody& operator=(GetStorageSummaryComparedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(beginDate, beginDate_);
        DARABONBA_PTR_TO_JSON(endDate, endDate_);
        DARABONBA_PTR_TO_JSON(rate, rate_);
        DARABONBA_PTR_TO_JSON(unit, unit_);
        DARABONBA_PTR_TO_JSON(value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(beginDate, beginDate_);
        DARABONBA_PTR_FROM_JSON(endDate, endDate_);
        DARABONBA_PTR_FROM_JSON(rate, rate_);
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
      virtual bool empty() const override { return this->beginDate_ == nullptr
        && this->endDate_ == nullptr && this->rate_ == nullptr && this->unit_ == nullptr && this->value_ == nullptr; };
      // beginDate Field Functions 
      bool hasBeginDate() const { return this->beginDate_ != nullptr;};
      void deleteBeginDate() { this->beginDate_ = nullptr;};
      inline string getBeginDate() const { DARABONBA_PTR_GET_DEFAULT(beginDate_, "") };
      inline Data& setBeginDate(string beginDate) { DARABONBA_PTR_SET_VALUE(beginDate_, beginDate) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Data& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // rate Field Functions 
      bool hasRate() const { return this->rate_ != nullptr;};
      void deleteRate() { this->rate_ = nullptr;};
      inline const map<string, double> & getRate() const { DARABONBA_PTR_GET_CONST(rate_, map<string, double>) };
      inline map<string, double> getRate() { DARABONBA_PTR_GET(rate_, map<string, double>) };
      inline Data& setRate(const map<string, double> & rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };
      inline Data& setRate(map<string, double> && rate) { DARABONBA_PTR_SET_RVALUE(rate_, rate) };


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
      inline const map<string, double> & getValue() const { DARABONBA_PTR_GET_CONST(value_, map<string, double>) };
      inline map<string, double> getValue() { DARABONBA_PTR_GET(value_, map<string, double>) };
      inline Data& setValue(const map<string, double> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Data& setValue(map<string, double> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      shared_ptr<string> beginDate_ {};
      shared_ptr<string> endDate_ {};
      shared_ptr<map<string, double>> rate_ {};
      shared_ptr<map<string, string>> unit_ {};
      shared_ptr<map<string, double>> value_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMsg_ == nullptr && this->httpCode_ == nullptr && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStorageSummaryComparedResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStorageSummaryComparedResponseBody::Data) };
    inline GetStorageSummaryComparedResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStorageSummaryComparedResponseBody::Data) };
    inline GetStorageSummaryComparedResponseBody& setData(const GetStorageSummaryComparedResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStorageSummaryComparedResponseBody& setData(GetStorageSummaryComparedResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetStorageSummaryComparedResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetStorageSummaryComparedResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int32_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0) };
    inline GetStorageSummaryComparedResponseBody& setHttpCode(int32_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStorageSummaryComparedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetStorageSummaryComparedResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<string> errorMsg_ {};
    shared_ptr<int32_t> httpCode_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
