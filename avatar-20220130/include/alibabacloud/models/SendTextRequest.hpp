// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SendTextRequestStreamExtension.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SendTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(Interrupt, interrupt_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StreamExtension, streamExtension_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(UniqueCode, uniqueCode_);
    };
    friend void from_json(const Darabonba::Json& j, SendTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(Interrupt, interrupt_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StreamExtension, streamExtension_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(UniqueCode, uniqueCode_);
    };
    SendTextRequest() = default ;
    SendTextRequest(const SendTextRequest &) = default ;
    SendTextRequest(SendTextRequest &&) = default ;
    SendTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendTextRequest() = default ;
    SendTextRequest& operator=(const SendTextRequest &) = default ;
    SendTextRequest& operator=(SendTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->feedback_ != nullptr
        && this->interrupt_ != nullptr && this->sessionId_ != nullptr && this->streamExtension_ != nullptr && this->tenantId_ != nullptr && this->text_ != nullptr
        && this->uniqueCode_ != nullptr; };
    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline bool feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, false) };
    inline SendTextRequest& setFeedback(bool feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // interrupt Field Functions 
    bool hasInterrupt() const { return this->interrupt_ != nullptr;};
    void deleteInterrupt() { this->interrupt_ = nullptr;};
    inline bool interrupt() const { DARABONBA_PTR_GET_DEFAULT(interrupt_, false) };
    inline SendTextRequest& setInterrupt(bool interrupt) { DARABONBA_PTR_SET_VALUE(interrupt_, interrupt) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendTextRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // streamExtension Field Functions 
    bool hasStreamExtension() const { return this->streamExtension_ != nullptr;};
    void deleteStreamExtension() { this->streamExtension_ = nullptr;};
    inline const SendTextRequestStreamExtension & streamExtension() const { DARABONBA_PTR_GET_CONST(streamExtension_, SendTextRequestStreamExtension) };
    inline SendTextRequestStreamExtension streamExtension() { DARABONBA_PTR_GET(streamExtension_, SendTextRequestStreamExtension) };
    inline SendTextRequest& setStreamExtension(const SendTextRequestStreamExtension & streamExtension) { DARABONBA_PTR_SET_VALUE(streamExtension_, streamExtension) };
    inline SendTextRequest& setStreamExtension(SendTextRequestStreamExtension && streamExtension) { DARABONBA_PTR_SET_RVALUE(streamExtension_, streamExtension) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SendTextRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline SendTextRequest& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // uniqueCode Field Functions 
    bool hasUniqueCode() const { return this->uniqueCode_ != nullptr;};
    void deleteUniqueCode() { this->uniqueCode_ = nullptr;};
    inline string uniqueCode() const { DARABONBA_PTR_GET_DEFAULT(uniqueCode_, "") };
    inline SendTextRequest& setUniqueCode(string uniqueCode) { DARABONBA_PTR_SET_VALUE(uniqueCode_, uniqueCode) };


  protected:
    std::shared_ptr<bool> feedback_ = nullptr;
    std::shared_ptr<bool> interrupt_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<SendTextRequestStreamExtension> streamExtension_ = nullptr;
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
