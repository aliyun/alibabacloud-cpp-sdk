// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAIAGENTVIDEOAUDITTASKREQUESTCALLBACKCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAIAGENTVIDEOAUDITTASKREQUESTCALLBACKCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitAIAgentVideoAuditTaskRequestCallbackConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAIAgentVideoAuditTaskRequestCallbackConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAIAgentVideoAuditTaskRequestCallbackConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    SubmitAIAgentVideoAuditTaskRequestCallbackConfig() = default ;
    SubmitAIAgentVideoAuditTaskRequestCallbackConfig(const SubmitAIAgentVideoAuditTaskRequestCallbackConfig &) = default ;
    SubmitAIAgentVideoAuditTaskRequestCallbackConfig(SubmitAIAgentVideoAuditTaskRequestCallbackConfig &&) = default ;
    SubmitAIAgentVideoAuditTaskRequestCallbackConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAIAgentVideoAuditTaskRequestCallbackConfig() = default ;
    SubmitAIAgentVideoAuditTaskRequestCallbackConfig& operator=(const SubmitAIAgentVideoAuditTaskRequestCallbackConfig &) = default ;
    SubmitAIAgentVideoAuditTaskRequestCallbackConfig& operator=(SubmitAIAgentVideoAuditTaskRequestCallbackConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->token_ != nullptr
        && this->url_ != nullptr; };
    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline SubmitAIAgentVideoAuditTaskRequestCallbackConfig& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitAIAgentVideoAuditTaskRequestCallbackConfig& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
