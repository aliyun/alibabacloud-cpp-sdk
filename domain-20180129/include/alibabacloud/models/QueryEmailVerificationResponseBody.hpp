// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEMAILVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEMAILVERIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryEmailVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConfirmIp, confirmIp_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EmailVerificationNo, emailVerificationNo_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SendIp, sendIp_);
      DARABONBA_PTR_TO_JSON(TokenSendTime, tokenSendTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VerificationStatus, verificationStatus_);
      DARABONBA_PTR_TO_JSON(VerificationTime, verificationTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEmailVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfirmIp, confirmIp_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EmailVerificationNo, emailVerificationNo_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SendIp, sendIp_);
      DARABONBA_PTR_FROM_JSON(TokenSendTime, tokenSendTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VerificationStatus, verificationStatus_);
      DARABONBA_PTR_FROM_JSON(VerificationTime, verificationTime_);
    };
    QueryEmailVerificationResponseBody() = default ;
    QueryEmailVerificationResponseBody(const QueryEmailVerificationResponseBody &) = default ;
    QueryEmailVerificationResponseBody(QueryEmailVerificationResponseBody &&) = default ;
    QueryEmailVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEmailVerificationResponseBody() = default ;
    QueryEmailVerificationResponseBody& operator=(const QueryEmailVerificationResponseBody &) = default ;
    QueryEmailVerificationResponseBody& operator=(QueryEmailVerificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confirmIp_ == nullptr
        && this->email_ == nullptr && this->emailVerificationNo_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->requestId_ == nullptr
        && this->sendIp_ == nullptr && this->tokenSendTime_ == nullptr && this->userId_ == nullptr && this->verificationStatus_ == nullptr && this->verificationTime_ == nullptr; };
    // confirmIp Field Functions 
    bool hasConfirmIp() const { return this->confirmIp_ != nullptr;};
    void deleteConfirmIp() { this->confirmIp_ = nullptr;};
    inline string getConfirmIp() const { DARABONBA_PTR_GET_DEFAULT(confirmIp_, "") };
    inline QueryEmailVerificationResponseBody& setConfirmIp(string confirmIp) { DARABONBA_PTR_SET_VALUE(confirmIp_, confirmIp) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryEmailVerificationResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerificationNo Field Functions 
    bool hasEmailVerificationNo() const { return this->emailVerificationNo_ != nullptr;};
    void deleteEmailVerificationNo() { this->emailVerificationNo_ = nullptr;};
    inline string getEmailVerificationNo() const { DARABONBA_PTR_GET_DEFAULT(emailVerificationNo_, "") };
    inline QueryEmailVerificationResponseBody& setEmailVerificationNo(string emailVerificationNo) { DARABONBA_PTR_SET_VALUE(emailVerificationNo_, emailVerificationNo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryEmailVerificationResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryEmailVerificationResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEmailVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sendIp Field Functions 
    bool hasSendIp() const { return this->sendIp_ != nullptr;};
    void deleteSendIp() { this->sendIp_ = nullptr;};
    inline string getSendIp() const { DARABONBA_PTR_GET_DEFAULT(sendIp_, "") };
    inline QueryEmailVerificationResponseBody& setSendIp(string sendIp) { DARABONBA_PTR_SET_VALUE(sendIp_, sendIp) };


    // tokenSendTime Field Functions 
    bool hasTokenSendTime() const { return this->tokenSendTime_ != nullptr;};
    void deleteTokenSendTime() { this->tokenSendTime_ = nullptr;};
    inline string getTokenSendTime() const { DARABONBA_PTR_GET_DEFAULT(tokenSendTime_, "") };
    inline QueryEmailVerificationResponseBody& setTokenSendTime(string tokenSendTime) { DARABONBA_PTR_SET_VALUE(tokenSendTime_, tokenSendTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryEmailVerificationResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // verificationStatus Field Functions 
    bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
    void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
    inline int32_t getVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, 0) };
    inline QueryEmailVerificationResponseBody& setVerificationStatus(int32_t verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


    // verificationTime Field Functions 
    bool hasVerificationTime() const { return this->verificationTime_ != nullptr;};
    void deleteVerificationTime() { this->verificationTime_ = nullptr;};
    inline string getVerificationTime() const { DARABONBA_PTR_GET_DEFAULT(verificationTime_, "") };
    inline QueryEmailVerificationResponseBody& setVerificationTime(string verificationTime) { DARABONBA_PTR_SET_VALUE(verificationTime_, verificationTime) };


  protected:
    shared_ptr<string> confirmIp_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> emailVerificationNo_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> sendIp_ {};
    shared_ptr<string> tokenSendTime_ {};
    shared_ptr<string> userId_ {};
    shared_ptr<int32_t> verificationStatus_ {};
    shared_ptr<string> verificationTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
