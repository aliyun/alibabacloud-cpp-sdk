// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SendMessageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StreamExtension, streamExtensionShrink_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TextRequest, textRequestShrink_);
      DARABONBA_PTR_TO_JSON(VAMLRequest, VAMLRequestShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StreamExtension, streamExtensionShrink_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TextRequest, textRequestShrink_);
      DARABONBA_PTR_FROM_JSON(VAMLRequest, VAMLRequestShrink_);
    };
    SendMessageShrinkRequest() = default ;
    SendMessageShrinkRequest(const SendMessageShrinkRequest &) = default ;
    SendMessageShrinkRequest(SendMessageShrinkRequest &&) = default ;
    SendMessageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageShrinkRequest() = default ;
    SendMessageShrinkRequest& operator=(const SendMessageShrinkRequest &) = default ;
    SendMessageShrinkRequest& operator=(SendMessageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->feedback_ != nullptr
        && this->sessionId_ != nullptr && this->streamExtensionShrink_ != nullptr && this->tenantId_ != nullptr && this->textRequestShrink_ != nullptr && this->VAMLRequestShrink_ != nullptr; };
    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline bool feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, false) };
    inline SendMessageShrinkRequest& setFeedback(bool feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendMessageShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // streamExtensionShrink Field Functions 
    bool hasStreamExtensionShrink() const { return this->streamExtensionShrink_ != nullptr;};
    void deleteStreamExtensionShrink() { this->streamExtensionShrink_ = nullptr;};
    inline string streamExtensionShrink() const { DARABONBA_PTR_GET_DEFAULT(streamExtensionShrink_, "") };
    inline SendMessageShrinkRequest& setStreamExtensionShrink(string streamExtensionShrink) { DARABONBA_PTR_SET_VALUE(streamExtensionShrink_, streamExtensionShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SendMessageShrinkRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // textRequestShrink Field Functions 
    bool hasTextRequestShrink() const { return this->textRequestShrink_ != nullptr;};
    void deleteTextRequestShrink() { this->textRequestShrink_ = nullptr;};
    inline string textRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(textRequestShrink_, "") };
    inline SendMessageShrinkRequest& setTextRequestShrink(string textRequestShrink) { DARABONBA_PTR_SET_VALUE(textRequestShrink_, textRequestShrink) };


    // VAMLRequestShrink Field Functions 
    bool hasVAMLRequestShrink() const { return this->VAMLRequestShrink_ != nullptr;};
    void deleteVAMLRequestShrink() { this->VAMLRequestShrink_ = nullptr;};
    inline string VAMLRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(VAMLRequestShrink_, "") };
    inline SendMessageShrinkRequest& setVAMLRequestShrink(string VAMLRequestShrink) { DARABONBA_PTR_SET_VALUE(VAMLRequestShrink_, VAMLRequestShrink) };


  protected:
    std::shared_ptr<bool> feedback_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> streamExtensionShrink_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<string> textRequestShrink_ = nullptr;
    std::shared_ptr<string> VAMLRequestShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
