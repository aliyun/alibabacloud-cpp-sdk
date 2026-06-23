// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Agent, agent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Agent, agent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAgentResponseBody() = default ;
    CreateAgentResponseBody(const CreateAgentResponseBody &) = default ;
    CreateAgentResponseBody(CreateAgentResponseBody &&) = default ;
    CreateAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentResponseBody() = default ;
    CreateAgentResponseBody& operator=(const CreateAgentResponseBody &) = default ;
    CreateAgentResponseBody& operator=(CreateAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Agent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Agent& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Agent& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Agent() = default ;
      Agent(const Agent &) = default ;
      Agent(Agent &&) = default ;
      Agent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Agent() = default ;
      Agent& operator=(const Agent &) = default ;
      Agent& operator=(Agent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->gmtModifiedTime_ == nullptr && this->name_ == nullptr; };
      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Agent& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Agent& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Agent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      // The creation time (millisecond timestamp).
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtCreateTime_ {};
      // The last modification time (millisecond timestamp).
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mmZ
      shared_ptr<string> gmtModifiedTime_ {};
      // The name of the Agent.
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->agent_ == nullptr
        && this->requestId_ == nullptr; };
    // agent Field Functions 
    bool hasAgent() const { return this->agent_ != nullptr;};
    void deleteAgent() { this->agent_ = nullptr;};
    inline const CreateAgentResponseBody::Agent & getAgent() const { DARABONBA_PTR_GET_CONST(agent_, CreateAgentResponseBody::Agent) };
    inline CreateAgentResponseBody::Agent getAgent() { DARABONBA_PTR_GET(agent_, CreateAgentResponseBody::Agent) };
    inline CreateAgentResponseBody& setAgent(const CreateAgentResponseBody::Agent & agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };
    inline CreateAgentResponseBody& setAgent(CreateAgentResponseBody::Agent && agent) { DARABONBA_PTR_SET_RVALUE(agent_, agent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the created Agent.
    shared_ptr<CreateAgentResponseBody::Agent> agent_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
