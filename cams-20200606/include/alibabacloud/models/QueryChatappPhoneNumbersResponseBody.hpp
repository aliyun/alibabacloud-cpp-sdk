// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCHATAPPPHONENUMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCHATAPPPHONENUMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cams20200606
{
namespace Models
{
  class QueryChatappPhoneNumbersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryChatappPhoneNumbersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryChatappPhoneNumbersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PhoneNumbers, phoneNumbers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryChatappPhoneNumbersResponseBody() = default ;
    QueryChatappPhoneNumbersResponseBody(const QueryChatappPhoneNumbersResponseBody &) = default ;
    QueryChatappPhoneNumbersResponseBody(QueryChatappPhoneNumbersResponseBody &&) = default ;
    QueryChatappPhoneNumbersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryChatappPhoneNumbersResponseBody() = default ;
    QueryChatappPhoneNumbersResponseBody& operator=(const QueryChatappPhoneNumbersResponseBody &) = default ;
    QueryChatappPhoneNumbersResponseBody& operator=(QueryChatappPhoneNumbersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PhoneNumbers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PhoneNumbers& obj) { 
        DARABONBA_PTR_TO_JSON(CodeVerificationStatus, codeVerificationStatus_);
        DARABONBA_PTR_TO_JSON(IsOfficial, isOfficial_);
        DARABONBA_PTR_TO_JSON(MessagingLimitTier, messagingLimitTier_);
        DARABONBA_PTR_TO_JSON(NameStatus, nameStatus_);
        DARABONBA_PTR_TO_JSON(NewNameStatus, newNameStatus_);
        DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_TO_JSON(QualityRating, qualityRating_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(StatusCallbackUrl, statusCallbackUrl_);
        DARABONBA_PTR_TO_JSON(StatusQueue, statusQueue_);
        DARABONBA_PTR_TO_JSON(UpCallbackUrl, upCallbackUrl_);
        DARABONBA_PTR_TO_JSON(UpQueue, upQueue_);
        DARABONBA_PTR_TO_JSON(VerifiedName, verifiedName_);
      };
      friend void from_json(const Darabonba::Json& j, PhoneNumbers& obj) { 
        DARABONBA_PTR_FROM_JSON(CodeVerificationStatus, codeVerificationStatus_);
        DARABONBA_PTR_FROM_JSON(IsOfficial, isOfficial_);
        DARABONBA_PTR_FROM_JSON(MessagingLimitTier, messagingLimitTier_);
        DARABONBA_PTR_FROM_JSON(NameStatus, nameStatus_);
        DARABONBA_PTR_FROM_JSON(NewNameStatus, newNameStatus_);
        DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
        DARABONBA_PTR_FROM_JSON(QualityRating, qualityRating_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(StatusCallbackUrl, statusCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(StatusQueue, statusQueue_);
        DARABONBA_PTR_FROM_JSON(UpCallbackUrl, upCallbackUrl_);
        DARABONBA_PTR_FROM_JSON(UpQueue, upQueue_);
        DARABONBA_PTR_FROM_JSON(VerifiedName, verifiedName_);
      };
      PhoneNumbers() = default ;
      PhoneNumbers(const PhoneNumbers &) = default ;
      PhoneNumbers(PhoneNumbers &&) = default ;
      PhoneNumbers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PhoneNumbers() = default ;
      PhoneNumbers& operator=(const PhoneNumbers &) = default ;
      PhoneNumbers& operator=(PhoneNumbers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->codeVerificationStatus_ == nullptr
        && this->isOfficial_ == nullptr && this->messagingLimitTier_ == nullptr && this->nameStatus_ == nullptr && this->newNameStatus_ == nullptr && this->phoneNumber_ == nullptr
        && this->qualityRating_ == nullptr && this->status_ == nullptr && this->statusCallbackUrl_ == nullptr && this->statusQueue_ == nullptr && this->upCallbackUrl_ == nullptr
        && this->upQueue_ == nullptr && this->verifiedName_ == nullptr; };
      // codeVerificationStatus Field Functions 
      bool hasCodeVerificationStatus() const { return this->codeVerificationStatus_ != nullptr;};
      void deleteCodeVerificationStatus() { this->codeVerificationStatus_ = nullptr;};
      inline string getCodeVerificationStatus() const { DARABONBA_PTR_GET_DEFAULT(codeVerificationStatus_, "") };
      inline PhoneNumbers& setCodeVerificationStatus(string codeVerificationStatus) { DARABONBA_PTR_SET_VALUE(codeVerificationStatus_, codeVerificationStatus) };


      // isOfficial Field Functions 
      bool hasIsOfficial() const { return this->isOfficial_ != nullptr;};
      void deleteIsOfficial() { this->isOfficial_ = nullptr;};
      inline string getIsOfficial() const { DARABONBA_PTR_GET_DEFAULT(isOfficial_, "") };
      inline PhoneNumbers& setIsOfficial(string isOfficial) { DARABONBA_PTR_SET_VALUE(isOfficial_, isOfficial) };


      // messagingLimitTier Field Functions 
      bool hasMessagingLimitTier() const { return this->messagingLimitTier_ != nullptr;};
      void deleteMessagingLimitTier() { this->messagingLimitTier_ = nullptr;};
      inline string getMessagingLimitTier() const { DARABONBA_PTR_GET_DEFAULT(messagingLimitTier_, "") };
      inline PhoneNumbers& setMessagingLimitTier(string messagingLimitTier) { DARABONBA_PTR_SET_VALUE(messagingLimitTier_, messagingLimitTier) };


      // nameStatus Field Functions 
      bool hasNameStatus() const { return this->nameStatus_ != nullptr;};
      void deleteNameStatus() { this->nameStatus_ = nullptr;};
      inline string getNameStatus() const { DARABONBA_PTR_GET_DEFAULT(nameStatus_, "") };
      inline PhoneNumbers& setNameStatus(string nameStatus) { DARABONBA_PTR_SET_VALUE(nameStatus_, nameStatus) };


      // newNameStatus Field Functions 
      bool hasNewNameStatus() const { return this->newNameStatus_ != nullptr;};
      void deleteNewNameStatus() { this->newNameStatus_ = nullptr;};
      inline string getNewNameStatus() const { DARABONBA_PTR_GET_DEFAULT(newNameStatus_, "") };
      inline PhoneNumbers& setNewNameStatus(string newNameStatus) { DARABONBA_PTR_SET_VALUE(newNameStatus_, newNameStatus) };


      // phoneNumber Field Functions 
      bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
      void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
      inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
      inline PhoneNumbers& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


      // qualityRating Field Functions 
      bool hasQualityRating() const { return this->qualityRating_ != nullptr;};
      void deleteQualityRating() { this->qualityRating_ = nullptr;};
      inline string getQualityRating() const { DARABONBA_PTR_GET_DEFAULT(qualityRating_, "") };
      inline PhoneNumbers& setQualityRating(string qualityRating) { DARABONBA_PTR_SET_VALUE(qualityRating_, qualityRating) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline PhoneNumbers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // statusCallbackUrl Field Functions 
      bool hasStatusCallbackUrl() const { return this->statusCallbackUrl_ != nullptr;};
      void deleteStatusCallbackUrl() { this->statusCallbackUrl_ = nullptr;};
      inline string getStatusCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(statusCallbackUrl_, "") };
      inline PhoneNumbers& setStatusCallbackUrl(string statusCallbackUrl) { DARABONBA_PTR_SET_VALUE(statusCallbackUrl_, statusCallbackUrl) };


      // statusQueue Field Functions 
      bool hasStatusQueue() const { return this->statusQueue_ != nullptr;};
      void deleteStatusQueue() { this->statusQueue_ = nullptr;};
      inline string getStatusQueue() const { DARABONBA_PTR_GET_DEFAULT(statusQueue_, "") };
      inline PhoneNumbers& setStatusQueue(string statusQueue) { DARABONBA_PTR_SET_VALUE(statusQueue_, statusQueue) };


      // upCallbackUrl Field Functions 
      bool hasUpCallbackUrl() const { return this->upCallbackUrl_ != nullptr;};
      void deleteUpCallbackUrl() { this->upCallbackUrl_ = nullptr;};
      inline string getUpCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(upCallbackUrl_, "") };
      inline PhoneNumbers& setUpCallbackUrl(string upCallbackUrl) { DARABONBA_PTR_SET_VALUE(upCallbackUrl_, upCallbackUrl) };


      // upQueue Field Functions 
      bool hasUpQueue() const { return this->upQueue_ != nullptr;};
      void deleteUpQueue() { this->upQueue_ = nullptr;};
      inline string getUpQueue() const { DARABONBA_PTR_GET_DEFAULT(upQueue_, "") };
      inline PhoneNumbers& setUpQueue(string upQueue) { DARABONBA_PTR_SET_VALUE(upQueue_, upQueue) };


      // verifiedName Field Functions 
      bool hasVerifiedName() const { return this->verifiedName_ != nullptr;};
      void deleteVerifiedName() { this->verifiedName_ = nullptr;};
      inline string getVerifiedName() const { DARABONBA_PTR_GET_DEFAULT(verifiedName_, "") };
      inline PhoneNumbers& setVerifiedName(string verifiedName) { DARABONBA_PTR_SET_VALUE(verifiedName_, verifiedName) };


    protected:
      // The verification status of the phone number.
      // 
      // Valid values:
      // 
      // *   REVOKED: The review application is revoked.
      // *   MORE_INFORMATION_REQUESTED: More information needs to be provided.
      // *   VERIFIED: The phone number passes the verification.
      // *   REJECTED: The phone number fails to pass the verification.
      shared_ptr<string> codeVerificationStatus_ {};
      // Indicates whether it is a WhatsApp Official Business Account (OBA).
      shared_ptr<string> isOfficial_ {};
      // The number of phone numbers to which messages can be sent in a day.
      // 
      // Valid values:
      // 
      // *   TIER_100K: 100,000
      // *   TIER_UNLIMITED: unlimited
      // *   TIER_250: 250
      // *   TIER_1K: 1,000
      // *   TIER_50: 50
      // *   TIER_10K: 10,000
      shared_ptr<string> messagingLimitTier_ {};
      // The review status of the name.
      shared_ptr<string> nameStatus_ {};
      // The review status of the new display name of the enterprise.
      shared_ptr<string> newNameStatus_ {};
      // The phone number.
      shared_ptr<string> phoneNumber_ {};
      // The quality rating of the phone number.
      // 
      // Valid values:
      // 
      // *   RED: low
      // *   YELLOW: medium
      // *   UNKNOWN: unknown
      // *   GREEN: high
      shared_ptr<string> qualityRating_ {};
      // The state of the phone number.
      // 
      // Valid values:
      // 
      // *   MIGRATED
      // *   FLAGGED
      // *   DISCONNECTED
      // *   UNVERIFIED
      // *   BANNED
      // *   RATE_LIMITED
      // *   PENDING
      // *   CONNECTED
      // *   UNKNOWN
      // *   DELETED
      // *   RESTRICTED
      shared_ptr<string> status_ {};
      // The URL that receives the status reports.
      shared_ptr<string> statusCallbackUrl_ {};
      // The status report queue.
      shared_ptr<string> statusQueue_ {};
      // The URL that receives the MO messages.
      shared_ptr<string> upCallbackUrl_ {};
      // The mobile originated (MO) message queue.
      shared_ptr<string> upQueue_ {};
      // The display name of the enterprise to which the phone number belongs.
      shared_ptr<string> verifiedName_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->phoneNumbers_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryChatappPhoneNumbersResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryChatappPhoneNumbersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryChatappPhoneNumbersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // phoneNumbers Field Functions 
    bool hasPhoneNumbers() const { return this->phoneNumbers_ != nullptr;};
    void deletePhoneNumbers() { this->phoneNumbers_ = nullptr;};
    inline const vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers> & getPhoneNumbers() const { DARABONBA_PTR_GET_CONST(phoneNumbers_, vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers>) };
    inline vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers> getPhoneNumbers() { DARABONBA_PTR_GET(phoneNumbers_, vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers>) };
    inline QueryChatappPhoneNumbersResponseBody& setPhoneNumbers(const vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers> & phoneNumbers) { DARABONBA_PTR_SET_VALUE(phoneNumbers_, phoneNumbers) };
    inline QueryChatappPhoneNumbersResponseBody& setPhoneNumbers(vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers> && phoneNumbers) { DARABONBA_PTR_SET_RVALUE(phoneNumbers_, phoneNumbers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryChatappPhoneNumbersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryChatappPhoneNumbersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details about the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The HTTP status code returned.
    // 
    // *   A value of OK indicates that the call is successful.
    // *   Other values indicate that the call fails. For more information, see [Error codes](https://help.aliyun.com/document_detail/196974.html).
    shared_ptr<string> code_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The phone numbers.
    shared_ptr<vector<QueryChatappPhoneNumbersResponseBody::PhoneNumbers>> phoneNumbers_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
