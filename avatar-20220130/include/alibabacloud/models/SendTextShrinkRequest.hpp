// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDTEXTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDTEXTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SendTextShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendTextShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(Interrupt, interrupt_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StreamExtension, streamExtensionShrink_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(UniqueCode, uniqueCode_);
    };
    friend void from_json(const Darabonba::Json& j, SendTextShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(Interrupt, interrupt_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StreamExtension, streamExtensionShrink_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(UniqueCode, uniqueCode_);
    };
    SendTextShrinkRequest() = default ;
    SendTextShrinkRequest(const SendTextShrinkRequest &) = default ;
    SendTextShrinkRequest(SendTextShrinkRequest &&) = default ;
    SendTextShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendTextShrinkRequest() = default ;
    SendTextShrinkRequest& operator=(const SendTextShrinkRequest &) = default ;
    SendTextShrinkRequest& operator=(SendTextShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->feedback_ != nullptr
        && this->interrupt_ != nullptr && this->sessionId_ != nullptr && this->streamExtensionShrink_ != nullptr && this->tenantId_ != nullptr && this->text_ != nullptr
        && this->uniqueCode_ != nullptr; };
    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline bool feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, false) };
    inline SendTextShrinkRequest& setFeedback(bool feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // interrupt Field Functions 
    bool hasInterrupt() const { return this->interrupt_ != nullptr;};
    void deleteInterrupt() { this->interrupt_ = nullptr;};
    inline bool interrupt() const { DARABONBA_PTR_GET_DEFAULT(interrupt_, false) };
    inline SendTextShrinkRequest& setInterrupt(bool interrupt) { DARABONBA_PTR_SET_VALUE(interrupt_, interrupt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendTextShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // streamExtensionShrink Field Functions 
    bool hasStreamExtensionShrink() const { return this->streamExtensionShrink_ != nullptr;};
    void deleteStreamExtensionShrink() { this->streamExtensionShrink_ = nullptr;};
    inline string streamExtensionShrink() const { DARABONBA_PTR_GET_DEFAULT(streamExtensionShrink_, "") };
    inline SendTextShrinkRequest& setStreamExtensionShrink(string streamExtensionShrink) { DARABONBA_PTR_SET_VALUE(streamExtensionShrink_, streamExtensionShrink) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SendTextShrinkRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SendTextShrinkRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // uniqueCode Field Functions 
    bool hasUniqueCode() const { return this->uniqueCode_ != nullptr;};
    void deleteUniqueCode() { this->uniqueCode_ = nullptr;};
    inline string uniqueCode() const { DARABONBA_PTR_GET_DEFAULT(uniqueCode_, "") };
    inline SendTextShrinkRequest& setUniqueCode(string uniqueCode) { DARABONBA_PTR_SET_VALUE(uniqueCode_, uniqueCode) };


  protected:
    std::shared_ptr<bool> feedback_ = nullptr;
    std::shared_ptr<bool> interrupt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> streamExtensionShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> text_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uniqueCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
