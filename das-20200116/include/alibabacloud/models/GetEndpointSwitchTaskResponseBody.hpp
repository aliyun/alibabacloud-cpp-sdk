// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENDPOINTSWITCHTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENDPOINTSWITCHTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetEndpointSwitchTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEndpointSwitchTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, GetEndpointSwitchTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    GetEndpointSwitchTaskResponseBody() = default ;
    GetEndpointSwitchTaskResponseBody(const GetEndpointSwitchTaskResponseBody &) = default ;
    GetEndpointSwitchTaskResponseBody(GetEndpointSwitchTaskResponseBody &&) = default ;
    GetEndpointSwitchTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEndpointSwitchTaskResponseBody() = default ;
    GetEndpointSwitchTaskResponseBody& operator=(const GetEndpointSwitchTaskResponseBody &) = default ;
    GetEndpointSwitchTaskResponseBody& operator=(GetEndpointSwitchTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(DbLinkId, dbLinkId_);
        DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
        DARABONBA_PTR_TO_JSON(OriUuid, oriUuid_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(DbLinkId, dbLinkId_);
        DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
        DARABONBA_PTR_FROM_JSON(OriUuid, oriUuid_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
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
      virtual bool empty() const override { return this->accountId_ == nullptr
        && this->dbLinkId_ == nullptr && this->errMsg_ == nullptr && this->oriUuid_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->uuid_ == nullptr; };
      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // dbLinkId Field Functions 
      bool hasDbLinkId() const { return this->dbLinkId_ != nullptr;};
      void deleteDbLinkId() { this->dbLinkId_ = nullptr;};
      inline int64_t getDbLinkId() const { DARABONBA_PTR_GET_DEFAULT(dbLinkId_, 0L) };
      inline Data& setDbLinkId(int64_t dbLinkId) { DARABONBA_PTR_SET_VALUE(dbLinkId_, dbLinkId) };


      // errMsg Field Functions 
      bool hasErrMsg() const { return this->errMsg_ != nullptr;};
      void deleteErrMsg() { this->errMsg_ = nullptr;};
      inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
      inline Data& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


      // oriUuid Field Functions 
      bool hasOriUuid() const { return this->oriUuid_ != nullptr;};
      void deleteOriUuid() { this->oriUuid_ = nullptr;};
      inline string getOriUuid() const { DARABONBA_PTR_GET_DEFAULT(oriUuid_, "") };
      inline Data& setOriUuid(string oriUuid) { DARABONBA_PTR_SET_VALUE(oriUuid_, oriUuid) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      shared_ptr<string> accountId_ {};
      shared_ptr<int64_t> dbLinkId_ {};
      shared_ptr<string> errMsg_ {};
      shared_ptr<string> oriUuid_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->synchro_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetEndpointSwitchTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetEndpointSwitchTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetEndpointSwitchTaskResponseBody::Data) };
    inline GetEndpointSwitchTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetEndpointSwitchTaskResponseBody::Data) };
    inline GetEndpointSwitchTaskResponseBody& setData(const GetEndpointSwitchTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEndpointSwitchTaskResponseBody& setData(GetEndpointSwitchTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEndpointSwitchTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEndpointSwitchTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetEndpointSwitchTaskResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline string getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, "") };
    inline GetEndpointSwitchTaskResponseBody& setSynchro(string synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetEndpointSwitchTaskResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> success_ {};
    shared_ptr<string> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
