// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSKILLVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSKILLVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class SubmitSkillVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSkillVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSkillVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SubmitSkillVersionRequest() = default ;
    SubmitSkillVersionRequest(const SubmitSkillVersionRequest &) = default ;
    SubmitSkillVersionRequest(SubmitSkillVersionRequest &&) = default ;
    SubmitSkillVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSkillVersionRequest() = default ;
    SubmitSkillVersionRequest& operator=(const SubmitSkillVersionRequest &) = default ;
    SubmitSkillVersionRequest& operator=(SubmitSkillVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        (void)j; (void)obj; 
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        (void)j; (void)obj; 
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
      virtual bool empty() const override { return true; };
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SubmitSkillVersionRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SubmitSkillVersionRequest::Body) };
    inline SubmitSkillVersionRequest::Body getBody() { DARABONBA_PTR_GET(body_, SubmitSkillVersionRequest::Body) };
    inline SubmitSkillVersionRequest& setBody(const SubmitSkillVersionRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SubmitSkillVersionRequest& setBody(SubmitSkillVersionRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<SubmitSkillVersionRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
