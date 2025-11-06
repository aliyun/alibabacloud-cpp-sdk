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
        && return this->email_ == nullptr && return this->emailVerificationNo_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->requestId_ == nullptr
        && return this->sendIp_ == nullptr && return this->tokenSendTime_ == nullptr && return this->userId_ == nullptr && return this->verificationStatus_ == nullptr && return this->verificationTime_ == nullptr; };
    // confirmIp Field Functions 
    bool hasConfirmIp() const { return this->confirmIp_ != nullptr;};
    void deleteConfirmIp() { this->confirmIp_ = nullptr;};
    inline string confirmIp() const { DARABONBA_PTR_GET_DEFAULT(confirmIp_, "") };
    inline QueryEmailVerificationResponseBody& setConfirmIp(string confirmIp) { DARABONBA_PTR_SET_VALUE(confirmIp_, confirmIp) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline QueryEmailVerificationResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // emailVerificationNo Field Functions 
    bool hasEmailVerificationNo() const { return this->emailVerificationNo_ != nullptr;};
    void deleteEmailVerificationNo() { this->emailVerificationNo_ = nullptr;};
    inline string emailVerificationNo() const { DARABONBA_PTR_GET_DEFAULT(emailVerificationNo_, "") };
    inline QueryEmailVerificationResponseBody& setEmailVerificationNo(string emailVerificationNo) { DARABONBA_PTR_SET_VALUE(emailVerificationNo_, emailVerificationNo) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryEmailVerificationResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryEmailVerificationResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEmailVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sendIp Field Functions 
    bool hasSendIp() const { return this->sendIp_ != nullptr;};
    void deleteSendIp() { this->sendIp_ = nullptr;};
    inline string sendIp() const { DARABONBA_PTR_GET_DEFAULT(sendIp_, "") };
    inline QueryEmailVerificationResponseBody& setSendIp(string sendIp) { DARABONBA_PTR_SET_VALUE(sendIp_, sendIp) };


    // tokenSendTime Field Functions 
    bool hasTokenSendTime() const { return this->tokenSendTime_ != nullptr;};
    void deleteTokenSendTime() { this->tokenSendTime_ = nullptr;};
    inline string tokenSendTime() const { DARABONBA_PTR_GET_DEFAULT(tokenSendTime_, "") };
    inline QueryEmailVerificationResponseBody& setTokenSendTime(string tokenSendTime) { DARABONBA_PTR_SET_VALUE(tokenSendTime_, tokenSendTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QueryEmailVerificationResponseBody& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // verificationStatus Field Functions 
    bool hasVerificationStatus() const { return this->verificationStatus_ != nullptr;};
    void deleteVerificationStatus() { this->verificationStatus_ = nullptr;};
    inline int32_t verificationStatus() const { DARABONBA_PTR_GET_DEFAULT(verificationStatus_, 0) };
    inline QueryEmailVerificationResponseBody& setVerificationStatus(int32_t verificationStatus) { DARABONBA_PTR_SET_VALUE(verificationStatus_, verificationStatus) };


    // verificationTime Field Functions 
    bool hasVerificationTime() const { return this->verificationTime_ != nullptr;};
    void deleteVerificationTime() { this->verificationTime_ = nullptr;};
    inline string verificationTime() const { DARABONBA_PTR_GET_DEFAULT(verificationTime_, "") };
    inline QueryEmailVerificationResponseBody& setVerificationTime(string verificationTime) { DARABONBA_PTR_SET_VALUE(verificationTime_, verificationTime) };


  protected:
    std::shared_ptr<string> confirmIp_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> emailVerificationNo_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sendIp_ = nullptr;
    std::shared_ptr<string> tokenSendTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<int32_t> verificationStatus_ = nullptr;
    std::shared_ptr<string> verificationTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
