// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLECONVERSATIONSHARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ENABLECONVERSATIONSHARERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class EnableConversationShareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableConversationShareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_TO_JSON(shareEnabled, shareEnabled_);
      DARABONBA_PTR_TO_JSON(shareEnabledAt, shareEnabledAt_);
      DARABONBA_PTR_TO_JSON(sharePath, sharePath_);
      DARABONBA_PTR_TO_JSON(shareToken, shareToken_);
      DARABONBA_PTR_TO_JSON(shareUrl, shareUrl_);
      DARABONBA_PTR_TO_JSON(shareUserGroupIds, shareUserGroupIds_);
      DARABONBA_PTR_TO_JSON(shareUserIds, shareUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, EnableConversationShareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_FROM_JSON(shareEnabled, shareEnabled_);
      DARABONBA_PTR_FROM_JSON(shareEnabledAt, shareEnabledAt_);
      DARABONBA_PTR_FROM_JSON(sharePath, sharePath_);
      DARABONBA_PTR_FROM_JSON(shareToken, shareToken_);
      DARABONBA_PTR_FROM_JSON(shareUrl, shareUrl_);
      DARABONBA_PTR_FROM_JSON(shareUserGroupIds, shareUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(shareUserIds, shareUserIds_);
    };
    EnableConversationShareResponseBody() = default ;
    EnableConversationShareResponseBody(const EnableConversationShareResponseBody &) = default ;
    EnableConversationShareResponseBody(EnableConversationShareResponseBody &&) = default ;
    EnableConversationShareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableConversationShareResponseBody() = default ;
    EnableConversationShareResponseBody& operator=(const EnableConversationShareResponseBody &) = default ;
    EnableConversationShareResponseBody& operator=(EnableConversationShareResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->sessionId_ == nullptr && this->shareAccessType_ == nullptr && this->shareEnabled_ == nullptr
        && this->shareEnabledAt_ == nullptr && this->sharePath_ == nullptr && this->shareToken_ == nullptr && this->shareUrl_ == nullptr && this->shareUserGroupIds_ == nullptr
        && this->shareUserIds_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline EnableConversationShareResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline EnableConversationShareResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EnableConversationShareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline EnableConversationShareResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // shareAccessType Field Functions 
    bool hasShareAccessType() const { return this->shareAccessType_ != nullptr;};
    void deleteShareAccessType() { this->shareAccessType_ = nullptr;};
    inline string getShareAccessType() const { DARABONBA_PTR_GET_DEFAULT(shareAccessType_, "") };
    inline EnableConversationShareResponseBody& setShareAccessType(string shareAccessType) { DARABONBA_PTR_SET_VALUE(shareAccessType_, shareAccessType) };


    // shareEnabled Field Functions 
    bool hasShareEnabled() const { return this->shareEnabled_ != nullptr;};
    void deleteShareEnabled() { this->shareEnabled_ = nullptr;};
    inline bool getShareEnabled() const { DARABONBA_PTR_GET_DEFAULT(shareEnabled_, false) };
    inline EnableConversationShareResponseBody& setShareEnabled(bool shareEnabled) { DARABONBA_PTR_SET_VALUE(shareEnabled_, shareEnabled) };


    // shareEnabledAt Field Functions 
    bool hasShareEnabledAt() const { return this->shareEnabledAt_ != nullptr;};
    void deleteShareEnabledAt() { this->shareEnabledAt_ = nullptr;};
    inline string getShareEnabledAt() const { DARABONBA_PTR_GET_DEFAULT(shareEnabledAt_, "") };
    inline EnableConversationShareResponseBody& setShareEnabledAt(string shareEnabledAt) { DARABONBA_PTR_SET_VALUE(shareEnabledAt_, shareEnabledAt) };


    // sharePath Field Functions 
    bool hasSharePath() const { return this->sharePath_ != nullptr;};
    void deleteSharePath() { this->sharePath_ = nullptr;};
    inline string getSharePath() const { DARABONBA_PTR_GET_DEFAULT(sharePath_, "") };
    inline EnableConversationShareResponseBody& setSharePath(string sharePath) { DARABONBA_PTR_SET_VALUE(sharePath_, sharePath) };


    // shareToken Field Functions 
    bool hasShareToken() const { return this->shareToken_ != nullptr;};
    void deleteShareToken() { this->shareToken_ = nullptr;};
    inline string getShareToken() const { DARABONBA_PTR_GET_DEFAULT(shareToken_, "") };
    inline EnableConversationShareResponseBody& setShareToken(string shareToken) { DARABONBA_PTR_SET_VALUE(shareToken_, shareToken) };


    // shareUrl Field Functions 
    bool hasShareUrl() const { return this->shareUrl_ != nullptr;};
    void deleteShareUrl() { this->shareUrl_ = nullptr;};
    inline string getShareUrl() const { DARABONBA_PTR_GET_DEFAULT(shareUrl_, "") };
    inline EnableConversationShareResponseBody& setShareUrl(string shareUrl) { DARABONBA_PTR_SET_VALUE(shareUrl_, shareUrl) };


    // shareUserGroupIds Field Functions 
    bool hasShareUserGroupIds() const { return this->shareUserGroupIds_ != nullptr;};
    void deleteShareUserGroupIds() { this->shareUserGroupIds_ = nullptr;};
    inline const vector<string> & getShareUserGroupIds() const { DARABONBA_PTR_GET_CONST(shareUserGroupIds_, vector<string>) };
    inline vector<string> getShareUserGroupIds() { DARABONBA_PTR_GET(shareUserGroupIds_, vector<string>) };
    inline EnableConversationShareResponseBody& setShareUserGroupIds(const vector<string> & shareUserGroupIds) { DARABONBA_PTR_SET_VALUE(shareUserGroupIds_, shareUserGroupIds) };
    inline EnableConversationShareResponseBody& setShareUserGroupIds(vector<string> && shareUserGroupIds) { DARABONBA_PTR_SET_RVALUE(shareUserGroupIds_, shareUserGroupIds) };


    // shareUserIds Field Functions 
    bool hasShareUserIds() const { return this->shareUserIds_ != nullptr;};
    void deleteShareUserIds() { this->shareUserIds_ = nullptr;};
    inline const vector<int64_t> & getShareUserIds() const { DARABONBA_PTR_GET_CONST(shareUserIds_, vector<int64_t>) };
    inline vector<int64_t> getShareUserIds() { DARABONBA_PTR_GET(shareUserIds_, vector<int64_t>) };
    inline EnableConversationShareResponseBody& setShareUserIds(const vector<int64_t> & shareUserIds) { DARABONBA_PTR_SET_VALUE(shareUserIds_, shareUserIds) };
    inline EnableConversationShareResponseBody& setShareUserIds(vector<int64_t> && shareUserIds) { DARABONBA_PTR_SET_RVALUE(shareUserIds_, shareUserIds) };


  protected:
    // The result code. A value of SUCCESS indicates success. For failures, the corresponding error type is returned, such as ERR_BAD_REQUEST, ERR_VALIDATION_FAILED, or ERR_INTERNAL_SERVER_ERROR.
    shared_ptr<string> code_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The ID of the source single-chat session.
    shared_ptr<string> sessionId_ {};
    // The current sharing scope. Valid values: PUBLIC and SPECIFIED.
    shared_ptr<string> shareAccessType_ {};
    // Indicates whether sharing is enabled.
    shared_ptr<bool> shareEnabled_ {};
    // The time when sharing was most recently enabled, in ISO 8601 format.
    shared_ptr<string> shareEnabledAt_ {};
    // The relative path for in-site sharing. This value is empty when sharing is disabled.
    shared_ptr<string> sharePath_ {};
    // The sharing token. This token is present when sharing is enabled and can be used to access the public sharing preview API operation.
    shared_ptr<string> shareToken_ {};
    // The absolute URL of the current sharing link. This value is empty when sharing is disabled.
    shared_ptr<string> shareUrl_ {};
    // The list of currently specified user group IDs.
    shared_ptr<vector<string>> shareUserGroupIds_ {};
    // The list of currently specified user IDs.
    shared_ptr<vector<int64_t>> shareUserIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
