// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEADLOCKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEADLOCKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDeadLockDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeadLockDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeadLockDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    GetDeadLockDetailResponseBody() = default ;
    GetDeadLockDetailResponseBody(const GetDeadLockDetailResponseBody &) = default ;
    GetDeadLockDetailResponseBody(GetDeadLockDetailResponseBody &&) = default ;
    GetDeadLockDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeadLockDetailResponseBody() = default ;
    GetDeadLockDetailResponseBody& operator=(const GetDeadLockDetailResponseBody &) = default ;
    GetDeadLockDetailResponseBody& operator=(GetDeadLockDetailResponseBody &&) = default ;
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
    inline GetDeadLockDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string getData() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline GetDeadLockDetailResponseBody& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDeadLockDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeadLockDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetDeadLockDetailResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline string getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, "") };
    inline GetDeadLockDetailResponseBody& setSynchro(string synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The returned status code.
    shared_ptr<string> code_ {};
    // The returned data in JSON format:
    // 
    // - accountId: the user ID.
    // 
    // - textId: the deadlock text ID.
    // 
    // - gmtModified: the time when the diagnosis was generated.
    // 
    // - originText: the original deadlock text of LATEST DETECTED DEADLOCK or the original deadlock text in the error log.
    // 
    // - deadlock: the deadlock details:
    // 
    //   - occurTime: the time when the deadlock occurred.
    // 
    //   - originTextId: the deadlock text ID.
    // 
    //   - rollbackTrxId: the ID of the rolled back transaction.
    // 
    //   - transactions:
    // 
    //     - deadlockIdInDB: the deadlock ID in the database.
    // 
    //     - ip: the access IP address.
    // 
    //     - queryId: the query ID.
    // 
    //     - queryType: the query type.
    // 
    //     - relatedTables: the related tables.
    // 
    //     - tableNamesString: the related tables.
    // 
    //     - sqlText: the SQL text.
    // 
    //     - threadId: the thread ID.
    // 
    //     - transactionId: the transaction ID.
    // 
    //     - trxIdInLock: the transaction ID in the deadlock.
    // 
    //     - userName: the database username.
    // 
    //     - waitLockIndexName: the name of the index for which the lock is waiting.
    // 
    //     - waitLockMode: the type of the lock that is waiting.
    // 
    //     - lockWait: the waiting lock.
    // 
    //     - holdLockIndexName: the name of the index for which the lock is held.
    // 
    //     - holdLockMode: the type of the lock that is held.
    // 
    //     - lockHold: the held lock.
    // 
    //   - trxNum: the number of transactions.
    // 
    // - gmtCreate: the time when the diagnosis was created.
    // 
    // - nodeId: the node ID.
    // 
    // - uuid: the instance ID.
    shared_ptr<string> data_ {};
    // The response message.
    // 
    // > - When the request is successful, **Successful** is returned.
    // >
    // > - When the request fails, error information (such as error codes) is returned.
    shared_ptr<string> message_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // 
    // - **false**: The request failed.
    shared_ptr<string> success_ {};
    // The reserved parameter.
    shared_ptr<string> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
