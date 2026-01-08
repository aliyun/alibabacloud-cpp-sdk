// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSENGERSUBSCRIPTIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSENGERSUBSCRIPTIONTOKENRESPONSEBODY_HPP_
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
  class ListMessengerSubscriptionTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessengerSubscriptionTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextPage, nextPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessengerSubscriptionTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextPage, nextPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListMessengerSubscriptionTokenResponseBody() = default ;
    ListMessengerSubscriptionTokenResponseBody(const ListMessengerSubscriptionTokenResponseBody &) = default ;
    ListMessengerSubscriptionTokenResponseBody(ListMessengerSubscriptionTokenResponseBody &&) = default ;
    ListMessengerSubscriptionTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessengerSubscriptionTokenResponseBody() = default ;
    ListMessengerSubscriptionTokenResponseBody& operator=(const ListMessengerSubscriptionTokenResponseBody &) = default ;
    ListMessengerSubscriptionTokenResponseBody& operator=(ListMessengerSubscriptionTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTimestamp, creationTimestamp_);
        DARABONBA_PTR_TO_JSON(CustomAudienceId, customAudienceId_);
        DARABONBA_PTR_TO_JSON(NextEligibleTime, nextEligibleTime_);
        DARABONBA_PTR_TO_JSON(NotificationMessagesReoptin, notificationMessagesReoptin_);
        DARABONBA_PTR_TO_JSON(NotificationMessagesTimezone, notificationMessagesTimezone_);
        DARABONBA_PTR_TO_JSON(NotificationMessagesToken, notificationMessagesToken_);
        DARABONBA_PTR_TO_JSON(PageId, pageId_);
        DARABONBA_PTR_TO_JSON(RecipientId, recipientId_);
        DARABONBA_PTR_TO_JSON(TokenExpiryTimestamp, tokenExpiryTimestamp_);
        DARABONBA_PTR_TO_JSON(TopicTitle, topicTitle_);
        DARABONBA_PTR_TO_JSON(UserTokenStatus, userTokenStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTimestamp, creationTimestamp_);
        DARABONBA_PTR_FROM_JSON(CustomAudienceId, customAudienceId_);
        DARABONBA_PTR_FROM_JSON(NextEligibleTime, nextEligibleTime_);
        DARABONBA_PTR_FROM_JSON(NotificationMessagesReoptin, notificationMessagesReoptin_);
        DARABONBA_PTR_FROM_JSON(NotificationMessagesTimezone, notificationMessagesTimezone_);
        DARABONBA_PTR_FROM_JSON(NotificationMessagesToken, notificationMessagesToken_);
        DARABONBA_PTR_FROM_JSON(PageId, pageId_);
        DARABONBA_PTR_FROM_JSON(RecipientId, recipientId_);
        DARABONBA_PTR_FROM_JSON(TokenExpiryTimestamp, tokenExpiryTimestamp_);
        DARABONBA_PTR_FROM_JSON(TopicTitle, topicTitle_);
        DARABONBA_PTR_FROM_JSON(UserTokenStatus, userTokenStatus_);
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
      virtual bool empty() const override { return this->creationTimestamp_ == nullptr
        && this->customAudienceId_ == nullptr && this->nextEligibleTime_ == nullptr && this->notificationMessagesReoptin_ == nullptr && this->notificationMessagesTimezone_ == nullptr && this->notificationMessagesToken_ == nullptr
        && this->pageId_ == nullptr && this->recipientId_ == nullptr && this->tokenExpiryTimestamp_ == nullptr && this->topicTitle_ == nullptr && this->userTokenStatus_ == nullptr; };
      // creationTimestamp Field Functions 
      bool hasCreationTimestamp() const { return this->creationTimestamp_ != nullptr;};
      void deleteCreationTimestamp() { this->creationTimestamp_ = nullptr;};
      inline int64_t getCreationTimestamp() const { DARABONBA_PTR_GET_DEFAULT(creationTimestamp_, 0L) };
      inline Data& setCreationTimestamp(int64_t creationTimestamp) { DARABONBA_PTR_SET_VALUE(creationTimestamp_, creationTimestamp) };


      // customAudienceId Field Functions 
      bool hasCustomAudienceId() const { return this->customAudienceId_ != nullptr;};
      void deleteCustomAudienceId() { this->customAudienceId_ = nullptr;};
      inline string getCustomAudienceId() const { DARABONBA_PTR_GET_DEFAULT(customAudienceId_, "") };
      inline Data& setCustomAudienceId(string customAudienceId) { DARABONBA_PTR_SET_VALUE(customAudienceId_, customAudienceId) };


      // nextEligibleTime Field Functions 
      bool hasNextEligibleTime() const { return this->nextEligibleTime_ != nullptr;};
      void deleteNextEligibleTime() { this->nextEligibleTime_ = nullptr;};
      inline int64_t getNextEligibleTime() const { DARABONBA_PTR_GET_DEFAULT(nextEligibleTime_, 0L) };
      inline Data& setNextEligibleTime(int64_t nextEligibleTime) { DARABONBA_PTR_SET_VALUE(nextEligibleTime_, nextEligibleTime) };


      // notificationMessagesReoptin Field Functions 
      bool hasNotificationMessagesReoptin() const { return this->notificationMessagesReoptin_ != nullptr;};
      void deleteNotificationMessagesReoptin() { this->notificationMessagesReoptin_ = nullptr;};
      inline string getNotificationMessagesReoptin() const { DARABONBA_PTR_GET_DEFAULT(notificationMessagesReoptin_, "") };
      inline Data& setNotificationMessagesReoptin(string notificationMessagesReoptin) { DARABONBA_PTR_SET_VALUE(notificationMessagesReoptin_, notificationMessagesReoptin) };


      // notificationMessagesTimezone Field Functions 
      bool hasNotificationMessagesTimezone() const { return this->notificationMessagesTimezone_ != nullptr;};
      void deleteNotificationMessagesTimezone() { this->notificationMessagesTimezone_ = nullptr;};
      inline string getNotificationMessagesTimezone() const { DARABONBA_PTR_GET_DEFAULT(notificationMessagesTimezone_, "") };
      inline Data& setNotificationMessagesTimezone(string notificationMessagesTimezone) { DARABONBA_PTR_SET_VALUE(notificationMessagesTimezone_, notificationMessagesTimezone) };


      // notificationMessagesToken Field Functions 
      bool hasNotificationMessagesToken() const { return this->notificationMessagesToken_ != nullptr;};
      void deleteNotificationMessagesToken() { this->notificationMessagesToken_ = nullptr;};
      inline string getNotificationMessagesToken() const { DARABONBA_PTR_GET_DEFAULT(notificationMessagesToken_, "") };
      inline Data& setNotificationMessagesToken(string notificationMessagesToken) { DARABONBA_PTR_SET_VALUE(notificationMessagesToken_, notificationMessagesToken) };


      // pageId Field Functions 
      bool hasPageId() const { return this->pageId_ != nullptr;};
      void deletePageId() { this->pageId_ = nullptr;};
      inline string getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, "") };
      inline Data& setPageId(string pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


      // recipientId Field Functions 
      bool hasRecipientId() const { return this->recipientId_ != nullptr;};
      void deleteRecipientId() { this->recipientId_ = nullptr;};
      inline string getRecipientId() const { DARABONBA_PTR_GET_DEFAULT(recipientId_, "") };
      inline Data& setRecipientId(string recipientId) { DARABONBA_PTR_SET_VALUE(recipientId_, recipientId) };


      // tokenExpiryTimestamp Field Functions 
      bool hasTokenExpiryTimestamp() const { return this->tokenExpiryTimestamp_ != nullptr;};
      void deleteTokenExpiryTimestamp() { this->tokenExpiryTimestamp_ = nullptr;};
      inline int64_t getTokenExpiryTimestamp() const { DARABONBA_PTR_GET_DEFAULT(tokenExpiryTimestamp_, 0L) };
      inline Data& setTokenExpiryTimestamp(int64_t tokenExpiryTimestamp) { DARABONBA_PTR_SET_VALUE(tokenExpiryTimestamp_, tokenExpiryTimestamp) };


      // topicTitle Field Functions 
      bool hasTopicTitle() const { return this->topicTitle_ != nullptr;};
      void deleteTopicTitle() { this->topicTitle_ = nullptr;};
      inline string getTopicTitle() const { DARABONBA_PTR_GET_DEFAULT(topicTitle_, "") };
      inline Data& setTopicTitle(string topicTitle) { DARABONBA_PTR_SET_VALUE(topicTitle_, topicTitle) };


      // userTokenStatus Field Functions 
      bool hasUserTokenStatus() const { return this->userTokenStatus_ != nullptr;};
      void deleteUserTokenStatus() { this->userTokenStatus_ = nullptr;};
      inline string getUserTokenStatus() const { DARABONBA_PTR_GET_DEFAULT(userTokenStatus_, "") };
      inline Data& setUserTokenStatus(string userTokenStatus) { DARABONBA_PTR_SET_VALUE(userTokenStatus_, userTokenStatus) };


    protected:
      shared_ptr<int64_t> creationTimestamp_ {};
      shared_ptr<string> customAudienceId_ {};
      shared_ptr<int64_t> nextEligibleTime_ {};
      shared_ptr<string> notificationMessagesReoptin_ {};
      shared_ptr<string> notificationMessagesTimezone_ {};
      shared_ptr<string> notificationMessagesToken_ {};
      shared_ptr<string> pageId_ {};
      // The customer\\"s Page-scoped ID (PSID)
      shared_ptr<string> recipientId_ {};
      shared_ptr<int64_t> tokenExpiryTimestamp_ {};
      // The message\\"s title
      shared_ptr<string> topicTitle_ {};
      shared_ptr<string> userTokenStatus_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->nextPage_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListMessengerSubscriptionTokenResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListMessengerSubscriptionTokenResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMessengerSubscriptionTokenResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMessengerSubscriptionTokenResponseBody::Data>) };
    inline vector<ListMessengerSubscriptionTokenResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMessengerSubscriptionTokenResponseBody::Data>) };
    inline ListMessengerSubscriptionTokenResponseBody& setData(const vector<ListMessengerSubscriptionTokenResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMessengerSubscriptionTokenResponseBody& setData(vector<ListMessengerSubscriptionTokenResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListMessengerSubscriptionTokenResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextPage Field Functions 
    bool hasNextPage() const { return this->nextPage_ != nullptr;};
    void deleteNextPage() { this->nextPage_ = nullptr;};
    inline string getNextPage() const { DARABONBA_PTR_GET_DEFAULT(nextPage_, "") };
    inline ListMessengerSubscriptionTokenResponseBody& setNextPage(string nextPage) { DARABONBA_PTR_SET_VALUE(nextPage_, nextPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMessengerSubscriptionTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMessengerSubscriptionTokenResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListMessengerSubscriptionTokenResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> nextPage_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cams20200606
#endif
