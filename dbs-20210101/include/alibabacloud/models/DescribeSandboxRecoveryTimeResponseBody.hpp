// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESANDBOXRECOVERYTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESANDBOXRECOVERYTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20210101
{
namespace Models
{
  class DescribeSandboxRecoveryTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSandboxRecoveryTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSandboxRecoveryTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSandboxRecoveryTimeResponseBody() = default ;
    DescribeSandboxRecoveryTimeResponseBody(const DescribeSandboxRecoveryTimeResponseBody &) = default ;
    DescribeSandboxRecoveryTimeResponseBody(DescribeSandboxRecoveryTimeResponseBody &&) = default ;
    DescribeSandboxRecoveryTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSandboxRecoveryTimeResponseBody() = default ;
    DescribeSandboxRecoveryTimeResponseBody& operator=(const DescribeSandboxRecoveryTimeResponseBody &) = default ;
    DescribeSandboxRecoveryTimeResponseBody& operator=(DescribeSandboxRecoveryTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BackupPlanId, backupPlanId_);
        DARABONBA_PTR_TO_JSON(RecoveryBeginTime, recoveryBeginTime_);
        DARABONBA_PTR_TO_JSON(RecoveryEndTime, recoveryEndTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupPlanId, backupPlanId_);
        DARABONBA_PTR_FROM_JSON(RecoveryBeginTime, recoveryBeginTime_);
        DARABONBA_PTR_FROM_JSON(RecoveryEndTime, recoveryEndTime_);
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
      virtual bool empty() const override { return this->backupPlanId_ == nullptr
        && this->recoveryBeginTime_ == nullptr && this->recoveryEndTime_ == nullptr; };
      // backupPlanId Field Functions 
      bool hasBackupPlanId() const { return this->backupPlanId_ != nullptr;};
      void deleteBackupPlanId() { this->backupPlanId_ = nullptr;};
      inline string getBackupPlanId() const { DARABONBA_PTR_GET_DEFAULT(backupPlanId_, "") };
      inline Data& setBackupPlanId(string backupPlanId) { DARABONBA_PTR_SET_VALUE(backupPlanId_, backupPlanId) };


      // recoveryBeginTime Field Functions 
      bool hasRecoveryBeginTime() const { return this->recoveryBeginTime_ != nullptr;};
      void deleteRecoveryBeginTime() { this->recoveryBeginTime_ = nullptr;};
      inline string getRecoveryBeginTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryBeginTime_, "") };
      inline Data& setRecoveryBeginTime(string recoveryBeginTime) { DARABONBA_PTR_SET_VALUE(recoveryBeginTime_, recoveryBeginTime) };


      // recoveryEndTime Field Functions 
      bool hasRecoveryEndTime() const { return this->recoveryEndTime_ != nullptr;};
      void deleteRecoveryEndTime() { this->recoveryEndTime_ = nullptr;};
      inline string getRecoveryEndTime() const { DARABONBA_PTR_GET_DEFAULT(recoveryEndTime_, "") };
      inline Data& setRecoveryEndTime(string recoveryEndTime) { DARABONBA_PTR_SET_VALUE(recoveryEndTime_, recoveryEndTime) };


    protected:
      // The backup schedule of the sandbox instance.
      shared_ptr<string> backupPlanId_ {};
      // The beginning of the time range during which the sandbox instance can be restored. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> recoveryBeginTime_ {};
      // The end of the time range during which the sandbox instance can be restored. The time follows the ISO 8601 standard in the yyyy-MM-ddThh:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> recoveryEndTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSandboxRecoveryTimeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSandboxRecoveryTimeResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSandboxRecoveryTimeResponseBody::Data) };
    inline DescribeSandboxRecoveryTimeResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSandboxRecoveryTimeResponseBody::Data) };
    inline DescribeSandboxRecoveryTimeResponseBody& setData(const DescribeSandboxRecoveryTimeResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSandboxRecoveryTimeResponseBody& setData(DescribeSandboxRecoveryTimeResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline DescribeSandboxRecoveryTimeResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline DescribeSandboxRecoveryTimeResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSandboxRecoveryTimeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSandboxRecoveryTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSandboxRecoveryTimeResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request fails.
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<DescribeSandboxRecoveryTimeResponseBody::Data> data_ {};
    // The error code returned if the request fails.
    shared_ptr<string> errCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errMessage_ {};
    // The error message returned if the request fails.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20210101
#endif
