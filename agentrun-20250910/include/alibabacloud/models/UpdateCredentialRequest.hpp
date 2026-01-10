// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateCredentialInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class UpdateCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateCredentialRequest() = default ;
    UpdateCredentialRequest(const UpdateCredentialRequest &) = default ;
    UpdateCredentialRequest(UpdateCredentialRequest &&) = default ;
    UpdateCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCredentialRequest() = default ;
    UpdateCredentialRequest& operator=(const UpdateCredentialRequest &) = default ;
    UpdateCredentialRequest& operator=(UpdateCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateCredentialInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateCredentialInput) };
    inline UpdateCredentialInput getBody() { DARABONBA_PTR_GET(body_, UpdateCredentialInput) };
    inline UpdateCredentialRequest& setBody(const UpdateCredentialInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateCredentialRequest& setBody(UpdateCredentialInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<UpdateCredentialInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
