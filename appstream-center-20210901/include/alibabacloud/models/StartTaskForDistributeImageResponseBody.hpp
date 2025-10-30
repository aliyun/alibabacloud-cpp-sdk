// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTTASKFORDISTRIBUTEIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_STARTTASKFORDISTRIBUTEIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class StartTaskForDistributeImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartTaskForDistributeImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, StartTaskForDistributeImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    StartTaskForDistributeImageResponseBody() = default ;
    StartTaskForDistributeImageResponseBody(const StartTaskForDistributeImageResponseBody &) = default ;
    StartTaskForDistributeImageResponseBody(StartTaskForDistributeImageResponseBody &&) = default ;
    StartTaskForDistributeImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartTaskForDistributeImageResponseBody() = default ;
    StartTaskForDistributeImageResponseBody& operator=(const StartTaskForDistributeImageResponseBody &) = default ;
    StartTaskForDistributeImageResponseBody& operator=(StartTaskForDistributeImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->data_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline StartTaskForDistributeImageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline StartTaskForDistributeImageResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline StartTaskForDistributeImageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline StartTaskForDistributeImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline StartTaskForDistributeImageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code if an error occurred.
    std::shared_ptr<string> code_ = nullptr;
    // The ID of the image replication task.
    std::shared_ptr<string> data_ = nullptr;
    // The error message if an error occurred.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the task is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
