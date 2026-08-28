// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITAGENTSPECVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITAGENTSPECVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class SubmitAgentSpecVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAgentSpecVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAgentSpecVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    SubmitAgentSpecVersionRequest() = default ;
    SubmitAgentSpecVersionRequest(const SubmitAgentSpecVersionRequest &) = default ;
    SubmitAgentSpecVersionRequest(SubmitAgentSpecVersionRequest &&) = default ;
    SubmitAgentSpecVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAgentSpecVersionRequest() = default ;
    SubmitAgentSpecVersionRequest& operator=(const SubmitAgentSpecVersionRequest &) = default ;
    SubmitAgentSpecVersionRequest& operator=(SubmitAgentSpecVersionRequest &&) = default ;
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
    inline const SubmitAgentSpecVersionRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SubmitAgentSpecVersionRequest::Body) };
    inline SubmitAgentSpecVersionRequest::Body getBody() { DARABONBA_PTR_GET(body_, SubmitAgentSpecVersionRequest::Body) };
    inline SubmitAgentSpecVersionRequest& setBody(const SubmitAgentSpecVersionRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SubmitAgentSpecVersionRequest& setBody(SubmitAgentSpecVersionRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    // The request body.
    shared_ptr<SubmitAgentSpecVersionRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
