// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELROUTERCREATEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODELROUTERCREATEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiContent20240611
{
namespace Models
{
  class ModelRouterCreateApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelRouterCreateApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
    };
    friend void from_json(const Darabonba::Json& j, ModelRouterCreateApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
    };
    ModelRouterCreateApiKeyRequest() = default ;
    ModelRouterCreateApiKeyRequest(const ModelRouterCreateApiKeyRequest &) = default ;
    ModelRouterCreateApiKeyRequest(ModelRouterCreateApiKeyRequest &&) = default ;
    ModelRouterCreateApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelRouterCreateApiKeyRequest() = default ;
    ModelRouterCreateApiKeyRequest& operator=(const ModelRouterCreateApiKeyRequest &) = default ;
    ModelRouterCreateApiKeyRequest& operator=(ModelRouterCreateApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline ModelRouterCreateApiKeyRequest& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


  protected:
    shared_ptr<int64_t> clientId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiContent20240611
#endif
