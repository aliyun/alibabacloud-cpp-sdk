// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApiKeyInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class UpdateApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    UpdateApiKeyRequest() = default ;
    UpdateApiKeyRequest(const UpdateApiKeyRequest &) = default ;
    UpdateApiKeyRequest(UpdateApiKeyRequest &&) = default ;
    UpdateApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApiKeyRequest() = default ;
    UpdateApiKeyRequest& operator=(const UpdateApiKeyRequest &) = default ;
    UpdateApiKeyRequest& operator=(UpdateApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const UpdateApiKeyInput & getBody() const { DARABONBA_PTR_GET_CONST(body_, UpdateApiKeyInput) };
    inline UpdateApiKeyInput getBody() { DARABONBA_PTR_GET(body_, UpdateApiKeyInput) };
    inline UpdateApiKeyRequest& setBody(const UpdateApiKeyInput & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline UpdateApiKeyRequest& setBody(UpdateApiKeyInput && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<UpdateApiKeyInput> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
