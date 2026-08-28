// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGENTSPECVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGENTSPECVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class CreateAgentSpecVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAgentSpecVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAgentSpecVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateAgentSpecVersionRequest() = default ;
    CreateAgentSpecVersionRequest(const CreateAgentSpecVersionRequest &) = default ;
    CreateAgentSpecVersionRequest(CreateAgentSpecVersionRequest &&) = default ;
    CreateAgentSpecVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAgentSpecVersionRequest() = default ;
    CreateAgentSpecVersionRequest& operator=(const CreateAgentSpecVersionRequest &) = default ;
    CreateAgentSpecVersionRequest& operator=(CreateAgentSpecVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(basedOnVersion, basedOnVersion_);
        DARABONBA_PTR_TO_JSON(targetVersion, targetVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(basedOnVersion, basedOnVersion_);
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
      virtual bool empty() const override { return this->basedOnVersion_ == nullptr
        && this->targetVersion_ == nullptr; };
      // basedOnVersion Field Functions 
      bool hasBasedOnVersion() const { return this->basedOnVersion_ != nullptr;};
      void deleteBasedOnVersion() { this->basedOnVersion_ = nullptr;};
      inline string getBasedOnVersion() const { DARABONBA_PTR_GET_DEFAULT(basedOnVersion_, "") };
      inline Body& setBasedOnVersion(string basedOnVersion) { DARABONBA_PTR_SET_VALUE(basedOnVersion_, basedOnVersion) };


      // targetVersion Field Functions 
      bool hasTargetVersion() const { return this->targetVersion_ != nullptr;};
      void deleteTargetVersion() { this->targetVersion_ = nullptr;};
      inline string getTargetVersion() const { DARABONBA_PTR_GET_DEFAULT(targetVersion_, "") };
      inline Body& setTargetVersion(string targetVersion) { DARABONBA_PTR_SET_VALUE(targetVersion_, targetVersion) };


    protected:
      // The existing version on which to base the draft.
      shared_ptr<string> basedOnVersion_ {};
      // The version number for the draft. If not specified, the version number is automatically incremented.
      shared_ptr<string> targetVersion_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateAgentSpecVersionRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateAgentSpecVersionRequest::Body) };
    inline CreateAgentSpecVersionRequest::Body getBody() { DARABONBA_PTR_GET(body_, CreateAgentSpecVersionRequest::Body) };
    inline CreateAgentSpecVersionRequest& setBody(const CreateAgentSpecVersionRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateAgentSpecVersionRequest& setBody(CreateAgentSpecVersionRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<CreateAgentSpecVersionRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
