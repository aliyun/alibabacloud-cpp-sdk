// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEBUGMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEBUGMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DebugModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DebugModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DebugModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DebugModelRequest() = default ;
    DebugModelRequest(const DebugModelRequest &) = default ;
    DebugModelRequest(DebugModelRequest &&) = default ;
    DebugModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DebugModelRequest() = default ;
    DebugModelRequest& operator=(const DebugModelRequest &) = default ;
    DebugModelRequest& operator=(DebugModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_PTR_TO_JSON(prompt, prompt_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_PTR_FROM_JSON(prompt, prompt_);
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
      virtual bool empty() const override { return this->prompt_ == nullptr; };
      // prompt Field Functions 
      bool hasPrompt() const { return this->prompt_ != nullptr;};
      void deletePrompt() { this->prompt_ = nullptr;};
      inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
      inline Body& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    protected:
      // This parameter is required.
      shared_ptr<string> prompt_ {};
    };

    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DebugModelRequest::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, DebugModelRequest::Body) };
    inline DebugModelRequest::Body getBody() { DARABONBA_PTR_GET(body_, DebugModelRequest::Body) };
    inline DebugModelRequest& setBody(const DebugModelRequest::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DebugModelRequest& setBody(DebugModelRequest::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<DebugModelRequest::Body> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
