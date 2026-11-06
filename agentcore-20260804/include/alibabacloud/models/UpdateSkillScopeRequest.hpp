// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESKILLSCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESKILLSCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class UpdateSkillScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSkillScopeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSkillScopeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateSkillScopeRequest() = default ;
    UpdateSkillScopeRequest(const UpdateSkillScopeRequest &) = default ;
    UpdateSkillScopeRequest(UpdateSkillScopeRequest &&) = default ;
    UpdateSkillScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSkillScopeRequest() = default ;
    UpdateSkillScopeRequest& operator=(const UpdateSkillScopeRequest &) = default ;
    UpdateSkillScopeRequest& operator=(UpdateSkillScopeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(scope, scope_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(scope, scope_);
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
      virtual bool empty() const override { return this->scope_ == nullptr; };
      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline Body& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    protected:
      // The visibility scope.
      // 
      // This parameter is required.
      shared_ptr<string> scope_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateSkillScopeRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateSkillScopeRequest::Body) };
    inline UpdateSkillScopeRequest::Body getBody() { DARABONBA_PTR_GET(body_, UpdateSkillScopeRequest::Body) };
    inline UpdateSkillScopeRequest& setBody(const UpdateSkillScopeRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateSkillScopeRequest& setBody(UpdateSkillScopeRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<UpdateSkillScopeRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
