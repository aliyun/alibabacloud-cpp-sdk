// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTSKILLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARCLAWAGENTSKILLSRESPONSEBODY_HPP_
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
  class UpdatePolarClawAgentSkillsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarClawAgentSkillsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Skills, skills_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarClawAgentSkillsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Skills, skills_);
    };
    UpdatePolarClawAgentSkillsResponseBody() = default ;
    UpdatePolarClawAgentSkillsResponseBody(const UpdatePolarClawAgentSkillsResponseBody &) = default ;
    UpdatePolarClawAgentSkillsResponseBody(UpdatePolarClawAgentSkillsResponseBody &&) = default ;
    UpdatePolarClawAgentSkillsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarClawAgentSkillsResponseBody() = default ;
    UpdatePolarClawAgentSkillsResponseBody& operator=(const UpdatePolarClawAgentSkillsResponseBody &) = default ;
    UpdatePolarClawAgentSkillsResponseBody& operator=(UpdatePolarClawAgentSkillsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->applicationId_ == nullptr && this->code_ == nullptr && this->message_ == nullptr && this->ok_ == nullptr && this->requestId_ == nullptr
        && this->skills_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline UpdatePolarClawAgentSkillsResponseBody& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline UpdatePolarClawAgentSkillsResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline UpdatePolarClawAgentSkillsResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdatePolarClawAgentSkillsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline UpdatePolarClawAgentSkillsResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePolarClawAgentSkillsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // skills Field Functions 
    bool hasSkills() const { return this->skills_ != nullptr;};
    void deleteSkills() { this->skills_ = nullptr;};
    inline const vector<string> & getSkills() const { DARABONBA_PTR_GET_CONST(skills_, vector<string>) };
    inline vector<string> getSkills() { DARABONBA_PTR_GET(skills_, vector<string>) };
    inline UpdatePolarClawAgentSkillsResponseBody& setSkills(const vector<string> & skills) { DARABONBA_PTR_SET_VALUE(skills_, skills) };
    inline UpdatePolarClawAgentSkillsResponseBody& setSkills(vector<string> && skills) { DARABONBA_PTR_SET_RVALUE(skills_, skills) };


  protected:
    // Agent ID
    shared_ptr<string> agentId_ {};
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The return code.
    shared_ptr<int32_t> code_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // Indicates whether the operation was successful.
    shared_ptr<bool> ok_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The updated skill list.
    shared_ptr<vector<string>> skills_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
