// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BOOKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BookResponseBodyData.hpp>
#include <alibabacloud/models/BookResponseBodyErrorData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(error_code, errorCode_);
      DARABONBA_PTR_TO_JSON(error_data, errorData_);
      DARABONBA_PTR_TO_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, BookResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(error_code, errorCode_);
      DARABONBA_PTR_FROM_JSON(error_data, errorData_);
      DARABONBA_PTR_FROM_JSON(error_msg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    BookResponseBody() = default ;
    BookResponseBody(const BookResponseBody &) = default ;
    BookResponseBody(BookResponseBody &&) = default ;
    BookResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookResponseBody() = default ;
    BookResponseBody& operator=(const BookResponseBody &) = default ;
    BookResponseBody& operator=(BookResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->data_ == nullptr && return this->errorCode_ == nullptr && return this->errorData_ == nullptr && return this->errorMsg_ == nullptr && return this->status_ == nullptr
        && return this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BookResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const BookResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, BookResponseBodyData) };
    inline BookResponseBodyData data() { DARABONBA_PTR_GET(data_, BookResponseBodyData) };
    inline BookResponseBody& setData(const BookResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BookResponseBody& setData(BookResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline BookResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorData Field Functions 
    bool hasErrorData() const { return this->errorData_ != nullptr;};
    void deleteErrorData() { this->errorData_ = nullptr;};
    inline const BookResponseBodyErrorData & errorData() const { DARABONBA_PTR_GET_CONST(errorData_, BookResponseBodyErrorData) };
    inline BookResponseBodyErrorData errorData() { DARABONBA_PTR_GET(errorData_, BookResponseBodyErrorData) };
    inline BookResponseBody& setErrorData(const BookResponseBodyErrorData & errorData) { DARABONBA_PTR_SET_VALUE(errorData_, errorData) };
    inline BookResponseBody& setErrorData(BookResponseBodyErrorData && errorData) { DARABONBA_PTR_SET_RVALUE(errorData_, errorData) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline BookResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline BookResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BookResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // request ID
    std::shared_ptr<string> requestId_ = nullptr;
    // data
    std::shared_ptr<BookResponseBodyData> data_ = nullptr;
    // error code
    std::shared_ptr<string> errorCode_ = nullptr;
    // error data
    std::shared_ptr<BookResponseBodyErrorData> errorData_ = nullptr;
    // error message
    std::shared_ptr<string> errorMsg_ = nullptr;
    // http reqeust has been processed successfully，status code is 200
    std::shared_ptr<int32_t> status_ = nullptr;
    // true represents success, false represents failure
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
