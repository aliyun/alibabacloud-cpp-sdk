// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONLINESKILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ONLINESKILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class OnlineSkillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnlineSkillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, OnlineSkillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    OnlineSkillRequest() = default ;
    OnlineSkillRequest(const OnlineSkillRequest &) = default ;
    OnlineSkillRequest(OnlineSkillRequest &&) = default ;
    OnlineSkillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnlineSkillRequest() = default ;
    OnlineSkillRequest& operator=(const OnlineSkillRequest &) = default ;
    OnlineSkillRequest& operator=(OnlineSkillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(scope, scope_);
        DARABONBA_PTR_TO_JSON(skillVersion, skillVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(scope, scope_);
        DARABONBA_PTR_FROM_JSON(skillVersion, skillVersion_);
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
      virtual bool empty() const override { return this->scope_ == nullptr
        && this->skillVersion_ == nullptr; };
      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Body& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // skillVersion Field Functions 
      bool hasSkillVersion() const { return this->skillVersion_ != nullptr;};
      void deleteSkillVersion() { this->skillVersion_ = nullptr;};
      inline string getSkillVersion() const { DARABONBA_PTR_GET_DEFAULT(skillVersion_, "") };
      inline Body& setSkillVersion(string skillVersion) { DARABONBA_PTR_SET_VALUE(skillVersion_, skillVersion) };


    protected:
      // The operation scope. Valid values:
      // - skill: the entire Skill.
      // - version: a specified version.
      shared_ptr<string> scope_ {};
      // The Skill version number.
      shared_ptr<string> skillVersion_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const OnlineSkillRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, OnlineSkillRequest::Body) };
    inline OnlineSkillRequest::Body getBody() { DARABONBA_PTR_GET(body_, OnlineSkillRequest::Body) };
    inline OnlineSkillRequest& setBody(const OnlineSkillRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline OnlineSkillRequest& setBody(OnlineSkillRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<OnlineSkillRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
