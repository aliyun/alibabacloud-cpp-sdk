// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGGREGATEFUNCTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGGREGATEFUNCTIONRESPONSEBODY_HPP_
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
  class DescribeAggregateFunctionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAggregateFunctionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAggregateFunctionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeAggregateFunctionResponseBody() = default ;
    DescribeAggregateFunctionResponseBody(const DescribeAggregateFunctionResponseBody &) = default ;
    DescribeAggregateFunctionResponseBody(DescribeAggregateFunctionResponseBody &&) = default ;
    DescribeAggregateFunctionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAggregateFunctionResponseBody() = default ;
    DescribeAggregateFunctionResponseBody& operator=(const DescribeAggregateFunctionResponseBody &) = default ;
    DescribeAggregateFunctionResponseBody& operator=(DescribeAggregateFunctionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Function, function_);
        DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Function, function_);
        DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
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
      virtual bool empty() const override { return this->function_ == nullptr
        && this->functionName_ == nullptr; };
      // function Field Functions 
      bool hasFunction() const { return this->function_ != nullptr;};
      void deleteFunction() { this->function_ = nullptr;};
      inline string getFunction() const { DARABONBA_PTR_GET_DEFAULT(function_, "") };
      inline Data& setFunction(string function) { DARABONBA_PTR_SET_VALUE(function_, function) };


      // functionName Field Functions 
      bool hasFunctionName() const { return this->functionName_ != nullptr;};
      void deleteFunctionName() { this->functionName_ = nullptr;};
      inline string getFunctionName() const { DARABONBA_PTR_GET_DEFAULT(functionName_, "") };
      inline Data& setFunctionName(string functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };


    protected:
      // The aggregate function.
      shared_ptr<string> function_ {};
      // The display name of the aggregate function.
      shared_ptr<string> functionName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeAggregateFunctionResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeAggregateFunctionResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeAggregateFunctionResponseBody::Data>) };
    inline vector<DescribeAggregateFunctionResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeAggregateFunctionResponseBody::Data>) };
    inline DescribeAggregateFunctionResponseBody& setData(const vector<DescribeAggregateFunctionResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAggregateFunctionResponseBody& setData(vector<DescribeAggregateFunctionResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeAggregateFunctionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAggregateFunctionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeAggregateFunctionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<vector<DescribeAggregateFunctionResponseBody::Data>> data_ {};
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
