// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SendCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_ANY_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Feedback, feedback_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UniqueCode, uniqueCode_);
    };
    friend void from_json(const Darabonba::Json& j, SendCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_ANY_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Feedback, feedback_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UniqueCode, uniqueCode_);
    };
    SendCommandRequest() = default ;
    SendCommandRequest(const SendCommandRequest &) = default ;
    SendCommandRequest(SendCommandRequest &&) = default ;
    SendCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendCommandRequest() = default ;
    SendCommandRequest& operator=(const SendCommandRequest &) = default ;
    SendCommandRequest& operator=(SendCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->content_ != nullptr && this->feedback_ != nullptr && this->sessionId_ != nullptr && this->tenantId_ != nullptr && this->uniqueCode_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SendCommandRequest& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline     const Darabonba::Json & content() const { DARABONBA_GET(content_) };
    Darabonba::Json & content() { DARABONBA_GET(content_) };
    inline SendCommandRequest& setContent(const Darabonba::Json & content) { DARABONBA_SET_VALUE(content_, content) };
    inline SendCommandRequest& setContent(Darabonba::Json & content) { DARABONBA_SET_RVALUE(content_, content) };


    // feedback Field Functions 
    bool hasFeedback() const { return this->feedback_ != nullptr;};
    void deleteFeedback() { this->feedback_ = nullptr;};
    inline bool feedback() const { DARABONBA_PTR_GET_DEFAULT(feedback_, false) };
    inline SendCommandRequest& setFeedback(bool feedback) { DARABONBA_PTR_SET_VALUE(feedback_, feedback) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendCommandRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SendCommandRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // uniqueCode Field Functions 
    bool hasUniqueCode() const { return this->uniqueCode_ != nullptr;};
    void deleteUniqueCode() { this->uniqueCode_ = nullptr;};
    inline string uniqueCode() const { DARABONBA_PTR_GET_DEFAULT(uniqueCode_, "") };
    inline SendCommandRequest& setUniqueCode(string uniqueCode) { DARABONBA_PTR_SET_VALUE(uniqueCode_, uniqueCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> code_ = nullptr;
    Darabonba::Json content_ = nullptr;
    std::shared_ptr<bool> feedback_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> uniqueCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
