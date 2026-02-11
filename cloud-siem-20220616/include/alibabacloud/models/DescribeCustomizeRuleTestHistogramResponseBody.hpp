// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZERULETESTHISTOGRAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMIZERULETESTHISTOGRAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeCustomizeRuleTestHistogramResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomizeRuleTestHistogramResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomizeRuleTestHistogramResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeCustomizeRuleTestHistogramResponseBody() = default ;
    DescribeCustomizeRuleTestHistogramResponseBody(const DescribeCustomizeRuleTestHistogramResponseBody &) = default ;
    DescribeCustomizeRuleTestHistogramResponseBody(DescribeCustomizeRuleTestHistogramResponseBody &&) = default ;
    DescribeCustomizeRuleTestHistogramResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomizeRuleTestHistogramResponseBody() = default ;
    DescribeCustomizeRuleTestHistogramResponseBody& operator=(const DescribeCustomizeRuleTestHistogramResponseBody &) = default ;
    DescribeCustomizeRuleTestHistogramResponseBody& operator=(DescribeCustomizeRuleTestHistogramResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(From, from_);
        DARABONBA_PTR_TO_JSON(To, to_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(From, from_);
        DARABONBA_PTR_FROM_JSON(To, to_);
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
      virtual bool empty() const override { return this->count_ == nullptr
        && this->from_ == nullptr && this->to_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Data& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // from Field Functions 
      bool hasFrom() const { return this->from_ != nullptr;};
      void deleteFrom() { this->from_ = nullptr;};
      inline int64_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
      inline Data& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


      // to Field Functions 
      bool hasTo() const { return this->to_ != nullptr;};
      void deleteTo() { this->to_ = nullptr;};
      inline int64_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
      inline Data& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    protected:
      // The number of alerts that are generated in the query time range.
      shared_ptr<int64_t> count_ {};
      // The start of the time range for querying alerts. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> from_ {};
      // The end of the time range for querying alerts. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> to_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeCustomizeRuleTestHistogramResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeCustomizeRuleTestHistogramResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeCustomizeRuleTestHistogramResponseBody::Data>) };
    inline vector<DescribeCustomizeRuleTestHistogramResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeCustomizeRuleTestHistogramResponseBody::Data>) };
    inline DescribeCustomizeRuleTestHistogramResponseBody& setData(const vector<DescribeCustomizeRuleTestHistogramResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeCustomizeRuleTestHistogramResponseBody& setData(vector<DescribeCustomizeRuleTestHistogramResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCustomizeRuleTestHistogramResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCustomizeRuleTestHistogramResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCustomizeRuleTestHistogramResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The return value for the request.
    shared_ptr<vector<DescribeCustomizeRuleTestHistogramResponseBody::Data>> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
