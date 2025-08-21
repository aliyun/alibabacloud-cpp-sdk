// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPSECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPSECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppSecretResponseBodyAppSecret.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateAppSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppSecret, appSecret_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateAppSecretResponseBody() = default ;
    CreateAppSecretResponseBody(const CreateAppSecretResponseBody &) = default ;
    CreateAppSecretResponseBody(CreateAppSecretResponseBody &&) = default ;
    CreateAppSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppSecretResponseBody() = default ;
    CreateAppSecretResponseBody& operator=(const CreateAppSecretResponseBody &) = default ;
    CreateAppSecretResponseBody& operator=(CreateAppSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appSecret_ != nullptr
        && this->requestId_ != nullptr; };
    // appSecret Field Functions 
    bool hasAppSecret() const { return this->appSecret_ != nullptr;};
    void deleteAppSecret() { this->appSecret_ = nullptr;};
    inline const CreateAppSecretResponseBodyAppSecret & appSecret() const { DARABONBA_PTR_GET_CONST(appSecret_, CreateAppSecretResponseBodyAppSecret) };
    inline CreateAppSecretResponseBodyAppSecret appSecret() { DARABONBA_PTR_GET(appSecret_, CreateAppSecretResponseBodyAppSecret) };
    inline CreateAppSecretResponseBody& setAppSecret(const CreateAppSecretResponseBodyAppSecret & appSecret) { DARABONBA_PTR_SET_VALUE(appSecret_, appSecret) };
    inline CreateAppSecretResponseBody& setAppSecret(CreateAppSecretResponseBodyAppSecret && appSecret) { DARABONBA_PTR_SET_RVALUE(appSecret_, appSecret) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateAppSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the application secret.
    std::shared_ptr<CreateAppSecretResponseBodyAppSecret> appSecret_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
