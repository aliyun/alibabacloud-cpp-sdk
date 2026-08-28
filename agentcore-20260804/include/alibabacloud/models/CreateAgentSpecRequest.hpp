// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateAgentSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateAgentSpecRequest() = default ;
    CreateAgentSpecRequest(const CreateAgentSpecRequest &) = default ;
    CreateAgentSpecRequest(CreateAgentSpecRequest &&) = default ;
    CreateAgentSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentSpecRequest() = default ;
    CreateAgentSpecRequest& operator=(const CreateAgentSpecRequest &) = default ;
    CreateAgentSpecRequest& operator=(CreateAgentSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(agentSpecName, agentSpecName_);
        DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(agentSpecName, agentSpecName_);
        DARABONBA_PTR_FROM_JSON(targetVersion, targetVersion_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentSpecName_ == nullptr
        && this->targetVersion_ == nullptr; };
      // agentSpecName Field Functions 
      bool hasAgentSpecName() const { return this->agentSpecName_ != nullptr;};
      void deleteAgentSpecName() { this->agentSpecName_ = nullptr;};
      inline string getAgentSpecName() const { DARABONBA_PTR_GET_DEFAULT(agentSpecName_, "") };
      inline Body& setAgentSpecName(string agentSpecName) { DARABONBA_PTR_SET_VALUE(agentSpecName_, agentSpecName) };


      // targetVersion Field Functions 
      bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
      void deleteTargetVersion() { this->targetVersion_ = nullptr;};
      inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
      inline Body& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


    protected:
      // The unique name of the AgentSpec.
      // 
      // This parameter is required.
      shared_ptr<string> agentSpecName_ {};
      // The draft version number. If not specified, the default value is 0.0.1.
      shared_ptr<string> targetVersion_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateAgentSpecRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateAgentSpecRequest::Body) };
    inline CreateAgentSpecRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateAgentSpecRequest::Body) };
    inline CreateAgentSpecRequest& setBody(const CreateAgentSpecRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateAgentSpecRequest& setBody(CreateAgentSpecRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<CreateAgentSpecRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
