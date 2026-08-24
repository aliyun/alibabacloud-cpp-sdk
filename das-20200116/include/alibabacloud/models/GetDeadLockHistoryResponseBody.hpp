// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEADLOCKHISTORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEADLOCKHISTORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDeadLockHistoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeadLockHistoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeadLockHistoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    GetDeadLockHistoryResponseBody() = default ;
    GetDeadLockHistoryResponseBody(const GetDeadLockHistoryResponseBody &) = default ;
    GetDeadLockHistoryResponseBody(GetDeadLockHistoryResponseBody &&) = default ;
    GetDeadLockHistoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeadLockHistoryResponseBody() = default ;
    GetDeadLockHistoryResponseBody& operator=(const GetDeadLockHistoryResponseBody &) = default ;
    GetDeadLockHistoryResponseBody& operator=(GetDeadLockHistoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->synchro_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDeadLockHistoryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline GetDeadLockHistoryResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDeadLockHistoryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeadLockHistoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetDeadLockHistoryResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline string getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, "") };
    inline GetDeadLockHistoryResponseBody& setSynchro(string synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The returned status code.
    shared_ptr<string> code_ {};
    // The data returned as a JSON string.
    // 
    // - total: The total number of deadlocks.
    // 
    // - list: The list of deadlocks.
    // 
    //   - accountId: The user ID.
    // 
    //   - textId: The text ID of the deadlock.
    // 
    //   - gmtModified: The time when the diagnostics were generated.
    // 
    //   - lockTime: The time when the deadlock occurred.
    // 
    //   - gmtCreate: The time when the diagnostics were created.
    // 
    //   - nodeId: The node ID.
    // 
    //   - uuid: The instance ID.
    shared_ptr<string> data_ {};
    // The returned message.
    // 
    // > If the request is successful, **Successful** is returned. If the request fails, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful:
    // 
    // - **true**: The request was successful.
    // 
    // - **false**: The request failed.
    shared_ptr<string> success_ {};
    // A reserved parameter.
    shared_ptr<string> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
