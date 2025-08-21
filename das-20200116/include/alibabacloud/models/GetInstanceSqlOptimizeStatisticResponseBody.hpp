// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCESQLOPTIMIZESTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCESQLOPTIMIZESTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceSqlOptimizeStatisticResponseBodyData.hpp>
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
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceSqlOptimizeStatisticResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceSqlOptimizeStatisticResponseBodyData) };
    inline GetInstanceSqlOptimizeStatisticResponseBodyData data() { DARABONBA_PTR_GET(data_, GetInstanceSqlOptimizeStatisticResponseBodyData) };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setData(const GetInstanceSqlOptimizeStatisticResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setData(GetInstanceSqlOptimizeStatisticResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetInstanceSqlOptimizeStatisticResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    std::shared_ptr<string> code_ = nullptr;
    // The details of the automatic SQL optimization events.
    std::shared_ptr<GetInstanceSqlOptimizeStatisticResponseBodyData> data_ = nullptr;
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
