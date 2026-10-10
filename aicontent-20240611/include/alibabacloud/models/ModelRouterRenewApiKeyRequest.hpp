// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERRENEWAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERRENEWAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterRenewApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterRenewApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(expireAt, expireAt_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterRenewApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(expireAt, expireAt_);
    };
    ModelRouterRenewApiKeyRequest() = default ;
    ModelRouterRenewApiKeyRequest(const ModelRouterRenewApiKeyRequest &) = default ;
    ModelRouterRenewApiKeyRequest(ModelRouterRenewApiKeyRequest &&) = default ;
    ModelRouterRenewApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterRenewApiKeyRequest() = default ;
    ModelRouterRenewApiKeyRequest& operator=(const ModelRouterRenewApiKeyRequest &) = default ;
    ModelRouterRenewApiKeyRequest& operator=(ModelRouterRenewApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expireAt_ == nullptr; };
    // expireAt Field Functions 
    bool hasExpireAt() const { return this->expireAt_ != nullptr;};
    void deleteExpireAt() { this->expireAt_ = nullptr;};
    inline string getExpireAt() const { DARABONBA_PTR_GET_DEFAULT(expireAt_, "") };
    inline ModelRouterRenewApiKeyRequest& setExpireAt(string expireAt) { DARABONBA_PTR_SET_VALUE(expireAt_, expireAt) };


  protected:
    // The new expiration time in RFC 3339 format. The time must be later than the current time. If this parameter is not specified or is set to null, the API key remains valid indefinitely. This parameter only modifies the validity period and does not change the enabled or disabled status.
    shared_ptr<string> expireAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
