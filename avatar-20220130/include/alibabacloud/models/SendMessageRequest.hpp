// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDMESSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDMESSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SendMessageRequestStreamExtension.hpp>
#include <alibabacloud/models/SendMessageRequestTextRequest.hpp>
#include <alibabacloud/models/SendMessageRequestVAMLRequest.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SendMessageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendMessageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(StreamExtension, streamExtension_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TextRequest, textRequest_);
      DARABONBA_PTR_TO_JSON(VAMLRequest, VAMLRequest_);
    };
    friend void from_json(const Darabonba::Json& j, SendMessageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(StreamExtension, streamExtension_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TextRequest, textRequest_);
      DARABONBA_PTR_FROM_JSON(VAMLRequest, VAMLRequest_);
    };
    SendMessageRequest() = default ;
    SendMessageRequest(const SendMessageRequest &) = default ;
    SendMessageRequest(SendMessageRequest &&) = default ;
    SendMessageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendMessageRequest() = default ;
    SendMessageRequest& operator=(const SendMessageRequest &) = default ;
    SendMessageRequest& operator=(SendMessageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->feedback_ != nullptr
        && this->sessionId_ != nullptr && this->streamExtension_ != nullptr && this->tenantId_ != nullptr && this->textRequest_ != nullptr && this->VAMLRequest_ != nullptr; };
    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline bool feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, false) };
    inline SendMessageRequest& setFeedback(bool feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendMessageRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // streamExtension Field Functions 
    bool hasStreamExtension() const { return this->streamExtension_ != nullptr;};
    void deleteStreamExtension() { this->streamExtension_ = nullptr;};
    inline const SendMessageRequestStreamExtension & streamExtension() const { DARABONBA_PTR_GET_CONST(streamExtension_, SendMessageRequestStreamExtension) };
    inline SendMessageRequestStreamExtension streamExtension() { DARABONBA_PTR_GET(streamExtension_, SendMessageRequestStreamExtension) };
    inline SendMessageRequest& setStreamExtension(const SendMessageRequestStreamExtension & streamExtension) { DARABONBA_PTR_SET_VALUE(streamExtension_, streamExtension) };
    inline SendMessageRequest& setStreamExtension(SendMessageRequestStreamExtension && streamExtension) { DARABONBA_PTR_SET_RVALUE(streamExtension_, streamExtension) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SendMessageRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // textRequest Field Functions 
    bool hasTextRequest() const { return this->textRequest_ != nullptr;};
    void deleteTextRequest() { this->textRequest_ = nullptr;};
    inline const SendMessageRequestTextRequest & textRequest() const { DARABONBA_PTR_GET_CONST(textRequest_, SendMessageRequestTextRequest) };
    inline SendMessageRequestTextRequest textRequest() { DARABONBA_PTR_GET(textRequest_, SendMessageRequestTextRequest) };
    inline SendMessageRequest& setTextRequest(const SendMessageRequestTextRequest & textRequest) { DARABONBA_PTR_SET_VALUE(textRequest_, textRequest) };
    inline SendMessageRequest& setTextRequest(SendMessageRequestTextRequest && textRequest) { DARABONBA_PTR_SET_RVALUE(textRequest_, textRequest) };


    // VAMLRequest Field Functions 
    bool hasVAMLRequest() const { return this->VAMLRequest_ != nullptr;};
    void deleteVAMLRequest() { this->VAMLRequest_ = nullptr;};
    inline const SendMessageRequestVAMLRequest & VAMLRequest() const { DARABONBA_PTR_GET_CONST(VAMLRequest_, SendMessageRequestVAMLRequest) };
    inline SendMessageRequestVAMLRequest VAMLRequest() { DARABONBA_PTR_GET(VAMLRequest_, SendMessageRequestVAMLRequest) };
    inline SendMessageRequest& setVAMLRequest(const SendMessageRequestVAMLRequest & VAMLRequest) { DARABONBA_PTR_SET_VALUE(VAMLRequest_, VAMLRequest) };
    inline SendMessageRequest& setVAMLRequest(SendMessageRequestVAMLRequest && VAMLRequest) { DARABONBA_PTR_SET_RVALUE(VAMLRequest_, VAMLRequest) };


  protected:
    std::shared_ptr<bool> feedback_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<SendMessageRequestStreamExtension> streamExtension_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<SendMessageRequestTextRequest> textRequest_ = nullptr;
    std::shared_ptr<SendMessageRequestVAMLRequest> VAMLRequest_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
