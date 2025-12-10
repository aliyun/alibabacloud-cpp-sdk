// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOCKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATELOCKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/LockStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class CreateLockResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLockResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(LockStatus, lockStatus_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLockResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(LockStatus, lockStatus_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateLockResponseBody() = default ;
    CreateLockResponseBody(const CreateLockResponseBody &) = default ;
    CreateLockResponseBody(CreateLockResponseBody &&) = default ;
    CreateLockResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLockResponseBody() = default ;
    CreateLockResponseBody& operator=(const CreateLockResponseBody &) = default ;
    CreateLockResponseBody& operator=(CreateLockResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->lockStatus_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateLockResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // lockStatus Field Functions 
    bool hasLockStatus() const { return this->lockStatus_ != nullptr;};
    void deleteLockStatus() { this->lockStatus_ = nullptr;};
    inline const LockStatus & lockStatus() const { DARABONBA_PTR_GET_CONST(lockStatus_, LockStatus) };
    inline LockStatus lockStatus() { DARABONBA_PTR_GET(lockStatus_, LockStatus) };
    inline CreateLockResponseBody& setLockStatus(const LockStatus & lockStatus) { DARABONBA_PTR_SET_VALUE(lockStatus_, lockStatus) };
    inline CreateLockResponseBody& setLockStatus(LockStatus && lockStatus) { DARABONBA_PTR_SET_RVALUE(lockStatus_, lockStatus) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateLockResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateLockResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateLockResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The lock status.
    std::shared_ptr<LockStatus> lockStatus_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   true: The request was successful.
    // *   false.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
