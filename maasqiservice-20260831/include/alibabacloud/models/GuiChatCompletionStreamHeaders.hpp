// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GUICHATCOMPLETIONSTREAMHEADERS_HPP_
#define ALIBABACLOUD_MODELS_GUICHATCOMPLETIONSTREAMHEADERS_HPP_
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
  class GuiChatCompletionStreamHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GuiChatCompletionStreamHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_TO_JSON(X-QI-Agent-Api-Key, xQIAgentApiKey_);
      DARABONBA_PTR_TO_JSON(X-QI-Instance-Id, xQIInstanceId_);
      DARABONBA_PTR_TO_JSON(X-QI-Session-Id, xQISessionId_);
    };
    friend void from_json(const Darabonba::Json& j, GuiChatCompletionStreamHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(commonHeaders, commonHeaders_);
      DARABONBA_PTR_FROM_JSON(X-QI-Agent-Api-Key, xQIAgentApiKey_);
      DARABONBA_PTR_FROM_JSON(X-QI-Instance-Id, xQIInstanceId_);
      DARABONBA_PTR_FROM_JSON(X-QI-Session-Id, xQISessionId_);
    };
    GuiChatCompletionStreamHeaders() = default ;
    GuiChatCompletionStreamHeaders(const GuiChatCompletionStreamHeaders &) = default ;
    GuiChatCompletionStreamHeaders(GuiChatCompletionStreamHeaders &&) = default ;
    GuiChatCompletionStreamHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GuiChatCompletionStreamHeaders() = default ;
    GuiChatCompletionStreamHeaders& operator=(const GuiChatCompletionStreamHeaders &) = default ;
    GuiChatCompletionStreamHeaders& operator=(GuiChatCompletionStreamHeaders &&) = default ;
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
    inline GuiChatCompletionStreamHeaders& setCommonHeaders(const map<string, string> & commonHeaders) { DARABONBA_PTR_SET_VALUE(commonHeaders_, commonHeaders) };
    inline GuiChatCompletionStreamHeaders& setCommonHeaders(map<string, string> && commonHeaders) { DARABONBA_PTR_SET_RVALUE(commonHeaders_, commonHeaders) };


    // xQIAgentApiKey Field Functions 
    bool hasXQIAgentApiKey() const { return this->xQIAgentApiKey_ != nullptr;};
    void deleteXQIAgentApiKey() { this->xQIAgentApiKey_ = nullptr;};
    inline string getXQIAgentApiKey() const { DARABONBA_PTR_GET_DEFAULT(xQIAgentApiKey_, "") };
    inline GuiChatCompletionStreamHeaders& setXQIAgentApiKey(string xQIAgentApiKey) { DARABONBA_PTR_SET_VALUE(xQIAgentApiKey_, xQIAgentApiKey) };


    // xQIInstanceId Field Functions 
    bool hasXQIInstanceId() const { return this->xQIInstanceId_ != nullptr;};
    void deleteXQIInstanceId() { this->xQIInstanceId_ = nullptr;};
    inline string getXQIInstanceId() const { DARABONBA_PTR_GET_DEFAULT(xQIInstanceId_, "") };
    inline GuiChatCompletionStreamHeaders& setXQIInstanceId(string xQIInstanceId) { DARABONBA_PTR_SET_VALUE(xQIInstanceId_, xQIInstanceId) };


    // xQISessionId Field Functions 
    bool hasXQISessionId() const { return this->xQISessionId_ != nullptr;};
    void deleteXQISessionId() { this->xQISessionId_ = nullptr;};
    inline string getXQISessionId() const { DARABONBA_PTR_GET_DEFAULT(xQISessionId_, "") };
    inline GuiChatCompletionStreamHeaders& setXQISessionId(string xQISessionId) { DARABONBA_PTR_SET_VALUE(xQISessionId_, xQISessionId) };


  protected:
    shared_ptr<map<string, string>> commonHeaders_ {};
    // This parameter is required.
    shared_ptr<string> xQIAgentApiKey_ {};
    // This parameter is required.
    shared_ptr<string> xQIInstanceId_ {};
    shared_ptr<string> xQISessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
