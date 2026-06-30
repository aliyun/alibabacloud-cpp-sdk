// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTTOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTTOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class UpdatePolarClawAgentToolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawAgentToolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tools, tools_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawAgentToolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tools, tools_);
    };
    UpdatePolarClawAgentToolsResponseBody() = default ;
    UpdatePolarClawAgentToolsResponseBody(const UpdatePolarClawAgentToolsResponseBody &) = default ;
    UpdatePolarClawAgentToolsResponseBody(UpdatePolarClawAgentToolsResponseBody &&) = default ;
    UpdatePolarClawAgentToolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawAgentToolsResponseBody() = default ;
    UpdatePolarClawAgentToolsResponseBody& operator=(const UpdatePolarClawAgentToolsResponseBody &) = default ;
    UpdatePolarClawAgentToolsResponseBody& operator=(UpdatePolarClawAgentToolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tools& obj) { 
        DARABONBA_PTR_TO_JSON(Allow, allow_);
        DARABONBA_PTR_TO_JSON(AlsoAllow, alsoAllow_);
        DARABONBA_PTR_TO_JSON(Deny, deny_);
        DARABONBA_PTR_TO_JSON(Profile, profile_);
      };
      friend void from_json(const Darabonba::Json& j, Tools& obj) { 
        DARABONBA_PTR_FROM_JSON(Allow, allow_);
        DARABONBA_PTR_FROM_JSON(AlsoAllow, alsoAllow_);
        DARABONBA_PTR_FROM_JSON(Deny, deny_);
        DARABONBA_PTR_FROM_JSON(Profile, profile_);
      };
      Tools() = default ;
      Tools(const Tools &) = default ;
      Tools(Tools &&) = default ;
      Tools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tools() = default ;
      Tools& operator=(const Tools &) = default ;
      Tools& operator=(Tools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allow_ == nullptr
        && this->alsoAllow_ == nullptr && this->deny_ == nullptr && this->profile_ == nullptr; };
      // allow Field Functions 
      bool hasAllow() const { return this->allow_ != nullptr;};
      void deleteAllow() { this->allow_ = nullptr;};
      inline const vector<string> & getAllow() const { DARABONBA_PTR_GET_CONST(allow_, vector<string>) };
      inline vector<string> getAllow() { DARABONBA_PTR_GET(allow_, vector<string>) };
      inline Tools& setAllow(const vector<string> & allow) { DARABONBA_PTR_SET_VALUE(allow_, allow) };
      inline Tools& setAllow(vector<string> && allow) { DARABONBA_PTR_SET_RVALUE(allow_, allow) };


      // alsoAllow Field Functions 
      bool hasAlsoAllow() const { return this->alsoAllow_ != nullptr;};
      void deleteAlsoAllow() { this->alsoAllow_ = nullptr;};
      inline const vector<string> & getAlsoAllow() const { DARABONBA_PTR_GET_CONST(alsoAllow_, vector<string>) };
      inline vector<string> getAlsoAllow() { DARABONBA_PTR_GET(alsoAllow_, vector<string>) };
      inline Tools& setAlsoAllow(const vector<string> & alsoAllow) { DARABONBA_PTR_SET_VALUE(alsoAllow_, alsoAllow) };
      inline Tools& setAlsoAllow(vector<string> && alsoAllow) { DARABONBA_PTR_SET_RVALUE(alsoAllow_, alsoAllow) };


      // deny Field Functions 
      bool hasDeny() const { return this->deny_ != nullptr;};
      void deleteDeny() { this->deny_ = nullptr;};
      inline const vector<string> & getDeny() const { DARABONBA_PTR_GET_CONST(deny_, vector<string>) };
      inline vector<string> getDeny() { DARABONBA_PTR_GET(deny_, vector<string>) };
      inline Tools& setDeny(const vector<string> & deny) { DARABONBA_PTR_SET_VALUE(deny_, deny) };
      inline Tools& setDeny(vector<string> && deny) { DARABONBA_PTR_SET_RVALUE(deny_, deny) };


      // profile Field Functions 
      bool hasProfile() const { return this->profile_ != nullptr;};
      void deleteProfile() { this->profile_ = nullptr;};
      inline string getProfile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
      inline Tools& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    protected:
      // The list of explicitly allowed tools.
      shared_ptr<vector<string>> allow_ {};
      // The list of additionally allowed tools.
      shared_ptr<vector<string>> alsoAllow_ {};
      // The list of denied tools.
      shared_ptr<vector<string>> deny_ {};
      // The tool profile.
      shared_ptr<string> profile_ {};
    };

    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->code_ == nullptr && this->message_ == nullptr && this->ok_ == nullptr && this->requestId_ == nullptr
        && this->tools_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdatePolarClawAgentToolsResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawAgentToolsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdatePolarClawAgentToolsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdatePolarClawAgentToolsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline UpdatePolarClawAgentToolsResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePolarClawAgentToolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tools Field Functions 
    bool hasTools() const { return this->tools_ != nullptr;};
    void deleteTools() { this->tools_ = nullptr;};
    inline const UpdatePolarClawAgentToolsResponseBody::Tools & getTools() const { DARABONBA_PTR_GET_CONST(tools_, UpdatePolarClawAgentToolsResponseBody::Tools) };
    inline UpdatePolarClawAgentToolsResponseBody::Tools getTools() { DARABONBA_PTR_GET(tools_, UpdatePolarClawAgentToolsResponseBody::Tools) };
    inline UpdatePolarClawAgentToolsResponseBody& setTools(const UpdatePolarClawAgentToolsResponseBody::Tools & tools) { DARABONBA_PTR_SET_VALUE(tools_, tools) };
    inline UpdatePolarClawAgentToolsResponseBody& setTools(UpdatePolarClawAgentToolsResponseBody::Tools && tools) { DARABONBA_PTR_SET_RVALUE(tools_, tools) };


  protected:
    // Agent ID
    shared_ptr<string> agentId_ {};
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The status code.
    shared_ptr<int32_t> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the operation was successful.
    shared_ptr<bool> ok_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The updated tool configuration.
    shared_ptr<UpdatePolarClawAgentToolsResponseBody::Tools> tools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
