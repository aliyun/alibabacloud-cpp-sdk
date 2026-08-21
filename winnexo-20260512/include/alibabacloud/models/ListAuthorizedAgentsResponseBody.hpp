// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDAGENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDAGENTSRESPONSEBODY_HPP_
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
  class ListAuthorizedAgentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedAgentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(agentNames, agentNames_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedAgentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(agentNames, agentNames_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListAuthorizedAgentsResponseBody() = default ;
    ListAuthorizedAgentsResponseBody(const ListAuthorizedAgentsResponseBody &) = default ;
    ListAuthorizedAgentsResponseBody(ListAuthorizedAgentsResponseBody &&) = default ;
    ListAuthorizedAgentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedAgentsResponseBody() = default ;
    ListAuthorizedAgentsResponseBody& operator=(const ListAuthorizedAgentsResponseBody &) = default ;
    ListAuthorizedAgentsResponseBody& operator=(ListAuthorizedAgentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentNames_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // agentNames Field Functions 
    bool hasAgentNames() const { return this->agentNames_ != nullptr;};
    void deleteAgentNames() { this->agentNames_ = nullptr;};
    inline const vector<string> & getAgentNames() const { DARABONBA_PTR_GET_CONST(agentNames_, vector<string>) };
    inline vector<string> getAgentNames() { DARABONBA_PTR_GET(agentNames_, vector<string>) };
    inline ListAuthorizedAgentsResponseBody& setAgentNames(const vector<string> & agentNames) { DARABONBA_PTR_SET_VALUE(agentNames_, agentNames) };
    inline ListAuthorizedAgentsResponseBody& setAgentNames(vector<string> && agentNames) { DARABONBA_PTR_SET_RVALUE(agentNames_, agentNames) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAuthorizedAgentsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAuthorizedAgentsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizedAgentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The agent names.
    shared_ptr<vector<string>> agentNames_ {};
    // The status code.
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
