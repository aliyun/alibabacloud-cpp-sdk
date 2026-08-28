// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEAIAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKEAIAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class InvokeAIAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAIAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentName, agentName_);
      DARABONBA_PTR_TO_JSON(bizParams, bizParams_);
      DARABONBA_PTR_TO_JSON(history, history_);
      DARABONBA_PTR_TO_JSON(outputLanguage, outputLanguage_);
      DARABONBA_PTR_TO_JSON(prompt, prompt_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAIAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentName, agentName_);
      DARABONBA_PTR_FROM_JSON(bizParams, bizParams_);
      DARABONBA_PTR_FROM_JSON(history, history_);
      DARABONBA_PTR_FROM_JSON(outputLanguage, outputLanguage_);
      DARABONBA_PTR_FROM_JSON(prompt, prompt_);
    };
    InvokeAIAgentRequest() = default ;
    InvokeAIAgentRequest(const InvokeAIAgentRequest &) = default ;
    InvokeAIAgentRequest(InvokeAIAgentRequest &&) = default ;
    InvokeAIAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAIAgentRequest() = default ;
    InvokeAIAgentRequest& operator=(const InvokeAIAgentRequest &) = default ;
    InvokeAIAgentRequest& operator=(InvokeAIAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class History : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const History& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(role, role_);
      };
      friend void from_json(const Darabonba::Json& j, History& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(role, role_);
      };
      History() = default ;
      History(const History &) = default ;
      History(History &&) = default ;
      History(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~History() = default ;
      History& operator=(const History &) = default ;
      History& operator=(History &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->role_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline History& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline History& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    protected:
      shared_ptr<string> content_ {};
      shared_ptr<string> role_ {};
    };

    virtual bool empty() const override { return this->agentName_ == nullptr
        && this->bizParams_ == nullptr && this->history_ == nullptr && this->outputLanguage_ == nullptr && this->prompt_ == nullptr; };
    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline InvokeAIAgentRequest& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // bizParams Field Functions 
    bool hasBizParams() const { return this->bizParams_ != nullptr;};
    void deleteBizParams() { this->bizParams_ = nullptr;};
    inline const map<string, string> & getBizParams() const { DARABONBA_PTR_GET_CONST(bizParams_, map<string, string>) };
    inline map<string, string> getBizParams() { DARABONBA_PTR_GET(bizParams_, map<string, string>) };
    inline InvokeAIAgentRequest& setBizParams(const map<string, string> & bizParams) { DARABONBA_PTR_SET_VALUE(bizParams_, bizParams) };
    inline InvokeAIAgentRequest& setBizParams(map<string, string> && bizParams) { DARABONBA_PTR_SET_RVALUE(bizParams_, bizParams) };


    // history Field Functions 
    bool hasHistory() const { return this->history_ != nullptr;};
    void deleteHistory() { this->history_ = nullptr;};
    inline const vector<InvokeAIAgentRequest::History> & getHistory() const { DARABONBA_PTR_GET_CONST(history_, vector<InvokeAIAgentRequest::History>) };
    inline vector<InvokeAIAgentRequest::History> getHistory() { DARABONBA_PTR_GET(history_, vector<InvokeAIAgentRequest::History>) };
    inline InvokeAIAgentRequest& setHistory(const vector<InvokeAIAgentRequest::History> & history) { DARABONBA_PTR_SET_VALUE(history_, history) };
    inline InvokeAIAgentRequest& setHistory(vector<InvokeAIAgentRequest::History> && history) { DARABONBA_PTR_SET_RVALUE(history_, history) };


    // outputLanguage Field Functions 
    bool hasOutputLanguage() const { return this->outputLanguage_ != nullptr;};
    void deleteOutputLanguage() { this->outputLanguage_ = nullptr;};
    inline string getOutputLanguage() const { DARABONBA_PTR_GET_DEFAULT(outputLanguage_, "") };
    inline InvokeAIAgentRequest& setOutputLanguage(string outputLanguage) { DARABONBA_PTR_SET_VALUE(outputLanguage_, outputLanguage) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline InvokeAIAgentRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentName_ {};
    shared_ptr<map<string, string>> bizParams_ {};
    shared_ptr<vector<InvokeAIAgentRequest::History>> history_ {};
    shared_ptr<string> outputLanguage_ {};
    shared_ptr<string> prompt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
