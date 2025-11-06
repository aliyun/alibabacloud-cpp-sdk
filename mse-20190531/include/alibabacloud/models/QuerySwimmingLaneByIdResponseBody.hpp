// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSWIMMINGLANEBYIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSWIMMINGLANEBYIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySwimmingLaneByIdResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class QuerySwimmingLaneByIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySwimmingLaneByIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySwimmingLaneByIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySwimmingLaneByIdResponseBody() = default ;
    QuerySwimmingLaneByIdResponseBody(const QuerySwimmingLaneByIdResponseBody &) = default ;
    QuerySwimmingLaneByIdResponseBody(QuerySwimmingLaneByIdResponseBody &&) = default ;
    QuerySwimmingLaneByIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySwimmingLaneByIdResponseBody() = default ;
    QuerySwimmingLaneByIdResponseBody& operator=(const QuerySwimmingLaneByIdResponseBody &) = default ;
    QuerySwimmingLaneByIdResponseBody& operator=(QuerySwimmingLaneByIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->errorCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySwimmingLaneByIdResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, QuerySwimmingLaneByIdResponseBodyData) };
    inline QuerySwimmingLaneByIdResponseBodyData data() { DARABONBA_PTR_GET(data_, QuerySwimmingLaneByIdResponseBodyData) };
    inline QuerySwimmingLaneByIdResponseBody& setData(const QuerySwimmingLaneByIdResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySwimmingLaneByIdResponseBody& setData(QuerySwimmingLaneByIdResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QuerySwimmingLaneByIdResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySwimmingLaneByIdResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySwimmingLaneByIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySwimmingLaneByIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    std::shared_ptr<QuerySwimmingLaneByIdResponseBodyData> data_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
