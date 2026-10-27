// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIGCCHATCOMPLETIONSTREAMHEADERS_HPP_
#define ALIBABACLOUD_MODELS_AIGCCHATCOMPLETIONSTREAMHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasQIService20260831
{
namespace Models
{
  class AigcChatCompletionStreamHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AigcChatCompletionStreamHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(X-QI-Agent-Api-Key, xQIAgentApiKey_);
      DARABONBA_PTR_TO_JSON(X-QI-Instance-Id, xQIInstanceId_);
      DARABONBA_PTR_TO_JSON(X-QI-Session-Id, xQISessionId_);
    };
    friend void from_json(const Darabonba::Json& j, AigcChatCompletionStreamHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(X-QI-Agent-Api-Key, xQIAgentApiKey_);
      DARABONBA_PTR_FROM_JSON(X-QI-Instance-Id, xQIInstanceId_);
      DARABONBA_PTR_FROM_JSON(X-QI-Session-Id, xQISessionId_);
    };
    AigcChatCompletionStreamHeaders() = default ;
    AigcChatCompletionStreamHeaders(const AigcChatCompletionStreamHeaders &) = default ;
    AigcChatCompletionStreamHeaders(AigcChatCompletionStreamHeaders &&) = default ;
    AigcChatCompletionStreamHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AigcChatCompletionStreamHeaders() = default ;
    AigcChatCompletionStreamHeaders& operator=(const AigcChatCompletionStreamHeaders &) = default ;
    AigcChatCompletionStreamHeaders& operator=(AigcChatCompletionStreamHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonHeaders_ == nullptr
        && this->xQIAgentApiKey_ == nullptr && this->xQIInstanceId_ == nullptr && this->xQISessionId_ == nullptr; };
    // commonHeaders Field Functions 
    bool hasCommonHeaders() const { return this->commonHeaders_ != nullptr;};
    void deleteCommonHeaders() { this->commonHeaders_ = nullptr;};
    inline const map<string, string> & getCommonHeaders() const { DARABONBA_PTR_GET_CONST(commonHeaders_, map<string, string>) };
    inline map<string, string> getCommonHeaders() { DARABONBA_PTR_GET(commonHeaders_, map<string, string>) };
    inline AigcChatCompletionStreamHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline AigcChatCompletionStreamHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xQIAgentApiKey Field Functions 
    bool hasXQIAgentApiKey() const { return this->xQIAgentApiKey_ != nullptr;};
    void deleteXQIAgentApiKey() { this->xQIAgentApiKey_ = nullptr;};
    inline string getXQIAgentApiKey() const { DARABONBA_PTR_GET_DEFAULT(xQIAgentApiKey_, "") };
    inline AigcChatCompletionStreamHeaders& setXQIAgentApiKey(string xQIAgentApiKey) { DARABONBA_PTR_SET_VALUE(xQIAgentApiKey_, xQIAgentApiKey) };


    // xQIInstanceId Field Functions 
    bool hasXQIInstanceId() const { return this->xQIInstanceId_ != nullptr;};
    void deleteXQIInstanceId() { this->xQIInstanceId_ = nullptr;};
    inline string getXQIInstanceId() const { DARABONBA_PTR_GET_DEFAULT(xQIInstanceId_, "") };
    inline AigcChatCompletionStreamHeaders& setXQIInstanceId(string xQIInstanceId) { DARABONBA_PTR_SET_VALUE(xQIInstanceId_, xQIInstanceId) };


    // xQISessionId Field Functions 
    bool hasXQISessionId() const { return this->xQISessionId_ != nullptr;};
    void deleteXQISessionId() { this->xQISessionId_ = nullptr;};
    inline string getXQISessionId() const { DARABONBA_PTR_GET_DEFAULT(xQISessionId_, "") };
    inline AigcChatCompletionStreamHeaders& setXQISessionId(string xQISessionId) { DARABONBA_PTR_SET_VALUE(xQISessionId_, xQISessionId) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // The instance access key. The key must belong to the Creative Agent instance being called. This key is different from the AccessKey Secret used for OpenAPI signing. Do not expose it publicly.
    // 
    // This parameter is required.
    shared_ptr<string> xQIAgentApiKey_ {};
    // The published Creative Agent instance ID. Must correspond to the X-QI-Agent-Api-Key.
    // 
    // This parameter is required.
    shared_ptr<string> xQIInstanceId_ {};
    // The session identifier. Can be omitted for the first turn. Obtain it from the qi_session_id field in the SSE response and pass it back in subsequent turns. Use no more than 128 characters consisting of letters, digits, periods, underscores, colons, or hyphens.
    shared_ptr<string> xQISessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
