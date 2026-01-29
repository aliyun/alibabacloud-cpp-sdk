// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESELLERUSERALARMTHRESHOLDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESELLERUSERALARMTHRESHOLDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryResellerUserAlarmThresholdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResellerUserAlarmThresholdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResellerUserAlarmThresholdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryResellerUserAlarmThresholdResponseBody() = default ;
    QueryResellerUserAlarmThresholdResponseBody(const QueryResellerUserAlarmThresholdResponseBody &) = default ;
    QueryResellerUserAlarmThresholdResponseBody(QueryResellerUserAlarmThresholdResponseBody &&) = default ;
    QueryResellerUserAlarmThresholdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResellerUserAlarmThresholdResponseBody() = default ;
    QueryResellerUserAlarmThresholdResponseBody& operator=(const QueryResellerUserAlarmThresholdResponseBody &) = default ;
    QueryResellerUserAlarmThresholdResponseBody& operator=(QueryResellerUserAlarmThresholdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Denominator, denominator_);
        DARABONBA_PTR_TO_JSON(Numerator, numerator_);
        DARABONBA_PTR_TO_JSON(ThresholdAmount, thresholdAmount_);
        DARABONBA_PTR_TO_JSON(ThresholdType, thresholdType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Denominator, denominator_);
        DARABONBA_PTR_FROM_JSON(Numerator, numerator_);
        DARABONBA_PTR_FROM_JSON(ThresholdAmount, thresholdAmount_);
        DARABONBA_PTR_FROM_JSON(ThresholdType, thresholdType_);
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
      virtual bool empty() const override { return this->denominator_ == nullptr
        && this->numerator_ == nullptr && this->thresholdAmount_ == nullptr && this->thresholdType_ == nullptr; };
      // denominator Field Functions 
      bool hasDenominator() const { return this->denominator_ != nullptr;};
      void deleteDenominator() { this->denominator_ = nullptr;};
      inline int32_t getDenominator() const { DARABONBA_PTR_GET_DEFAULT(denominator_, 0) };
      inline Data& setDenominator(int32_t denominator) { DARABONBA_PTR_SET_VALUE(denominator_, denominator) };


      // numerator Field Functions 
      bool hasNumerator() const { return this->numerator_ != nullptr;};
      void deleteNumerator() { this->numerator_ = nullptr;};
      inline int32_t getNumerator() const { DARABONBA_PTR_GET_DEFAULT(numerator_, 0) };
      inline Data& setNumerator(int32_t numerator) { DARABONBA_PTR_SET_VALUE(numerator_, numerator) };


      // thresholdAmount Field Functions 
      bool hasThresholdAmount() const { return this->thresholdAmount_ != nullptr;};
      void deleteThresholdAmount() { this->thresholdAmount_ = nullptr;};
      inline string getThresholdAmount() const { DARABONBA_PTR_GET_DEFAULT(thresholdAmount_, "") };
      inline Data& setThresholdAmount(string thresholdAmount) { DARABONBA_PTR_SET_VALUE(thresholdAmount_, thresholdAmount) };


      // thresholdType Field Functions 
      bool hasThresholdType() const { return this->thresholdType_ != nullptr;};
      void deleteThresholdType() { this->thresholdType_ = nullptr;};
      inline int32_t getThresholdType() const { DARABONBA_PTR_GET_DEFAULT(thresholdType_, 0) };
      inline Data& setThresholdType(int32_t thresholdType) { DARABONBA_PTR_SET_VALUE(thresholdType_, thresholdType) };


    protected:
      shared_ptr<int32_t> denominator_ {};
      shared_ptr<int32_t> numerator_ {};
      shared_ptr<string> thresholdAmount_ {};
      shared_ptr<int32_t> thresholdType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryResellerUserAlarmThresholdResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline QueryResellerUserAlarmThresholdResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryResellerUserAlarmThresholdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryResellerUserAlarmThresholdResponseBody::Data>) };
    inline vector<QueryResellerUserAlarmThresholdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryResellerUserAlarmThresholdResponseBody::Data>) };
    inline QueryResellerUserAlarmThresholdResponseBody& setData(const vector<QueryResellerUserAlarmThresholdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryResellerUserAlarmThresholdResponseBody& setData(vector<QueryResellerUserAlarmThresholdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryResellerUserAlarmThresholdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryResellerUserAlarmThresholdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryResellerUserAlarmThresholdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> count_ {};
    shared_ptr<vector<QueryResellerUserAlarmThresholdResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
