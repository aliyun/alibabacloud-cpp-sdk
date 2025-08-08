// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXECUTEOPERATIONRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXECUTEOPERATIONRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetExecuteOperationResultResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetExecuteOperationResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExecuteOperationResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetExecuteOperationResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetExecuteOperationResultResponseBody() = default ;
    GetExecuteOperationResultResponseBody(const GetExecuteOperationResultResponseBody &) = default ;
    GetExecuteOperationResultResponseBody(GetExecuteOperationResultResponseBody &&) = default ;
    GetExecuteOperationResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExecuteOperationResultResponseBody() = default ;
    GetExecuteOperationResultResponseBody& operator=(const GetExecuteOperationResultResponseBody &) = default ;
    GetExecuteOperationResultResponseBody& operator=(GetExecuteOperationResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetExecuteOperationResultResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetExecuteOperationResultResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, GetExecuteOperationResultResponseBodyData) };
    inline GetExecuteOperationResultResponseBodyData data() { DARABONBA_PTR_GET(data_, GetExecuteOperationResultResponseBodyData) };
    inline GetExecuteOperationResultResponseBody& setData(const GetExecuteOperationResultResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetExecuteOperationResultResponseBody& setData(GetExecuteOperationResultResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetExecuteOperationResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExecuteOperationResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code. A value of 200 indicates that the request is successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The detailed result of the queried operation.
    std::shared_ptr<GetExecuteOperationResultResponseBodyData> data_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
