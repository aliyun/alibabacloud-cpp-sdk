// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEOUTPUTITEMSHARERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DISABLEOUTPUTITEMSHARERESPONSEBODY_HPP_
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
  class DisableOutputItemShareResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableOutputItemShareResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_TO_JSON(shareEnabled, shareEnabled_);
      DARABONBA_PTR_TO_JSON(shareEnabledAt, shareEnabledAt_);
      DARABONBA_PTR_TO_JSON(sharePath, sharePath_);
      DARABONBA_PTR_TO_JSON(shareToken, shareToken_);
      DARABONBA_PTR_TO_JSON(shareUrl, shareUrl_);
      DARABONBA_PTR_TO_JSON(shareUserGroupIds, shareUserGroupIds_);
      DARABONBA_PTR_TO_JSON(shareUserIds, shareUserIds_);
    };
    friend void from_json(const Darabonba::Json& j, DisableOutputItemShareResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(outputItemId, outputItemId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(shareAccessType, shareAccessType_);
      DARABONBA_PTR_FROM_JSON(shareEnabled, shareEnabled_);
      DARABONBA_PTR_FROM_JSON(shareEnabledAt, shareEnabledAt_);
      DARABONBA_PTR_FROM_JSON(sharePath, sharePath_);
      DARABONBA_PTR_FROM_JSON(shareToken, shareToken_);
      DARABONBA_PTR_FROM_JSON(shareUrl, shareUrl_);
      DARABONBA_PTR_FROM_JSON(shareUserGroupIds, shareUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(shareUserIds, shareUserIds_);
    };
    DisableOutputItemShareResponseBody() = default ;
    DisableOutputItemShareResponseBody(const DisableOutputItemShareResponseBody &) = default ;
    DisableOutputItemShareResponseBody(DisableOutputItemShareResponseBody &&) = default ;
    DisableOutputItemShareResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableOutputItemShareResponseBody() = default ;
    DisableOutputItemShareResponseBody& operator=(const DisableOutputItemShareResponseBody &) = default ;
    DisableOutputItemShareResponseBody& operator=(DisableOutputItemShareResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->outputItemId_ == nullptr && this->requestId_ == nullptr && this->shareAccessType_ == nullptr && this->shareEnabled_ == nullptr
        && this->shareEnabledAt_ == nullptr && this->sharePath_ == nullptr && this->shareToken_ == nullptr && this->shareUrl_ == nullptr && this->shareUserGroupIds_ == nullptr
        && this->shareUserIds_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DisableOutputItemShareResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DisableOutputItemShareResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // outputItemId Field Functions 
    bool hasOutputItemId() const { return this->outputItemId_ != nullptr;};
    void deleteOutputItemId() { this->outputItemId_ = nullptr;};
    inline string getOutputItemId() const { DARABONBA_PTR_GET_DEFAULT(outputItemId_, "") };
    inline DisableOutputItemShareResponseBody& setOutputItemId(string outputItemId) { DARABONBA_PTR_SET_VALUE(outputItemId_, outputItemId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DisableOutputItemShareResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shareAccessType Field Functions 
    bool hasShareAccessType() const { return this->shareAccessType_ != nullptr;};
    void deleteShareAccessType() { this->shareAccessType_ = nullptr;};
    inline string getShareAccessType() const { DARABONBA_PTR_GET_DEFAULT(shareAccessType_, "") };
    inline DisableOutputItemShareResponseBody& setShareAccessType(string shareAccessType) { DARABONBA_PTR_SET_VALUE(shareAccessType_, shareAccessType) };


    // shareEnabled Field Functions 
    bool hasShareEnabled() const { return this->shareEnabled_ != nullptr;};
    void deleteShareEnabled() { this->shareEnabled_ = nullptr;};
    inline bool getShareEnabled() const { DARABONBA_PTR_GET_DEFAULT(shareEnabled_, false) };
    inline DisableOutputItemShareResponseBody& setShareEnabled(bool shareEnabled) { DARABONBA_PTR_SET_VALUE(shareEnabled_, shareEnabled) };


    // shareEnabledAt Field Functions 
    bool hasShareEnabledAt() const { return this->shareEnabledAt_ != nullptr;};
    void deleteShareEnabledAt() { this->shareEnabledAt_ = nullptr;};
    inline string getShareEnabledAt() const { DARABONBA_PTR_GET_DEFAULT(shareEnabledAt_, "") };
    inline DisableOutputItemShareResponseBody& setShareEnabledAt(string shareEnabledAt) { DARABONBA_PTR_SET_VALUE(shareEnabledAt_, shareEnabledAt) };


    // sharePath Field Functions 
    bool hasSharePath() const { return this->sharePath_ != nullptr;};
    void deleteSharePath() { this->sharePath_ = nullptr;};
    inline string getSharePath() const { DARABONBA_PTR_GET_DEFAULT(sharePath_, "") };
    inline DisableOutputItemShareResponseBody& setSharePath(string sharePath) { DARABONBA_PTR_SET_VALUE(sharePath_, sharePath) };


    // shareToken Field Functions 
    bool hasShareToken() const { return this->shareToken_ != nullptr;};
    void deleteShareToken() { this->shareToken_ = nullptr;};
    inline string getShareToken() const { DARABONBA_PTR_GET_DEFAULT(shareToken_, "") };
    inline DisableOutputItemShareResponseBody& setShareToken(string shareToken) { DARABONBA_PTR_SET_VALUE(shareToken_, shareToken) };


    // shareUrl Field Functions 
    bool hasShareUrl() const { return this->shareUrl_ != nullptr;};
    void deleteShareUrl() { this->shareUrl_ = nullptr;};
    inline string getShareUrl() const { DARABONBA_PTR_GET_DEFAULT(shareUrl_, "") };
    inline DisableOutputItemShareResponseBody& setShareUrl(string shareUrl) { DARABONBA_PTR_SET_VALUE(shareUrl_, shareUrl) };


    // shareUserGroupIds Field Functions 
    bool hasShareUserGroupIds() const { return this->shareUserGroupIds_ != nullptr;};
    void deleteShareUserGroupIds() { this->shareUserGroupIds_ = nullptr;};
    inline const vector<string> & getShareUserGroupIds() const { DARABONBA_PTR_GET_CONST(shareUserGroupIds_, vector<string>) };
    inline vector<string> getShareUserGroupIds() { DARABONBA_PTR_GET(shareUserGroupIds_, vector<string>) };
    inline DisableOutputItemShareResponseBody& setShareUserGroupIds(const vector<string> & shareUserGroupIds) { DARABONBA_PTR_SET_VALUE(shareUserGroupIds_, shareUserGroupIds) };
    inline DisableOutputItemShareResponseBody& setShareUserGroupIds(vector<string> && shareUserGroupIds) { DARABONBA_PTR_SET_RVALUE(shareUserGroupIds_, shareUserGroupIds) };


    // shareUserIds Field Functions 
    bool hasShareUserIds() const { return this->shareUserIds_ != nullptr;};
    void deleteShareUserIds() { this->shareUserIds_ = nullptr;};
    inline const vector<int64_t> & getShareUserIds() const { DARABONBA_PTR_GET_CONST(shareUserIds_, vector<int64_t>) };
    inline vector<int64_t> getShareUserIds() { DARABONBA_PTR_GET(shareUserIds_, vector<int64_t>) };
    inline DisableOutputItemShareResponseBody& setShareUserIds(const vector<int64_t> & shareUserIds) { DARABONBA_PTR_SET_VALUE(shareUserIds_, shareUserIds) };
    inline DisableOutputItemShareResponseBody& setShareUserIds(vector<int64_t> && shareUserIds) { DARABONBA_PTR_SET_RVALUE(shareUserIds_, shareUserIds) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The output item ID.
    shared_ptr<string> outputItemId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The most recently configured sharing scope.
    shared_ptr<string> shareAccessType_ {};
    // Indicates whether sharing is enabled.
    shared_ptr<bool> shareEnabled_ {};
    // The time when sharing was most recently enabled, in ISO 8601 format.
    shared_ptr<string> shareEnabledAt_ {};
    // The relative path for internal sharing. This value is empty when sharing is disabled.
    shared_ptr<string> sharePath_ {};
    // The sharing token. This token exists when sharing is enabled and can be used to access the public sharing preview API operation.
    shared_ptr<string> shareToken_ {};
    // The current absolute sharing URL. This value is empty when sharing is disabled.
    shared_ptr<string> shareUrl_ {};
    // The list of specified user group IDs from the most recent configuration.
    shared_ptr<vector<string>> shareUserGroupIds_ {};
    // The list of specified user IDs from the most recent configuration.
    shared_ptr<vector<int64_t>> shareUserIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
