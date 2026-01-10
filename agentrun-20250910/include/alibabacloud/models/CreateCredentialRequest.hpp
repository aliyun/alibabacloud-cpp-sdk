// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCredentialInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class CreateCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateCredentialRequest() = default ;
    CreateCredentialRequest(const CreateCredentialRequest &) = default ;
    CreateCredentialRequest(CreateCredentialRequest &&) = default ;
    CreateCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCredentialRequest() = default ;
    CreateCredentialRequest& operator=(const CreateCredentialRequest &) = default ;
    CreateCredentialRequest& operator=(CreateCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateCredentialInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateCredentialInput) };
    inline CreateCredentialInput getBody() { DARABONBA_PTR_GET(body_, CreateCredentialInput) };
    inline CreateCredentialRequest& setBody(const CreateCredentialInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateCredentialRequest& setBody(CreateCredentialInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<CreateCredentialInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
