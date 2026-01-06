// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESQLOPTIMIZESTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESQLOPTIMIZESTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceSqlOptimizeStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceSqlOptimizeStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceSqlOptimizeStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstanceSqlOptimizeStatisticResponseBody() = default ;
    GetInstanceSqlOptimizeStatisticResponseBody(const GetInstanceSqlOptimizeStatisticResponseBody &) = default ;
    GetInstanceSqlOptimizeStatisticResponseBody(GetInstanceSqlOptimizeStatisticResponseBody &&) = default ;
    GetInstanceSqlOptimizeStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceSqlOptimizeStatisticResponseBody() = default ;
    GetInstanceSqlOptimizeStatisticResponseBody& operator=(const GetInstanceSqlOptimizeStatisticResponseBody &) = default ;
    GetInstanceSqlOptimizeStatisticResponseBody& operator=(GetInstanceSqlOptimizeStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(count, count_);
        DARABONBA_PTR_TO_JSON(improvement, improvement_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(count, count_);
        DARABONBA_PTR_FROM_JSON(improvement, improvement_);
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
        && this->improvement_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Data& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // improvement Field Functions 
      bool hasImprovement() const { return this->improvement_ != nullptr;};
      void deleteImprovement() { this->improvement_ = nullptr;};
      inline double getImprovement() const { DARABONBA_PTR_GET_DEFAULT(improvement_, 0.0) };
      inline Data& setImprovement(double improvement) { DARABONBA_PTR_SET_VALUE(improvement_, improvement) };


    protected:
      // The total number of automatic SQL optimization events.
      shared_ptr<int32_t> count_ {};
      // The multiple of the maximum improvement for returned automatic SQL optimization events.
      shared_ptr<double> improvement_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceSqlOptimizeStatisticResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceSqlOptimizeStatisticResponseBody::Data) };
    inline GetInstanceSqlOptimizeStatisticResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceSqlOptimizeStatisticResponseBody::Data) };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setData(const GetInstanceSqlOptimizeStatisticResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setData(GetInstanceSqlOptimizeStatisticResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The details of the automatic SQL optimization events.
    shared_ptr<GetInstanceSqlOptimizeStatisticResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
