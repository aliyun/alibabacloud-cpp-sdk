// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApiKeyInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    CreateApiKeyRequest() = default ;
    CreateApiKeyRequest(const CreateApiKeyRequest &) = default ;
    CreateApiKeyRequest(CreateApiKeyRequest &&) = default ;
    CreateApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApiKeyRequest() = default ;
    CreateApiKeyRequest& operator=(const CreateApiKeyRequest &) = default ;
    CreateApiKeyRequest& operator=(CreateApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const CreateApiKeyInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, CreateApiKeyInput) };
    inline CreateApiKeyInput getBody() { DARABONBA_PTR_GET(body_, CreateApiKeyInput) };
    inline CreateApiKeyRequest& setBody(const CreateApiKeyInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline CreateApiKeyRequest& setBody(CreateApiKeyInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<CreateApiKeyInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
