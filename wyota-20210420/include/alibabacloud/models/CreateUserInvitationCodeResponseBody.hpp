// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERINVITATIONCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERINVITATIONCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class CreateUserInvitationCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserInvitationCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserInvitationCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateUserInvitationCodeResponseBody() = default ;
    CreateUserInvitationCodeResponseBody(const CreateUserInvitationCodeResponseBody &) = default ;
    CreateUserInvitationCodeResponseBody(CreateUserInvitationCodeResponseBody &&) = default ;
    CreateUserInvitationCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserInvitationCodeResponseBody() = default ;
    CreateUserInvitationCodeResponseBody& operator=(const CreateUserInvitationCodeResponseBody &) = default ;
    CreateUserInvitationCodeResponseBody& operator=(CreateUserInvitationCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BindTime, bindTime_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(Expired, expired_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(InvitationCode, invitationCode_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TerminalGroupId, terminalGroupId_);
        DARABONBA_PTR_TO_JSON(TerminalGroupName, terminalGroupName_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(ValidityMinutes, validityMinutes_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BindTime, bindTime_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(Expired, expired_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(InvitationCode, invitationCode_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TerminalGroupId, terminalGroupId_);
        DARABONBA_PTR_FROM_JSON(TerminalGroupName, terminalGroupName_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(ValidityMinutes, validityMinutes_);
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
      virtual bool empty() const override { return this->bindTime_ == nullptr
        && this->endUserId_ == nullptr && this->expireTime_ == nullptr && this->expired_ == nullptr && this->gmtCreate_ == nullptr && this->invitationCode_ == nullptr
        && this->platform_ == nullptr && this->status_ == nullptr && this->terminalGroupId_ == nullptr && this->terminalGroupName_ == nullptr && this->userName_ == nullptr
        && this->uuid_ == nullptr && this->validityMinutes_ == nullptr; };
      // bindTime Field Functions 
      bool hasBindTime() const { return this->bindTime_ != nullptr;};
      void deleteBindTime() { this->bindTime_ = nullptr;};
      inline string getBindTime() const { DARABONBA_PTR_GET_DEFAULT(bindTime_, "") };
      inline Data& setBindTime(string bindTime) { DARABONBA_PTR_SET_VALUE(bindTime_, bindTime) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Data& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline Data& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // expired Field Functions 
      bool hasExpired() const { return this->expired_ != nullptr;};
      void deleteExpired() { this->expired_ = nullptr;};
      inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
      inline Data& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // invitationCode Field Functions 
      bool hasInvitationCode() const { return this->invitationCode_ != nullptr;};
      void deleteInvitationCode() { this->invitationCode_ = nullptr;};
      inline string getInvitationCode() const { DARABONBA_PTR_GET_DEFAULT(invitationCode_, "") };
      inline Data& setInvitationCode(string invitationCode) { DARABONBA_PTR_SET_VALUE(invitationCode_, invitationCode) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Data& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // terminalGroupId Field Functions 
      bool hasTerminalGroupId() const { return this->terminalGroupId_ != nullptr;};
      void deleteTerminalGroupId() { this->terminalGroupId_ = nullptr;};
      inline string getTerminalGroupId() const { DARABONBA_PTR_GET_DEFAULT(terminalGroupId_, "") };
      inline Data& setTerminalGroupId(string terminalGroupId) { DARABONBA_PTR_SET_VALUE(terminalGroupId_, terminalGroupId) };


      // terminalGroupName Field Functions 
      bool hasTerminalGroupName() const { return this->terminalGroupName_ != nullptr;};
      void deleteTerminalGroupName() { this->terminalGroupName_ = nullptr;};
      inline string getTerminalGroupName() const { DARABONBA_PTR_GET_DEFAULT(terminalGroupName_, "") };
      inline Data& setTerminalGroupName(string terminalGroupName) { DARABONBA_PTR_SET_VALUE(terminalGroupName_, terminalGroupName) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Data& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline Data& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // validityMinutes Field Functions 
      bool hasValidityMinutes() const { return this->validityMinutes_ != nullptr;};
      void deleteValidityMinutes() { this->validityMinutes_ = nullptr;};
      inline int32_t getValidityMinutes() const { DARABONBA_PTR_GET_DEFAULT(validityMinutes_, 0) };
      inline Data& setValidityMinutes(int32_t validityMinutes) { DARABONBA_PTR_SET_VALUE(validityMinutes_, validityMinutes) };


    protected:
      // The binding time when the terminal uses the code to complete management. This field is empty for a newly created code because it is not yet bound to a terminal.
      shared_ptr<string> bindTime_ {};
      // The logon identifier (EndUserId) of the user corresponding to the management code.
      shared_ptr<string> endUserId_ {};
      // The expiration time of the management code calculated by the server. This field is empty if the code is permanently valid. To determine whether the code has expired, use the Expired field.
      shared_ptr<string> expireTime_ {};
      // Indicates whether the code has expired as calculated by the server. A value of true indicates that the validity period has expired. A value of false indicates that the code has not expired or is permanently valid. This field is independent of the usage status in the Status field.
      shared_ptr<bool> expired_ {};
      // The creation time of the management code, generated by the server.
      shared_ptr<string> gmtCreate_ {};
      // The generated eight-digit terminal management invitation code. It is processed as a string and leading zeros are preserved.
      shared_ptr<string> invitationCode_ {};
      // The client type of the bound terminal. This field is empty for a newly created code because it is not yet bound to a terminal.
      shared_ptr<string> platform_ {};
      // The usage status of the management code. Valid values:
      // - ACTIVE: The code is unused.
      // - USED: The code is used.
      // The creation response returns ACTIVE. Expiration does not change the usage status. Use the Expired field to determine whether the code has expired.
      shared_ptr<string> status_ {};
      // The ID of the terminal group specified for the management code.
      shared_ptr<string> terminalGroupId_ {};
      // The display name of the terminal group. This creation operation does not populate this display field, so it may be empty in the creation response.
      shared_ptr<string> terminalGroupName_ {};
      // The display name of the user. This creation operation does not populate this display field, so it may be empty in the creation response.
      shared_ptr<string> userName_ {};
      // The UUID of the terminal that uses the code to complete management. This field is empty for a newly created code because it is not yet bound to a terminal.
      shared_ptr<string> uuid_ {};
      // The validity period of the management code, in minutes. The value is the same as the request value. A value of -1 indicates that the code is permanently valid.
      shared_ptr<int32_t> validityMinutes_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateUserInvitationCodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CreateUserInvitationCodeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<CreateUserInvitationCodeResponseBody::Data>) };
    inline vector<CreateUserInvitationCodeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<CreateUserInvitationCodeResponseBody::Data>) };
    inline CreateUserInvitationCodeResponseBody& setData(const vector<CreateUserInvitationCodeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateUserInvitationCodeResponseBody& setData(vector<CreateUserInvitationCodeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateUserInvitationCodeResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateUserInvitationCodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUserInvitationCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateUserInvitationCodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The business error code. This field may be empty if the call is successful. If the call fails, a value such as PARAM_ERROR indicates that the parameter value is invalid.
    shared_ptr<string> code_ {};
    // The array of created management invitation code records. Each user corresponds to one record. An array is returned even for single-user creation.
    shared_ptr<vector<CreateUserInvitationCodeResponseBody::Data>> data_ {};
    // The HTTP status code of the backend business response. A value of 200 indicates success. A value of 400 indicates parameter or business validation failure. A value of 500 indicates a system error.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The business error message. This field may be empty if the call is successful. If the call fails, this field describes the cause of the error.
    shared_ptr<string> message_ {};
    // The ID of the request, used to locate call logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the business processing is successful. A value of true indicates success. A value of false indicates failure.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
